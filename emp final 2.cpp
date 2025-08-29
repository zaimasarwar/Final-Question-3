#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Employee : public Person {
private:
    int empID;
    double salary;
public:
    Employee(string n, int a, int id, double s) : Person(n, a) {
        empID = id;
        salary = s;
    }
    void updateSalary(double newSalary) {
        salary = newSalary;
    }
    void showEmployee() {
        showPerson();
        cout << "Employee ID: " << empID << ", Salary: " << salary << endl;
    }
};
int main() {
    Employee e1("Amina", 35, 101, 70000);
    Employee e2("Sania", 29, 102, 57000);
    Employee e3("fatima", 60, 103, 90000);
    cout << "--- Employee Details ---" << endl;
    e1.showEmployee();
    e2.showEmployee();
    e3.showEmployee();
    cout << "\nUpdating salary of Employee 2 (Sana)...\n";
    e2.updateSalary(65000);
    cout << "\n--- Updated Employee Details ---" << endl;
    e2.showEmployee();
    return 0;
}

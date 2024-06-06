// C++ standard library
#include <iostream>
using namespace std;

// Declaring the name of the class
class Person {
    // Identifier
    public:
        // Variable
        string name;
        string nid;

        string getName() {
            return name;
        }

        //Method
        void increaseAge() {
            age = age + 1;
        }
        
        // Parameter percentage
        void increaseSalary(double percentage) {
            double increaseAmount = salary * (percentage / 100);
            totalSalary += increaseAmount;
            increaseAmount += totalSalary; 
        }

        double getTotalSalary() {
            return totalSalary;
        }

        void printTotalSalary() {
            cout << "Salary of the user after increment: " << totalSalary <<endl;
        }

        // Constructor initializes the class
        Person(string n, string nID, double sal, int ag) {
            name = n;
            nid = nID;
            salary = sal;
            age = ag;
            totalSalary = salary;
        }

        double getSalary() {
            return salary;
        }

        void printPerson() {
            cout << "Name of the user: " << name << endl;
            cout << "NID: " << nid << endl;
            cout << "Age: " << age << endl;
        }

    private:
        double salary;
        int age;
        double totalSalary;
};

class Male: public Person {
    public: 
        string maleID;
        Male(string n, string nID, double sal, int ag, string m) : Person(n, nID, sal, ag), maleID(m) {
            
        }
        void printPersonWithPersonID(){
            cout << "Name of the user: " << name << endl;
            cout << "NID: " << nid << endl;
            cout << "Male ID: " << maleID << endl;
        }
};

int main() {
    Person sx = Person("Sandy", "28ye3237809124", 20000, 15);
    sx.printPerson();
    double salaryOfSx = sx.getSalary();
    cout << "Salary of the user: " << salaryOfSx << endl;
    sx.increaseSalary(10);
    sx.printTotalSalary();
    double totalSalaryOfSx = sx.getTotalSalary();
    totalSalaryOfSx = totalSalaryOfSx + 100;
    cout << "Salary of the user after another 100 increment: " << totalSalaryOfSx << endl;
    // Male Andy = Male("Andy", "1234", 10000, 20, "SysAdmin");
    // Andy.printPersonWithPersonID();
    // double salary = Andy.getSalary();
    // cout << "Salary of " << Andy.name << "is " << salary << endl; 
    // Andy.increaseSalary(10);
    // double salaryWithBonus = Andy.getTotalSalary();
    // cout << "Salary of " << Andy.name << "with bonus is " << salaryWithBonus << endl; 
    return 0;
}
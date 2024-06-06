// C++ standard library
#include <iostream>
using namespace std;

// Declaring the name of the class
class Product {
    // Identifier
    public:
        // Variable
        string name;
        string id;
        double price;
        int totalAvailableProducts;
        string brandName;
        

        Product(string na, string idd, double pr, int tot, string br) {
            name = na;
            id = idd;
            price = pr;
            totalAvailableProducts = tot;
            brandName = br;
        }

        void sellProduct(int amount) {
            totalAvailableProducts = totalAvailableProducts - amount;
        }

        void showProduct() {
            cout << "Name of the product: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Brand Name: " << brandName << endl;
            cout << "Price: " << price << endl;
            cout << "Total Available Products: " << totalAvailableProducts << endl;
        }

        void editProduct(double p, int totalAV) {
            price = p;
            totalAvailableProducts = totalAV;
        }

        //Overdrive
        void editProduct(string x, double p, int totalAV) {
            name = x; 
            price = p;
            totalAvailableProducts = totalAV;
        }

        double discountedRate(double x) {
            double priceDiscount = price * (x/100);
            double updatedPrice = price - priceDiscount;
            return updatedPrice;
        }

        int getAvailableProducts() {
            return totalAvailableProducts;
        }
};

class ExtendedProduct : public Product {
public:
    string segment;


    ExtendedProduct(string na, string idd, double pr, int tot, string br, string seg)
        : Product(na, idd, pr, tot, br), segment(seg) {}
    // Override
    void showProduct() { 
        Product::showProduct();
        cout << "Segment: " << segment << endl;
    }

};


int main() {
    ExtendedProduct x = ExtendedProduct("Mac", "13241", 100, 100, "Macin", "New");

    x.showProduct();
    // cout << "Salary of the user after another 100 increment: " << totalSalaryOfSx << endl;
    // Male Andy = Male("Andy", "1234", 10000, 20, "SysAdmin");
    // Andy.printPersonWithPersonID();
    // double salary = Andy.getSalary();
    // cout << "Salary of " << Andy.name << "is " << salary << endl; 
    // Andy.increaseSalary(10);
    // double salaryWithBonus = Andy.getTotalSalary();
    // cout << "Salary of " << Andy.name << "with bonus is " << salaryWithBonus << endl; 
    return 0;
}
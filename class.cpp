#include <iostream>
#include <string>

class Driver {
private:
    std::string name;
    int age;

public:
    Driver(std::string driverName, int driverAge) : name(driverName), age(driverAge) {}

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

class Car {
private:
    std::string make;
    std::string model;
    Driver driver;

public:
    Car(std::string carMake, std::string carModel, Driver carDriver) : make(carMake), model(carModel), driver(carDriver) {}

    std::string getMake() const {
        return make;
    }

    std::string getModel() const {
        return model;
    }

    const Driver& getDriver() const {
        return driver;
    }
};

int main() {
    Driver driver("John Doe", 30);
    Car car("Toyota", "Camry", driver);

    std::cout << "Car Details:" << std::endl;
    std::cout << "Make: " << car.getMake() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Driver Name: " << car.getDriver().getName() << std::endl;
    std::cout << "Driver Age: " << car.getDriver().getAge() << std::endl;

    return 0;
}

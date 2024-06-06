#include <iostream>
#include <string>

class Chair {

private: 
    std::string model;

public:
    int leg;
    std::string name;

    Chair(std::string chairModel, std::string chairName, int chairLeg): model(chairModel), name(chairName), leg(chairLeg) {}

    std::string getModel() const {
        return model;
    }

    void setModel(std::string mod) {
        model = mod;
    }
};

int main() {
    Chair nx("SX", "Rome", 4); 
    std::cout << "Chair Details:" << std::endl;
    std::cout << "Model: " << nx.getModel() << std::endl;
    nx.name = "Toyota";
    std::cout << "Name: " << nx.name << std::endl;
    

    return 0;
}
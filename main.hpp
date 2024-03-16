#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream> 
#include <fstream>
#include <string> 
using namespace std; 

int writeFile(); 
int readFile();

int writeFile() {
    int numEmployees; 
    std::cout << "Enter the number of employees: "; 
    std::cin >> numEmployees; 

    std::ofstream outFile("employee.txt"); 
    if (!outFile) {
        std:: cerr << "Error opening file for writing." << std::endl; 
        return 0; 
    }

    for (int i = 0; i < numEmployees; i++) {
        int id; 
        string name, department; 
        double salary; 

        std::cout << "Enter employee ID, name, department, and salary: "; 
        std::cin >> id >> name >> department >> salary; 

        outFile << id << " " << name << " " << department << " " << salary << std::endl; 

    }

    outFile.close(); 
    return numEmployees; 
}

int readFile() {
    int numEmployees = 0; 
    std::ifstream inFile("employee.txt"); 
    if (!inFile) {
        std::cerr << "Error opening file for reading." << std::endl; 
        return 0; 
    }

    std::string line; 
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl; 
        numEmployees++
    }

    inFile.close(); 
    return numEmployees; 
}

#endif 
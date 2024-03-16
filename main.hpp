#ifndef MAIN_HPP 
#define MAIN_HPP 

#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 

int writeFile(const string& filename) {
    ofstream file(filename); 
    if (!file.is_open()) {
        cout << "Error opening file for writing\n"; 
        return 0; 
    }

    int numEmployees; 
    cout << "Enter the number of employees: "; 
    cin >> numEmployees; 
    cin.ignore(); 

    int empId; 
    string empName, empDept; 
    double empSalary; 

    cout << "Enter employee info (id, name, departmnet, salary) for " << numEmployees << " employees:\n"; 

    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << i + 1 << ": "; 
        cin >> empId >> empName >> empDept >> empSalary; 
        file << empId << " " << empName << " " << empDept << " " << empSalary << endl; 
    }

    file.close(); 
    return numEmployees; 
}

int readFile(const string& filename) {
    ifstream file(filename); 
    if (!file.is_open()) {
        cout << "Error opening file for reading\n"; 
        return 0; 
    }

    int empId; 
    string empName, empDept; 
    double empSalary; 
    int numEmployees = 0; 

    cout << "Employee info from file:\n"; 

    while (file >> empId >> empName >> empDept >> empSalary) {
        cout << "ID: " << empId << ", Name: " << empName << ", Department: " << empDept << ", Salary: " << empSalary << endl; 
        numEmployees++; 
    }

    file.close(); 
    return numEmployees; 
}

#endif 
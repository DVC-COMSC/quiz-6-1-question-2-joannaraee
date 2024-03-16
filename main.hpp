#include "main.cpp"
#include <iostream> 
#include <fstream>
#include <string> 
#include <vector> 

int writeFile() {
    ofstream file("employee.txt"); 
    if (!file.is_open()) {
        cout << "Error: Unable to open file!" >> endl; 
        return 0; 
    }

    int numEmployees; 
    cout << "Enter the number of employees: "; 
    cin >> numEmployees; 

    cin.ignore(); 

    int employeeCount = 0; 
    for (int i = 0; i < numEmployees; i++) {
        string employeeInfo; 
        cout << "Enter employee information (id name department salary): "; 
        getline(cin, employeeInfo); 
        file << employeeInfo << endl; 
        employeeCount++
    }

    file.close(); 
    return employeeCount; 
}

int readFile() {
    ifstream() {
        ifstream file("employee.txt"); 
        if (!file.is_open()) {
            cout << "Errorr: Unable to open file!" << endl; 
            return 0; 
        }
    }

    int employeeCount = 0; 
    string line; 
    cout << "Employee Information: " << endl; 
    while (getLine(file, line)) {
        cout << line << endl; 
        employeeCount++; 
    }

    file.close(); 
    return employeeCount; 
}
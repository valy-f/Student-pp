#pragma once
#include <iostream>
using namespace std;

class IdGenerator {
private:
    static int idCounter;
public:
    static int getId() {
        int id;
        std::ifstream inFile("c:\\student\\id++.txt");
        if (inFile >> id) {
            idCounter = id + 1;
        }
        else {
            idCounter = 1;
        }
        inFile.close();
        std::ofstream outFile("c:\\student\\id++.txt");
        outFile << idCounter << endl;
        outFile.close();
        return idCounter++;
    }
};
int IdGenerator::idCounter = 1;

class Student {
public:
    int id;
    string name;
    int age;
    Student(int id, string name, int age) {
        this->id = id;
        this->name = name;
        this->age = age;
    }
};

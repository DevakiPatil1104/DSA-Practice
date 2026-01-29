#include<iostream>
#include<string.h>
using namespace std;

class Student {
    string name; // automatically turns out to be private
    float cgpa;

    public:
    int roll_no;

    void getPercentage(){
        cout << (cgpa * 10) << endl;
    }

    // Setters
    void setName(string nameVal){
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    // Getters:
    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }
};

int main() {
    Student s1;

    s1.setName("devaki");
    cout << s1.getName() << endl;
    return 0;
}
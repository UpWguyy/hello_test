#include <iostream>
#include <cstring>

using namespace std;

class Student{
    int age;
    string name;
    private:
        Student(int a, string n){a = age; n = name;}
        void print(const Student& A){
            cout << "The name of student is" << A.name;
        }
}

int main(){
    int x = 9;
    //Student A(5,"Nikos");

    cout << x;
}
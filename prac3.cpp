#include<iostream>
using namespace std;

class Person{
    public:
    int age;

    Person(){
        cout<<"Constructor with no args "<<endl;
    }
    Person(int a) {
        cout<<"Constructor with args"<< a << endl;
    }

    void display() {
        cout<<"Age is "<< age << endl;
    }
};

int main()
{
    Person p1(10);

    Person p2(20);
    p2=p1;
}
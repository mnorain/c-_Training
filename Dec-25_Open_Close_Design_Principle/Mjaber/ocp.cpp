// C++ program to calculate the area of a square and a circle

 

#include <iostream>

using namespace std;

 

// Abstract class

class Person {

   public:

       virtual  void getInfo(void)=0;// { cout<<"Try agian";} ; // pure viual function declared

    };

 

// Derived class

class Syrian : public Person {

   public:

    void getInfo (void) {

          cout<<"the person Nationality is Syrian "<<endl;

    }

};

 

class American : public Person {

   public:

    void getInfo(void) {

           cout<<"the person Nationality is American"<<endl;

    }

};

class DefautNation : public Person {

   public:

    void getInfo(void) {

           cout<<"Try again by entering A and S"<<endl;

    }

};
 

int main() {

    Person* person_Pointer;

    char N;     // N for Nationality

    cout <<"enter nationality"<< endl;

    cin >> N;

    switch (N)
    {
        case 'S':
        person_Pointer = new Syrian;
        break;

        case 'A':
        person_Pointer = new American;
        break;

        default:
        personPointer = new DefautNation;

        }

    person_Pointer ->getInfo();

    return 0;

}
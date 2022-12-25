#include<iostream>

//This is an abstract class because it has a pure virtual function
class Person{
    public:
        virtual void speak(void) = 0;
};

class Sudanese:public Person{
    public:
        void speak(void){
            std::cout<<"I speak sudanese ya hnai"<<std::endl;
        }
};

class Egyptian:public Person{
    public:
        void speak(void){
            std::cout<<"I speak Egyption"<<std::endl;
        }
};


class Arab:public Person{
    public:
        void speak(void){
            std::cout<<"I speak Arabic"<<std::endl;
        }
};

int main(){

    Person* person_pointer;
    char nationality; 
    std::cout<<"Enter nationality ... "<<std::endl;
    std::cin>>nationality;
    switch(nationality){
        case 's':
            person_pointer = new Sudanese;
            break;
        
        case 'e':
            person_pointer = new Egyptian;
            break;
        
        default: 
            std::cout<<"The input nationality is invalid, we are going to create a default arabic person";
            std::cout<<std::endl;
            person_pointer= new Arab;
            break;
    }

    person_pointer->speak();
    return 0;
}
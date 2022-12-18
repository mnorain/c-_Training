#include<iostream>

class Person{
    public:
        std::string name;
        int age;
        std::string address;
        std::string work;
               
        virtual void printInfo(){
            std::cout<<" The name: "<<name<<std::endl;
            std::cout<<" The age: "<<age<<std::endl;
            std::cout<<" The address: "<<address<<std::endl;
            std::cout<<" Going To : "<<work<<std::endl;
        }
        virtual void workloc(){std::cout<<" Going To Home "<<std::endl;};
};

class Doctor: public Person{
    public:

        Doctor(std::string nameX,int ageX,std::string addresX){
            name=nameX;
            age=ageX;
            address=addresX;
            workloc();
        }    
        void workloc(){
            work= "Hospital";
        }   
};

class Engineer: public Person{
    public:

        Engineer(std::string nameX,int ageX,std::string addresX){
            name=nameX;
            age=ageX;
            address=addresX;
            workloc();
        }  
         void workloc(){
            work= "Factory"; 
        }   
};


int main(){

Doctor person_doctor("Ahmed",40,"khartoum");
Engineer person_engineer ("Mohammed",39,"Bahry");

person_doctor.printInfo();
person_engineer.printInfo();

return 0;
}
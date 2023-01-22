#include<iostream>
class Address{
    public:
    std::string country;
    std::string town;
    std::string state;
    int street;

    
    Address(std::string country, std::string state, std::string town, int street):country(country),
    town(town), state(state), street(street){}

    void print(void){
        std::cout<<"Country: "<<country<<" State: "<<state<<" Town: "<<town<<" Street: "<<street<<std::endl;
    }
};

class Student{
    public:
    std::string name;
    std::string university;
    std::string department;
    std::string nationality;
    int year_of_addmission;
    Address* address;
    
    Student(std::string name, std::string university, std::string department, std::string nationality \
    , int year_of_addmission, Address* address):name(name), university(university), department(department),\
    nationality(nationality), year_of_addmission(year_of_addmission), address(address){}

    Student(const Student& other_student):name(other_student.name), university(other_student.university), \
    department(other_student.department), nationality(other_student.nationality), \
    year_of_addmission(other_student.year_of_addmission), address(new Address{other_student.address->country,\
    other_student.address->state,other_student.address->town, other_student.address->street}){}

    void print(void){
        std::cout<<"Name: "<<name<<"University: "<<university<<" Department: "<<department<<" Nationality: "<<nationality<<\
        " Year of addmission: "<<year_of_addmission<<" Address: ";
        address->print();
    }
};
int main(){
    Student tamir("Tamir Abdelgadir ", "UofK", "Electrical", "Sudanese", 2000, new Address{"Sudan", "Khartoum", "Jabra", 56});
    Student taha= tamir;
    taha.name= "Taha Yousif";
    taha.address->town = "Omdurman";
    taha.address->street = 23;
    taha.print();
    std::cout<<std::endl;
    tamir.print();

    return 0;
}
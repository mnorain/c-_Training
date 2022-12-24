#include<iostream>

// p 
// 2333322    2333777

// [34]       [122]         
class Car{
    public:
        std::string name;
        int numb;

        Car(std::string n, int number){
            name = n;
            numb = number;
        }

        void print_info(void){
            std::cout<<"The brand of this car is "<<name<<std::endl;
            std::cout<<"The number of the car is "<<numb<<std::endl;
        }
};



int main(){
    Car my_car("Sonata", 342332); //Compilation time
    Car* car_p = new Car("Accent", 222); // Running time
    my_car.print_info();
    car_p->print_info();
    return 0;
}

// Compilation time
//RAM
// x [][][][]
// p [][][][]
//
//
//

//Running
// new 
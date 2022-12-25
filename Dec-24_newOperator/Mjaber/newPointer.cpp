#include<iostream>

using namespace std;

class Car{
    public:
        string brandname;
        string carModel; 
        int carNumber;

        Car(string name, string model, int number){
            brandname = name;
            carModel = model;
            carNumber = number;
        }

        void print_info(void){
            cout<<"The brand of this car is "<<brandname<<endl;
            cout<<"The Model of this car is "<<carModel<<endl;
            cout<<"The number of the car is "<<carNumber<<endl;
        }
};



int main(){
    Car my_car("Hyundai", "Sonata", 342332); 
    Car* car_p = new Car("Hyundai","Accent", 222); 
    my_car.print_info();
    car_p->print_info();
    return 0;
}


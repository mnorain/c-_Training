#include <iostream>

using namespace std;

class univAddress{
public:
    string country; 
    string state;
    string Locality;
    string square;
    int year;


    univAddress (string country, string state,string Locality, string square, int year):country(country),state\
    (state),Locality(Locality),square(square),year(year){}

    void print (void){

        cout<<"Country is "<<country<<" state is "<<state<<"  Locality is "<<Locality<<" square is "<<square <<\
        " year is "<<year << endl;
        

    }
};

class student{
    public:
    string name;
    string department;
    string nationality;
    int admissionYear;
    univAddress* address;

    student (string name, string department,string nationality, int admissionYear, univAddress address):name(name),\
    department(department),nationality(nationality),admissionYear(admissionYear),address(& address){}
        //{address.country,address.state\
    , address.Locality,address.square,address.year}) {}//
    student(const student& newstudent):name(newstudent.name),department(newstudent.department),nationality(newstudent.nationality),\
    admissionYear(newstudent.admissionYear), address ( new univAddress {newstudent.address->country, newstudent.address->state\
    ,newstudent.address->Locality,newstudent.address->square,newstudent.address->year}) {}

    void print (void){

        cout<<" student name  "<<name<<"  department "<<department<<"  nationality "<<nationality\
        <<" addmissionYeare  "<< admissionYear<<" \n ";

        address->print();
    }

};

int main(){

    student tamir("Tamir omer","Electrical","Sudanese",2000, *new univAddress ("Sudan","khartoum","Khartoum","Sq 23",1898));
    //tamir.print();
    student Taha= tamir;
    Taha.name=("Taha Yousif");
    Taha.address->country = ("Eqypt");
    Taha.print();
    tamir.print();
    return 0;
}

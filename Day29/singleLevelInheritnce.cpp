#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    public:
    int speed;
    string color;
    // int numOfgears;
    int wheels;

    void start(){
        cout<<"Vehicle starts!!!"<<endl;
    }

    void applyBrakes(){
        cout<<"Applying Brake!!"<<endl;
    }
}

class Car: public vehicle{
    public:
    string brandName;

    Car(int speed,string color,int wheels,string brandName){
        this->speed = speed;
        this->color = color;
        this->wheels = wheels;
        this->brandName = brandName;
    }

    void openSunroof(){
        cout<<"Opening Sunroof !!!"<<endl;
    }

    void display(){
        cout<<"speed: "<<speed<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"wheels: "<<wheels<<endl;
        cout<<"brandName: "<<brandName<<endl;
    }
};

int main(){
    Car c(200,"black",4,"mahindra");
    // cout<<"speed: "<<c.speed<<endl;
    // cout<<"color: "<<c.color<<endl;
    // cout<<"wheels: "<<c.wheels<<endl;
    // cout<<"brandName: "<<c.brandName<<endl;
    c.display();
    c.start();
    c.applyBrakes();
}
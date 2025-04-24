#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
    private:
    string Name; 
    string Company;
    int Age;
    public:
    void set_name(string name){
        Name=name;
    }
    void set_age(int age){
        Age=age;
    }
    void get_name(){}

    void AskForPromotion(){
        if(Age<30){
            cout<<Name<<" , You Got Promoted!"<<endl;
        }
        else{
            cout<<Name<<" , Sorry No Promotion!"<<endl;
        }
    }

};

int main(){
    string a;
    int b;
    cout<<"Enter Your Name: ";
    cin>>a;
    cout<<"Enter Your Age: ";
    cin>>b;
    Employee E1;
    E1.set_name(a);
    E1.set_age(b);

    E1.AskForPromotion();

}
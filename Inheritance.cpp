#include<iostream>
using namespace std;

    class Employee{
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
        void get_name(){
        }
        Employee(string name, string company,int age){}
        void show_name(){
            cout<<"Your Name Is: "<<Name;
        }
};

class Developer:public Employee{
    private:
    string Favlang;
    public:
    Developer(string name, string company,int age, string favlang)
    :Employee(name,company,age){
    }
    void setfavlang(string favlang){
        Favlang=favlang;
    }
    void showfavlang(){
        cout<<"Your Favourite Language Is "<<Favlang;
    }

};

int main(){
    Developer d1=Developer("","",0,"");
    string a;
    cout<<"Enter Your Favourite Language: "<<endl;
    cin>>a;
    d1.setfavlang(a);
    d1.showfavlang();
    d1.set_name("Muslim");
    d1.show_name();
    
}
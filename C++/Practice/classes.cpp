#include<iostream>
using namespace std;

class student;

class dummy{
    public:
    void printmsg(void){
        cout<<"I am from dummy class!\n";
    }
    void printdummy(student);
};

class student{
    private:
        int ID;
        string Name;
    public:
    friend dummy;
    student(void);
    student(int Id){
        cout<<"parametrized constructor called !\n";
        ID = Id;
        Name = "None";
    }
        student(int Id, string name){
        cout<<"parametrized constructor 2 called !\n";
        ID = Id;
        Name = name;
    }
    student(student &obj){
        cout<<"copy constructor called!\n";
        ID = obj.ID;
        Name = obj.Name;
    }
    void setData(void);
    void displayData(void);

    ~student(void){cout<<"distructor called! for "<<Name<<"\n";} // it will be called at the end of program/termination

};
student :: student(void){
    cout<<"defult constuctor called!\n";
    ID = 0;
    Name = "None";
}
void student ::setData (){
    // int id; string name;
    cout<<"Enter Name : ";cin>>Name;
    cout<<"Enter ID   : ";cin>>ID;
    // ID = id;
    // Name = name;
}

void dummy ::printdummy (student s){
        cout<<"dummy Name  "<<s.Name<<endl;
        cout<<"dummy ID    "<<s.ID<<endl;
    }

int main()
{
    student aizaz;
    aizaz.setData();
    aizaz.displayData();
    student unkown(333,"abc");
    unkown.displayData();
    for (int i = 0; i <10; i++)
    {
        cout<<i<<endl;
    }
    dummy d;
    d.printmsg();
    d.printdummy(aizaz);
    
    return 0;
}

void student :: displayData(void){
    cout << "Name  "<<Name<<endl;
    cout << "ID    "<<ID<<endl;
}
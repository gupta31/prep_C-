#include<iostream>
using namespace std;
class Human{
    private:
        string name;
        int hands;
        int legs;
        int age;
        int weight;
        char gender;

    public:
        void gethuman_details();
        void displayhuman_details();
        int getage();
        string getname();
        int gethands();
        int getlegs();
        int getweight();
        char getgender();

};
int Human::getage(){
    return age;
}
int Human::getweight(){
}
int Human::getlegs(){
}
int Human::gethands(){
}
char Human::getgender(){
}
string Human::getname(){
}
void Human::gethuman_details(){
    cout<<"Enter human details!!!"<<endl;
    cout<<"Enter no of hands\n";
    cin>>hands;
    while(hands!=2){
       cout<<"You are not human.";
       cout<<"Try with two hands\n";
       cin>>hands;
    }
    cout<<"Enter no of legs\n";
    cin>>legs;
    while(legs!=2){
       cout<<"You are not human.";
       cout<<"Try with two legs\n";
       cin>>legs;
    }
    cout<<"Enter age\n";
    cin>>age;
    cout<<"Enter weight\n";
    cin>>weight;
    cout<<"Enter name\n";
    cin>>name;
    cout<<"Enter gender(M or F)\n";
    cin>>gender;
    while(gender !='M'&& gender !='F'){
        cout<<"Enter correct gender M or F";
        cout << "\n Enter gender again ";
        cin >> gender ;
    }



}
void Human::displayhuman_details(){
    cout << "Entered human details...\n" ;
    cout << "Legs : " << legs << "\nhands : " << hands << "\nname : " << name << "\nweight : " << weight << "\n gender :"<<gender<< endl;
}

int main(){
    Human h1;
    h1.gethuman_details();
    h1.displayhuman_details();

}


//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    string name,movie,time,st,sp = ": ";
    char en  = '\n';
    int gear,yearnum;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<< en <<"?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name<<" is a really cool name."<<en<<"Fahsai: I think you are an Engineering student. What is your student ID?"<<en<<name<<sp;
    cin >> gear;
    cin.ignore();
    
    if(gear>100000000){
    gear = gear*pow(10,-7);
    yearnum = gear-12;
    }

    cout << "Fahsai: I think you may be GEAR " << yearnum << ". I have a free movie ticket for you."<< en << "Fahsai: Let's go to the cinema together!!!" <<en;
    cout<<"Fahsai: What movie do you want to watch?"<<en <<name<< sp;
    getline(cin,movie);

    cout << "Fahsai: So....which day are you free to go with me?" << en << name << sp;
    getline(cin,time);

    cout << "Fahsai: "<< time << "....that is OK!!! I'm looking forward to watching " << movie<<" with you."<<en <<name<<sp;
    cin.ignore();

    cout<< "Fahsai: 555+ see you " << time << ". Bye Bye \\(^ ^)/";

        
        


    }

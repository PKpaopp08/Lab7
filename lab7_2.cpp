//Dialog of the first example is given below.
#include <iostream>
using namespace std;

int main(){
    string F="Fahsai", usn ,day,txt;
    string movie;
    int student_id;

    cout << F << ": Sawadee ka...Can you tell me your name?"<<endl;
    cout<< "?????: " ; getline(cin,usn) ;
    cout << F << ": Wow!!! "<< usn <<" is a really cool name."<<endl;
    cout << F << ": I think you are an Engineering student. What is your student ID?"<<endl;
    cout<< usn <<": " ;cin >> student_id ; cin.ignore();
    cout << F << ": I think you may be GEAR "<< (student_id/10000000)-12 <<". I have a free movie ticket for you."<<endl;
    cout << F << ": Let's go to the cinema together!!!"<<endl;
    cout << F << ": What movie do you want to watch?"<<endl;
    cout<< usn <<": " ; getline(cin,movie) ;
    cout << F << ": So....which day are you free to go with me?"<<endl;
    cout<< usn <<": " ; getline(cin,day) ;
    cout << F << ": "<<day<<"....that is OK!!! I'm looking forward to watching " <<   
    movie <<" with you."<<endl;
    cout<< usn <<": " ; getline(cin,txt) ;
    cout << F << ": 555+ see you "<<day<<". Bye Bye \\(^ ^)/";

}


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
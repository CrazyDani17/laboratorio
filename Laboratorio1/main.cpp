#include <iostream>
#include <string>
using namespace std;

int main()
{
    string main_name;
    string first_name;
    string second_name;
    string complete;
    string sentence;
    char gender;
    int age;
    gender='1';
    cout<< "Write a cart" << endl;
    cout<<"#######################"<< endl;
    cout<< "Dear..."<<"(Enter a name):";
    cin >> first_name;
    cout<<"###############################################"<< endl;
    cout<<"Dear "<<first_name<<endl;
    cout<<"How are you? I'm fine. I miss you."<<endl;
    cout<<"We have not seen each other for a long time. What's up?"<<endl;
    cout<<"I still remember when we met, I really miss you a lot. You are very funny I hope to see you soon. "<<endl;
    cout<<" Send me more mail to be in constant communication with you."<<endl;
    cout<<"Have you seen...(Enter other name):";
    cin >> second_name;
    cout<<"###############################################"<< endl;
    cout<<"Dear "<<first_name<<endl;
    cout<<"How are you? I'm fine. I miss you."<<endl;
    cout<<"We have not seen each other for a long time. What's up?"<<endl;
    cout<<"I still remember when we met, I really miss you a lot. You are very funny I hope to see you soon. "<<endl;
    cout<<" Send me more mail to be in constant communication with you."<<endl;
    cout<<"Have you seen "<<second_name<<" lately? ";
    cout<< "If you see "<<second_name<<" please ask...to call me"<<endl;
    while(gender!='F' && gender!='M'){
        cout<<"Enter gender (F/M):";
        cin >> gender;
        if(gender=='M'){
            complete="him";
        }
        if(gender=='F'){
            complete="her";
        }
    }
    cout<<"###############################################"<< endl;
    cout<<"Dear "<<first_name<<endl;
    cout<<"How are you? I'm fine. I miss you."<<endl;
    cout<<"We have not seen each other for a long time. What's up?"<<endl;
    cout<<"I still remember when we met, I really miss you a lot. You are very funny I hope to see you soon. "<<endl;
    cout<<" Send me more mail to be in constant communication with you."<<endl;
    cout<<"Have you seen "<<second_name<<" lately? ";
    cout<< "If you see "<<second_name<<" please ask "<<complete<<" to call me"<<endl;
    cout<< "Enter the age of the receiver: ";
    cin>>age;
    if(age<17){
        sentence="Next year you be"+ std::to_string(age)+"!!! What will you do for your birthday?";
    }
    if(age>=18 && age<70){
        sentence="Have you already obtained your driver's license?";
    }
    if(age>=70){
        sentence="I hope are enjoying retirement.";
    }
    cout<<"###############################################"<< endl;
    cout<<"Dear "<<first_name<<endl;
    cout<<"How are you? I'm fine. I miss you."<<endl;
    cout<<"We have not seen each other for a long time. What's up?"<<endl;
    cout<<"I still remember when we met, I really miss you a lot. You are very funny I hope to see you soon. "<<endl;
    cout<<" Send me more mail to be in constant communication with you."<<endl;
    cout<<"Have you seen "<<second_name<<" lately? ";
    cout<< "If you see "<<second_name<<" please ask "<<complete<<" to call me"<<endl;
    cout<< sentence<< endl;
    cout<< "Yours sincerely"<<endl;
    cin >> main_name;
    cout<<"###############################################"<< endl;
    cout<<"Dear "<<first_name<<endl;
    cout<<"How are you? I'm fine. I miss you."<<endl;
    cout<<"We have not seen each other for a long time. What's up?"<<endl;
    cout<<"I still remember when we met, I really miss you a lot. You are very funny I hope to see you soon. "<<endl;
    cout<<" Send me more mail to be in constant communication with you."<<endl;
    cout<<"Have you seen "<<second_name<<" lately? ";
    cout<< "If you see "<<second_name<<" please ask "<<complete<<" to call me"<<endl;
    cout<< sentence<< endl;
    cout<< "Yours sincerely"<<endl<<main_name;
    return 0;
}

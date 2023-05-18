#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std ;
int main()
{
    int a, i = 0;
    string text, old, password1, password2, pass, name, password0, age, user, word, word1;
    string  creds[2], cp[2];


    cout<<"      Security System"<<endl;

    cout<<"_____________________________________"<<endl<<endl;
    cout<<"|         1. Register               |"<<endl;
    cout<<"|         2. Login                  |"<<endl;
    cout<<"|         3. Change Password        |"<<endl;
    cout<<"|         4. Exit                   |"<<endl;
    cout<<"|___________________________________|"<<endl<<endl;

    do
    {
        cout<<endl<<endl;
        cout<<"Enter Your Choice : ";
        cin>>a;
        switch(a)
        {
            case 1:
            {
                cout<<"______________________________"<<endl<<endl;
                cout<<"|---------Register-----------|"<<endl;
                cout<<"|____________________________|"<<endl<<endl;

                cout<<"plase enter user name: ";
                cin>>name;
                cout<<"plase enter the password: ";
                cin>>password0;
                cout<<"plase enter your age: ";
                cin>>age;

                ofstream of1;
                of1.open("file.txt");
                if(of1.is_open())
                {
                    of1<<name<<"\n";
                    of1<<password0<<"\n";
                    of1<<age<<"\n";
                    cout<<"Registration sucessfull"<<endl;
                }    
                break;
            }
            case 2:
            {
                i=0;
                cout<<"______________________________"<<endl<<endl;
                cout<<"|---------Login--------------|"<<endl;
                cout<<"|____________________________|"<<endl<<endl;
                
                ifstream of2;
                of2.open("file.txt");
                cout<<"Please enter the username:";
                cin>>user;
                cout<<"Please enter the password:";
                cin>>pass;

                if(of2.is_open())
                {
                    while(of2.eof())
                    {
                        while(getline(of2, text))
                        {
                            istringstream iss(text);
                            iss>>word;
                            creds[i]=word;
                            i++;
                        }
                        if(user== creds[0] && pass==creds[1])
                        {
                            cout<<"---Login Sucessfull---";
                            cout<<endl<<endl;

                            cout<<" Details: "<<endl;

                            cout<<"Username" +user<<endl;
                            cout<<"Password" +pass<<endl;
                            // cout<<"Age" +age<<endl;

                        }
                        else
                        {
                            cout<<endl<<endl;
                            cout<<"Incorrect Credentials"<<endl;
                            cout<<"|        1. Press 2 to login                     |"<<endl;
                            cout<<"|        2. Press 3 to Change Password           |"<<endl;
                            cout<<"|        3. Press 4 to Exit                      |"<<endl;
                            break;
                        }
                    }
                }
                
                break;
            }
            case 3 :
            {
                i=0;
                cout<<"-----------------Change Password----------------"<<endl;

                ifstream of0;
                of0.open("file.txt");
                cout<<"enter the old password: ";
                cin>>old;
                if(of0.is_open())
                {
                    while(of0.eof())
                    {
                        while(getline(of0, text))
                        {
                            istringstream iss(text);
                            iss>>word1;
                            cp[i]=word1;
                            i++;
                        }

                        if(old==cp[1])
                        {
                            of0.close();
                            ofstream of1 ;
                            if(of1.is_open())
                            {
                                cout<<"Enter new password ";
                                cin>>password1;
                                cout<<"enter your password again";
                                cin>>password2;
                                if(password1==password2)
                                {
                                    of1<<cp[0]<<"\n";
                                    of1<<password1<<"\n";
                                    cout<<"password changed sucessfully"<<endl;
                                }
                                else
                                {
                                    of1<<cp[0]<<"\n";
                                    of1<<old;
                                    cout<<"passwords do not match"<<endl;
                                }
                            }
                        }
                        else
                        {
                           cout<<"please enter valid password"<<endl; 
                           break;
                        }
                    }
                }
                break;

            }

            case 4 :
            {
                cout<<"_____________Thank You!_____________";
                break;
            }
            default :
            cout<<"enter a valid choice";

        }

    }

    while(a!= 4);
    return 0;


}
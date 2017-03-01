#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;




int main()
{

    string haslo,zgadula;
    char a;
    int licznik=0,dlugosc;

    cout << "**********************************"<< endl;
    cout << "Witaj w grze pod tytulem wysielec" << endl;
    cout << "**********************************"<< endl;


    cout << "Podaj haslo do odganiecia" << endl;
    cin>>haslo;

    dlugosc=haslo.length();

    cout<<endl<<endl;
    for(int i=0;i<dlugosc;i++){
        zgadula[i]='_';
    }

    do{
    cout<<endl;
    cout<< "Podaj jedna literke z hasla"<<endl;
    cin>>a;
    for(int j=0;j<dlugosc;j++){
        if(a==haslo[j])
        {
            zgadula[j]=haslo[j];
            licznik++;
        }

        cout<<zgadula[j];

    }



    }while(licznik!=dlugosc);

    cout<<"Gratulacje wygrales"<<endl;
    cout<<"Haslo to : "<<haslo<<endl;



    return 0;
}

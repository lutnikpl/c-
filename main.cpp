#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

using namespace std;

	
	



int main()
{
	bool zycie = false;
    string haslo,zgadula;
    char a;
    int licznik=0,dlugosc,ilosc_zyc=5;

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
    zycie = false;
    cout<<endl;
    cout<< "Podaj jedna literke z hasla: ";
    cin>>a;
    cout<<endl;
    system("CLS");
    for(int j=0;j<dlugosc;j++){
        if(a==haslo[j])
        {
            zgadula[j]=haslo[j];
            zycie = true;
            licznik++;
        }
    
        

		
        cout<<zgadula[j];

    }
    if(zycie!=true)
    {
    		ilosc_zyc--;
		}
    cout<<endl;
   	cout<<"Pozostala ilosc zyc:" <<ilosc_zyc;
	if(ilosc_zyc==0)
	{
		cout<<endl;
		cout<<"Przegrales koniec gry"<<endl;
		return 0;
	}
	

    }while(licznik!=dlugosc);
	cout<<endl;
    cout<<"Gratulacje wygrales"<<endl;
    cout<<"Haslo to :  "<<haslo<<endl;



    return 0;
}

#include <iostream>
#include <locale.h> // zeby u¿ywaæ polskich znaków w konsoli
#include <ctime>  //aby losowanie nie by³o pseudo
#include <cstdlib>  //losowanie liczb
using namespace std;

int main()
{
setlocale(LC_CTYPE, "Polish");
int proby = 0;
int poziomtrud;
int liczba;
srand(time(0)); //aby losowanie nie było pseudo
int zgadliczba = rand()%51;


    cout<<"Witaj Program Będzie losował liczbę od 0 do 50"<<endl;

    cout<<"wybierz poziom Gry:"<<endl;
    cout<<"1. łatwy"<<endl;
    cout<<"2. średni"<<endl;
    cout<<"3. Trudny"<<endl;

    cin>>poziomtrud;
    cout<<endl;
    cout<<"Zagdnuj liczbe :D"<<endl;
    switch(poziomtrud)
    {
        case 1:
            proby = 12;
                 while(proby>0)
                    {
                        cin>>liczba;

                      if(liczba > zgadliczba)
                      {
                            cout<<"Spróbuj mniej"<<endl;
                      }

                      if(liczba < zgadliczba)
                      {
                            cout<<"Spróbuj wiêcej"<<endl;
                      }
                      if(liczba == zgadliczba)
                        {
                            cout<<"Bravo wygrales"<<endl;
                            break;
                        }
                      else
                        {
                        proby--;
                        }
                        cout<<"Ilość prób : "<<proby<<endl;
                    }

                    if(proby == 0)
                    {
                        cout<<"Przegrałeś moze następnym razem ci lepiej pójdzie"<<endl;
                    }

             break;



        case 2:
             proby = 6;
                 while(proby>0)
                    {
                        cin>>liczba;
                      if(liczba == zgadliczba)
                        {
                            cout<<"Bravo wygrales"<<endl;
                            break;
                        }
                      else
                        {
                        proby--;
                        }
                    }
                            cout<<"Ilość prób : "<<proby<<endl;

                                      if(proby == 0)
                    {
                        cout<<"Przegrałeś moze następnym razem ci lepiej pójdzie"<<endl;
                    }
                 break;

        case 3:
             proby = 4;
                 while(proby>0)
                    {
                        cin>>liczba;
                      if(liczba == zgadliczba)
                        {
                            cout<<"Bravo wygrales"<<endl;
                            break;
                        }
                      else
                        {
                        proby--;
                        }

                    }
                    cout<<"Ilość prób : "<<proby<<endl;
                      if(proby == 0)
                        {
                            cout<<"Przegrałeś moze następnym razem ci lepiej pójdzie"<<endl;
                        }
                  break;

        }






}

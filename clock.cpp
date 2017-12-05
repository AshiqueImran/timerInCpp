#include <iostream>
#include <cstdio>
#include <ctime>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

void delay(unsigned int mseconds)

{

    clock_t goal = mseconds + clock();

    while (goal > clock());

}
int main() {

    int chour,cmin,sec=0,thour,tmin;
    cout<<"Enter the current hour(1-12):";
    cin>> chour;
    cout<<"Enter the current min(0-60):";
    cin>>cmin;

    cout<<"Enter the target hour(1-12):";
    cin>> thour;
    cout<<"Enter the target min(0-60):";
    cin>>tmin;

    if(chour>12 || cmin >60 || cmin < 0 ||chour<1 || thour>12 || thour<1 ||tmin<0 || tmin>60)
    {
        cout<<"Wrong input"<<endl;
    }
    else
    {
        if(chour==thour && cmin==tmin)
        {
            system("CLS");
            cout<<"Alarm ringing!!! "<<endl;
        }

         else
            {
                while(sec<=60)
                {
                    delay(1000); //1000 millisecond = 1 second , every millisecond is counting here.
                    system("CLS");
                    cout<<chour<<"\t"<<cmin<<"\t"<<sec<<endl;
                    sec++;
                    if(sec > 60)
                    {
                        sec =0;
                        cmin++;
                        if(cmin > 60)
                        {
                            cmin=0;
                            chour++;
                            if(chour > 12)
                            {
                                chour=1;

                            }
                        }
                    }

                    if(chour==thour && cmin==tmin)
                        {
                            system("CLS");
                            cout<<"Alarm ringing!!! "<<endl;
                            break;
                        }
                }
            }
    }

getch();
return 0;
}


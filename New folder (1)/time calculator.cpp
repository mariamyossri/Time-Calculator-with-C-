#include <iostream>
#include <iomanip>

using namespace std;


class Time
{
    int seconds, hh, mm, ss;
    
    public :
        void inputTime(void);
        void displayTime(void);
        void calcMidnight(void);
};


void Time::inputTime()
{
    cout<< "Enter Time: \n" ;
    cout<< "Hours: " ;
    cin>>hh ;
    while (hh<0, hh>23)
    {
        cout<<"Enter valid hours!\n";
        cout<< "Hours: " ;
        cin>>hh ;
    }
    cout<< "Minutes: " ;
    cin>>mm ;
    while (mm<0, mm>59)
    {
        cout<<"Enter valid minutes!\n";
        cout<< "Minutes: " ;
        cin>>mm ;
    }
    cout<< "Seconds: " ;
    cin>>ss ;
    while (ss<0, ss>59)
    {
        cout<<"Enter valid seconds!\n";
        cout<< "Seconds: " ;
        cin>>ss ;
    }
}


void Time::displayTime()
{
    cout<<"Entered time="<<hh<<":"<<mm<<":"<<ss<<"\n";
}


void Time::calcMidnight()
{
  seconds = hh*3600 + mm*60 +ss;
  cout<<"Seconds passed since the last midnight= "<<seconds<<"\n";
}
 

int main()
{
    int choice;
    
    
    cout<< "Welcome to seconds calculator!\n";
    cout<< "Pick a choice\n1.Calculate a seconds passed since last midnight.\n2.End.";
    cin>>choice;
    while (1<=choice<=2)
    {
        if (choice== 1)
        {
            Time T;
    
            T.inputTime();
            T.displayTime();
            T.calcMidnight();
            cout<< "Pick a choice\n1.Calculate a seconds passed since last midnight.\n2.End.";
            cin>>choice;
        }    
        else
        {
            cout<<"See you later!";
            break ;
        }
        
        
    }
    
    
    return 0 ;
}

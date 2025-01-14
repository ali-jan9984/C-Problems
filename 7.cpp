#include <iostream>

using namespace std;

int main()
{
    const int daysInWeek = 7;
    double temperature[daysInWeek];
    int hottestDay=0;
    cout<<"Enter the temperature for the week :"<<endl;
    for(int i=0;i<daysInWeek;i++){
        cout<<"Day"<<i+1<<":";
        cin>>temperature[i];
    }
     for(int i=0;i<daysInWeek;i++){
        if(temperature[i]>temperature[hottestDay]){
            hottestDay=i;
        }
    }
    cout<<"The hottest Day of the week is day "<<hottestDay +1<<" with a temperature of "<<temperature[hottestDay]<<" C"<<endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    const int daysInYear = 365;
    double highTemp[daysInYear] = {0.0};
    for(int i = 0;i<daysInYear;i++){
        cout << "Day " << i+1<<":"<<highTemp[i]<<"C"<<endl;
    }
    return 0;
}
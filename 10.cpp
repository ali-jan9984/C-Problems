#include <iostream>

using namespace std;

int main()
{
    int test[2][3] = {{1,2,3},{4,5,6}};
    int sum = 0;
    for (int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            sum = sum + test[i][j];
        }
    }
    cout<<"The sum of the values in the array is "<<sum<<endl;
    return 0;
}
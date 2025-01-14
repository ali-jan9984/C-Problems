#include <iostream>

using namespace std;

int main()
{
    const int size = 3;
    int A[size][size] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int B[size][size]={
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };
    int addResult[size][size] = {0};
    int subResult[size][size] = {0};
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            addResult[i][j] = A[i][j] + B[i][j];
            subResult[i][j] = A[i][j] - B[i][j];
        }
    };
    cout<<"Additon of matrix a and b is"<<endl;
     for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            cout<<addResult[i][j]<<" ";
        }
    };
    cout<<"Subtraction of matrix a and b is"<<endl;
     for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            cout<<subResult[i][j]<<" ";
        }
    };
    return 0;
}
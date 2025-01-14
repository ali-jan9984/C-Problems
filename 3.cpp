#include <iostream>

using namespace std;

int main()
{
    const int rowA = 3;
    const int colA = 2;
    const int rowB = 2;
    const int colB = 3;
    int A[rowA][colA] = {
        {1,2},
        {3,4},
        {5,6}
    };
    int B[rowB][colB] = {
        {7,8,9},
        {10,11,12}
    };
    int C[rowA][colB]= {0};
    for(int i = 0;i<rowA;i++){
            for(int j = 0;j<colB;j++){
            for(int k = 0;k<colA;k++){
               C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }
    cout<<"Result Matrix C[3][3]"<<endl;
     for(int i = 0;i<rowA;i++){
            for(int j = 0;j<colB;j++){
                cout<<C[i][j]<<" ";
        }
    }
    return 0;
}
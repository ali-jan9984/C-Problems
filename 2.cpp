#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int sizeOfArr = sizeof(arr);
    int lengthOfElements = sizeOfArr/sizeof(arr[0]);
    cout << lengthOfElements << endl;
    return 0;
}
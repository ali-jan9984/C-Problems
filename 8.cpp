#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    const int size = 10;
    char alphabets[size];
    cout<<"Enter ten alphabets: "<<endl;
    for(int i=0;i<size;i++){
        cin>>alphabets[i];
    }
    sort(alphabets,alphabets+size,greater<char>());
    for(int i =0;i<size;i++){
        cout<<alphabets[i]<<" ";
    }
    return 0;
}
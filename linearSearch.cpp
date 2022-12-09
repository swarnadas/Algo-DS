#include<bits/stdc++.h>
using namespace std;
int main()
{   int searchlist[100],key;
    cout<<"Enter the list of numbers: ";
    for(int i=0;i<10;i++){
        cin>>searchlist[i];
    }
    cout<<"Enter the no you are searching: ";
    cin>>key;
    int position=1;
    for(int i=0;i<10;i++){
        if(searchlist[i]==key){
            cout<<"The position of the key "<<key<<" is "<<position<<endl;
            break;
        }
        if(position==10){
            cout<<"Number is not present!"<<endl;
        }
        position++;
    }
    return 0;
}

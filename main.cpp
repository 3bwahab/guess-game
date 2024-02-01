#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    char ch;
    do{
srand(time(NULL));
int r=(rand()%1000);
int i;

cout<<"guess number between 0:1000"<<endl;
do{
cout<<"enter number"<<endl;


cin>>i;

if(i<r){
    cout<<"the number you entered is low , try again"<<endl;

}
else if(i==r){
    cout<<"excellent the number is correct"<<endl;}
else if(i>1000||i<0){
    cout<<"i said y hallof between 0 and 1000 .....\n try again"<<endl;
}

else{
    cout<<"the number you entered is high , try again"<<endl;
}

}

while(i!=r);
cout<<"\nIf you want to play again enter y\n or press any key"<<endl;

cin>>ch;

    }
    while(ch=='y');



    return 0;
}

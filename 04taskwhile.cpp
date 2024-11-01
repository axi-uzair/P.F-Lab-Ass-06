#include <iostream>
using namespace std;

int main(){

int weeks=3, i=1;
while(i<=weeks){
    cout <<"WEEK "<<i<<" :";
    int j=1;
    while(j<=1){
        cout <<"\n\tDay1.Monday";
        cout <<"\n\tDay2.Tuesday";
        cout <<"\n\tDay3.Wednesday";
        cout <<"\n\tDay4.Thursday";
        cout <<"\n\tDay5.Friday";
        cout <<"\n\tDay6.Saturday";
        cout <<"\n\tDay7.Sunday";
        j++;
    }
    cout <<endl;
    i++;
}

    return 0;
}
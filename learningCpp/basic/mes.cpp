#include <iostream>
using namespace std;

int main(){
    int i;
    char mes[12][50]={
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    cin>>i;
    cout<<mes[i-1];
    return 0;
}
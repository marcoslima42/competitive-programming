#include <iostream>

using namespace std;

int main(){
    float num;

    for(int i=0; i<100; i++){
        cin>>num;
        if(num<=10)
            printf("A[%d] = %.1f\n", i, num);
    }
    return 0;
}
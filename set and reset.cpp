#include<iostream>
using namespace std;
int main(){
    int i = 50;
    int set,reset,bit_reset,bit_set;
    cout<<"bit_set:";
    cin>>bit_set;
    cout<<"bit_reset:";
    cin>>bit_reset;
    
    set= i|(1<<bit_set);
    cout<<set<<endl;
    reset = i&(~(1<<bit_reset));
    cout<<reset<<endl;
    
    cout<<"\nthe set number is\n"<<set;
    cout<<"\nthe reset number is\n"<<reset;
    return 0;
    
    
}
/*outputbit_set:3
bit_reset:4
58
34

the set number is
58
the reset number is
34

=== Code Execution Successful ===*/

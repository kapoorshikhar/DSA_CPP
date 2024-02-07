#include<iostream>

using namespace std;

int stack=[5];
int top=-1;

void push(int x){
   
    if (top==5-1){
        cout<< "Stack Overflow"<<endl;
    }
    else{
        top=top+1;
        stack[top]=x;
    }

};
int main (){

    push(20);
    push(10);
    push(30);

return 0
}
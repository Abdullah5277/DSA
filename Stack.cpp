#include<iostream>
using namespace std;
  void Push(int stack[],int &top,int maxstk, int item){
   if (top==maxstk-1)
   {
    cout<<"overflow !"<<endl;
    return ;
   }
   top=top+1;
   stack[top]=item;}
   void Display(int stack[], int top) {
    cout << "Current stack: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;}

  
int main() {
    int maxstk=6;
    int top =4;
    int stack[maxstk]={1,2,10,13,15,20};
    Push(stack,top,maxstk,23);
     Display(stack,top);
    return 0;
}
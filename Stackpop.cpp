#include<iostream>
using namespace std;
  void POP(int stack[],int &Top,int Item){
    if(Top==-1){
    cout<<"Overflow !"<<endl;
    return;
    }
    Item=stack[Top];
    Top=Top-1;
  }
  void display(int stack[],int Top){
    for(int i=0;i<=Top;i++){
   cout << stack[i] << " ";
    }
      cout<<endl;
  }
int main() {
    int top=5;
    int item;
    int stack[top]={10,20,30,40};
    POP(stack,top,40);
    display(stack,top);
    return 0;
}
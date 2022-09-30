#include<iostream>
using namespace std;
class stack{
    private:
    int size;
    int top;
    int *s;
    public:
    stack(int size);
    ~stack();
    void push(int x);
    int pop();
    int peek(int pos);
    int isempty();
    int isfull();
    int stacktop();
    void display();
};
stack::stack(int size){
    this->size=size;
    top=-1;
    s=new int[size];
}
stack::~stack(){
    delete[] s;
}
void stack::push(int x){
    if(top==size-1){
        cout<<"Stack overflow";
    }else{
        top++;
        s[top]=x;
    }
}
int stack::pop(){int x=-1;
    if(top==-1){
        cout<<"Stack underflow";
    }else{
        x=s[top];
        top--;
    }
    return x;
}
int stack::peek(int pos){int x=-1;
    if(top-pos+1<0 || top-pos+1==size){
        cout<<"Inavalid";
    }else{
       x=s[top-pos+1];
    }
    return x;
}
int stack::isempty(){
    if(top==-1)
    {
        return 1;
    }else{
        return 0;
    }
}
int stack::isfull()
{
    if(top==size-1){
        return 1;
    }else{
        return 0;
    }
}
int stack::stacktop(){
    if(isempty()){
        return -1;
    }else{
        return s[top];
    }
}
void stack::display(){
    for(int i=top;i>=0;i--){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
int main(){int n=5;
    stack stk(n);
    stk.push(9);
    stk.push(8);
    stk.push(7);
    stk.push(6);
    stk.push(5);
    stk.display();
    
    cout<<stk.stacktop();
    
       
    return 0;
}

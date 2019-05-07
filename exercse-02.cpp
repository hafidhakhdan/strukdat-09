/*
Nama	: Hafidh Akhdan Najib
NPM		: 140810180061
Kelas	: A
exercise-02 stack
*/

#include <iostream>

using namespace std;

struct ElemenStack {
    char info;
    ElemenStack* next;
};

typedef ElemenStack* pointer;
typedef pointer List;

struct Stack {
    List top;
};

Stack s;

void createStack(Stack& s){
    s.top = NULL;
}

void createElemen(pointer& p){
    p = new ElemenStack;
    cout<<"Input Huruf: ";cin>>p->info;
    p->next = NULL;
}

void push(Stack& s, pointer pBaru){
    if (s.top==NULL) 
        s.top=pBaru;
    else { 
        pBaru->next=s.top;
        s.top=pBaru;
    }
}

void pop(Stack& s, pointer& pHapus){
    if (s.top==NULL){
        cout<<"Stack kosong "<<endl;
        pHapus=NULL;
    }
    else if (s.top->next==NULL){
        pHapus=s.top;
        s.top=NULL;
    }
    else {
        pHapus=s.top;
        s.top=s.top->next;
        pHapus->next=NULL;
    }
}

int main(){
    pointer p,h;
    int n;
    createStack(s);
    cout<<"Banyak Huruf: ";cin>>n;
    for (int i=0;i<n;i++){
        createElemen(p);
        push(s,p);
    }
    
    while(s.top!=NULL){
        cout<<s.top->info<<" ";
        pop(s,h);
    }
    
}

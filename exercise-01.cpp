/*
Nama	: Hafidh Akhdan Najib
NPM		: 140810180061
Kelas	: A
exercise-01 stack
*/

#include <iostream>

using namespace std;
const int maxElement = 255;

struct stack
{
    char isi[maxElement];
    int top;
};

stack s;

void createStack (stack& s)
{
    s.top = -1;
}

void push (stack& s, char elemenBaru)
{
    if (s.top == maxElement-1)
    {
        cout << "Stack Full" << endl;
    }
    else
    {
        s.top = s.top+1;
        s.isi[s.top] = elemenBaru;
    }
}

void pop(stack&s,char& elemenHsl,int& n){
	if (s.top < 0) {
		cout<<"Tumpukan sudah kosong "<<endl;
	} else {
		//elemenHsl= s.isi[s.top];
		//s.top=s.top - 1;
		for(int i=n;i>=0;i--){
            elemenHsl= s.isi[s.top];
			s.top=s.top - 1;
			cout<<s.isi[i]<<" ";
        }
	}
}
/*
void print(stack s,int& n){
    if(s.top<0){
        cout<<"Kosong";
    }else{
        for(int i=n;i>=0;i--){
            cout<<s.isi[i]<<" ";
        }
    }
}*/

main()
{
    int n;
    char baru;
    
    createStack(s);
    
    cout << "Banyak huruf : "; cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cout << "Input a charachter : "; cin >> baru;
        push(s,baru);
    }
    
    pop (s,baru,n);
    
}


#include<iostream>
using namespace std;
class stack
{
	int top;
	int sta[20];
	int a;

public:
	stack()
	{
		top=-1;
	}
	int push(int x)
	{
		if(top<20)
			sta[++top]=x;
		else
			return -1;
		return 1;
	}
	int pop()
	{
		if(top>-1)
		{
			a = sta[top--];
			return a;
		}
		else
			return -1;
	}
	int peep()
	{
		if(top>-1)
			return sta[top];
		return -1;
	}
};
int main()
{
	stack st;
	int choice,a,no;
	while(1)
	{
	cout<<"choose 1.Push 2.pop 3.peep\n";
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"enter the number to be pushed";
			cin>>no;
			a = st.push(no);
			if(a==-1)
				cout<<"Stack full"<<endl;
			else
				cout<<"pushed succesfully"<<endl;
			break;
		case 2: no = st.pop();
			if(no!=-1)
				cout<<"val popped "<<no<<endl;
			else
				cout<<"empty stack"<<endl;
			break;
		case 3: no = st.peep();
			if(no!=-1)
				cout<<"element at the top "<<no<<endl;
			else
				cout<<"empty stack"<<endl;
			break;
		
	}
	}

}	

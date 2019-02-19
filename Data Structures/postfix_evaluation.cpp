#include<bits/stdc++.h>
using namespace std;

class Stack{
	int top;
	int s[10];
	public:
		Stack()
		{
			top=-1;
		}

		

		void push(int x)
		{
			if (!isFull())
			{
				s[++top]=x;
			}
			else{
				cout<<"Stack is Full\n";
				cout<<"------------------------------\n";
			}
		}


		int pop()
		{
			if(!isEmpty())
			{
				return(s[top--]);
			}
			else{
				return '5';
			}
		}

		bool isFull()
		{
			if (top==9)
			{
				return true;
			}
			else
				return false;
		}

		bool isEmpty()
		{
			if (top==-1)
			{
				return true;
			}
			else
				return false;
		}

		int peek()
		{
			if(!isEmpty())
			{
				return(s[top]);
			}
			else{
				return -99;
			}
		}

		~Stack(){
			delete s;
		}
};

int main()
{
	Stack st;
	string str="12+";
	for(int i=0;i<str.length();i++)
	{
		char ch=str[i];
		if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/')
		{
			st.push(ch-'0');
		}
		else
		{
			int a=st.pop();
			int b=st.pop();
			if(ch=='+')
			{
				st.push(b+a);
			}
			else if(ch=='-')
			{
				st.push(b-a);
			}
			else if(ch=='*')
			{
				st.push(b*a);
			}
			else if(ch=='/')
			{
				st.push(b/a);
			}
		}
	}

	cout<<endl<<st.pop()<<endl;


	return 0;
}

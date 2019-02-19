#include<bits/stdc++.h>
using namespace std;

class Stack{
	int top;
	int size;
	char s[10];
	public:
		Stack()
		{
			top=-1;
		}

		void push(char x)
		{
			if (!isFull())
			{
				s[++top]=x;
				cout<<"Character "<<x<<" pushed Successfully\n";
				cout<<"-----------------------------\n";
			}
			else{
				cout<<"Stack is Full\n";
				cout<<"------------------------------\n";
			}
		}


		char pop()
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
			if (top==size-1)
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

		char peek()
		{
			if(!isEmpty())
			{
				return(s[top]);
			}
			else{
				return -99;
			}
		}

		void display()
		{
			if(!isEmpty())
            {
                cout<<"------------------------------\n";
                int i;
				for(i=0;i<=top;i++)
				{
					cout<<s[i]<<endl;
				}
				cout<<"------------------------------\n";
            }
            else{
                cout<<"Stack is empty\n";
                cout<<"------------------------------\n";
            }
		}

		~Stack(){
			delete s;
		}
};

int main()
{
	Stack st;
	int flag=0;
	string str="[q]{c-d}[(a+b)]";
	for(int i=0;i<str.length();i++)
	{
		char ch=str[i];
		switch(ch)
		{
			case '{':
            case '[':
			case '(':st.push(ch);
				 break;
			case '}':
			case ']':
            case ')': if(st.isEmpty())
				 		{
				 			flag=1;
				 			break;
				 		}
				 		else
				 		{
					 		if((ch=='}'&& st.peek()=='{')||(ch==']'&& st.peek()=='[')||(ch==')'&& st.peek()=='('))
					 		{
					 			cout<<endl<<st.pop()<<" is popped"<<endl;
					 			cout<<"------------------------------\n"<<endl;
					 		}
					 		else
					 		{
					 			flag=1;
					 			break;
					 		}
				 		}
				 		break;
		}
		if(flag==1)
			break;
	}
	if (flag==1)
	{
		cout<<"Expression is not balanced\n";
	}
	else if(st.isEmpty())
		cout<<"Expression is balanced\n";
	else
		cout<<"Expression is not balanced\n";

	return 0;
}

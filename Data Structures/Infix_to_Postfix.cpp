#include<bits/stdc++.h>
using namespace std;

class Stack{
	int top;
	char s[10];
	public:
		Stack()
		{
			top=-1;
		}

		int precedence(char c)
		{
			if(c=='+'|| c=='-')
				return 1;
			else if(c=='*' || c=='/')
				return 2;
			else if(c=='('|| c=='[')
				return 0;
		}

		void push(char x)
		{
			if (!isFull())
			{
				s[++top]=x;
			}
			else{
				//cout<<"Stack is Full\n";
				//cout<<"------------------------------\n";
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

		~Stack(){
			delete s;
		}
};

int main()
{
	Stack st;
	string str="a+[b/c-(d*f)]+g-h";
	for(int i=0;i<str.length();i++)
	{
		char ch=str[i];
		if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'&&ch!='('&&ch!=')'&&ch!=']'&&ch!='[')
		{
			cout<<ch;
		}
		else
		{
			switch(ch)
			{
				case '+':if (st.isEmpty())
						 {
							st.push(ch);
						 }
						 else
						 {
						 	while(st.precedence(st.peek())>=st.precedence(ch))
						 	{
						 		cout<<st.pop();
						 	}
						 	st.push(ch);
						 }
						 break;

	            case '-':if (st.isEmpty())
						 {
							st.push(ch);
						 }
						 else
						 {
						 	while(st.precedence(st.peek())>=st.precedence(ch))
						 	{
						 		cout<<st.pop();
						 	}
						 	st.push(ch);
						 }
						 break;
				case '*':if (st.isEmpty())
						 {
							st.push(ch);
						 }
						 else
						 {
						 	while(st.precedence(st.peek())>=st.precedence(ch))
						 	{
						 		cout<<st.pop();
						 	}
						 	st.push(ch);
						 }
						 break;
				case '/':if (st.isEmpty())
						 {
							st.push(ch);
						 }
						 else
						 {
						 	while(st.precedence(st.peek())>=st.precedence(ch))
						 	{
						 		cout<<st.pop();
						 	}
						 	st.push(ch);
						 }
						 break;
				case '(':st.push(ch);
						break;
				case ')':while(st.peek()!='(')
							{
								cout<<st.pop();
							}
							st.pop();
							break;
                case '[':st.push(ch);
						break;
				case ']':while(st.peek()!='[')
							{
								cout<<st.pop();
							}
							st.pop();
							break;
			}
		}
	}

	while(!st.isEmpty())
	{
		cout<<st.pop();
	}


	return 0;
}

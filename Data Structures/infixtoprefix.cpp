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
			else if(c==')'|| c==']')
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
	string str="a+(b*c+[d/e])",res;
	for(int i=str.length()-1;i>=0;i--)
	{
		char ch=str[i];
		if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'&&ch!='('&&ch!=')'&&ch!=']'&&ch!='[')
		{
			res=res+ch;
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
						 	if (st.precedence(st.peek())>st.precedence(ch))
						 	{
						 		res=res+st.pop();
						 		st.push(ch);
						 	}
						 	else
						 		st.push(ch);
						 }
						 break;

	            case '-':if (st.isEmpty())
						 {
							st.push(ch);
						 }
						 else
						 {
						 	if (st.precedence(st.peek())>st.precedence(ch))
						 	{
						 		res=res+st.pop();
						 		st.push(ch);
						 	}
						 	else
						 		st.push(ch);
						 }
						 break;
				case '*':if (st.isEmpty())
						 {
							st.push(ch);
						 }
						 else
						 {
						 	if (st.precedence(st.peek())>st.precedence(ch))
						 	{
						 		res=res+st.pop();
						 		st.push(ch);
						 	}
						 	else
						 		st.push(ch);
						 }
						 break;
				case '/':if (st.isEmpty())
						 {
							st.push(ch);
						 }
						 else
						 {
						 	if (st.precedence(st.peek())>st.precedence(ch))
						 	{
						 		res=res+st.pop();
						 		st.push(ch);
						 	}
						 	else
						 		st.push(ch);
						 }
						 break;
				case ')':st.push(ch);
						break;
				case '(':while(st.peek()!=')')
							{
								res=res+st.pop();
							}
							st.pop();
							break;
                case ']':st.push(ch);
						break;
				case '[':while(st.peek()!=']')
							{
								res=res+st.pop();
							}
							st.pop();
							break;
			}
		}
	}

	while(!st.isEmpty())
	{
		res=res+st.pop();
	}

    for(int i=res.length()-1;i>=0;i--)
        cout<<res[i];
	return 0;
}

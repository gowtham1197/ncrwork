#include<bits/stdc++.h>
using namespace std;

class Stack{
	int top;
	int size;
	int *s;
	public:
		Stack()
		{
			top=-1;
			s=NULL;
			size=0;
		}

		void push(int x)
		{
			if (!isFull())
			{
				s[++top]=x;
				cout<<"Element pushed Successfully\n";
				cout<<"-----------------------------\n";
			}
			else{
				cout<<"Stack is Full\n";
				cout<<"------------------------------\n";
			}
		}

		void getsize(int n)
		{
			s=new int[n];
			size=n;
		}

		int pop()
		{
			if(!isEmpty())
			{
				return(s[top--]);
			}
			else{
				return -99;
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
	cout<<"Welcome to stack implementation\n";
	int l;
	cout<<"Enter the size of the Stack : ";
	cin>>l;
	st.getsize(l);
	cout<<"You Entered : "<<l<<" as your stack size\n";
	while(1)
    {
	    cout<<"\nWhich operation do you want to perform\n1.Push\n2.Pop\n3.Display\n4.Check whether th stack is Full\n5.Check whether th stack is Empty\n6.Know what is peek of the stack\n7.Exit\n";
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:
					if (!st.isFull())
					{
						int a;
						cout<<"Enter the element you want to push : ";
						cin>>a;
						st.push(a);
					}
					else{
						cout<<"Not Possible as Stack is Full\n";
						cout<<"------------------------------\n";
					}
			break;

			case 2:
					if (!st.isEmpty())
					{
						int k=st.pop();
						cout<<"Element "<<k<<" is poped\n";
						cout<<"------------------------------\n";
					}
					else{
						cout<<"Stack is empty\n";
						cout<<"------------------------------\n";
					}
			break;
			case 3:
					st.display();
			break;
			case 4:if(st.isFull()){
					cout<<"Stack is Full\n";
					cout<<"------------------------------\n";
				}
					else{
						cout<<"Stack is not Full\n";
						cout<<"------------------------------\n";
					}
			break;
			case 5:if(st.isEmpty()){
					cout<<"Stack is empty\n";
					cout<<"------------------------------\n";
					}
					else{
						cout<<"Stack is not Empty\n";
						cout<<"------------------------------\n";
					}
			break;
			case 6:if(st.peek()!=-99)
					{
						cout<<"Peek of the stack is : "<<st.peek()<<endl;
						cout<<"------------------------------\n";
					}
					else
					{
						cout<<"stack is empty"<<endl;
						cout<<"------------------------------\n";
					}
			break;
			case 7:exit(0);
			break;
			default:cout<<"Enter correct option\n";
			cout<<"------------------------------\n";
			break;
		}

    }
	return 0;
}

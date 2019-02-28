#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class stack_ll
{
	struct node *start;
public:
	stack_ll()
	{
		start=NULL;
	}


	void display()
	{
	    struct node *temp=start;
	    if(start==NULL)
        {
            cout<<"List is empty\n";
        }
	    else{
            while(temp!=NULL)
            {
            cout<<temp->data<<" ";
            temp=temp->next;
            }
            cout<<endl<<endl;
	    }
	}

	void push(int ele)
	{
		struct node *temp,*curr;
		temp=new node;
		temp->data=ele;
		if(start!=NULL)
		{
			temp->next=start;
		}
		else
			temp->next=NULL;
		start=temp;
	}

	int pop()
	{
		if(start!=NULL)
		{
			struct node *curr=start,*temp;
			int x=-99;
			if(start->next!=NULL)
			{
				x=start->data;
				temp=start;
				start=start->next;
				delete temp;
				return x;
			}
			else
			{
				x=start->data;
				temp=start;
				delete temp;
				start=NULL;
				return x;

			}

		}
		else
			cout<<"Stack is Empty\n";
	}

	bool checkEmpty()
	{
	    return(start==NULL);
	}

	~stack_ll()
	{
		struct node *temp,curr;
		while(start!=NULL)
		{
			temp=start;
			start=start->next;
			delete temp;
		}
	}
};



int main()
{
	stack_ll s;
	cout<<"Welcome to Stack Using linked list program\n";
	while(1)
	{
		cout<<"Which Operation do you want to perform\n";
		cout<<"1.Push\n2.Pop\n3.Display\n4.Check whether th stack is Empty\n5.Exit\n";
		int ch;
		cin>>ch;
		switch(ch)
		{
		    int x,ele,sele;
		    case 1: cout<<"Enter the element you want to insert : ";
	                cin>>ele;
	                s.push(ele);
	                break;
	        case 2: x=s.pop();
	                cout<<x<<" is deleted\n";
	                break;
	        case 3:s.display();
	        		break;
	        case 4: if (s.checkEmpty()
                     )
			        {
			        	cout<<"Stack is Empty"<<endl;
			        }
			        else
			        {
			        	cout<<"Stack is not Empty\n";
			        }
	        case 5:exit(0);
	        		break;
	        default:cout<<"Enter the correct option\n";
		}
	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class queue_ll
{
	struct node *start;
public:
	queue_ll()
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

	void enque(int ele)
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

	int deque()
	{
		int x;
		struct node *curr=start,*temp;
		if(start!=NULL)
		{
			if(start->next==NULL)
			{
				x=start->data;
				temp=start;
				start=NULL;
				delete temp;
				return x;
			}
			else
			{
				while(curr->next->next!=NULL)
				{
					curr=curr->next;
				}
				x=curr->next->data;
				temp=curr->next;
				curr->next=NULL;
				delete temp;
				return x;
			}

		}
		else
			cout<<"Queue is Empty\n";
	}

	bool checkEmpty()
	{
	    return(start==NULL);
	}

	~queue_ll()
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
	queue_ll q;
	cout<<"Welcome to Queue Using linked list program\n";
	while(1)
	{
		cout<<"Which Operation do you want to perform\n";
		cout<<"1.Enque\n2.Deque\n3.Display\n4.Check whether th Queue is Empty\n5.Exit\n";
		int ch;
		cin>>ch;
		switch(ch)
		{
		    int x,ele,sele;
		    case 1: cout<<"Enter the element you want to insert : ";
	                cin>>ele;
	                q.enque(ele);
	                break;
	        case 2: x=q.deque();
	                cout<<x<<" is deleted\n";
	                break;
	        case 3: q.display();
	        		break;
	        case 4: if (q.checkEmpty())
			        {
			        	cout<<"Queue is Empty"<<endl;
			        }
			        else
			        {
			        	cout<<"Queue is not Empty\n";
			        }
	        case 5:exit(0);
	        		break;
	        default:cout<<"Enter the correct option\n";
		}
	}

	return 0;
}


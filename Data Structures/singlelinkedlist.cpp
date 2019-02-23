#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class linkedlist
{
	struct node *start;
public:
	linkedlist()
	{
		start=NULL;
	}

	void insert_begin(int ele)
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
	void insert_last(int ele)
	{
		struct node *temp,*curr;
		temp=new node;
		temp->data=ele;
		temp->next=NULL;
		if(start!=NULL)
		{
			curr=start;
			while(curr->next!=NULL)
			{
				curr=curr->next;
			}
			curr->next=temp;
		}
		else
		{
			start=temp;
		}

	}

	void insert_after(int sele,int ele)
	{
		struct node *curr=start,*temp;
		if(start!=NULL)
		{
			while(curr!=NULL&&curr->data!=sele)
			{
				curr=curr->next;
			}
			if(curr!=NULL)
			{
				temp=new node;
				temp->data=ele;
				temp->next=curr->next;
				curr->next=temp;
			}
			else
				cout<<sele<<" not found\n";
		}
		else
			cout<<"List is Empty\n";
	}

	void insert_before(int sele,int ele)
	{
		struct node *temp,*curr=start;
		if(start!=NULL)
		{
			if(start->data==sele)
			{
				temp=new node;
				temp->data=ele;
				temp->next=start;
				start=temp;
				return;
			}
			while(curr->next!=NULL&&curr->next->data!=sele)
			{
				curr=curr->next;
			}
			if(curr->next!=NULL)
			{
				temp=new node;
				temp->data=ele;
				temp->next=curr->next;
				curr->next=temp;
			}
			else
				cout<<sele<<" not found\n";
		}
		else
			cout<<"List is Empty\n";
	}
	int delete_begin()
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
			cout<<"List is Empty\n";
	}
	int delete_last()
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
			cout<<"List is Empty\n";
	}
	void delete_spec(int ele)
	{
		struct node *temp,*curr=start;
		if(start!=NULL)
		{
			if(curr->data==ele)
			{
				temp=curr;
				start=start->next;
				delete temp;
				return;
			}
			else
			{
				while(curr->next!=NULL&&curr->next->data!=ele)
				{
					curr=curr->next;
				}

				if(curr->next!=NULL)
				{
					temp=curr->next;
					curr->next=curr->next->next;
					delete temp;
				}
				else
					cout<<ele<<" is not found in the list\n";
			}


		}
		else
			cout<<"List is Empty\n";
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
	void reverse()
	{
		struct node *temp,*prev=NULL,*curr=start;

		while(curr!=NULL)
		{
			temp=curr;
			curr=curr->next;
			temp->next=prev;
			prev=temp;
		}
		start=temp;


	}


	~linkedlist()
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
	linkedlist l;
	cout<<"Welcome to linked list program\n";
	while(1)
	{
		cout<<"Which Operation do you want to perform\n";
	cout<<"1.Insert At beggining of the lsit\n2.Insert at the end o the list\n3.Insert after element\n4.Insert before the element\n5.Delete at Beggining of the list\n6.Delete at the end of the list\n7.Delete the specific element\n8.Reverse the linked list\n9.Display the linked list\n10.Exit\n";
	int ch;
	cin>>ch;
	switch(ch)
	{
	    int x,ele,sele;
	    case 1: cout<<"Enter the element you want to insert : ";
                cin>>ele;
                l.insert_begin(ele);
                break;
        case 2: cout<<"Enter the element you want to insert : ";
                cin>>ele;
                l.insert_last(ele);
                break;
        case 3: cout<<"Enter the element you want to insert : ";
                cin>>ele;
                cout<<"Enter element after which you want to insert "<<ele<<" in the linked list\n";
                cin>>sele;
                l.insert_after(sele,ele);
                break;
        case 4: cout<<"Enter the element you want to insert : ";
                cin>>ele;
                cout<<"Enter element before which you want to insert "<<ele<<" in the linked list\n";
                cin>>sele;
                l.insert_before(sele,ele);
                break;
        case 5: x=l.delete_begin();
                cout<<x<<" is deleted\n";
                break;
        case 6: x=l.delete_last();
                cout<<x<<" is deleted\n";
                break;
        case 7: cout<<"Enter the element you want to delete : ";
                cin>>ele;
                l.delete_spec(ele);
                break;
        case 8:l.reverse();
        		break;
        case 9:l.display();
        		break;
        case 10:exit(0);
        		break;
        default:cout<<"Enter the correct option\n";
	}
	}

	return 0;
}

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


	void addnode(int ele)
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

	void merge(linkedlist a,linkedlist b)
	{
		struct node *curr_a=a.start,*curr_b=b.start;
		while(curr_a!=NULL&&curr_b!=NULL)
		{
			if(curr_a->data==curr_b->data)
			{
				addnode(curr_a->data);
				addnode(curr_a->data);
				curr_a=curr_a->next;
				curr_b=curr_b->next;
			}

			else if (curr_a->data>curr_b->data)
            {
				addnode(curr_b->data);
				curr_b=curr_b->next;
			}
			else
			{
				addnode(curr_a->data);
				curr_a=curr_a->next;
			}
        }
		while(curr_a!=NULL)
		{
			addnode(curr_a->data);
			curr_a=curr_a->next;
		}
		while(curr_b!=NULL)
		{
			addnode(curr_b->data);
			curr_b=curr_b->next;
		}

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

	void createpoly()
	{
		int nodes,n;

		cout<<"Enter No of nodes you want to add in polynomial :";
		cin>>nodes;
		cout<<"Enter nodes in sorted manner :";
		while(nodes--)
		{
			cin>>n;
			addnode(n);
		}
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
	linkedlist a,b,res;
	cout<<"Welcome to Merging Sorted lists program\n";
	cout<<endl;
	cout<<"You are creating first List\n";
		a.createpoly();
	cout<<"You are creating second List\n";
		b.createpoly();
    cout<<"Your first linked list is : ";
    a.display();
	cout<<"Your Second Linked list is : ";
	b.display();
	res.merge(a,b);
	cout<<"Your Merged Linked list is : ";
	res.display();
	return 0;
}

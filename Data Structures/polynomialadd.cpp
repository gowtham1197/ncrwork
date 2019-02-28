#include <bits/stdc++.h>
using namespace std;

struct node
{
	int coeff;
	int power;
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


	void addnode(int c,int p)
	{
		struct node *temp,*curr;
		temp=new node;
		temp->coeff=c;
		temp->power=p;
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

	void add(linkedlist a,linkedlist b)
	{
		struct node *curr_a=a.start,*curr_b=b.start;
		while(curr_a!=NULL&&curr_b!=NULL)
		{
			if(curr_a->power==curr_b->power)
			{
				addnode((curr_a->coeff)+(curr_b->coeff),curr_b->power);
				curr_a=curr_a->next;
				curr_b=curr_b->next;
			}

			else
			{
				if (curr_a->power>curr_b->power)
				{
					addnode(curr_a->coeff,curr_a->power);
					curr_a=curr_a->next;
				}
				else
				{
					addnode(curr_b->coeff,curr_b->power);
					curr_b=curr_b->next;
				}
			}
		}
		while(curr_a!=NULL)
		{
			addnode(curr_a->coeff,curr_a->power);
			curr_a=curr_a->next;
		}
		while(curr_b!=NULL)
		{
			addnode(curr_b->coeff,curr_b->power);
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
            cout<<temp->coeff<<" "<<temp->power<<" ";
            temp=temp->next;
            }
            cout<<endl<<endl;
	    }
	}

	void createpoly()
	{
		int nodes,c,p;

		cout<<"Enter No of nodes you want to add in polynomial :";
		cin>>nodes;
		cout<<"Enter the polynomial nodes in terms of Coefficient and power :";
		while(nodes--)
		{
			cin>>c>>p;
			addnode(c,p);
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
	cout<<"Welcome to Polynomial Addition using linked list program\n";
	cout<<"You are adding first polynomial\n";
		a.createpoly();
	cout<<"You are adding second polynomial\n";
		b.createpoly();
    a.display();
	cout<<endl;
		b.display();
	res.add(a,b);
	res.display();
	return 0;
}

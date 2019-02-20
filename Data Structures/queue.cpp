#include<bits/stdc++.h>
using namespace std;

class queuee
{
	int *arr,size,rear,front;
public:
	queuee()
	{
		rear=front=-1;
		size=0;
		arr=NULL;
	}

	void getsize(int n)
	{
		arr=new int[n];
        size=n;
	}

	bool underflow()
	{
		if(rear==front&&front==-1)
			return true;
		else
			return false;
	}

	bool overflow()
	{
		if(rear==size-1)
			return true;
		else
			return false;
	}

	void enque(int ele)
	{
		if(overflow())
		{
			cout<<"Queue is Full\n";
		}
		else
		{
			if(underflow())
			{
				rear=front=0;
				arr[rear]=ele;
			}
			else
			{
				arr[++rear]=ele;
			}
		}
	}

	int deque()
	{
		int x=-99;
		if(underflow())
		{
			cout<<"Queue is Empty\n";
		}
		else
		{
			if(rear==front)
			{
				x=arr[rear];
				rear=front=-1;
			}
			else
			{
				x=arr[front++];
			}
		}
		return x;
	}

	void display()
	{
		int i;
		if(!underflow()){
			for(i=front;i<=rear;i++){
			cout<<arr[i]<<" ";
			}
		}
		else{
			cout<<"Queue is Empty\n";
		}


	}
	~queuee(){
		delete arr;
	}

};

int main()
{
	queuee q;
	int s;
	cout<<"Enter the size of the queue : ";
	cin>>s;
	cout<<"You have entered the size as "<<s<<endl;
	q.getsize(s);
	while(1)
	{
		int ch;
		cout<<"Enter the operation to be performed\n1.Enque\n2.Deque\n3.Is overflow\n4.Is underflow\n5.Display\n6.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:int ele;
					cout<<"Enter the element to enque : ";
				   	cin>>ele;
				   	q.enque(ele);
					break;
			case 2:	int x;
                    x=q.deque();
					cout<<x<<" is dequeued\n";
					break;
			case 3: if(q.overflow())
					cout<<"It is overflowed\n";
					else
						cout<<"Not overflowed\n";
					break;
			case 4:	if(q.underflow())
					cout<<"It is underflowed\n";
					else
						cout<<"Not underflowed\n";
					break;
			case 5:q.display();
                    break;
			case 6:exit(0);
			default:cout<<"Enter correct option\n";
					break;
		}
	}
	return 0;
}

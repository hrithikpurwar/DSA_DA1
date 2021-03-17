#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
class linkedList{
	public: node *head, *tail;

	public: linkedList()
	{
		head=NULL;
		tail=NULL;
	}
	void insertItem(int item)
	{
		node *temp=new node;
		temp->data=item;
		temp->next=NULL;
		if (head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	}
	void display()
	{
		node *temp;
		temp=head;
		if (head==NULL)
		{
			cout<<"List is empty";
		}
		else{
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next;
			}
		}
	}
	
	void push(int data)  
{  
    node* temp = new node();  
  
    temp->data = data;  
  
    temp->next = head;  
  
    head = temp;  
} 

void deleteItem(int pos){
    node *temp, *pre, *prepre;
    temp=head;
    pre=NULL;
    prepre=NULL;
    for (int i=0; i<pos; i++)
    {
        if (i>0)
        {
            prepre=pre;
        }
        pre=temp;
        temp=temp->next;
        
    }
    prepre->next=temp;
}
	
	void insertItemPlace(int pos, int data)
	{
	    node* temp= new node();
	    node *pre, *cur;
	    pre=NULL;
	    cur=head;
	    temp->data=data;
	    for (int i=0; i<pos-1; i++)
	    {
	        pre=cur;
	        cur=cur->next;
	    }
	    temp->next=cur;
	    pre->next=temp;
	}
	
	void reverse(struct node *current) {
    if(head == NULL) {  
        cout<<"List is empty";  
        return;  
    }  
    else{  
        if(current->next == NULL) {  
            cout<<current->data<<"->";  
            return;  
        }  
        reverse(current->next);  
        cout<<current->data<<"->";  
    }  
}  
};
int main()
{
	linkedList object;
	int n;
	int d;
	cout<<"Enter number of nodes you want to have-";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
	    cout<<"Insert element"<<i<<endl;
	    cin>>d;
		object.insertItem(d);

	}
	object.display();
	cout<<endl;
	cout<<"\n1.Insert a new element at the beginning\n2.Insert a new element at a given position\n3.Delete an element from a given position";
	int choice;
	cin>>choice;
	switch(choice){
		case 1: cout<<"Enter element to be added at the beginning\n";
				int ele;
				cin>>ele;
				object.push(ele);
				object.display();
				cout<<endl;
				break;
		case 2: cout<<"Enter element to be added\n";
				cin>>ele;
				cout<<"Enter position at which it is to be added\n";
				int pos;
				cin>>pos;

				object.insertItemPlace(pos,ele);
				object.display();
				cout<<endl;
				break;
		case 3: cout<<"Enter position from which element to be deleted\n";
				cin>>pos;
				object.deleteItem(pos);
				object.display();
				break;
		default: cout<<"\nEnter valid choice";
	

	}
	
	return 0;
}
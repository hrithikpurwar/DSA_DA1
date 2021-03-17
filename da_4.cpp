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
	object.reverse(object.head);
	return 0;
}
#include<iostream>
using namespace std;

struct node{  
    int numerator;  
    int denominator;  
};   
struct node *frac1=(struct node*)malloc(sizeof(struct node));
struct node *frac2=(struct node*)malloc(sizeof(struct node));
struct node *sum=(struct node*)malloc(sizeof(struct node));


void input(struct node *obj) 
{
    cout<<"Enter Numerator\n";
    cin>>obj->numerator;
    cout<<"Enter Denominator\n";
    cin>>obj->denominator;
}
void display(struct node *obj) 
{
    cout<<"\n"<<obj->numerator<<"/";
    cout<<obj->denominator;
}
void add(struct node *obj1, struct node *obj2, struct node *obj3) 
{
    obj3->denominator=obj1->denominator*obj2->denominator;
    obj3->numerator=obj1->numerator*obj2->denominator+obj2->numerator*obj1->denominator;
}

int main()
{
    
    input(frac1);
    input(frac2);
    display(frac1);
    display(frac2);
    add(frac1, frac2, sum);
    display(sum);
    return 0;
}



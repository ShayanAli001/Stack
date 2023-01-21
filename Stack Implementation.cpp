#include<iostream>
using namespace std;
#include<stack>
class Stack
{
	private:
		int *foo;
		int length;
		int top;
	
	public:
	Stack(int n)
	{
		this -> length = n;
		foo = new int[n];
		top = -1;
		
	}	
	
	void push(int b)
	{
		if(top == length-1)
		{
			cout << "Stack is full :" ;
		}
		
		foo[++top] = b;
		
	}
	
	void pop()
	{
		if(top >= 0)
		{
			top--;
		}
		else
		{
			cout << "Stack is empty :";
		}
	}
	
	int peek()
	{
		if(top >= 0)
		{
			return foo[top];
		}
		
		else
		{
			cout << "No element present in array:";
			return -1;
		}
	}
	
	
	bool isempty()
	{
		if(top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
};



int main()
{
	 
	 Stack st(5);
	 st.push(1);
	 st.push(2);
	 st.push(3);
	 
	 cout<<st.peek()<<endl;
	 
	 st.pop();
	 
	 cout<<st.peek()<<endl;
	  
	 st.pop();
	 
	 cout<<st.peek()<<endl;
	 
	  
	 st.pop();
	 
	 cout<<st.peek()<<endl;
	 
	 
	 
	 if(st.isempty())
	 {
	 	cout<<"Stack is empty :"<<endl;
	 }
	 else
	 {
	 	cout<<"Stack is not empty :";
	 }
	 
}
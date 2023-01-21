#include<iostream>
#include<queue>
using namespace std;


class Stack
{
	private:
		queue<int>q1;
		queue<int>q2;
		int size;
	public:
		Stack()
		{
			size = 0;
		}
		
		
	void push(int val)
	{
		q2.push(val);
		size++;
		while(!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}
		
			queue<int>temp = q1;
			q1 = q2;
			q2 = temp;
			
	}
	
	void pop()
	{
		q1.pop();
		size--;
	}
	
	
	int top()
	{
		return q1.front();
	}
	
	int sizee()
	{
		return size;
	}
};



int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	cout << st.top()<<endl;
	/*st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();*/
	cout << st.sizee()<<endl;
	
	
	return 0;
}
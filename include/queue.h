
#ifndef __QUEUE_H__  // назначение?
#define __QUEUE_H__

#include <iostream>
#include <stack>

using namespace std;



//template<class, class...> class TCont
template<class T>
class Queue
{
	size_t sz;
	stack<T> leftStack;
	stack<T> rightStack;
public:
	Queue() : sz(0) { }
	size_t size() const { return sz; }
	bool IsEmpty() const { return sz == 0; }
	void Push(const T& val) {
		leftStack.push(val);
		sz++;
	}
	T Pop() {
		if (rightStack.empty())
		{
			if (leftStack.empty()) throw 1;
			while (!leftStack.empty()) {
				rightStack.push(leftStack.top());
				leftStack.pop();
			}
		}
		T val = rightStack.top();
		rightStack.pop();
		sz--;
		return val;
	}
};



#endif
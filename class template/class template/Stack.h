template<typename T>
class Stack
{
public:
	explicit Stack(int=10);   //constructor with stack size of ten

	~Stack()
	{
		delete [] stackPtr;       //delocate stack space destructor
	}
	bool push(const T&);
	bool pop(T&);
	bool isEmpty()const
	{
		return top==-1;
	}
	bool isFull()
	{
		return top==size-1;
	}
private:
	int size;
	int top;
	T *stackPtr;
};
		//Constructor template
template<typename T>
Stack<T>::Stack(int s)
	:size(s>0?s:10),        //validate size
		top(-1),           //initially empty
		stackPtr(new T[size])   //memory allocation for the stack
{
}

//push function
template<typename T>
bool Stack<T>::push(const T &pushValue)
{
	if(!isFull())
	{
		stackPtr[++top]=pushValue;
		return true;
	}
	return false;
}

//pop function
template<typename T>
bool Stack<T>::pop(T &popValue)
{
	if(!isEmpty())
	{
		popValue=stackPtr[top--];
		return true;
	}
	return false;
}

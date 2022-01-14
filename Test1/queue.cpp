#include <iostream>

template <class T>
class Queue {
public :
	Queue(int queueCapacity = 10);
	bool IsEmpty() const;
	T& Front() const;
	T& Rear() const;
	void Push(const T& item);
	void Pop();
private :
	T* queue;
	int front, rear, capacity;
};

template<class T>
Queue<T>::Queue(int queueCapacity) : capacity(queueCapacity) {
	if (capacity < 1) throw "Queue capacity must be > 0";
	queue = new T[capacity];
	front = rear = 0;
}

template <class T>
inline bool Queue<T>::IsEmpty() const { return front == rear; }

template<class T>
inline T& Queue<T>::Front() const {
	if (IsEmpty()) throw "Queue is empty. No front element";
	return[(front + 1) % capacity];
}

template <class T>
inline T& Queue<T>::Rear() const {
	if (IsEmpty() const) throw "Queue is empty. No rear element";
	return queue[rear];
}

template <class T>
void Queue<T>::Push(const T& x) {
	if ((rear + 1) % capacity == front) {

	}
	rear = (rear + 1) % capacity;
	queue[rear] = x;
}

#include "queue.h"
#include <gtest.h>


TEST(TestQueue, CanCreate) {
	ASSERT_NO_THROW(Queue<int> queue);
}

TEST(TestQueue, CanPuch) {
	Queue<int> queue;
	ASSERT_NO_THROW(queue.Push(1));
}

TEST(TestQueue, CanPopFromNonEmptyQueue) {
	Queue<int> q;
	q.Push(1);
	ASSERT_NO_THROW(q.Pop());
}


TEST(TestQueue, NotCanPopFromEmptyQueue) {
	Queue<int> queue;
	ASSERT_ANY_THROW(queue.Pop());
}


TEST(TestQueue, CorrectReturnSize) {
	Queue<int> queue;
	for (int i=0; i < 10; i++) {
		queue.Push(i);
	}
	queue.Pop();
	ASSERT_EQ(queue.size(), 9);
}

TEST(TestQueue, CorrectReturnSizeFromEmptyQueue) {
	Queue<int> queue;
	ASSERT_EQ(queue.size(), 0);
}

TEST(TestQueue, CorrectReturnIsEmptyFromEmptyQueue) {
	Queue<int> queue;
	ASSERT_EQ(queue.IsEmpty(), 1);
}

TEST(TestQueue, CorrectReturnIsEmptyFromNonEmptyQueue) {
	Queue<int> queue;
	queue.Push(8);
	ASSERT_EQ(queue.IsEmpty(), 0);
}

TEST(TestQueue, CanCorrectReturnPopFromNonEmptyQueue) {
	Queue<int> q;
	q.Push(1);
	q.Push(2);
	q.Push(3);
	q.Pop();
	q.Pop();
	q.Push(4);
	q.Push(5);
	q.Pop();
	q.Push(6);
	ASSERT_EQ(q.Pop(), 4);
}
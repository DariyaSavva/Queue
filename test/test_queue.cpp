#include "queue.h"
#include <gtest.h>


//TEST(TestStack, CanCreate) {
//
//	ASSERT_NO_THROW(Stack<int> s);
//}
//
//TEST(TestStack, CanPuch) {
//	Stack<int> s;
//	ASSERT_NO_THROW(s.Push(1));
//}
//
//TEST(TestStack, CanPopFromNonEmptyStack) {
//	Stack<int> s;
//	s.Push(5);
//	s.Push(7);
//	s.Pop();
//	ASSERT_EQ(s.Top(), 5);
//}
//
//TEST(TestStack, CanReturnHeadFromNonEmptyStack) {
//	Stack<int> s;
//	s.Push(5);
//	s.Push(7);
//	ASSERT_EQ(s.Top(), 7);
//}
//
//TEST(TestStack, NotCanPopFromEmptyStack) {
//	Stack<int> s;
//	ASSERT_ANY_THROW(s.Pop());
//}
//
//
//TEST(TestStack, CorrectReturnSize) {
//	Stack<int> s;
//	for (int i=0; i < 10; i++) {
//		s.Push(i);
//	}
//	ASSERT_EQ(s.size(), 10);
//}
//
//TEST(TestStack, CorrectReturnSizeFromEmptyStack) {
//	Stack<int> s;
//	ASSERT_EQ(s.size(), 0);
//}
//
//TEST(TestStack, CorrectReturnIsEmptyFromEmptyStack) {
//	Stack<int> s;
//	ASSERT_EQ(s.IsEmpty(), 1);
//}
//
//TEST(TestStack, CorrectReturnIsEmptyFromNonEmptyStack) {
//	Stack<int> s;
//	s.Push(8);
//	ASSERT_EQ(s.IsEmpty(), 0);
//}
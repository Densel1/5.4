#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "lists.h"

using namespace std;

List myList;

TEST_CASE("test_push_pop_back", "[push_pop_back]")
{
	for (int i = -1000; i < 1000; ++i)
	{
		myList.PushBack(i);
		CHECK(myList.PopBack() == i);
	}
}

TEST_CASE("test_push_pop_front", "[push_pop_front]")
{
	for (int i = -1000; i < 1000; ++i)
	{
		myList.PushFront(i);
		CHECK(myList.PopFront() == i);
	}
}

TEST_CASE("test_pop_back", "[pop_back]")
{

	CHECK(myList.PopBack());

}


TEST_CASE("test_pop_front", "[pop_front]")
{

	CHECK(myList.PopFront());

}


TEST_CASE("random", "[random]")
{
	myList.PushBack(10);
	myList.PushFront(20);
	myList.PushBack(30);
	myList.PushFront(5);
	CHECK(myList.PopFront() == 5);
	CHECK(myList.PopFront() == 20);
	CHECK(myList.PopFront() == 10);
	CHECK(myList.PopBack() == 30);
	myList.PushBack(15);
	CHECK(myList.PopFront() == 15);

}


int main()
{

	return Catch::Session().run();
}
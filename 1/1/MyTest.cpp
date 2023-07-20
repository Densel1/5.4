
#include <C:/vcpkg/installed/x64-windows/include/catch2/catch_test_macros.hpp> // C:/Users/Igor/Documents/GitHub/Catch2/src/
#include <C:/vcpkg/installed/x64-windows/include/catch2/catch_session.hpp>     // C:/Users/Igor/Documents/GitHub/Catch2/src/
#include "1.h"

using namespace std;

List myList;



TEST_CASE("test_empty", "[empty]") {

	CHECK(myList.Empty()==0);
	CHECK(myList.Size() == 3);
	myList.Clear();
	CHECK(myList.Empty() == 1);
}


int main(int argc, char *argv[])
{
	myList.PushBack(5);
	myList.PushBack(15);
	myList.PushBack(25);
	return Catch::Session().run();
}

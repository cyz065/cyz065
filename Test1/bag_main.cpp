#include "bag.h"
#include "Linked_List.h"
#include <iostream>

using namespace std;

int main(void) {
	bag b1;
	b1.insert(5);
	b1.insert(10);
	b1.insert(5);
	b1.erase_one(5);
	b1.erase_one(5);
	bag::size_type bag_size = b1.size();
	bag::size_type number = b1.grab();

	cout << bag_size << endl;
	cout << number << endl;
	cout << b1.count(5) << endl;

	bag b3;
	b3.insert(10);
	b3.insert(20);
	cout << b3.size() << endl;
	cout << b3.grab() << endl;
}
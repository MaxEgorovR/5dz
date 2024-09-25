#include "ArrayList.h"
using namespace std;

int main() {
	ArrayList<int>* list = new ArrayList<int>();
	list->push_back(5);
	list->push_back(45);
	list->push_back(52);
	list->push_back(42);
	list->push_back(65);

	cout<<list->at(2);
}
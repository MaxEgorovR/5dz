#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;

template <typename T>
class ArrayList {
public:
	shared_ptr<vector<T>> list = make_shared<vector<T>>();

	int length = 0;

	ArrayList()
	{

	}

	ArrayList(int  length)
	{
		this->length = length;
		this->list = make_shared<vector<T>>(this->length);
	}

	void push_back(T val) {
		(*list).push_back(val);
	}

	T at(int index) {
		return (*this->list)[index];
	}
};
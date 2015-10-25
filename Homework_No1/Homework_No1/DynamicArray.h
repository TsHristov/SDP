#include<iostream>
#pragma once
class DynamicArray
{
private:
	size_t size; // Length
	size_t capacity; //AllocatedSize
	int* phead;

public:
	DynamicArray();
	~DynamicArray();
	DynamicArray(const DynamicArray&);
	const DynamicArray& operator=(const DynamicArray&);

public:
	void insert(int);
	void resize();
	int& operator[](int);
	void free();

public:
	void print() const;
};

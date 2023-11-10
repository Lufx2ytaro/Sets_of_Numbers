#pragma once
#include<iostream>

using namespace std;

class SetOfNum
{
	uint32_t* arr;
	uint32_t sszz;

public:

	SetOfNum(unsigned int size, uint32_t* arr);
	

	SetOfNum() : SetOfNum(0, nullptr) {};

	SetOfNum(const SetOfNum& obj) : arr{ new uint32_t[obj.sszz] }, sszz{ obj.sszz } {

		for (uint32_t i = 0; i < obj.sszz; i++)
		{
			arr[i] = obj.arr[i];
		}
	}

	~SetOfNum()
	{
		delete[]arr;
	}






	bool has(uint32_t value,uint32_t limit =-1) const; //присутствиет ли какое либо число повторно
	void show() const
	{
		for (size_t i = 0; i < sszz; i++)
		{
			cout << arr[i]<<".";
		}
	}




	SetOfNum& operator ++();
	SetOfNum& operator ++(int);

	SetOfNum& increment();

	static const SetOfNum add(const SetOfNum& set, uint32_t value); //взять обьект класса и прибавить к нему новое значение

	

	friend const SetOfNum operator +(const SetOfNum& set, uint32_t value);
		

	friend const SetOfNum operator +(uint32_t value, const SetOfNum& set);

	//AetOfNum& operator+=(uint32_t value);
	void operator+=(uint32_t value);


	

};

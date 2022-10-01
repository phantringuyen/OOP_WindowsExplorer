#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Component
{
protected:
	string name;
	float size;
public:
	virtual string GetName() = 0;
	virtual float GetSize() = 0;
	virtual void AddComponent(Component* ifile)
	{
		//Không xử lý gì tại chỗ này, để cho lớp Composite xử lý
		//Khai báo đa hình để gọi đệ quy trong Composite
	}
	virtual void RemoveComponent(Component* ifile)
	{
		//Không xử lý gì tại chỗ này, để cho lớp Composite xử lý
		//Khai báo đa hình để gọi đệ quy trong Composite
	}
	virtual ~Component()
	{
		//Nhớ đa hình phương thức hủy (hủy ảo)
	}
};
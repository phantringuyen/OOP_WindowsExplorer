#pragma once
#include "O_dia.h"

class Composite : public Component
{
	//Mảng chứa tất cả các component (bao gồm cả leaf và composite)
	vector<Component*> components;
public:
	string GetName()
	{
		return this->name;
	}
	//Cài đặt lại hàm GetSize, đệ quy trong Composite
	float GetSize()
	{
		float totalSize = 0;
		for (int i = 0; i < components.size(); i++)
			totalSize += components[i]->GetSize(); //đệ quy ngay tại vị trí này
	}
	void AddComponent(Component* iComp)
	{
		//Xử lý thêm 1 component vào vector<Component*>
	}
	void RemoveComponent(Component* iComp)
	{
		//Xử lý xóa 1 component ra vector<Component*>
	}
	~Composite() //Destructor xóa hết tất cả file và folder có trong folder
	{
		//Xử lý xóa hết toàn bộ Composite (đệ quy)
	}
};
#pragma once
#include "PostgressManager.hxx"

class person
{

public :
	PostgressManager* pl = new PostgressManager();
	person();
	void Create();
	void insert();
	//void update();
	//void delete_();
	void Show();
};


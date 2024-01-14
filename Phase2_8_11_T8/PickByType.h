#pragma once
#include "Actions/Action.h"
#include "ApplicationManager.h"
#include"GUI/Output.h"
#include"GUI/Input.h"
#include "DEFS.h"
#include <string>

class PickByType : public Action
{
private:
	Point P1;
public:
	PickByType(ApplicationManager* pApp);

	//reads the parameters of the circle
	virtual void ReadActionParameters();

	//adds the circle to the figure list 
	virtual void Execute();
	virtual void Undo();
};


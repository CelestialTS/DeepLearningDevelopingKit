﻿/***************************************************************************************************/
/*                                               Deep Learning Developing Kit                                                   */
/*								        		 	                Layer     	                                                               */
/*                                                   www.tianshicangxie.com                                                        */
/*                                      Copyright © 2015-2018 Celestial Tech Inc.                                          */
/***************************************************************************************************/
#pragma once

// Header FIle
#include <vector>
#include "Layer.h"
#include "Node.h"
#include "..\MathLib\MathLib.h"

// Namespaces
using namespace Nerual;
using namespace std;

class Module
{
public:
	void PushLayer(Layer * _newLayer)
	{
		layers.push_back(_newLayer);
	}

	void Run(void)
	{

	}

public:
	vector<Layer *> layers;
};


class BPNet : public Module
{
public:

private:

};
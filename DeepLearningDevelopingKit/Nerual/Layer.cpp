﻿/***************************************************************************************************/
/*                                               Deep Learning Developing Kit                                                   */
/*								        		 	                Layer     	                                                               */
/*                                                   www.tianshicangxie.com                                                        */
/*                                      Copyright © 2015-2018 Celestial Tech Inc.                                          */
/***************************************************************************************************/

// Header files
#include "Layer.h"

Nerual::InputLayer::InputLayer(void)
{

}

Nerual::InputLayer::InputLayer(const size_t _n)
{
	for (size_t i = 0; i < _n; i++)
	{
		InputNode tempNode = *new InputNode();
		this->_nodes.push_back(tempNode);
	}
}

void Nerual::InputLayer::SetInput(const Vector<ElemType>& _vec)
{
	for (size_t i = 0; i < n; i++)
	{
		_nodes.at(i).tempInput = _vec(i);
	}
}

Vector<Nerual::ElemType> Nerual::InputLayer::GetOutput(void)
{
	Vector<ElemType> temp;
	for (size_t i = 0; i < n; i++)
	{
		temp(i) = _nodes.at(i).value;
	}
	return temp;
}

void Nerual::InputLayer::ForwardPropagation(void)
{
	for (size_t i = 0; i < n; i++)
	{
		_nodes.at(i).Calculate();
	}
}

Nerual::HiddenLayer::HiddenLayer(void)
{
}

Nerual::HiddenLayer::HiddenLayer(const size_t _n, const size_t _m)
{
	for (size_t i = 0; i < _n; i++)
	{
		HiddenNode tempNode = *new HiddenNode(_m);
		this->_nodes.push_back(tempNode);
	}
}

void Nerual::HiddenLayer::SetInput(const Vector<ElemType>& _vec)
{
	for (size_t i = 0; i < n; i++)
	{
		_nodes.at(i).tempInput = _vec(i);
	}
}

Vector<Nerual::ElemType> Nerual::HiddenLayer::GetOutput(void)
{
	return Vector<ElemType>();
}

void Nerual::HiddenLayer::ForwardPropagation(void)
{

}

ostream & Nerual::operator<<(ostream & _outstream, InputLayer & _layer)
{
	_outstream << typeid(_layer).name() << endl;
	_outstream << "	Node Num : " << _layer.n << endl;
	return _outstream;
}
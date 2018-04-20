﻿/***************************************************************************************************/
/*                                               Deep Learning Developing Kit                                                   */
/*								        		 	              DataSet     	                                                               */
/*                                                   www.tianshicangxie.com                                                        */
/*                                      Copyright © 2015-2018 Celestial Tech Inc.                                          */
/***************************************************************************************************/

// Header files
#include <vector>
#include "..\MathLib\MathLib.h"

// Namespaces
using namespace std;
using namespace MathLib;

namespace Data
{
	class DataSet
	{
		
	};

	class NumaricSet : public DataSet
	{
	public:
		typedef pair<Vector<double>, Vector<double>> Sample;
	public:
		NumaricSet();
	public:
		void AddToSet(const Sample & _sample);
	public:
		Sample GetBatch(void);
	private:
		vector<Sample> _data;
	};

	class ImageSet : public DataSet
	{
	public:

	private:
	};

	class AudioSet : public DataSet
	{
	public:

	private:
	};

	class VideoSet : public DataSet
	{
	public:

	private:
	};
}
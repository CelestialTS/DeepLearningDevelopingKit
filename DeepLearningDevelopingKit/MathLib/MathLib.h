﻿/***************************************************************************************************/
/*                                               Deep Learning Developing Kit                                                   */
/*								        		 	              MathLib 	                                                                  */
/*                                                   www.tianshicangxie.com                                                        */
/*                                      Copyright © 2015-2018 Celestial Tech Inc.                                          */
/***************************************************************************************************/
#pragma once

#define USING_DYNAMIC_MATHLIB

#ifdef USING_STATIC_MATHLIB
#include "..\MathLib\MathDef.h"
#include "..\MathLib\MatrixStatic.h"
#include "..\MathLib\VectorStatic.h"
#include "..\MathLib\ToolFunction.h"
#endif // USING_STATIC_MATHLIB

#ifdef USING_DYNAMIC_MATHLIB
#include "..\MathLib\MathDef.h"
#include "..\MathLib\MatrixDynamic.h"
#include "..\MathLib\ToolFunction.h"
#endif // USING_DYNAMIC_MATHLIB







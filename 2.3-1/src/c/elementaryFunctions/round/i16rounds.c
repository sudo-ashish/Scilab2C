/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Arnaud Torset
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
 

#include "round.h"

int16 i16rounds(int16 x) {
	int result;
	
	if(x>=0) 	result = (int16)((float)x+0.5);
	else 		result = (int16)((float)x-0.5);
	
	return (int16)result;
}

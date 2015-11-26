#ifndef __SPHERE_H__
#define __SPHERE_H__

#include "CSCIx229.h"
#include "color.h"
#ifdef __cplusplus
extern "C" {
#endif

extern float rep;
extern float shinyvec[1];
unsigned int texture[20];

//
// a function used to draw spheres: bubble and the bottom of the lamp.
//
void sphere(double x, 
	double y, 
	double z, 
	double r, 
	int startangle, 
	int endangle, 
	Color color, 
	bool isEmission, 
	int lightnum, 
	int ntex);

#ifdef __cplusplus
}
#endif


#endif //__SPHERE_H__

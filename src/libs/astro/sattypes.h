#ifndef __SATTYPES_H
#define __SATTYPES_H

/* $Id: sattypes.h,v 1.1.1.1 2006/01/13 20:43:56 jmi Exp $ */

typedef struct _Vec3 {
    double x, y, z;
} Vec3;


typedef struct _LookAngle {
    double az;
    double el;
    double r;
} LookAngle;


typedef struct _Geoloc {
    double lt;
    double ln;
    double h;
} GeoLoc;

#endif /* __SATTYPES_H */

/* For RCS Only -- Do Not Edit
 * @(#) $RCSfile: sattypes.h,v $ $Date: 2006/01/13 20:43:56 $ $Revision: 1.1.1.1 $ $Name:  $
 */

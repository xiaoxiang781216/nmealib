///////////////////////////////////////////////////////////
//
// NMEA library
// URL: http://nmea.jugum.org
// Author: Tim (xtimor@jugum.org)
// $Id: units.h 20 2007-04-04 08:05:03Z xtimor $
//
///////////////////////////////////////////////////////////

#ifndef __NMEA_UNITS_H__
#define __NMEA_UNITS_H__

#include "config.h"

///////////////////////////////////////////////////////////
// Distance units
///////////////////////////////////////////////////////////

#define NMEA_TUD_YARDS      (1.0936)        ///< Yeards, meter * NMEA_YARDS_CORR = yard
#define NMEA_TUD_KNOTS      (1.852)         ///< Knots, kilometer / NMEA_KNOTS_CORR = knot
#define NMEA_TUD_MILES      (1.609)         ///< Miles, kilometer / NMEA_MILES_CORR = mile

///////////////////////////////////////////////////////////
// Speed units
///////////////////////////////////////////////////////////

#define NMEA_TUS_MS         (3.6)           ///< Meters per seconds, (k/h) / NMEA_MPERS_CORR = (m/s)

#endif // __NMEA_UNITS_H__

#include "pebble.h"

#ifdef PBL_ROUND
static const GPathInfo MINUTE_HAND_POINTS = {
  4,
 (GPoint []) {
   { -3, 16 },
   { 5, 16 },
   { 4, -84 },
   { -2, -84 }
  }
 };
 
 static const GPathInfo HOUR_HAND_POINTS = {
   4,
   (GPoint []) {
     { -3, 16 },
     { 5, 16 },
     { 4, -55 },
     { -2, -55 }
   }
 };
 #else
  static const GPathInfo MINUTE_HAND_POINTS = {
    4,
    (GPoint []) {
 @@ -19,3 +40,4 @@ static const GPathInfo HOUR_HAND_POINTS = {
      { -2, -45 }
    }
  };
 #endif

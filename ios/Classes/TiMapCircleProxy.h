/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-Present by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#ifndef map_TiMapCircleProxy_h
#define map_TiMapCircleProxy_h

#import "TiBase.h"
#import "TiViewProxy.h"
#import <MapKit/MapKit.h>

@class TiMapViewProxy;

@interface TiMapCircleProxy : TiProxy {
  CLLocationCoordinate2D center;
  double radius;
  double alpha;
  double strokeWidth;
  TiColor *strokeColor;
  TiColor *fillColor;
}

@property (nonatomic, readonly) MKCircleRenderer *circleRenderer;

@end

#endif

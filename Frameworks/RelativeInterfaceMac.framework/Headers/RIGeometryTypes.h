//
//  RIGeometryTypes.h
//  RelativeInterface
//
//  Created by Max Weisel on 11/25/13.
//  Copyright (c) 2013 RelativeWave. All rights reserved.
//

// Points

typedef struct {
    float x;
    float y;
} RIPoint2F;

typedef struct {
    double x;
    double y;
} RIPoint2D;

typedef struct {
    int x;
    int y;
} RIPoint2I;

typedef struct {
    float x;
    float y;
    float z;
} RIPoint3F;


// Sizes

typedef struct {
    float width;
    float height;
} RISize2F;

typedef struct {
    int width;
    int height;
} RISize2I;

typedef struct {
    float width;
    float height;
    float depth;
} RISize3F;


// Rects

typedef struct {
    RIPoint2F origin;
    RISize2F size;
} RIRect2F;

typedef struct {
    RIPoint2I origin;
    RISize2I size;
} RIRect2I;


// Rays

typedef struct {
    RIPoint2F startPoint;
    RIPoint2F direction;
} RIRay2F;

typedef struct {
    RIPoint3F startPoint;
    RIPoint3F direction;
} RIRay3F;


// Planes

typedef struct {
    RIPoint3F normal;
    float distance;
} RIPlane;


// Coordinate System

typedef enum {
    RICoordinateSystemTopLeftOrigin = 0,
    RICoordinateSystemBottomLeftOrigin
} RICoordinateSystem;

typedef struct {
    RIPoint2F origin;
    RISize2F size;
} RICoordinateSpace;


// Textured Quads

typedef struct {
    RIPoint2F position;
    RIPoint2F texCoord;
} RIVertexPositionTexCoord2F;


typedef struct {
    RIPoint3F position;
    RIPoint2F texCoord;
} RIVertexPositionTexCoord3F;

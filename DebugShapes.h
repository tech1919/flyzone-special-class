#pragma once

#include "DrawDebugHelpers.h"

// Debug sphere macro
#define DEBUG_SPHERE(Location) \
    DrawDebugSphere(GetWorld(), Location, 25.f, 24, Fcolor::Green, true);

// Debug point macro
#define DEBUG_POINT(Location) \
    DrawDebugPoint(GetWorld(), Location, 10.f, FColor::Green, true);

#define DEBUG_LINE(Start , End) \
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, true, 0.f, 0, 10.0f);

// Debug vector macro
#define DEBUG_VECTOR(Start, End) \
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, true, 0.f, 0, 10.0f) \
    DrawDebugPoint(GetWorld(), End, 10.f, FColor::Green, true);


// Debug sphere macro for one tick
#define DEBUG_SPHERE_TICK(Location) \
    DrawDebugSphere(GetWorld(), Location, 25.f, 24, Fcolor::Green, false , -1.f);

// Debug point macro for one tick
#define DEBUG_POINT_TICK(Location) \
    DrawDebugPoint(GetWorld(), Location, 10.f, FColor::Green, false , -1.f);

// Debug line macro for one tick
#define DEBUG_LINE_TICK(Start , End) \
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, -1.f, 0, 10.0f);

// Debug vector macro for one tick
#define DEBUG_VECTOR_TICK(Start, End) \
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 0.f, 0, 10.0f) \
    DrawDebugPoint(GetWorld(), End, 10.f, FColor::Green, false , -1.f);

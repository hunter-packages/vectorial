#ifndef VECTORIAL_SPEC_HELPER_H
#define VECTORIAL_SPEC_HELPER_H

#define VECTORIAL_OSTREAM

#include "spec.h"
#include "vectorial/simd4f.h"
#include <cmath>

#include <iostream>
#include "vectorial/vec4f.h"
#include "vectorial/vec3f.h"
#include "vectorial/vec2f.h"

#include "vectorial/simd4x4f.h"

#define should_be_close_to(a,b,tolerance) should_be_close_to_(this, a,b,tolerance,__FILE__,__LINE__)
#define should_be_equal_simd4f( a, b, tolerance) should_be_equal_simd4f_(this, a,b,tolerance,__FILE__,__LINE__)
#define should_be_equal_vec4f( a, b, tolerance) should_be_equal_vec4f_(this, a,b,tolerance,__FILE__,__LINE__)
#define should_be_equal_vec3f( a, b, tolerance) should_be_equal_vec3f_(this, a,b,tolerance,__FILE__,__LINE__)
#define should_be_equal_vec2f( a, b, tolerance) should_be_equal_vec2f_(this, a,b,tolerance,__FILE__,__LINE__)

#define should_be_equal_simd4x4f( a, b, tolerance) should_be_equal_simd4x4f_(this, a,b,tolerance,__FILE__,__LINE__)





static void should_be_close_to_(specific::SpecBase *spec, float a, float b, float tolerance, const char *file, int line) {
    
    bool equal=true;
    if( fabs(b-a) > tolerance ) equal = false;

    std::stringstream ss;
    ss << a << " == " << b << " (with tolerance of " << tolerance << ")";
    spec->should_test(equal, ss.str().c_str(), file, line);
    
    
}


static void should_be_equal_simd4f_(specific::SpecBase *spec, const simd4f& a, const simd4f& b, float tolerance, const char *file, int line) {
    
    bool equal=true;
    if( fabs( simd4f_getX(b) - simd4f_getX(a)) > tolerance ) equal = false;
    if( fabs( simd4f_getY(b) - simd4f_getY(a)) > tolerance ) equal = false;
    if( fabs( simd4f_getZ(b) - simd4f_getZ(a)) > tolerance ) equal = false;
//    if(A::elements > 3 && B::elements > 3)
        if( fabs( simd4f_getW(b) - simd4f_getW(a)) > tolerance ) equal = false;
    
    std::stringstream ss;
    ss << a << " == " << b << " (with tolerance of " << tolerance << ")";
    spec->should_test(equal, ss.str().c_str(), file, line);
    
    
}

static void should_be_equal_vec4f_(specific::SpecBase *spec, const vectorial::vec4f& a, const vectorial::vec4f& b, float tolerance, const char *file, int line) {
    
    bool equal=true;
    if( fabs( b.x() - a.x()) > tolerance ) equal = false;
    if( fabs( b.y() - a.y()) > tolerance ) equal = false;
    if( fabs( b.z() - a.z()) > tolerance ) equal = false;
//    if(A::elements > 3 && B::elements > 3)
        if( fabs( b.w() - a.w()) > tolerance ) equal = false;
    
    std::stringstream ss;
    ss << a << " == " << b << " (with tolerance of " << tolerance << ")";
    spec->should_test(equal, ss.str().c_str(), file, line);
    
    
}

static void should_be_equal_vec3f_(specific::SpecBase *spec, const vectorial::vec3f& a, const vectorial::vec3f& b, float tolerance, const char *file, int line) {
    
    bool equal=true;
    if( fabs( b.x() - a.x()) > tolerance ) equal = false;
    if( fabs( b.y() - a.y()) > tolerance ) equal = false;
    if( fabs( b.z() - a.z()) > tolerance ) equal = false;
    
    std::stringstream ss;
    ss << a << " == " << b << " (with tolerance of " << tolerance << ")";
    spec->should_test(equal, ss.str().c_str(), file, line);
    
    
}

static void should_be_equal_vec2f_(specific::SpecBase *spec, const vectorial::vec2f& a, const vectorial::vec2f& b, float tolerance, const char *file, int line) {
    
    bool equal=true;
    if( fabs( b.x() - a.x()) > tolerance ) equal = false;
    if( fabs( b.y() - a.y()) > tolerance ) equal = false;
    
    std::stringstream ss;
    ss << a << " == " << b << " (with tolerance of " << tolerance << ")";
    spec->should_test(equal, ss.str().c_str(), file, line);
    
    
}



static void should_be_equal_simd4x4f_(specific::SpecBase *spec, const simd4x4f& a, const simd4x4f& b, float tolerance, const char *file, int line) {
    
    bool equal=true;
    if( fabs( simd4f_getX(b.x) - simd4f_getX(a.x)) > tolerance ) equal = false;
    if( fabs( simd4f_getY(b.x) - simd4f_getY(a.x)) > tolerance ) equal = false;
    if( fabs( simd4f_getZ(b.x) - simd4f_getZ(a.x)) > tolerance ) equal = false;
    if( fabs( simd4f_getW(b.x) - simd4f_getW(a.x)) > tolerance ) equal = false;

    if( fabs( simd4f_getX(b.y) - simd4f_getX(a.y)) > tolerance ) equal = false;
    if( fabs( simd4f_getY(b.y) - simd4f_getY(a.y)) > tolerance ) equal = false;
    if( fabs( simd4f_getZ(b.y) - simd4f_getZ(a.y)) > tolerance ) equal = false;
    if( fabs( simd4f_getW(b.y) - simd4f_getW(a.y)) > tolerance ) equal = false;

    if( fabs( simd4f_getX(b.z) - simd4f_getX(a.z)) > tolerance ) equal = false;
    if( fabs( simd4f_getY(b.z) - simd4f_getY(a.z)) > tolerance ) equal = false;
    if( fabs( simd4f_getZ(b.z) - simd4f_getZ(a.z)) > tolerance ) equal = false;
    if( fabs( simd4f_getW(b.z) - simd4f_getW(a.z)) > tolerance ) equal = false;

    if( fabs( simd4f_getX(b.w) - simd4f_getX(a.w)) > tolerance ) equal = false;
    if( fabs( simd4f_getY(b.w) - simd4f_getY(a.w)) > tolerance ) equal = false;
    if( fabs( simd4f_getZ(b.w) - simd4f_getZ(a.w)) > tolerance ) equal = false;
    if( fabs( simd4f_getW(b.w) - simd4f_getW(a.w)) > tolerance ) equal = false;
    
    std::stringstream ss;
    ss << a << " == " << b << " (with tolerance of " << tolerance << ")";
    spec->should_test(equal, ss.str().c_str(), file, line);
    
    
}



#endif

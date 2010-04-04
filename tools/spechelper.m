#!/usr/bin/env octave

1;

function spec_formatter (val,type)

    if( isscalar(val) == 1 ) 
        printf("        should_be_close_to(x, %f, epsilon );", val);
        return;
    endif

    if( size(val) == [1,2] ) 
        printf("        should_be_equal_%s(x, simd4f_create(%f, %f, 0, 0), epsilon );",type, val(1), val(2));
        return;
    endif

    if( size(val) == [1,3] ) 
        printf("        should_be_equal_%s(x, simd4f_create(%f, %f, %f, 0), epsilon );",type, val(1), val(2), val(3));
        return;
    endif

    if( size(val) == [1,4] ) 
        printf("        should_be_equal_%s(x, simd4f_create(%f, %f, %f, %f), epsilon );",type, val(1), val(2), val(3), val(4));
        return;
    endif

    if( size(val) == [4,4] ) 
        printf("        should_be_equal_%s(x, simd4x4f_create(simd4f_create(%f, %f, %f, %f), simd4f_create(%f, %f, %f, %f), simd4f_create(%f, %f, %f, %f), simd4f_create(%f, %f, %f, %f)), epsilon );",type, 
        val(1), val(2), val(3), val(4), val(5), val(6), val(7), val(8), val(9), val(10), val(11), val(12), val(13), val(14), val(15), val(16)
        );
        return;
    endif


endfunction


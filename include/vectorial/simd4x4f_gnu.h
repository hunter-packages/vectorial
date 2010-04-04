#ifndef VECTORIAL_SIMD4X4F_GNU_H
#define VECTORIAL_SIMD4X4F_GNU_H



vectorial_inline simd4x4f simd4x4f_transpose(simd4x4f s) {
    const _simd4f_union sx = { s.x };
    const _simd4f_union sy = { s.y };
    const _simd4f_union sz = { s.z };
    const _simd4f_union sw = { s.w };
    
    const simd4f dx = { sx.f[0], sy.f[0], sz.f[0], sw.f[0] };
    const simd4f dy = { sx.f[1], sy.f[1], sz.f[1], sw.f[1] };
    const simd4f dz = { sx.f[2], sy.f[2], sz.f[2], sw.f[2] };
    const simd4f dw = { sx.f[3], sy.f[3], sz.f[3], sw.f[3] };

    simd4x4f d = { dx, dy, dz, dw };
    
    return d;
}




#endif

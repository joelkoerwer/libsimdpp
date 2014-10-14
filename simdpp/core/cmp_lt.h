/*  Copyright (C) 2013-2014  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMDPP_CORE_CMP_LT_H
#define LIBSIMDPP_SIMDPP_CORE_CMP_LT_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/detail/insn/cmp_lt.h>
#include <simdpp/core/detail/scalar_arg_impl.h>

namespace simdpp {
#ifndef SIMDPP_DOXYGEN
namespace SIMDPP_ARCH_NAMESPACE {
#endif

/** Compares the values of two signed int8x16 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xff : 0x0
    ...
    rN = (aN < bN) ? 0xff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int8<N, mask_int8<N>> cmp_lt(const int8<N,E1>& a,
                                  const int8<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_int8, int8)

/** Compares the values of two unsigned int8x16 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xff : 0x0
    ...
    rN = (aN < bN) ? 0xff : 0x0
    @endcode

    @par 128-bit version:
    @icost{SSE2-AVX2, 3-4}
    @icost{XOP, 1}

    @par 256-bit version:
    @icost{SSE2-AVX, 6-7}
    @icost{AVX2, 3-4}
    @icost{XOP, NEON, ALTIVEC, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int8<N, mask_int8<N>> cmp_lt(const uint8<N,E1>& a,
                                  const uint8<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_int8, uint8)

/** Compares the values of two signed int16x8 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffff : 0x0
    ...
    rN = (aN < bN) ? 0xffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int16<N, mask_int16<N>> cmp_lt(const int16<N,E1>& a,
                                    const int16<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_int16, int16)

/** Compares the values of two unsigned int16x8 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffff : 0x0
    ...
    rN = (aN < bN) ? 0xffff : 0x0
    @endcode

    @par 128-bit version:
    @icost{SSE2-AVX2, 3-4}
    @icost{XOP, 1}

    @par 256-bit version:
    @icost{SSE2-AVX, 6-7}
    @icost{AVX2, 3-4}
    @icost{XOP, NEON, ALTIVEC, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int16<N, mask_int16<N>> cmp_lt(const uint16<N,E1>& a,
                                    const uint16<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_int16, uint16)

/** Compares the values of two signed int32x4 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int32<N, mask_int32<N>> cmp_lt(const int32<N,E1>& a,
                                    const int32<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_int32, int32)

/** Compares the values of two unsigned int32x4 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffff : 0x0
    @endcode

    @par 128-bit version:
    @icost{SSE2-AVX2, 3-4}
    @icost{XOP, 1}

    @par 256-bit version:
    @icost{SSE2-AVX, 6-7}
    @icost{AVX2, 3-4}
    @icost{XOP, NEON, ALTIVEC, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_int32<N, mask_int32<N>> cmp_lt(const uint32<N,E1>& a,
                                    const uint32<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_int32, uint32)

/** Compares the values of two float32x4 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_float32<N, mask_float32<N>> cmp_lt(const float32<N,E1>& a,
                                        const float32<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_float32, float32)

/** Compares the values of two float64x2 vectors for less-than

    @code
    r0 = (a0 < b0) ? 0xffffffffffffffff : 0x0
    ...
    rN = (aN < bN) ? 0xffffffffffffffff : 0x0
    @endcode

    @par 128-bit version:
    @novec{NEON, ALTIVEC}

    @par 256-bit version:
    @novec{NEON, ALTIVEC}
    @icost{SSE2-SSE4.1, 2}
*/
template<unsigned N, class E1, class E2> SIMDPP_INL
mask_float64<N, mask_float64<N>> cmp_lt(const float64<N,E1>& a,
                                        const float64<N,E2>& b)
{
    return detail::insn::i_cmp_lt(a.eval(), b.eval());
}

SIMDPP_SCALAR_ARG_IMPL_VEC(cmp_lt, mask_float64, float64)

#ifndef SIMDPP_DOXYGEN
} // namespace SIMDPP_ARCH_NAMESPACE
#endif
} // namespace simdpp

#endif


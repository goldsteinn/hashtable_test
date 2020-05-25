#ifndef _SPECICIAL_TYPE_MACROS_H_
#define _SPECICIAL_TYPE_MACROS_H_
//////////////////////////////////////////////////////////////////////


//clang-format off
#define FHT_PP_NARG(...) \
         FHT_PP_NARG_(__VA_ARGS__,FHT_PP_RSEQ_N())
#define FHT_PP_NARG_(...) \
         FHT_PP_ARG_N(__VA_ARGS__)
#define FHT_PP_ARG_N( \
          _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
         _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
         _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
         _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
         _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
         _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
         _61,_62,_63,N,...) N
#define FHT_PP_RSEQ_N() \
         63,62,61,60,                   \
         59,58,57,56,55,54,53,52,51,50, \
         49,48,47,46,45,44,43,42,41,40, \
         39,38,37,36,35,34,33,32,31,30, \
         29,28,27,26,25,24,23,22,21,20, \
         19,18,17,16,15,14,13,12,11,10, \
         9,8,7,6,5,4,3,2,1,0


//////////////////////////////////////////////////////////////////////
//Helper for all apply/sum macro
#define FHT_PRIMITIVE_CAT(x, y) x ## y
#define FHT_CAT(x, y) FHT_PRIMITIVE_CAT(x, y)

//////////////////////////////////////////////////////////////////////
//Do macro on all args in __VA_ARGS__
#define FHT_APPLY_OP(macro, op, ...) FHT_CAT(FHT_APPLY_OP_, FHT_PP_NARG(__VA_ARGS__))(macro, op,  __VA_ARGS__)
#define FHT_APPLY_OP_1(m, op, x1) m(x1)
#define FHT_APPLY_OP_2(m, op, x1, x2) m(x1) op m(x2)
#define FHT_APPLY_OP_3(m, op, x1, x2, x3) m(x1) op m(x2) op m(x3)
#define FHT_APPLY_OP_4(m, op, x1, x2, x3, x4) m(x1) op m(x2) op m(x3) op m(x4)
#define FHT_APPLY_OP_5(m, op, x1, x2, x3, x4, x5) m(x1) op m(x2) op m(x3) op m(x4) op m(x5)
#define FHT_APPLY_OP_6(m, op, x1, x2, x3, x4, x5, x6) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6)
#define FHT_APPLY_OP_7(m, op, x1, x2, x3, x4, x5, x6, x7) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7)
#define FHT_APPLY_OP_8(m, op, x1, x2, x3, x4, x5, x6, x7, x8) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8)
#define FHT_APPLY_OP_9(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9)
#define FHT_APPLY_OP_10(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10)
#define FHT_APPLY_OP_11(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11)
#define FHT_APPLY_OP_12(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12)
#define FHT_APPLY_OP_13(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13)
#define FHT_APPLY_OP_14(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13) op m(x14)
#define FHT_APPLY_OP_15(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13) op m(x14) op m(x15)
#define FHT_APPLY_OP_16(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13) op m(x14) op m(x15) op m(x16)
#define FHT_APPLY_OP_17(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13) op m(x14) op m(x15) op m(x16) op m(x17)
#define FHT_APPLY_OP_18(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13) op m(x14) op m(x15) op m(x16) op m(x17) op m(x18)
#define FHT_APPLY_OP_19(m, op, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13) op m(x14) op m(x15) op m(x16) op m(x17) op m(x18) op m(x19)
#define FHT_APPLY_OP_20(m, op,  x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20) m(x1) op m(x2) op m(x3) op m(x4) op m(x5) op m(x6) op m(x7) op m(x8) op m(x9) op m(x10) op m(x11) op m(x12) op m(x13) op m(x14) op m(x15) op m(x16) op m(x17) op m(x18) op m(x19) op m(x20)

#define FHT_IS_SAME(X) (std::is_same<_K, X>::value)
#define FHT_IS_SPECIAL(...) (FHT_APPLY_OP(FHT_IS_SAME, ||,  __VA_ARGS__))
#define FHT_NOT_SPECIAL(...) (!(FHT_APPLY_OP(FHT_IS_SAME, ||, __VA_ARGS__)))
    
#endif

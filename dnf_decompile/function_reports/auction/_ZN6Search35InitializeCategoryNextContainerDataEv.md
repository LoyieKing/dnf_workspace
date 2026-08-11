# _ZN6Search35InitializeCategoryNextContainerDataEv

`Search::InitializeCategoryNextContainerData()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x807e6b0` | `0x108f` | `0x808b230` | `0x108f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,890 +1,890 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x418,%esp
 movl   $0x29d4,-0x3e8(%ebp)
 movl   $0x2710,-0x3e4(%ebp)
 lea    -0x3f0(%ebp),%eax
 lea    -0x3e8(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x3e4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x3f0(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3f4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x3fc(%ebp),%eax
 lea    -0x3f4(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x277b,-0x3cc(%ebp)
 movl   $0x2775,-0x3c8(%ebp)
 lea    -0x3d4(%ebp),%eax
 lea    -0x3cc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x3c8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x3d4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3d8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x3e0(%ebp),%eax
 lea    -0x3d8(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x27df,-0x3b0(%ebp)
 movl   $0x27d9,-0x3ac(%ebp)
 lea    -0x3b8(%ebp),%eax
 lea    -0x3b0(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x3ac(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x3b8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3bc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x3c4(%ebp),%eax
 lea    -0x3bc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2843,-0x394(%ebp)
 movl   $0x283d,-0x390(%ebp)
 lea    -0x39c(%ebp),%eax
 lea    -0x394(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x390(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x39c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3a0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x3a8(%ebp),%eax
 lea    -0x3a0(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x28a7,-0x378(%ebp)
 movl   $0x28a1,-0x374(%ebp)
 lea    -0x380(%ebp),%eax
 lea    -0x378(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x374(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x380(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x384(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x38c(%ebp),%eax
 lea    -0x384(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x290b,-0x35c(%ebp)
 movl   $0x2905,-0x358(%ebp)
 lea    -0x364(%ebp),%eax
 lea    -0x35c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x358(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x364(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x368(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x370(%ebp),%eax
 lea    -0x368(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x296d,-0x340(%ebp)
 movl   $0x2969,-0x33c(%ebp)
 lea    -0x348(%ebp),%eax
 lea    -0x340(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x33c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x348(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x354(%ebp),%eax
 lea    -0x34c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x29d3,-0x324(%ebp)
 movl   $0x29cd,-0x320(%ebp)
 lea    -0x32c(%ebp),%eax
 lea    -0x324(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x320(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x32c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x330(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x338(%ebp),%eax
 lea    -0x330(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2c8f,-0x308(%ebp)
 movl   $0x2af8,-0x304(%ebp)
 lea    -0x310(%ebp),%eax
 lea    -0x308(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x304(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x310(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x314(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x31c(%ebp),%eax
 lea    -0x314(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2aff,-0x2ec(%ebp)
 movl   $0x2af9,-0x2e8(%ebp)
 lea    -0x2f4(%ebp),%eax
 lea    -0x2ec(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x2e8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x2f4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2f8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x300(%ebp),%eax
 lea    -0x2f8(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2b62,-0x2d0(%ebp)
 movl   $0x2b5c,-0x2cc(%ebp)
 lea    -0x2d8(%ebp),%eax
 lea    -0x2d0(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x2cc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x2d8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2dc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x2e4(%ebp),%eax
 lea    -0x2dc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2bc6,-0x2b4(%ebp)
 movl   $0x2bc0,-0x2b0(%ebp)
 lea    -0x2bc(%ebp),%eax
 lea    -0x2b4(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x2b0(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x2bc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x2c8(%ebp),%eax
 lea    -0x2c0(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2c2a,-0x298(%ebp)
 movl   $0x2c24,-0x294(%ebp)
 lea    -0x2a0(%ebp),%eax
 lea    -0x298(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x294(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x2a0(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2a4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x2ac(%ebp),%eax
 lea    -0x2a4(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2c8e,-0x27c(%ebp)
 movl   $0x2c88,-0x278(%ebp)
 lea    -0x284(%ebp),%eax
 lea    -0x27c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x278(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x284(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x288(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x290(%ebp),%eax
 lea    -0x288(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x2ee5,-0x260(%ebp)
 movl   $0x2ee0,-0x25c(%ebp)
 lea    -0x268(%ebp),%eax
 lea    -0x260(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x25c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x268(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x26c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x274(%ebp),%eax
 lea    -0x26c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x32cf,-0x244(%ebp)
 movl   $0x32c8,-0x240(%ebp)
 lea    -0x24c(%ebp),%eax
 lea    -0x244(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x240(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x24c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x250(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x258(%ebp),%eax
 lea    -0x250(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x36b5,-0x228(%ebp)
 movl   $0x36b0,-0x224(%ebp)
 lea    -0x230(%ebp),%eax
 lea    -0x228(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x224(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x230(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x234(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x23c(%ebp),%eax
 lea    -0x234(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x3dc4,-0x20c(%ebp)
 movl   $0x3a98,-0x208(%ebp)
 lea    -0x214(%ebp),%eax
 lea    -0x20c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x208(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x214(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x218(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x220(%ebp),%eax
 lea    -0x218(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN6Search35InitializeCategoryNextContainerDataEv+0x914>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    &_ZZN6Search35InitializeCategoryNextContainerDataEvE29AVATAR_CATEGORY_START_INDEXES(,%eax,4),%eax
 mov    %eax,-0x400(%ebp)
-movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN6Search35InitializeCategoryNextContainerDataEv+0x901>
 mov    -0x400(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,-0x1f0(%ebp)
 lea    -0x1f8(%ebp),%eax
 lea    -0x1f0(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x400(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x1f8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1fc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1IiiEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x204(%ebp),%eax
 lea    -0x1fc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 mov    -0x400(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,-0x400(%ebp)
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x8,-0x10(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x8,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN6Search35InitializeCategoryNextContainerDataEv+0x87d>
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x5,-0xc(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x5,-0x10(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN6Search35InitializeCategoryNextContainerDataEv+0x861>
 movl   $0x4594,-0x1d8(%ebp)
 movl   $0x4268,-0x1d4(%ebp)
 lea    -0x1e0(%ebp),%eax
 lea    -0x1d8(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x1d4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x1e0(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1e4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x1ec(%ebp),%eax
 lea    -0x1e4(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x4d64,-0x1bc(%ebp)
 movl   $0x4a38,-0x1b8(%ebp)
 lea    -0x1c4(%ebp),%eax
 lea    -0x1bc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x1b8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x1c4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x1d0(%ebp),%eax
 lea    -0x1c8(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x5534,-0x1a0(%ebp)
 movl   $0x5208,-0x19c(%ebp)
 lea    -0x1a8(%ebp),%eax
 lea    -0x1a0(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x19c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x1a8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1ac(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x1b4(%ebp),%eax
 lea    -0x1ac(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x5d04,-0x184(%ebp)
 movl   $0x59d8,-0x180(%ebp)
 lea    -0x18c(%ebp),%eax
 lea    -0x184(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x180(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x18c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x190(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x198(%ebp),%eax
 lea    -0x190(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x64d4,-0x168(%ebp)
 movl   $0x61a8,-0x164(%ebp)
 lea    -0x170(%ebp),%eax
 lea    -0x168(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x164(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x170(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x174(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x17c(%ebp),%eax
 lea    -0x174(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7599,-0x14c(%ebp)
 movl   $0x7530,-0x148(%ebp)
 lea    -0x154(%ebp),%eax
 lea    -0x14c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x154(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x158(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x160(%ebp),%eax
 lea    -0x158(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7598,-0x130(%ebp)
 movl   $0x7594,-0x12c(%ebp)
 lea    -0x138(%ebp),%eax
 lea    -0x130(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x12c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x138(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x13c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x144(%ebp),%eax
 lea    -0x13c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x84d1,-0x114(%ebp)
 movl   $0x84d0,-0x110(%ebp)
 lea    -0x11c(%ebp),%eax
 lea    -0x114(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x110(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x11c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x120(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x128(%ebp),%eax
 lea    -0x120(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7a4a,-0xf8(%ebp)
 movl   $0x7918,-0xf4(%ebp)
 lea    -0x100(%ebp),%eax
 lea    -0xf8(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0xf4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x100(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x104(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x10c(%ebp),%eax
 lea    -0x104(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7922,-0xdc(%ebp)
 movl   $0x7919,-0xd8(%ebp)
 lea    -0xe4(%ebp),%eax
 lea    -0xdc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0xd8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0xe4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xe8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0xf0(%ebp),%eax
 lea    -0xe8(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7983,-0xc0(%ebp)
 movl   $0x797d,-0xbc(%ebp)
 lea    -0xc8(%ebp),%eax
 lea    -0xc0(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0xbc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0xc8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0xd4(%ebp),%eax
 lea    -0xcc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x79e5,-0xa4(%ebp)
 movl   $0x79e1,-0xa0(%ebp)
 lea    -0xac(%ebp),%eax
 lea    -0xa4(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0xa0(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0xac(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0xb8(%ebp),%eax
 lea    -0xb0(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7a48,-0x88(%ebp)
 movl   $0x7a45,-0x84(%ebp)
 lea    -0x90(%ebp),%eax
 lea    -0x88(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x84(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x90(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x9c(%ebp),%eax
 lea    -0x94(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7d71,-0x6c(%ebp)
 movl   $0x7d00,-0x68(%ebp)
 lea    -0x74(%ebp),%eax
 lea    -0x6c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x68(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x74(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x80(%ebp),%eax
 lea    -0x78(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x80ed,-0x50(%ebp)
 movl   $0x80e8,-0x4c(%ebp)
 lea    -0x58(%ebp),%eax
 lea    -0x50(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x58(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x64(%ebp),%eax
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7d0d,-0x34(%ebp)
 movl   $0x7d01,-0x30(%ebp)
 lea    -0x3c(%ebp),%eax
 lea    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x48(%ebp),%eax
 lea    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 movl   $0x7d70,-0x18(%ebp)
 movl   $0x7d64,-0x14(%ebp)
 lea    -0x20(%ebp),%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI23ENUM_ITEM_CATEGORY_LISTS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKttEC1I23ENUM_ITEM_CATEGORY_LISTS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%ecx
 lea    -0x2c(%ebp),%eax
 lea    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIttSt4lessItESaISt4pairIKttEEE6insertERKS4_>
 sub    $0x4,%esp
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void InitializeCategoryNextContainerData(Search * this) */

void __thiscall Search::_ZN6Search35InitializeCategoryNextContainerDataEv(Search *this)

{
  int local_404;
  undefined1 local_400 [20];
  ENUM_ITEM_CATEGORY_LIST local_3ec [2];
  undefined1 local_3e4 [20];
  ENUM_ITEM_CATEGORY_LIST local_3d0 [2];
  undefined1 local_3c8 [20];
  ENUM_ITEM_CATEGORY_LIST local_3b4 [2];
  undefined1 local_3ac [20];
  ENUM_ITEM_CATEGORY_LIST local_398 [2];
  undefined1 local_390 [20];
  ENUM_ITEM_CATEGORY_LIST local_37c [2];
  undefined1 local_374 [20];
  ENUM_ITEM_CATEGORY_LIST local_360 [2];
  undefined1 local_358 [20];
  ENUM_ITEM_CATEGORY_LIST local_344 [2];
  undefined1 local_33c [20];
  ENUM_ITEM_CATEGORY_LIST local_328 [2];
  undefined1 local_320 [20];
  ENUM_ITEM_CATEGORY_LIST local_30c [2];
  undefined1 local_304 [20];
  ENUM_ITEM_CATEGORY_LIST local_2f0 [2];
  undefined1 local_2e8 [20];
  ENUM_ITEM_CATEGORY_LIST local_2d4 [2];
  undefined1 local_2cc [20];
  ENUM_ITEM_CATEGORY_LIST local_2b8 [2];
  undefined1 local_2b0 [20];
  ENUM_ITEM_CATEGORY_LIST local_29c [2];
  undefined1 local_294 [20];
  ENUM_ITEM_CATEGORY_LIST local_280 [2];
  undefined1 local_278 [20];
  ENUM_ITEM_CATEGORY_LIST local_264 [2];
  undefined1 local_25c [20];
  ENUM_ITEM_CATEGORY_LIST local_248 [2];
  undefined1 local_240 [20];
  ENUM_ITEM_CATEGORY_LIST local_22c [2];
  undefined1 local_224 [20];
  ENUM_ITEM_CATEGORY_LIST local_210 [2];
  undefined1 local_208 [20];
  size_t local_1f4;
  undefined1 local_1f0 [20];
  ENUM_ITEM_CATEGORY_LIST local_1dc [2];
  undefined1 local_1d4 [20];
  ENUM_ITEM_CATEGORY_LIST local_1c0 [2];
  undefined1 local_1b8 [20];
  ENUM_ITEM_CATEGORY_LIST local_1a4 [2];
  undefined1 local_19c [20];
  ENUM_ITEM_CATEGORY_LIST local_188 [2];
  undefined1 local_180 [20];
  ENUM_ITEM_CATEGORY_LIST local_16c [2];
  undefined1 local_164 [20];
  ENUM_ITEM_CATEGORY_LIST local_150 [2];
  undefined1 local_148 [20];
  ENUM_ITEM_CATEGORY_LIST local_134 [2];
  undefined1 local_12c [20];
  ENUM_ITEM_CATEGORY_LIST local_118 [2];
  undefined1 local_110 [20];
  ENUM_ITEM_CATEGORY_LIST local_fc [2];
  undefined1 local_f4 [20];
  ENUM_ITEM_CATEGORY_LIST local_e0 [2];
  undefined1 local_d8 [20];
  ENUM_ITEM_CATEGORY_LIST local_c4 [2];
  undefined1 local_bc [20];
  ENUM_ITEM_CATEGORY_LIST local_a8 [2];
  undefined1 local_a0 [20];
  ENUM_ITEM_CATEGORY_LIST local_8c [2];
  undefined1 local_84 [20];
  ENUM_ITEM_CATEGORY_LIST local_70 [2];
  undefined1 local_68 [20];
  ENUM_ITEM_CATEGORY_LIST local_54 [2];
  undefined1 local_4c [20];
  ENUM_ITEM_CATEGORY_LIST local_38 [2];
  undefined1 local_30 [20];
  ENUM_ITEM_CATEGORY_LIST local_1c [6];
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: int first_element@[???] */
  local_3ec[0] = CATEGORY_WEAPON_LAST;
  local_3ec[1] = 10000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_400 + 0xc),
             local_3ec + 1,local_3ec);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_400 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_400 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_400,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_3d0[0] = CATEGORY_SWORD_MAN_LAST;
  local_3d0[1] = 0x2775;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_3e4 + 0xc),
             local_3d0 + 1,local_3d0);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_3e4 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_3e4 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_3e4,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_3b4[0] = CATEGORY_FIGHTER_LAST;
  local_3b4[1] = 0x27d9;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_3c8 + 0xc),
             local_3b4 + 1,local_3b4);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_3c8 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_3c8 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_3c8,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_398[0] = CATEGORY_GUNNER_LAST;
  local_398[1] = 0x283d;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_3ac + 0xc),
             local_398 + 1,local_398);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_3ac + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_3ac + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_3ac,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_37c[0] = CATEGORY_MAGE_LAST;
  local_37c[1] = 0x28a1;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_390 + 0xc),
             local_37c + 1,local_37c);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_390 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_390 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_390,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_360[0] = CATEGORY_PRIEST_LAST;
  local_360[1] = 0x2905;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_374 + 0xc),
             local_360 + 1,local_360);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_374 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_374 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_374,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_344[0] = CATEGORY_THIEF_LAST;
  local_344[1] = 0x2969;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_358 + 0xc),
             local_344 + 1,local_344);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_358 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_358 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_358,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_328[0] = CATEGORY_AT_FIGHTER_LAST;
  local_328[1] = 0x29cd;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_33c + 0xc),
             local_328 + 1,local_328);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_33c + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_33c + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_33c,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_30c[0] = CATEGORY_DEFENCE_LAST;
  local_30c[1] = 11000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_320 + 0xc),
             local_30c + 1,local_30c);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_320 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_320 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_320,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_2f0[0] = CATEGORY_CLOTH_LAST;
  local_2f0[1] = 0x2af9;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_304 + 0xc),
             local_2f0 + 1,local_2f0);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_304 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_304 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_304,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_2d4[0] = CATEGORY_LEATHER_LAST;
  local_2d4[1] = 0x2b5c;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_2e8 + 0xc),
             local_2d4 + 1,local_2d4);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_2e8 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_2e8 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_2e8,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_2b8[0] = CATEGORY_LIGHT_LAST;
  local_2b8[1] = 0x2bc0;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_2cc + 0xc),
             local_2b8 + 1,local_2b8);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_2cc + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_2cc + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_2cc,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_29c[0] = CATEGORY_HEAVY_LAST;
  local_29c[1] = 0x2c24;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_2b0 + 0xc),
             local_29c + 1,local_29c);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_2b0 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_2b0 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_2b0,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_280[0] = CATEGORY_METAL_LAST;
  local_280[1] = 0x2c88;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_294 + 0xc),
             local_280 + 1,local_280);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_294 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_294 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_294,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_264[0] = CATEGORY_ACCESSARY_LAST;
  local_264[1] = 12000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_278 + 0xc),
             local_264 + 1,local_264);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_278 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_278 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_278,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_248[0] = CATEGORY_STACKABLE_LAST;
  local_248[1] = 13000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_25c + 0xc),
             local_248 + 1,local_248);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_25c + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_25c + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_25c,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_22c[0] = CATEGORY_CREATURE_LAST;
  local_22c[1] = 14000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_240 + 0xc),
             local_22c + 1,local_22c);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_240 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_240 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_240,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_210[0] = CATEGORY_AVATAR_LAST;
  local_210[1] = 15000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_224 + 0xc),
             local_210 + 1,local_210);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_224 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_224 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_224,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  for (local_1c[3] = 0; (int)local_1c[3] < 6; local_1c[3] = local_1c[3] + 1) {
    local_404 = InitializeCategoryNextContainerData::lexical_block_0::AVATAR_CATEGORY_START_INDEXES
                [local_1c[3]];
    for (local_1c[2] = 0; (int)local_1c[2] < 9; local_1c[2] = local_1c[2] + 1) {
      local_1f4 = local_404 + 10;
      std::make_pair<int&,_int>((pair<int,_int> *)(local_208 + 0xc),&local_404,(int *)&local_1f4);
      std::pair<const_short_unsigned_int,_short_unsigned_int>::pair<int,_int>
                ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_208 + 8),
                 (pair<int,_int> *)(local_208 + 0xc));
      std::
      map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
      ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
                *)local_208,
               (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
      local_404 = local_404 + 100;
    }
  }
  local_1dc[0] = CATEGORY_CLONE_AVATAR_LAST;
  local_1dc[1] = 17000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_1f0 + 0xc),
             local_1dc + 1,local_1dc);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_1f0 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_1f0 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_1f0,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_1c0[0] = CATEGORY_EMBLEM_AVATAR_LAST;
  local_1c0[1] = 19000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_1d4 + 0xc),
             local_1c0 + 1,local_1c0);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_1d4 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_1d4 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_1d4,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_1a4[0] = CATEGORY_CLONE_EMBLEM_AVATAR_LAST;
  local_1a4[1] = 21000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_1b8 + 0xc),
             local_1a4 + 1,local_1a4);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_1b8 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_1b8 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_1b8,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_188[0] = CATEGORY_NORMAL_EMBLEM_AVATAR_LAST;
  local_188[1] = 23000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_19c + 0xc),
             local_188 + 1,local_188);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_19c + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_19c + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_19c,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_16c[0] = CATEGORY_CLONE_NORMAL_EMBLEM_AVATAR_LAST;
  local_16c[1] = 25000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_180 + 0xc),
             local_16c + 1,local_16c);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_180 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_180 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_180,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_150[0] = CATEGORY_STACKABLE_EMBLEM_LAST;
  local_150[1] = 30000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_164 + 0xc),
             local_150 + 1,local_150);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_164 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_164 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_164,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_134[0] = CATEGORY_STACKABLE_EMBLEM_M_LAST;
  local_134[1] = 0x7594;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_148 + 0xc),
             local_134 + 1,local_134);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_148 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_148 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_148,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_118[0] = CATEGORY_ETC_LAST;
  local_118[1] = 34000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_12c + 0xc),
             local_118 + 1,local_118);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_12c + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_12c + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_12c,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_fc[0] = CATEGORY_RECIPE_LAST;
  local_fc[1] = 31000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_110 + 0xc),
             local_fc + 1,local_fc);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_110 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_110 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_110,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_e0[0] = CATEGORY_RECIPE_WEAPON_LAST;
  local_e0[1] = 0x7919;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_f4 + 0xc),local_e0 + 1
             ,local_e0);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_f4 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_f4 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_f4,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_c4[0] = CATEGORY_RECIPE_DEFENCE_LAST;
  local_c4[1] = 0x797d;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_d8 + 0xc),local_c4 + 1
             ,local_c4);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_d8 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_d8 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_d8,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_a8[0] = CATEGORY_RECIPE_ACCESSARY_LAST;
  local_a8[1] = 0x79e1;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_bc + 0xc),local_a8 + 1
             ,local_a8);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_bc + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_bc + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_bc,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_8c[0] = CATEGORY_RECIPE_SPECIAL_EQUIPMENT_LAST;
  local_8c[1] = 0x7a45;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_a0 + 0xc),local_8c + 1
             ,local_8c);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_a0 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_a0 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_a0,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_70[0] = CATEGORY_SPECIAL_EQUIPMENT_LAST;
  local_70[1] = 32000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_84 + 0xc),local_70 + 1
             ,local_70);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_84 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_84 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_84,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_54[0] = CATEGORY_EXPERT_LAST;
  local_54[1] = 33000;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_68 + 0xc),local_54 + 1
             ,local_54);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_68 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_68 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_68,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_38[0] = CATEGORY_SPECIAL_EQUIPMENT_SUPPORT_LAST;
  local_38[1] = 0x7d01;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_4c + 0xc),local_38 + 1
             ,local_38);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_4c + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_4c + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_4c,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  local_1c[0] = CATEGORY_SPECIAL_EQUIPMENT_MAGIC_STONE_LAST;
  local_1c[1] = 0x7d64;
  std::make_pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_30 + 0xc),local_1c + 1
             ,local_1c);
  std::pair<const_short_unsigned_int,_short_unsigned_int>::
  pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST>
            ((pair<const_short_unsigned_int,_short_unsigned_int> *)(local_30 + 8),
             (pair<ENUM_ITEM_CATEGORY_LIST,_ENUM_ITEM_CATEGORY_LIST> *)(local_30 + 0xc));
  std::
  map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
  ::insert((map<short_unsigned_int,_short_unsigned_int,_std::less<short_unsigned_int>,_std::allocator<std::pair<const_short_unsigned_int,_short_unsigned_int>_>_>
            *)local_30,
           (pair<const_short_unsigned_int,_short_unsigned_int> *)&this->mCategoryNextContainer);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp)（约第 1648 行）：

```cpp
void Search::InitializeCategoryNextContainerData()
{
    static const int NUMBER_OF_AVATAR_TYPE = 6;
    static const int NUMBER_OF_CLASS = 9;
    static const int GAP_OF_BEGIN_AND_END_IN_SAME_CLASS = 10;
    static const int GAP_OF_NEXT_CLASS_AVATAR = 100;
    static const int AVATAR_CATEGORY_START_INDEXES[NUMBER_OF_AVATAR_TYPE] = {
        CATEGORY_AVATAR_SWORDMAN,
        CATEGORY_CLONE_AVATAR_SWORDMAN,
        CATEGORY_EMBLEM_AVATAR_SWORDMAN,
        CATEGORY_CLONE_EMBLEM_AVATAR_SWORDMAN,
        CATEGORY_NORMAL_EMBLEM_AVATAR_SWORDMAN,
        CATEGORY_CLONE_NORMAL_EMBLEM_AVATAR_SWORDMAN,
    };

    mCategoryNextContainer.insert(std::make_pair(CATEGORY_WEAPON, CATEGORY_WEAPON_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_SWORD_MAN, CATEGORY_SWORD_MAN_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_FIGHTER, CATEGORY_FIGHTER_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_GUNNER, CATEGORY_GUNNER_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_MAGE, CATEGORY_MAGE_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_PRIEST, CATEGORY_PRIEST_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_THIEF, CATEGORY_THIEF_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_AT_FIGHTER, CATEGORY_AT_FIGHTER_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_DEFENCE, CATEGORY_DEFENCE_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_CLOTH, CATEGORY_CLOTH_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_LEATHER, CATEGORY_LEATHER_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_LIGHT, CATEGORY_LIGHT_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_HEAVY, CATEGORY_HEAVY_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_METAL, CATEGORY_METAL_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_ACCESSARY, CATEGORY_ACCESSARY_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_STACKABLE, CATEGORY_STACKABLE_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_CREATURE, CATEGORY_CREATURE_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_AVATAR, CATEGORY_AVATAR_LAST));

    for (int i = 0; i < NUMBER_OF_AVATAR_TYPE; i = i + 1)
    {
        int first_element = AVATAR_CATEGORY_START_INDEXES[i];
        for (int j = 0; j < NUMBER_OF_CLASS; j = j + 1)
        {
            mCategoryNextContainer.insert(
                std::make_pair(first_element,
                               first_element + GAP_OF_BEGIN_AND_END_IN_SAME_CLASS));
            first_element = first_element + GAP_OF_NEXT_CLASS_AVATAR;
        }
    }

    mCategoryNextContainer.insert(std::make_pair(CATEGORY_CLONE_AVATAR, CATEGORY_CLONE_AVATAR_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_EMBLEM_AVATAR, CATEGORY_EMBLEM_AVATAR_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_CLONE_EMBLEM_AVATAR,
                                                 CATEGORY_CLONE_EMBLEM_AVATAR_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_NORMAL_EMBLEM_AVATAR,
                                                 CATEGORY_NORMAL_EMBLEM_AVATAR_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_CLONE_NORMAL_EMBLEM_AVATAR,
                                                 CATEGORY_CLONE_NORMAL_EMBLEM_AVATAR_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_STACKABLE_EMBLEM,
                                                 CATEGORY_STACKABLE_EMBLEM_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_STACKABLE_EMBLEM_M,
                                                 CATEGORY_STACKABLE_EMBLEM_M_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_ETC, CATEGORY_ETC_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_RECIPE, CATEGORY_RECIPE_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_RECIPE_WEAPON,
                                                 CATEGORY_RECIPE_WEAPON_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_RECIPE_DEFENCE,
                                                 CATEGORY_RECIPE_DEFENCE_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_RECIPE_ACCESSARY,
                                                 CATEGORY_RECIPE_ACCESSARY_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_RECIPE_SPECIAL_EQUIPMENT,
                                                 CATEGORY_RECIPE_SPECIAL_EQUIPMENT_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_SPECIAL_EQUIPMENT,
                                                 CATEGORY_SPECIAL_EQUIPMENT_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_EXPERT, CATEGORY_EXPERT_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_SPECIAL_EQUIPMENT_SUPPORT,
                                                 CATEGORY_SPECIAL_EQUIPMENT_SUPPORT_LAST));
    mCategoryNextContainer.insert(std::make_pair(CATEGORY_SPECIAL_EQUIPMENT_MAGIC_STONE,
                                                 CATEGORY_SPECIAL_EQUIPMENT_MAGIC_STONE_LAST));
}
```

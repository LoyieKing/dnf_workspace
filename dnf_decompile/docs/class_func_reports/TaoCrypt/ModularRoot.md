# ModularRoot

`_ZN8TaoCrypt11ModularRootERKNS_7IntegerES2_S2_S2_S2_S2_`

`TaoCrypt::ModularRoot(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08762810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08762810  _ZN8TaoCrypt11ModularRootERKNS_7IntegerES2_S2_S2_S2_S2_
#           TaoCrypt::ModularRoot(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x08762810, 0x0876298c]
08762810 +0x000:  push   %ebp
08762811 +0x001:  mov    %esp,%ebp
08762813 +0x003:  push   %edi
08762814 +0x004:  push   %esi
08762815 +0x005:  push   %ebx
08762816 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0876281b +0x00b:  add    $0xc0a37d,%ebx
08762821 +0x011:  sub    $0x7c,%esp
08762824 +0x014:  mov    0xc(%ebp),%edx
08762827 +0x017:  mov    0x18(%ebp),%eax
0876282a +0x01a:  lea    -0x38(%ebp),%edi
0876282d +0x01d:  mov    0x1c(%ebp),%esi
08762830 +0x020:  mov    %edi,(%esp)
08762833 +0x023:  mov    %edx,-0x60(%ebp)
08762836 +0x026:  mov    %edx,0x4(%esp)
0876283a +0x02a:  mov    %eax,0x8(%esp)
0876283e +0x02e:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08762843 +0x033:  mov    0x18(%ebp),%eax
08762846 +0x036:  lea    -0x28(%ebp),%ecx
08762849 +0x039:  mov    %ecx,-0x5c(%ebp)
0876284c +0x03c:  sub    $0x4,%esp
0876284f +0x03f:  mov    %eax,0xc(%esp)
08762853 +0x043:  mov    0x10(%ebp),%eax
08762856 +0x046:  mov    %ecx,(%esp)
08762859 +0x049:  mov    %edi,0x4(%esp)
0876285d +0x04d:  mov    %eax,0x8(%esp)
08762861 +0x051:  call   0875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>  ; TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08762866 +0x056:  mov    -0x38(%ebp),%eax
08762869 +0x059:  mov    -0x34(%ebp),%edi
0876286c +0x05c:  shl    $0x2,%eax
0876286f +0x05f:  sub    $0x4,%esp
08762872 +0x062:  mov    %edi,(%esp)
08762875 +0x065:  mov    %eax,0x8(%esp)
08762879 +0x069:  movl   $0x0,0x4(%esp)
08762881 +0x071:  call   0807dcc0 <_init+0x5b8>
08762886 +0x076:  mov    %edi,(%esp)
08762889 +0x079:  lea    -0x48(%ebp),%edi
0876288c +0x07c:  movb   $0x0,0x4(%esp)
08762891 +0x081:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762896 +0x086:  mov    -0x60(%ebp),%edx
08762899 +0x089:  lea    -0x58(%ebp),%eax
0876289c +0x08c:  mov    %eax,-0x60(%ebp)
0876289f +0x08f:  mov    %esi,0x8(%esp)
087628a3 +0x093:  mov    %eax,(%esp)
087628a6 +0x096:  mov    %edx,0x4(%esp)
087628aa +0x09a:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
087628af +0x09f:  mov    0x14(%ebp),%edx
087628b2 +0x0a2:  mov    -0x60(%ebp),%eax
087628b5 +0x0a5:  sub    $0x4,%esp
087628b8 +0x0a8:  mov    %esi,0xc(%esp)
087628bc +0x0ac:  mov    %edx,0x8(%esp)
087628c0 +0x0b0:  mov    %eax,0x4(%esp)
087628c4 +0x0b4:  mov    %edi,(%esp)
087628c7 +0x0b7:  call   0875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>  ; TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
087628cc +0x0bc:  mov    -0x58(%ebp),%eax
087628cf +0x0bf:  mov    -0x54(%ebp),%edx
087628d2 +0x0c2:  shl    $0x2,%eax
087628d5 +0x0c5:  mov    %edx,-0x60(%ebp)
087628d8 +0x0c8:  sub    $0x4,%esp
087628db +0x0cb:  mov    %edx,(%esp)
087628de +0x0ce:  mov    %eax,0x8(%esp)
087628e2 +0x0d2:  movl   $0x0,0x4(%esp)
087628ea +0x0da:  call   0807dcc0 <_init+0x5b8>
087628ef +0x0df:  mov    -0x60(%ebp),%edx
087628f2 +0x0e2:  movb   $0x0,0x4(%esp)
087628f7 +0x0e7:  mov    %edx,(%esp)
087628fa +0x0ea:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087628ff +0x0ef:  mov    0x20(%ebp),%eax
08762902 +0x0f2:  mov    -0x5c(%ebp),%ecx
08762905 +0x0f5:  mov    %esi,0x10(%esp)
08762909 +0x0f9:  mov    %edi,0xc(%esp)
0876290d +0x0fd:  mov    %eax,0x14(%esp)
08762911 +0x101:  mov    0x18(%ebp),%eax
08762914 +0x104:  mov    %ecx,0x4(%esp)
08762918 +0x108:  mov    %eax,0x8(%esp)
0876291c +0x10c:  mov    0x8(%ebp),%eax
0876291f +0x10f:  mov    %eax,(%esp)
08762922 +0x112:  call   087626b0 <_ZN8TaoCrypt3CRTERKNS_7IntegerES2_S2_S2_S2_>  ; TaoCrypt::CRT(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08762927 +0x117:  mov    -0x48(%ebp),%eax
0876292a +0x11a:  mov    -0x44(%ebp),%esi
0876292d +0x11d:  shl    $0x2,%eax
08762930 +0x120:  sub    $0x4,%esp
08762933 +0x123:  mov    %esi,(%esp)
08762936 +0x126:  mov    %eax,0x8(%esp)
0876293a +0x12a:  movl   $0x0,0x4(%esp)
08762942 +0x132:  call   0807dcc0 <_init+0x5b8>
08762947 +0x137:  mov    %esi,(%esp)
0876294a +0x13a:  movb   $0x0,0x4(%esp)
0876294f +0x13f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762954 +0x144:  mov    -0x28(%ebp),%eax
08762957 +0x147:  mov    -0x24(%ebp),%esi
0876295a +0x14a:  movl   $0x0,0x4(%esp)
08762962 +0x152:  shl    $0x2,%eax
08762965 +0x155:  mov    %esi,(%esp)
08762968 +0x158:  mov    %eax,0x8(%esp)
0876296c +0x15c:  call   0807dcc0 <_init+0x5b8>
08762971 +0x161:  mov    %esi,(%esp)
08762974 +0x164:  movb   $0x0,0x4(%esp)
08762979 +0x169:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876297e +0x16e:  mov    0x8(%ebp),%eax
08762981 +0x171:  lea    -0xc(%ebp),%esp
08762984 +0x174:  pop    %ebx
08762985 +0x175:  pop    %esi
08762986 +0x176:  pop    %edi
08762987 +0x177:  pop    %ebp
08762988 +0x178:  ret    $0x4
0876298b +0x17b:  nop
0876298c +0x17c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::ModularRoot @ 0x8762810

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularRoot(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

Integer * TaoCrypt::ModularRoot
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
                    Integer *param_5,Integer *param_6)

{
  uint uVar1;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x876281b;
  Integer::Modulo((Integer *)&local_3c);
  a_exp_b_mod_c((TaoCrypt *)&local_2c,(Integer *)&local_3c,param_3,param_5);
  uVar1 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar1 & 0xffffff00);
  Integer::Modulo((Integer *)&local_5c);
  a_exp_b_mod_c((TaoCrypt *)&local_4c,(Integer *)&local_5c,param_4,param_6);
  uVar1 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar1 & 0xffffff00);
  CRT(param_1,(Integer *)&local_2c,param_5,(Integer *)&local_4c,param_6);
  uVar1 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}
```

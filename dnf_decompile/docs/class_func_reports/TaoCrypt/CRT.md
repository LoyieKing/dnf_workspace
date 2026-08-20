# CRT

`_ZN8TaoCrypt3CRTERKNS_7IntegerES2_S2_S2_S2_`

`TaoCrypt::CRT(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087626b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087626b0  _ZN8TaoCrypt3CRTERKNS_7IntegerES2_S2_S2_S2_
#           TaoCrypt::CRT(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x087626b0, 0x08762809]
087626b0 +0x000:  push   %ebp
087626b1 +0x001:  mov    %esp,%ebp
087626b3 +0x003:  push   %edi
087626b4 +0x004:  push   %esi
087626b5 +0x005:  push   %ebx
087626b6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087626bb +0x00b:  add    $0xc0a4dd,%ebx
087626c1 +0x011:  sub    $0x6c,%esp
087626c4 +0x014:  mov    0xc(%ebp),%eax
087626c7 +0x017:  mov    0x14(%ebp),%ecx
087626ca +0x01a:  lea    -0x28(%ebp),%edx
087626cd +0x01d:  mov    0x8(%ebp),%esi
087626d0 +0x020:  lea    -0x38(%ebp),%edi
087626d3 +0x023:  mov    %edx,-0x60(%ebp)
087626d6 +0x026:  mov    %eax,-0x5c(%ebp)
087626d9 +0x029:  mov    %eax,0x8(%esp)
087626dd +0x02d:  mov    %ecx,0x4(%esp)
087626e1 +0x031:  mov    %edx,(%esp)
087626e4 +0x034:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
087626e9 +0x039:  mov    -0x60(%ebp),%edx
087626ec +0x03c:  sub    $0x4,%esp
087626ef +0x03f:  mov    %edx,0x8(%esp)
087626f3 +0x043:  mov    0x1c(%ebp),%edx
087626f6 +0x046:  mov    %edi,(%esp)
087626f9 +0x049:  mov    %edx,0x4(%esp)
087626fd +0x04d:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08762702 +0x052:  mov    0x18(%ebp),%ecx
08762705 +0x055:  lea    -0x48(%ebp),%edx
08762708 +0x058:  mov    %edx,-0x60(%ebp)
0876270b +0x05b:  sub    $0x4,%esp
0876270e +0x05e:  mov    %ecx,0x8(%esp)
08762712 +0x062:  mov    %edi,0x4(%esp)
08762716 +0x066:  lea    -0x58(%ebp),%edi
08762719 +0x069:  mov    %edx,(%esp)
0876271c +0x06c:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08762721 +0x071:  mov    -0x60(%ebp),%edx
08762724 +0x074:  sub    $0x4,%esp
08762727 +0x077:  mov    %edx,0x8(%esp)
0876272b +0x07b:  mov    0x10(%ebp),%edx
0876272e +0x07e:  mov    %edi,(%esp)
08762731 +0x081:  mov    %edx,0x4(%esp)
08762735 +0x085:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
0876273a +0x08a:  mov    -0x5c(%ebp),%eax
0876273d +0x08d:  sub    $0x4,%esp
08762740 +0x090:  mov    %eax,0x8(%esp)
08762744 +0x094:  mov    %edi,0x4(%esp)
08762748 +0x098:  mov    %esi,(%esp)
0876274b +0x09b:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
08762750 +0x0a0:  mov    -0x58(%ebp),%eax
08762753 +0x0a3:  mov    -0x54(%ebp),%edi
08762756 +0x0a6:  shl    $0x2,%eax
08762759 +0x0a9:  sub    $0x4,%esp
0876275c +0x0ac:  mov    %edi,(%esp)
0876275f +0x0af:  mov    %eax,0x8(%esp)
08762763 +0x0b3:  movl   $0x0,0x4(%esp)
0876276b +0x0bb:  call   0807dcc0 <_init+0x5b8>
08762770 +0x0c0:  mov    %edi,(%esp)
08762773 +0x0c3:  movb   $0x0,0x4(%esp)
08762778 +0x0c8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876277d +0x0cd:  mov    -0x48(%ebp),%eax
08762780 +0x0d0:  mov    -0x44(%ebp),%edi
08762783 +0x0d3:  movl   $0x0,0x4(%esp)
0876278b +0x0db:  shl    $0x2,%eax
0876278e +0x0de:  mov    %edi,(%esp)
08762791 +0x0e1:  mov    %eax,0x8(%esp)
08762795 +0x0e5:  call   0807dcc0 <_init+0x5b8>
0876279a +0x0ea:  mov    %edi,(%esp)
0876279d +0x0ed:  movb   $0x0,0x4(%esp)
087627a2 +0x0f2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087627a7 +0x0f7:  mov    -0x38(%ebp),%eax
087627aa +0x0fa:  mov    -0x34(%ebp),%edi
087627ad +0x0fd:  movl   $0x0,0x4(%esp)
087627b5 +0x105:  shl    $0x2,%eax
087627b8 +0x108:  mov    %edi,(%esp)
087627bb +0x10b:  mov    %eax,0x8(%esp)
087627bf +0x10f:  call   0807dcc0 <_init+0x5b8>
087627c4 +0x114:  mov    %edi,(%esp)
087627c7 +0x117:  movb   $0x0,0x4(%esp)
087627cc +0x11c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087627d1 +0x121:  mov    -0x28(%ebp),%eax
087627d4 +0x124:  mov    -0x24(%ebp),%edi
087627d7 +0x127:  movl   $0x0,0x4(%esp)
087627df +0x12f:  shl    $0x2,%eax
087627e2 +0x132:  mov    %edi,(%esp)
087627e5 +0x135:  mov    %eax,0x8(%esp)
087627e9 +0x139:  call   0807dcc0 <_init+0x5b8>
087627ee +0x13e:  mov    %edi,(%esp)
087627f1 +0x141:  movb   $0x0,0x4(%esp)
087627f6 +0x146:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087627fb +0x14b:  lea    -0xc(%ebp),%esp
087627fe +0x14e:  mov    %esi,%eax
08762800 +0x150:  pop    %ebx
08762801 +0x151:  pop    %esi
08762802 +0x152:  pop    %edi
08762803 +0x153:  pop    %ebp
08762804 +0x154:  ret    $0x4
08762807 +0x157:  mov    %esi,%esi
08762809 +0x159:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CRT @ 0x87626b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CRT(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

Integer * TaoCrypt::CRT(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
                       Integer *param_5)

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
  
  uStack_14 = 0x87626bb;
  Integer::Minus((Integer *)&local_2c);
  Integer::Times((Integer *)&local_3c);
  Integer::Modulo((Integer *)&local_4c);
  Integer::Times((Integer *)&local_5c);
  Integer::Plus(param_1);
  uVar1 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}
```

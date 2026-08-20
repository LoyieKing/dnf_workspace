# GetGoldDropAmountRate

`_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii`

`CAutoMarketConditionsControl::GetGoldDropAmountRate(int, int)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f89bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f89bc  _ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii
#           CAutoMarketConditionsControl::GetGoldDropAmountRate(int, int)
# range [0x082f89bc, 0x082f8ae7]
082f89bc +0x000:  push   %ebp
082f89bd +0x001:  mov    %esp,%ebp
082f89bf +0x003:  push   %ebx
082f89c0 +0x004:  sub    $0x54,%esp
082f89c3 +0x007:  movl   $0x0,-0x14(%ebp)
082f89ca +0x00e:  mov    0x8(%ebp),%eax
082f89cd +0x011:  mov    (%eax),%eax
082f89cf +0x013:  test   %eax,%eax
082f89d1 +0x015:  je     082f8ad8 <+0x11c>
082f89d7 +0x01b:  mov    0x8(%ebp),%eax
082f89da +0x01e:  fldl   0x54(%eax)
082f89dd +0x021:  fld1
082f89df +0x023:  fsubp  %st,%st(1)
082f89e1 +0x025:  mov    0xc(%ebp),%edx
082f89e4 +0x028:  mov    0x8(%ebp),%eax
082f89e7 +0x02b:  add    $0x14,%edx
082f89ea +0x02e:  mov    0xc(%eax,%edx,4),%eax
082f89ee +0x032:  mov    %eax,-0x30(%ebp)
082f89f1 +0x035:  fildl  -0x30(%ebp)
082f89f4 +0x038:  fmulp  %st,%st(1)
082f89f6 +0x03a:  fldl   &data#6b682136(.rodata)
082f89fc +0x040:  fdivrp %st,%st(1)
082f89fe +0x042:  fld1
082f8a00 +0x044:  faddp  %st,%st(1)
082f8a02 +0x046:  fstpl  -0x10(%ebp)
082f8a05 +0x049:  fldl   -0x10(%ebp)
082f8a08 +0x04c:  fldz
082f8a0a +0x04e:  fucompp
082f8a0c +0x050:  fnstsw %ax
082f8a0e +0x052:  test   $0x45,%ah
082f8a11 +0x055:  sete   %al
082f8a14 +0x058:  test   %al,%al
082f8a16 +0x05a:  jne    082f8a2b <+0x6f>
082f8a18 +0x05c:  fldl   -0x10(%ebp)
082f8a1b +0x05f:  fld1
082f8a1d +0x061:  fxch   %st(1)
082f8a1f +0x063:  fucompp
082f8a21 +0x065:  fnstsw %ax
082f8a23 +0x067:  sahf
082f8a24 +0x068:  seta   %al
082f8a27 +0x06b:  test   %al,%al
082f8a29 +0x06d:  je     082f8a34 <+0x78>
082f8a2b +0x06f:  mov    0x8(%ebp),%eax
082f8a2e +0x072:  fldl   0x54(%eax)
082f8a31 +0x075:  fstpl  -0x10(%ebp)
082f8a34 +0x078:  fildl  0x10(%ebp)
082f8a37 +0x07b:  fmull  -0x10(%ebp)
082f8a3a +0x07e:  fnstcw -0x2a(%ebp)
082f8a3d +0x081:  movzwl -0x2a(%ebp),%eax
082f8a41 +0x085:  mov    $0xc,%ah
082f8a43 +0x087:  mov    %ax,-0x2c(%ebp)
082f8a47 +0x08b:  fldcw  -0x2c(%ebp)
082f8a4a +0x08e:  fistpl -0x14(%ebp)
082f8a4d +0x091:  fldcw  -0x2a(%ebp)
082f8a50 +0x094:  mov    &_ZZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEiiE8logCount,%ecx
082f8a56 +0x09a:  mov    $0x10624dd3,%edx
082f8a5b +0x09f:  mov    %ecx,%eax
082f8a5d +0x0a1:  imul   %edx
082f8a5f +0x0a3:  sar    $0x6,%edx
082f8a62 +0x0a6:  mov    %ecx,%eax
082f8a64 +0x0a8:  sar    $0x1f,%eax
082f8a67 +0x0ab:  mov    %edx,%ebx
082f8a69 +0x0ad:  sub    %eax,%ebx
082f8a6b +0x0af:  mov    %ebx,%eax
082f8a6d +0x0b1:  imul   $0x3e8,%eax,%eax
082f8a73 +0x0b7:  mov    %ecx,%edx
082f8a75 +0x0b9:  sub    %eax,%edx
082f8a77 +0x0bb:  mov    %edx,%eax
082f8a79 +0x0bd:  test   %eax,%eax
082f8a7b +0x0bf:  sete   %al
082f8a7e +0x0c2:  lea    0x1(%ecx),%edx
082f8a81 +0x0c5:  mov    %edx,&_ZZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEiiE8logCount
082f8a87 +0x0cb:  test   %al,%al
082f8a89 +0x0cd:  je     082f8ade <+0x122>
082f8a8b +0x0cf:  movl   $0x0,0xc(%esp)
082f8a93 +0x0d7:  movl   $0xce,0x8(%esp)
082f8a9b +0x0df:  movl   $&_ZZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEiiE19__PRETTY_FUNCTION__,0x4(%esp)
082f8aa3 +0x0e7:  lea    -0x24(%ebp),%eax
082f8aa6 +0x0ea:  mov    %eax,(%esp)
082f8aa9 +0x0ed:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f8aae +0x0f2:  mov    0x10(%ebp),%eax
082f8ab1 +0x0f5:  mov    %eax,0x14(%esp)
082f8ab5 +0x0f9:  mov    -0x14(%ebp),%eax
082f8ab8 +0x0fc:  mov    %eax,0x10(%esp)
082f8abc +0x100:  fldl   -0x10(%ebp)
082f8abf +0x103:  fstpl  0x8(%esp)
082f8ac3 +0x107:  movl   $"goldDropAmountRate(%lf) gold(%d), baseGold(%d)",0x4(%esp)
082f8acb +0x10f:  lea    -0x24(%ebp),%eax
082f8ace +0x112:  mov    %eax,(%esp)
082f8ad1 +0x115:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f8ad6 +0x11a:  jmp    082f8ade <+0x122>
082f8ad8 +0x11c:  mov    0x10(%ebp),%eax
082f8adb +0x11f:  mov    %eax,-0x14(%ebp)
082f8ade +0x122:  mov    -0x14(%ebp),%eax
082f8ae1 +0x125:  add    $0x54,%esp
082f8ae4 +0x128:  pop    %ebx
082f8ae5 +0x129:  pop    %ebp
082f8ae6 +0x12a:  ret
082f8ae7 +0x12b:  nop
```

## 反编译 C

```c
// CAutoMarketConditionsControl::GetGoldDropAmountRate @ 0x82f89bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::GetGoldDropAmountRate(int, int) */

int __thiscall
CAutoMarketConditionsControl::GetGoldDropAmountRate
          (CAutoMarketConditionsControl *this,int param_1,int param_2)

{
  bool bVar1;
  cMyTrace local_28 [16];
  int local_18;
  double local_14;
  
  if (*(int *)this == 0) {
    local_18 = param_2;
  }
  else {
    local_14 = ((double)*(int *)(this + (param_1 + 0x14) * 4 + 0xc) *
               (1.0 - *(double *)(this + 0x54))) / _DAT_08c1fc70 + 1.0;
    if ((local_14 < 0.0) || (1.0 < local_14)) {
      local_14 = *(double *)(this + 0x54);
    }
    local_18 = (int)ROUND((double)param_2 * local_14);
    bVar1 = GetGoldDropAmountRate(int,int)::logCount ==
            (GetGoldDropAmountRate(int,int)::logCount / 1000) * 1000;
    GetGoldDropAmountRate(int,int)::logCount = GetGoldDropAmountRate(int,int)::logCount + 1;
    if (bVar1) {
      cMyTrace::cMyTrace(local_28,
                         "int CAutoMarketConditionsControl::GetGoldDropAmountRate(int, int)",0xce,0)
      ;
      cMyTrace::operator()
                (local_28,"goldDropAmountRate(%lf) gold(%d), baseGold(%d)",local_14,local_18,param_2
                );
    }
  }
  return local_18;
}
```

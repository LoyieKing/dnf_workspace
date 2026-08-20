# getMonsterTotalExp

`_ZN6CParty18getMonsterTotalExpEjciffb`

`CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a23dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a23dc  _ZN6CParty18getMonsterTotalExpEjciffb
#           CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool)
# range [0x085a23dc, 0x085a2487]
085a23dc +0x00:  push   %ebp
085a23dd +0x01:  mov    %esp,%ebp
085a23df +0x03:  sub    $0x38,%esp
085a23e2 +0x06:  mov    0x10(%ebp),%edx
085a23e5 +0x09:  mov    0x20(%ebp),%eax
085a23e8 +0x0c:  mov    %dl,-0x1c(%ebp)
085a23eb +0x0f:  mov    %al,-0x20(%ebp)
085a23ee +0x12:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a23f3 +0x17:  add    $0x68,%eax
085a23f6 +0x1a:  mov    %eax,-0x14(%ebp)
085a23f9 +0x1d:  cmpb   $0x3,-0x1c(%ebp)
085a23fd +0x21:  jg     085a2414 <+0x38>
085a23ff +0x23:  movsbl -0x1c(%ebp),%edx
085a2403 +0x27:  mov    -0x14(%ebp),%eax
085a2406 +0x2a:  add    $0xfc,%edx
085a240c +0x30:  mov    (%eax,%edx,4),%eax
085a240f +0x33:  mov    %eax,-0x10(%ebp)
085a2412 +0x36:  jmp    085a241c <+0x40>
085a2414 +0x38:  mov    $0x3f800000,%eax
085a2419 +0x3d:  mov    %eax,-0x10(%ebp)
085a241c +0x40:  cmpb   $0x0,-0x20(%ebp)
085a2420 +0x44:  je     085a2430 <+0x54>
085a2422 +0x46:  flds   -0x10(%ebp)
085a2425 +0x49:  flds   &data#4235e13c(.rodata)
085a242b +0x4f:  fmulp  %st,%st(1)
085a242d +0x51:  fstps  -0x10(%ebp)
085a2430 +0x54:  mov    0xc(%ebp),%eax
085a2433 +0x57:  mov    $0x0,%edx
085a2438 +0x5c:  mov    %eax,-0x28(%ebp)
085a243b +0x5f:  mov    %edx,-0x24(%ebp)
085a243e +0x62:  fildll -0x28(%ebp)
085a2441 +0x65:  flds   &data#80284d86(.rodata)
085a2447 +0x6b:  fdivrp %st,%st(1)
085a2449 +0x6d:  fmuls  0x1c(%ebp)
085a244c +0x70:  mov    0x14(%ebp),%edx
085a244f +0x73:  mov    -0x14(%ebp),%eax
085a2452 +0x76:  add    $0xe4,%edx
085a2458 +0x7c:  flds   0x8(%eax,%edx,4)
085a245c +0x80:  fmulp  %st,%st(1)
085a245e +0x82:  fmuls  0x18(%ebp)
085a2461 +0x85:  fmuls  -0x10(%ebp)
085a2464 +0x88:  fnstcw -0x2a(%ebp)
085a2467 +0x8b:  movzwl -0x2a(%ebp),%eax
085a246b +0x8f:  mov    $0xc,%ah
085a246d +0x91:  mov    %ax,-0x2c(%ebp)
085a2471 +0x95:  fldcw  -0x2c(%ebp)
085a2474 +0x98:  fistpll -0x28(%ebp)
085a2477 +0x9b:  fldcw  -0x2a(%ebp)
085a247a +0x9e:  mov    -0x28(%ebp),%eax
085a247d +0xa1:  mov    -0x24(%ebp),%edx
085a2480 +0xa4:  mov    %eax,-0xc(%ebp)
085a2483 +0xa7:  mov    -0xc(%ebp),%eax
085a2486 +0xaa:  leave
085a2487 +0xab:  ret
```

## 反编译 C

```c
// CParty::getMonsterTotalExp @ 0x85a23dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::getMonsterTotalExp(unsigned int, char, int, float, float, bool) */

longlong __thiscall
CParty::getMonsterTotalExp
          (CParty *this,uint param_1,char param_2,int param_3,float param_4,float param_5,
          bool param_6)

{
  int iVar1;
  undefined8 local_2c;
  undefined4 local_14;
  
  iVar1 = G_CDataManager();
  if (param_2 < '\x04') {
    local_14 = *(float *)(iVar1 + 0x68 + (param_2 + 0xfc) * 4);
  }
  else {
    local_14 = 1.0;
  }
  if (param_6) {
    local_14 = _DAT_08cbbbd0 * local_14;
  }
  local_2c = (ulonglong)param_1;
  return (longlong)
         ROUND(*(float *)(iVar1 + 0x70 + (param_3 + 0xe4) * 4) *
               ((float)local_2c / _DAT_08cbbbd4) * param_5 * param_4 * local_14);
}
```

# BaseExpPenalty

`_ZN12CDataManager14BaseExpPenaltyEii`

`CDataManager::BaseExpPenalty(int, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360914  _ZN12CDataManager14BaseExpPenaltyEii
#           CDataManager::BaseExpPenalty(int, int)
# range [0x08360914, 0x08360a6d]
08360914 +0x000:  push   %ebp
08360915 +0x001:  mov    %esp,%ebp
08360917 +0x003:  sub    $0x14,%esp
0836091a +0x006:  mov    0xc(%ebp),%eax
0836091d +0x009:  mov    0x10(%ebp),%edx
08360920 +0x00c:  mov    %edx,%ecx
08360922 +0x00e:  sub    %eax,%ecx
08360924 +0x010:  mov    %ecx,%eax
08360926 +0x012:  mov    %eax,-0x8(%ebp)
08360929 +0x015:  cmpl   $0xfffffffa,-0x8(%ebp)
0836092d +0x019:  jge    0836093c <+0x28>
0836092f +0x01b:  mov    $0x3d4ccccd,%eax
08360934 +0x020:  mov    %eax,-0x4(%ebp)
08360937 +0x023:  jmp    08360a62 <+0x14e>
0836093c +0x028:  cmpl   $0xfffffffb,-0x8(%ebp)
08360940 +0x02c:  jge    0836094f <+0x3b>
08360942 +0x02e:  mov    $0x3e4ccccd,%eax
08360947 +0x033:  mov    %eax,-0x4(%ebp)
0836094a +0x036:  jmp    08360a62 <+0x14e>
0836094f +0x03b:  cmpl   $0xfffffffb,-0x8(%ebp)
08360953 +0x03f:  jne    08360962 <+0x4e>
08360955 +0x041:  mov    $0x3f000000,%eax
0836095a +0x046:  mov    %eax,-0x4(%ebp)
0836095d +0x049:  jmp    08360a62 <+0x14e>
08360962 +0x04e:  cmpl   $0xfffffffc,-0x8(%ebp)
08360966 +0x052:  jne    08360975 <+0x61>
08360968 +0x054:  mov    $0x3f400000,%eax
0836096d +0x059:  mov    %eax,-0x4(%ebp)
08360970 +0x05c:  jmp    08360a62 <+0x14e>
08360975 +0x061:  cmpl   $0xfffffffd,-0x8(%ebp)
08360979 +0x065:  jne    08360988 <+0x74>
0836097b +0x067:  mov    $0x3f800000,%eax
08360980 +0x06c:  mov    %eax,-0x4(%ebp)
08360983 +0x06f:  jmp    08360a62 <+0x14e>
08360988 +0x074:  cmpl   $0xfffffffe,-0x8(%ebp)
0836098c +0x078:  jne    0836099b <+0x87>
0836098e +0x07a:  mov    $0x3f800000,%eax
08360993 +0x07f:  mov    %eax,-0x4(%ebp)
08360996 +0x082:  jmp    08360a62 <+0x14e>
0836099b +0x087:  cmpl   $0xffffffff,-0x8(%ebp)
0836099f +0x08b:  jne    083609ae <+0x9a>
083609a1 +0x08d:  mov    $0x3f800000,%eax
083609a6 +0x092:  mov    %eax,-0x4(%ebp)
083609a9 +0x095:  jmp    08360a62 <+0x14e>
083609ae +0x09a:  cmpl   $0x0,-0x8(%ebp)
083609b2 +0x09e:  jne    083609c1 <+0xad>
083609b4 +0x0a0:  mov    $0x3f800000,%eax
083609b9 +0x0a5:  mov    %eax,-0x4(%ebp)
083609bc +0x0a8:  jmp    08360a62 <+0x14e>
083609c1 +0x0ad:  cmpl   $0x1,-0x8(%ebp)
083609c5 +0x0b1:  jne    083609d4 <+0xc0>
083609c7 +0x0b3:  mov    $0x3f8f5c29,%eax
083609cc +0x0b8:  mov    %eax,-0x4(%ebp)
083609cf +0x0bb:  jmp    08360a62 <+0x14e>
083609d4 +0x0c0:  cmpl   $0x2,-0x8(%ebp)
083609d8 +0x0c4:  jne    083609e4 <+0xd0>
083609da +0x0c6:  mov    $0x3f8f5c29,%eax
083609df +0x0cb:  mov    %eax,-0x4(%ebp)
083609e2 +0x0ce:  jmp    08360a62 <+0x14e>
083609e4 +0x0d0:  cmpl   $0x3,-0x8(%ebp)
083609e8 +0x0d4:  jne    083609f4 <+0xe0>
083609ea +0x0d6:  mov    $0x3f8f5c29,%eax
083609ef +0x0db:  mov    %eax,-0x4(%ebp)
083609f2 +0x0de:  jmp    08360a62 <+0x14e>
083609f4 +0x0e0:  cmpl   $0x4,-0x8(%ebp)
083609f8 +0x0e4:  jne    08360a04 <+0xf0>
083609fa +0x0e6:  mov    $0x3f800000,%eax
083609ff +0x0eb:  mov    %eax,-0x4(%ebp)
08360a02 +0x0ee:  jmp    08360a62 <+0x14e>
08360a04 +0x0f0:  cmpl   $0x5,-0x8(%ebp)
08360a08 +0x0f4:  jne    08360a14 <+0x100>
08360a0a +0x0f6:  mov    $0x3f800000,%eax
08360a0f +0x0fb:  mov    %eax,-0x4(%ebp)
08360a12 +0x0fe:  jmp    08360a62 <+0x14e>
08360a14 +0x100:  cmpl   $0x6,-0x8(%ebp)
08360a18 +0x104:  jne    08360a24 <+0x110>
08360a1a +0x106:  mov    $0x3f400000,%eax
08360a1f +0x10b:  mov    %eax,-0x4(%ebp)
08360a22 +0x10e:  jmp    08360a62 <+0x14e>
08360a24 +0x110:  cmpl   $0x7,-0x8(%ebp)
08360a28 +0x114:  jne    08360a34 <+0x120>
08360a2a +0x116:  mov    $0x3f333333,%eax
08360a2f +0x11b:  mov    %eax,-0x4(%ebp)
08360a32 +0x11e:  jmp    08360a62 <+0x14e>
08360a34 +0x120:  cmpl   $0x8,-0x8(%ebp)
08360a38 +0x124:  jne    08360a44 <+0x130>
08360a3a +0x126:  mov    $0x3f19999a,%eax
08360a3f +0x12b:  mov    %eax,-0x4(%ebp)
08360a42 +0x12e:  jmp    08360a62 <+0x14e>
08360a44 +0x130:  cmpl   $0x9,-0x8(%ebp)
08360a48 +0x134:  jne    08360a54 <+0x140>
08360a4a +0x136:  mov    $0x3f000000,%eax
08360a4f +0x13b:  mov    %eax,-0x4(%ebp)
08360a52 +0x13e:  jmp    08360a62 <+0x14e>
08360a54 +0x140:  cmpl   $0x9,-0x8(%ebp)
08360a58 +0x144:  jle    08360a62 <+0x14e>
08360a5a +0x146:  mov    $0x3d4ccccd,%eax
08360a5f +0x14b:  mov    %eax,-0x4(%ebp)
08360a62 +0x14e:  mov    -0x4(%ebp),%eax
08360a65 +0x151:  mov    %eax,-0x14(%ebp)
08360a68 +0x154:  flds   -0x14(%ebp)
08360a6b +0x157:  leave
08360a6c +0x158:  ret
08360a6d +0x159:  nop
```

## 反编译 C

```c
// CDataManager::BaseExpPenalty @ 0x8360914

/* CDataManager::BaseExpPenalty(int, int) */

longdouble __thiscall CDataManager::BaseExpPenalty(CDataManager *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < -6) {
    local_8 = 0.05;
  }
  else if (iVar1 < -5) {
    local_8 = 0.2;
  }
  else if (iVar1 == -5) {
    local_8 = 0.5;
  }
  else if (iVar1 == -4) {
    local_8 = 0.75;
  }
  else if (iVar1 == -3) {
    local_8 = 1.0;
  }
  else if (iVar1 == -2) {
    local_8 = 1.0;
  }
  else if (iVar1 == -1) {
    local_8 = 1.0;
  }
  else if (param_2 == param_1) {
    local_8 = 1.0;
  }
  else if (iVar1 == 1) {
    local_8 = 1.12;
  }
  else if (iVar1 == 2) {
    local_8 = 1.12;
  }
  else if (iVar1 == 3) {
    local_8 = 1.12;
  }
  else if (iVar1 == 4) {
    local_8 = 1.0;
  }
  else if (iVar1 == 5) {
    local_8 = 1.0;
  }
  else if (iVar1 == 6) {
    local_8 = 0.75;
  }
  else if (iVar1 == 7) {
    local_8 = 0.7;
  }
  else if (iVar1 == 8) {
    local_8 = 0.6;
  }
  else if (iVar1 == 9) {
    local_8 = 0.5;
  }
  else if (9 < iVar1) {
    local_8 = 0.05;
  }
  return (longdouble)local_8;
}
```

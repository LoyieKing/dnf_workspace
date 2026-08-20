# ~CCharacList

`_ZN11CCharacListD1Ev`

`CCharacList::~CCharacList()`

| 类 | 地址 |
|---|---|
| `CCharacList` | `0x0834945e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834945e  _ZN11CCharacListD1Ev
#           CCharacList::~CCharacList()
# range [0x0834945e, 0x083494d9]
0834945e +0x00:  push   %ebp
0834945f +0x01:  mov    %esp,%ebp
08349461 +0x03:  push   %edi
08349462 +0x04:  push   %esi
08349463 +0x05:  push   %ebx
08349464 +0x06:  sub    $0x1c,%esp
08349467 +0x09:  mov    0x8(%ebp),%eax
0834946a +0x0c:  mov    %eax,(%esp)
0834946d +0x0f:  call   083494da <_ZN11CCharacList7destroyEv>  ; CCharacList::destroy()
08349472 +0x14:  jmp    083494ab <+0x4d>
08349474 +0x16:  mov    %edx,%esi
08349476 +0x18:  mov    %eax,%edi
08349478 +0x1a:  mov    0x8(%ebp),%eax
0834947b +0x1d:  test   %eax,%eax
0834947d +0x1f:  je     0834949f <+0x41>
0834947f +0x21:  mov    0x8(%ebp),%eax
08349482 +0x24:  lea    0x5674(%eax),%ebx
08349488 +0x2a:  mov    0x8(%ebp),%eax
0834948b +0x2d:  cmp    %eax,%ebx
0834948d +0x2f:  je     0834949f <+0x41>
0834948f +0x31:  sub    $0x7dc,%ebx
08349495 +0x37:  mov    %ebx,(%esp)
08349498 +0x3a:  call   0834842a <_ZN10CCharacterD1Ev>  ; CCharacter::~CCharacter()
0834949d +0x3f:  jmp    08349488 <+0x2a>
0834949f +0x41:  mov    %edi,%eax
083494a1 +0x43:  mov    %esi,%edx
083494a3 +0x45:  mov    %eax,(%esp)
083494a6 +0x48:  call   08ae3750 <_Unwind_Resume>
083494ab +0x4d:  mov    0x8(%ebp),%eax
083494ae +0x50:  test   %eax,%eax
083494b0 +0x52:  je     083494d2 <+0x74>
083494b2 +0x54:  mov    0x8(%ebp),%eax
083494b5 +0x57:  lea    0x5674(%eax),%ebx
083494bb +0x5d:  mov    0x8(%ebp),%eax
083494be +0x60:  cmp    %eax,%ebx
083494c0 +0x62:  je     083494d2 <+0x74>
083494c2 +0x64:  sub    $0x7dc,%ebx
083494c8 +0x6a:  mov    %ebx,(%esp)
083494cb +0x6d:  call   0834842a <_ZN10CCharacterD1Ev>  ; CCharacter::~CCharacter()
083494d0 +0x72:  jmp    083494bb <+0x5d>
083494d2 +0x74:  add    $0x1c,%esp
083494d5 +0x77:  pop    %ebx
083494d6 +0x78:  pop    %esi
083494d7 +0x79:  pop    %edi
083494d8 +0x7a:  pop    %ebp
083494d9 +0x7b:  ret
```

## 反编译 C

```c
// CCharacList::~CCharacList @ 0x834945e

/* CCharacList::~CCharacList() */

void __thiscall CCharacList::~CCharacList(CCharacList *this)

{
  CCharacter *this_00;
  
                    /* try { // try from 0834946d to 08349471 has its CatchHandler @ 08349474 */
  destroy(this);
  if (this != (CCharacList *)0x0) {
    this_00 = (CCharacter *)(this + 0x5674);
    while (this_00 != (CCharacter *)this) {
      this_00 = this_00 + -0x7dc;
      CCharacter::~CCharacter(this_00);
    }
  }
  return;
}
```

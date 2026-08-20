# CCharacList

`_ZN11CCharacListC1Ev`

`CCharacList::CCharacList()`

| 类 | 地址 |
|---|---|
| `CCharacList` | `0x083493ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083493ea  _ZN11CCharacListC1Ev
#           CCharacList::CCharacList()
# range [0x083493ea, 0x0834945d]
083493ea +0x00:  push   %ebp
083493eb +0x01:  mov    %esp,%ebp
083493ed +0x03:  push   %edi
083493ee +0x04:  push   %esi
083493ef +0x05:  push   %ebx
083493f0 +0x06:  sub    $0x2c,%esp
083493f3 +0x09:  mov    0x8(%ebp),%ebx
083493f6 +0x0c:  mov    %ebx,%edi
083493f8 +0x0e:  mov    $0xa,%esi
083493fd +0x13:  jmp    08349410 <+0x26>
083493ff +0x15:  mov    %edi,(%esp)
08349402 +0x18:  call   0834828c <_ZN10CCharacterC1Ev>  ; CCharacter::CCharacter()
08349407 +0x1d:  add    $0x7dc,%edi
0834940d +0x23:  sub    $0x1,%esi
08349410 +0x26:  cmp    $0xffffffff,%esi
08349413 +0x29:  setne  %al
08349416 +0x2c:  test   %al,%al
08349418 +0x2e:  jne    083493ff <+0x15>
0834941a +0x30:  jmp    08349456 <+0x6c>
0834941c +0x32:  mov    %edx,%edi
0834941e +0x34:  mov    %eax,-0x1c(%ebp)
08349421 +0x37:  test   %ebx,%ebx
08349423 +0x39:  je     08349449 <+0x5f>
08349425 +0x3b:  mov    $0xa,%eax
0834942a +0x40:  sub    %esi,%eax
0834942c +0x42:  imul   $0x7dc,%eax,%eax
08349432 +0x48:  lea    (%ebx,%eax,1),%esi
08349435 +0x4b:  cmp    %ebx,%esi
08349437 +0x4d:  je     08349449 <+0x5f>
08349439 +0x4f:  sub    $0x7dc,%esi
0834943f +0x55:  mov    %esi,(%esp)
08349442 +0x58:  call   0834842a <_ZN10CCharacterD1Ev>  ; CCharacter::~CCharacter()
08349447 +0x5d:  jmp    08349435 <+0x4b>
08349449 +0x5f:  mov    -0x1c(%ebp),%eax
0834944c +0x62:  mov    %edi,%edx
0834944e +0x64:  mov    %eax,(%esp)
08349451 +0x67:  call   08ae3750 <_Unwind_Resume>
08349456 +0x6c:  add    $0x2c,%esp
08349459 +0x6f:  pop    %ebx
0834945a +0x70:  pop    %esi
0834945b +0x71:  pop    %edi
0834945c +0x72:  pop    %ebp
0834945d +0x73:  ret
```

## 反编译 C

```c
// CCharacList::CCharacList @ 0x83493ea

/* CCharacList::CCharacList() */

void __thiscall CCharacList::CCharacList(CCharacList *this)

{
  int iVar1;
  
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08349402 to 08349406 has its CatchHandler @ 0834941c */
    CCharacter::CCharacter((CCharacter *)this);
    this = this + 0x7dc;
  }
  return;
}
```

# get_growtype_stat

`_ZNK10CCharacter17get_growtype_statEii`

`CCharacter::get_growtype_stat(int, int) const`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x0834883e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834883e  _ZNK10CCharacter17get_growtype_statEii
#           CCharacter::get_growtype_stat(int, int) const
# range [0x0834883e, 0x08348893]
0834883e +0x00:  push   %ebp
0834883f +0x01:  mov    %esp,%ebp
08348841 +0x03:  cmpl   $0x5,0xc(%ebp)
08348845 +0x07:  jg     0834884d <+0xf>
08348847 +0x09:  cmpl   $0x2,0x10(%ebp)
0834884b +0x0d:  jle    08348854 <+0x16>
0834884d +0x0f:  mov    $0x0,%eax
08348852 +0x14:  jmp    08348891 <+0x53>
08348854 +0x16:  cmpl   $0x0,0x10(%ebp)
08348858 +0x1a:  jne    0834886b <+0x2d>
0834885a +0x1c:  mov    0xc(%ebp),%eax
0834885d +0x1f:  imul   $0x52,%eax,%eax
08348860 +0x22:  add    $0x50,%eax
08348863 +0x25:  add    0x8(%ebp),%eax
08348866 +0x28:  add    $0x2,%eax
08348869 +0x2b:  jmp    08348891 <+0x53>
0834886b +0x2d:  mov    0xc(%ebp),%eax
0834886e +0x30:  lea    0x1(%eax),%edx
08348871 +0x33:  mov    0x10(%ebp),%eax
08348874 +0x36:  sub    $0x1,%eax
08348877 +0x39:  imul   $0x52,%eax,%ecx
0834887a +0x3c:  mov    %edx,%eax
0834887c +0x3e:  add    %eax,%eax
0834887e +0x40:  add    %edx,%eax
08348880 +0x42:  shl    $0x6,%eax
08348883 +0x45:  lea    (%ecx,%eax,1),%eax
08348886 +0x48:  add    $0x290,%eax
0834888b +0x4d:  add    0x8(%ebp),%eax
0834888e +0x50:  add    $0x4,%eax
08348891 +0x53:  pop    %ebp
08348892 +0x54:  ret
08348893 +0x55:  nop
```

## 反编译 C

```c
// CCharacter::get_growtype_stat @ 0x834883e

/* CCharacter::get_growtype_stat(int, int) const */

CCharacter * __thiscall CCharacter::get_growtype_stat(CCharacter *this,int param_1,int param_2)

{
  CCharacter *pCVar1;
  
  if ((param_1 < 6) && (param_2 < 3)) {
    if (param_2 == 0) {
      pCVar1 = this + param_1 * 0x52 + 0x52;
    }
    else {
      pCVar1 = this + (param_2 + -1) * 0x52 + (param_1 + 1) * 0xc0 + 0x294;
    }
  }
  else {
    pCVar1 = (CCharacter *)0x0;
  }
  return pCVar1;
}
```

# find

`_ZNK10WideString4findEw`

`WideString::find(wchar_t) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada3e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada3e2  _ZNK10WideString4findEw
#           WideString::find(wchar_t) const
# range [0x08ada3e2, 0x08ada403]
08ada3e2 +0x00:  push   %ebp
08ada3e3 +0x01:  mov    %esp,%ebp
08ada3e5 +0x03:  sub    $0x18,%esp
08ada3e8 +0x06:  mov    0xc(%ebp),%eax
08ada3eb +0x09:  mov    %eax,0x8(%esp)
08ada3ef +0x0d:  movl   $0x0,0x4(%esp)
08ada3f7 +0x15:  mov    0x8(%ebp),%eax
08ada3fa +0x18:  mov    %eax,(%esp)
08ada3fd +0x1b:  call   08ada404 <_ZNK10WideString4findEiw>  ; WideString::find(int, wchar_t) const
08ada402 +0x20:  leave
08ada403 +0x21:  ret
```

## 反编译 C

```c
// WideString::find @ 0x8ada3e2

/* DWARF original prototype: int32 find(WideString * this, wchar pat) */

int32 __thiscall WideString::find(WideString *this,wchar pat)

{
  int32 iVar1;
  
  iVar1 = find(this,0,pat);
  return iVar1;
}
```

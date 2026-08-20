# operator[]

`_ZNK10WideStringixEi`

`WideString::operator[](int) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada0fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada0fa  _ZNK10WideStringixEi
#           WideString::operator[](int) const
# range [0x08ada0fa, 0x08ada113]
08ada0fa +0x00:  push   %ebp
08ada0fb +0x01:  mov    %esp,%ebp
08ada0fd +0x03:  sub    $0x8,%esp
08ada100 +0x06:  mov    0xc(%ebp),%eax
08ada103 +0x09:  mov    %eax,0x4(%esp)
08ada107 +0x0d:  mov    0x8(%ebp),%eax
08ada10a +0x10:  mov    %eax,(%esp)
08ada10d +0x13:  call   08ad9ce4 <_ZNK10WideString5getAtEi>  ; WideString::getAt(int) const
08ada112 +0x18:  leave
08ada113 +0x19:  ret
```

## 反编译 C

```c
// WideString::operator[] @ 0x8ada0fa

/* DWARF original prototype: wchar operator[](WideString * this, int idx) */

wchar __thiscall WideString::operator[](WideString *this,int idx)

{
  wchar wVar1;
  
  wVar1 = getAt(this,idx);
  return wVar1;
}
```

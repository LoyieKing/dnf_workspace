# operator=

`_ZN10CharStringaSERKS_`

`CharString::operator=(CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad70de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad70de  _ZN10CharStringaSERKS_
#           CharString::operator=(CharString const&)
# range [0x08ad70de, 0x08ad70fb]
08ad70de +0x00:  push   %ebp
08ad70df +0x01:  mov    %esp,%ebp
08ad70e1 +0x03:  sub    $0x18,%esp
08ad70e4 +0x06:  mov    0xc(%ebp),%eax
08ad70e7 +0x09:  mov    %eax,0x4(%esp)
08ad70eb +0x0d:  mov    0x8(%ebp),%eax
08ad70ee +0x10:  mov    %eax,(%esp)
08ad70f1 +0x13:  call   08ad6fce <_ZN10CharString6assignERKS_>  ; CharString::assign(CharString const&)
08ad70f6 +0x18:  mov    0x8(%ebp),%eax
08ad70f9 +0x1b:  leave
08ad70fa +0x1c:  ret
08ad70fb +0x1d:  nop
```

## 反编译 C

```c
// CharString::operator= @ 0x8ad70de

/* DWARF original prototype: CharString * operator=(CharString * this, CharString * src) */

CharString * __thiscall CharString::operator=(CharString *this,CharString *src)

{
  assign(this,src);
  return this;
}
```

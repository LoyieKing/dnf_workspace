# reset

`_ZN5CUser5._3795resetEv`

`CUser::._379::reset()`

| 类 | 地址 |
|---|---|
| `CUser::._379` | `0x086454d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086454d8  _ZN5CUser5._3795resetEv
#           CUser::._379::reset()
# range [0x086454d8, 0x08645504]
086454d8 +0x00:  push   %ebp
086454d9 +0x01:  mov    %esp,%ebp
086454db +0x03:  mov    0x8(%ebp),%eax
086454de +0x06:  movb   $0x0,(%eax)
086454e1 +0x09:  mov    0x8(%ebp),%eax
086454e4 +0x0c:  movb   $0x0,0x1(%eax)
086454e8 +0x10:  mov    0x8(%ebp),%eax
086454eb +0x13:  movl   $0x0,0x4(%eax)
086454f2 +0x1a:  movl   $0x0,0x8(%eax)
086454f9 +0x21:  mov    0x8(%ebp),%eax
086454fc +0x24:  movl   $0x0,0xc(%eax)
08645503 +0x2b:  pop    %ebp
08645504 +0x2c:  ret
```

## 反编译 C

```c
// CUser::._379::reset @ 0x86454d8

/* CUser::._379::reset() */

void __thiscall CUser::._379::reset(__379 *this)

{
  *this = (__379)0x0;
  this[1] = (__379)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

# clear

`_ZN21CountinuousItemOption5clearEv`

`CountinuousItemOption::clear()`

| 类 | 地址 |
|---|---|
| `CountinuousItemOption` | `0x0898c784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898c784  _ZN21CountinuousItemOption5clearEv
#           CountinuousItemOption::clear()
# range [0x0898c784, 0x0898c79c]
0898c784 +0x00:  push   %ebp
0898c785 +0x01:  mov    %esp,%ebp
0898c787 +0x03:  mov    0x8(%ebp),%eax
0898c78a +0x06:  movb   $0x0,(%eax)
0898c78d +0x09:  mov    0x8(%ebp),%eax
0898c790 +0x0c:  movb   $0x0,0x1(%eax)
0898c794 +0x10:  mov    0x8(%ebp),%eax
0898c797 +0x13:  movb   $0x0,0x2(%eax)
0898c79b +0x17:  pop    %ebp
0898c79c +0x18:  ret
```

## 反编译 C

```c
// CountinuousItemOption::clear @ 0x898c784

/* CountinuousItemOption::clear() */

void __thiscall CountinuousItemOption::clear(CountinuousItemOption *this)

{
  *this = (CountinuousItemOption)0x0;
  this[1] = (CountinuousItemOption)0x0;
  this[2] = (CountinuousItemOption)0x0;
  return;
}
```

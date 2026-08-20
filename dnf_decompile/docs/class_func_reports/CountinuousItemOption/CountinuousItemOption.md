# CountinuousItemOption

`_ZN21CountinuousItemOptionC1Ev`

`CountinuousItemOption::CountinuousItemOption()`

| 类 | 地址 |
|---|---|
| `CountinuousItemOption` | `0x0898c770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898c770  _ZN21CountinuousItemOptionC1Ev
#           CountinuousItemOption::CountinuousItemOption()
# range [0x0898c770, 0x0898c783]
0898c770 +0x00:  push   %ebp
0898c771 +0x01:  mov    %esp,%ebp
0898c773 +0x03:  sub    $0x18,%esp
0898c776 +0x06:  mov    0x8(%ebp),%eax
0898c779 +0x09:  mov    %eax,(%esp)
0898c77c +0x0c:  call   0898c784 <_ZN21CountinuousItemOption5clearEv>  ; CountinuousItemOption::clear()
0898c781 +0x11:  leave
0898c782 +0x12:  ret
0898c783 +0x13:  nop
```

## 反编译 C

```c
// CountinuousItemOption::CountinuousItemOption @ 0x898c770

/* CountinuousItemOption::CountinuousItemOption() */

void __thiscall CountinuousItemOption::CountinuousItemOption(CountinuousItemOption *this)

{
  clear(this);
  return;
}
```

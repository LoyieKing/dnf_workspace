# MySQL

`_ZN5MySQLC1Ev`

`MySQL::MySQL()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3ac8  _ZN5MySQLC1Ev
#           MySQL::MySQL()
# range [0x083f3ac8, 0x083f3ae9]
083f3ac8 +0x00:  push   %ebp
083f3ac9 +0x01:  mov    %esp,%ebp
083f3acb +0x03:  mov    0x8(%ebp),%eax
083f3ace +0x06:  movl   $0x0,0x4(%eax)
083f3ad5 +0x0d:  mov    0x8(%ebp),%eax
083f3ad8 +0x10:  movl   $0x0,(%eax)
083f3ade +0x16:  mov    0x8(%ebp),%eax
083f3ae1 +0x19:  movb   $0x0,0x4208a(%eax)
083f3ae8 +0x20:  pop    %ebp
083f3ae9 +0x21:  ret
```

## 反编译 C

```c
// MySQL::MySQL @ 0x83f3ac8

/* MySQL::MySQL() */

void __thiscall MySQL::MySQL(MySQL *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  this[0x4208a] = (MySQL)0x0;
  return;
}
```

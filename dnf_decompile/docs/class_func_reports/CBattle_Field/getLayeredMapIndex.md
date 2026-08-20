# getLayeredMapIndex

`_ZN13CBattle_Field18getLayeredMapIndexEv`

`CBattle_Field::getLayeredMapIndex()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830df2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830df2e  _ZN13CBattle_Field18getLayeredMapIndexEv
#           CBattle_Field::getLayeredMapIndex()
# range [0x0830df2e, 0x0830df3b]
0830df2e +0x00:  push   %ebp
0830df2f +0x01:  mov    %esp,%ebp
0830df31 +0x03:  mov    0x8(%ebp),%eax
0830df34 +0x06:  mov    0x10c(%eax),%eax
0830df3a +0x0c:  pop    %ebp
0830df3b +0x0d:  ret
```

## 反编译 C

```c
// CBattle_Field::getLayeredMapIndex @ 0x830df2e

/* CBattle_Field::getLayeredMapIndex() */

undefined4 __thiscall CBattle_Field::getLayeredMapIndex(CBattle_Field *this)

{
  return *(undefined4 *)(this + 0x10c);
}
```

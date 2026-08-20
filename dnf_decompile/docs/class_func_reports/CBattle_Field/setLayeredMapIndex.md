# setLayeredMapIndex

`_ZN13CBattle_Field18setLayeredMapIndexEv`

`CBattle_Field::setLayeredMapIndex()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830df3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830df3c  _ZN13CBattle_Field18setLayeredMapIndexEv
#           CBattle_Field::setLayeredMapIndex()
# range [0x0830df3c, 0x0830df55]
0830df3c +0x00:  push   %ebp
0830df3d +0x01:  mov    %esp,%ebp
0830df3f +0x03:  mov    0x8(%ebp),%eax
0830df42 +0x06:  mov    0x10c(%eax),%eax
0830df48 +0x0c:  lea    0x1(%eax),%edx
0830df4b +0x0f:  mov    0x8(%ebp),%eax
0830df4e +0x12:  mov    %edx,0x10c(%eax)
0830df54 +0x18:  pop    %ebp
0830df55 +0x19:  ret
```

## 反编译 C

```c
// CBattle_Field::setLayeredMapIndex @ 0x830df3c

/* CBattle_Field::setLayeredMapIndex() */

void __thiscall CBattle_Field::setLayeredMapIndex(CBattle_Field *this)

{
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + 1;
  return;
}
```

# isSourcePositionVisible

`_ZNK9LwConsole23isSourcePositionVisibleEv`

`LwConsole::isSourcePositionVisible() const`

| 类 | 地址 |
|---|---|
| `LwConsole` | `0x08ad3a06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3a06  _ZNK9LwConsole23isSourcePositionVisibleEv
#           LwConsole::isSourcePositionVisible() const
# range [0x08ad3a06, 0x08ad3a11]
08ad3a06 +0x00:  push   %ebp
08ad3a07 +0x01:  mov    %esp,%ebp
08ad3a09 +0x03:  mov    0x8(%ebp),%eax
08ad3a0c +0x06:  movzbl 0x4(%eax),%eax
08ad3a10 +0x0a:  pop    %ebp
08ad3a11 +0x0b:  ret
```

## 反编译 C

```c
// LwConsole::isSourcePositionVisible @ 0x8ad3a06

/* LwConsole::isSourcePositionVisible() const */

LwConsole __thiscall LwConsole::isSourcePositionVisible(LwConsole *this)

{
  return this[4];
}
```

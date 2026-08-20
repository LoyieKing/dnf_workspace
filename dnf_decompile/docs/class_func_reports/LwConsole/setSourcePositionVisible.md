# setSourcePositionVisible

`_ZN9LwConsole24setSourcePositionVisibleEb`

`LwConsole::setSourcePositionVisible(bool)`

| 类 | 地址 |
|---|---|
| `LwConsole` | `0x08ad3a12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3a12  _ZN9LwConsole24setSourcePositionVisibleEb
#           LwConsole::setSourcePositionVisible(bool)
# range [0x08ad3a12, 0x08ad3a29]
08ad3a12 +0x00:  push   %ebp
08ad3a13 +0x01:  mov    %esp,%ebp
08ad3a15 +0x03:  sub    $0x4,%esp
08ad3a18 +0x06:  mov    0xc(%ebp),%eax
08ad3a1b +0x09:  mov    %al,-0x4(%ebp)
08ad3a1e +0x0c:  mov    0x8(%ebp),%eax
08ad3a21 +0x0f:  movzbl -0x4(%ebp),%edx
08ad3a25 +0x13:  mov    %dl,0x4(%eax)
08ad3a28 +0x16:  leave
08ad3a29 +0x17:  ret
```

## 反编译 C

```c
// LwConsole::setSourcePositionVisible @ 0x8ad3a12

/* LwConsole::setSourcePositionVisible(bool) */

void __thiscall LwConsole::setSourcePositionVisible(LwConsole *this,bool param_1)

{
  this[4] = (LwConsole)param_1;
  return;
}
```

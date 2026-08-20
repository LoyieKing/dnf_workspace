# LwConsole

`_ZN9LwConsoleC1Ev`

`LwConsole::LwConsole()`

| 类 | 地址 |
|---|---|
| `LwConsole` | `0x08ad39e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad39e2  _ZN9LwConsoleC1Ev
#           LwConsole::LwConsole()
# range [0x08ad39e2, 0x08ad3a05]
08ad39e2 +0x00:  push   %ebp
08ad39e3 +0x01:  mov    %esp,%ebp
08ad39e5 +0x03:  sub    $0x4,%esp
08ad39e8 +0x06:  mov    0x8(%ebp),%eax
08ad39eb +0x09:  mov    %eax,(%esp)
08ad39ee +0x0c:  call   08ad3990 <_ZN9LogWriterC1Ev>  ; LogWriter::LogWriter()
08ad39f3 +0x11:  mov    0x8(%ebp),%eax
08ad39f6 +0x14:  movl   $&_ZTV9LwConsole+0x8,(%eax)
08ad39fc +0x1a:  mov    0x8(%ebp),%eax
08ad39ff +0x1d:  movb   $0x0,0x4(%eax)
08ad3a03 +0x21:  leave
08ad3a04 +0x22:  ret
08ad3a05 +0x23:  nop
```

## 反编译 C

```c
// LwConsole::LwConsole @ 0x8ad39e2

/* LwConsole::LwConsole() */

void __thiscall LwConsole::LwConsole(LwConsole *this)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwConsole_08e32b50;
  this[4] = (LwConsole)0x0;
  return;
}
```

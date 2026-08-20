# popIndent

`_ZN10LogManager9popIndentEv`

`LogManager::popIndent()`

| 类 | 地址 |
|---|---|
| `LogManager` | `0x08ad3f08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3f08  _ZN10LogManager9popIndentEv
#           LogManager::popIndent()
# range [0x08ad3f08, 0x08ad3f23]
08ad3f08 +0x00:  push   %ebp
08ad3f09 +0x01:  mov    %esp,%ebp
08ad3f0b +0x03:  mov    &_ZL8s_indent,%eax
08ad3f10 +0x08:  test   %eax,%eax
08ad3f12 +0x0a:  jle    08ad3f21 <+0x19>
08ad3f14 +0x0c:  mov    &_ZL8s_indent,%eax
08ad3f19 +0x11:  sub    $0x1,%eax
08ad3f1c +0x14:  mov    %eax,&_ZL8s_indent
08ad3f21 +0x19:  pop    %ebp
08ad3f22 +0x1a:  ret
08ad3f23 +0x1b:  nop
```

## 反编译 C

```c
// LogManager::popIndent @ 0x8ad3f08

/* LogManager::popIndent() */

void LogManager::popIndent(void)

{
  if (0 < s_indent) {
    s_indent = s_indent + -1;
  }
  return;
}
```

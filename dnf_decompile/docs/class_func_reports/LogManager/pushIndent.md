# pushIndent

`_ZN10LogManager10pushIndentEv`

`LogManager::pushIndent()`

| 类 | 地址 |
|---|---|
| `LogManager` | `0x08ad3ef6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3ef6  _ZN10LogManager10pushIndentEv
#           LogManager::pushIndent()
# range [0x08ad3ef6, 0x08ad3f07]
08ad3ef6 +0x00:  push   %ebp
08ad3ef7 +0x01:  mov    %esp,%ebp
08ad3ef9 +0x03:  mov    &_ZL8s_indent,%eax
08ad3efe +0x08:  add    $0x1,%eax
08ad3f01 +0x0b:  mov    %eax,&_ZL8s_indent
08ad3f06 +0x10:  pop    %ebp
08ad3f07 +0x11:  ret
```

## 反编译 C

```c
// LogManager::pushIndent @ 0x8ad3ef6

/* LogManager::pushIndent() */

void LogManager::pushIndent(void)

{
  s_indent = s_indent + 1;
  return;
}
```

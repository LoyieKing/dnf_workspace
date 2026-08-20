# yywrap

`_ZN23__dnf_script__FlexLexer6yywrapEv`

`__dnf_script__FlexLexer::yywrap()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1910  _ZN23__dnf_script__FlexLexer6yywrapEv
#           __dnf_script__FlexLexer::yywrap()
# range [0x08ad1910, 0x08ad191a]
08ad1910 +0x00:  push   %ebp
08ad1911 +0x01:  mov    $0x1,%eax
08ad1916 +0x06:  mov    %esp,%ebp
08ad1918 +0x08:  pop    %ebp
08ad1919 +0x09:  ret
08ad191a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yywrap @ 0x8ad1910

/* DWARF original prototype: int yywrap(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yywrap(__dnf_script__FlexLexer *this)

{
  return 1;
}
```

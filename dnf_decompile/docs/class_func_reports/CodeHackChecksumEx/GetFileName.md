# GetFileName

`_ZN18CodeHackChecksumEx11GetFileNameEv`

`CodeHackChecksumEx::GetFileName()`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a7cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a7cc  _ZN18CodeHackChecksumEx11GetFileNameEv
#           CodeHackChecksumEx::GetFileName()
# range [0x0808a7cc, 0x0808a7d7]
0808a7cc +0x00:  push   %ebp
0808a7cd +0x01:  mov    %esp,%ebp
0808a7cf +0x03:  mov    0x8(%ebp),%eax
0808a7d2 +0x06:  add    $0xc,%eax
0808a7d5 +0x09:  pop    %ebp
0808a7d6 +0x0a:  ret
0808a7d7 +0x0b:  nop
```

## 反编译 C

```c
// CodeHackChecksumEx::GetFileName @ 0x808a7cc

/* CodeHackChecksumEx::GetFileName() */

CodeHackChecksumEx * __thiscall CodeHackChecksumEx::GetFileName(CodeHackChecksumEx *this)

{
  return this + 0xc;
}
```

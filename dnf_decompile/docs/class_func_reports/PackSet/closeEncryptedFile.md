# closeEncryptedFile

`_ZN7PackSet18closeEncryptedFileEv`

`PackSet::closeEncryptedFile()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4b66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4b66  _ZN7PackSet18closeEncryptedFileEv
#           PackSet::closeEncryptedFile()
# range [0x08ac4b66, 0x08ac4b6b]
08ac4b66 +0x00:  push   %ebp
08ac4b67 +0x01:  mov    %esp,%ebp
08ac4b69 +0x03:  pop    %ebp
08ac4b6a +0x04:  ret
08ac4b6b +0x05:  nop
```

## 反编译 C

```c
// PackSet::closeEncryptedFile @ 0x8ac4b66

/* DWARF original prototype: void closeEncryptedFile(PackSet * this) */

void __thiscall PackSet::closeEncryptedFile(PackSet *this)

{
  return;
}
```

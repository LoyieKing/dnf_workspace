# UsingEncryptedFile

`_ZN7PackSet18UsingEncryptedFileEv`

`PackSet::UsingEncryptedFile()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac7674` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac7674  _ZN7PackSet18UsingEncryptedFileEv
#           PackSet::UsingEncryptedFile()
# range [0x08ac7674, 0x08ac767f]
08ac7674 +0x00:  push   %ebp
08ac7675 +0x01:  mov    %esp,%ebp
08ac7677 +0x03:  mov    0x8(%ebp),%eax
08ac767a +0x06:  movzbl 0x28(%eax),%eax
08ac767e +0x0a:  pop    %ebp
08ac767f +0x0b:  ret
```

## 反编译 C

```c
// PackSet::UsingEncryptedFile @ 0x8ac7674

/* DWARF original prototype: bool UsingEncryptedFile(PackSet * this) */

bool __thiscall PackSet::UsingEncryptedFile(PackSet *this)

{
  return this->m_bUseEncryptedFile;
}
```

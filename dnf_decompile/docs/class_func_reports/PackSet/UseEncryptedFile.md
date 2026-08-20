# UseEncryptedFile

`_ZN7PackSet16UseEncryptedFileEv`

`PackSet::UseEncryptedFile()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac7680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac7680  _ZN7PackSet16UseEncryptedFileEv
#           PackSet::UseEncryptedFile()
# range [0x08ac7680, 0x08ac768b]
08ac7680 +0x00:  push   %ebp
08ac7681 +0x01:  mov    %esp,%ebp
08ac7683 +0x03:  mov    0x8(%ebp),%eax
08ac7686 +0x06:  movb   $0x1,0x28(%eax)
08ac768a +0x0a:  pop    %ebp
08ac768b +0x0b:  ret
```

## 反编译 C

```c
// PackSet::UseEncryptedFile @ 0x8ac7680

/* DWARF original prototype: void UseEncryptedFile(PackSet * this) */

void __thiscall PackSet::UseEncryptedFile(PackSet *this)

{
  this->m_bUseEncryptedFile = true;
  return;
}
```

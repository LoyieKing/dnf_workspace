# verifyEncryptedFile

`_ZN7PackSet19verifyEncryptedFileEv`

`PackSet::verifyEncryptedFile()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac75fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac75fe  _ZN7PackSet19verifyEncryptedFileEv
#           PackSet::verifyEncryptedFile()
# range [0x08ac75fe, 0x08ac7607]
08ac75fe +0x00:  push   %ebp
08ac75ff +0x01:  mov    %esp,%ebp
08ac7601 +0x03:  mov    $0x1,%eax
08ac7606 +0x08:  pop    %ebp
08ac7607 +0x09:  ret
```

## 反编译 C

```c
// PackSet::verifyEncryptedFile @ 0x8ac75fe

/* DWARF original prototype: pack_ret_t verifyEncryptedFile(PackSet * this) */

pack_ret_t __thiscall PackSet::verifyEncryptedFile(PackSet *this)

{
  return PACK_ERROR;
}
```

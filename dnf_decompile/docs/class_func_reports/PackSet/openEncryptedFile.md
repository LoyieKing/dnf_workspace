# openEncryptedFile

`_ZN7PackSet17openEncryptedFileEPKcS1_16pack_load_type_t`

`PackSet::openEncryptedFile(char const*, char const*, pack_load_type_t)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac60f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac60f0  _ZN7PackSet17openEncryptedFileEPKcS1_16pack_load_type_t
#           PackSet::openEncryptedFile(char const*, char const*, pack_load_type_t)
# range [0x08ac60f0, 0x08ac60f9]
08ac60f0 +0x00:  push   %ebp
08ac60f1 +0x01:  mov    %esp,%ebp
08ac60f3 +0x03:  mov    $0x1,%eax
08ac60f8 +0x08:  pop    %ebp
08ac60f9 +0x09:  ret
```

## 反编译 C

```c
// PackSet::openEncryptedFile @ 0x8ac60f0

/* DWARF original prototype: pack_ret_t openEncryptedFile(PackSet * this, NCHAR * name, NCHAR * tag,
   pack_load_type_t type) */

pack_ret_t __thiscall
PackSet::openEncryptedFile(PackSet *this,NCHAR *name,NCHAR *tag,pack_load_type_t type)

{
  return PACK_ERROR;
}
```

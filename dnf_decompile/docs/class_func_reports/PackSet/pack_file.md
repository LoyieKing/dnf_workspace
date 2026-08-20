# pack_file

`_ZN7PackSet9pack_fileEv`

`PackSet::pack_file()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac7608` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac7608  _ZN7PackSet9pack_fileEv
#           PackSet::pack_file()
# range [0x08ac7608, 0x08ac7673]
08ac7608 +0x00:  push   %ebp
08ac7609 +0x01:  mov    %esp,%ebp
08ac760b +0x03:  sub    $0x28,%esp
08ac760e +0x06:  mov    0x8(%ebp),%eax
08ac7611 +0x09:  movzbl 0x28(%eax),%eax
08ac7615 +0x0d:  xor    $0x1,%eax
08ac7618 +0x10:  test   %al,%al
08ac761a +0x12:  je     08ac7623 <+0x1b>
08ac761c +0x14:  mov    0x8(%ebp),%eax
08ac761f +0x17:  mov    (%eax),%eax
08ac7621 +0x19:  jmp    08ac7672 <+0x6a>
08ac7623 +0x1b:  mov    &stdout,%eax
08ac7628 +0x20:  movl   $"_C_DNF_SCRIPT_CRYPTER_ is turned on!!",0x8(%esp)
08ac7630 +0x28:  movl   $"%s\n",0x4(%esp)
08ac7638 +0x30:  mov    %eax,(%esp)
08ac763b +0x33:  call   0807da90 <_init+0x388>
08ac7640 +0x38:  mov    &stdout,%eax
08ac7645 +0x3d:  movl   $&_ZZN7PackSet9pack_fileEvE12__FUNCTION__,0x10(%esp)
08ac764d +0x45:  movl   $0x677,0xc(%esp)
08ac7655 +0x4d:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac765d +0x55:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac7665 +0x5d:  mov    %eax,(%esp)
08ac7668 +0x60:  call   0807da90 <_init+0x388>
08ac766d +0x65:  mov    0x8(%ebp),%eax
08ac7670 +0x68:  mov    (%eax),%eax
08ac7672 +0x6a:  leave
08ac7673 +0x6b:  ret
```

## 反编译 C

```c
// PackSet::pack_file @ 0x8ac7608

/* DWARF original prototype: FILE * pack_file(PackSet * this) */

FILE * __thiscall PackSet::pack_file(PackSet *this)

{
  FILE *pFVar1;
  
  if (this->m_bUseEncryptedFile == true) {
    fprintf(stdout,"%s\n","_C_DNF_SCRIPT_CRYPTER_ is turned on!!");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x677,"pack_file");
    pFVar1 = this->pack_file_;
  }
  else {
    pFVar1 = this->pack_file_;
  }
  return pFVar1;
}
```

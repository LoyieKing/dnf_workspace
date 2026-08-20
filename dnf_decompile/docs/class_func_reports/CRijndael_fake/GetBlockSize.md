# GetBlockSize

`_ZNK14CRijndael_fake12GetBlockSizeEv`

`CRijndael_fake::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b851c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b851c  _ZNK14CRijndael_fake12GetBlockSizeEv
#           CRijndael_fake::GetBlockSize() const
# range [0x080b851c, 0x080b8527]
080b851c +0x00:  push   %ebp
080b851d +0x01:  mov    %esp,%ebp
080b851f +0x03:  mov    $0x10,%eax
080b8524 +0x08:  pop    %ebp
080b8525 +0x09:  ret
080b8526 +0x0a:  nop
080b8527 +0x0b:  nop
```

## 反编译 C

```c
// CRijndael_fake::GetBlockSize @ 0x80b851c

/* CRijndael_fake::GetBlockSize() const */

undefined4 CRijndael_fake::GetBlockSize(void)

{
  return 0x10;
}
```

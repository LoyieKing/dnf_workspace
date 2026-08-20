# GetChecksumSize

`_ZNK13CNChecksumMd515GetChecksumSizeEv`

`CNChecksumMd5::GetChecksumSize() const`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x080986ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080986ac  _ZNK13CNChecksumMd515GetChecksumSizeEv
#           CNChecksumMd5::GetChecksumSize() const
# range [0x080986ac, 0x080986b7]
080986ac +0x00:  push   %ebp
080986ad +0x01:  mov    %esp,%ebp
080986af +0x03:  mov    $0x10,%eax
080986b4 +0x08:  pop    %ebp
080986b5 +0x09:  ret
080986b6 +0x0a:  nop
080986b7 +0x0b:  nop
```

## 反编译 C

```c
// CNChecksumMd5::GetChecksumSize @ 0x80986ac

/* CNChecksumMd5::GetChecksumSize() const */

undefined4 CNChecksumMd5::GetChecksumSize(void)

{
  return 0x10;
}
```

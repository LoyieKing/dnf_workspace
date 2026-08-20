# GetChecksumSize

`_ZNK16CNChecksumSha38415GetChecksumSizeEv`

`CNChecksumSha384::GetChecksumSize() const`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098e76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098e76  _ZNK16CNChecksumSha38415GetChecksumSizeEv
#           CNChecksumSha384::GetChecksumSize() const
# range [0x08098e76, 0x08098e7f]
08098e76 +0x00:  push   %ebp
08098e77 +0x01:  mov    %esp,%ebp
08098e79 +0x03:  mov    $0x30,%eax
08098e7e +0x08:  pop    %ebp
08098e7f +0x09:  ret
```

## 反编译 C

```c
// CNChecksumSha384::GetChecksumSize @ 0x8098e76

/* CNChecksumSha384::GetChecksumSize() const */

undefined4 CNChecksumSha384::GetChecksumSize(void)

{
  return 0x30;
}
```

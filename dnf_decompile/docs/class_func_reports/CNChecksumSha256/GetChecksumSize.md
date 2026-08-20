# GetChecksumSize

`_ZNK16CNChecksumSha25615GetChecksumSizeEv`

`CNChecksumSha256::GetChecksumSize() const`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x08098a92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098a92  _ZNK16CNChecksumSha25615GetChecksumSizeEv
#           CNChecksumSha256::GetChecksumSize() const
# range [0x08098a92, 0x08098a9b]
08098a92 +0x00:  push   %ebp
08098a93 +0x01:  mov    %esp,%ebp
08098a95 +0x03:  mov    $0x20,%eax
08098a9a +0x08:  pop    %ebp
08098a9b +0x09:  ret
```

## 反编译 C

```c
// CNChecksumSha256::GetChecksumSize @ 0x8098a92

/* CNChecksumSha256::GetChecksumSize() const */

undefined4 CNChecksumSha256::GetChecksumSize(void)

{
  return 0x20;
}
```

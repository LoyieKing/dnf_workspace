# GetChecksumSize

`_ZNK16CNChecksumSha51215GetChecksumSizeEv`

`CNChecksumSha512::GetChecksumSize() const`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x0809925a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809925a  _ZNK16CNChecksumSha51215GetChecksumSizeEv
#           CNChecksumSha512::GetChecksumSize() const
# range [0x0809925a, 0x08099263]
0809925a +0x00:  push   %ebp
0809925b +0x01:  mov    %esp,%ebp
0809925d +0x03:  mov    $0x40,%eax
08099262 +0x08:  pop    %ebp
08099263 +0x09:  ret
```

## 反编译 C

```c
// CNChecksumSha512::GetChecksumSize @ 0x809925a

/* CNChecksumSha512::GetChecksumSize() const */

undefined4 CNChecksumSha512::GetChecksumSize(void)

{
  return 0x40;
}
```

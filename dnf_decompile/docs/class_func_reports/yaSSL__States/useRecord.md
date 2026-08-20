# useRecord

`_ZN5yaSSL6States9useRecordEv`

`yaSSL::States::useRecord()`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874df00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874df00  _ZN5yaSSL6States9useRecordEv
#           yaSSL::States::useRecord()
# range [0x0874df00, 0x0874df09]
0874df00 +0x00:  push   %ebp
0874df01 +0x01:  mov    %esp,%ebp
0874df03 +0x03:  mov    0x8(%ebp),%eax
0874df06 +0x06:  pop    %ebp
0874df07 +0x07:  ret
0874df08 +0x08:  nop
0874df09 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::useRecord @ 0x874df00

/* yaSSL::States::useRecord() */

States * __thiscall yaSSL::States::useRecord(States *this)

{
  return this;
}
```

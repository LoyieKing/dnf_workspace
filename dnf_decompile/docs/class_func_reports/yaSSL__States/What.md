# What

`_ZNK5yaSSL6States4WhatEv`

`yaSSL::States::What() const`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874def0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874def0  _ZNK5yaSSL6States4WhatEv
#           yaSSL::States::What() const
# range [0x0874def0, 0x0874defc]
0874def0 +0x00:  push   %ebp
0874def1 +0x01:  mov    %esp,%ebp
0874def3 +0x03:  mov    0x8(%ebp),%eax
0874def6 +0x06:  pop    %ebp
0874def7 +0x07:  mov    0x68(%eax),%eax
0874defa +0x0a:  ret
0874defb +0x0b:  nop
0874defc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::What @ 0x874def0

/* yaSSL::States::What() const */

undefined4 __thiscall yaSSL::States::What(States *this)

{
  return *(undefined4 *)(this + 0x68);
}
```

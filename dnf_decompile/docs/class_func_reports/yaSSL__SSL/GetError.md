# GetError

`_ZNK5yaSSL3SSL8GetErrorEv`

`yaSSL::SSL::GetError() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e0b0  _ZNK5yaSSL3SSL8GetErrorEv
#           yaSSL::SSL::GetError() const
# range [0x0874e0b0, 0x0874e0d9]
0874e0b0 +0x00:  push   %ebp
0874e0b1 +0x01:  mov    %esp,%ebp
0874e0b3 +0x03:  push   %ebx
0874e0b4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e0b9 +0x09:  add    $0xc1eadf,%ebx
0874e0bf +0x0f:  sub    $0x14,%esp
0874e0c2 +0x12:  mov    0x8(%ebp),%eax
0874e0c5 +0x15:  add    $0x8ec,%eax
0874e0ca +0x1a:  mov    %eax,(%esp)
0874e0cd +0x1d:  call   0874def0 <_ZNK5yaSSL6States4WhatEv>  ; yaSSL::States::What() const
0874e0d2 +0x22:  add    $0x14,%esp
0874e0d5 +0x25:  pop    %ebx
0874e0d6 +0x26:  pop    %ebp
0874e0d7 +0x27:  ret
0874e0d8 +0x28:  nop
0874e0d9 +0x29:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::GetError @ 0x874e0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::GetError() const */

void __thiscall yaSSL::SSL::GetError(SSL *this)

{
  States::What((States *)(this + 0x8ec));
  return;
}
```

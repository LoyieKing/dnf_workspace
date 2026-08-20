# useBuffers

`_ZN5yaSSL3SSL10useBuffersEv`

`yaSSL::SSL::useBuffers()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e020  _ZN5yaSSL3SSL10useBuffersEv
#           yaSSL::SSL::useBuffers()
# range [0x0874e020, 0x0874e02e]
0874e020 +0x00:  push   %ebp
0874e021 +0x01:  mov    %esp,%ebp
0874e023 +0x03:  mov    0x8(%ebp),%eax
0874e026 +0x06:  pop    %ebp
0874e027 +0x07:  add    $0x9c0,%eax
0874e02c +0x0c:  ret
0874e02d +0x0d:  nop
0874e02e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::useBuffers @ 0x874e020

/* yaSSL::SSL::useBuffers() */

SSL * __thiscall yaSSL::SSL::useBuffers(SSL *this)

{
  return this + 0x9c0;
}
```

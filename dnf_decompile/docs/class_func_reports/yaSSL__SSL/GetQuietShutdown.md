# GetQuietShutdown

`_ZNK5yaSSL3SSL16GetQuietShutdownEv`

`yaSSL::SSL::GetQuietShutdown() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e2a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e2a0  _ZNK5yaSSL3SSL16GetQuietShutdownEv
#           yaSSL::SSL::GetQuietShutdown() const
# range [0x0874e2a0, 0x0874e2af]
0874e2a0 +0x00:  push   %ebp
0874e2a1 +0x01:  mov    %esp,%ebp
0874e2a3 +0x03:  mov    0x8(%ebp),%eax
0874e2a6 +0x06:  pop    %ebp
0874e2a7 +0x07:  movzbl 0x9dd(%eax),%eax
0874e2ae +0x0e:  ret
0874e2af +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::SSL::GetQuietShutdown @ 0x874e2a0

/* yaSSL::SSL::GetQuietShutdown() const */

SSL __thiscall yaSSL::SSL::GetQuietShutdown(SSL *this)

{
  return this[0x9dd];
}
```

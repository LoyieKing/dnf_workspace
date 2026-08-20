# getSocket

`_ZNK5yaSSL3SSL9getSocketEv`

`yaSSL::SSL::getSocket() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e0a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e0a0  _ZNK5yaSSL3SSL9getSocketEv
#           yaSSL::SSL::getSocket() const
# range [0x0874e0a0, 0x0874e0ae]
0874e0a0 +0x00:  push   %ebp
0874e0a1 +0x01:  mov    %esp,%ebp
0874e0a3 +0x03:  mov    0x8(%ebp),%eax
0874e0a6 +0x06:  pop    %ebp
0874e0a7 +0x07:  add    $0x9b8,%eax
0874e0ac +0x0c:  ret
0874e0ad +0x0d:  nop
0874e0ae +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::getSocket @ 0x874e0a0

/* yaSSL::SSL::getSocket() const */

SSL * __thiscall yaSSL::SSL::getSocket(SSL *this)

{
  return this + 0x9b8;
}
```

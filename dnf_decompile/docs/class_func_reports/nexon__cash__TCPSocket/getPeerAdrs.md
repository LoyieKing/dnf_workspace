# getPeerAdrs

`_ZN5nexon4cash9TCPSocket11getPeerAdrsEv`

`nexon::cash::TCPSocket::getPeerAdrs()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081affb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081affb8  _ZN5nexon4cash9TCPSocket11getPeerAdrsEv
#           nexon::cash::TCPSocket::getPeerAdrs()
# range [0x081affb8, 0x081affc3]
081affb8 +0x00:  push   %ebp
081affb9 +0x01:  mov    %esp,%ebp
081affbb +0x03:  mov    0x8(%ebp),%eax
081affbe +0x06:  add    $0x14,%eax
081affc1 +0x09:  pop    %ebp
081affc2 +0x0a:  ret
081affc3 +0x0b:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::getPeerAdrs @ 0x81affb8

/* nexon::cash::TCPSocket::getPeerAdrs() */

TCPSocket * __thiscall nexon::cash::TCPSocket::getPeerAdrs(TCPSocket *this)

{
  return this + 0x14;
}
```

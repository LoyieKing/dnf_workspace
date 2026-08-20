# getPeerPort

`_ZN5nexon4cash9TCPSocket11getPeerPortEv`

`nexon::cash::TCPSocket::getPeerPort()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081affc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081affc4  _ZN5nexon4cash9TCPSocket11getPeerPortEv
#           nexon::cash::TCPSocket::getPeerPort()
# range [0x081affc4, 0x081affcf]
081affc4 +0x00:  push   %ebp
081affc5 +0x01:  mov    %esp,%ebp
081affc7 +0x03:  mov    0x8(%ebp),%eax
081affca +0x06:  movzwl 0x18(%eax),%eax
081affce +0x0a:  pop    %ebp
081affcf +0x0b:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::getPeerPort @ 0x81affc4

/* nexon::cash::TCPSocket::getPeerPort() */

undefined2 __thiscall nexon::cash::TCPSocket::getPeerPort(TCPSocket *this)

{
  return *(undefined2 *)(this + 0x18);
}
```

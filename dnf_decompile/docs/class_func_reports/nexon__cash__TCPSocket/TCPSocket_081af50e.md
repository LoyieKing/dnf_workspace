# TCPSocket

`_ZN5nexon4cash9TCPSocketC1EPKct`

`nexon::cash::TCPSocket::TCPSocket(char const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af50e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af50e  _ZN5nexon4cash9TCPSocketC1EPKct
#           nexon::cash::TCPSocket::TCPSocket(char const*, unsigned short)
# range [0x081af50e, 0x081af51d]
081af50e +0x00:  push   %ebp
081af50f +0x01:  mov    %esp,%ebp
081af511 +0x03:  sub    $0x4,%esp
081af514 +0x06:  mov    0x10(%ebp),%eax
081af517 +0x09:  mov    %ax,-0x4(%ebp)
081af51b +0x0d:  leave
081af51c +0x0e:  ret
081af51d +0x0f:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::TCPSocket @ 0x81af50e

/* nexon::cash::TCPSocket::TCPSocket(char const*, unsigned short) */

void __thiscall nexon::cash::TCPSocket::TCPSocket(TCPSocket *this,char *param_1,ushort param_2)

{
  return;
}
```

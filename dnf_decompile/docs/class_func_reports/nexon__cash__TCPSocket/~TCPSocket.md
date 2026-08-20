# ~TCPSocket

`_ZN5nexon4cash9TCPSocketD1Ev`

`nexon::cash::TCPSocket::~TCPSocket()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af51e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af51e  _ZN5nexon4cash9TCPSocketD1Ev
#           nexon::cash::TCPSocket::~TCPSocket()
# range [0x081af51e, 0x081af531]
081af51e +0x00:  push   %ebp
081af51f +0x01:  mov    %esp,%ebp
081af521 +0x03:  sub    $0x18,%esp
081af524 +0x06:  mov    0x8(%ebp),%eax
081af527 +0x09:  mov    %eax,(%esp)
081af52a +0x0c:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081af52f +0x11:  leave
081af530 +0x12:  ret
081af531 +0x13:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::~TCPSocket @ 0x81af51e

/* nexon::cash::TCPSocket::~TCPSocket() */

void __thiscall nexon::cash::TCPSocket::~TCPSocket(TCPSocket *this)

{
  close(this);
  return;
}
```

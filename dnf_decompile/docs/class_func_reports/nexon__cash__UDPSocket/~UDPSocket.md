# ~UDPSocket

`_ZN5nexon4cash9UDPSocketD1Ev`

`nexon::cash::UDPSocket::~UDPSocket()`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081aed44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081aed44  _ZN5nexon4cash9UDPSocketD1Ev
#           nexon::cash::UDPSocket::~UDPSocket()
# range [0x081aed44, 0x081aed57]
081aed44 +0x00:  push   %ebp
081aed45 +0x01:  mov    %esp,%ebp
081aed47 +0x03:  sub    $0x18,%esp
081aed4a +0x06:  mov    0x8(%ebp),%eax
081aed4d +0x09:  mov    %eax,(%esp)
081aed50 +0x0c:  call   081af184 <_ZN5nexon4cash9UDPSocket5closeEv>  ; nexon::cash::UDPSocket::close()
081aed55 +0x11:  leave
081aed56 +0x12:  ret
081aed57 +0x13:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::~UDPSocket @ 0x81aed44

/* nexon::cash::UDPSocket::~UDPSocket() */

void __thiscall nexon::cash::UDPSocket::~UDPSocket(UDPSocket *this)

{
  close(this);
  return;
}
```

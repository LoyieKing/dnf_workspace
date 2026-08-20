# UDPSocket

`_ZN5nexon4cash9UDPSocketC1Ev`

`nexon::cash::UDPSocket::UDPSocket()`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081aed2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081aed2c  _ZN5nexon4cash9UDPSocketC1Ev
#           nexon::cash::UDPSocket::UDPSocket()
# range [0x081aed2c, 0x081aed43]
081aed2c +0x00:  push   %ebp
081aed2d +0x01:  mov    %esp,%ebp
081aed2f +0x03:  mov    0x8(%ebp),%eax
081aed32 +0x06:  movl   $0xffffffff,(%eax)
081aed38 +0x0c:  mov    0x8(%ebp),%eax
081aed3b +0x0f:  movw   $0x0,0x14(%eax)
081aed41 +0x15:  pop    %ebp
081aed42 +0x16:  ret
081aed43 +0x17:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::UDPSocket @ 0x81aed2c

/* nexon::cash::UDPSocket::UDPSocket() */

void __thiscall nexon::cash::UDPSocket::UDPSocket(UDPSocket *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined2 *)(this + 0x14) = 0;
  return;
}
```

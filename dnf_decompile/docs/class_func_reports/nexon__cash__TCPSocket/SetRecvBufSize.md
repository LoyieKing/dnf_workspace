# SetRecvBufSize

`_ZN5nexon4cash9TCPSocket14SetRecvBufSizeEi`

`nexon::cash::TCPSocket::SetRecvBufSize(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081b009c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b009c  _ZN5nexon4cash9TCPSocket14SetRecvBufSizeEi
#           nexon::cash::TCPSocket::SetRecvBufSize(int)
# range [0x081b009c, 0x081b00a9]
081b009c +0x00:  push   %ebp
081b009d +0x01:  mov    %esp,%ebp
081b009f +0x03:  mov    0x8(%ebp),%eax
081b00a2 +0x06:  mov    %eax,&_ZN5nexon4cash9TCPSocket13msRecvBufSizeE
081b00a7 +0x0b:  pop    %ebp
081b00a8 +0x0c:  ret
081b00a9 +0x0d:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::SetRecvBufSize @ 0x81b009c

/* nexon::cash::TCPSocket::SetRecvBufSize(int) */

void nexon::cash::TCPSocket::SetRecvBufSize(int param_1)

{
  msRecvBufSize = param_1;
  return;
}
```

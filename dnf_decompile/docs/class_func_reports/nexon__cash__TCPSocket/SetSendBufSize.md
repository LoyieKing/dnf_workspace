# SetSendBufSize

`_ZN5nexon4cash9TCPSocket14SetSendBufSizeEi`

`nexon::cash::TCPSocket::SetSendBufSize(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081b00aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b00aa  _ZN5nexon4cash9TCPSocket14SetSendBufSizeEi
#           nexon::cash::TCPSocket::SetSendBufSize(int)
# range [0x081b00aa, 0x081b00b6]
081b00aa +0x00:  push   %ebp
081b00ab +0x01:  mov    %esp,%ebp
081b00ad +0x03:  mov    0x8(%ebp),%eax
081b00b0 +0x06:  mov    %eax,&_ZN5nexon4cash9TCPSocket13msSendBufSizeE
081b00b5 +0x0b:  pop    %ebp
081b00b6 +0x0c:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::SetSendBufSize @ 0x81b00aa

/* nexon::cash::TCPSocket::SetSendBufSize(int) */

void nexon::cash::TCPSocket::SetSendBufSize(int param_1)

{
  msSendBufSize = param_1;
  return;
}
```

# CUdpHandler

`_ZN11CUdpHandlerC1Ev`

`CUdpHandler::CUdpHandler()`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x08483518` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483518  _ZN11CUdpHandlerC1Ev
#           CUdpHandler::CUdpHandler()
# range [0x08483518, 0x0848352f]
08483518 +0x00:  push   %ebp
08483519 +0x01:  mov    %esp,%ebp
0848351b +0x03:  mov    0x8(%ebp),%eax
0848351e +0x06:  movl   $0xffffffff,(%eax)
08483524 +0x0c:  mov    0x8(%ebp),%eax
08483527 +0x0f:  movl   $0xffffffff,0x4(%eax)
0848352e +0x16:  pop    %ebp
0848352f +0x17:  ret
```

## 反编译 C

```c
// CUdpHandler::CUdpHandler @ 0x8483518

/* CUdpHandler::CUdpHandler() */

void __thiscall CUdpHandler::CUdpHandler(CUdpHandler *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}
```

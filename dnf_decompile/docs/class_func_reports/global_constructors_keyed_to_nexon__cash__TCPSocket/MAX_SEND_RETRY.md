# MAX_SEND_RETRY

`_GLOBAL__I__ZN5nexon4cash9TCPSocket14MAX_SEND_RETRYE`

`global constructors keyed to nexon::cash::TCPSocket::MAX_SEND_RETRY`

| 类 | 地址 |
|---|---|
| `global constructors keyed to nexon::cash::TCPSocket` | `0x081b00f7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b00f7  _GLOBAL__I__ZN5nexon4cash9TCPSocket14MAX_SEND_RETRYE
#           global constructors keyed to nexon::cash::TCPSocket::MAX_SEND_RETRY
# range [0x081b00f7, 0x081b0113]
081b00f7 +0x00:  push   %ebp
081b00f8 +0x01:  mov    %esp,%ebp
081b00fa +0x03:  sub    $0x18,%esp
081b00fd +0x06:  movl   $0xffff,0x4(%esp)
081b0105 +0x0e:  movl   $0x1,(%esp)
081b010c +0x15:  call   081b00b7 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b0111 +0x1a:  leave
081b0112 +0x1b:  ret
081b0113 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b00f7

/* nexon::cash::TCPSocket::MAX_SEND_RETRY */

void nexon::cash::TCPSocket::_GLOBAL__I_MAX_SEND_RETRY(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

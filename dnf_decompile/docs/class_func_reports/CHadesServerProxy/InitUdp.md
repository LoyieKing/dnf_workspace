# InitUdp

`_ZN17CHadesServerProxy7InitUdpEv`

`CHadesServerProxy::InitUdp()`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x08470628` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470628  _ZN17CHadesServerProxy7InitUdpEv
#           CHadesServerProxy::InitUdp()
# range [0x08470628, 0x08470681]
08470628 +0x00:  push   %ebp
08470629 +0x01:  mov    %esp,%ebp
0847062b +0x03:  sub    $0x28,%esp
0847062e +0x06:  mov    0x8(%ebp),%eax
08470631 +0x09:  add    $&_ZL14gUnicodeBuffer+0x268e4,%eax
08470636 +0x0e:  mov    %eax,(%esp)
08470639 +0x11:  call   0848369a <_ZN11CUdpHandler16InitClientSocketEv>  ; CUdpHandler::InitClientSocket()
0847063e +0x16:  cmp    $0xffffffff,%eax
08470641 +0x19:  sete   %al
08470644 +0x1c:  test   %al,%al
08470646 +0x1e:  je     0847067b <+0x53>
08470648 +0x20:  movl   $"[CHadesServerProxy::Init] Can't init udp client socket",0x10(%esp)
08470650 +0x28:  movl   $0xd5,0xc(%esp)
08470658 +0x30:  movl   $&_ZZN17CHadesServerProxy7InitUdpEvE19__PRETTY_FUNCTION__,0x8(%esp)
08470660 +0x38:  movl   $"DF_HadesServerProxy.cpp",0x4(%esp)
08470668 +0x40:  movl   $0x1,(%esp)
0847066f +0x47:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08470674 +0x4c:  mov    $0x0,%eax
08470679 +0x51:  jmp    08470680 <+0x58>
0847067b +0x53:  mov    $0x1,%eax
08470680 +0x58:  leave
08470681 +0x59:  ret
```

## 反编译 C

```c
// CHadesServerProxy::InitUdp @ 0x8470628

/* CHadesServerProxy::InitUdp() */

bool __thiscall CHadesServerProxy::InitUdp(CHadesServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x30e10));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_HadesServerProxy.cpp","bool CHadesServerProxy::InitUdp()",0xd5,
               "[CHadesServerProxy::Init] Can\'t init udp client socket");
  }
  return iVar1 != -1;
}
```

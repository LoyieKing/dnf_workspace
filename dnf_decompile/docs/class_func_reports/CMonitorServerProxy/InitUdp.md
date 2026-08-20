# InitUdp

`_ZN19CMonitorServerProxy7InitUdpEv`

`CMonitorServerProxy::InitUdp()`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470a7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470a7c  _ZN19CMonitorServerProxy7InitUdpEv
#           CMonitorServerProxy::InitUdp()
# range [0x08470a7c, 0x08470ad5]
08470a7c +0x00:  push   %ebp
08470a7d +0x01:  mov    %esp,%ebp
08470a7f +0x03:  sub    $0x28,%esp
08470a82 +0x06:  mov    0x8(%ebp),%eax
08470a85 +0x09:  add    $&_ZL14gUnicodeBuffer+0x268d8,%eax
08470a8a +0x0e:  mov    %eax,(%esp)
08470a8d +0x11:  call   0848369a <_ZN11CUdpHandler16InitClientSocketEv>  ; CUdpHandler::InitClientSocket()
08470a92 +0x16:  cmp    $0xffffffff,%eax
08470a95 +0x19:  sete   %al
08470a98 +0x1c:  test   %al,%al
08470a9a +0x1e:  je     08470acf <+0x53>
08470a9c +0x20:  movl   $"[CMonitorServerProxy::Init] Can't init udp client socket",0x10(%esp)
08470aa4 +0x28:  movl   $0x485,0xc(%esp)
08470aac +0x30:  movl   $&_ZZN19CMonitorServerProxy7InitUdpEvE19__PRETTY_FUNCTION__,0x8(%esp)
08470ab4 +0x38:  movl   $"DF_MonitorServerProxy.cpp",0x4(%esp)
08470abc +0x40:  movl   $0x1,(%esp)
08470ac3 +0x47:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08470ac8 +0x4c:  mov    $0x0,%eax
08470acd +0x51:  jmp    08470ad4 <+0x58>
08470acf +0x53:  mov    $0x1,%eax
08470ad4 +0x58:  leave
08470ad5 +0x59:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::InitUdp @ 0x8470a7c

/* CMonitorServerProxy::InitUdp() */

bool __thiscall CMonitorServerProxy::InitUdp(CMonitorServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x30e04));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_MonitorServerProxy.cpp","bool CMonitorServerProxy::InitUdp()",0x485,
               "[CMonitorServerProxy::Init] Can\'t init udp client socket");
  }
  return iVar1 != -1;
}
```

# Init

`_ZN27CDoubleConnCheckServerProxy4InitEv`

`CDoubleConnCheckServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CDoubleConnCheckServerProxy` | `0x0846d356` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d356  _ZN27CDoubleConnCheckServerProxy4InitEv
#           CDoubleConnCheckServerProxy::Init()
# range [0x0846d356, 0x0846d3ad]
0846d356 +0x00:  push   %ebp
0846d357 +0x01:  mov    %esp,%ebp
0846d359 +0x03:  sub    $0x28,%esp
0846d35c +0x06:  mov    0x8(%ebp),%eax
0846d35f +0x09:  add    $0x8,%eax
0846d362 +0x0c:  mov    %eax,(%esp)
0846d365 +0x0f:  call   0848369a <_ZN11CUdpHandler16InitClientSocketEv>  ; CUdpHandler::InitClientSocket()
0846d36a +0x14:  cmp    $0xffffffff,%eax
0846d36d +0x17:  sete   %al
0846d370 +0x1a:  test   %al,%al
0846d372 +0x1c:  je     0846d3a7 <+0x51>
0846d374 +0x1e:  movl   $"[CDoubleConnCheckServerProxy::Init] Can't init udp client socket\n",0x10(%esp)
0846d37c +0x26:  movl   $0x78,0xc(%esp)
0846d384 +0x2e:  movl   $&_ZZN27CDoubleConnCheckServerProxy4InitEvE12__FUNCTION__,0x8(%esp)
0846d38c +0x36:  movl   $"DF_DoubleConnCheckServerProxy.cpp",0x4(%esp)
0846d394 +0x3e:  movl   $0x1,(%esp)
0846d39b +0x45:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846d3a0 +0x4a:  mov    $0x0,%eax
0846d3a5 +0x4f:  jmp    0846d3ac <+0x56>
0846d3a7 +0x51:  mov    $0x1,%eax
0846d3ac +0x56:  leave
0846d3ad +0x57:  ret
```

## 反编译 C

```c
// CDoubleConnCheckServerProxy::Init @ 0x846d356

/* CDoubleConnCheckServerProxy::Init() */

bool __thiscall CDoubleConnCheckServerProxy::Init(CDoubleConnCheckServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 8));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_DoubleConnCheckServerProxy.cpp","Init",0x78,
               "[CDoubleConnCheckServerProxy::Init] Can\'t init udp client socket\n");
  }
  return iVar1 != -1;
}
```

# Init

`_ZN21CStatisticServerProxy4InitEv`

`CStatisticServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CStatisticServerProxy` | `0x08471fda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471fda  _ZN21CStatisticServerProxy4InitEv
#           CStatisticServerProxy::Init()
# range [0x08471fda, 0x08472043]
08471fda +0x00:  push   %ebp
08471fdb +0x01:  mov    %esp,%ebp
08471fdd +0x03:  sub    $0x28,%esp
08471fe0 +0x06:  mov    0x8(%ebp),%eax
08471fe3 +0x09:  mov    0x4(%eax),%eax
08471fe6 +0x0c:  test   %eax,%eax
08471fe8 +0x0e:  jne    08471ff1 <+0x17>
08471fea +0x10:  mov    $0x1,%eax
08471fef +0x15:  jmp    08472041 <+0x67>
08471ff1 +0x17:  mov    0x8(%ebp),%eax
08471ff4 +0x1a:  add    $0x8,%eax
08471ff7 +0x1d:  mov    %eax,(%esp)
08471ffa +0x20:  call   0848369a <_ZN11CUdpHandler16InitClientSocketEv>  ; CUdpHandler::InitClientSocket()
08471fff +0x25:  cmp    $0xffffffff,%eax
08472002 +0x28:  sete   %al
08472005 +0x2b:  test   %al,%al
08472007 +0x2d:  je     0847203c <+0x62>
08472009 +0x2f:  movl   $"[CStatisticServerProxy::Init] Can't init udp client socket\n",0x10(%esp)
08472011 +0x37:  movl   $0x267,0xc(%esp)
08472019 +0x3f:  movl   $&_ZZN21CStatisticServerProxy4InitEvE19__PRETTY_FUNCTION__,0x8(%esp)
08472021 +0x47:  movl   $"DF_StatisticServerProxy.cpp",0x4(%esp)
08472029 +0x4f:  movl   $0x1,(%esp)
08472030 +0x56:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08472035 +0x5b:  mov    $0x0,%eax
0847203a +0x60:  jmp    08472041 <+0x67>
0847203c +0x62:  mov    $0x1,%eax
08472041 +0x67:  leave
08472042 +0x68:  ret
08472043 +0x69:  nop
```

## 反编译 C

```c
// CStatisticServerProxy::Init @ 0x8471fda

/* CStatisticServerProxy::Init() */

undefined4 __thiscall CStatisticServerProxy::Init(CStatisticServerProxy *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 4) == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 8));
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"DF_StatisticServerProxy.cpp","bool CStatisticServerProxy::Init()",0x267,
                 "[CStatisticServerProxy::Init] Can\'t init udp client socket\n");
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

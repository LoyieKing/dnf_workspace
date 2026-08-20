# OnTcpRecv

`_ZN19CMonitorServerProxy9OnTcpRecvEv`

`CMonitorServerProxy::OnTcpRecv()`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x084712e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084712e0  _ZN19CMonitorServerProxy9OnTcpRecvEv
#           CMonitorServerProxy::OnTcpRecv()
# range [0x084712e0, 0x0847139b]
084712e0 +0x00:  push   %ebp
084712e1 +0x01:  mov    %esp,%ebp
084712e3 +0x03:  sub    $0x38,%esp
084712e6 +0x06:  mov    0x8(%ebp),%eax
084712e9 +0x09:  add    $0xc,%eax
084712ec +0x0c:  mov    %eax,(%esp)
084712ef +0x0f:  call   082fe1fe <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4af>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4af
084712f4 +0x14:  mov    %eax,-0xc(%ebp)
084712f7 +0x17:  cmpl   $0x0,-0xc(%ebp)
084712fb +0x1b:  jle    08471350 <+0x70>
084712fd +0x1d:  mov    -0xc(%ebp),%eax
08471300 +0x20:  mov    %eax,0x4(%esp)
08471304 +0x24:  mov    0x8(%ebp),%eax
08471307 +0x27:  mov    %eax,(%esp)
0847130a +0x2a:  call   084714ce <_ZN19CMonitorServerProxy7ParsingEi>  ; CMonitorServerProxy::Parsing(int)
0847130f +0x2f:  xor    $0x1,%eax
08471312 +0x32:  test   %al,%al
08471314 +0x34:  je     08471349 <+0x69>
08471316 +0x36:  movl   $"Monitor Recv Parsing Err!!!",0x10(%esp)
0847131e +0x3e:  movl   $0x685,0xc(%esp)
08471326 +0x46:  movl   $&_ZZN19CMonitorServerProxy9OnTcpRecvEvE19__PRETTY_FUNCTION__,0x8(%esp)
0847132e +0x4e:  movl   $"DF_MonitorServerProxy.cpp",0x4(%esp)
08471336 +0x56:  movl   $0x1,(%esp)
0847133d +0x5d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08471342 +0x62:  mov    $0x0,%eax
08471347 +0x67:  jmp    08471399 <+0xb9>
08471349 +0x69:  mov    $0x1,%eax
0847134e +0x6e:  jmp    08471399 <+0xb9>
08471350 +0x70:  cmpl   $0x0,-0xc(%ebp)
08471354 +0x74:  jns    08471394 <+0xb4>
08471356 +0x76:  movl   $"Monitor Server maybe Die!!!",0x10(%esp)
0847135e +0x7e:  movl   $0x68e,0xc(%esp)
08471366 +0x86:  movl   $&_ZZN19CMonitorServerProxy9OnTcpRecvEvE19__PRETTY_FUNCTION__,0x8(%esp)
0847136e +0x8e:  movl   $"DF_MonitorServerProxy.cpp",0x4(%esp)
08471376 +0x96:  movl   $0x1,(%esp)
0847137d +0x9d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08471382 +0xa2:  mov    0x8(%ebp),%eax
08471385 +0xa5:  mov    %eax,(%esp)
08471388 +0xa8:  call   08470bee <_ZN19CMonitorServerProxy10DisconnectEv>  ; CMonitorServerProxy::Disconnect()
0847138d +0xad:  mov    $0x0,%eax
08471392 +0xb2:  jmp    08471399 <+0xb9>
08471394 +0xb4:  mov    $0x1,%eax
08471399 +0xb9:  leave
0847139a +0xba:  ret
0847139b +0xbb:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::OnTcpRecv @ 0x84712e0

/* CMonitorServerProxy::OnTcpRecv() */

undefined4 __thiscall CMonitorServerProxy::OnTcpRecv(CMonitorServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)(this + 0xc));
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_MonitorServerProxy.cpp","bool CMonitorServerProxy::OnTcpRecv()",0x68e,
                 "Monitor Server maybe Die!!!");
      Disconnect(this);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = Parsing(this,iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DF_MonitorServerProxy.cpp","bool CMonitorServerProxy::OnTcpRecv()",0x685,
                 "Monitor Recv Parsing Err!!!");
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

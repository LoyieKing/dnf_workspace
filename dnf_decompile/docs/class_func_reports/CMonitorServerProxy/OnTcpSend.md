# OnTcpSend

`_ZN19CMonitorServerProxy9OnTcpSendEv`

`CMonitorServerProxy::OnTcpSend()`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x0847139c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847139c  _ZN19CMonitorServerProxy9OnTcpSendEv
#           CMonitorServerProxy::OnTcpSend()
# range [0x0847139c, 0x08471443]
0847139c +0x00:  push   %ebp
0847139d +0x01:  mov    %esp,%ebp
0847139f +0x03:  push   %esi
084713a0 +0x04:  push   %ebx
084713a1 +0x05:  sub    $0x20,%esp
084713a4 +0x08:  mov    0x8(%ebp),%eax
084713a7 +0x0b:  add    $0xc,%eax
084713aa +0x0e:  mov    %eax,(%esp)
084713ad +0x11:  call   082fe352 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x603>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x603
084713b2 +0x16:  shr    $0x1f,%eax
084713b5 +0x19:  test   %al,%al
084713b7 +0x1b:  je     0847142f <+0x93>
084713b9 +0x1d:  call   0807dd70 <_init+0x668>
084713be +0x22:  mov    (%eax),%eax
084713c0 +0x24:  mov    %eax,(%esp)
084713c3 +0x27:  call   0807d730 <_init+0x28>
084713c8 +0x2c:  mov    %eax,%esi
084713ca +0x2e:  mov    0x8(%ebp),%eax
084713cd +0x31:  mov    %eax,(%esp)
084713d0 +0x34:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
084713d5 +0x39:  mov    %eax,(%esp)
084713d8 +0x3c:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
084713dd +0x41:  mov    %eax,%ebx
084713df +0x43:  movl   $0x0,0xc(%esp)
084713e7 +0x4b:  movl   $0x6a3,0x8(%esp)
084713ef +0x53:  movl   $&_ZZN19CMonitorServerProxy9OnTcpSendEvE19__PRETTY_FUNCTION__,0x4(%esp)
084713f7 +0x5b:  lea    -0x18(%ebp),%eax
084713fa +0x5e:  mov    %eax,(%esp)
084713fd +0x61:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08471402 +0x66:  mov    %esi,0xc(%esp)
08471406 +0x6a:  mov    %ebx,0x8(%esp)
0847140a +0x6e:  movl   $"OnSend() Socket[%d] Error(%s)",0x4(%esp)
08471412 +0x76:  lea    -0x18(%ebp),%eax
08471415 +0x79:  mov    %eax,(%esp)
08471418 +0x7c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847141d +0x81:  mov    0x8(%ebp),%eax
08471420 +0x84:  mov    %eax,(%esp)
08471423 +0x87:  call   08470bee <_ZN19CMonitorServerProxy10DisconnectEv>  ; CMonitorServerProxy::Disconnect()
08471428 +0x8c:  mov    $0xffffffff,%eax
0847142d +0x91:  jmp    0847143d <+0xa1>
0847142f +0x93:  mov    0x8(%ebp),%eax
08471432 +0x96:  add    $0xc,%eax
08471435 +0x99:  mov    %eax,(%esp)
08471438 +0x9c:  call   08471748 <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x1a2>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1a2
0847143d +0xa1:  add    $0x20,%esp
08471440 +0xa4:  pop    %ebx
08471441 +0xa5:  pop    %esi
08471442 +0xa6:  pop    %ebp
08471443 +0xa7:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::OnTcpSend @ 0x847139c

/* CMonitorServerProxy::OnTcpSend() */

undefined4 __thiscall CMonitorServerProxy::OnTcpSend(CMonitorServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  iVar1 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0xc));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"int CMonitorServerProxy::OnTcpSend()",0x6a3,0);
    cMyTrace::operator()(local_1c,"OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
    Disconnect(this);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = CNetwork<100000,100000>::GetRemainSendSize((CNetwork<100000,100000> *)(this + 0xc));
  }
  return uVar4;
}
```

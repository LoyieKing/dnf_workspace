# OnTcpSend

`_ZN21CCommunityServerProxy9OnTcpSendEv`

`CCommunityServerProxy::OnTcpSend()`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c8c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c8c4  _ZN21CCommunityServerProxy9OnTcpSendEv
#           CCommunityServerProxy::OnTcpSend()
# range [0x0846c8c4, 0x0846c961]
0846c8c4 +0x00:  push   %ebp
0846c8c5 +0x01:  mov    %esp,%ebp
0846c8c7 +0x03:  push   %esi
0846c8c8 +0x04:  push   %ebx
0846c8c9 +0x05:  sub    $0x20,%esp
0846c8cc +0x08:  mov    0x8(%ebp),%eax
0846c8cf +0x0b:  mov    %eax,(%esp)
0846c8d2 +0x0e:  call   082fe352 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x603>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x603
0846c8d7 +0x13:  shr    $0x1f,%eax
0846c8da +0x16:  test   %al,%al
0846c8dc +0x18:  je     0846c954 <+0x90>
0846c8de +0x1a:  call   0807dd70 <_init+0x668>
0846c8e3 +0x1f:  mov    (%eax),%eax
0846c8e5 +0x21:  mov    %eax,(%esp)
0846c8e8 +0x24:  call   0807d730 <_init+0x28>
0846c8ed +0x29:  mov    %eax,%esi
0846c8ef +0x2b:  mov    0x8(%ebp),%eax
0846c8f2 +0x2e:  mov    %eax,(%esp)
0846c8f5 +0x31:  call   0846d048 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x31b>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x31b
0846c8fa +0x36:  mov    %eax,(%esp)
0846c8fd +0x39:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0846c902 +0x3e:  mov    %eax,%ebx
0846c904 +0x40:  movl   $0x0,0xc(%esp)
0846c90c +0x48:  movl   $0x101,0x8(%esp)
0846c914 +0x50:  movl   $&_ZZN21CCommunityServerProxy9OnTcpSendEvE19__PRETTY_FUNCTION__,0x4(%esp)
0846c91c +0x58:  lea    -0x18(%ebp),%eax
0846c91f +0x5b:  mov    %eax,(%esp)
0846c922 +0x5e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0846c927 +0x63:  mov    %esi,0xc(%esp)
0846c92b +0x67:  mov    %ebx,0x8(%esp)
0846c92f +0x6b:  movl   $"CommunityServer OnSend() Socket[%d] Error(%s)",0x4(%esp)
0846c937 +0x73:  lea    -0x18(%ebp),%eax
0846c93a +0x76:  mov    %eax,(%esp)
0846c93d +0x79:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846c942 +0x7e:  mov    0x8(%ebp),%eax
0846c945 +0x81:  mov    %eax,(%esp)
0846c948 +0x84:  call   0846c770 <_ZN21CCommunityServerProxy10DisconnectEv>  ; CCommunityServerProxy::Disconnect()
0846c94d +0x89:  mov    $0xffffffff,%eax
0846c952 +0x8e:  jmp    0846c95a <+0x96>
0846c954 +0x90:  mov    0x8(%ebp),%eax
0846c957 +0x93:  mov    0x18(%eax),%eax
0846c95a +0x96:  add    $0x20,%esp
0846c95d +0x99:  pop    %ebx
0846c95e +0x9a:  pop    %esi
0846c95f +0x9b:  pop    %ebp
0846c960 +0x9c:  ret
0846c961 +0x9d:  nop
```

## 反编译 C

```c
// CCommunityServerProxy::OnTcpSend @ 0x846c8c4

/* CCommunityServerProxy::OnTcpSend() */

undefined4 __thiscall CCommunityServerProxy::OnTcpSend(CCommunityServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  iVar1 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)this);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"int CCommunityServerProxy::OnTcpSend()",0x101,0);
    cMyTrace::operator()(local_1c,"CommunityServer OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
    Disconnect(this);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x18);
  }
  return uVar4;
}
```

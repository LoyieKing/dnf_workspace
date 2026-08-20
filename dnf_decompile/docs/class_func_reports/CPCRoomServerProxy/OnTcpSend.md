# OnTcpSend

`_ZN18CPCRoomServerProxy9OnTcpSendEv`

`CPCRoomServerProxy::OnTcpSend()`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x08471b32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471b32  _ZN18CPCRoomServerProxy9OnTcpSendEv
#           CPCRoomServerProxy::OnTcpSend()
# range [0x08471b32, 0x08471bcf]
08471b32 +0x00:  push   %ebp
08471b33 +0x01:  mov    %esp,%ebp
08471b35 +0x03:  push   %esi
08471b36 +0x04:  push   %ebx
08471b37 +0x05:  sub    $0x20,%esp
08471b3a +0x08:  mov    0x8(%ebp),%eax
08471b3d +0x0b:  mov    %eax,(%esp)
08471b40 +0x0e:  call   082fe352 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x603>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x603
08471b45 +0x13:  shr    $0x1f,%eax
08471b48 +0x16:  test   %al,%al
08471b4a +0x18:  je     08471bc2 <+0x90>
08471b4c +0x1a:  call   0807dd70 <_init+0x668>
08471b51 +0x1f:  mov    (%eax),%eax
08471b53 +0x21:  mov    %eax,(%esp)
08471b56 +0x24:  call   0807d730 <_init+0x28>
08471b5b +0x29:  mov    %eax,%esi
08471b5d +0x2b:  mov    0x8(%ebp),%eax
08471b60 +0x2e:  mov    %eax,(%esp)
08471b63 +0x31:  call   08471e08 <_GLOBAL__I__ZN18CPCRoomServerProxyC2EPci+0x1c>  ; global constructors keyed to CPCRoomServerProxy::CPCRoomServerProxy(char*, int)+0x1c
08471b68 +0x36:  mov    %eax,(%esp)
08471b6b +0x39:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
08471b70 +0x3e:  mov    %eax,%ebx
08471b72 +0x40:  movl   $0x0,0xc(%esp)
08471b7a +0x48:  movl   $0x16d,0x8(%esp)
08471b82 +0x50:  movl   $&_ZZN18CPCRoomServerProxy9OnTcpSendEvE12__FUNCTION__,0x4(%esp)
08471b8a +0x58:  lea    -0x18(%ebp),%eax
08471b8d +0x5b:  mov    %eax,(%esp)
08471b90 +0x5e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08471b95 +0x63:  mov    %esi,0xc(%esp)
08471b99 +0x67:  mov    %ebx,0x8(%esp)
08471b9d +0x6b:  movl   $"PCRoom OnSend() Socket[%d] Error(%s)",0x4(%esp)
08471ba5 +0x73:  lea    -0x18(%ebp),%eax
08471ba8 +0x76:  mov    %eax,(%esp)
08471bab +0x79:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08471bb0 +0x7e:  mov    0x8(%ebp),%eax
08471bb3 +0x81:  mov    %eax,(%esp)
08471bb6 +0x84:  call   084719de <_ZN18CPCRoomServerProxy10DisconnectEv>  ; CPCRoomServerProxy::Disconnect()
08471bbb +0x89:  mov    $0xffffffff,%eax
08471bc0 +0x8e:  jmp    08471bc8 <+0x96>
08471bc2 +0x90:  mov    0x8(%ebp),%eax
08471bc5 +0x93:  mov    0x18(%eax),%eax
08471bc8 +0x96:  add    $0x20,%esp
08471bcb +0x99:  pop    %ebx
08471bcc +0x9a:  pop    %esi
08471bcd +0x9b:  pop    %ebp
08471bce +0x9c:  ret
08471bcf +0x9d:  nop
```

## 反编译 C

```c
// CPCRoomServerProxy::OnTcpSend @ 0x8471b32

/* CPCRoomServerProxy::OnTcpSend() */

undefined4 __thiscall CPCRoomServerProxy::OnTcpSend(CPCRoomServerProxy *this)

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
    cMyTrace::cMyTrace(local_1c,"OnTcpSend",0x16d,0);
    cMyTrace::operator()(local_1c,"PCRoom OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
    Disconnect(this);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x18);
  }
  return uVar4;
}
```

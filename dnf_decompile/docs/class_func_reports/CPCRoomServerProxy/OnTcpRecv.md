# OnTcpRecv

`_ZN18CPCRoomServerProxy9OnTcpRecvEv`

`CPCRoomServerProxy::OnTcpRecv()`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x08471a9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471a9a  _ZN18CPCRoomServerProxy9OnTcpRecvEv
#           CPCRoomServerProxy::OnTcpRecv()
# range [0x08471a9a, 0x08471b31]
08471a9a +0x00:  push   %ebp
08471a9b +0x01:  mov    %esp,%ebp
08471a9d +0x03:  sub    $0x38,%esp
08471aa0 +0x06:  mov    0x8(%ebp),%eax
08471aa3 +0x09:  mov    %eax,(%esp)
08471aa6 +0x0c:  call   082fe1fe <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4af>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4af
08471aab +0x11:  mov    %eax,-0xc(%ebp)
08471aae +0x14:  cmpl   $0x0,-0xc(%ebp)
08471ab2 +0x18:  jle    08471ae6 <+0x4c>
08471ab4 +0x1a:  mov    -0xc(%ebp),%eax
08471ab7 +0x1d:  mov    %eax,0x4(%esp)
08471abb +0x21:  mov    0x8(%ebp),%eax
08471abe +0x24:  mov    %eax,(%esp)
08471ac1 +0x27:  call   08471c5a <_ZN18CPCRoomServerProxy7ParsingEi>  ; CPCRoomServerProxy::Parsing(int)
08471ac6 +0x2c:  xor    $0x1,%eax
08471ac9 +0x2f:  test   %al,%al
08471acb +0x31:  je     08471adf <+0x45>
08471acd +0x33:  mov    0x8(%ebp),%eax
08471ad0 +0x36:  mov    %eax,(%esp)
08471ad3 +0x39:  call   084719de <_ZN18CPCRoomServerProxy10DisconnectEv>  ; CPCRoomServerProxy::Disconnect()
08471ad8 +0x3e:  mov    $0x0,%eax
08471add +0x43:  jmp    08471b2f <+0x95>
08471adf +0x45:  mov    $0x1,%eax
08471ae4 +0x4a:  jmp    08471b2f <+0x95>
08471ae6 +0x4c:  cmpl   $0x0,-0xc(%ebp)
08471aea +0x50:  jns    08471b2a <+0x90>
08471aec +0x52:  movl   $"PCRoom Server maybe Die!!!",0x10(%esp)
08471af4 +0x5a:  movl   $0x155,0xc(%esp)
08471afc +0x62:  movl   $&_ZZN18CPCRoomServerProxy9OnTcpRecvEvE12__FUNCTION__,0x8(%esp)
08471b04 +0x6a:  movl   $"DF_PCRoomServerProxy.cpp",0x4(%esp)
08471b0c +0x72:  movl   $0x1,(%esp)
08471b13 +0x79:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08471b18 +0x7e:  mov    0x8(%ebp),%eax
08471b1b +0x81:  mov    %eax,(%esp)
08471b1e +0x84:  call   084719de <_ZN18CPCRoomServerProxy10DisconnectEv>  ; CPCRoomServerProxy::Disconnect()
08471b23 +0x89:  mov    $0x0,%eax
08471b28 +0x8e:  jmp    08471b2f <+0x95>
08471b2a +0x90:  mov    $0x1,%eax
08471b2f +0x95:  leave
08471b30 +0x96:  ret
08471b31 +0x97:  nop
```

## 反编译 C

```c
// CPCRoomServerProxy::OnTcpRecv @ 0x8471a9a

/* CPCRoomServerProxy::OnTcpRecv() */

undefined4 __thiscall CPCRoomServerProxy::OnTcpRecv(CPCRoomServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)this);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_PCRoomServerProxy.cpp","OnTcpRecv",0x155,"PCRoom Server maybe Die!!!");
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
      Disconnect(this);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

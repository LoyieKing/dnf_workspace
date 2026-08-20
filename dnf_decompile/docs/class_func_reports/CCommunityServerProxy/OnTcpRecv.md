# OnTcpRecv

`_ZN21CCommunityServerProxy9OnTcpRecvEv`

`CCommunityServerProxy::OnTcpRecv()`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c82c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c82c  _ZN21CCommunityServerProxy9OnTcpRecvEv
#           CCommunityServerProxy::OnTcpRecv()
# range [0x0846c82c, 0x0846c8c3]
0846c82c +0x00:  push   %ebp
0846c82d +0x01:  mov    %esp,%ebp
0846c82f +0x03:  sub    $0x38,%esp
0846c832 +0x06:  mov    0x8(%ebp),%eax
0846c835 +0x09:  mov    %eax,(%esp)
0846c838 +0x0c:  call   082fe1fe <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4af>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4af
0846c83d +0x11:  mov    %eax,-0xc(%ebp)
0846c840 +0x14:  cmpl   $0x0,-0xc(%ebp)
0846c844 +0x18:  jle    0846c878 <+0x4c>
0846c846 +0x1a:  mov    -0xc(%ebp),%eax
0846c849 +0x1d:  mov    %eax,0x4(%esp)
0846c84d +0x21:  mov    0x8(%ebp),%eax
0846c850 +0x24:  mov    %eax,(%esp)
0846c853 +0x27:  call   0846c9ec <_ZN21CCommunityServerProxy7ParsingEi>  ; CCommunityServerProxy::Parsing(int)
0846c858 +0x2c:  xor    $0x1,%eax
0846c85b +0x2f:  test   %al,%al
0846c85d +0x31:  je     0846c871 <+0x45>
0846c85f +0x33:  mov    0x8(%ebp),%eax
0846c862 +0x36:  mov    %eax,(%esp)
0846c865 +0x39:  call   0846c770 <_ZN21CCommunityServerProxy10DisconnectEv>  ; CCommunityServerProxy::Disconnect()
0846c86a +0x3e:  mov    $0x0,%eax
0846c86f +0x43:  jmp    0846c8c1 <+0x95>
0846c871 +0x45:  mov    $0x1,%eax
0846c876 +0x4a:  jmp    0846c8c1 <+0x95>
0846c878 +0x4c:  cmpl   $0x0,-0xc(%ebp)
0846c87c +0x50:  jns    0846c8bc <+0x90>
0846c87e +0x52:  movl   $"Community Server maybe Die!!!",0x10(%esp)
0846c886 +0x5a:  movl   $0xed,0xc(%esp)
0846c88e +0x62:  movl   $&_ZZN21CCommunityServerProxy9OnTcpRecvEvE19__PRETTY_FUNCTION__,0x8(%esp)
0846c896 +0x6a:  movl   $"DF_CommunityServerProxy.cpp",0x4(%esp)
0846c89e +0x72:  movl   $0x1,(%esp)
0846c8a5 +0x79:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846c8aa +0x7e:  mov    0x8(%ebp),%eax
0846c8ad +0x81:  mov    %eax,(%esp)
0846c8b0 +0x84:  call   0846c770 <_ZN21CCommunityServerProxy10DisconnectEv>  ; CCommunityServerProxy::Disconnect()
0846c8b5 +0x89:  mov    $0x0,%eax
0846c8ba +0x8e:  jmp    0846c8c1 <+0x95>
0846c8bc +0x90:  mov    $0x1,%eax
0846c8c1 +0x95:  leave
0846c8c2 +0x96:  ret
0846c8c3 +0x97:  nop
```

## 反编译 C

```c
// CCommunityServerProxy::OnTcpRecv @ 0x846c82c

/* CCommunityServerProxy::OnTcpRecv() */

undefined4 __thiscall CCommunityServerProxy::OnTcpRecv(CCommunityServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)this);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_CommunityServerProxy.cpp","bool CCommunityServerProxy::OnTcpRecv()",0xed,
                 "Community Server maybe Die!!!");
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

# OnTcpRecv

`_ZN17CGuildServerProxy9OnTcpRecvEv`

`CGuildServerProxy::OnTcpRecv()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e53c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e53c  _ZN17CGuildServerProxy9OnTcpRecvEv
#           CGuildServerProxy::OnTcpRecv()
# range [0x0846e53c, 0x0846e5cb]
0846e53c +0x00:  push   %ebp
0846e53d +0x01:  mov    %esp,%ebp
0846e53f +0x03:  sub    $0x38,%esp
0846e542 +0x06:  mov    0x8(%ebp),%eax
0846e545 +0x09:  add    $0x24,%eax
0846e548 +0x0c:  mov    %eax,(%esp)
0846e54b +0x0f:  call   082fe1fe <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4af>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4af
0846e550 +0x14:  mov    %eax,-0xc(%ebp)
0846e553 +0x17:  cmpl   $0x0,-0xc(%ebp)
0846e557 +0x1b:  jle    0846e580 <+0x44>
0846e559 +0x1d:  mov    -0xc(%ebp),%eax
0846e55c +0x20:  mov    %eax,0x4(%esp)
0846e560 +0x24:  mov    0x8(%ebp),%eax
0846e563 +0x27:  mov    %eax,(%esp)
0846e566 +0x2a:  call   0846e6f6 <_ZN17CGuildServerProxy7ParsingEi>  ; CGuildServerProxy::Parsing(int)
0846e56b +0x2f:  xor    $0x1,%eax
0846e56e +0x32:  test   %al,%al
0846e570 +0x34:  je     0846e579 <+0x3d>
0846e572 +0x36:  mov    $0x0,%eax
0846e577 +0x3b:  jmp    0846e5c9 <+0x8d>
0846e579 +0x3d:  mov    $0x1,%eax
0846e57e +0x42:  jmp    0846e5c9 <+0x8d>
0846e580 +0x44:  cmpl   $0x0,-0xc(%ebp)
0846e584 +0x48:  jns    0846e5c4 <+0x88>
0846e586 +0x4a:  movl   $"Guild Server maybe Die!!!",0x10(%esp)
0846e58e +0x52:  movl   $0x71f,0xc(%esp)
0846e596 +0x5a:  movl   $&_ZZN17CGuildServerProxy9OnTcpRecvEvE19__PRETTY_FUNCTION__,0x8(%esp)
0846e59e +0x62:  movl   $"DF_GuildServerProxy.cpp",0x4(%esp)
0846e5a6 +0x6a:  movl   $0x1,(%esp)
0846e5ad +0x71:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846e5b2 +0x76:  mov    0x8(%ebp),%eax
0846e5b5 +0x79:  mov    %eax,(%esp)
0846e5b8 +0x7c:  call   0846da84 <_ZN17CGuildServerProxy10DisconnectEv>  ; CGuildServerProxy::Disconnect()
0846e5bd +0x81:  mov    $0x0,%eax
0846e5c2 +0x86:  jmp    0846e5c9 <+0x8d>
0846e5c4 +0x88:  mov    $0x1,%eax
0846e5c9 +0x8d:  leave
0846e5ca +0x8e:  ret
0846e5cb +0x8f:  nop
```

## 反编译 C

```c
// CGuildServerProxy::OnTcpRecv @ 0x846e53c

/* CGuildServerProxy::OnTcpRecv() */

undefined4 __thiscall CGuildServerProxy::OnTcpRecv(CGuildServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)(this + 0x24));
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_GuildServerProxy.cpp","bool CGuildServerProxy::OnTcpRecv()",0x71f,
                 "Guild Server maybe Die!!!");
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
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

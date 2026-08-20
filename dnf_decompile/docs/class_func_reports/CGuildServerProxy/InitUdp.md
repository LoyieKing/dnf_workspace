# InitUdp

`_ZN17CGuildServerProxy7InitUdpEv`

`CGuildServerProxy::InitUdp()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846d912` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d912  _ZN17CGuildServerProxy7InitUdpEv
#           CGuildServerProxy::InitUdp()
# range [0x0846d912, 0x0846d96b]
0846d912 +0x00:  push   %ebp
0846d913 +0x01:  mov    %esp,%ebp
0846d915 +0x03:  sub    $0x28,%esp
0846d918 +0x06:  mov    0x8(%ebp),%eax
0846d91b +0x09:  add    $&_ZL14gUnicodeBuffer+0x268f0,%eax
0846d920 +0x0e:  mov    %eax,(%esp)
0846d923 +0x11:  call   0848369a <_ZN11CUdpHandler16InitClientSocketEv>  ; CUdpHandler::InitClientSocket()
0846d928 +0x16:  cmp    $0xffffffff,%eax
0846d92b +0x19:  sete   %al
0846d92e +0x1c:  test   %al,%al
0846d930 +0x1e:  je     0846d965 <+0x53>
0846d932 +0x20:  movl   $"[CGuildServerProxy::Init] Can't init udp client socket\n",0x10(%esp)
0846d93a +0x28:  movl   $0x4d4,0xc(%esp)
0846d942 +0x30:  movl   $&_ZZN17CGuildServerProxy7InitUdpEvE19__PRETTY_FUNCTION__,0x8(%esp)
0846d94a +0x38:  movl   $"DF_GuildServerProxy.cpp",0x4(%esp)
0846d952 +0x40:  movl   $0x1,(%esp)
0846d959 +0x47:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846d95e +0x4c:  mov    $0x0,%eax
0846d963 +0x51:  jmp    0846d96a <+0x58>
0846d965 +0x53:  mov    $0x1,%eax
0846d96a +0x58:  leave
0846d96b +0x59:  ret
```

## 反编译 C

```c
// CGuildServerProxy::InitUdp @ 0x846d912

/* CGuildServerProxy::InitUdp() */

bool __thiscall CGuildServerProxy::InitUdp(CGuildServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x30e1c));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp","bool CGuildServerProxy::InitUdp()",0x4d4,
               "[CGuildServerProxy::Init] Can\'t init udp client socket\n");
  }
  return iVar1 != -1;
}
```

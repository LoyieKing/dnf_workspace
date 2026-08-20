# SendReqestPowerWarStartInfo

`_ZN17CGuildServerProxy27SendReqestPowerWarStartInfoEv`

`CGuildServerProxy::SendReqestPowerWarStartInfo()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e420  _ZN17CGuildServerProxy27SendReqestPowerWarStartInfoEv
#           CGuildServerProxy::SendReqestPowerWarStartInfo()
# range [0x0846e420, 0x0846e45f]
0846e420 +0x00:  push   %ebp
0846e421 +0x01:  mov    %esp,%ebp
0846e423 +0x03:  sub    $0x28,%esp
0846e426 +0x06:  lea    -0x16(%ebp),%eax
0846e429 +0x09:  mov    %eax,(%esp)
0846e42c +0x0c:  call   0846f75e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x52e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x52e
0846e431 +0x11:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0846e436 +0x16:  mov    %eax,(%esp)
0846e439 +0x19:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0846e43e +0x1e:  mov    %eax,-0xc(%ebp)
0846e441 +0x21:  movzwl -0x14(%ebp),%eax
0846e445 +0x25:  movzwl %ax,%edx
0846e448 +0x28:  lea    -0x16(%ebp),%eax
0846e44b +0x2b:  mov    %edx,0x8(%esp)
0846e44f +0x2f:  mov    %eax,0x4(%esp)
0846e453 +0x33:  mov    0x8(%ebp),%eax
0846e456 +0x36:  mov    %eax,(%esp)
0846e459 +0x39:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e45e +0x3e:  leave
0846e45f +0x3f:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendReqestPowerWarStartInfo @ 0x846e420

/* CGuildServerProxy::SendReqestPowerWarStartInfo() */

void __thiscall CGuildServerProxy::SendReqestPowerWarStartInfo(CGuildServerProxy *this)

{
  CEnvironment *this_00;
  Packet_Request_Power_War_Start_Info local_1a [2];
  ushort local_18;
  undefined4 local_10;
  
  Packet_Request_Power_War_Start_Info::Packet_Request_Power_War_Start_Info(local_1a);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_10 = CEnvironment::get_channel_no(this_00);
  SendTcpPacket(this,(char *)local_1a,(uint)local_18);
  return;
}
```

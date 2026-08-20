# SendLogoutToPCRoomServer

`_ZN5CUser24SendLogoutToPCRoomServerEv`

`CUser::SendLogoutToPCRoomServer()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868170c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868170c  _ZN5CUser24SendLogoutToPCRoomServerEv
#           CUser::SendLogoutToPCRoomServer()
# range [0x0868170c, 0x0868181f]
0868170c +0x000:  push   %ebp
0868170d +0x001:  mov    %esp,%ebp
0868170f +0x003:  sub    $0x1238,%esp
08681715 +0x009:  movb   $0x1,-0x216(%ebp)
0868171c +0x010:  mov    0x8(%ebp),%eax
0868171f +0x013:  mov    %eax,(%esp)
08681722 +0x016:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08681727 +0x01b:  mov    %eax,0x4(%esp)
0868172b +0x01f:  lea    -0x216(%ebp),%eax
08681731 +0x025:  add    $0x2,%eax
08681734 +0x028:  mov    %eax,(%esp)
08681737 +0x02b:  call   0807def0 <_init+0x7e8>
0868173c +0x030:  mov    0x8(%ebp),%eax
0868173f +0x033:  mov    %eax,(%esp)
08681742 +0x036:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08681747 +0x03b:  mov    %eax,(%esp)
0868174a +0x03e:  call   0807e3b0 <_init+0xca8>
0868174f +0x043:  mov    %al,-0x215(%ebp)
08681755 +0x049:  mov    0x8(%ebp),%eax
08681758 +0x04c:  mov    %eax,(%esp)
0868175b +0x04f:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08681760 +0x054:  mov    %eax,0x4(%esp)
08681764 +0x058:  lea    -0x216(%ebp),%eax
0868176a +0x05e:  add    $0x2,%eax
0868176d +0x061:  mov    %eax,(%esp)
08681770 +0x064:  call   0807def0 <_init+0x7e8>
08681775 +0x069:  mov    0x8(%ebp),%eax
08681778 +0x06c:  mov    %eax,(%esp)
0868177b +0x06f:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08681780 +0x074:  mov    %eax,(%esp)
08681783 +0x077:  call   0807e3b0 <_init+0xca8>
08681788 +0x07c:  mov    %al,-0x215(%ebp)
0868178e +0x082:  mov    0x8(%ebp),%eax
08681791 +0x085:  mov    %eax,(%esp)
08681794 +0x088:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08681799 +0x08d:  mov    %eax,0x4(%esp)
0868179d +0x091:  lea    -0x216(%ebp),%eax
086817a3 +0x097:  add    $0x102,%eax
086817a8 +0x09c:  mov    %eax,(%esp)
086817ab +0x09f:  call   0807def0 <_init+0x7e8>
086817b0 +0x0a4:  mov    0x8(%ebp),%eax
086817b3 +0x0a7:  mov    %eax,(%esp)
086817b6 +0x0aa:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086817bb +0x0af:  mov    %eax,(%esp)
086817be +0x0b2:  call   0807e3b0 <_init+0xca8>
086817c3 +0x0b7:  mov    %al,-0x115(%ebp)
086817c9 +0x0bd:  mov    0x8(%ebp),%eax
086817cc +0x0c0:  mov    %eax,(%esp)
086817cf +0x0c3:  call   0869727a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3acf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3acf
086817d4 +0x0c8:  mov    %eax,-0x15(%ebp)
086817d7 +0x0cb:  movb   $0x1,-0x11(%ebp)
086817db +0x0cf:  lea    -0x216(%ebp),%eax
086817e1 +0x0d5:  mov    %eax,0x4(%esp)
086817e5 +0x0d9:  lea    -0x121a(%ebp),%eax
086817eb +0x0df:  mov    %eax,(%esp)
086817ee +0x0e2:  call   08694252 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xaa7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xaa7
086817f3 +0x0e7:  lea    -0x121a(%ebp),%eax
086817f9 +0x0ed:  mov    %eax,(%esp)
086817fc +0x0f0:  call   08694224 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xa79>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xa79
08681801 +0x0f5:  lea    -0x121a(%ebp),%ecx
08681807 +0x0fb:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%edx
0868180d +0x101:  mov    %eax,0x8(%esp)
08681811 +0x105:  mov    %ecx,0x4(%esp)
08681815 +0x109:  mov    %edx,(%esp)
08681818 +0x10c:  call   08471a32 <_ZN18CPCRoomServerProxy13SendTcpPacketEPci>  ; CPCRoomServerProxy::SendTcpPacket(char*, int)
0868181d +0x111:  leave
0868181e +0x112:  ret
0868181f +0x113:  nop
```

## 反编译 C

```c
// CUser::SendLogoutToPCRoomServer @ 0x868170c

/* CUser::SendLogoutToPCRoomServer() */

void __thiscall CUser::SendLogoutToPCRoomServer(CUser *this)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  stLoginPacket local_121e [4100];
  stLogin local_21a;
  undefined1 local_219;
  char acStack_218 [255];
  undefined1 local_119;
  char acStack_118 [255];
  undefined4 local_19;
  undefined1 local_15;
  
  local_21a = (stLogin)0x1;
  pcVar1 = (char *)get_acc_name(this);
  strcpy(acStack_218,pcVar1);
  pcVar1 = (char *)get_acc_name(this);
  sVar2 = strlen(pcVar1);
  local_219 = (undefined1)sVar2;
  pcVar1 = (char *)get_acc_name(this);
  strcpy(acStack_218,pcVar1);
  pcVar1 = (char *)get_acc_name(this);
  sVar2 = strlen(pcVar1);
  local_219 = (undefined1)sVar2;
  pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  strcpy(acStack_118,pcVar1);
  pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  sVar2 = strlen(pcVar1);
  local_119 = (undefined1)sVar2;
  local_19 = get_local_ip_address(this);
  local_15 = 1;
  nexon_packet::stLoginPacket::stLoginPacket(local_121e,&local_21a);
  iVar3 = nexon_packet::stPacket::GetLength((stPacket *)local_121e);
  CPCRoomServerProxy::SendTcpPacket(GlobalData::s_pcroom_proxy,(char *)local_121e,iVar3);
  return;
}
```

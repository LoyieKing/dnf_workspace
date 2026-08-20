# SendLoginToPCRoomServer

`_ZN5CUser23SendLoginToPCRoomServerEv`

`CUser::SendLoginToPCRoomServer()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868152c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868152c  _ZN5CUser23SendLoginToPCRoomServerEv
#           CUser::SendLoginToPCRoomServer()
# range [0x0868152c, 0x0868170b]
0868152c +0x000:  push   %ebp
0868152d +0x001:  mov    %esp,%ebp
0868152f +0x003:  push   %edi
08681530 +0x004:  push   %esi
08681531 +0x005:  push   %ebx
08681532 +0x006:  sub    $0x146c,%esp
08681538 +0x00c:  movl   $0x20e,0x8(%esp)
08681540 +0x014:  movl   $0x0,0x4(%esp)
08681548 +0x01c:  lea    -0x226(%ebp),%eax
0868154e +0x022:  mov    %eax,(%esp)
08681551 +0x025:  call   0807dcc0 <_init+0x5b8>
08681556 +0x02a:  movb   $0x3,-0x226(%ebp)
0868155d +0x031:  mov    0x8(%ebp),%eax
08681560 +0x034:  mov    %eax,(%esp)
08681563 +0x037:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08681568 +0x03c:  mov    %eax,0x4(%esp)
0868156c +0x040:  lea    -0x226(%ebp),%eax
08681572 +0x046:  add    $0x2,%eax
08681575 +0x049:  mov    %eax,(%esp)
08681578 +0x04c:  call   0807def0 <_init+0x7e8>
0868157d +0x051:  mov    0x8(%ebp),%eax
08681580 +0x054:  mov    %eax,(%esp)
08681583 +0x057:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08681588 +0x05c:  mov    %eax,(%esp)
0868158b +0x05f:  call   0807e3b0 <_init+0xca8>
08681590 +0x064:  mov    %al,-0x225(%ebp)
08681596 +0x06a:  mov    0x8(%ebp),%eax
08681599 +0x06d:  mov    %eax,(%esp)
0868159c +0x070:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086815a1 +0x075:  mov    %eax,0x4(%esp)
086815a5 +0x079:  lea    -0x226(%ebp),%eax
086815ab +0x07f:  add    $0x102,%eax
086815b0 +0x084:  mov    %eax,(%esp)
086815b3 +0x087:  call   0807def0 <_init+0x7e8>
086815b8 +0x08c:  mov    0x8(%ebp),%eax
086815bb +0x08f:  mov    %eax,(%esp)
086815be +0x092:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086815c3 +0x097:  mov    %eax,(%esp)
086815c6 +0x09a:  call   0807e3b0 <_init+0xca8>
086815cb +0x09f:  mov    %al,-0x125(%ebp)
086815d1 +0x0a5:  mov    0x8(%ebp),%eax
086815d4 +0x0a8:  mov    %eax,(%esp)
086815d7 +0x0ab:  call   084ec90a <_GLOBAL__I__Z7getUserj+0x38bc>  ; global constructors keyed to getUser(unsigned int)+0x38bc
086815dc +0x0b0:  mov    %eax,-0x25(%ebp)
086815df +0x0b3:  movb   $0x0,-0x21(%ebp)
086815e3 +0x0b7:  mov    0x8(%ebp),%eax
086815e6 +0x0ba:  mov    %eax,(%esp)
086815e9 +0x0bd:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086815ee +0x0c2:  mov    %eax,-0x20(%ebp)
086815f1 +0x0c5:  mov    0x8(%ebp),%eax
086815f4 +0x0c8:  mov    %eax,(%esp)
086815f7 +0x0cb:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086815fc +0x0d0:  mov    %eax,-0x1c(%ebp)
086815ff +0x0d3:  mov    -0x1c(%ebp),%eax
08681602 +0x0d6:  mov    %eax,-0x1440(%ebp)
08681608 +0x0dc:  mov    -0x20(%ebp),%eax
0868160b +0x0df:  mov    %eax,-0x143c(%ebp)
08681611 +0x0e5:  movzbl -0x21(%ebp),%eax
08681615 +0x0e9:  movzbl %al,%edi
08681618 +0x0ec:  mov    -0x25(%ebp),%esi
0868161b +0x0ef:  movzbl -0x125(%ebp),%eax
08681622 +0x0f6:  movzbl %al,%ebx
08681625 +0x0f9:  movzbl -0x225(%ebp),%eax
0868162c +0x100:  movzbl %al,%ecx
0868162f +0x103:  movzbl -0x226(%ebp),%eax
08681636 +0x10a:  movzbl %al,%edx
08681639 +0x10d:  mov    -0x1440(%ebp),%eax
0868163f +0x113:  mov    %eax,0x24(%esp)
08681643 +0x117:  mov    -0x143c(%ebp),%eax
08681649 +0x11d:  mov    %eax,0x20(%esp)
0868164d +0x121:  mov    %edi,0x1c(%esp)
08681651 +0x125:  mov    %esi,0x18(%esp)
08681655 +0x129:  lea    -0x226(%ebp),%eax
0868165b +0x12f:  add    $0x102,%eax
08681660 +0x134:  mov    %eax,0x14(%esp)
08681664 +0x138:  mov    %ebx,0x10(%esp)
08681668 +0x13c:  lea    -0x226(%ebp),%eax
0868166e +0x142:  add    $0x2,%eax
08681671 +0x145:  mov    %eax,0xc(%esp)
08681675 +0x149:  mov    %ecx,0x8(%esp)
08681679 +0x14d:  mov    %edx,0x4(%esp)
0868167d +0x151:  movl   $"SEND nexon_packet::stLogin login:%d AccLen:%d Acc:%s CharLen:%d Char:%d Addr:%d canTry_:%d UserIdx:%d m_id:%d",(%esp)
08681684 +0x158:  call   0807db60 <_init+0x458>
08681689 +0x15d:  lea    -0x226(%ebp),%eax
0868168f +0x163:  mov    %eax,0x4(%esp)
08681693 +0x167:  lea    -0x1438(%ebp),%eax
08681699 +0x16d:  mov    %eax,(%esp)
0868169c +0x170:  call   08694252 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xaa7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xaa7
086816a1 +0x175:  lea    -0x1438(%ebp),%eax
086816a7 +0x17b:  mov    %eax,(%esp)
086816aa +0x17e:  call   08694224 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xa79>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xa79
086816af +0x183:  lea    -0x1438(%ebp),%ecx
086816b5 +0x189:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%edx
086816bb +0x18f:  mov    %eax,0x8(%esp)
086816bf +0x193:  mov    %ecx,0x4(%esp)
086816c3 +0x197:  mov    %edx,(%esp)
086816c6 +0x19a:  call   08471a32 <_ZN18CPCRoomServerProxy13SendTcpPacketEPci>  ; CPCRoomServerProxy::SendTcpPacket(char*, int)
086816cb +0x19f:  movl   $0x20e,0x8(%esp)
086816d3 +0x1a7:  movl   $0x0,0x4(%esp)
086816db +0x1af:  lea    -0x434(%ebp),%eax
086816e1 +0x1b5:  mov    %eax,(%esp)
086816e4 +0x1b8:  call   0807dcc0 <_init+0x5b8>
086816e9 +0x1bd:  lea    -0x1438(%ebp),%eax
086816ef +0x1c3:  lea    -0x434(%ebp),%edx
086816f5 +0x1c9:  mov    %edx,0x4(%esp)
086816f9 +0x1cd:  mov    %eax,(%esp)
086816fc +0x1d0:  call   086943af <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xc04>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xc04
08681701 +0x1d5:  add    $0x146c,%esp
08681707 +0x1db:  pop    %ebx
08681708 +0x1dc:  pop    %esi
08681709 +0x1dd:  pop    %edi
0868170a +0x1de:  pop    %ebp
0868170b +0x1df:  ret
```

## 反编译 C

```c
// CUser::SendLoginToPCRoomServer @ 0x868152c

/* CUser::SendLoginToPCRoomServer() */

void __thiscall CUser::SendLoginToPCRoomServer(CUser *this)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  stLoginPacket local_143c [4100];
  stLogin local_438 [526];
  stLogin local_22a;
  byte local_229;
  char acStack_228 [255];
  byte local_129;
  char acStack_128 [255];
  undefined4 local_29;
  byte local_25;
  undefined4 local_24;
  undefined4 local_20;
  
  memset(&local_22a,0,0x20e);
  local_22a = (stLogin)0x3;
  pcVar1 = (char *)get_acc_name(this);
  strcpy(acStack_228,pcVar1);
  pcVar1 = (char *)get_acc_name(this);
  sVar2 = strlen(pcVar1);
  local_229 = (byte)sVar2;
  pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  strcpy(acStack_128,pcVar1);
  pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  sVar2 = strlen(pcVar1);
  local_129 = (byte)sVar2;
  local_29 = get_public_ip_address(this);
  local_25 = 0;
  local_24 = GetUID(this);
  local_20 = get_acc_id(this);
  printf("SEND nexon_packet::stLogin login:%d AccLen:%d Acc:%s CharLen:%d Char:%d Addr:%d canTry_:%d UserIdx:%d m_id:%d"
         ,(uint)(byte)local_22a,(uint)local_229,acStack_228,(uint)local_129,acStack_128,local_29,
         (uint)local_25,local_24,local_20);
  nexon_packet::stLoginPacket::stLoginPacket(local_143c,&local_22a);
  iVar3 = nexon_packet::stPacket::GetLength((stPacket *)local_143c);
  CPCRoomServerProxy::SendTcpPacket(GlobalData::s_pcroom_proxy,(char *)local_143c,iVar3);
  memset(local_438,0,0x20e);
  nexon_packet::stLoginPacket::ReadPacket((char *)local_143c,local_438);
  return;
}
```

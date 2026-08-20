# Send

`_ZN5CUser4SendER11PacketGuard`

`CUser::Send(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086485ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086485ba  _ZN5CUser4SendER11PacketGuard
#           CUser::Send(PacketGuard&)
# range [0x086485ba, 0x0864870d]
086485ba +0x000:  push   %ebp
086485bb +0x001:  mov    %esp,%ebp
086485bd +0x003:  push   %ebx
086485be +0x004:  sub    $0x34,%esp
086485c1 +0x007:  mov    0xc(%ebp),%eax
086485c4 +0x00a:  mov    %eax,(%esp)
086485c7 +0x00d:  call   0822b766 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe10
086485cc +0x012:  mov    %eax,-0xc(%ebp)
086485cf +0x015:  mov    -0xc(%ebp),%eax
086485d2 +0x018:  mov    %eax,(%esp)
086485d5 +0x01b:  call   0848f390 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x6e>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x6e
086485da +0x020:  test   %al,%al
086485dc +0x022:  je     086486ab <+0xf1>
086485e2 +0x028:  movl   $0x0,0x4(%esp)
086485ea +0x030:  mov    -0xc(%ebp),%eax
086485ed +0x033:  mov    %eax,(%esp)
086485f0 +0x036:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
086485f5 +0x03b:  movl   $0x1,0x4(%esp)
086485fd +0x043:  mov    -0xc(%ebp),%eax
08648600 +0x046:  mov    %eax,(%esp)
08648603 +0x049:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
08648608 +0x04e:  movl   $0x1,0x4(%esp)
08648610 +0x056:  mov    -0xc(%ebp),%eax
08648613 +0x059:  mov    %eax,(%esp)
08648616 +0x05c:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0864861b +0x061:  movzwl (%eax),%eax
0864861e +0x064:  movzwl %ax,%ebx
08648621 +0x067:  movl   $0x0,0x4(%esp)
08648629 +0x06f:  mov    -0xc(%ebp),%eax
0864862c +0x072:  mov    %eax,(%esp)
0864862f +0x075:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
08648634 +0x07a:  movzbl %al,%eax
08648637 +0x07d:  mov    %ebx,0x4(%esp)
0864863b +0x081:  mov    %eax,(%esp)
0864863e +0x084:  call   082a2112 <_Z13GetPacketName16ENUM_PACKETCLASSt>  ; GetPacketName(ENUM_PACKETCLASS, unsigned short)
08648643 +0x089:  movl   $0x1,0x4(%esp)
0864864b +0x091:  mov    -0xc(%ebp),%eax
0864864e +0x094:  mov    %eax,(%esp)
08648651 +0x097:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
08648656 +0x09c:  cmp    $0x6,%al
08648658 +0x09e:  setne  %al
0864865b +0x0a1:  test   %al,%al
0864865d +0x0a3:  je     08648697 <+0xdd>
0864865f +0x0a5:  movl   $0x1,0x4(%esp)
08648667 +0x0ad:  mov    -0xc(%ebp),%eax
0864866a +0x0b0:  mov    %eax,(%esp)
0864866d +0x0b3:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
08648672 +0x0b8:  mov    0x8(%ebp),%edx
08648675 +0x0bb:  mov    %al,0x8cf0c(%edx)
0864867b +0x0c1:  movl   $0x0,0x4(%esp)
08648683 +0x0c9:  mov    -0xc(%ebp),%eax
08648686 +0x0cc:  mov    %eax,(%esp)
08648689 +0x0cf:  call   0822b6d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd7e
0864868e +0x0d4:  mov    0x8(%ebp),%edx
08648691 +0x0d7:  mov    %al,0x8cf0d(%edx)
08648697 +0x0dd:  mov    -0xc(%ebp),%eax
0864869a +0x0e0:  mov    %eax,0x4(%esp)
0864869e +0x0e4:  mov    0x8(%ebp),%eax
086486a1 +0x0e7:  mov    %eax,(%esp)
086486a4 +0x0ea:  call   0864809c <_ZN5CUser11AntibotSendER9PacketBuf>  ; CUser::AntibotSend(PacketBuf&)
086486a9 +0x0ef:  jmp    08648708 <+0x14e>
086486ab +0x0f1:  movl   $0x1,0x4(%esp)
086486b3 +0x0f9:  mov    -0xc(%ebp),%eax
086486b6 +0x0fc:  mov    %eax,(%esp)
086486b9 +0x0ff:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
086486be +0x104:  movzwl (%eax),%eax
086486c1 +0x107:  movzwl %ax,%ebx
086486c4 +0x10a:  mov    0x8(%ebp),%eax
086486c7 +0x10d:  mov    %eax,(%esp)
086486ca +0x110:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086486cf +0x115:  mov    %ebx,0x18(%esp)
086486d3 +0x119:  mov    %eax,0x14(%esp)
086486d7 +0x11d:  movl   $"User %s - Packet.is_finallized packet_id(%d) return false",0x10(%esp)
086486df +0x125:  movl   $0x8a0,0xc(%esp)
086486e7 +0x12d:  movl   $&_ZZN5CUser4SendER11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
086486ef +0x135:  movl   $"user.cpp",0x4(%esp)
086486f7 +0x13d:  movl   $0x1,(%esp)
086486fe +0x144:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08648703 +0x149:  mov    $0x0,%eax
08648708 +0x14e:  add    $0x34,%esp
0864870b +0x151:  pop    %ebx
0864870c +0x152:  pop    %ebp
0864870d +0x153:  ret
```

## 反编译 C

```c
// CUser::Send @ 0x86485ba

/* CUser::Send(PacketGuard&) */

undefined4 __thiscall CUser::Send(CUser *this,PacketGuard *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  CUser CVar5;
  PacketBuf *this_00;
  undefined2 *puVar6;
  undefined4 uVar7;
  ushort *puVar8;
  
  this_00 = (PacketBuf *)InterfacePacketBuf::get((InterfacePacketBuf *)param_1);
  cVar3 = PacketBuf::is_finallized(this_00);
  if (cVar3 == '\0') {
    puVar8 = (ushort *)PacketBuf::get_packet(this_00,1);
    uVar2 = *puVar8;
    uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    LogManager::logFormat
              (1,"user.cpp","bool CUser::Send(PacketGuard&)",0x8a0,
               "User %s - Packet.is_finallized packet_id(%d) return false",uVar7,(uint)uVar2);
    uVar7 = 0;
  }
  else {
    PacketBuf::at(this_00,0);
    PacketBuf::at(this_00,1);
    puVar6 = (undefined2 *)PacketBuf::get_packet(this_00,1);
    uVar1 = *puVar6;
    uVar4 = PacketBuf::at(this_00,0);
    GetPacketName(uVar4,uVar1);
    cVar3 = PacketBuf::at(this_00,1);
    if (cVar3 != '\x06') {
      CVar5 = (CUser)PacketBuf::at(this_00,1);
      this[0x8cf0c] = CVar5;
      CVar5 = (CUser)PacketBuf::at(this_00,0);
      this[0x8cf0d] = CVar5;
    }
    uVar7 = AntibotSend(this,this_00);
  }
  return uVar7;
}
```

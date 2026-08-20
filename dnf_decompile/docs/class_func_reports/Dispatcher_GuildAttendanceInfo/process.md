# process

`_ZN30Dispatcher_GuildAttendanceInfo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildAttendanceInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildAttendanceInfo` | `0x081d5492` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5492  _ZN30Dispatcher_GuildAttendanceInfo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildAttendanceInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d5492, 0x081d554d]
081d5492 +0x00:  push   %ebp
081d5493 +0x01:  mov    %esp,%ebp
081d5495 +0x03:  push   %esi
081d5496 +0x04:  push   %ebx
081d5497 +0x05:  sub    $0x30,%esp
081d549a +0x08:  mov    0x10(%ebp),%eax
081d549d +0x0b:  mov    %eax,-0xc(%ebp)
081d54a0 +0x0e:  mov    0xc(%ebp),%eax
081d54a3 +0x11:  mov    %eax,(%esp)
081d54a6 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d54ab +0x19:  cmp    $0x2,%eax
081d54ae +0x1c:  setle  %al
081d54b1 +0x1f:  test   %al,%al
081d54b3 +0x21:  je     081d54bf <+0x2d>
081d54b5 +0x23:  mov    $0x0,%eax
081d54ba +0x28:  jmp    081d5547 <+0xb5>
081d54bf +0x2d:  mov    0xc(%ebp),%eax
081d54c2 +0x30:  mov    %eax,(%esp)
081d54c5 +0x33:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d54ca +0x38:  test   %eax,%eax
081d54cc +0x3a:  sete   %al
081d54cf +0x3d:  test   %al,%al
081d54d1 +0x3f:  je     081d54da <+0x48>
081d54d3 +0x41:  mov    $0x0,%eax
081d54d8 +0x46:  jmp    081d5547 <+0xb5>
081d54da +0x48:  lea    -0x1f(%ebp),%eax
081d54dd +0x4b:  mov    %eax,(%esp)
081d54e0 +0x4e:  call   0822c384 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1a2e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1a2e
081d54e5 +0x53:  mov    0xc(%ebp),%eax
081d54e8 +0x56:  mov    %eax,(%esp)
081d54eb +0x59:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d54f0 +0x5e:  mov    %eax,-0x15(%ebp)
081d54f3 +0x61:  mov    0xc(%ebp),%eax
081d54f6 +0x64:  mov    %eax,(%esp)
081d54f9 +0x67:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d54fe +0x6c:  mov    %eax,-0x11(%ebp)
081d5501 +0x6f:  mov    -0xc(%ebp),%eax
081d5504 +0x72:  movzbl 0xd(%eax),%eax
081d5508 +0x76:  mov    %al,-0xd(%ebp)
081d550b +0x79:  movzwl -0x1d(%ebp),%eax
081d550f +0x7d:  movzwl %ax,%esi
081d5512 +0x80:  lea    -0x1f(%ebp),%ebx
081d5515 +0x83:  mov    0xc(%ebp),%eax
081d5518 +0x86:  mov    %eax,(%esp)
081d551b +0x89:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d5520 +0x8e:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d5526 +0x94:  mov    %eax,0x4(%esp)
081d552a +0x98:  mov    %edx,(%esp)
081d552d +0x9b:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d5532 +0xa0:  mov    %esi,0x8(%esp)
081d5536 +0xa4:  mov    %ebx,0x4(%esp)
081d553a +0xa8:  mov    %eax,(%esp)
081d553d +0xab:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
081d5542 +0xb0:  mov    $0x0,%eax
081d5547 +0xb5:  add    $0x30,%esp
081d554a +0xb8:  pop    %ebx
081d554b +0xb9:  pop    %esi
081d554c +0xba:  pop    %ebp
081d554d +0xbb:  ret
```

## 反编译 C

```c
// Dispatcher_GuildAttendanceInfo::process @ 0x81d5492

/* Dispatcher_GuildAttendanceInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_GuildAttendanceInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  CGuildServerProxy *this;
  Packet_Guild_Attendance_Info local_23 [2];
  ushort local_21;
  undefined4 local_19;
  undefined4 local_15;
  ParamBase local_11;
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar1 != 0)) {
    Packet_Guild_Attendance_Info::Packet_Guild_Attendance_Info(local_23);
    local_19 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    local_15 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    local_11 = local_10[0xd];
    uVar2 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar2);
    CGuildServerProxy::SendTcpPacket(this,(char *)local_23,(uint)local_21);
  }
  return 0;
}
```

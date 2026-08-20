# add_guild_pvp_result

`_ZN5CUser20add_guild_pvp_resultEi`

`CUser::add_guild_pvp_result(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865c936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865c936  _ZN5CUser20add_guild_pvp_resultEi
#           CUser::add_guild_pvp_result(int)
# range [0x0865c936, 0x0865cadb]
0865c936 +0x000:  push   %ebp
0865c937 +0x001:  mov    %esp,%ebp
0865c939 +0x003:  push   %esi
0865c93a +0x004:  push   %ebx
0865c93b +0x005:  sub    $0x40,%esp
0865c93e +0x008:  mov    0x8(%ebp),%eax
0865c941 +0x00b:  mov    %eax,(%esp)
0865c944 +0x00e:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
0865c949 +0x013:  mov    %eax,-0x10(%ebp)
0865c94c +0x016:  cmpl   $0x0,-0x10(%ebp)
0865c950 +0x01a:  je     0865cacb <+0x195>
0865c956 +0x020:  mov    0x8(%ebp),%eax
0865c959 +0x023:  mov    %eax,0x4(%esp)
0865c95d +0x027:  mov    -0x10(%ebp),%eax
0865c960 +0x02a:  mov    %eax,(%esp)
0865c963 +0x02d:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
0865c968 +0x032:  mov    %eax,-0xc(%ebp)
0865c96b +0x035:  mov    -0xc(%ebp),%eax
0865c96e +0x038:  mov    %eax,0x4(%esp)
0865c972 +0x03c:  mov    -0x10(%ebp),%eax
0865c975 +0x03f:  mov    %eax,(%esp)
0865c978 +0x042:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
0865c97d +0x047:  test   %al,%al
0865c97f +0x049:  jne    0865cace <+0x198>
0865c985 +0x04f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0865c98a +0x054:  movl   $0x21,0x4(%esp)
0865c992 +0x05c:  mov    %eax,(%esp)
0865c995 +0x05f:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0865c99a +0x064:  mov    (%eax),%edx
0865c99c +0x066:  add    $0x34,%edx
0865c99f +0x069:  mov    (%edx),%edx
0865c9a1 +0x06b:  movl   $0x0,0x4(%esp)
0865c9a9 +0x073:  mov    %eax,(%esp)
0865c9ac +0x076:  call   *%edx
0865c9ae +0x078:  xor    $0x1,%eax
0865c9b1 +0x07b:  test   %al,%al
0865c9b3 +0x07d:  jne    0865cad1 <+0x19b>
0865c9b9 +0x083:  mov    0x8(%ebp),%eax
0865c9bc +0x086:  mov    %eax,(%esp)
0865c9bf +0x089:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0865c9c4 +0x08e:  test   %eax,%eax
0865c9c6 +0x090:  sete   %al
0865c9c9 +0x093:  test   %al,%al
0865c9cb +0x095:  jne    0865cad4 <+0x19e>
0865c9d1 +0x09b:  lea    -0x1f(%ebp),%eax
0865c9d4 +0x09e:  mov    %eax,(%esp)
0865c9d7 +0x0a1:  call   086944e0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xd35>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xd35
0865c9dc +0x0a6:  mov    0x8(%ebp),%eax
0865c9df +0x0a9:  mov    %eax,(%esp)
0865c9e2 +0x0ac:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0865c9e7 +0x0b1:  mov    %eax,-0x15(%ebp)
0865c9ea +0x0b4:  mov    0xc(%ebp),%eax
0865c9ed +0x0b7:  mov    %al,-0x11(%ebp)
0865c9f0 +0x0ba:  lea    -0x1f(%ebp),%ebx
0865c9f3 +0x0bd:  mov    0x8(%ebp),%eax
0865c9f6 +0x0c0:  mov    %eax,(%esp)
0865c9f9 +0x0c3:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0865c9fe +0x0c8:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0865ca04 +0x0ce:  mov    %eax,0x4(%esp)
0865ca08 +0x0d2:  mov    %edx,(%esp)
0865ca0b +0x0d5:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0865ca10 +0x0da:  movl   $0xf,0x8(%esp)
0865ca18 +0x0e2:  mov    %ebx,0x4(%esp)
0865ca1c +0x0e6:  mov    %eax,(%esp)
0865ca1f +0x0e9:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0865ca24 +0x0ee:  mov    0x8(%ebp),%eax
0865ca27 +0x0f1:  mov    %eax,(%esp)
0865ca2a +0x0f4:  call   0865cd52 <_ZN5CUser15send_pvp_recordEv>  ; CUser::send_pvp_record()
0865ca2f +0x0f9:  lea    -0x2c(%ebp),%eax
0865ca32 +0x0fc:  mov    %eax,(%esp)
0865ca35 +0x0ff:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865ca3a +0x104:  movl   $0x6e,0x8(%esp)
0865ca42 +0x10c:  movl   $0x0,0x4(%esp)
0865ca4a +0x114:  lea    -0x2c(%ebp),%eax
0865ca4d +0x117:  mov    %eax,(%esp)
0865ca50 +0x11a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865ca55 +0x11f:  mov    0xc(%ebp),%eax
0865ca58 +0x122:  mov    %eax,0x4(%esp)
0865ca5c +0x126:  lea    -0x2c(%ebp),%eax
0865ca5f +0x129:  mov    %eax,(%esp)
0865ca62 +0x12c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ca67 +0x131:  movl   $0x1,0x4(%esp)
0865ca6f +0x139:  lea    -0x2c(%ebp),%eax
0865ca72 +0x13c:  mov    %eax,(%esp)
0865ca75 +0x13f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865ca7a +0x144:  lea    -0x2c(%ebp),%eax
0865ca7d +0x147:  mov    %eax,0x4(%esp)
0865ca81 +0x14b:  mov    0x8(%ebp),%eax
0865ca84 +0x14e:  mov    %eax,(%esp)
0865ca87 +0x151:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865ca8c +0x156:  mov    0x8(%ebp),%eax
0865ca8f +0x159:  mov    0x8cfe0(%eax),%eax
0865ca95 +0x15f:  mov    %eax,%edx
0865ca97 +0x161:  add    0xc(%ebp),%edx
0865ca9a +0x164:  mov    0x8(%ebp),%eax
0865ca9d +0x167:  mov    %edx,0x8cfe0(%eax)
0865caa3 +0x16d:  lea    -0x2c(%ebp),%eax
0865caa6 +0x170:  mov    %eax,(%esp)
0865caa9 +0x173:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865caae +0x178:  jmp    0865cad5 <+0x19f>
0865cab0 +0x17a:  mov    %edx,%ebx
0865cab2 +0x17c:  mov    %eax,%esi
0865cab4 +0x17e:  lea    -0x2c(%ebp),%eax
0865cab7 +0x181:  mov    %eax,(%esp)
0865caba +0x184:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865cabf +0x189:  mov    %esi,%eax
0865cac1 +0x18b:  mov    %ebx,%edx
0865cac3 +0x18d:  mov    %eax,(%esp)
0865cac6 +0x190:  call   08ae3750 <_Unwind_Resume>
0865cacb +0x195:  nop
0865cacc +0x196:  jmp    0865cad5 <+0x19f>
0865cace +0x198:  nop
0865cacf +0x199:  jmp    0865cad5 <+0x19f>
0865cad1 +0x19b:  nop
0865cad2 +0x19c:  jmp    0865cad5 <+0x19f>
0865cad4 +0x19e:  nop
0865cad5 +0x19f:  add    $0x40,%esp
0865cad8 +0x1a2:  pop    %ebx
0865cad9 +0x1a3:  pop    %esi
0865cada +0x1a4:  pop    %ebp
0865cadb +0x1a5:  ret
```

## 反编译 C

```c
// CUser::add_guild_pvp_result @ 0x865c936

/* CUser::add_guild_pvp_result(int) */

void __thiscall CUser::add_guild_pvp_result(CUser *this,int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  CGuildServerProxy *this_00;
  PacketGuard local_30 [13];
  Packet_Notice_Guild_War_Point_Change local_23 [10];
  undefined4 local_19;
  undefined1 local_15;
  PvP_Room *local_14;
  int local_10;
  
  local_14 = (PvP_Room *)GetPVPRoom(this);
  if (local_14 != (PvP_Room *)0x0) {
    local_10 = PvP_Room::get_user_seat(local_14,this);
    cVar1 = PvP_Room::IsPvpObserver(local_14,local_10);
    if (cVar1 == '\0') {
      piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x21);
      cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
      if ((cVar1 == '\x01') &&
         (iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this), iVar3 != 0)) {
        Packet_Notice_Guild_War_Point_Change::Packet_Notice_Guild_War_Point_Change(local_23);
        local_19 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
        local_15 = (undefined1)param_1;
        uVar4 = GetServerGroup(this);
        this_00 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar4);
        CGuildServerProxy::SendPacket(this_00,(char *)local_23,0xf);
        send_pvp_record(this);
        PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0865ca50 to 0865ca8b has its CatchHandler @ 0865cab0 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x6e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,param_1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        Send(this,local_30);
        *(int *)(this + 0x8cfe0) = *(int *)(this + 0x8cfe0) + param_1;
        PacketGuard::~PacketGuard(local_30);
      }
    }
  }
  return;
}
```

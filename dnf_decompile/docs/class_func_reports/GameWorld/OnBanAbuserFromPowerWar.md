# OnBanAbuserFromPowerWar

`_ZN9GameWorld23OnBanAbuserFromPowerWarEv`

`GameWorld::OnBanAbuserFromPowerWar()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cef36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cef36  _ZN9GameWorld23OnBanAbuserFromPowerWarEv
#           GameWorld::OnBanAbuserFromPowerWar()
# range [0x086cef36, 0x086cf137]
086cef36 +0x000:  push   %ebp
086cef37 +0x001:  mov    %esp,%ebp
086cef39 +0x003:  push   %esi
086cef3a +0x004:  push   %ebx
086cef3b +0x005:  sub    $0x60,%esp
086cef3e +0x008:  movl   $0x0,-0x18(%ebp)
086cef45 +0x00f:  mov    0x8(%ebp),%eax
086cef48 +0x012:  add    $0x134,%eax
086cef4d +0x017:  mov    %eax,(%esp)
086cef50 +0x01a:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086cef55 +0x01f:  test   %eax,%eax
086cef57 +0x021:  setne  %al
086cef5a +0x024:  test   %al,%al
086cef5c +0x026:  je     086cf12e <+0x1f8>
086cef62 +0x02c:  mov    0x8(%ebp),%eax
086cef65 +0x02f:  lea    0x134(%eax),%edx
086cef6b +0x035:  lea    -0x30(%ebp),%eax
086cef6e +0x038:  mov    %edx,0x4(%esp)
086cef72 +0x03c:  mov    %eax,(%esp)
086cef75 +0x03f:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cef7a +0x044:  sub    $0x4,%esp
086cef7d +0x047:  jmp    086cf0f9 <+0x1c3>
086cef82 +0x04c:  lea    -0x30(%ebp),%eax
086cef85 +0x04f:  mov    %eax,(%esp)
086cef88 +0x052:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cef8d +0x057:  mov    0x4(%eax),%eax
086cef90 +0x05a:  mov    %eax,-0x18(%ebp)
086cef93 +0x05d:  mov    -0x18(%ebp),%eax
086cef96 +0x060:  mov    %eax,(%esp)
086cef99 +0x063:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
086cef9e +0x068:  test   %al,%al
086cefa0 +0x06a:  setne  %al
086cefa3 +0x06d:  test   %al,%al
086cefa5 +0x06f:  je     086cf0ee <+0x1b8>
086cefab +0x075:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086cefb2 +0x07c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086cefb7 +0x081:  mov    %eax,-0x14(%ebp)
086cefba +0x084:  mov    -0x18(%ebp),%eax
086cefbd +0x087:  mov    %eax,(%esp)
086cefc0 +0x08a:  call   086d200e <_GLOBAL__I_MAX_VILLAGE_NUM+0x83f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x83f
086cefc5 +0x08f:  mov    %eax,-0x10(%ebp)
086cefc8 +0x092:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cefcd +0x097:  mov    0xa65c(%eax),%eax
086cefd3 +0x09d:  shl    $0x2,%eax
086cefd6 +0x0a0:  mov    %eax,%edx
086cefd8 +0x0a2:  shl    $0x4,%edx
086cefdb +0x0a5:  mov    %edx,%ecx
086cefdd +0x0a7:  sub    %eax,%ecx
086cefdf +0x0a9:  mov    %ecx,%eax
086cefe1 +0x0ab:  mov    %eax,-0xc(%ebp)
086cefe4 +0x0ae:  mov    -0x10(%ebp),%eax
086cefe7 +0x0b1:  mov    -0x14(%ebp),%edx
086cefea +0x0b4:  mov    %edx,%ecx
086cefec +0x0b6:  sub    %eax,%ecx
086cefee +0x0b8:  mov    %ecx,%eax
086ceff0 +0x0ba:  cmp    -0xc(%ebp),%eax
086ceff3 +0x0bd:  jle    086cf0ee <+0x1b8>
086ceff9 +0x0c3:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086ceffe +0x0c8:  movl   $0x0,0x8(%esp)
086cf006 +0x0d0:  mov    -0x18(%ebp),%edx
086cf009 +0x0d3:  mov    %edx,0x4(%esp)
086cf00d +0x0d7:  mov    %eax,(%esp)
086cf010 +0x0da:  call   0847fb02 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc>  ; CPowerManager::ProcessJoinPowerWar(CUser*, char)
086cf015 +0x0df:  lea    -0x3c(%ebp),%eax
086cf018 +0x0e2:  mov    %eax,(%esp)
086cf01b +0x0e5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086cf020 +0x0ea:  movl   $0xe2,0x8(%esp)
086cf028 +0x0f2:  movl   $0x0,0x4(%esp)
086cf030 +0x0fa:  lea    -0x3c(%ebp),%eax
086cf033 +0x0fd:  mov    %eax,(%esp)
086cf036 +0x100:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086cf03b +0x105:  movl   $0x1,0x4(%esp)
086cf043 +0x10d:  lea    -0x3c(%ebp),%eax
086cf046 +0x110:  mov    %eax,(%esp)
086cf049 +0x113:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086cf04e +0x118:  lea    -0x3c(%ebp),%eax
086cf051 +0x11b:  mov    %eax,0x4(%esp)
086cf055 +0x11f:  mov    -0x18(%ebp),%eax
086cf058 +0x122:  mov    %eax,(%esp)
086cf05b +0x125:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086cf060 +0x12a:  mov    -0x18(%ebp),%eax
086cf063 +0x12d:  mov    %eax,(%esp)
086cf066 +0x130:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086cf06b +0x135:  mov    %eax,%esi
086cf06d +0x137:  mov    -0x18(%ebp),%eax
086cf070 +0x13a:  mov    %eax,(%esp)
086cf073 +0x13d:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086cf078 +0x142:  mov    %eax,%ebx
086cf07a +0x144:  movl   $0x0,0xc(%esp)
086cf082 +0x14c:  movl   $0x178e,0x8(%esp)
086cf08a +0x154:  movl   $&_ZZN9GameWorld23OnBanAbuserFromPowerWarEvE19__PRETTY_FUNCTION__,0x4(%esp)
086cf092 +0x15c:  lea    -0x28(%ebp),%eax
086cf095 +0x15f:  mov    %eax,(%esp)
086cf098 +0x162:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cf09d +0x167:  mov    -0x14(%ebp),%eax
086cf0a0 +0x16a:  mov    %eax,0x14(%esp)
086cf0a4 +0x16e:  mov    -0x10(%ebp),%eax
086cf0a7 +0x171:  mov    %eax,0x10(%esp)
086cf0ab +0x175:  mov    %esi,0xc(%esp)
086cf0af +0x179:  mov    %ebx,0x8(%esp)
086cf0b3 +0x17d:  movl   $"[PowerWar] POWER WAR BAN USER (USER:%s(%d), LAST:%d, CURR:%d)",0x4(%esp)
086cf0bb +0x185:  lea    -0x28(%ebp),%eax
086cf0be +0x188:  mov    %eax,(%esp)
086cf0c1 +0x18b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cf0c6 +0x190:  jmp    086cf0e3 <+0x1ad>
086cf0c8 +0x192:  mov    %edx,%ebx
086cf0ca +0x194:  mov    %eax,%esi
086cf0cc +0x196:  lea    -0x3c(%ebp),%eax
086cf0cf +0x199:  mov    %eax,(%esp)
086cf0d2 +0x19c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cf0d7 +0x1a1:  mov    %esi,%eax
086cf0d9 +0x1a3:  mov    %ebx,%edx
086cf0db +0x1a5:  mov    %eax,(%esp)
086cf0de +0x1a8:  call   08ae3750 <_Unwind_Resume>
086cf0e3 +0x1ad:  lea    -0x3c(%ebp),%eax
086cf0e6 +0x1b0:  mov    %eax,(%esp)
086cf0e9 +0x1b3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cf0ee +0x1b8:  lea    -0x30(%ebp),%eax
086cf0f1 +0x1bb:  mov    %eax,(%esp)
086cf0f4 +0x1be:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086cf0f9 +0x1c3:  mov    0x8(%ebp),%eax
086cf0fc +0x1c6:  lea    0x134(%eax),%edx
086cf102 +0x1cc:  lea    -0x2c(%ebp),%eax
086cf105 +0x1cf:  mov    %edx,0x4(%esp)
086cf109 +0x1d3:  mov    %eax,(%esp)
086cf10c +0x1d6:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cf111 +0x1db:  sub    $0x4,%esp
086cf114 +0x1de:  lea    -0x2c(%ebp),%eax
086cf117 +0x1e1:  mov    %eax,0x4(%esp)
086cf11b +0x1e5:  lea    -0x30(%ebp),%eax
086cf11e +0x1e8:  mov    %eax,(%esp)
086cf121 +0x1eb:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cf126 +0x1f0:  test   %al,%al
086cf128 +0x1f2:  jne    086cef82 <+0x4c>
086cf12e +0x1f8:  lea    -0x8(%ebp),%esp
086cf131 +0x1fb:  add    $0x0,%esp
086cf134 +0x1fe:  pop    %ebx
086cf135 +0x1ff:  pop    %esi
086cf136 +0x200:  pop    %ebp
086cf137 +0x201:  ret
```

## 反编译 C

```c
// GameWorld::OnBanAbuserFromPowerWar @ 0x86cef36

/* GameWorld::OnBanAbuserFromPowerWar() */

void __thiscall GameWorld::OnBanAbuserFromPowerWar(GameWorld *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PacketGuard local_40 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_34 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_30 [4];
  cMyTrace local_2c [16];
  CUserCharacInfo *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = (CUserCharacInfo *)0x0;
  iVar2 = std::
          map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                  *)(this + 0x134));
  if (iVar2 != 0) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_34);
    while( true ) {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_34,
                         (_Rb_tree_iterator *)local_30);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_34);
      local_1c = *(CUserCharacInfo **)(iVar2 + 4);
      cVar1 = CUserCharacInfo::isJoinPowerWar(local_1c);
      if (cVar1 != '\0') {
        local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_14 = CUserCharacInfo::GetPowerWarLastPlayTime(local_1c);
        iVar2 = G_CDataManager();
        local_10 = *(int *)(iVar2 + 0xa65c) * 0x3c;
        if (local_10 < local_18 - local_14) {
          CPowerManager::ProcessJoinPowerWar(GlobalData::s_power_manager,(CUser *)local_1c,'\0');
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 086cf036 to 086cf0c5 has its CatchHandler @ 086cf0c8 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xe2);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
          CUser::Send((CUser *)local_1c,local_40);
          uVar3 = CUserCharacInfo::getCurCharacNo(local_1c);
          uVar4 = CUserCharacInfo::getCurCharacName(local_1c);
          cMyTrace::cMyTrace(local_2c,"void GameWorld::OnBanAbuserFromPowerWar()",0x178e,0);
          cMyTrace::operator()
                    (local_2c,"[PowerWar] POWER WAR BAN USER (USER:%s(%d), LAST:%d, CURR:%d)",uVar4,
                     uVar3,local_14,local_18);
          PacketGuard::~PacketGuard(local_40);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_34);
    }
  }
  return;
}
```

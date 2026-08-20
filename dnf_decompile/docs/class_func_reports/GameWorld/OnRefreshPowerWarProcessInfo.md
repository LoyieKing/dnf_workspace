# OnRefreshPowerWarProcessInfo

`_ZN9GameWorld28OnRefreshPowerWarProcessInfoEv`

`GameWorld::OnRefreshPowerWarProcessInfo()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cedf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cedf4  _ZN9GameWorld28OnRefreshPowerWarProcessInfoEv
#           GameWorld::OnRefreshPowerWarProcessInfo()
# range [0x086cedf4, 0x086cef35]
086cedf4 +0x000:  push   %ebp
086cedf5 +0x001:  mov    %esp,%ebp
086cedf7 +0x003:  push   %ebx
086cedf8 +0x004:  sub    $0x34,%esp
086cedfb +0x007:  movl   $0x0,-0x18(%ebp)
086cee02 +0x00e:  mov    0x8(%ebp),%eax
086cee05 +0x011:  add    $0x134,%eax
086cee0a +0x016:  mov    %eax,(%esp)
086cee0d +0x019:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086cee12 +0x01e:  test   %eax,%eax
086cee14 +0x020:  setne  %al
086cee17 +0x023:  test   %al,%al
086cee19 +0x025:  je     086cef30 <+0x13c>
086cee1f +0x02b:  mov    0x8(%ebp),%eax
086cee22 +0x02e:  lea    0x134(%eax),%edx
086cee28 +0x034:  lea    -0x20(%ebp),%eax
086cee2b +0x037:  mov    %edx,0x4(%esp)
086cee2f +0x03b:  mov    %eax,(%esp)
086cee32 +0x03e:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cee37 +0x043:  sub    $0x4,%esp
086cee3a +0x046:  jmp    086ceefb <+0x107>
086cee3f +0x04b:  lea    -0x20(%ebp),%eax
086cee42 +0x04e:  mov    %eax,(%esp)
086cee45 +0x051:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cee4a +0x056:  mov    0x4(%eax),%eax
086cee4d +0x059:  mov    %eax,-0x18(%ebp)
086cee50 +0x05c:  mov    -0x18(%ebp),%eax
086cee53 +0x05f:  mov    %eax,(%esp)
086cee56 +0x062:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
086cee5b +0x067:  test   %al,%al
086cee5d +0x069:  setne  %al
086cee60 +0x06c:  test   %al,%al
086cee62 +0x06e:  je     086ceef0 <+0xfc>
086cee68 +0x074:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086cee6f +0x07b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086cee74 +0x080:  mov    %eax,-0x14(%ebp)
086cee77 +0x083:  mov    -0x18(%ebp),%eax
086cee7a +0x086:  mov    %eax,(%esp)
086cee7d +0x089:  call   086d2030 <_GLOBAL__I_MAX_VILLAGE_NUM+0x861>  ; global constructors keyed to MAX_VILLAGE_NUM+0x861
086cee82 +0x08e:  mov    %eax,-0x10(%ebp)
086cee85 +0x091:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cee8a +0x096:  mov    0xa658(%eax),%eax
086cee90 +0x09c:  shl    $0x2,%eax
086cee93 +0x09f:  mov    %eax,%edx
086cee95 +0x0a1:  shl    $0x4,%edx
086cee98 +0x0a4:  mov    %edx,%ecx
086cee9a +0x0a6:  sub    %eax,%ecx
086cee9c +0x0a8:  mov    %ecx,%eax
086cee9e +0x0aa:  mov    %eax,-0xc(%ebp)
086ceea1 +0x0ad:  mov    -0x10(%ebp),%eax
086ceea4 +0x0b0:  mov    -0x14(%ebp),%edx
086ceea7 +0x0b3:  mov    %edx,%ecx
086ceea9 +0x0b5:  sub    %eax,%ecx
086ceeab +0x0b7:  mov    %ecx,%eax
086ceead +0x0b9:  cmp    -0xc(%ebp),%eax
086ceeb0 +0x0bc:  jle    086ceef0 <+0xfc>
086ceeb2 +0x0be:  movl   $0xffffffff,0x4(%esp)
086ceeba +0x0c6:  mov    -0x18(%ebp),%eax
086ceebd +0x0c9:  mov    %eax,(%esp)
086ceec0 +0x0cc:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086ceec5 +0x0d1:  mov    %eax,%ebx
086ceec7 +0x0d3:  mov    -0x18(%ebp),%eax
086ceeca +0x0d6:  mov    %eax,(%esp)
086ceecd +0x0d9:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086ceed2 +0x0de:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
086ceed8 +0x0e4:  mov    %eax,0x4(%esp)
086ceedc +0x0e8:  mov    %edx,(%esp)
086ceedf +0x0eb:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
086ceee4 +0x0f0:  mov    %ebx,0x4(%esp)
086ceee8 +0x0f4:  mov    %eax,(%esp)
086ceeeb +0x0f7:  call   0846df1c <_ZN17CGuildServerProxy23SendPowerWarProcessInfoEj>  ; CGuildServerProxy::SendPowerWarProcessInfo(unsigned int)
086ceef0 +0x0fc:  lea    -0x20(%ebp),%eax
086ceef3 +0x0ff:  mov    %eax,(%esp)
086ceef6 +0x102:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086ceefb +0x107:  mov    0x8(%ebp),%eax
086ceefe +0x10a:  lea    0x134(%eax),%edx
086cef04 +0x110:  lea    -0x1c(%ebp),%eax
086cef07 +0x113:  mov    %edx,0x4(%esp)
086cef0b +0x117:  mov    %eax,(%esp)
086cef0e +0x11a:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cef13 +0x11f:  sub    $0x4,%esp
086cef16 +0x122:  lea    -0x1c(%ebp),%eax
086cef19 +0x125:  mov    %eax,0x4(%esp)
086cef1d +0x129:  lea    -0x20(%ebp),%eax
086cef20 +0x12c:  mov    %eax,(%esp)
086cef23 +0x12f:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cef28 +0x134:  test   %al,%al
086cef2a +0x136:  jne    086cee3f <+0x4b>
086cef30 +0x13c:  mov    -0x4(%ebp),%ebx
086cef33 +0x13f:  leave
086cef34 +0x140:  ret
086cef35 +0x141:  nop
```

## 反编译 C

```c
// GameWorld::OnRefreshPowerWarProcessInfo @ 0x86cedf4

/* GameWorld::OnRefreshPowerWarProcessInfo() */

void __thiscall GameWorld::OnRefreshPowerWarProcessInfo(GameWorld *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this_00;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
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
    ::begin(local_24);
    while( true ) {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_20);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24,
                         (_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24);
      local_1c = *(CUserCharacInfo **)(iVar2 + 4);
      cVar1 = CUserCharacInfo::isJoinPowerWar(local_1c);
      if (cVar1 != '\0') {
        local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_14 = CUserCharacInfo::GetPowerWarProcessInfoLastUpdateTime(local_1c);
        iVar2 = G_CDataManager();
        local_10 = *(int *)(iVar2 + 0xa658) * 0x3c;
        if (local_10 < local_18 - local_14) {
          uVar3 = CUser::get_charac_no((CUser *)local_1c,-1);
          uVar4 = CUser::GetServerGroup((CUser *)local_1c);
          this_00 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                              (GlobalData::s_guild_proxy_mgr,uVar4);
          CGuildServerProxy::SendPowerWarProcessInfo(this_00,uVar3);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24);
    }
  }
  return;
}
```

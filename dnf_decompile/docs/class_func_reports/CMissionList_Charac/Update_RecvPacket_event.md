# Update_RecvPacket_event

`_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE`

`CMissionList_Charac::Update_RecvPacket_event(CUser&, std::vector<short, std::allocator<short> >&, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5caa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5caa  _ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE
#           CMissionList_Charac::Update_RecvPacket_event(CUser&, std::vector<short, std::allocator<short> >&, std::vector<int, std::allocator<int> >&)
# range [0x085e5caa, 0x085e5e49]
085e5caa +0x000:  push   %ebp
085e5cab +0x001:  mov    %esp,%ebp
085e5cad +0x003:  push   %ebx
085e5cae +0x004:  sub    $0x54,%esp
085e5cb1 +0x007:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e5cb6 +0x00c:  mov    %eax,(%esp)
085e5cb9 +0x00f:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e5cbe +0x014:  cmp    $0xf,%eax
085e5cc1 +0x017:  setne  %al
085e5cc4 +0x01a:  test   %al,%al
085e5cc6 +0x01c:  jne    085e5e3d <+0x193>
085e5ccc +0x022:  movl   $0x1b,0x4(%esp)
085e5cd4 +0x02a:  mov    0x8(%ebp),%eax
085e5cd7 +0x02d:  mov    %eax,(%esp)
085e5cda +0x030:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e5cdf +0x035:  test   %ax,%ax
085e5ce2 +0x038:  setne  %al
085e5ce5 +0x03b:  test   %al,%al
085e5ce7 +0x03d:  jne    085e5e40 <+0x196>
085e5ced +0x043:  mov    0x8(%ebp),%eax
085e5cf0 +0x046:  mov    %eax,(%esp)
085e5cf3 +0x049:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e5cf8 +0x04e:  mov    0xc(%ebp),%eax
085e5cfb +0x051:  mov    %eax,(%esp)
085e5cfe +0x054:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
085e5d03 +0x059:  mov    %eax,-0x14(%ebp)
085e5d06 +0x05c:  cmpl   $0x0,-0x14(%ebp)
085e5d0a +0x060:  je     085e5e43 <+0x199>
085e5d10 +0x066:  mov    -0x14(%ebp),%eax
085e5d13 +0x069:  mov    %eax,(%esp)
085e5d16 +0x06c:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085e5d1b +0x071:  mov    %eax,0x4(%esp)
085e5d1f +0x075:  lea    -0x33(%ebp),%eax
085e5d22 +0x078:  mov    %eax,(%esp)
085e5d25 +0x07b:  call   085e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>  ; MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
085e5d2a +0x080:  movl   $0x0,-0x10(%ebp)
085e5d31 +0x087:  movl   $0x0,-0xc(%ebp)
085e5d38 +0x08e:  jmp    085e5e22 <+0x178>
085e5d3d +0x093:  mov    -0xc(%ebp),%eax
085e5d40 +0x096:  mov    %eax,0x4(%esp)
085e5d44 +0x09a:  mov    0x10(%ebp),%eax
085e5d47 +0x09d:  mov    %eax,(%esp)
085e5d4a +0x0a0:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
085e5d4f +0x0a5:  movzwl (%eax),%eax
085e5d52 +0x0a8:  movswl %ax,%ebx
085e5d55 +0x0ab:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e5d5a +0x0b0:  mov    %ebx,0x4(%esp)
085e5d5e +0x0b4:  mov    %eax,(%esp)
085e5d61 +0x0b7:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e5d66 +0x0bc:  mov    %eax,-0x10(%ebp)
085e5d69 +0x0bf:  cmpl   $0x0,-0x10(%ebp)
085e5d6d +0x0c3:  je     085e5e1d <+0x173>
085e5d73 +0x0c9:  mov    -0x10(%ebp),%eax
085e5d76 +0x0cc:  mov    %eax,(%esp)
085e5d79 +0x0cf:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e5d7e +0x0d4:  cmp    $0x6,%eax
085e5d81 +0x0d7:  je     085e5d9a <+0xf0>
085e5d83 +0x0d9:  mov    -0x10(%ebp),%eax
085e5d86 +0x0dc:  mov    %eax,(%esp)
085e5d89 +0x0df:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e5d8e +0x0e4:  cmp    $0x15,%eax
085e5d91 +0x0e7:  je     085e5d9a <+0xf0>
085e5d93 +0x0e9:  mov    $0x1,%eax
085e5d98 +0x0ee:  jmp    085e5d9f <+0xf5>
085e5d9a +0x0f0:  mov    $0x0,%eax
085e5d9f +0x0f5:  test   %al,%al
085e5da1 +0x0f7:  je     085e5dec <+0x142>
085e5da3 +0x0f9:  mov    -0x10(%ebp),%eax
085e5da6 +0x0fc:  mov    %eax,(%esp)
085e5da9 +0x0ff:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e5dae +0x104:  mov    %eax,%ebx
085e5db0 +0x106:  movl   $0x5,0xc(%esp)
085e5db8 +0x10e:  movl   $0x704,0x8(%esp)
085e5dc0 +0x116:  movl   $&_ZZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEEE19__PRETTY_FUNCTION__,0x4(%esp)
085e5dc8 +0x11e:  lea    -0x24(%ebp),%eax
085e5dcb +0x121:  mov    %eax,(%esp)
085e5dce +0x124:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e5dd3 +0x129:  mov    %ebx,0x8(%esp)
085e5dd7 +0x12d:  movl   $"[@missionSystem] HackUser! send [%d kind]\n",0x4(%esp)
085e5ddf +0x135:  lea    -0x24(%ebp),%eax
085e5de2 +0x138:  mov    %eax,(%esp)
085e5de5 +0x13b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e5dea +0x140:  jmp    085e5e1e <+0x174>
085e5dec +0x142:  mov    -0x10(%ebp),%eax
085e5def +0x145:  mov    %eax,(%esp)
085e5df2 +0x148:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e5df7 +0x14d:  mov    0x14(%ebp),%edx
085e5dfa +0x150:  mov    %edx,0x10(%esp)
085e5dfe +0x154:  lea    -0x33(%ebp),%edx
085e5e01 +0x157:  mov    %edx,0xc(%esp)
085e5e05 +0x15b:  mov    0xc(%ebp),%edx
085e5e08 +0x15e:  mov    %edx,0x8(%esp)
085e5e0c +0x162:  mov    %eax,0x4(%esp)
085e5e10 +0x166:  mov    0x8(%ebp),%eax
085e5e13 +0x169:  mov    %eax,(%esp)
085e5e16 +0x16c:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5e1b +0x171:  jmp    085e5e1e <+0x174>
085e5e1d +0x173:  nop
085e5e1e +0x174:  addl   $0x1,-0xc(%ebp)
085e5e22 +0x178:  mov    0x10(%ebp),%eax
085e5e25 +0x17b:  mov    %eax,(%esp)
085e5e28 +0x17e:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
085e5e2d +0x183:  cmp    -0xc(%ebp),%eax
085e5e30 +0x186:  seta   %al
085e5e33 +0x189:  test   %al,%al
085e5e35 +0x18b:  jne    085e5d3d <+0x93>
085e5e3b +0x191:  jmp    085e5e44 <+0x19a>
085e5e3d +0x193:  nop
085e5e3e +0x194:  jmp    085e5e44 <+0x19a>
085e5e40 +0x196:  nop
085e5e41 +0x197:  jmp    085e5e44 <+0x19a>
085e5e43 +0x199:  nop
085e5e44 +0x19a:  add    $0x54,%esp
085e5e47 +0x19d:  pop    %ebx
085e5e48 +0x19e:  pop    %ebp
085e5e49 +0x19f:  ret
```

## 反编译 C

```c
// CMissionList_Charac::Update_RecvPacket_event @ 0x85e5caa

/* CMissionList_Charac::Update_RecvPacket_event(CUser&, std::vector<short, std::allocator<short> >&,
   std::vector<int, std::allocator<int> >&) */

void __thiscall
CMissionList_Charac::Update_RecvPacket_event
          (CMissionList_Charac *this,CUser *param_1,vector *param_2,vector *param_3)

{
  bool bVar1;
  short sVar2;
  GameWorld *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  MissionClearCondition_Parameter local_37 [15];
  cMyTrace local_28 [16];
  PvP_Room *local_18;
  CMission *local_14;
  uint local_10;
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(this_00);
  if ((iVar3 == 0xf) && (sVar2 = getIndex_byKind(this,0x1b), sVar2 == 0)) {
    charac_expand::CData::alter((CData *)this);
    local_18 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (local_18 != (PvP_Room *)0x0) {
      uVar4 = PvP_Room::get_pvp_battle_mode(local_18);
      MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_37,uVar4);
      local_14 = (CMission *)0x0;
      local_10 = 0;
      while (uVar5 = std::vector<short,std::allocator<short>>::size
                               ((vector<short,std::allocator<short>> *)param_2), local_10 < uVar5) {
        std::vector<short,std::allocator<short>>::operator[]
                  ((vector<short,std::allocator<short>> *)param_2,local_10);
        iVar3 = G_CDataManager();
        local_14 = (CMission *)CDataManager::find_mission(iVar3);
        if (local_14 != (CMission *)0x0) {
          iVar3 = CMission::GetMissionKind(local_14);
          if ((iVar3 == 6) || (iVar3 = CMission::GetMissionKind(local_14), iVar3 == 0x15)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar4 = CMission::GetMissionKind(local_14);
            cMyTrace::cMyTrace(local_28,
                               "void CMissionList_Charac::Update_RecvPacket_event(CUser&, std::vector<short int, std::allocator<short int> >&, std::vector<int, std::allocator<int> >&)"
                               ,0x704,5);
            cMyTrace::operator()(local_28,"[@missionSystem] HackUser! send [%d kind]\n",uVar4);
          }
          else {
            uVar5 = CMission::GetMissionKind(local_14);
            check_mission_kind(this,uVar5,param_1,local_37,param_3);
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}
```

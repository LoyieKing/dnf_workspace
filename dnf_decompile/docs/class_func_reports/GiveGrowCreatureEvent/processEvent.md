# processEvent

`_ZN21GiveGrowCreatureEvent12processEventER5CUser`

`GiveGrowCreatureEvent::processEvent(CUser&)`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b6f76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b6f76  _ZN21GiveGrowCreatureEvent12processEventER5CUser
#           GiveGrowCreatureEvent::processEvent(CUser&)
# range [0x081b6f76, 0x081b7155]
081b6f76 +0x000:  push   %ebp
081b6f77 +0x001:  mov    %esp,%ebp
081b6f79 +0x003:  sub    $0x88,%esp
081b6f7f +0x009:  mov    0xc(%ebp),%eax
081b6f82 +0x00c:  mov    %eax,(%esp)
081b6f85 +0x00f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081b6f8a +0x014:  mov    %eax,(%esp)
081b6f8d +0x017:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
081b6f92 +0x01c:  mov    %eax,(%esp)
081b6f95 +0x01f:  call   0833a638 <_ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv>  ; user_creature::CCreatureMgr::GetCreatureItemId() const
081b6f9a +0x024:  mov    %eax,-0x1c(%ebp)
081b6f9d +0x027:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b6fa2 +0x02c:  mov    -0x1c(%ebp),%edx
081b6fa5 +0x02f:  mov    %edx,0x4(%esp)
081b6fa9 +0x033:  mov    %eax,(%esp)
081b6fac +0x036:  call   08365ba6 <_ZN12CDataManager30getInfinityChangeCreatureIndexEi>  ; CDataManager::getInfinityChangeCreatureIndex(int)
081b6fb1 +0x03b:  mov    %eax,-0x18(%ebp)
081b6fb4 +0x03e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b6fb9 +0x043:  mov    -0x18(%ebp),%edx
081b6fbc +0x046:  mov    %edx,0x4(%esp)
081b6fc0 +0x04a:  mov    %eax,(%esp)
081b6fc3 +0x04d:  call   08365c16 <_ZN12CDataManager28getClientChangeCreatureIndexEi>  ; CDataManager::getClientChangeCreatureIndex(int)
081b6fc8 +0x052:  mov    %eax,-0x14(%ebp)
081b6fcb +0x055:  cmpl   $0xffffffff,-0x18(%ebp)
081b6fcf +0x059:  je     081b6fd7 <+0x61>
081b6fd1 +0x05b:  cmpl   $0xffffffff,-0x14(%ebp)
081b6fd5 +0x05f:  jne    081b6fe1 <+0x6b>
081b6fd7 +0x061:  mov    $0x16,%eax
081b6fdc +0x066:  jmp    081b7154 <+0x1de>
081b6fe1 +0x06b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b6fe6 +0x070:  mov    -0x18(%ebp),%edx
081b6fe9 +0x073:  mov    %edx,0x4(%esp)
081b6fed +0x077:  mov    %eax,(%esp)
081b6ff0 +0x07a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081b6ff5 +0x07f:  mov    %eax,-0x10(%ebp)
081b6ff8 +0x082:  cmpl   $0x0,-0x10(%ebp)
081b6ffc +0x086:  jne    081b7008 <+0x92>
081b6ffe +0x088:  mov    $0x16,%eax
081b7003 +0x08d:  jmp    081b7154 <+0x1de>
081b7008 +0x092:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b700d +0x097:  mov    %eax,(%esp)
081b7010 +0x09a:  call   08365b98 <_ZN12CDataManager24getChangeAbleCreatureLevEv>  ; CDataManager::getChangeAbleCreatureLev()
081b7015 +0x09f:  mov    %eax,-0xc(%ebp)
081b7018 +0x0a2:  mov    -0x10(%ebp),%eax
081b701b +0x0a5:  mov    (%eax),%eax
081b701d +0x0a7:  add    $0xc,%eax
081b7020 +0x0aa:  mov    (%eax),%edx
081b7022 +0x0ac:  mov    -0x10(%ebp),%eax
081b7025 +0x0af:  mov    %eax,(%esp)
081b7028 +0x0b2:  call   *%edx
081b702a +0x0b4:  cmp    $0x16,%eax
081b702d +0x0b7:  sete   %al
081b7030 +0x0ba:  test   %al,%al
081b7032 +0x0bc:  je     081b7075 <+0xff>
081b7034 +0x0be:  mov    0xc(%ebp),%eax
081b7037 +0x0c1:  mov    %eax,(%esp)
081b703a +0x0c4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081b703f +0x0c9:  mov    %eax,(%esp)
081b7042 +0x0cc:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081b7047 +0x0d1:  mov    -0x14(%ebp),%edx
081b704a +0x0d4:  mov    %edx,0xc(%esp)
081b704e +0x0d8:  mov    -0xc(%ebp),%edx
081b7051 +0x0db:  mov    %edx,0x8(%esp)
081b7055 +0x0df:  mov    -0x18(%ebp),%edx
081b7058 +0x0e2:  mov    %edx,0x4(%esp)
081b705c +0x0e6:  mov    %eax,(%esp)
081b705f +0x0e9:  call   0833da1e <_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii>  ; user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int)
081b7064 +0x0ee:  xor    $0x1,%eax
081b7067 +0x0f1:  test   %al,%al
081b7069 +0x0f3:  je     081b7075 <+0xff>
081b706b +0x0f5:  mov    $0x16,%eax
081b7070 +0x0fa:  jmp    081b7154 <+0x1de>
081b7075 +0x0ff:  lea    -0x48(%ebp),%eax
081b7078 +0x102:  mov    %eax,(%esp)
081b707b +0x105:  call   081b7416 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x95>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x95
081b7080 +0x10a:  mov    0xc(%ebp),%eax
081b7083 +0x10d:  mov    %eax,(%esp)
081b7086 +0x110:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
081b708b +0x115:  mov    %ax,-0x48(%ebp)
081b708f +0x119:  mov    0xc(%ebp),%eax
081b7092 +0x11c:  mov    %eax,(%esp)
081b7095 +0x11f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081b709a +0x124:  mov    %eax,-0x44(%ebp)
081b709d +0x127:  mov    0xc(%ebp),%eax
081b70a0 +0x12a:  mov    %eax,(%esp)
081b70a3 +0x12d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b70a8 +0x132:  mov    %eax,-0x40(%ebp)
081b70ab +0x135:  mov    0xc(%ebp),%eax
081b70ae +0x138:  mov    %eax,(%esp)
081b70b1 +0x13b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081b70b6 +0x140:  mov    %eax,0x4(%esp)
081b70ba +0x144:  lea    -0x48(%ebp),%eax
081b70bd +0x147:  add    $0xc,%eax
081b70c0 +0x14a:  mov    %eax,(%esp)
081b70c3 +0x14d:  call   081b763e <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2bd>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2bd
081b70c8 +0x152:  mov    0xc(%ebp),%eax
081b70cb +0x155:  mov    %eax,(%esp)
081b70ce +0x158:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081b70d3 +0x15d:  lea    -0x48(%ebp),%edx
081b70d6 +0x160:  mov    %edx,0x4(%esp)
081b70da +0x164:  mov    %eax,(%esp)
081b70dd +0x167:  call   08449b32 <_ZN28DB_EventSaveGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE>  ; DB_EventSaveGiveGrowCreature::makeRequest(unsigned int, SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&)
081b70e2 +0x16c:  lea    -0x74(%ebp),%eax
081b70e5 +0x16f:  mov    %eax,(%esp)
081b70e8 +0x172:  call   081b7458 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0xd7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0xd7
081b70ed +0x177:  mov    0xc(%ebp),%eax
081b70f0 +0x17a:  mov    %eax,(%esp)
081b70f3 +0x17d:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
081b70f8 +0x182:  mov    %ax,-0x74(%ebp)
081b70fc +0x186:  mov    0xc(%ebp),%eax
081b70ff +0x189:  mov    %eax,(%esp)
081b7102 +0x18c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081b7107 +0x191:  mov    %eax,-0x70(%ebp)
081b710a +0x194:  mov    0xc(%ebp),%eax
081b710d +0x197:  mov    %eax,(%esp)
081b7110 +0x19a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b7115 +0x19f:  mov    %eax,-0x6c(%ebp)
081b7118 +0x1a2:  mov    0xc(%ebp),%eax
081b711b +0x1a5:  mov    %eax,(%esp)
081b711e +0x1a8:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081b7123 +0x1ad:  mov    %eax,0x4(%esp)
081b7127 +0x1b1:  lea    -0x74(%ebp),%eax
081b712a +0x1b4:  add    $0xc,%eax
081b712d +0x1b7:  mov    %eax,(%esp)
081b7130 +0x1ba:  call   081b763e <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2bd>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2bd
081b7135 +0x1bf:  mov    0xc(%ebp),%eax
081b7138 +0x1c2:  mov    %eax,(%esp)
081b713b +0x1c5:  call   08691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>  ; CUser::getGrowthCreatureEventdata()
081b7140 +0x1ca:  lea    -0x74(%ebp),%edx
081b7143 +0x1cd:  mov    %edx,0x4(%esp)
081b7147 +0x1d1:  mov    %eax,(%esp)
081b714a +0x1d4:  call   081b7660 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2df>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2df
081b714f +0x1d9:  mov    $0x0,%eax
081b7154 +0x1de:  leave
081b7155 +0x1df:  ret
```

## 反编译 C

```c
// GiveGrowCreatureEvent::processEvent @ 0x81b6f76

/* GiveGrowCreatureEvent::processEvent(CUser&) */

undefined4 __thiscall
GiveGrowCreatureEvent::processEvent(GiveGrowCreatureEvent *this,CUser *param_1)

{
  char cVar1;
  CInventory *pCVar2;
  CCreatureMgr *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  char *pcVar7;
  uint uVar8;
  vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
  *this_00;
  undefined2 local_78 [2];
  undefined4 local_74;
  undefined4 local_70;
  char acStack_6c [32];
  undefined2 local_4c [2];
  undefined4 local_48;
  undefined4 local_44;
  char acStack_40 [32];
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar2);
  local_20 = user_creature::CCreatureMgr::GetCreatureItemId(pCVar3);
  iVar4 = G_CDataManager();
  local_1c = CDataManager::getInfinityChangeCreatureIndex(iVar4);
  iVar4 = G_CDataManager();
  local_18 = CDataManager::getClientChangeCreatureIndex(iVar4);
  if ((local_1c == -1) || (local_18 == -1)) {
    uVar5 = 0x16;
  }
  else {
    pCVar6 = (CDataManager *)G_CDataManager();
    local_14 = (int *)CDataManager::find_item(pCVar6,local_1c);
    if (local_14 == (int *)0x0) {
      uVar5 = 0x16;
    }
    else {
      pCVar6 = (CDataManager *)G_CDataManager();
      local_10 = CDataManager::getChangeAbleCreatureLev(pCVar6);
      iVar4 = (**(code **)(*local_14 + 0xc))(local_14);
      if (iVar4 == 0x16) {
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar2);
        cVar1 = user_creature::CCreatureMgr::EventEvoluteCreature(pCVar3,local_1c,local_10,local_18)
        ;
        if (cVar1 != '\x01') {
          return 0x16;
        }
      }
      SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo::eventCharacInfo((eventCharacInfo *)local_4c);
      local_4c[0] = CUser::GetServerGroupToPvP(param_1);
      local_48 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_44 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      ss_strcpy<30u>(acStack_40,pcVar7);
      uVar8 = CUser::get_acc_id(param_1);
      DB_EventSaveGiveGrowCreature::makeRequest(uVar8,(eventCharacInfo *)local_4c);
      GrowthCreatureEvent::eventCharacInfo::eventCharacInfo((eventCharacInfo *)local_78);
      local_78[0] = CUser::GetServerGroupToPvP(param_1);
      local_74 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_70 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      ss_strcpy<30u>(acStack_6c,pcVar7);
      this_00 = (vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                 *)CUser::getGrowthCreatureEventdata(param_1);
      std::
      vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
      ::push_back(this_00,(eventCharacInfo *)local_78);
      uVar5 = 0;
    }
  }
  return uVar5;
}
```

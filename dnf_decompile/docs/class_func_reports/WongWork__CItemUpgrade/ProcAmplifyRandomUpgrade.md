# ProcAmplifyRandomUpgrade

`_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc`

`WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854ac8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854ac8a  _ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc
#           WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int, char const*)
# range [0x0854ac8a, 0x0854af37]
0854ac8a +0x000:  push   %ebp
0854ac8b +0x001:  mov    %esp,%ebp
0854ac8d +0x003:  push   %edi
0854ac8e +0x004:  push   %esi
0854ac8f +0x005:  push   %ebx
0854ac90 +0x006:  sub    $0x5c,%esp
0854ac93 +0x009:  movl   $0xffffffff,0x4(%esp)
0854ac9b +0x011:  mov    0xc(%ebp),%eax
0854ac9e +0x014:  mov    %eax,(%esp)
0854aca1 +0x017:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0854aca6 +0x01c:  mov    %eax,%esi
0854aca8 +0x01e:  mov    0xc(%ebp),%eax
0854acab +0x021:  mov    %eax,(%esp)
0854acae +0x024:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0854acb3 +0x029:  movl   $0x0,0x4(%esp)
0854acbb +0x031:  mov    %eax,(%esp)
0854acbe +0x034:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0854acc3 +0x039:  mov    %eax,%ebx
0854acc5 +0x03b:  movl   $0x0,0xc(%esp)
0854accd +0x043:  movl   $0x82c,0x8(%esp)
0854acd5 +0x04b:  movl   $&_ZZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKcE19__PRETTY_FUNCTION__,0x4(%esp)
0854acdd +0x053:  lea    -0x34(%ebp),%eax
0854ace0 +0x056:  mov    %eax,(%esp)
0854ace3 +0x059:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0854ace8 +0x05e:  mov    0x18(%ebp),%eax
0854aceb +0x061:  mov    %eax,0x10(%esp)
0854acef +0x065:  mov    %esi,0xc(%esp)
0854acf3 +0x069:  mov    %ebx,0x8(%esp)
0854acf7 +0x06d:  movl   $"AmplifyRandomUpgrade m_id:%s char_no(%d) update:%d",0x4(%esp)
0854acff +0x075:  lea    -0x34(%ebp),%eax
0854ad02 +0x078:  mov    %eax,(%esp)
0854ad05 +0x07b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0854ad0a +0x080:  mov    0x10(%ebp),%eax
0854ad0d +0x083:  mov    0x2(%eax),%eax
0854ad10 +0x086:  mov    %eax,%ebx
0854ad12 +0x088:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854ad17 +0x08d:  mov    %ebx,0x4(%esp)
0854ad1b +0x091:  mov    %eax,(%esp)
0854ad1e +0x094:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854ad23 +0x099:  mov    %eax,-0x24(%ebp)
0854ad26 +0x09c:  cmpl   $0x0,-0x24(%ebp)
0854ad2a +0x0a0:  jne    0854ad36 <+0xac>
0854ad2c +0x0a2:  mov    $0x4,%eax
0854ad31 +0x0a7:  jmp    0854af2f <+0x2a5>
0854ad36 +0x0ac:  mov    0x10(%ebp),%eax
0854ad39 +0x0af:  add    $0x11,%eax
0854ad3c +0x0b2:  mov    %eax,(%esp)
0854ad3f +0x0b5:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
0854ad44 +0x0ba:  xor    $0x1,%eax
0854ad47 +0x0bd:  test   %al,%al
0854ad49 +0x0bf:  je     0854ad55 <+0xcb>
0854ad4b +0x0c1:  mov    $0x4,%eax
0854ad50 +0x0c6:  jmp    0854af2f <+0x2a5>
0854ad55 +0x0cb:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
0854ad5a +0x0d0:  mov    %eax,(%esp)
0854ad5d +0x0d3:  call   0854b560 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3e8>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3e8
0854ad62 +0x0d8:  mov    %eax,-0x20(%ebp)
0854ad65 +0x0db:  mov    0x10(%ebp),%eax
0854ad68 +0x0de:  mov    %eax,(%esp)
0854ad6b +0x0e1:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854ad70 +0x0e6:  movzbl %al,%eax
0854ad73 +0x0e9:  mov    %eax,-0x1c(%ebp)
0854ad76 +0x0ec:  mov    0x18(%ebp),%eax
0854ad79 +0x0ef:  movzbl %al,%eax
0854ad7c +0x0f2:  mov    %eax,0x4(%esp)
0854ad80 +0x0f6:  mov    0x10(%ebp),%eax
0854ad83 +0x0f9:  mov    %eax,(%esp)
0854ad86 +0x0fc:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
0854ad8b +0x101:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0854ad90 +0x106:  movl   $0x0,0xc(%esp)
0854ad98 +0x10e:  mov    0xc(%ebp),%edx
0854ad9b +0x111:  mov    %edx,0x8(%esp)
0854ad9f +0x115:  movl   $0xe,0x4(%esp)
0854ada7 +0x11d:  mov    %eax,(%esp)
0854adaa +0x120:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
0854adaf +0x125:  mov    0x10(%ebp),%eax
0854adb2 +0x128:  mov    %eax,(%esp)
0854adb5 +0x12b:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854adba +0x130:  movzbl %al,%edx
0854adbd +0x133:  mov    -0x20(%ebp),%eax
0854adc0 +0x136:  mov    0x234(%eax),%eax
0854adc6 +0x13c:  cmp    %eax,%edx
0854adc8 +0x13e:  setge  %al
0854adcb +0x141:  test   %al,%al
0854adcd +0x143:  je     0854adf0 <+0x166>
0854adcf +0x145:  movl   $0x1,0xc(%esp)
0854add7 +0x14d:  mov    0x10(%ebp),%eax
0854adda +0x150:  mov    %eax,0x8(%esp)
0854adde +0x154:  mov    0xc(%ebp),%eax
0854ade1 +0x157:  mov    %eax,0x4(%esp)
0854ade5 +0x15b:  mov    0x8(%ebp),%eax
0854ade8 +0x15e:  mov    %eax,(%esp)
0854adeb +0x161:  call   08546824 <_ZN8WongWork12CItemUpgrade14_NoticeUpgradeEPK5CUserRK10Inven_Itemb>  ; WongWork::CItemUpgrade::_NoticeUpgrade(CUser const*, Inven_Item const&, bool)
0854adf0 +0x166:  mov    0x10(%ebp),%eax
0854adf3 +0x169:  mov    %eax,(%esp)
0854adf6 +0x16c:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854adfb +0x171:  cmp    $0xc,%al
0854adfd +0x173:  seta   %al
0854ae00 +0x176:  test   %al,%al
0854ae02 +0x178:  je     0854ae63 <+0x1d9>
0854ae04 +0x17a:  mov    0x10(%ebp),%eax
0854ae07 +0x17d:  mov    %eax,(%esp)
0854ae0a +0x180:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854ae0f +0x185:  movzbl %al,%eax
0854ae12 +0x188:  mov    %eax,-0x3c(%ebp)
0854ae15 +0x18b:  mov    0xc(%ebp),%eax
0854ae18 +0x18e:  mov    %eax,(%esp)
0854ae1b +0x191:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0854ae20 +0x196:  mov    %eax,%esi
0854ae22 +0x198:  mov    0xc(%ebp),%eax
0854ae25 +0x19b:  mov    %eax,(%esp)
0854ae28 +0x19e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0854ae2d +0x1a3:  mov    %eax,%ebx
0854ae2f +0x1a5:  mov    0x10(%ebp),%eax
0854ae32 +0x1a8:  mov    0x2(%eax),%edi
0854ae35 +0x1ab:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0854ae3a +0x1b0:  mov    0x378(%eax),%eax
0854ae40 +0x1b6:  movl   $0x1,0x14(%esp)
0854ae48 +0x1be:  mov    -0x3c(%ebp),%edx
0854ae4b +0x1c1:  mov    %edx,0x10(%esp)
0854ae4f +0x1c5:  mov    %esi,0xc(%esp)
0854ae53 +0x1c9:  mov    %ebx,0x8(%esp)
0854ae57 +0x1cd:  mov    %edi,0x4(%esp)
0854ae5b +0x1d1:  mov    %eax,(%esp)
0854ae5e +0x1d4:  call   08425ece <_ZN20DB_ReqItemUpgradeLog11makeRequestEjjjPKcjb>  ; DB_ReqItemUpgradeLog::makeRequest(unsigned int, unsigned int, unsigned int, char const*, unsigned int, bool)
0854ae63 +0x1d9:  mov    0x10(%ebp),%eax
0854ae66 +0x1dc:  mov    %eax,(%esp)
0854ae69 +0x1df:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854ae6e +0x1e4:  movzbl %al,%ebx
0854ae71 +0x1e7:  mov    -0x24(%ebp),%eax
0854ae74 +0x1ea:  mov    %eax,(%esp)
0854ae77 +0x1ed:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0854ae7c +0x1f2:  mov    0xc(%ebp),%edx
0854ae7f +0x1f5:  lea    0x79700(%edx),%ecx
0854ae85 +0x1fb:  movl   $0x1,0x10(%esp)
0854ae8d +0x203:  mov    %ebx,0xc(%esp)
0854ae91 +0x207:  mov    -0x1c(%ebp),%edx
0854ae94 +0x20a:  mov    %edx,0x8(%esp)
0854ae98 +0x20e:  mov    %eax,0x4(%esp)
0854ae9c +0x212:  mov    %ecx,(%esp)
0854ae9f +0x215:  call   08684ca0 <_ZN15cUserHistoryLog11UpgradeItemEiiib>  ; cUserHistoryLog::UpgradeItem(int, int, int, bool)
0854aea4 +0x21a:  mov    -0x24(%ebp),%eax
0854aea7 +0x21d:  mov    (%eax),%eax
0854aea9 +0x21f:  add    $0x4c,%eax
0854aeac +0x222:  mov    (%eax),%edx
0854aeae +0x224:  mov    -0x24(%ebp),%eax
0854aeb1 +0x227:  mov    %eax,(%esp)
0854aeb4 +0x22a:  call   *%edx
0854aeb6 +0x22c:  test   %al,%al
0854aeb8 +0x22e:  je     0854aeef <+0x265>
0854aeba +0x230:  mov    0x10(%ebp),%eax
0854aebd +0x233:  mov    %eax,(%esp)
0854aec0 +0x236:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854aec5 +0x23b:  movzbl %al,%eax
0854aec8 +0x23e:  movl   $0x1,0x10(%esp)
0854aed0 +0x246:  mov    %eax,0xc(%esp)
0854aed4 +0x24a:  mov    -0x1c(%ebp),%eax
0854aed7 +0x24d:  mov    %eax,0x8(%esp)
0854aedb +0x251:  mov    0x1c(%ebp),%eax
0854aede +0x254:  mov    %eax,0x4(%esp)
0854aee2 +0x258:  mov    0xc(%ebp),%eax
0854aee5 +0x25b:  mov    %eax,(%esp)
0854aee8 +0x25e:  call   08679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>  ; CUser::makeGuildItemUpgradMessage(char const*, int, int, bool)
0854aeed +0x263:  jmp    0854af2a <+0x2a0>
0854aeef +0x265:  mov    0x10(%ebp),%eax
0854aef2 +0x268:  mov    %eax,(%esp)
0854aef5 +0x26b:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854aefa +0x270:  movzbl %al,%ebx
0854aefd +0x273:  mov    -0x24(%ebp),%eax
0854af00 +0x276:  mov    %eax,(%esp)
0854af03 +0x279:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
0854af08 +0x27e:  movl   $0x1,0x10(%esp)
0854af10 +0x286:  mov    %ebx,0xc(%esp)
0854af14 +0x28a:  mov    -0x1c(%ebp),%edx
0854af17 +0x28d:  mov    %edx,0x8(%esp)
0854af1b +0x291:  mov    %eax,0x4(%esp)
0854af1f +0x295:  mov    0xc(%ebp),%eax
0854af22 +0x298:  mov    %eax,(%esp)
0854af25 +0x29b:  call   08679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>  ; CUser::makeGuildItemUpgradMessage(char const*, int, int, bool)
0854af2a +0x2a0:  mov    $0x0,%eax
0854af2f +0x2a5:  add    $0x5c,%esp
0854af32 +0x2a8:  pop    %ebx
0854af33 +0x2a9:  pop    %esi
0854af34 +0x2aa:  pop    %edi
0854af35 +0x2ab:  pop    %ebp
0854af36 +0x2ac:  ret
0854af37 +0x2ad:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade @ 0x854ac8a

/* WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int, char
   const*) */

undefined4 __thiscall
WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,Inven_Item *param_3,int param_4,
          char *param_5)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  CDataManager *this_00;
  CValueStatistic *pCVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  cMyTrace local_38 [16];
  CItem *local_28;
  int local_24;
  uint local_20;
  
  uVar3 = CUser::get_charac_no(param_1,-1);
  uVar4 = CUser::get_acc_id(param_1);
  uVar5 = NumberToString(uVar4,0);
  cMyTrace::cMyTrace(local_38,
                     "int WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int, const char*)"
                     ,0x82c,0);
  cMyTrace::operator()
            (local_38,"AmplifyRandomUpgrade m_id:%s char_no(%d) update:%d",uVar5,uVar3,param_4);
  iVar10 = *(int *)(param_2 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_28 = (CItem *)CDataManager::find_item(this_00,iVar10);
  if (local_28 == (CItem *)0x0) {
    uVar3 = 4;
  }
  else {
    cVar1 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      local_24 = CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
      local_20 = Inven_Item::GetUpgrade(param_2);
      local_20 = local_20 & 0xff;
      Inven_Item::SetUpgrade(param_2,(uchar)param_4);
      pCVar6 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar6,0xe,param_1,0);
      uVar4 = Inven_Item::GetUpgrade(param_2);
      if (*(int *)(local_24 + 0x234) <= (int)(uVar4 & 0xff)) {
        _NoticeUpgrade(this,param_1,param_2,true);
      }
      bVar2 = Inven_Item::GetUpgrade(param_2);
      if (0xc < bVar2) {
        uVar7 = Inven_Item::GetUpgrade(param_2);
        pcVar8 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = *(uint *)(param_2 + 2);
        iVar10 = G_CEnvironment();
        DB_ReqItemUpgradeLog::makeRequest
                  (*(uint *)(iVar10 + 0x378),uVar4,uVar9,pcVar8,uVar7 & 0xff,true);
      }
      uVar4 = Inven_Item::GetUpgrade(param_2);
      iVar10 = CItem::get_index(local_28);
      cUserHistoryLog::UpgradeItem
                ((cUserHistoryLog *)(param_1 + 0x79700),iVar10,local_20,uVar4 & 0xff,true);
      cVar1 = (**(code **)(*(int *)local_28 + 0x4c))(local_28);
      if (cVar1 == '\0') {
        uVar4 = Inven_Item::GetUpgrade(param_2);
        pcVar8 = (char *)CItem::GetItemName(local_28);
        CUser::makeGuildItemUpgradMessage(param_1,pcVar8,local_20,uVar4 & 0xff,true);
      }
      else {
        uVar4 = Inven_Item::GetUpgrade(param_2);
        CUser::makeGuildItemUpgradMessage(param_1,param_5,local_20,uVar4 & 0xff,true);
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
  }
  return uVar3;
}
```

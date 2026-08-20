# _processCharacterDayEvent

`_ZN5CUser25_processCharacterDayEventEjj`

`CUser::_processCharacterDayEvent(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08659490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659490  _ZN5CUser25_processCharacterDayEventEjj
#           CUser::_processCharacterDayEvent(unsigned int, unsigned int)
# range [0x08659490, 0x086598b9]
08659490 +0x000:  push   %ebp
08659491 +0x001:  mov    %esp,%ebp
08659493 +0x003:  push   %esi
08659494 +0x004:  push   %ebx
08659495 +0x005:  sub    $0x1c0,%esp
0865949b +0x00b:  mov    0x10(%ebp),%eax
0865949e +0x00e:  mov    0xc(%ebp),%edx
086594a1 +0x011:  lea    (%edx,%eax,1),%eax
086594a4 +0x014:  mov    %eax,-0x28(%ebp)
086594a7 +0x017:  cmpl   $0x0,0xc(%ebp)
086594ab +0x01b:  je     086598a2 <+0x412>
086594b1 +0x021:  cmpl   $0x0,-0x28(%ebp)
086594b5 +0x025:  je     086598a5 <+0x415>
086594bb +0x02b:  cmpl   $0x9c,0xc(%ebp)
086594c2 +0x032:  ja     086598a8 <+0x418>
086594c8 +0x038:  movl   $0x0,-0x24(%ebp)
086594cf +0x03f:  movl   $0x0,-0x20(%ebp)
086594d6 +0x046:  mov    0xc(%ebp),%eax
086594d9 +0x049:  mov    $0x0,%edx
086594de +0x04e:  mov    %eax,-0x190(%ebp)
086594e4 +0x054:  mov    %edx,-0x18c(%ebp)
086594ea +0x05a:  fildll -0x190(%ebp)
086594f0 +0x060:  flds   &data#552202a0(.rodata)
086594f6 +0x066:  fdivrp %st,%st(1)
086594f8 +0x068:  fnstcw -0x192(%ebp)
086594fe +0x06e:  movzwl -0x192(%ebp),%eax
08659505 +0x075:  mov    $0xc,%ah
08659507 +0x077:  mov    %ax,-0x194(%ebp)
0865950e +0x07e:  fldcw  -0x194(%ebp)
08659514 +0x084:  fistpl -0x1c(%ebp)
08659517 +0x087:  fldcw  -0x192(%ebp)
0865951d +0x08d:  mov    -0x28(%ebp),%eax
08659520 +0x090:  mov    $0x0,%edx
08659525 +0x095:  mov    %eax,-0x190(%ebp)
0865952b +0x09b:  mov    %edx,-0x18c(%ebp)
08659531 +0x0a1:  fildll -0x190(%ebp)
08659537 +0x0a7:  flds   &data#552202a0(.rodata)
0865953d +0x0ad:  fdivrp %st,%st(1)
0865953f +0x0af:  fldcw  -0x194(%ebp)
08659545 +0x0b5:  fistpl -0x18(%ebp)
08659548 +0x0b8:  fldcw  -0x192(%ebp)
0865954e +0x0be:  mov    -0x1c(%ebp),%eax
08659551 +0x0c1:  cmp    -0x18(%ebp),%eax
08659554 +0x0c4:  jne    08659619 <+0x189>
0865955a +0x0ca:  mov    0xc(%ebp),%eax
0865955d +0x0cd:  mov    $0x0,%edx
08659562 +0x0d2:  mov    %eax,-0x190(%ebp)
08659568 +0x0d8:  mov    %edx,-0x18c(%ebp)
0865956e +0x0de:  fildll -0x190(%ebp)
08659574 +0x0e4:  flds   &data#10b0d875(.rodata)
0865957a +0x0ea:  fdivrp %st,%st(1)
0865957c +0x0ec:  fldcw  -0x194(%ebp)
08659582 +0x0f2:  fistpl -0x10(%ebp)
08659585 +0x0f5:  fldcw  -0x192(%ebp)
0865958b +0x0fb:  mov    -0x28(%ebp),%eax
0865958e +0x0fe:  mov    $0x0,%edx
08659593 +0x103:  mov    %eax,-0x190(%ebp)
08659599 +0x109:  mov    %edx,-0x18c(%ebp)
0865959f +0x10f:  fildll -0x190(%ebp)
086595a5 +0x115:  flds   &data#10b0d875(.rodata)
086595ab +0x11b:  fdivrp %st,%st(1)
086595ad +0x11d:  fldcw  -0x194(%ebp)
086595b3 +0x123:  fistpl -0xc(%ebp)
086595b6 +0x126:  fldcw  -0x192(%ebp)
086595bc +0x12c:  mov    -0x10(%ebp),%eax
086595bf +0x12f:  cmp    -0xc(%ebp),%eax
086595c2 +0x132:  je     086598ab <+0x41b>
086595c8 +0x138:  movl   $0x1d5e,-0x24(%ebp)
086595cf +0x13f:  movl   $0x1,-0x20(%ebp)
086595d6 +0x146:  movl   $0x0,0xc(%esp)
086595de +0x14e:  movl   $"game_server_msg_75",0x8(%esp)
086595e6 +0x156:  movl   $0x4,0x4(%esp)
086595ee +0x15e:  movl   $&g_scriptStringManager_,(%esp)
086595f5 +0x165:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086595fa +0x16a:  movl   $0xff,0x8(%esp)
08659602 +0x172:  mov    %eax,0x4(%esp)
08659606 +0x176:  lea    -0x17a(%ebp),%eax
0865960c +0x17c:  mov    %eax,(%esp)
0865960f +0x17f:  call   0807d8d0 <_init+0x1c8>
08659614 +0x184:  jmp    08659798 <+0x308>
08659619 +0x189:  cmpl   $0x0,-0x1c(%ebp)
0865961d +0x18d:  jne    08659676 <+0x1e6>
0865961f +0x18f:  cmpl   $0x1,-0x18(%ebp)
08659623 +0x193:  jne    08659676 <+0x1e6>
08659625 +0x195:  movl   $0x1d5c,-0x24(%ebp)
0865962c +0x19c:  movl   $0x2,-0x20(%ebp)
08659633 +0x1a3:  movl   $0x0,0xc(%esp)
0865963b +0x1ab:  movl   $"game_server_msg_71",0x8(%esp)
08659643 +0x1b3:  movl   $0x4,0x4(%esp)
0865964b +0x1bb:  movl   $&g_scriptStringManager_,(%esp)
08659652 +0x1c2:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08659657 +0x1c7:  movl   $0xff,0x8(%esp)
0865965f +0x1cf:  mov    %eax,0x4(%esp)
08659663 +0x1d3:  lea    -0x17a(%ebp),%eax
08659669 +0x1d9:  mov    %eax,(%esp)
0865966c +0x1dc:  call   0807d8d0 <_init+0x1c8>
08659671 +0x1e1:  jmp    08659798 <+0x308>
08659676 +0x1e6:  cmpl   $0x1,-0x1c(%ebp)
0865967a +0x1ea:  jne    086596d3 <+0x243>
0865967c +0x1ec:  cmpl   $0x2,-0x18(%ebp)
08659680 +0x1f0:  jne    086596d3 <+0x243>
08659682 +0x1f2:  movl   $0x1d5c,-0x24(%ebp)
08659689 +0x1f9:  movl   $0x4,-0x20(%ebp)
08659690 +0x200:  movl   $0x0,0xc(%esp)
08659698 +0x208:  movl   $"game_server_msg_72",0x8(%esp)
086596a0 +0x210:  movl   $0x4,0x4(%esp)
086596a8 +0x218:  movl   $&g_scriptStringManager_,(%esp)
086596af +0x21f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086596b4 +0x224:  movl   $0xff,0x8(%esp)
086596bc +0x22c:  mov    %eax,0x4(%esp)
086596c0 +0x230:  lea    -0x17a(%ebp),%eax
086596c6 +0x236:  mov    %eax,(%esp)
086596c9 +0x239:  call   0807d8d0 <_init+0x1c8>
086596ce +0x23e:  jmp    08659798 <+0x308>
086596d3 +0x243:  cmpl   $0x2,-0x1c(%ebp)
086596d7 +0x247:  jne    0865972d <+0x29d>
086596d9 +0x249:  cmpl   $0x3,-0x18(%ebp)
086596dd +0x24d:  jne    0865972d <+0x29d>
086596df +0x24f:  movl   $0x1d5c,-0x24(%ebp)
086596e6 +0x256:  movl   $0x6,-0x20(%ebp)
086596ed +0x25d:  movl   $0x0,0xc(%esp)
086596f5 +0x265:  movl   $"game_server_msg_73",0x8(%esp)
086596fd +0x26d:  movl   $0x4,0x4(%esp)
08659705 +0x275:  movl   $&g_scriptStringManager_,(%esp)
0865970c +0x27c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08659711 +0x281:  movl   $0xff,0x8(%esp)
08659719 +0x289:  mov    %eax,0x4(%esp)
0865971d +0x28d:  lea    -0x17a(%ebp),%eax
08659723 +0x293:  mov    %eax,(%esp)
08659726 +0x296:  call   0807d8d0 <_init+0x1c8>
0865972b +0x29b:  jmp    08659798 <+0x308>
0865972d +0x29d:  cmpl   $0x3,-0x1c(%ebp)
08659731 +0x2a1:  jne    08659798 <+0x308>
08659733 +0x2a3:  cmpl   $0x4,-0x18(%ebp)
08659737 +0x2a7:  jne    08659798 <+0x308>
08659739 +0x2a9:  movl   $0x1d5d,-0x24(%ebp)
08659740 +0x2b0:  movl   $0x1,-0x20(%ebp)
08659747 +0x2b7:  movl   $0x0,0xc(%esp)
0865974f +0x2bf:  movl   $"game_server_msg_74",0x8(%esp)
08659757 +0x2c7:  movl   $0x4,0x4(%esp)
0865975f +0x2cf:  movl   $&g_scriptStringManager_,(%esp)
08659766 +0x2d6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0865976b +0x2db:  movl   $0xff,0x8(%esp)
08659773 +0x2e3:  mov    %eax,0x4(%esp)
08659777 +0x2e7:  lea    -0x17a(%ebp),%eax
0865977d +0x2ed:  mov    %eax,(%esp)
08659780 +0x2f0:  call   0807d8d0 <_init+0x1c8>
08659785 +0x2f5:  movl   $0x1,0x4(%esp)
0865978d +0x2fd:  mov    0x8(%ebp),%eax
08659790 +0x300:  mov    %eax,(%esp)
08659793 +0x303:  call   08688230 <_ZN14CUserEventUtil23updateCharacterDayEventEP5CUseri>  ; CUserEventUtil::updateCharacterDayEvent(CUser*, int)
08659798 +0x308:  movl   $0x0,0xc(%esp)
086597a0 +0x310:  movl   $"game_server_msg_70",0x8(%esp)
086597a8 +0x318:  movl   $0x4,0x4(%esp)
086597b0 +0x320:  movl   $&g_scriptStringManager_,(%esp)
086597b7 +0x327:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086597bc +0x32c:  movl   $0x14,0x8(%esp)
086597c4 +0x334:  mov    %eax,0x4(%esp)
086597c8 +0x338:  lea    -0x3d(%ebp),%eax
086597cb +0x33b:  mov    %eax,(%esp)
086597ce +0x33e:  call   0807d8d0 <_init+0x1c8>
086597d3 +0x343:  lea    -0x7a(%ebp),%eax
086597d6 +0x346:  mov    %eax,(%esp)
086597d9 +0x349:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086597de +0x34e:  mov    -0x24(%ebp),%ebx
086597e1 +0x351:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086597e6 +0x356:  mov    %ebx,0x4(%esp)
086597ea +0x35a:  mov    %eax,(%esp)
086597ed +0x35d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086597f2 +0x362:  mov    %eax,-0x14(%ebp)
086597f5 +0x365:  cmpl   $0x0,-0x14(%ebp)
086597f9 +0x369:  je     086598ae <+0x41e>
086597ff +0x36f:  mov    -0x24(%ebp),%eax
08659802 +0x372:  mov    %eax,-0x78(%ebp)
08659805 +0x375:  mov    -0x14(%ebp),%eax
08659808 +0x378:  mov    (%eax),%eax
0865980a +0x37a:  add    $0x8,%eax
0865980d +0x37d:  mov    (%eax),%edx
0865980f +0x37f:  lea    -0x7a(%ebp),%eax
08659812 +0x382:  mov    %eax,0x4(%esp)
08659816 +0x386:  mov    -0x14(%ebp),%eax
08659819 +0x389:  mov    %eax,(%esp)
0865981c +0x38c:  call   *%edx
0865981e +0x38e:  mov    -0x20(%ebp),%eax
08659821 +0x391:  mov    %eax,0x4(%esp)
08659825 +0x395:  lea    -0x7a(%ebp),%eax
08659828 +0x398:  mov    %eax,(%esp)
0865982b +0x39b:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08659830 +0x3a0:  mov    0x8(%ebp),%eax
08659833 +0x3a3:  mov    %eax,(%esp)
08659836 +0x3a6:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0865983b +0x3ab:  mov    %eax,%ebx
0865983d +0x3ad:  lea    -0x17a(%ebp),%eax
08659843 +0x3b3:  mov    %eax,(%esp)
08659846 +0x3b6:  call   0807e3b0 <_init+0xca8>
0865984b +0x3bb:  mov    %eax,%esi
0865984d +0x3bd:  mov    0x8(%ebp),%eax
08659850 +0x3c0:  mov    %eax,(%esp)
08659853 +0x3c3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08659858 +0x3c8:  movl   $0x0,0x24(%esp)
08659860 +0x3d0:  movl   $0x0,0x20(%esp)
08659868 +0x3d8:  mov    %ebx,0x1c(%esp)
0865986c +0x3dc:  movl   $0x0,0x18(%esp)
08659874 +0x3e4:  mov    %esi,0x14(%esp)
08659878 +0x3e8:  lea    -0x17a(%ebp),%edx
0865987e +0x3ee:  mov    %edx,0x10(%esp)
08659882 +0x3f2:  mov    %eax,0xc(%esp)
08659886 +0x3f6:  movl   $0x0,0x8(%esp)
0865988e +0x3fe:  lea    -0x7a(%ebp),%eax
08659891 +0x401:  mov    %eax,0x4(%esp)
08659895 +0x405:  lea    -0x3d(%ebp),%eax
08659898 +0x408:  mov    %eax,(%esp)
0865989b +0x40b:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086598a0 +0x410:  jmp    086598af <+0x41f>
086598a2 +0x412:  nop
086598a3 +0x413:  jmp    086598af <+0x41f>
086598a5 +0x415:  nop
086598a6 +0x416:  jmp    086598af <+0x41f>
086598a8 +0x418:  nop
086598a9 +0x419:  jmp    086598af <+0x41f>
086598ab +0x41b:  nop
086598ac +0x41c:  jmp    086598af <+0x41f>
086598ae +0x41e:  nop
086598af +0x41f:  add    $0x1c0,%esp
086598b5 +0x425:  pop    %ebx
086598b6 +0x426:  pop    %esi
086598b7 +0x427:  pop    %ebp
086598b8 +0x428:  ret
086598b9 +0x429:  nop
```

## 反编译 C

```c
// CUser::_processCharacterDayEvent @ 0x8659490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::_processCharacterDayEvent(unsigned int, unsigned int) */

void __thiscall CUser::_processCharacterDayEvent(CUser *this,uint param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  char local_17e [256];
  Inven_Item local_7e [2];
  int local_7c;
  char local_41 [21];
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  
  local_2c = param_1 + param_2;
  if (((param_1 != 0) && (local_2c != 0)) && (param_1 < 0x9d)) {
    local_28 = 0;
    local_24 = 0;
    local_20 = (int)ROUND((float)param_1 / _DAT_08cf3960);
    local_1c = (int)ROUND((float)local_2c / _DAT_08cf3960);
    if (local_20 == local_1c) {
      local_14 = (int)ROUND((float)param_1 / _DAT_08cf3964);
      local_10 = (int)ROUND((float)local_2c / _DAT_08cf3964);
      if (local_14 == local_10) {
        return;
      }
      local_28 = 0x1d5e;
      local_24 = 1;
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_75",(bool *)0x0);
      strncpy(local_17e,pcVar2,0xff);
    }
    else if ((local_20 == 0) && (local_1c == 1)) {
      local_28 = 0x1d5c;
      local_24 = 2;
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_71",(bool *)0x0);
      strncpy(local_17e,pcVar2,0xff);
    }
    else if ((local_20 == 1) && (local_1c == 2)) {
      local_28 = 0x1d5c;
      local_24 = 4;
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_72",(bool *)0x0);
      strncpy(local_17e,pcVar2,0xff);
    }
    else if ((local_20 == 2) && (local_1c == 3)) {
      local_28 = 0x1d5c;
      local_24 = 6;
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_73",(bool *)0x0);
      strncpy(local_17e,pcVar2,0xff);
    }
    else if ((local_20 == 3) && (local_1c == 4)) {
      local_28 = 0x1d5d;
      local_24 = 1;
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_74",(bool *)0x0);
      strncpy(local_17e,pcVar2,0xff);
      CUserEventUtil::updateCharacterDayEvent(this,1);
    }
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_70",(bool *)0x0);
    strncpy(local_41,pcVar2,0x14);
    Inven_Item::Inven_Item(local_7e);
    iVar1 = local_28;
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (int *)CDataManager::find_item(this_00,iVar1);
    if (local_18 != (int *)0x0) {
      local_7c = local_28;
      (**(code **)(*local_18 + 8))(local_18,local_7e);
      Inven_Item::set_add_info(local_7e,local_24);
      uVar3 = GetServerGroup(this);
      sVar4 = strlen(local_17e);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_41,local_7e,0,uVar5,local_17e,sVar4,0,uVar3,0,0);
    }
  }
  return;
}
```

# IncreasePlayCount

`_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser`

`CPvPLiveEventData::IncreasePlayCount(CUser*)`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x0826921c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826921c  _ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser
#           CPvPLiveEventData::IncreasePlayCount(CUser*)
# range [0x0826921c, 0x0826948d]
0826921c +0x000:  push   %ebp
0826921d +0x001:  mov    %esp,%ebp
0826921f +0x003:  push   %esi
08269220 +0x004:  push   %ebx
08269221 +0x005:  sub    $0x1a0,%esp
08269227 +0x00b:  mov    0xc(%ebp),%eax
0826922a +0x00e:  mov    %eax,(%esp)
0826922d +0x011:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08269232 +0x016:  test   %eax,%eax
08269234 +0x018:  sete   %al
08269237 +0x01b:  test   %al,%al
08269239 +0x01d:  jne    08269483 <+0x267>
0826923f +0x023:  mov    0x8(%ebp),%eax
08269242 +0x026:  mov    %eax,(%esp)
08269245 +0x029:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0826924a +0x02e:  mov    0x8(%ebp),%eax
0826924d +0x031:  mov    0x8(%eax),%eax
08269250 +0x034:  lea    0x1(%eax),%edx
08269253 +0x037:  mov    0x8(%ebp),%eax
08269256 +0x03a:  mov    %edx,0x8(%eax)
08269259 +0x03d:  mov    0x8(%ebp),%eax
0826925c +0x040:  mov    0x8(%eax),%ebx
0826925f +0x043:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08269264 +0x048:  add    $0x68,%eax
08269267 +0x04b:  mov    %eax,(%esp)
0826926a +0x04e:  call   08269508 <_GLOBAL__I__ZN17CPvPLiveEventDataC2Ev+0x2b>  ; global constructors keyed to CPvPLiveEventData::CPvPLiveEventData()+0x2b
0826926f +0x053:  cmp    %eax,%ebx
08269271 +0x055:  sete   %al
08269274 +0x058:  test   %al,%al
08269276 +0x05a:  je     08269484 <+0x268>
0826927c +0x060:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08269281 +0x065:  add    $0x68,%eax
08269284 +0x068:  mov    %eax,(%esp)
08269287 +0x06b:  call   082694fa <_GLOBAL__I__ZN17CPvPLiveEventDataC2Ev+0x1d>  ; global constructors keyed to CPvPLiveEventData::CPvPLiveEventData()+0x1d
0826928c +0x070:  lea    -0x1c(%ebp),%edx
0826928f +0x073:  mov    %eax,0x4(%esp)
08269293 +0x077:  mov    %edx,(%esp)
08269296 +0x07a:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0826929b +0x07f:  sub    $0x4,%esp
0826929e +0x082:  jmp    08269445 <+0x229>
082692a3 +0x087:  lea    -0x1c(%ebp),%eax
082692a6 +0x08a:  mov    %eax,(%esp)
082692a9 +0x08d:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
082692ae +0x092:  mov    (%eax),%eax
082692b0 +0x094:  mov    %eax,-0x14(%ebp)
082692b3 +0x097:  lea    -0x1c(%ebp),%eax
082692b6 +0x09a:  mov    %eax,(%esp)
082692b9 +0x09d:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
082692be +0x0a2:  mov    0x4(%eax),%eax
082692c1 +0x0a5:  mov    %eax,-0x10(%ebp)
082692c4 +0x0a8:  mov    -0x14(%ebp),%ebx
082692c7 +0x0ab:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082692cc +0x0b0:  mov    %ebx,0x4(%esp)
082692d0 +0x0b4:  mov    %eax,(%esp)
082692d3 +0x0b7:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082692d8 +0x0bc:  mov    %eax,-0xc(%ebp)
082692db +0x0bf:  cmpl   $0x0,-0xc(%ebp)
082692df +0x0c3:  je     0826943a <+0x21e>
082692e5 +0x0c9:  lea    -0x6e(%ebp),%eax
082692e8 +0x0cc:  mov    %eax,(%esp)
082692eb +0x0cf:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
082692f0 +0x0d4:  mov    -0x14(%ebp),%eax
082692f3 +0x0d7:  mov    %eax,-0x6c(%ebp)
082692f6 +0x0da:  mov    -0x10(%ebp),%ebx
082692f9 +0x0dd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082692fe +0x0e2:  mov    0xc(%eax),%eax
08269301 +0x0e5:  mov    %ebx,0xc(%esp)
08269305 +0x0e9:  lea    -0x6e(%ebp),%edx
08269308 +0x0ec:  mov    %edx,0x8(%esp)
0826930c +0x0f0:  movl   $0x0,0x4(%esp)
08269314 +0x0f8:  mov    %eax,(%esp)
08269317 +0x0fb:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0826931c +0x100:  mov    -0x6c(%ebp),%eax
0826931f +0x103:  test   %eax,%eax
08269321 +0x105:  jne    08269332 <+0x116>
08269323 +0x107:  lea    -0x6e(%ebp),%eax
08269326 +0x10a:  mov    %eax,(%esp)
08269329 +0x10d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0826932e +0x112:  test   %eax,%eax
08269330 +0x114:  je     08269339 <+0x11d>
08269332 +0x116:  mov    $0x1,%eax
08269337 +0x11b:  jmp    0826933e <+0x122>
08269339 +0x11d:  mov    $0x0,%eax
0826933e +0x122:  test   %al,%al
08269340 +0x124:  je     0826943a <+0x21e>
08269346 +0x12a:  movl   $0x0,0xc(%esp)
0826934e +0x132:  movl   $"game_server_msg_140",0x8(%esp)
08269356 +0x13a:  movl   $0x4,0x4(%esp)
0826935e +0x142:  movl   $&g_scriptStringManager_,(%esp)
08269365 +0x149:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0826936a +0x14e:  movl   $0x14,0x8(%esp)
08269372 +0x156:  mov    %eax,0x4(%esp)
08269376 +0x15a:  lea    -0x31(%ebp),%eax
08269379 +0x15d:  mov    %eax,(%esp)
0826937c +0x160:  call   0807d8d0 <_init+0x1c8>
08269381 +0x165:  movl   $0x0,0xc(%esp)
08269389 +0x16d:  movl   $"game_server_msg_141",0x8(%esp)
08269391 +0x175:  movl   $0x4,0x4(%esp)
08269399 +0x17d:  movl   $&g_scriptStringManager_,(%esp)
082693a0 +0x184:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
082693a5 +0x189:  movl   $0xff,0x8(%esp)
082693ad +0x191:  mov    %eax,0x4(%esp)
082693b1 +0x195:  lea    -0x16e(%ebp),%eax
082693b7 +0x19b:  mov    %eax,(%esp)
082693ba +0x19e:  call   0807d8d0 <_init+0x1c8>
082693bf +0x1a3:  mov    0xc(%ebp),%eax
082693c2 +0x1a6:  mov    %eax,(%esp)
082693c5 +0x1a9:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
082693ca +0x1ae:  mov    %eax,%ebx
082693cc +0x1b0:  lea    -0x16e(%ebp),%eax
082693d2 +0x1b6:  mov    %eax,(%esp)
082693d5 +0x1b9:  call   0807e3b0 <_init+0xca8>
082693da +0x1be:  mov    %eax,%esi
082693dc +0x1c0:  mov    0xc(%ebp),%eax
082693df +0x1c3:  mov    %eax,(%esp)
082693e2 +0x1c6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082693e7 +0x1cb:  movl   $0x0,0x24(%esp)
082693ef +0x1d3:  movl   $0x0,0x20(%esp)
082693f7 +0x1db:  mov    %ebx,0x1c(%esp)
082693fb +0x1df:  movl   $0x0,0x18(%esp)
08269403 +0x1e7:  mov    %esi,0x14(%esp)
08269407 +0x1eb:  lea    -0x16e(%ebp),%edx
0826940d +0x1f1:  mov    %edx,0x10(%esp)
08269411 +0x1f5:  mov    %eax,0xc(%esp)
08269415 +0x1f9:  movl   $0x0,0x8(%esp)
0826941d +0x201:  lea    -0x6e(%ebp),%eax
08269420 +0x204:  mov    %eax,0x4(%esp)
08269424 +0x208:  lea    -0x31(%ebp),%eax
08269427 +0x20b:  mov    %eax,(%esp)
0826942a +0x20e:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0826942f +0x213:  lea    -0x6e(%ebp),%eax
08269432 +0x216:  mov    %eax,(%esp)
08269435 +0x219:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0826943a +0x21e:  lea    -0x1c(%ebp),%eax
0826943d +0x221:  mov    %eax,(%esp)
08269440 +0x224:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08269445 +0x229:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826944a +0x22e:  add    $0x68,%eax
0826944d +0x231:  mov    %eax,(%esp)
08269450 +0x234:  call   082694fa <_GLOBAL__I__ZN17CPvPLiveEventDataC2Ev+0x1d>  ; global constructors keyed to CPvPLiveEventData::CPvPLiveEventData()+0x1d
08269455 +0x239:  lea    -0x18(%ebp),%edx
08269458 +0x23c:  mov    %eax,0x4(%esp)
0826945c +0x240:  mov    %edx,(%esp)
0826945f +0x243:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08269464 +0x248:  sub    $0x4,%esp
08269467 +0x24b:  lea    -0x18(%ebp),%eax
0826946a +0x24e:  mov    %eax,0x4(%esp)
0826946e +0x252:  lea    -0x1c(%ebp),%eax
08269471 +0x255:  mov    %eax,(%esp)
08269474 +0x258:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08269479 +0x25d:  test   %al,%al
0826947b +0x25f:  jne    082692a3 <+0x87>
08269481 +0x265:  jmp    08269484 <+0x268>
08269483 +0x267:  nop
08269484 +0x268:  lea    -0x8(%ebp),%esp
08269487 +0x26b:  add    $0x0,%esp
0826948a +0x26e:  pop    %ebx
0826948b +0x26f:  pop    %esi
0826948c +0x270:  pop    %ebp
0826948d +0x271:  ret
```

## 反编译 C

```c
// CPvPLiveEventData::IncreasePlayCount @ 0x826921c

/* CPvPLiveEventData::IncreasePlayCount(CUser*) */

void __thiscall CPvPLiveEventData::IncreasePlayCount(CPvPLiveEventData *this,CUser *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CDataManager *this_00;
  char *pcVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 uVar8;
  char local_172 [256];
  Inven_Item local_72 [2];
  int local_70;
  char local_35 [21];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    charac_expand::CData::alter((CData *)this);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    iVar2 = *(int *)(this + 8);
    iVar3 = G_CDataManager();
    iVar3 = ServerParameterScript::GetPvPLiveEventPlayCount((ServerParameterScript *)(iVar3 + 0x68))
    ;
    if (iVar2 == iVar3) {
      iVar2 = G_CDataManager();
      ServerParameterScript::GetPvPLiveEventReward((ServerParameterScript *)(iVar2 + 0x68));
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        iVar2 = G_CDataManager();
        ServerParameterScript::GetPvPLiveEventReward((ServerParameterScript *)(iVar2 + 0x68));
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
        if (!bVar1) break;
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_20);
        local_18 = *piVar4;
        iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_20);
        iVar2 = local_18;
        local_14 = *(undefined4 *)(iVar3 + 4);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = CDataManager::find_item(this_00,iVar2);
        if (local_10 != 0) {
          Inven_Item::Inven_Item(local_72);
          uVar6 = local_14;
          local_70 = local_18;
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,local_72,uVar6);
          if ((local_70 == 0) && (iVar2 = Inven_Item::get_add_info(local_72), iVar2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            pcVar5 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_140",(bool *)0x0);
            strncpy(local_35,pcVar5,0x14);
            pcVar5 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_141",(bool *)0x0);
            strncpy(local_172,pcVar5,0xff);
            uVar6 = CUser::GetServerGroup(param_1);
            sVar7 = strlen(local_172);
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_35,local_72,0,uVar8,local_172,sVar7,0,uVar6,0,0);
            Inven_Item::reset(local_72);
          }
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_20);
      }
    }
  }
  return;
}
```

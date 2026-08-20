# _onQuestClear

`_ZN5CUser13_onQuestClearEii`

`CUser::_onQuestClear(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08664412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08664412  _ZN5CUser13_onQuestClearEii
#           CUser::_onQuestClear(int, int)
# range [0x08664412, 0x086645a3]
08664412 +0x000:  push   %ebp
08664413 +0x001:  mov    %esp,%ebp
08664415 +0x003:  push   %edi
08664416 +0x004:  push   %esi
08664417 +0x005:  push   %ebx
08664418 +0x006:  sub    $0x1c,%esp
0866441b +0x009:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08664420 +0x00e:  mov    %eax,(%esp)
08664423 +0x011:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08664428 +0x016:  movl   $0x193,0x4(%esp)
08664430 +0x01e:  mov    %eax,(%esp)
08664433 +0x021:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
08664438 +0x026:  test   %al,%al
0866443a +0x028:  je     0866445f <+0x4d>
0866443c +0x02a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08664441 +0x02f:  mov    %eax,(%esp)
08664444 +0x032:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08664449 +0x037:  mov    0xc(%ebp),%edx
0866444c +0x03a:  mov    %edx,0x8(%esp)
08664450 +0x03e:  mov    0x8(%ebp),%edx
08664453 +0x041:  mov    %edx,0x4(%esp)
08664457 +0x045:  mov    %eax,(%esp)
0866445a +0x048:  call   0810bf00 <_ZN13EventClassify15CEventScriptMng26process_add_quest_count_dbEP5CUseri>  ; EventClassify::CEventScriptMng::process_add_quest_count_db(CUser*, int)
0866445f +0x04d:  cmpl   $0x987,0xc(%ebp)
08664466 +0x054:  jne    08664482 <+0x70>
08664468 +0x056:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0866446f +0x05d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08664474 +0x062:  cmp    $0x47b35a50,%eax
08664479 +0x067:  jg     08664482 <+0x70>
0866447b +0x069:  mov    $0x1,%eax
08664480 +0x06e:  jmp    08664487 <+0x75>
08664482 +0x070:  mov    $0x0,%eax
08664487 +0x075:  test   %al,%al
08664489 +0x077:  je     086644b7 <+0xa5>
0866448b +0x079:  mov    0x8(%ebp),%eax
0866448e +0x07c:  mov    %eax,(%esp)
08664491 +0x07f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08664496 +0x084:  mov    %eax,%ebx
08664498 +0x086:  mov    0x8(%ebp),%eax
0866449b +0x089:  mov    %eax,(%esp)
0866449e +0x08c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086644a3 +0x091:  movl   $0x32,0x8(%esp)
086644ab +0x099:  mov    %ebx,0x4(%esp)
086644af +0x09d:  mov    %eax,(%esp)
086644b2 +0x0a0:  call   0842e856 <_ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE>  ; DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int, SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE)
086644b7 +0x0a5:  cmpl   $0x96f,0xc(%ebp)
086644be +0x0ac:  jne    086644da <+0xc8>
086644c0 +0x0ae:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086644c7 +0x0b5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086644cc +0x0ba:  cmp    $0x478e7050,%eax
086644d1 +0x0bf:  jg     086644da <+0xc8>
086644d3 +0x0c1:  mov    $0x1,%eax
086644d8 +0x0c6:  jmp    086644df <+0xcd>
086644da +0x0c8:  mov    $0x0,%eax
086644df +0x0cd:  test   %al,%al
086644e1 +0x0cf:  je     08664529 <+0x117>
086644e3 +0x0d1:  mov    0x8(%ebp),%eax
086644e6 +0x0d4:  mov    %eax,(%esp)
086644e9 +0x0d7:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086644ee +0x0dc:  mov    %eax,%edi
086644f0 +0x0de:  mov    0x8(%ebp),%eax
086644f3 +0x0e1:  mov    %eax,(%esp)
086644f6 +0x0e4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086644fb +0x0e9:  mov    %eax,%esi
086644fd +0x0eb:  mov    0x8(%ebp),%eax
08664500 +0x0ee:  mov    %eax,(%esp)
08664503 +0x0f1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08664508 +0x0f6:  mov    %eax,%ebx
0866450a +0x0f8:  mov    0x8(%ebp),%eax
0866450d +0x0fb:  mov    %eax,(%esp)
08664510 +0x0fe:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08664515 +0x103:  mov    %edi,0xc(%esp)
08664519 +0x107:  mov    %esi,0x8(%esp)
0866451d +0x10b:  mov    %ebx,0x4(%esp)
08664521 +0x10f:  mov    %eax,(%esp)
08664524 +0x112:  call   08425a02 <_ZN22DB_UpdateHappyBeanInfo11makeRequestEjjjPKc>  ; DB_UpdateHappyBeanInfo::makeRequest(unsigned int, unsigned int, unsigned int, char const*)
08664529 +0x117:  cmpl   $0x970,0xc(%ebp)
08664530 +0x11e:  jne    08664566 <+0x154>
08664532 +0x120:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08664537 +0x125:  movl   $0x13,0x4(%esp)
0866453f +0x12d:  mov    %eax,(%esp)
08664542 +0x130:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08664547 +0x135:  mov    (%eax),%edx
08664549 +0x137:  add    $0x34,%edx
0866454c +0x13a:  mov    (%edx),%edx
0866454e +0x13c:  movl   $0x0,0x4(%esp)
08664556 +0x144:  mov    %eax,(%esp)
08664559 +0x147:  call   *%edx
0866455b +0x149:  test   %al,%al
0866455d +0x14b:  je     08664566 <+0x154>
0866455f +0x14d:  mov    $0x1,%eax
08664564 +0x152:  jmp    0866456b <+0x159>
08664566 +0x154:  mov    $0x0,%eax
0866456b +0x159:  test   %al,%al
0866456d +0x15b:  je     0866459b <+0x189>
0866456f +0x15d:  mov    0x8(%ebp),%eax
08664572 +0x160:  mov    %eax,(%esp)
08664575 +0x163:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866457a +0x168:  mov    %eax,%ebx
0866457c +0x16a:  mov    0x8(%ebp),%eax
0866457f +0x16d:  mov    %eax,(%esp)
08664582 +0x170:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08664587 +0x175:  movl   $0x1,0x8(%esp)
0866458f +0x17d:  mov    %ebx,0x4(%esp)
08664593 +0x181:  mov    %eax,(%esp)
08664596 +0x184:  call   0842e648 <_ZN30DB_Insert0712WinterEventCoupon11makeRequestEjjj>  ; DB_Insert0712WinterEventCoupon::makeRequest(unsigned int, unsigned int, unsigned int)
0866459b +0x189:  add    $0x1c,%esp
0866459e +0x18c:  pop    %ebx
0866459f +0x18d:  pop    %esi
086645a0 +0x18e:  pop    %edi
086645a1 +0x18f:  pop    %ebp
086645a2 +0x190:  ret
086645a3 +0x191:  nop
```

## 反编译 C

```c
// CUser::_onQuestClear @ 0x8664412

/* CUser::_onQuestClear(int, int) */

void CUser::_onQuestClear(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *pCVar3;
  CEventScriptMng *pCVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  
  pCVar3 = (CDataManager *)G_CDataManager();
  pCVar4 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
  cVar2 = EventClassify::CEventScriptMng::is_eventing(pCVar4,0x193);
  if (cVar2 != '\0') {
    pCVar3 = (CDataManager *)G_CDataManager();
    pCVar4 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
    EventClassify::CEventScriptMng::process_add_quest_count_db(pCVar4,(CUser *)param_1,param_2);
  }
  if (param_2 == 0x987) {
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (0x47b35a50 < iVar5) goto LAB_08664482;
    bVar1 = true;
  }
  else {
LAB_08664482:
    bVar1 = false;
  }
  if (bVar1) {
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar7 = get_acc_id((CUser *)param_1);
    DB_InsertArchieveEventLog::makeRequest(uVar7,uVar6,0x32);
  }
  if (param_2 == 0x96f) {
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (0x478e7050 < iVar5) goto LAB_086644da;
    bVar1 = true;
  }
  else {
LAB_086644da:
    bVar1 = false;
  }
  if (bVar1) {
    pcVar8 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar10 = get_acc_id((CUser *)param_1);
    uVar11 = GetUID((CUser *)param_1);
    DB_UpdateHappyBeanInfo::makeRequest(uVar11,uVar10,uVar9,pcVar8);
  }
  if (param_2 == 0x970) {
    piVar12 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x13);
    cVar2 = (**(code **)(*piVar12 + 0x34))(piVar12,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0866456b;
    }
  }
  bVar1 = false;
LAB_0866456b:
  if (bVar1) {
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar10 = get_acc_id((CUser *)param_1);
    DB_Insert0712WinterEventCoupon::makeRequest(uVar10,uVar9,1);
  }
  return;
}
```

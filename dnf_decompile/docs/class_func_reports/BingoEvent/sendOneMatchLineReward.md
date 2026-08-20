# sendOneMatchLineReward

`_ZN10BingoEvent22sendOneMatchLineRewardER5CUser`

`BingoEvent::sendOneMatchLineReward(CUser&)`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080ca3d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca3d4  _ZN10BingoEvent22sendOneMatchLineRewardER5CUser
#           BingoEvent::sendOneMatchLineReward(CUser&)
# range [0x080ca3d4, 0x080ca621]
080ca3d4 +0x000:  push   %ebp
080ca3d5 +0x001:  mov    %esp,%ebp
080ca3d7 +0x003:  push   %esi
080ca3d8 +0x004:  push   %ebx
080ca3d9 +0x005:  sub    $0x1a0,%esp
080ca3df +0x00b:  movl   $0x1,-0x20(%ebp)
080ca3e6 +0x012:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080ca3eb +0x017:  lea    0xb598(%eax),%ecx
080ca3f1 +0x01d:  lea    -0x24(%ebp),%eax
080ca3f4 +0x020:  lea    -0x20(%ebp),%edx
080ca3f7 +0x023:  mov    %edx,0x8(%esp)
080ca3fb +0x027:  mov    %ecx,0x4(%esp)
080ca3ff +0x02b:  mov    %eax,(%esp)
080ca402 +0x02e:  call   080ce89a <_GLOBAL__I__ZN10BingoEventC2Ev+0x36e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36e7
080ca407 +0x033:  sub    $0x4,%esp
080ca40a +0x036:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080ca40f +0x03b:  lea    0xb598(%eax),%edx
080ca415 +0x041:  lea    -0x1c(%ebp),%eax
080ca418 +0x044:  mov    %edx,0x4(%esp)
080ca41c +0x048:  mov    %eax,(%esp)
080ca41f +0x04b:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
080ca424 +0x050:  sub    $0x4,%esp
080ca427 +0x053:  lea    -0x1c(%ebp),%eax
080ca42a +0x056:  mov    %eax,0x4(%esp)
080ca42e +0x05a:  lea    -0x24(%ebp),%eax
080ca431 +0x05d:  mov    %eax,(%esp)
080ca434 +0x060:  call   080ce8c6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3713>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3713
080ca439 +0x065:  test   %al,%al
080ca43b +0x067:  je     080ca46e <+0x9a>
080ca43d +0x069:  movl   $"bingo script error",0x10(%esp)
080ca445 +0x071:  movl   $0xc0,0xc(%esp)
080ca44d +0x079:  movl   $&_ZZN10BingoEvent22sendOneMatchLineRewardER5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080ca455 +0x081:  movl   $"BingoEvent.cpp",0x4(%esp)
080ca45d +0x089:  movl   $0x1,(%esp)
080ca464 +0x090:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080ca469 +0x095:  jmp    080ca617 <+0x243>
080ca46e +0x09a:  lea    -0x24(%ebp),%eax
080ca471 +0x09d:  mov    %eax,(%esp)
080ca474 +0x0a0:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
080ca479 +0x0a5:  mov    0x4(%eax),%eax
080ca47c +0x0a8:  mov    %eax,-0x18(%ebp)
080ca47f +0x0ab:  lea    -0x24(%ebp),%eax
080ca482 +0x0ae:  mov    %eax,(%esp)
080ca485 +0x0b1:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
080ca48a +0x0b6:  mov    0x8(%eax),%eax
080ca48d +0x0b9:  mov    %eax,-0x14(%ebp)
080ca490 +0x0bc:  lea    -0x76(%ebp),%eax
080ca493 +0x0bf:  mov    %eax,(%esp)
080ca496 +0x0c2:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080ca49b +0x0c7:  movl   $0x0,-0x10(%ebp)
080ca4a2 +0x0ce:  cmpl   $0x0,-0x18(%ebp)
080ca4a6 +0x0d2:  jne    080ca4b0 <+0xdc>
080ca4a8 +0x0d4:  mov    -0x14(%ebp),%eax
080ca4ab +0x0d7:  mov    %eax,-0x10(%ebp)
080ca4ae +0x0da:  jmp    080ca52c <+0x158>
080ca4b0 +0x0dc:  cmpl   $0x1,-0x18(%ebp)
080ca4b4 +0x0e0:  jne    080ca4da <+0x106>
080ca4b6 +0x0e2:  movl   $0x1,-0x74(%ebp)
080ca4bd +0x0e9:  movb   $0x2,-0x75(%ebp)
080ca4c1 +0x0ed:  mov    -0x14(%ebp),%eax
080ca4c4 +0x0f0:  mov    %eax,-0x6f(%ebp)
080ca4c7 +0x0f3:  movw   $0x1,-0x6b(%ebp)
080ca4cd +0x0f9:  lea    -0x76(%ebp),%eax
080ca4d0 +0x0fc:  mov    %eax,(%esp)
080ca4d3 +0x0ff:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
080ca4d8 +0x104:  jmp    080ca52c <+0x158>
080ca4da +0x106:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080ca4df +0x10b:  mov    -0x18(%ebp),%edx
080ca4e2 +0x10e:  mov    %edx,0x4(%esp)
080ca4e6 +0x112:  mov    %eax,(%esp)
080ca4e9 +0x115:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080ca4ee +0x11a:  mov    %eax,-0xc(%ebp)
080ca4f1 +0x11d:  cmpl   $0x0,-0xc(%ebp)
080ca4f5 +0x121:  je     080ca616 <+0x242>
080ca4fb +0x127:  mov    -0x18(%ebp),%eax
080ca4fe +0x12a:  mov    %eax,-0x74(%ebp)
080ca501 +0x12d:  mov    -0xc(%ebp),%eax
080ca504 +0x130:  mov    (%eax),%eax
080ca506 +0x132:  add    $0x8,%eax
080ca509 +0x135:  mov    (%eax),%edx
080ca50b +0x137:  lea    -0x76(%ebp),%eax
080ca50e +0x13a:  mov    %eax,0x4(%esp)
080ca512 +0x13e:  mov    -0xc(%ebp),%eax
080ca515 +0x141:  mov    %eax,(%esp)
080ca518 +0x144:  call   *%edx
080ca51a +0x146:  mov    -0x14(%ebp),%eax
080ca51d +0x149:  mov    %eax,0x4(%esp)
080ca521 +0x14d:  lea    -0x76(%ebp),%eax
080ca524 +0x150:  mov    %eax,(%esp)
080ca527 +0x153:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
080ca52c +0x158:  movl   $0x0,0xc(%esp)
080ca534 +0x160:  movl   $"game_server_msg_292",0x8(%esp)
080ca53c +0x168:  movl   $0x4,0x4(%esp)
080ca544 +0x170:  movl   $&g_scriptStringManager_,(%esp)
080ca54b +0x177:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080ca550 +0x17c:  movl   $0x14,0x8(%esp)
080ca558 +0x184:  mov    %eax,0x4(%esp)
080ca55c +0x188:  lea    -0x39(%ebp),%eax
080ca55f +0x18b:  mov    %eax,(%esp)
080ca562 +0x18e:  call   0807d8d0 <_init+0x1c8>
080ca567 +0x193:  movl   $0x0,0xc(%esp)
080ca56f +0x19b:  movl   $"game_server_msg_293",0x8(%esp)
080ca577 +0x1a3:  movl   $0x4,0x4(%esp)
080ca57f +0x1ab:  movl   $&g_scriptStringManager_,(%esp)
080ca586 +0x1b2:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080ca58b +0x1b7:  movl   $0xff,0x8(%esp)
080ca593 +0x1bf:  mov    %eax,0x4(%esp)
080ca597 +0x1c3:  lea    -0x176(%ebp),%eax
080ca59d +0x1c9:  mov    %eax,(%esp)
080ca5a0 +0x1cc:  call   0807d8d0 <_init+0x1c8>
080ca5a5 +0x1d1:  mov    0xc(%ebp),%eax
080ca5a8 +0x1d4:  mov    %eax,(%esp)
080ca5ab +0x1d7:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080ca5b0 +0x1dc:  mov    %eax,%ebx
080ca5b2 +0x1de:  lea    -0x176(%ebp),%eax
080ca5b8 +0x1e4:  mov    %eax,(%esp)
080ca5bb +0x1e7:  call   0807e3b0 <_init+0xca8>
080ca5c0 +0x1ec:  mov    %eax,%esi
080ca5c2 +0x1ee:  mov    0xc(%ebp),%eax
080ca5c5 +0x1f1:  mov    %eax,(%esp)
080ca5c8 +0x1f4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080ca5cd +0x1f9:  mov    -0x10(%ebp),%edx
080ca5d0 +0x1fc:  movl   $0x0,0x24(%esp)
080ca5d8 +0x204:  movl   $0x0,0x20(%esp)
080ca5e0 +0x20c:  mov    %ebx,0x1c(%esp)
080ca5e4 +0x210:  movl   $0x0,0x18(%esp)
080ca5ec +0x218:  mov    %esi,0x14(%esp)
080ca5f0 +0x21c:  lea    -0x176(%ebp),%ecx
080ca5f6 +0x222:  mov    %ecx,0x10(%esp)
080ca5fa +0x226:  mov    %eax,0xc(%esp)
080ca5fe +0x22a:  mov    %edx,0x8(%esp)
080ca602 +0x22e:  lea    -0x76(%ebp),%eax
080ca605 +0x231:  mov    %eax,0x4(%esp)
080ca609 +0x235:  lea    -0x39(%ebp),%eax
080ca60c +0x238:  mov    %eax,(%esp)
080ca60f +0x23b:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
080ca614 +0x240:  jmp    080ca617 <+0x243>
080ca616 +0x242:  nop
080ca617 +0x243:  lea    -0x8(%ebp),%esp
080ca61a +0x246:  add    $0x0,%esp
080ca61d +0x249:  pop    %ebx
080ca61e +0x24a:  pop    %esi
080ca61f +0x24b:  pop    %ebp
080ca620 +0x24c:  ret
080ca621 +0x24d:  nop
```

## 反编译 C

```c
// BingoEvent::sendOneMatchLineReward @ 0x80ca3d4

/* BingoEvent::sendOneMatchLineReward(CUser&) */

void __thiscall BingoEvent::sendOneMatchLineReward(BingoEvent *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  char local_17a [256];
  Inven_Item local_7a;
  undefined1 local_79;
  int local_78;
  int local_73;
  undefined2 local_6f;
  char local_3d [21];
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_28 [4];
  undefined4 local_24;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_24 = 1;
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_28);
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_20);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator==
                    (local_28,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_28);
    local_1c = *(int *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_28);
    local_18 = *(int *)(iVar2 + 8);
    Inven_Item::Inven_Item(&local_7a);
    local_14 = 0;
    if (local_1c == 0) {
      local_14 = local_18;
    }
    else if (local_1c == 1) {
      local_78 = 1;
      local_79 = 2;
      local_73 = local_18;
      local_6f = 1;
      Inven_Item::ResetItemAttr(&local_7a);
    }
    else {
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(this_00,local_1c);
      if (local_10 == (int *)0x0) {
        return;
      }
      local_78 = local_1c;
      (**(code **)(*local_10 + 8))(local_10,&local_7a);
      Inven_Item::set_add_info(&local_7a,local_18);
    }
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_292",(bool *)0x0);
    strncpy(local_3d,pcVar3,0x14);
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_293",(bool *)0x0);
    strncpy(local_17a,pcVar3,0xff);
    uVar4 = CUser::GetServerGroup(param_1);
    sVar5 = strlen(local_17a);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_3d,&local_7a,local_14,uVar6,local_17a,sVar5,0,uVar4,0,0);
  }
  else {
    LogManager::logFormat
              (1,"BingoEvent.cpp","void BingoEvent::sendOneMatchLineReward(CUser&)",0xc0,
               "bingo script error");
  }
  return;
}
```

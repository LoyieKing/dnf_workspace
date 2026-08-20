# sendMaxMatchLineReward

`_ZN10BingoEvent22sendMaxMatchLineRewardER5CUser`

`BingoEvent::sendMaxMatchLineReward(CUser&)`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080ca622` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca622  _ZN10BingoEvent22sendMaxMatchLineRewardER5CUser
#           BingoEvent::sendMaxMatchLineReward(CUser&)
# range [0x080ca622, 0x080ca82b]
080ca622 +0x000:  push   %ebp
080ca623 +0x001:  mov    %esp,%ebp
080ca625 +0x003:  push   %esi
080ca626 +0x004:  push   %ebx
080ca627 +0x005:  sub    $0x1a0,%esp
080ca62d +0x00b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080ca632 +0x010:  lea    0xb598(%eax),%edx
080ca638 +0x016:  lea    -0x1c(%ebp),%eax
080ca63b +0x019:  movl   $&_ZL13kMaxMatchLine,0x8(%esp)
080ca643 +0x021:  mov    %edx,0x4(%esp)
080ca647 +0x025:  mov    %eax,(%esp)
080ca64a +0x028:  call   080ce89a <_GLOBAL__I__ZN10BingoEventC2Ev+0x36e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36e7
080ca64f +0x02d:  sub    $0x4,%esp
080ca652 +0x030:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080ca657 +0x035:  lea    0xb598(%eax),%edx
080ca65d +0x03b:  lea    -0x18(%ebp),%eax
080ca660 +0x03e:  mov    %edx,0x4(%esp)
080ca664 +0x042:  mov    %eax,(%esp)
080ca667 +0x045:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
080ca66c +0x04a:  sub    $0x4,%esp
080ca66f +0x04d:  lea    -0x18(%ebp),%eax
080ca672 +0x050:  mov    %eax,0x4(%esp)
080ca676 +0x054:  lea    -0x1c(%ebp),%eax
080ca679 +0x057:  mov    %eax,(%esp)
080ca67c +0x05a:  call   080ce8c6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3713>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3713
080ca681 +0x05f:  test   %al,%al
080ca683 +0x061:  je     080ca6b6 <+0x94>
080ca685 +0x063:  movl   $"bingo script error",0x10(%esp)
080ca68d +0x06b:  movl   $0xef,0xc(%esp)
080ca695 +0x073:  movl   $&_ZZN10BingoEvent22sendMaxMatchLineRewardER5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080ca69d +0x07b:  movl   $"BingoEvent.cpp",0x4(%esp)
080ca6a5 +0x083:  movl   $0x1,(%esp)
080ca6ac +0x08a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080ca6b1 +0x08f:  jmp    080ca821 <+0x1ff>
080ca6b6 +0x094:  lea    -0x1c(%ebp),%eax
080ca6b9 +0x097:  mov    %eax,(%esp)
080ca6bc +0x09a:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
080ca6c1 +0x09f:  mov    0x4(%eax),%eax
080ca6c4 +0x0a2:  mov    %eax,-0x14(%ebp)
080ca6c7 +0x0a5:  lea    -0x1c(%ebp),%eax
080ca6ca +0x0a8:  mov    %eax,(%esp)
080ca6cd +0x0ab:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
080ca6d2 +0x0b0:  mov    0x8(%eax),%eax
080ca6d5 +0x0b3:  mov    %eax,-0x10(%ebp)
080ca6d8 +0x0b6:  lea    -0x6e(%ebp),%eax
080ca6db +0x0b9:  mov    %eax,(%esp)
080ca6de +0x0bc:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080ca6e3 +0x0c1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080ca6e8 +0x0c6:  mov    -0x14(%ebp),%edx
080ca6eb +0x0c9:  mov    %edx,0x4(%esp)
080ca6ef +0x0cd:  mov    %eax,(%esp)
080ca6f2 +0x0d0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080ca6f7 +0x0d5:  mov    %eax,-0xc(%ebp)
080ca6fa +0x0d8:  cmpl   $0x0,-0xc(%ebp)
080ca6fe +0x0dc:  je     080ca820 <+0x1fe>
080ca704 +0x0e2:  mov    -0x14(%ebp),%eax
080ca707 +0x0e5:  mov    %eax,-0x6c(%ebp)
080ca70a +0x0e8:  mov    -0xc(%ebp),%eax
080ca70d +0x0eb:  mov    (%eax),%eax
080ca70f +0x0ed:  add    $0x8,%eax
080ca712 +0x0f0:  mov    (%eax),%edx
080ca714 +0x0f2:  lea    -0x6e(%ebp),%eax
080ca717 +0x0f5:  mov    %eax,0x4(%esp)
080ca71b +0x0f9:  mov    -0xc(%ebp),%eax
080ca71e +0x0fc:  mov    %eax,(%esp)
080ca721 +0x0ff:  call   *%edx
080ca723 +0x101:  mov    -0x10(%ebp),%eax
080ca726 +0x104:  mov    %eax,0x4(%esp)
080ca72a +0x108:  lea    -0x6e(%ebp),%eax
080ca72d +0x10b:  mov    %eax,(%esp)
080ca730 +0x10e:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
080ca735 +0x113:  movl   $0x0,0xc(%esp)
080ca73d +0x11b:  movl   $"game_server_msg_292",0x8(%esp)
080ca745 +0x123:  movl   $0x4,0x4(%esp)
080ca74d +0x12b:  movl   $&g_scriptStringManager_,(%esp)
080ca754 +0x132:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080ca759 +0x137:  movl   $0x14,0x8(%esp)
080ca761 +0x13f:  mov    %eax,0x4(%esp)
080ca765 +0x143:  lea    -0x31(%ebp),%eax
080ca768 +0x146:  mov    %eax,(%esp)
080ca76b +0x149:  call   0807d8d0 <_init+0x1c8>
080ca770 +0x14e:  movl   $0x0,0xc(%esp)
080ca778 +0x156:  movl   $"game_server_msg_294",0x8(%esp)
080ca780 +0x15e:  movl   $0x4,0x4(%esp)
080ca788 +0x166:  movl   $&g_scriptStringManager_,(%esp)
080ca78f +0x16d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080ca794 +0x172:  movl   $0xff,0x8(%esp)
080ca79c +0x17a:  mov    %eax,0x4(%esp)
080ca7a0 +0x17e:  lea    -0x16e(%ebp),%eax
080ca7a6 +0x184:  mov    %eax,(%esp)
080ca7a9 +0x187:  call   0807d8d0 <_init+0x1c8>
080ca7ae +0x18c:  mov    0xc(%ebp),%eax
080ca7b1 +0x18f:  mov    %eax,(%esp)
080ca7b4 +0x192:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080ca7b9 +0x197:  mov    %eax,%ebx
080ca7bb +0x199:  lea    -0x16e(%ebp),%eax
080ca7c1 +0x19f:  mov    %eax,(%esp)
080ca7c4 +0x1a2:  call   0807e3b0 <_init+0xca8>
080ca7c9 +0x1a7:  mov    %eax,%esi
080ca7cb +0x1a9:  mov    0xc(%ebp),%eax
080ca7ce +0x1ac:  mov    %eax,(%esp)
080ca7d1 +0x1af:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080ca7d6 +0x1b4:  movl   $0x0,0x24(%esp)
080ca7de +0x1bc:  movl   $0x0,0x20(%esp)
080ca7e6 +0x1c4:  mov    %ebx,0x1c(%esp)
080ca7ea +0x1c8:  movl   $0x0,0x18(%esp)
080ca7f2 +0x1d0:  mov    %esi,0x14(%esp)
080ca7f6 +0x1d4:  lea    -0x16e(%ebp),%edx
080ca7fc +0x1da:  mov    %edx,0x10(%esp)
080ca800 +0x1de:  mov    %eax,0xc(%esp)
080ca804 +0x1e2:  movl   $0x0,0x8(%esp)
080ca80c +0x1ea:  lea    -0x6e(%ebp),%eax
080ca80f +0x1ed:  mov    %eax,0x4(%esp)
080ca813 +0x1f1:  lea    -0x31(%ebp),%eax
080ca816 +0x1f4:  mov    %eax,(%esp)
080ca819 +0x1f7:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
080ca81e +0x1fc:  jmp    080ca821 <+0x1ff>
080ca820 +0x1fe:  nop
080ca821 +0x1ff:  lea    -0x8(%ebp),%esp
080ca824 +0x202:  add    $0x0,%esp
080ca827 +0x205:  pop    %ebx
080ca828 +0x206:  pop    %esi
080ca829 +0x207:  pop    %ebp
080ca82a +0x208:  ret
080ca82b +0x209:  nop
```

## 反编译 C

```c
// BingoEvent::sendMaxMatchLineReward @ 0x80ca622

/* BingoEvent::sendMaxMatchLineReward(CUser&) */

void __thiscall BingoEvent::sendMaxMatchLineReward(BingoEvent *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  char local_172 [256];
  Inven_Item local_72 [2];
  int local_70;
  char local_35 [21];
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_20 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_1c [4];
  int local_18;
  int local_14;
  int *local_10;
  
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_20);
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_20);
    local_18 = *(int *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_20);
    local_14 = *(int *)(iVar2 + 8);
    Inven_Item::Inven_Item(local_72);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,local_18);
    if (local_10 != (int *)0x0) {
      local_70 = local_18;
      (**(code **)(*local_10 + 8))(local_10,local_72);
      Inven_Item::set_add_info(local_72,local_14);
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_292",(bool *)0x0);
      strncpy(local_35,pcVar3,0x14);
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_294",(bool *)0x0);
      strncpy(local_172,pcVar3,0xff);
      uVar4 = CUser::GetServerGroup(param_1);
      sVar5 = strlen(local_172);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_35,local_72,0,uVar6,local_172,sVar5,0,uVar4,0,0);
    }
  }
  else {
    LogManager::logFormat
              (1,"BingoEvent.cpp","void BingoEvent::sendMaxMatchLineReward(CUser&)",0xef,
               "bingo script error");
  }
  return;
}
```

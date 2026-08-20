# dispatch_sig

`_ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci`

`InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterCheckStayTimeEvent` | `0x08160a42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160a42  _ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci
#           InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int)
# range [0x08160a42, 0x08160c49]
08160a42 +0x000:  push   %ebp
08160a43 +0x001:  mov    %esp,%ebp
08160a45 +0x003:  push   %esi
08160a46 +0x004:  push   %ebx
08160a47 +0x005:  sub    $0xa0,%esp
08160a4d +0x00b:  mov    0x10(%ebp),%eax
08160a50 +0x00e:  mov    %eax,-0x18(%ebp)
08160a53 +0x011:  cmpl   $0x0,-0x18(%ebp)
08160a57 +0x015:  jne    08160a99 <+0x57>
08160a59 +0x017:  movl   $0x5,0xc(%esp)
08160a61 +0x01f:  movl   $0xc9,0x8(%esp)
08160a69 +0x027:  movl   $&_ZZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
08160a71 +0x02f:  lea    -0x38(%ebp),%eax
08160a74 +0x032:  mov    %eax,(%esp)
08160a77 +0x035:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08160a7c +0x03a:  movl   $"[Taiwan, StayEvent] SigStayTimeEvent is null.",0x4(%esp)
08160a84 +0x042:  lea    -0x38(%ebp),%eax
08160a87 +0x045:  mov    %eax,(%esp)
08160a8a +0x048:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08160a8f +0x04d:  mov    $0xca,%eax
08160a94 +0x052:  jmp    08160c40 <+0x1fe>
08160a99 +0x057:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08160a9e +0x05c:  movl   $0x9f,0x4(%esp)
08160aa6 +0x064:  mov    %eax,(%esp)
08160aa9 +0x067:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08160aae +0x06c:  mov    (%eax),%edx
08160ab0 +0x06e:  add    $0x34,%edx
08160ab3 +0x071:  mov    (%edx),%edx
08160ab5 +0x073:  movl   $0x0,0x4(%esp)
08160abd +0x07b:  mov    %eax,(%esp)
08160ac0 +0x07e:  call   *%edx
08160ac2 +0x080:  xor    $0x1,%eax
08160ac5 +0x083:  test   %al,%al
08160ac7 +0x085:  je     08160ad3 <+0x91>
08160ac9 +0x087:  mov    $0x0,%eax
08160ace +0x08c:  jmp    08160c40 <+0x1fe>
08160ad3 +0x091:  mov    &_ZN14CEventStayTime12kRewardItem_E,%eax
08160ad8 +0x096:  mov    %eax,%ebx
08160ada +0x098:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08160adf +0x09d:  mov    %ebx,0x4(%esp)
08160ae3 +0x0a1:  mov    %eax,(%esp)
08160ae6 +0x0a4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08160aeb +0x0a9:  mov    %eax,-0x14(%ebp)
08160aee +0x0ac:  cmpl   $0x0,-0x14(%ebp)
08160af2 +0x0b0:  jne    08160b3e <+0xfc>
08160af4 +0x0b2:  mov    &_ZN14CEventStayTime12kRewardItem_E,%ebx
08160afa +0x0b8:  movl   $0x5,0xc(%esp)
08160b02 +0x0c0:  movl   $0xd3,0x8(%esp)
08160b0a +0x0c8:  movl   $&_ZZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
08160b12 +0x0d0:  lea    -0x28(%ebp),%eax
08160b15 +0x0d3:  mov    %eax,(%esp)
08160b18 +0x0d6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08160b1d +0x0db:  mov    %ebx,0x8(%esp)
08160b21 +0x0df:  movl   $"[Taiwan, StayEvent] Invalid item index. (%u)",0x4(%esp)
08160b29 +0x0e7:  lea    -0x28(%ebp),%eax
08160b2c +0x0ea:  mov    %eax,(%esp)
08160b2f +0x0ed:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08160b34 +0x0f2:  mov    $0x0,%eax
08160b39 +0x0f7:  jmp    08160c40 <+0x1fe>
08160b3e +0x0fc:  lea    -0x75(%ebp),%eax
08160b41 +0x0ff:  mov    %eax,(%esp)
08160b44 +0x102:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08160b49 +0x107:  mov    -0x14(%ebp),%eax
08160b4c +0x10a:  mov    %eax,(%esp)
08160b4f +0x10d:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08160b54 +0x112:  mov    %eax,-0x73(%ebp)
08160b57 +0x115:  mov    -0x14(%ebp),%eax
08160b5a +0x118:  mov    (%eax),%eax
08160b5c +0x11a:  add    $0x8,%eax
08160b5f +0x11d:  mov    (%eax),%edx
08160b61 +0x11f:  lea    -0x75(%ebp),%eax
08160b64 +0x122:  mov    %eax,0x4(%esp)
08160b68 +0x126:  mov    -0x14(%ebp),%eax
08160b6b +0x129:  mov    %eax,(%esp)
08160b6e +0x12c:  call   *%edx
08160b70 +0x12e:  movl   $0x1,0x4(%esp)
08160b78 +0x136:  lea    -0x75(%ebp),%eax
08160b7b +0x139:  mov    %eax,(%esp)
08160b7e +0x13c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08160b83 +0x141:  movl   $0x0,0xc(%esp)
08160b8b +0x149:  movl   $"tw_ccb_stress_title_01",0x8(%esp)
08160b93 +0x151:  movl   $0x4,0x4(%esp)
08160b9b +0x159:  movl   $&g_scriptStringManager_,(%esp)
08160ba2 +0x160:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08160ba7 +0x165:  mov    %eax,-0x10(%ebp)
08160baa +0x168:  movl   $0x0,0xc(%esp)
08160bb2 +0x170:  movl   $"tw_ccb_stress_mail_01",0x8(%esp)
08160bba +0x178:  movl   $0x4,0x4(%esp)
08160bc2 +0x180:  movl   $&g_scriptStringManager_,(%esp)
08160bc9 +0x187:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08160bce +0x18c:  mov    %eax,-0xc(%ebp)
08160bd1 +0x18f:  mov    0xc(%ebp),%eax
08160bd4 +0x192:  mov    %eax,(%esp)
08160bd7 +0x195:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08160bdc +0x19a:  mov    %eax,%ebx
08160bde +0x19c:  mov    -0xc(%ebp),%eax
08160be1 +0x19f:  mov    %eax,(%esp)
08160be4 +0x1a2:  call   0807e3b0 <_init+0xca8>
08160be9 +0x1a7:  mov    %eax,%esi
08160beb +0x1a9:  mov    0xc(%ebp),%eax
08160bee +0x1ac:  mov    %eax,(%esp)
08160bf1 +0x1af:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08160bf6 +0x1b4:  movl   $0x0,0x24(%esp)
08160bfe +0x1bc:  movl   $0x0,0x20(%esp)
08160c06 +0x1c4:  mov    %ebx,0x1c(%esp)
08160c0a +0x1c8:  movl   $0xe,0x18(%esp)
08160c12 +0x1d0:  mov    %esi,0x14(%esp)
08160c16 +0x1d4:  mov    -0xc(%ebp),%edx
08160c19 +0x1d7:  mov    %edx,0x10(%esp)
08160c1d +0x1db:  mov    %eax,0xc(%esp)
08160c21 +0x1df:  movl   $0x0,0x8(%esp)
08160c29 +0x1e7:  lea    -0x75(%ebp),%eax
08160c2c +0x1ea:  mov    %eax,0x4(%esp)
08160c30 +0x1ee:  mov    -0x10(%ebp),%eax
08160c33 +0x1f1:  mov    %eax,(%esp)
08160c36 +0x1f4:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08160c3b +0x1f9:  mov    $0x0,%eax
08160c40 +0x1fe:  add    $0xa0,%esp
08160c46 +0x204:  pop    %ebx
08160c47 +0x205:  pop    %esi
08160c48 +0x206:  pop    %ebp
08160c49 +0x207:  ret
```

## 反编译 C

```c
// InterCheckStayTimeEvent::dispatch_sig @ 0x8160a42

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int) */

undefined4 InterCheckStayTimeEvent::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  CDataManager *this;
  size_t sVar5;
  undefined4 uVar6;
  Inven_Item local_79 [2];
  undefined4 local_77;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CItem *local_18;
  undefined4 local_14;
  char *local_10;
  
  local_1c = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_3c,
                       "virtual int InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int)",0xc9,
                       5);
    cMyTrace::operator()(local_3c,"[Taiwan, StayEvent] SigStayTimeEvent is null.");
    uVar3 = 0xca;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9f);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    iVar1 = _kRewardItem_;
    if (cVar2 == '\x01') {
      this = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(this,iVar1);
      iVar1 = _kRewardItem_;
      if (local_18 == (CItem *)0x0) {
        cMyTrace::cMyTrace(local_2c,
                           "virtual int InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int)",
                           0xd3,5);
        cMyTrace::operator()(local_2c,"[Taiwan, StayEvent] Invalid item index. (%u)",iVar1);
        uVar3 = 0;
      }
      else {
        Inven_Item::Inven_Item(local_79);
        local_77 = CItem::get_index(local_18);
        (**(code **)(*(int *)local_18 + 8))(local_18,local_79);
        Inven_Item::set_add_info(local_79,1);
        local_14 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "tw_ccb_stress_title_01",(bool *)0x0);
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "tw_ccb_stress_mail_01",(bool *)0x0);
        uVar3 = CUser::GetServerGroup((CUser *)param_2);
        sVar5 = strlen(local_10);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_14,local_79,0,uVar6,local_10,sVar5,0xe,uVar3,0,0);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

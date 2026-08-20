# dispatch_sig

`_ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci`

`InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterInsertGiveBoxEventReward` | `0x08161a8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08161a8a  _ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci
#           InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int)
# range [0x08161a8a, 0x08161c91]
08161a8a +0x000:  push   %ebp
08161a8b +0x001:  mov    %esp,%ebp
08161a8d +0x003:  push   %esi
08161a8e +0x004:  push   %ebx
08161a8f +0x005:  sub    $0xa0,%esp
08161a95 +0x00b:  mov    0x10(%ebp),%eax
08161a98 +0x00e:  mov    %eax,-0x18(%ebp)
08161a9b +0x011:  cmpl   $0x0,-0x18(%ebp)
08161a9f +0x015:  jne    08161ae1 <+0x57>
08161aa1 +0x017:  movl   $0x5,0xc(%esp)
08161aa9 +0x01f:  movl   $0x1dc,0x8(%esp)
08161ab1 +0x027:  movl   $&_ZZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
08161ab9 +0x02f:  lea    -0x38(%ebp),%eax
08161abc +0x032:  mov    %eax,(%esp)
08161abf +0x035:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08161ac4 +0x03a:  movl   $"[Taiwan, GiveMeBoxEvent] msg is null.",0x4(%esp)
08161acc +0x042:  lea    -0x38(%ebp),%eax
08161acf +0x045:  mov    %eax,(%esp)
08161ad2 +0x048:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08161ad7 +0x04d:  mov    $0x1dd,%eax
08161adc +0x052:  jmp    08161c88 <+0x1fe>
08161ae1 +0x057:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08161ae6 +0x05c:  movl   $0xa5,0x4(%esp)
08161aee +0x064:  mov    %eax,(%esp)
08161af1 +0x067:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08161af6 +0x06c:  mov    (%eax),%edx
08161af8 +0x06e:  add    $0x34,%edx
08161afb +0x071:  mov    (%edx),%edx
08161afd +0x073:  movl   $0x0,0x4(%esp)
08161b05 +0x07b:  mov    %eax,(%esp)
08161b08 +0x07e:  call   *%edx
08161b0a +0x080:  xor    $0x1,%eax
08161b0d +0x083:  test   %al,%al
08161b0f +0x085:  je     08161b1b <+0x91>
08161b11 +0x087:  mov    $0x0,%eax
08161b16 +0x08c:  jmp    08161c88 <+0x1fe>
08161b1b +0x091:  mov    &_ZN14EventGiveMeBox12kRewardItem_E,%eax
08161b20 +0x096:  mov    %eax,%ebx
08161b22 +0x098:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08161b27 +0x09d:  mov    %ebx,0x4(%esp)
08161b2b +0x0a1:  mov    %eax,(%esp)
08161b2e +0x0a4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08161b33 +0x0a9:  mov    %eax,-0x14(%ebp)
08161b36 +0x0ac:  cmpl   $0x0,-0x14(%ebp)
08161b3a +0x0b0:  jne    08161b86 <+0xfc>
08161b3c +0x0b2:  mov    &_ZN14EventGiveMeBox12kRewardItem_E,%ebx
08161b42 +0x0b8:  movl   $0x5,0xc(%esp)
08161b4a +0x0c0:  movl   $0x1e6,0x8(%esp)
08161b52 +0x0c8:  movl   $&_ZZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
08161b5a +0x0d0:  lea    -0x28(%ebp),%eax
08161b5d +0x0d3:  mov    %eax,(%esp)
08161b60 +0x0d6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08161b65 +0x0db:  mov    %ebx,0x8(%esp)
08161b69 +0x0df:  movl   $"[Taiwan, GiveMeBoxEvent] Invalid item index. (%u)",0x4(%esp)
08161b71 +0x0e7:  lea    -0x28(%ebp),%eax
08161b74 +0x0ea:  mov    %eax,(%esp)
08161b77 +0x0ed:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08161b7c +0x0f2:  mov    $0x0,%eax
08161b81 +0x0f7:  jmp    08161c88 <+0x1fe>
08161b86 +0x0fc:  lea    -0x75(%ebp),%eax
08161b89 +0x0ff:  mov    %eax,(%esp)
08161b8c +0x102:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08161b91 +0x107:  mov    -0x14(%ebp),%eax
08161b94 +0x10a:  mov    %eax,(%esp)
08161b97 +0x10d:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08161b9c +0x112:  mov    %eax,-0x73(%ebp)
08161b9f +0x115:  mov    -0x14(%ebp),%eax
08161ba2 +0x118:  mov    (%eax),%eax
08161ba4 +0x11a:  add    $0x8,%eax
08161ba7 +0x11d:  mov    (%eax),%edx
08161ba9 +0x11f:  lea    -0x75(%ebp),%eax
08161bac +0x122:  mov    %eax,0x4(%esp)
08161bb0 +0x126:  mov    -0x14(%ebp),%eax
08161bb3 +0x129:  mov    %eax,(%esp)
08161bb6 +0x12c:  call   *%edx
08161bb8 +0x12e:  movl   $0x1,0x4(%esp)
08161bc0 +0x136:  lea    -0x75(%ebp),%eax
08161bc3 +0x139:  mov    %eax,(%esp)
08161bc6 +0x13c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08161bcb +0x141:  movl   $0x0,0xc(%esp)
08161bd3 +0x149:  movl   $"tw_givemebox2_title",0x8(%esp)
08161bdb +0x151:  movl   $0x4,0x4(%esp)
08161be3 +0x159:  movl   $&g_scriptStringManager_,(%esp)
08161bea +0x160:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08161bef +0x165:  mov    %eax,-0x10(%ebp)
08161bf2 +0x168:  movl   $0x0,0xc(%esp)
08161bfa +0x170:  movl   $"tw_givemebox2_mail",0x8(%esp)
08161c02 +0x178:  movl   $0x4,0x4(%esp)
08161c0a +0x180:  movl   $&g_scriptStringManager_,(%esp)
08161c11 +0x187:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08161c16 +0x18c:  mov    %eax,-0xc(%ebp)
08161c19 +0x18f:  mov    0xc(%ebp),%eax
08161c1c +0x192:  mov    %eax,(%esp)
08161c1f +0x195:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08161c24 +0x19a:  mov    %eax,%ebx
08161c26 +0x19c:  mov    -0xc(%ebp),%eax
08161c29 +0x19f:  mov    %eax,(%esp)
08161c2c +0x1a2:  call   0807e3b0 <_init+0xca8>
08161c31 +0x1a7:  mov    %eax,%esi
08161c33 +0x1a9:  mov    0xc(%ebp),%eax
08161c36 +0x1ac:  mov    %eax,(%esp)
08161c39 +0x1af:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08161c3e +0x1b4:  movl   $0x0,0x24(%esp)
08161c46 +0x1bc:  movl   $0x0,0x20(%esp)
08161c4e +0x1c4:  mov    %ebx,0x1c(%esp)
08161c52 +0x1c8:  movl   $0xe,0x18(%esp)
08161c5a +0x1d0:  mov    %esi,0x14(%esp)
08161c5e +0x1d4:  mov    -0xc(%ebp),%edx
08161c61 +0x1d7:  mov    %edx,0x10(%esp)
08161c65 +0x1db:  mov    %eax,0xc(%esp)
08161c69 +0x1df:  movl   $0x0,0x8(%esp)
08161c71 +0x1e7:  lea    -0x75(%ebp),%eax
08161c74 +0x1ea:  mov    %eax,0x4(%esp)
08161c78 +0x1ee:  mov    -0x10(%ebp),%eax
08161c7b +0x1f1:  mov    %eax,(%esp)
08161c7e +0x1f4:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08161c83 +0x1f9:  mov    $0x0,%eax
08161c88 +0x1fe:  add    $0xa0,%esp
08161c8e +0x204:  pop    %ebx
08161c8f +0x205:  pop    %esi
08161c90 +0x206:  pop    %ebp
08161c91 +0x207:  ret
```

## 反编译 C

```c
// InterInsertGiveBoxEventReward::dispatch_sig @ 0x8161a8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int) */

undefined4 InterInsertGiveBoxEventReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                       "virtual int InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int)"
                       ,0x1dc,5);
    cMyTrace::operator()(local_3c,"[Taiwan, GiveMeBoxEvent] msg is null.");
    uVar3 = 0x1dd;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa5);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    iVar1 = _kRewardItem_;
    if (cVar2 == '\x01') {
      this = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(this,iVar1);
      iVar1 = _kRewardItem_;
      if (local_18 == (CItem *)0x0) {
        cMyTrace::cMyTrace(local_2c,
                           "virtual int InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int)"
                           ,0x1e6,5);
        cMyTrace::operator()(local_2c,"[Taiwan, GiveMeBoxEvent] Invalid item index. (%u)",iVar1);
        uVar3 = 0;
      }
      else {
        Inven_Item::Inven_Item(local_79);
        local_77 = CItem::get_index(local_18);
        (**(code **)(*(int *)local_18 + 8))(local_18,local_79);
        Inven_Item::set_add_info(local_79,1);
        local_14 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "tw_givemebox2_title",(bool *)0x0);
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "tw_givemebox2_mail",(bool *)0x0);
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

# _onCreateCharacter

`_ZN5CUser18_onCreateCharacterEjPcc`

`CUser::_onCreateCharacter(unsigned int, char*, char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a432` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a432  _ZN5CUser18_onCreateCharacterEjPcc
#           CUser::_onCreateCharacter(unsigned int, char*, char)
# range [0x0864a432, 0x0864a5a9]
0864a432 +0x000:  push   %ebp
0864a433 +0x001:  mov    %esp,%ebp
0864a435 +0x003:  sub    $0x1a8,%esp
0864a43b +0x009:  mov    0x14(%ebp),%eax
0864a43e +0x00c:  mov    %al,-0x16c(%ebp)
0864a444 +0x012:  cmpb   $0x4,-0x16c(%ebp)
0864a44b +0x019:  jne    0864a588 <+0x156>
0864a451 +0x01f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0864a458 +0x026:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0864a45d +0x02b:  cmp    $0x4936f350,%eax
0864a462 +0x030:  setle  %al
0864a465 +0x033:  test   %al,%al
0864a467 +0x035:  je     0864a588 <+0x156>
0864a46d +0x03b:  lea    -0x5a(%ebp),%eax
0864a470 +0x03e:  mov    %eax,(%esp)
0864a473 +0x041:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0864a478 +0x046:  movl   $0x1d19,-0x58(%ebp)
0864a47f +0x04d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864a484 +0x052:  mov    0xc(%eax),%eax
0864a487 +0x055:  movl   $0x1,0xc(%esp)
0864a48f +0x05d:  lea    -0x5a(%ebp),%edx
0864a492 +0x060:  mov    %edx,0x8(%esp)
0864a496 +0x064:  movl   $0x3,0x4(%esp)
0864a49e +0x06c:  mov    %eax,(%esp)
0864a4a1 +0x06f:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0864a4a6 +0x074:  mov    -0x58(%ebp),%eax
0864a4a9 +0x077:  cmp    $0xffffffff,%eax
0864a4ac +0x07a:  je     0864a5a7 <+0x175>
0864a4b2 +0x080:  movl   $0x0,0xc(%esp)
0864a4ba +0x088:  movl   $"game_server_msg_56",0x8(%esp)
0864a4c2 +0x090:  movl   $0x4,0x4(%esp)
0864a4ca +0x098:  movl   $&g_scriptStringManager_,(%esp)
0864a4d1 +0x09f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0864a4d6 +0x0a4:  movl   $0x14,0x8(%esp)
0864a4de +0x0ac:  mov    %eax,0x4(%esp)
0864a4e2 +0x0b0:  lea    -0x1d(%ebp),%eax
0864a4e5 +0x0b3:  mov    %eax,(%esp)
0864a4e8 +0x0b6:  call   0807d8d0 <_init+0x1c8>
0864a4ed +0x0bb:  movl   $0x0,0xc(%esp)
0864a4f5 +0x0c3:  movl   $"game_server_msg_57",0x8(%esp)
0864a4fd +0x0cb:  movl   $0x4,0x4(%esp)
0864a505 +0x0d3:  movl   $&g_scriptStringManager_,(%esp)
0864a50c +0x0da:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0864a511 +0x0df:  movl   $0xff,0x8(%esp)
0864a519 +0x0e7:  mov    %eax,0x4(%esp)
0864a51d +0x0eb:  lea    -0x15a(%ebp),%eax
0864a523 +0x0f1:  mov    %eax,(%esp)
0864a526 +0x0f4:  call   0807d8d0 <_init+0x1c8>
0864a52b +0x0f9:  lea    -0x15a(%ebp),%eax
0864a531 +0x0ff:  mov    %eax,(%esp)
0864a534 +0x102:  call   0807e3b0 <_init+0xca8>
0864a539 +0x107:  movl   $0x0,0x24(%esp)
0864a541 +0x10f:  movl   $0x0,0x20(%esp)
0864a549 +0x117:  movl   $0x0,0x1c(%esp)
0864a551 +0x11f:  movl   $0x0,0x18(%esp)
0864a559 +0x127:  mov    %eax,0x14(%esp)
0864a55d +0x12b:  lea    -0x15a(%ebp),%eax
0864a563 +0x131:  mov    %eax,0x10(%esp)
0864a567 +0x135:  mov    0xc(%ebp),%eax
0864a56a +0x138:  mov    %eax,0xc(%esp)
0864a56e +0x13c:  movl   $0x0,0x8(%esp)
0864a576 +0x144:  lea    -0x5a(%ebp),%eax
0864a579 +0x147:  mov    %eax,0x4(%esp)
0864a57d +0x14b:  lea    -0x1d(%ebp),%eax
0864a580 +0x14e:  mov    %eax,(%esp)
0864a583 +0x151:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0864a588 +0x156:  movsbl -0x16c(%ebp),%eax
0864a58f +0x15d:  mov    %eax,0x8(%esp)
0864a593 +0x161:  mov    0xc(%ebp),%eax
0864a596 +0x164:  mov    %eax,0x4(%esp)
0864a59a +0x168:  mov    0x8(%ebp),%eax
0864a59d +0x16b:  mov    %eax,(%esp)
0864a5a0 +0x16e:  call   0864a5aa <_ZN5CUser24_processUnlimitChallengeEjc>  ; CUser::_processUnlimitChallenge(unsigned int, char)
0864a5a5 +0x173:  jmp    0864a5a8 <+0x176>
0864a5a7 +0x175:  nop
0864a5a8 +0x176:  leave
0864a5a9 +0x177:  ret
```

## 反编译 C

```c
// CUser::_onCreateCharacter @ 0x864a432

/* CUser::_onCreateCharacter(unsigned int, char*, char) */

void __thiscall CUser::_onCreateCharacter(CUser *this,uint param_1,char *param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char local_15e [256];
  Inven_Item local_5e [2];
  int local_5c;
  char local_21 [29];
  
  if ((param_3 == '\x04') &&
     (iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), iVar1 < 0x4936f351))
  {
    Inven_Item::Inven_Item(local_5e);
    local_5c = 0x1d19;
    iVar1 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar1 + 0xc),3,local_5e,1);
    if (local_5c == -1) {
      return;
    }
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_56",(bool *)0x0);
    strncpy(local_21,pcVar2,0x14);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_57",(bool *)0x0);
    strncpy(local_15e,pcVar2,0xff);
    sVar3 = strlen(local_15e);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_21,local_5e,0,param_1,local_15e,sVar3,0,0,0,0);
  }
  _processUnlimitChallenge(this,param_1,param_3);
  return;
}
```

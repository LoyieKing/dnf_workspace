# SendOnTimeRewardByMail

`_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj`

`Inter_OnTimeEventAckReward::SendOnTimeRewardByMail(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Inter_OnTimeEventAckReward` | `0x084e1578` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e1578  _ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj
#           Inter_OnTimeEventAckReward::SendOnTimeRewardByMail(unsigned int, unsigned int, unsigned int)
# range [0x084e1578, 0x084e16f3]
084e1578 +0x000:  push   %ebp
084e1579 +0x001:  mov    %esp,%ebp
084e157b +0x003:  push   %ebx
084e157c +0x004:  sub    $0x194,%esp
084e1582 +0x00a:  mov    0x10(%ebp),%ebx
084e1585 +0x00d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e158a +0x012:  mov    %ebx,0x4(%esp)
084e158e +0x016:  mov    %eax,(%esp)
084e1591 +0x019:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084e1596 +0x01e:  mov    %eax,-0xc(%ebp)
084e1599 +0x021:  cmpl   $0x0,-0xc(%ebp)
084e159d +0x025:  je     084e16e7 <+0x16f>
084e15a3 +0x02b:  lea    -0x5e(%ebp),%eax
084e15a6 +0x02e:  mov    %eax,(%esp)
084e15a9 +0x031:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084e15ae +0x036:  mov    0x10(%ebp),%eax
084e15b1 +0x039:  mov    %eax,-0x5c(%ebp)
084e15b4 +0x03c:  mov    0x14(%ebp),%ebx
084e15b7 +0x03f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e15bc +0x044:  mov    0xc(%eax),%eax
084e15bf +0x047:  mov    %ebx,0xc(%esp)
084e15c3 +0x04b:  lea    -0x5e(%ebp),%edx
084e15c6 +0x04e:  mov    %edx,0x8(%esp)
084e15ca +0x052:  movl   $0x0,0x4(%esp)
084e15d2 +0x05a:  mov    %eax,(%esp)
084e15d5 +0x05d:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
084e15da +0x062:  mov    -0x5c(%ebp),%eax
084e15dd +0x065:  test   %eax,%eax
084e15df +0x067:  jne    084e15f0 <+0x78>
084e15e1 +0x069:  lea    -0x5e(%ebp),%eax
084e15e4 +0x06c:  mov    %eax,(%esp)
084e15e7 +0x06f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
084e15ec +0x074:  test   %eax,%eax
084e15ee +0x076:  je     084e15f7 <+0x7f>
084e15f0 +0x078:  mov    $0x1,%eax
084e15f5 +0x07d:  jmp    084e15fc <+0x84>
084e15f7 +0x07f:  mov    $0x0,%eax
084e15fc +0x084:  test   %al,%al
084e15fe +0x086:  je     084e16ea <+0x172>
084e1604 +0x08c:  movl   $0x0,0xc(%esp)
084e160c +0x094:  movl   $"game_server_msg_132",0x8(%esp)
084e1614 +0x09c:  movl   $0x4,0x4(%esp)
084e161c +0x0a4:  movl   $&g_scriptStringManager_,(%esp)
084e1623 +0x0ab:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e1628 +0x0b0:  movl   $0x14,0x8(%esp)
084e1630 +0x0b8:  mov    %eax,0x4(%esp)
084e1634 +0x0bc:  lea    -0x21(%ebp),%eax
084e1637 +0x0bf:  mov    %eax,(%esp)
084e163a +0x0c2:  call   0807d8d0 <_init+0x1c8>
084e163f +0x0c7:  movl   $0x0,0xc(%esp)
084e1647 +0x0cf:  movl   $"game_server_msg_134",0x8(%esp)
084e164f +0x0d7:  movl   $0x4,0x4(%esp)
084e1657 +0x0df:  movl   $&g_scriptStringManager_,(%esp)
084e165e +0x0e6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e1663 +0x0eb:  movl   $0xff,0x8(%esp)
084e166b +0x0f3:  mov    %eax,0x4(%esp)
084e166f +0x0f7:  lea    -0x15e(%ebp),%eax
084e1675 +0x0fd:  mov    %eax,(%esp)
084e1678 +0x100:  call   0807d8d0 <_init+0x1c8>
084e167d +0x105:  lea    -0x15e(%ebp),%eax
084e1683 +0x10b:  mov    %eax,(%esp)
084e1686 +0x10e:  call   0807e3b0 <_init+0xca8>
084e168b +0x113:  movl   $0x0,0x24(%esp)
084e1693 +0x11b:  movl   $0x0,0x20(%esp)
084e169b +0x123:  movl   $0x0,0x1c(%esp)
084e16a3 +0x12b:  movl   $0x0,0x18(%esp)
084e16ab +0x133:  mov    %eax,0x14(%esp)
084e16af +0x137:  lea    -0x15e(%ebp),%eax
084e16b5 +0x13d:  mov    %eax,0x10(%esp)
084e16b9 +0x141:  mov    0xc(%ebp),%eax
084e16bc +0x144:  mov    %eax,0xc(%esp)
084e16c0 +0x148:  movl   $0x0,0x8(%esp)
084e16c8 +0x150:  lea    -0x5e(%ebp),%eax
084e16cb +0x153:  mov    %eax,0x4(%esp)
084e16cf +0x157:  lea    -0x21(%ebp),%eax
084e16d2 +0x15a:  mov    %eax,(%esp)
084e16d5 +0x15d:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084e16da +0x162:  lea    -0x5e(%ebp),%eax
084e16dd +0x165:  mov    %eax,(%esp)
084e16e0 +0x168:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084e16e5 +0x16d:  jmp    084e16eb <+0x173>
084e16e7 +0x16f:  nop
084e16e8 +0x170:  jmp    084e16eb <+0x173>
084e16ea +0x172:  nop
084e16eb +0x173:  add    $0x194,%esp
084e16f1 +0x179:  pop    %ebx
084e16f2 +0x17a:  pop    %ebp
084e16f3 +0x17b:  ret
```

## 反编译 C

```c
// Inter_OnTimeEventAckReward::SendOnTimeRewardByMail @ 0x84e1578

/* Inter_OnTimeEventAckReward::SendOnTimeRewardByMail(unsigned int, unsigned int, unsigned int) */

void __thiscall
Inter_OnTimeEventAckReward::SendOnTimeRewardByMail
          (Inter_OnTimeEventAckReward *this,uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char local_162 [256];
  Inven_Item local_62 [2];
  uint local_60;
  char local_25 [21];
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::find_item(this_00,param_2);
  if (local_10 != 0) {
    Inven_Item::Inven_Item(local_62);
    local_60 = param_2;
    iVar2 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,local_62,param_3);
    if ((local_60 == 0) && (iVar2 = Inven_Item::get_add_info(local_62), iVar2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_132",(bool *)0x0);
      strncpy(local_25,pcVar3,0x14);
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_134",(bool *)0x0);
      strncpy(local_162,pcVar3,0xff);
      sVar4 = strlen(local_162);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_25,local_62,0,param_1,local_162,sVar4,0,0,0,0);
      Inven_Item::reset(local_62);
    }
  }
  return;
}
```

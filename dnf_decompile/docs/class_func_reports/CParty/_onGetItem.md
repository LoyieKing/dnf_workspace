# _onGetItem

`_ZN6CParty10_onGetItemEP5CUserjj`

`CParty::_onGetItem(CUser*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b949c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b949c  _ZN6CParty10_onGetItemEP5CUserjj
#           CParty::_onGetItem(CUser*, unsigned int, unsigned int)
# range [0x085b949c, 0x085b9595]
085b949c +0x00:  push   %ebp
085b949d +0x01:  mov    %esp,%ebp
085b949f +0x03:  push   %esi
085b94a0 +0x04:  push   %ebx
085b94a1 +0x05:  sub    $0x20,%esp
085b94a4 +0x08:  mov    0x10(%ebp),%ebx
085b94a7 +0x0b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b94ac +0x10:  mov    %ebx,0x4(%esp)
085b94b0 +0x14:  mov    %eax,(%esp)
085b94b3 +0x17:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085b94b8 +0x1c:  mov    %eax,-0x14(%ebp)
085b94bb +0x1f:  cmpl   $0x0,-0x14(%ebp)
085b94bf +0x23:  je     085b958e <+0xf2>
085b94c5 +0x29:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b94ca +0x2e:  mov    %eax,(%esp)
085b94cd +0x31:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
085b94d2 +0x36:  movl   $0x193,0x4(%esp)
085b94da +0x3e:  mov    %eax,(%esp)
085b94dd +0x41:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
085b94e2 +0x46:  test   %al,%al
085b94e4 +0x48:  je     085b9510 <+0x74>
085b94e6 +0x4a:  mov    0x14(%ebp),%esi
085b94e9 +0x4d:  mov    0x10(%ebp),%ebx
085b94ec +0x50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b94f1 +0x55:  mov    %eax,(%esp)
085b94f4 +0x58:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
085b94f9 +0x5d:  mov    %esi,0xc(%esp)
085b94fd +0x61:  mov    %ebx,0x8(%esp)
085b9501 +0x65:  mov    0xc(%ebp),%edx
085b9504 +0x68:  mov    %edx,0x4(%esp)
085b9508 +0x6c:  mov    %eax,(%esp)
085b950b +0x6f:  call   0810bea8 <_ZN13EventClassify15CEventScriptMng25process_add_item_count_dbEP5CUserii>  ; EventClassify::CEventScriptMng::process_add_item_count_db(CUser*, int, int)
085b9510 +0x74:  mov    -0x14(%ebp),%eax
085b9513 +0x77:  mov    %eax,(%esp)
085b9516 +0x7a:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085b951b +0x7f:  test   %al,%al
085b951d +0x81:  je     085b958f <+0xf3>
085b951f +0x83:  mov    -0x14(%ebp),%eax
085b9522 +0x86:  mov    %eax,-0x10(%ebp)
085b9525 +0x89:  mov    -0x10(%ebp),%eax
085b9528 +0x8c:  mov    (%eax),%eax
085b952a +0x8e:  add    $0xc,%eax
085b952d +0x91:  mov    (%eax),%edx
085b952f +0x93:  mov    -0x10(%ebp),%eax
085b9532 +0x96:  mov    %eax,(%esp)
085b9535 +0x99:  call   *%edx
085b9537 +0x9b:  cmp    $0x1a,%eax
085b953a +0x9e:  sete   %al
085b953d +0xa1:  test   %al,%al
085b953f +0xa3:  je     085b958f <+0xf3>
085b9541 +0xa5:  movl   $0x0,-0xc(%ebp)
085b9548 +0xac:  mov    0x10(%ebp),%eax
085b954b +0xaf:  cmp    $0x289749,%eax
085b9550 +0xb4:  je     085b9572 <+0xd6>
085b9552 +0xb6:  cmp    $0x28982d,%eax
085b9557 +0xbb:  je     085b9569 <+0xcd>
085b9559 +0xbd:  cmp    $0x380,%eax
085b955e +0xc2:  jne    085b9579 <+0xdd>
085b9560 +0xc4:  movl   $0x0,-0xc(%ebp)
085b9567 +0xcb:  jmp    085b9579 <+0xdd>
085b9569 +0xcd:  movl   $0x1,-0xc(%ebp)
085b9570 +0xd4:  jmp    085b9579 <+0xdd>
085b9572 +0xd6:  movl   $0x2,-0xc(%ebp)
085b9579 +0xdd:  movl   $0x0,0x4(%esp)
085b9581 +0xe5:  mov    -0xc(%ebp),%eax
085b9584 +0xe8:  mov    %eax,(%esp)
085b9587 +0xeb:  call   08676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>  ; CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND)
085b958c +0xf0:  jmp    085b958f <+0xf3>
085b958e +0xf2:  nop
085b958f +0xf3:  add    $0x20,%esp
085b9592 +0xf6:  pop    %ebx
085b9593 +0xf7:  pop    %esi
085b9594 +0xf8:  pop    %ebp
085b9595 +0xf9:  ret
```

## 反编译 C

```c
// CParty::_onGetItem @ 0x85b949c

/* CParty::_onGetItem(CUser*, unsigned int, unsigned int) */

void __thiscall CParty::_onGetItem(CParty *this,CUser *param_1,uint param_2,uint param_3)

{
  char cVar1;
  CDataManager *pCVar2;
  CItem *this_00;
  CEventScriptMng *pCVar3;
  int iVar4;
  undefined4 local_10;
  
  pCVar2 = (CDataManager *)G_CDataManager();
  this_00 = (CItem *)CDataManager::find_item(pCVar2,param_2);
  if (this_00 != (CItem *)0x0) {
    pCVar2 = (CDataManager *)G_CDataManager();
    pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
    cVar1 = EventClassify::CEventScriptMng::is_eventing(pCVar3,0x193);
    if (cVar1 != '\0') {
      pCVar2 = (CDataManager *)G_CDataManager();
      pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
      EventClassify::CEventScriptMng::process_add_item_count_db(pCVar3,param_1,param_2,param_3);
    }
    cVar1 = CItem::is_stackable(this_00);
    if (cVar1 != '\0') {
      iVar4 = (**(code **)(*(int *)this_00 + 0xc))(this_00);
      if (iVar4 == 0x1a) {
        local_10 = 0;
        if (param_2 == 0x289749) {
          local_10 = 2;
        }
        else if (param_2 == 0x28982d) {
          local_10 = 1;
        }
        else if (param_2 == 0x380) {
          local_10 = 0;
        }
        CUser::SendRandomBoxStatistic(local_10,0);
      }
    }
  }
  return;
}
```

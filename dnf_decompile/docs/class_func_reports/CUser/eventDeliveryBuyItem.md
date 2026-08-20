# eventDeliveryBuyItem

`_ZN5CUser20eventDeliveryBuyItemEiRK10Inven_Item`

`CUser::eventDeliveryBuyItem(int, Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866463c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866463c  _ZN5CUser20eventDeliveryBuyItemEiRK10Inven_Item
#           CUser::eventDeliveryBuyItem(int, Inven_Item const&)
# range [0x0866463c, 0x086646c1]
0866463c +0x00:  push   %ebp
0866463d +0x01:  mov    %esp,%ebp
0866463f +0x03:  push   %esi
08664640 +0x04:  push   %ebx
08664641 +0x05:  sub    $0x40,%esp
08664644 +0x08:  lea    -0x20(%ebp),%eax
08664647 +0x0b:  mov    %eax,(%esp)
0866464a +0x0e:  call   0869795a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x41af>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x41af
0866464f +0x13:  mov    0x8(%ebp),%eax
08664652 +0x16:  mov    %eax,(%esp)
08664655 +0x19:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
0866465a +0x1e:  mov    %eax,%esi
0866465c +0x20:  mov    0x8(%ebp),%eax
0866465f +0x23:  mov    %eax,(%esp)
08664662 +0x26:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08664667 +0x2b:  mov    %eax,%ebx
08664669 +0x2d:  mov    0x8(%ebp),%eax
0866466c +0x30:  mov    %eax,(%esp)
0866466f +0x33:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08664674 +0x38:  mov    %esi,0x10(%esp)
08664678 +0x3c:  mov    %ebx,0xc(%esp)
0866467c +0x40:  mov    %eax,0x8(%esp)
08664680 +0x44:  movl   $0x2,0x4(%esp)
08664688 +0x4c:  lea    -0x20(%ebp),%eax
0866468b +0x4f:  mov    %eax,(%esp)
0866468e +0x52:  call   086978ec <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4141>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4141
08664693 +0x57:  mov    0xc(%ebp),%eax
08664696 +0x5a:  mov    %eax,-0x10(%ebp)
08664699 +0x5d:  mov    0x10(%ebp),%eax
0866469c +0x60:  mov    %eax,-0xc(%ebp)
0866469f +0x63:  mov    -0x20(%ebp),%edx
086646a2 +0x66:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086646a7 +0x6b:  lea    -0x20(%ebp),%ecx
086646aa +0x6e:  mov    %ecx,0x8(%esp)
086646ae +0x72:  mov    %edx,0x4(%esp)
086646b2 +0x76:  mov    %eax,(%esp)
086646b5 +0x79:  call   08116874 <_ZN13CEventManager19eventDeliveryNotifyEiR11DeliveryMsg>  ; CEventManager::eventDeliveryNotify(int, DeliveryMsg&)
086646ba +0x7e:  add    $0x40,%esp
086646bd +0x81:  pop    %ebx
086646be +0x82:  pop    %esi
086646bf +0x83:  pop    %ebp
086646c0 +0x84:  ret
086646c1 +0x85:  nop
```

## 反编译 C

```c
// CUser::eventDeliveryBuyItem @ 0x866463c

/* CUser::eventDeliveryBuyItem(int, Inven_Item const&) */

void __thiscall CUser::eventDeliveryBuyItem(CUser *this,int param_1,Inven_Item *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_24 [4];
  int local_14;
  Inven_Item *local_10;
  
  BuyItemDeliveryMsg::BuyItemDeliveryMsg((BuyItemDeliveryMsg *)local_24);
  iVar1 = GetServerGroupToPvP(this);
  iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  uVar3 = get_acc_id(this);
  DeliveryMsg::setBaseData((DeliveryMsg *)local_24,2,uVar3,iVar2,iVar1);
  local_14 = param_1;
  local_10 = param_2;
  CEventManager::eventDeliveryNotify
            (GlobalData::s_event_manager,local_24[0],(DeliveryMsg *)local_24);
  return;
}
```

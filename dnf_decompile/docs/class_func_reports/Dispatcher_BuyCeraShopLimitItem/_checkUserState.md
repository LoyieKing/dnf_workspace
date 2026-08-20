# _checkUserState

`_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser`

`Dispatcher_BuyCeraShopLimitItem::_checkUserState(CUser*) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_BuyCeraShopLimitItem` | `0x0821f72a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821f72a  _ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser
#           Dispatcher_BuyCeraShopLimitItem::_checkUserState(CUser*) const
# range [0x0821f72a, 0x0821f7cb]
0821f72a +0x00:  push   %ebp
0821f72b +0x01:  mov    %esp,%ebp
0821f72d +0x03:  push   %ebx
0821f72e +0x04:  sub    $0x24,%esp
0821f731 +0x07:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0821f736 +0x0c:  movl   $0x39,0x8(%esp)
0821f73e +0x14:  mov    0xc(%ebp),%edx
0821f741 +0x17:  mov    %edx,0x4(%esp)
0821f745 +0x1b:  mov    %eax,(%esp)
0821f748 +0x1e:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0821f74d +0x23:  mov    %eax,-0xc(%ebp)
0821f750 +0x26:  cmpl   $0x0,-0xc(%ebp)
0821f754 +0x2a:  je     0821f75b <+0x31>
0821f756 +0x2c:  mov    -0xc(%ebp),%eax
0821f759 +0x2f:  jmp    0821f7c5 <+0x9b>
0821f75b +0x31:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0821f760 +0x36:  mov    0xc(%ebp),%edx
0821f763 +0x39:  mov    %edx,0x4(%esp)
0821f767 +0x3d:  mov    %eax,(%esp)
0821f76a +0x40:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
0821f76f +0x45:  test   %al,%al
0821f771 +0x47:  je     0821f77a <+0x50>
0821f773 +0x49:  mov    $0x13,%eax
0821f778 +0x4e:  jmp    0821f7c5 <+0x9b>
0821f77a +0x50:  mov    0xc(%ebp),%eax
0821f77d +0x53:  mov    %eax,(%esp)
0821f780 +0x56:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0821f785 +0x5b:  test   %al,%al
0821f787 +0x5d:  je     0821f790 <+0x66>
0821f789 +0x5f:  mov    $0x13,%eax
0821f78e +0x64:  jmp    0821f7c5 <+0x9b>
0821f790 +0x66:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0821f797 +0x6d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0821f79c +0x72:  mov    %eax,%ebx
0821f79e +0x74:  mov    0xc(%ebp),%eax
0821f7a1 +0x77:  mov    %eax,(%esp)
0821f7a4 +0x7a:  call   0822fa0a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x50b4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x50b4
0821f7a9 +0x7f:  mov    %ebx,%edx
0821f7ab +0x81:  sub    %eax,%edx
0821f7ad +0x83:  mov    %edx,%eax
0821f7af +0x85:  cmp    $0x1d,%eax
0821f7b2 +0x88:  setle  %al
0821f7b5 +0x8b:  test   %al,%al
0821f7b7 +0x8d:  je     0821f7c0 <+0x96>
0821f7b9 +0x8f:  mov    $0x9,%eax
0821f7be +0x94:  jmp    0821f7c5 <+0x9b>
0821f7c0 +0x96:  mov    $0x0,%eax
0821f7c5 +0x9b:  add    $0x24,%esp
0821f7c8 +0x9e:  pop    %ebx
0821f7c9 +0x9f:  pop    %ebp
0821f7ca +0xa0:  ret
0821f7cb +0xa1:  nop
```

## 反编译 C

```c
// Dispatcher_BuyCeraShopLimitItem::_checkUserState @ 0x821f72a

/* Dispatcher_BuyCeraShopLimitItem::_checkUserState(CUser*) const */

int __thiscall
Dispatcher_BuyCeraShopLimitItem::_checkUserState
          (Dispatcher_BuyCeraShopLimitItem *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CPrivateStoreMgr *this_00;
  int iVar3;
  
  iVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x39);
  if (iVar2 == 0) {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar1 == '\0') {
      cVar1 = CUser::CheckInTrade(param_1);
      if (cVar1 == '\0') {
        iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar3 = CUserCharacInfo::getLastItemLimitEditionBuyTime((CUserCharacInfo *)param_1);
        if (iVar2 - iVar3 < 0x1e) {
          iVar2 = 9;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x13;
      }
    }
    else {
      iVar2 = 0x13;
    }
  }
  return iVar2;
}
```

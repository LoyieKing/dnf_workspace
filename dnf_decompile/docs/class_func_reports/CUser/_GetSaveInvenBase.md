# _GetSaveInvenBase

`_ZN5CUser17_GetSaveInvenBaseEP18SIG_SAVE_INVENTORY`

`CUser::_GetSaveInvenBase(SIG_SAVE_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fd80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fd80  _ZN5CUser17_GetSaveInvenBaseEP18SIG_SAVE_INVENTORY
#           CUser::_GetSaveInvenBase(SIG_SAVE_INVENTORY*)
# range [0x0864fd80, 0x0864fe51]
0864fd80 +0x00:  push   %ebp
0864fd81 +0x01:  mov    %esp,%ebp
0864fd83 +0x03:  sub    $0x28,%esp
0864fd86 +0x06:  mov    0x8(%ebp),%eax
0864fd89 +0x09:  mov    %eax,(%esp)
0864fd8c +0x0c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864fd91 +0x11:  mov    0xc(%ebp),%edx
0864fd94 +0x14:  mov    %eax,(%edx)
0864fd96 +0x16:  mov    0x8(%ebp),%eax
0864fd99 +0x19:  mov    %eax,(%esp)
0864fd9c +0x1c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0864fda1 +0x21:  mov    0xc(%ebp),%edx
0864fda4 +0x24:  mov    %eax,0x4(%edx)
0864fda7 +0x27:  mov    0x8(%ebp),%eax
0864fdaa +0x2a:  mov    %eax,(%esp)
0864fdad +0x2d:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0864fdb2 +0x32:  mov    0xc(%ebp),%edx
0864fdb5 +0x35:  mov    %eax,0x9(%edx)
0864fdb8 +0x38:  mov    0x8(%ebp),%eax
0864fdbb +0x3b:  mov    %eax,(%esp)
0864fdbe +0x3e:  call   086966b4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2f09>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2f09
0864fdc3 +0x43:  mov    0xc(%ebp),%edx
0864fdc6 +0x46:  mov    %eax,0xd(%edx)
0864fdc9 +0x49:  mov    0x8(%ebp),%eax
0864fdcc +0x4c:  mov    %eax,(%esp)
0864fdcf +0x4f:  call   086966e0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2f35>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2f35
0864fdd4 +0x54:  mov    0xc(%ebp),%edx
0864fdd7 +0x57:  mov    %eax,0x11(%edx)
0864fdda +0x5a:  mov    0x8(%ebp),%eax
0864fddd +0x5d:  mov    %eax,(%esp)
0864fde0 +0x60:  call   0869670c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2f61>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2f61
0864fde5 +0x65:  mov    0xc(%ebp),%edx
0864fde8 +0x68:  mov    %eax,0x15(%edx)
0864fdeb +0x6b:  mov    0x8(%ebp),%eax
0864fdee +0x6e:  mov    %eax,(%esp)
0864fdf1 +0x71:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864fdf6 +0x76:  test   %eax,%eax
0864fdf8 +0x78:  sete   %al
0864fdfb +0x7b:  test   %al,%al
0864fdfd +0x7d:  je     0864fe0e <+0x8e>
0864fdff +0x7f:  mov    0xc(%ebp),%eax
0864fe02 +0x82:  movl   $0x0,0xad95(%eax)
0864fe0c +0x8c:  jmp    0864fe2f <+0xaf>
0864fe0e +0x8e:  mov    0x8(%ebp),%eax
0864fe11 +0x91:  mov    %eax,(%esp)
0864fe14 +0x94:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864fe19 +0x99:  add    $0x658,%eax
0864fe1e +0x9e:  mov    %eax,(%esp)
0864fe21 +0xa1:  call   0817fef0 <_ZNK10AvatarCoin3GetEv>  ; AvatarCoin::Get() const
0864fe26 +0xa6:  mov    0xc(%ebp),%edx
0864fe29 +0xa9:  mov    %eax,0xad95(%edx)
0864fe2f +0xaf:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0864fe36 +0xb6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0864fe3b +0xbb:  mov    %eax,-0xc(%ebp)
0864fe3e +0xbe:  mov    0x8(%ebp),%eax
0864fe41 +0xc1:  mov    -0xc(%ebp),%edx
0864fe44 +0xc4:  mov    %edx,0x4(%esp)
0864fe48 +0xc8:  mov    %eax,(%esp)
0864fe4b +0xcb:  call   086960f6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x294b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x294b
0864fe50 +0xd0:  leave
0864fe51 +0xd1:  ret
```

## 反编译 C

```c
// CUser::_GetSaveInvenBase @ 0x864fd80

/* CUser::_GetSaveInvenBase(SIG_SAVE_INVENTORY*) */

void __thiscall CUser::_GetSaveInvenBase(CUser *this,SIG_SAVE_INVENTORY *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = get_acc_id(this);
  *(undefined4 *)param_1 = uVar1;
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)this);
  *(undefined4 *)(param_1 + 9) = uVar1;
  uVar1 = CUserCharacInfo::getCurCharacCoin((CUserCharacInfo *)this);
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  uVar1 = CUserCharacInfo::getCurCharacPayCoin((CUserCharacInfo *)this);
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  uVar1 = CUserCharacInfo::getCurCharacEventCoin((CUserCharacInfo *)this);
  *(undefined4 *)(param_1 + 0x15) = uVar1;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xad95) = 0;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar1 = AvatarCoin::Get((AvatarCoin *)(iVar2 + 0x658));
    *(undefined4 *)(param_1 + 0xad95) = uVar1;
  }
  lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::setCurCharacLastPlayTick((CUserCharacInfo *)this,lVar3);
  return;
}
```

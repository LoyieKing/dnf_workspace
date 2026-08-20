# RecoverCoin

`_ZN5CUser11RecoverCoinEj`

`CUser::RecoverCoin(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08657f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08657f10  _ZN5CUser11RecoverCoinEj
#           CUser::RecoverCoin(unsigned int)
# range [0x08657f10, 0x0865802f]
08657f10 +0x000:  push   %ebp
08657f11 +0x001:  mov    %esp,%ebp
08657f13 +0x003:  sub    $0x28,%esp
08657f16 +0x006:  mov    0x8(%ebp),%eax
08657f19 +0x009:  mov    %eax,(%esp)
08657f1c +0x00c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08657f21 +0x011:  test   %eax,%eax
08657f23 +0x013:  sete   %al
08657f26 +0x016:  test   %al,%al
08657f28 +0x018:  jne    0865802c <+0x11c>
08657f2e +0x01e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08657f33 +0x023:  movl   $0x4,0x4(%esp)
08657f3b +0x02b:  mov    %eax,(%esp)
08657f3e +0x02e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08657f43 +0x033:  mov    %eax,-0xc(%ebp)
08657f46 +0x036:  cmpl   $0x0,-0xc(%ebp)
08657f4a +0x03a:  je     08657f71 <+0x61>
08657f4c +0x03c:  mov    -0xc(%ebp),%eax
08657f4f +0x03f:  mov    (%eax),%eax
08657f51 +0x041:  add    $0x34,%eax
08657f54 +0x044:  mov    (%eax),%edx
08657f56 +0x046:  mov    -0xc(%ebp),%eax
08657f59 +0x049:  movl   $0x0,0x4(%esp)
08657f61 +0x051:  mov    %eax,(%esp)
08657f64 +0x054:  call   *%edx
08657f66 +0x056:  test   %al,%al
08657f68 +0x058:  je     08657f71 <+0x61>
08657f6a +0x05a:  mov    $0x1,%eax
08657f6f +0x05f:  jmp    08657f76 <+0x66>
08657f71 +0x061:  mov    $0x0,%eax
08657f76 +0x066:  test   %al,%al
08657f78 +0x068:  je     08657fad <+0x9d>
08657f7a +0x06a:  mov    0x8(%ebp),%eax
08657f7d +0x06d:  mov    %eax,(%esp)
08657f80 +0x070:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08657f85 +0x075:  mov    %eax,0x4(%esp)
08657f89 +0x079:  mov    -0xc(%ebp),%eax
08657f8c +0x07c:  mov    %eax,(%esp)
08657f8f +0x07f:  call   0810ad16 <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi>  ; CCoinEventPerDay::GetCoinNoPerDay(int)
08657f94 +0x084:  mov    %eax,0xc(%ebp)
08657f97 +0x087:  mov    0x8(%ebp),%eax
08657f9a +0x08a:  mov    %eax,(%esp)
08657f9d +0x08d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08657fa2 +0x092:  mov    %eax,(%esp)
08657fa5 +0x095:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
08657faa +0x09a:  cmp    0xc(%ebp),%eax
08657fad +0x09d:  mov    0x8(%ebp),%eax
08657fb0 +0x0a0:  mov    %eax,(%esp)
08657fb3 +0x0a3:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
08657fb8 +0x0a8:  test   %al,%al
08657fba +0x0aa:  je     08657fe5 <+0xd5>
08657fbc +0x0ac:  mov    0x8(%ebp),%eax
08657fbf +0x0af:  add    $0x7121c,%eax
08657fc4 +0x0b4:  mov    %eax,(%esp)
08657fc7 +0x0b7:  call   0822e4be <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b68>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b68
08657fcc +0x0bc:  add    %eax,0xc(%ebp)
08657fcf +0x0bf:  mov    0x8(%ebp),%eax
08657fd2 +0x0c2:  mov    %eax,(%esp)
08657fd5 +0x0c5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08657fda +0x0ca:  mov    %eax,(%esp)
08657fdd +0x0cd:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
08657fe2 +0x0d2:  cmp    0xc(%ebp),%eax
08657fe5 +0x0d5:  mov    0x8(%ebp),%eax
08657fe8 +0x0d8:  mov    %eax,(%esp)
08657feb +0x0db:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08657ff0 +0x0e0:  mov    %eax,(%esp)
08657ff3 +0x0e3:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
08657ff8 +0x0e8:  cmp    0xc(%ebp),%eax
08657ffb +0x0eb:  setb   %al
08657ffe +0x0ee:  test   %al,%al
08658000 +0x0f0:  je     08658017 <+0x107>
08658002 +0x0f2:  mov    0x8(%ebp),%eax
08658005 +0x0f5:  movl   $0x0,0x4(%esp)
0865800d +0x0fd:  mov    %eax,(%esp)
08658010 +0x100:  call   0822f7d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e7a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e7a
08658015 +0x105:  jmp    0865802d <+0x11d>
08658017 +0x107:  mov    0x8(%ebp),%eax
0865801a +0x10a:  movl   $0x1,0x4(%esp)
08658022 +0x112:  mov    %eax,(%esp)
08658025 +0x115:  call   0822f7d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e7a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e7a
0865802a +0x11a:  jmp    0865802d <+0x11d>
0865802c +0x11c:  nop
0865802d +0x11d:  leave
0865802e +0x11e:  ret
0865802f +0x11f:  nop
```

## 反编译 C

```c
// CUser::RecoverCoin @ 0x8657f10

/* CUser::RecoverCoin(unsigned int) */

void __thiscall CUser::RecoverCoin(CUser *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CCoinEventPerDay *this_00;
  CInventory *pCVar4;
  uint uVar5;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 != 0) {
    this_00 = (CCoinEventPerDay *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,4);
    if ((this_00 == (CCoinEventPerDay *)0x0) ||
       (cVar2 = (**(code **)(*(int *)this_00 + 0x34))(this_00,0), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      param_1 = CCoinEventPerDay::GetCoinNoPerDay(this_00,iVar3);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetCoin(pCVar4);
    }
    cVar2 = IsHavePremiumAdvantage(this);
    if (cVar2 != '\0') {
      iVar3 = WongWork::CUserPremium::GetAdvantageCoin((CUserPremium *)(this + 0x7121c));
      param_1 = param_1 + iVar3;
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetCoin(pCVar4);
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar5 = CInventory::GetCoin(pCVar4);
    if (uVar5 < param_1) {
      CUserCharacInfo::SetOpencoin((CUserCharacInfo *)this,'\0');
    }
    else {
      CUserCharacInfo::SetOpencoin((CUserCharacInfo *)this,'\x01');
    }
    return;
  }
  return;
}
```

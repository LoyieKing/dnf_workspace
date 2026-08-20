# _processCoin

`_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb`

`WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08325a88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08325a88  _ZN8WongWork9CCeraShop12_processCoinEP5CUsertb
#           WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool)
# range [0x08325a88, 0x08325b21]
08325a88 +0x00:  push   %ebp
08325a89 +0x01:  mov    %esp,%ebp
08325a8b +0x03:  push   %ebx
08325a8c +0x04:  sub    $0x24,%esp
08325a8f +0x07:  mov    0x10(%ebp),%edx
08325a92 +0x0a:  mov    0x14(%ebp),%eax
08325a95 +0x0d:  mov    %dx,-0xc(%ebp)
08325a99 +0x11:  mov    %al,-0x10(%ebp)
08325a9c +0x14:  mov    0xc(%ebp),%eax
08325a9f +0x17:  mov    %eax,(%esp)
08325aa2 +0x1a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08325aa7 +0x1f:  mov    %eax,(%esp)
08325aaa +0x22:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
08325aaf +0x27:  movzwl -0xc(%ebp),%edx
08325ab3 +0x2b:  lea    (%eax,%edx,1),%ebx
08325ab6 +0x2e:  mov    0xc(%ebp),%eax
08325ab9 +0x31:  mov    %eax,(%esp)
08325abc +0x34:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08325ac1 +0x39:  mov    %ebx,0x4(%esp)
08325ac5 +0x3d:  mov    %eax,(%esp)
08325ac8 +0x40:  call   081ac73a <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x46>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x46
08325acd +0x45:  movzwl -0xc(%ebp),%ebx
08325ad1 +0x49:  mov    0xc(%ebp),%eax
08325ad4 +0x4c:  mov    %eax,(%esp)
08325ad7 +0x4f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08325adc +0x54:  mov    %eax,(%esp)
08325adf +0x57:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
08325ae4 +0x5c:  mov    0xc(%ebp),%edx
08325ae7 +0x5f:  add    $0x79700,%edx
08325aed +0x65:  movl   $0x3,0xc(%esp)
08325af5 +0x6d:  mov    %ebx,0x8(%esp)
08325af9 +0x71:  mov    %eax,0x4(%esp)
08325afd +0x75:  mov    %edx,(%esp)
08325b00 +0x78:  call   08683bf4 <_ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::PayCoinAdd(int, int, eCoinAddReason)
08325b05 +0x7d:  mov    0xc(%ebp),%eax
08325b08 +0x80:  mov    %eax,(%esp)
08325b0b +0x83:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
08325b10 +0x88:  mov    0xc(%ebp),%eax
08325b13 +0x8b:  mov    %eax,(%esp)
08325b16 +0x8e:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
08325b1b +0x93:  add    $0x24,%esp
08325b1e +0x96:  pop    %ebx
08325b1f +0x97:  pop    %ebp
08325b20 +0x98:  ret
08325b21 +0x99:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_processCoin @ 0x8325a88

/* WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool) */

void WongWork::CCeraShop::_processCoin(CUser *param_1,ushort param_2,bool param_3)

{
  CInventory *pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  undefined3 in_stack_0000000d;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(_param_2);
  iVar2 = CInventory::GetPayCoin(pCVar1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(_param_2);
  CInventory::SetPayCoin(pCVar1,iVar2 + (_param_3 & 0xffff));
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(_param_2);
  uVar3 = CInventory::GetPayCoin(pCVar1);
  cUserHistoryLog::PayCoinAdd((cUserHistoryLog *)(_param_2 + 0x79700),uVar3,_param_3 & 0xffff,3);
  CUser::SaveMoneyCoin((CUser *)_param_2);
  CUser::SendCoin((CUser *)_param_2);
  return;
}
```

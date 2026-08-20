# _checkGoldCardSelectable

`_ZN6CParty24_checkGoldCardSelectableEP5CUser22eClearRewardCardType_ti`

`CParty::_checkGoldCardSelectable(CUser*, eClearRewardCardType_t, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b407c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b407c  _ZN6CParty24_checkGoldCardSelectableEP5CUser22eClearRewardCardType_ti
#           CParty::_checkGoldCardSelectable(CUser*, eClearRewardCardType_t, int)
# range [0x085b407c, 0x085b4159]
085b407c +0x00:  push   %ebp
085b407d +0x01:  mov    %esp,%ebp
085b407f +0x03:  push   %ebx
085b4080 +0x04:  sub    $0x14,%esp
085b4083 +0x07:  cmpl   $0x0,0xc(%ebp)
085b4087 +0x0b:  jne    085b4093 <+0x17>
085b4089 +0x0d:  mov    $0x0,%eax
085b408e +0x12:  jmp    085b4153 <+0xd7>
085b4093 +0x17:  mov    0x10(%ebp),%eax
085b4096 +0x1a:  test   %eax,%eax
085b4098 +0x1c:  js     085b40a2 <+0x26>
085b409a +0x1e:  mov    0x10(%ebp),%eax
085b409d +0x21:  cmp    $0x1,%eax
085b40a0 +0x24:  jle    085b40ac <+0x30>
085b40a2 +0x26:  mov    $0x0,%eax
085b40a7 +0x2b:  jmp    085b4153 <+0xd7>
085b40ac +0x30:  cmpl   $0x0,0x14(%ebp)
085b40b0 +0x34:  js     085b40b8 <+0x3c>
085b40b2 +0x36:  cmpl   $0x3,0x14(%ebp)
085b40b6 +0x3a:  jle    085b40c2 <+0x46>
085b40b8 +0x3c:  mov    $0x0,%eax
085b40bd +0x41:  jmp    085b4153 <+0xd7>
085b40c2 +0x46:  mov    0x10(%ebp),%ecx
085b40c5 +0x49:  mov    0x14(%ebp),%edx
085b40c8 +0x4c:  mov    0x8(%ebp),%eax
085b40cb +0x4f:  shl    $0x2,%ecx
085b40ce +0x52:  lea    (%ecx,%edx,1),%edx
085b40d1 +0x55:  add    $0x78,%edx
085b40d4 +0x58:  mov    0x4(%eax,%edx,4),%eax
085b40d8 +0x5c:  test   %eax,%eax
085b40da +0x5e:  je     085b414e <+0xd2>
085b40dc +0x60:  mov    0x10(%ebp),%ecx
085b40df +0x63:  mov    0x14(%ebp),%edx
085b40e2 +0x66:  mov    0x8(%ebp),%eax
085b40e5 +0x69:  shl    $0x2,%ecx
085b40e8 +0x6c:  lea    (%ecx,%edx,1),%edx
085b40eb +0x6f:  add    $0x78,%edx
085b40ee +0x72:  mov    0x4(%eax,%edx,4),%ebx
085b40f2 +0x76:  mov    0xc(%ebp),%eax
085b40f5 +0x79:  mov    %eax,(%esp)
085b40f8 +0x7c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085b40fd +0x81:  movl   $0x1,0xc(%esp)
085b4105 +0x89:  movl   $0x14,0x8(%esp)
085b410d +0x91:  mov    %ebx,0x4(%esp)
085b4111 +0x95:  mov    %eax,(%esp)
085b4114 +0x98:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085b4119 +0x9d:  test   %al,%al
085b411b +0x9f:  je     085b4147 <+0xcb>
085b411d +0xa1:  movl   $0x0,0xc(%esp)
085b4125 +0xa9:  movl   $0x0,0x8(%esp)
085b412d +0xb1:  movl   $0x1,0x4(%esp)
085b4135 +0xb9:  mov    0xc(%ebp),%eax
085b4138 +0xbc:  mov    %eax,(%esp)
085b413b +0xbf:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085b4140 +0xc4:  mov    $0x1,%eax
085b4145 +0xc9:  jmp    085b4153 <+0xd7>
085b4147 +0xcb:  mov    $0x0,%eax
085b414c +0xd0:  jmp    085b4153 <+0xd7>
085b414e +0xd2:  mov    $0x1,%eax
085b4153 +0xd7:  add    $0x14,%esp
085b4156 +0xda:  pop    %ebx
085b4157 +0xdb:  pop    %ebp
085b4158 +0xdc:  ret
085b4159 +0xdd:  nop
```

## 反编译 C

```c
// CParty::_checkGoldCardSelectable @ 0x85b407c

/* CParty::_checkGoldCardSelectable(CUser*, eClearRewardCardType_t, int) */

undefined4 __thiscall
CParty::_checkGoldCardSelectable(CParty *this,CUser *param_1,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else if ((param_3 < 0) || (1 < param_3)) {
    uVar2 = 0;
  }
  else if ((param_4 < 0) || (3 < param_4)) {
    uVar2 = 0;
  }
  else if (*(int *)(this + (param_3 * 4 + param_4 + 0x78) * 4 + 4) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(this + (param_3 * 4 + param_4 + 0x78) * 4 + 4);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::use_money(pCVar3,uVar2,0x14,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      CUser::SendUpdateItemList(param_1,1,0,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```

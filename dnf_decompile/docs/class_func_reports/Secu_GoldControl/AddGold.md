# AddGold

`_ZN16Secu_GoldControl7AddGoldEj15eMoneyAddReason`

`Secu_GoldControl::AddGold(unsigned int, eMoneyAddReason)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x0828757c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828757c  _ZN16Secu_GoldControl7AddGoldEj15eMoneyAddReason
#           Secu_GoldControl::AddGold(unsigned int, eMoneyAddReason)
# range [0x0828757c, 0x08287649]
0828757c +0x00:  push   %ebp
0828757d +0x01:  mov    %esp,%ebp
0828757f +0x03:  push   %esi
08287580 +0x04:  push   %ebx
08287581 +0x05:  sub    $0x10,%esp
08287584 +0x08:  mov    0x8(%ebp),%eax
08287587 +0x0b:  mov    %eax,(%esp)
0828758a +0x0e:  call   08287b04 <_ZN16Secu_GoldControl9CheckDateEv>  ; Secu_GoldControl::CheckDate()
0828758f +0x13:  mov    0x10(%ebp),%eax
08287592 +0x16:  cmp    $0x1a,%eax
08287595 +0x19:  ja     08287623 <+0xa7>
0828759b +0x1f:  mov    &data#bd18cf0b(.rodata)(,%eax,4),%eax
082875a2 +0x26:  jmp    *%eax
082875a4 +0x28:  movl   $0x0,0x8(%esp)
082875ac +0x30:  mov    0xc(%ebp),%eax
082875af +0x33:  mov    %eax,0x4(%esp)
082875b3 +0x37:  mov    0x8(%ebp),%eax
082875b6 +0x3a:  mov    %eax,(%esp)
082875b9 +0x3d:  call   08287e3c <_ZN16Secu_GoldControl8MailGoldEjb>  ; Secu_GoldControl::MailGold(unsigned int, bool)
082875be +0x42:  mov    0x8(%ebp),%eax
082875c1 +0x45:  lea    0xc8(%eax),%esi
082875c7 +0x4b:  mov    0x8(%ebp),%eax
082875ca +0x4e:  mov    (%eax),%eax
082875cc +0x50:  mov    %eax,(%esp)
082875cf +0x53:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082875d4 +0x58:  mov    %eax,%ebx
082875d6 +0x5a:  mov    0x8(%ebp),%eax
082875d9 +0x5d:  mov    (%eax),%eax
082875db +0x5f:  mov    %eax,(%esp)
082875de +0x62:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082875e3 +0x67:  movl   $0x0,0xc(%esp)
082875eb +0x6f:  mov    %esi,0x8(%esp)
082875ef +0x73:  mov    %ebx,0x4(%esp)
082875f3 +0x77:  mov    %eax,(%esp)
082875f6 +0x7a:  call   08443352 <_ZN18DB_CheckCharacName11makeRequestEijPKcb>  ; DB_CheckCharacName::makeRequest(int, unsigned int, char const*, bool)
082875fb +0x7f:  jmp    08287643 <+0xc7>
082875fd +0x81:  mov    0xc(%ebp),%eax
08287600 +0x84:  mov    %eax,0x4(%esp)
08287604 +0x88:  mov    0x8(%ebp),%eax
08287607 +0x8b:  mov    %eax,(%esp)
0828760a +0x8e:  call   082877ba <_ZN16Secu_GoldControl14AddImportMoneyEj>  ; Secu_GoldControl::AddImportMoney(unsigned int)
0828760f +0x93:  jmp    08287623 <+0xa7>
08287611 +0x95:  mov    0xc(%ebp),%eax
08287614 +0x98:  mov    %eax,0x4(%esp)
08287618 +0x9c:  mov    0x8(%ebp),%eax
0828761b +0x9f:  mov    %eax,(%esp)
0828761e +0xa2:  call   0828784a <_ZN16Secu_GoldControl15AddAuctionMoneyEj>  ; Secu_GoldControl::AddAuctionMoney(unsigned int)
08287623 +0xa7:  mov    0xc(%ebp),%eax
08287626 +0xaa:  mov    %eax,0x4(%esp)
0828762a +0xae:  mov    0x8(%ebp),%eax
0828762d +0xb1:  mov    %eax,(%esp)
08287630 +0xb4:  call   0828772a <_ZN16Secu_GoldControl8AddMoneyEj>  ; Secu_GoldControl::AddMoney(unsigned int)
08287635 +0xb9:  mov    0x8(%ebp),%eax
08287638 +0xbc:  mov    %eax,(%esp)
0828763b +0xbf:  call   08287b80 <_ZN16Secu_GoldControl15CheckMoneyRangeEv>  ; Secu_GoldControl::CheckMoneyRange()
08287640 +0xc4:  jmp    08287643 <+0xc7>
08287642 +0xc6:  nop
08287643 +0xc7:  add    $0x10,%esp
08287646 +0xca:  pop    %ebx
08287647 +0xcb:  pop    %esi
08287648 +0xcc:  pop    %ebp
08287649 +0xcd:  ret
```

## 反编译 C

```c
// Secu_GoldControl::AddGold @ 0x828757c

/* Secu_GoldControl::AddGold(unsigned int, eMoneyAddReason) */

void __thiscall Secu_GoldControl::AddGold(Secu_GoldControl *this,uint param_1,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  CheckDate(this);
  switch(param_3) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 10:
  case 0xf:
  case 0x1a:
    AddImportMoney(this,param_1);
    break;
  case 1:
  case 2:
    goto LAB_08287643;
  case 0xe:
    MailGold((uint)this,SUB41(param_1,0));
    uVar1 = CUser::get_acc_id(*(CUser **)this);
    iVar2 = CUser::GetUID(*(CUser **)this);
    DB_CheckCharacName::makeRequest(iVar2,uVar1,(char *)(this + 200),false);
    return;
  case 0x12:
    AddAuctionMoney(this,param_1);
  }
  AddMoney(this,param_1);
  CheckMoneyRange(this);
LAB_08287643:
  return;
}
```

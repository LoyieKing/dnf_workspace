# SubGold

`_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason`

`Secu_GoldControl::SubGold(unsigned int, eMoneySubReason)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x0828764a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828764a  _ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason
#           Secu_GoldControl::SubGold(unsigned int, eMoneySubReason)
# range [0x0828764a, 0x08287729]
0828764a +0x00:  push   %ebp
0828764b +0x01:  mov    %esp,%ebp
0828764d +0x03:  push   %esi
0828764e +0x04:  push   %ebx
0828764f +0x05:  sub    $0x10,%esp
08287652 +0x08:  mov    0x8(%ebp),%eax
08287655 +0x0b:  mov    %eax,(%esp)
08287658 +0x0e:  call   08287b04 <_ZN16Secu_GoldControl9CheckDateEv>  ; Secu_GoldControl::CheckDate()
0828765d +0x13:  mov    0x10(%ebp),%eax
08287660 +0x16:  cmp    $0xe,%eax
08287663 +0x19:  je     082876dd <+0x93>
08287665 +0x1b:  cmp    $0xe,%eax
08287668 +0x1e:  jg     08287678 <+0x2e>
0828766a +0x20:  cmp    $0x2,%eax
0828766d +0x23:  je     08287722 <+0xd8>
08287673 +0x29:  jmp    08287703 <+0xb9>
08287678 +0x2e:  cmp    $0x11,%eax
0828767b +0x31:  je     08287684 <+0x3a>
0828767d +0x33:  cmp    $0x1a,%eax
08287680 +0x36:  je     082876f1 <+0xa7>
08287682 +0x38:  jmp    08287703 <+0xb9>
08287684 +0x3a:  movl   $0x1,0x8(%esp)
0828768c +0x42:  mov    0xc(%ebp),%eax
0828768f +0x45:  mov    %eax,0x4(%esp)
08287693 +0x49:  mov    0x8(%ebp),%eax
08287696 +0x4c:  mov    %eax,(%esp)
08287699 +0x4f:  call   08287e3c <_ZN16Secu_GoldControl8MailGoldEjb>  ; Secu_GoldControl::MailGold(unsigned int, bool)
0828769e +0x54:  mov    0x8(%ebp),%eax
082876a1 +0x57:  lea    0xc8(%eax),%esi
082876a7 +0x5d:  mov    0x8(%ebp),%eax
082876aa +0x60:  mov    (%eax),%eax
082876ac +0x62:  mov    %eax,(%esp)
082876af +0x65:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082876b4 +0x6a:  mov    %eax,%ebx
082876b6 +0x6c:  mov    0x8(%ebp),%eax
082876b9 +0x6f:  mov    (%eax),%eax
082876bb +0x71:  mov    %eax,(%esp)
082876be +0x74:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082876c3 +0x79:  movl   $0x1,0xc(%esp)
082876cb +0x81:  mov    %esi,0x8(%esp)
082876cf +0x85:  mov    %ebx,0x4(%esp)
082876d3 +0x89:  mov    %eax,(%esp)
082876d6 +0x8c:  call   08443352 <_ZN18DB_CheckCharacName11makeRequestEijPKcb>  ; DB_CheckCharacName::makeRequest(int, unsigned int, char const*, bool)
082876db +0x91:  jmp    08287723 <+0xd9>
082876dd +0x93:  mov    0xc(%ebp),%eax
082876e0 +0x96:  mov    %eax,0x4(%esp)
082876e4 +0x9a:  mov    0x8(%ebp),%eax
082876e7 +0x9d:  mov    %eax,(%esp)
082876ea +0xa0:  call   08287a74 <_ZN16Secu_GoldControl14SubImportMoneyEj>  ; Secu_GoldControl::SubImportMoney(unsigned int)
082876ef +0xa5:  jmp    08287703 <+0xb9>
082876f1 +0xa7:  mov    0xc(%ebp),%eax
082876f4 +0xaa:  mov    %eax,0x4(%esp)
082876f8 +0xae:  mov    0x8(%ebp),%eax
082876fb +0xb1:  mov    %eax,(%esp)
082876fe +0xb4:  call   0828795a <_ZN16Secu_GoldControl15SubAuctionMoneyEj>  ; Secu_GoldControl::SubAuctionMoney(unsigned int)
08287703 +0xb9:  mov    0xc(%ebp),%eax
08287706 +0xbc:  mov    %eax,0x4(%esp)
0828770a +0xc0:  mov    0x8(%ebp),%eax
0828770d +0xc3:  mov    %eax,(%esp)
08287710 +0xc6:  call   082879e4 <_ZN16Secu_GoldControl8SubMoneyEj>  ; Secu_GoldControl::SubMoney(unsigned int)
08287715 +0xcb:  mov    0x8(%ebp),%eax
08287718 +0xce:  mov    %eax,(%esp)
0828771b +0xd1:  call   08287b80 <_ZN16Secu_GoldControl15CheckMoneyRangeEv>  ; Secu_GoldControl::CheckMoneyRange()
08287720 +0xd6:  jmp    08287723 <+0xd9>
08287722 +0xd8:  nop
08287723 +0xd9:  add    $0x10,%esp
08287726 +0xdc:  pop    %ebx
08287727 +0xdd:  pop    %esi
08287728 +0xde:  pop    %ebp
08287729 +0xdf:  ret
```

## 反编译 C

```c
// Secu_GoldControl::SubGold @ 0x828764a

/* Secu_GoldControl::SubGold(unsigned int, eMoneySubReason) */

void __thiscall Secu_GoldControl::SubGold(Secu_GoldControl *this,uint param_1,int param_3)

{
  uint uVar1;
  int iVar2;
  
  CheckDate(this);
  if (param_3 == 0xe) {
    SubImportMoney(this,param_1);
  }
  else if (param_3 < 0xf) {
    if (param_3 == 2) {
      return;
    }
  }
  else {
    if (param_3 == 0x11) {
      MailGold((uint)this,SUB41(param_1,0));
      uVar1 = CUser::get_acc_id(*(CUser **)this);
      iVar2 = CUser::GetUID(*(CUser **)this);
      DB_CheckCharacName::makeRequest(iVar2,uVar1,(char *)(this + 200),true);
      return;
    }
    if (param_3 == 0x1a) {
      SubAuctionMoney(this,param_1);
    }
  }
  SubMoney(this,param_1);
  CheckMoneyRange(this);
  return;
}
```

# incQuestPoint

`_ZN5CUser13incQuestPointEiib`

`CUser::incQuestPoint(int, int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ac66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ac66  _ZN5CUser13incQuestPointEiib
#           CUser::incQuestPoint(int, int, bool)
# range [0x0868ac66, 0x0868acfd]
0868ac66 +0x00:  push   %ebp
0868ac67 +0x01:  mov    %esp,%ebp
0868ac69 +0x03:  sub    $0x38,%esp
0868ac6c +0x06:  mov    0x14(%ebp),%eax
0868ac6f +0x09:  mov    %al,-0x1c(%ebp)
0868ac72 +0x0c:  movl   $0xb,0x4(%esp)
0868ac7a +0x14:  mov    0x8(%ebp),%eax
0868ac7d +0x17:  mov    %eax,(%esp)
0868ac80 +0x1a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868ac85 +0x1f:  mov    %eax,-0x10(%ebp)
0868ac88 +0x22:  cmpl   $0x0,-0x10(%ebp)
0868ac8c +0x26:  je     0868acfb <+0x95>
0868ac8e +0x28:  mov    -0x10(%ebp),%eax
0868ac91 +0x2b:  mov    %eax,(%esp)
0868ac94 +0x2e:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
0868ac99 +0x33:  mov    %eax,-0xc(%ebp)
0868ac9c +0x36:  mov    0xc(%ebp),%eax
0868ac9f +0x39:  mov    %eax,0x4(%esp)
0868aca3 +0x3d:  mov    -0x10(%ebp),%eax
0868aca6 +0x40:  mov    %eax,(%esp)
0868aca9 +0x43:  call   08695a1c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2271>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2271
0868acae +0x48:  movzbl -0x1c(%ebp),%eax
0868acb2 +0x4c:  xor    $0x1,%eax
0868acb5 +0x4f:  test   %al,%al
0868acb7 +0x51:  je     0868acd3 <+0x6d>
0868acb9 +0x53:  movl   $0x0,0x8(%esp)
0868acc1 +0x5b:  mov    0x8(%ebp),%eax
0868acc4 +0x5e:  mov    %eax,0x4(%esp)
0868acc8 +0x62:  mov    -0x10(%ebp),%eax
0868accb +0x65:  mov    %eax,(%esp)
0868acce +0x68:  call   085ef6fc <_ZN10CQuestShop12sendCharacQpEP5CUserc>  ; CQuestShop::sendCharacQp(CUser*, char)
0868acd3 +0x6d:  mov    0x8(%ebp),%eax
0868acd6 +0x70:  lea    0x79700(%eax),%edx
0868acdc +0x76:  mov    0xc(%ebp),%eax
0868acdf +0x79:  mov    %eax,0xc(%esp)
0868ace3 +0x7d:  mov    0x10(%ebp),%eax
0868ace6 +0x80:  mov    %eax,0x8(%esp)
0868acea +0x84:  mov    -0xc(%ebp),%eax
0868aced +0x87:  mov    %eax,0x4(%esp)
0868acf1 +0x8b:  mov    %edx,(%esp)
0868acf4 +0x8e:  call   0868888c <_ZN15cUserHistoryLog5QPAddEiii>  ; cUserHistoryLog::QPAdd(int, int, int)
0868acf9 +0x93:  jmp    0868acfc <+0x96>
0868acfb +0x95:  nop
0868acfc +0x96:  leave
0868acfd +0x97:  ret
```

## 反编译 C

```c
// CUser::incQuestPoint @ 0x868ac66

/* CUser::incQuestPoint(int, int, bool) */

void __thiscall CUser::incQuestPoint(CUser *this,int param_1,int param_2,bool param_3)

{
  CQuestShop *this_00;
  int iVar1;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    iVar1 = CQuestShop::getQp(this_00);
    CQuestShop::addQp(this_00,param_1);
    if (!param_3) {
      CQuestShop::sendCharacQp(this_00,this,'\0');
    }
    cUserHistoryLog::QPAdd((cUserHistoryLog *)(this + 0x79700),iVar1,param_2,param_1);
  }
  return;
}
```

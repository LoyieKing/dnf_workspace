# clearQP

`_ZN10CQuestShop7clearQPEP5CUser`

`CQuestShop::clearQP(CUser*)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef54c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef54c  _ZN10CQuestShop7clearQPEP5CUser
#           CQuestShop::clearQP(CUser*)
# range [0x085ef54c, 0x085ef5db]
085ef54c +0x00:  push   %ebp
085ef54d +0x01:  mov    %esp,%ebp
085ef54f +0x03:  sub    $0x38,%esp
085ef552 +0x06:  mov    0x8(%ebp),%eax
085ef555 +0x09:  mov    %eax,(%esp)
085ef558 +0x0c:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef55d +0x11:  mov    %eax,-0x14(%ebp)
085ef560 +0x14:  mov    0xc(%ebp),%eax
085ef563 +0x17:  mov    %eax,(%esp)
085ef566 +0x1a:  call   0868adfc <_ZN5CUser17setInitQuestPointEv>  ; CUser::setInitQuestPoint()
085ef56b +0x1f:  mov    0x8(%ebp),%eax
085ef56e +0x22:  mov    %eax,(%esp)
085ef571 +0x25:  call   085eff38 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xa4>  ; global constructors keyed to CQuestShop::CQuestShop()+0xa4
085ef576 +0x2a:  mov    %eax,-0x10(%ebp)
085ef579 +0x2d:  mov    -0x10(%ebp),%eax
085ef57c +0x30:  mov    %eax,0x4(%esp)
085ef580 +0x34:  mov    0x8(%ebp),%eax
085ef583 +0x37:  mov    %eax,(%esp)
085ef586 +0x3a:  call   085efee0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x4c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x4c
085ef58b +0x3f:  mov    0x8(%ebp),%eax
085ef58e +0x42:  mov    %eax,(%esp)
085ef591 +0x45:  call   085eed08 <_ZN10CQuestShop21clearBuyingStatuslistEv>  ; CQuestShop::clearBuyingStatuslist()
085ef596 +0x4a:  mov    0x8(%ebp),%eax
085ef599 +0x4d:  mov    %eax,(%esp)
085ef59c +0x50:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef5a1 +0x55:  mov    %eax,-0xc(%ebp)
085ef5a4 +0x58:  mov    0x8(%ebp),%eax
085ef5a7 +0x5b:  mov    %eax,(%esp)
085ef5aa +0x5e:  call   085eff0a <_GLOBAL__I__ZN10CQuestShopC2Ev+0x76>  ; global constructors keyed to CQuestShop::CQuestShop()+0x76
085ef5af +0x63:  mov    0xc(%ebp),%edx
085ef5b2 +0x66:  add    $0x79700,%edx
085ef5b8 +0x6c:  movl   $0x0,0x10(%esp)
085ef5c0 +0x74:  mov    %eax,0xc(%esp)
085ef5c4 +0x78:  mov    -0xc(%ebp),%eax
085ef5c7 +0x7b:  mov    %eax,0x8(%esp)
085ef5cb +0x7f:  mov    -0x14(%ebp),%eax
085ef5ce +0x82:  mov    %eax,0x4(%esp)
085ef5d2 +0x86:  mov    %edx,(%esp)
085ef5d5 +0x89:  call   086888be <_ZN15cUserHistoryLog11ClearUsedQPEiiii>  ; cUserHistoryLog::ClearUsedQP(int, int, int, int)
085ef5da +0x8e:  leave
085ef5db +0x8f:  ret
```

## 反编译 C

```c
// CQuestShop::clearQP @ 0x85ef54c

/* CQuestShop::clearQP(CUser*) */

void __thiscall CQuestShop::clearQP(CQuestShop *this,CUser *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = getQp(this);
  CUser::setInitQuestPoint(param_1);
  iVar2 = getInitQp(this);
  setQp(this,iVar2);
  clearBuyingStatuslist(this);
  iVar2 = getQp(this);
  iVar3 = getInitCount(this);
  cUserHistoryLog::ClearUsedQP((cUserHistoryLog *)(param_1 + 0x79700),iVar1,iVar2,iVar3,0);
  return;
}
```

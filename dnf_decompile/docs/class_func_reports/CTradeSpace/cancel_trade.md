# cancel_trade

`_ZN11CTradeSpace12cancel_tradeEv`

`CTradeSpace::cancel_trade()`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852effa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852effa  _ZN11CTradeSpace12cancel_tradeEv
#           CTradeSpace::cancel_trade()
# range [0x0852effa, 0x0852f085]
0852effa +0x00:  push   %ebp
0852effb +0x01:  mov    %esp,%ebp
0852effd +0x03:  sub    $0x28,%esp
0852f000 +0x06:  mov    0x8(%ebp),%eax
0852f003 +0x09:  mov    0x20(%eax),%eax
0852f006 +0x0c:  mov    %eax,(%esp)
0852f009 +0x0f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852f00e +0x14:  test   %eax,%eax
0852f010 +0x16:  je     0852f024 <+0x2a>
0852f012 +0x18:  mov    0x8(%ebp),%eax
0852f015 +0x1b:  mov    0x24(%eax),%eax
0852f018 +0x1e:  mov    %eax,(%esp)
0852f01b +0x21:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852f020 +0x26:  test   %eax,%eax
0852f022 +0x28:  jne    0852f02b <+0x31>
0852f024 +0x2a:  mov    $0x1,%eax
0852f029 +0x2f:  jmp    0852f030 <+0x36>
0852f02b +0x31:  mov    $0x0,%eax
0852f030 +0x36:  test   %al,%al
0852f032 +0x38:  je     0852f071 <+0x77>
0852f034 +0x3a:  movl   $0x5,0xc(%esp)
0852f03c +0x42:  movl   $0x788,0x8(%esp)
0852f044 +0x4a:  movl   $&_ZZN11CTradeSpace12cancel_tradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
0852f04c +0x52:  lea    -0x18(%ebp),%eax
0852f04f +0x55:  mov    %eax,(%esp)
0852f052 +0x58:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852f057 +0x5d:  movl   $"CTradeSpace::cancel_trade()\t0 == m_pTraders[0]->getCurCharacR() || m_pTraders[1]->getCurCharacR()",0x4(%esp)
0852f05f +0x65:  lea    -0x18(%ebp),%eax
0852f062 +0x68:  mov    %eax,(%esp)
0852f065 +0x6b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852f06a +0x70:  mov    $0x0,%eax
0852f06f +0x75:  jmp    0852f084 <+0x8a>
0852f071 +0x77:  movl   $0x0,0x4(%esp)
0852f079 +0x7f:  mov    0x8(%ebp),%eax
0852f07c +0x82:  mov    %eax,(%esp)
0852f07f +0x85:  call   0852e544 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser>  ; CTradeSpace::cancel_trade_for_china(CUser*)
0852f084 +0x8a:  leave
0852f085 +0x8b:  ret
```

## 反编译 C

```c
// CTradeSpace::cancel_trade @ 0x852effa

/* CTradeSpace::cancel_trade() */

undefined4 __thiscall CTradeSpace::cancel_trade(CTradeSpace *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_1c [24];
  
  iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
  if (iVar2 != 0) {
    iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24));
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0852f030;
    }
  }
  bVar1 = true;
LAB_0852f030:
  if (bVar1) {
    cMyTrace::cMyTrace(local_1c,"bool CTradeSpace::cancel_trade()",0x788,5);
    cMyTrace::operator()
              (local_1c,
               "CTradeSpace::cancel_trade()\t0 == m_pTraders[0]->getCurCharacR() || m_pTraders[1]->getCurCharacR()"
              );
    uVar3 = 0;
  }
  else {
    uVar3 = cancel_trade_for_china(this,(CUser *)0x0);
  }
  return uVar3;
}
```

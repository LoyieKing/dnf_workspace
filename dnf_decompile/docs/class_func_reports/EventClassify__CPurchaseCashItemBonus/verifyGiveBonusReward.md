# verifyGiveBonusReward

`_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi`

`EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward(PurchaseCashItemBonusScript::PurchaseBonusRule&, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CPurchaseCashItemBonus` | `0x0810fae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810fae0  _ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi
#           EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward(PurchaseCashItemBonusScript::PurchaseBonusRule&, int)
# range [0x0810fae0, 0x0810fb33]
0810fae0 +0x00:  push   %ebp
0810fae1 +0x01:  mov    %esp,%ebp
0810fae3 +0x03:  sub    $0x4,%esp
0810fae6 +0x06:  mov    0xc(%ebp),%eax
0810fae9 +0x09:  mov    (%eax),%eax
0810faeb +0x0b:  cmp    0x10(%ebp),%eax
0810faee +0x0e:  jg     0810fb2d <+0x4d>
0810faf0 +0x10:  mov    0xc(%ebp),%eax
0810faf3 +0x13:  mov    0x4(%eax),%eax
0810faf6 +0x16:  cmp    0x10(%ebp),%eax
0810faf9 +0x19:  jge    0810fb05 <+0x25>
0810fafb +0x1b:  mov    0xc(%ebp),%eax
0810fafe +0x1e:  mov    0x4(%eax),%eax
0810fb01 +0x21:  test   %eax,%eax
0810fb03 +0x23:  jne    0810fb2d <+0x4d>
0810fb05 +0x25:  mov    0xc(%ebp),%eax
0810fb08 +0x28:  mov    (%eax),%eax
0810fb0a +0x2a:  mov    0x10(%ebp),%edx
0810fb0d +0x2d:  sub    %eax,%edx
0810fb0f +0x2f:  mov    0xc(%ebp),%eax
0810fb12 +0x32:  mov    0x8(%eax),%eax
0810fb15 +0x35:  mov    %eax,-0x4(%ebp)
0810fb18 +0x38:  mov    %edx,%eax
0810fb1a +0x3a:  sar    $0x1f,%edx
0810fb1d +0x3d:  idivl  -0x4(%ebp)
0810fb20 +0x40:  mov    %edx,%eax
0810fb22 +0x42:  test   %eax,%eax
0810fb24 +0x44:  jne    0810fb2d <+0x4d>
0810fb26 +0x46:  mov    $0x1,%eax
0810fb2b +0x4b:  jmp    0810fb32 <+0x52>
0810fb2d +0x4d:  mov    $0x0,%eax
0810fb32 +0x52:  leave
0810fb33 +0x53:  ret
```

## 反编译 C

```c
// EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward @ 0x810fae0

/* EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward(PurchaseCashItemBonusScript::PurchaseBonusRule&,
   int) */

undefined4 __thiscall
EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward
          (CPurchaseCashItemBonus *this,PurchaseBonusRule *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < *(int *)param_1) ||
     (((*(int *)(param_1 + 4) < param_2 && (*(int *)(param_1 + 4) != 0)) ||
      ((param_2 - *(int *)param_1) % *(int *)(param_1 + 8) != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

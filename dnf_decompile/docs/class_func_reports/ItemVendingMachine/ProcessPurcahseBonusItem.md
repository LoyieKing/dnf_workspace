# ProcessPurcahseBonusItem

`_ZN18ItemVendingMachine24ProcessPurcahseBonusItemEP5CUsermit`

`ItemVendingMachine::ProcessPurcahseBonusItem(CUser*, unsigned long, int, unsigned short)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08179f08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08179f08  _ZN18ItemVendingMachine24ProcessPurcahseBonusItemEP5CUsermit
#           ItemVendingMachine::ProcessPurcahseBonusItem(CUser*, unsigned long, int, unsigned short)
# range [0x08179f08, 0x08179f41]
08179f08 +0x00:  push   %ebp
08179f09 +0x01:  mov    %esp,%ebp
08179f0b +0x03:  sub    $0x38,%esp
08179f0e +0x06:  mov    0x18(%ebp),%eax
08179f11 +0x09:  mov    %ax,-0xc(%ebp)
08179f15 +0x0d:  movzwl -0xc(%ebp),%eax
08179f19 +0x11:  mov    0x8(%ebp),%edx
08179f1c +0x14:  add    $0x8,%edx
08179f1f +0x17:  mov    %eax,0x10(%esp)
08179f23 +0x1b:  mov    0x14(%ebp),%eax
08179f26 +0x1e:  mov    %eax,0xc(%esp)
08179f2a +0x22:  mov    0x10(%ebp),%eax
08179f2d +0x25:  mov    %eax,0x8(%esp)
08179f31 +0x29:  mov    0xc(%ebp),%eax
08179f34 +0x2c:  mov    %eax,0x4(%esp)
08179f38 +0x30:  mov    %edx,(%esp)
08179f3b +0x33:  call   081abf44 <_ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit>  ; ARAD::CeraShopPurcahseCountBonus::GiveBonusItem(CUser*, unsigned long, int, unsigned short)
08179f40 +0x38:  leave
08179f41 +0x39:  ret
```

## 反编译 C

```c
// ItemVendingMachine::ProcessPurcahseBonusItem @ 0x8179f08

/* ItemVendingMachine::ProcessPurcahseBonusItem(CUser*, unsigned long, int, unsigned short) */

void __thiscall
ItemVendingMachine::ProcessPurcahseBonusItem
          (ItemVendingMachine *this,CUser *param_1,ulong param_2,int param_3,ushort param_4)

{
  ARAD::CeraShopPurcahseCountBonus::GiveBonusItem
            ((CeraShopPurcahseCountBonus *)(this + 8),param_1,param_2,param_3,param_4);
  return;
}
```

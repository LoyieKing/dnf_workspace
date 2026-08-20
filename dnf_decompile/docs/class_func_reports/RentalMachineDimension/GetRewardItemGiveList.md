# GetRewardItemGiveList

`_ZN22RentalMachineDimension21GetRewardItemGiveListEii`

`RentalMachineDimension::GetRewardItemGiveList(int, int)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826f814` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f814  _ZN22RentalMachineDimension21GetRewardItemGiveListEii
#           RentalMachineDimension::GetRewardItemGiveList(int, int)
# range [0x0826f814, 0x0826f841]
0826f814 +0x00:  push   %ebp
0826f815 +0x01:  mov    %esp,%ebp
0826f817 +0x03:  sub    $0x28,%esp
0826f81a +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826f81f +0x0b:  add    $0x4b34,%eax
0826f824 +0x10:  mov    %eax,-0xc(%ebp)
0826f827 +0x13:  mov    0x10(%ebp),%eax
0826f82a +0x16:  mov    %eax,0x8(%esp)
0826f82e +0x1a:  mov    0xc(%ebp),%eax
0826f831 +0x1d:  mov    %eax,0x4(%esp)
0826f835 +0x21:  mov    -0xc(%ebp),%eax
0826f838 +0x24:  mov    %eax,(%esp)
0826f83b +0x27:  call   08916004 <_ZN29DimensionActivationRewardData21getRewardGiveItemListEii>  ; DimensionActivationRewardData::getRewardGiveItemList(int, int)
0826f840 +0x2c:  leave
0826f841 +0x2d:  ret
```

## 反编译 C

```c
// RentalMachineDimension::GetRewardItemGiveList @ 0x826f814

/* RentalMachineDimension::GetRewardItemGiveList(int, int) */

void __thiscall
RentalMachineDimension::GetRewardItemGiveList(RentalMachineDimension *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  DimensionActivationRewardData::getRewardGiveItemList
            ((DimensionActivationRewardData *)(iVar1 + 0x4b34),param_1,param_2);
  return;
}
```

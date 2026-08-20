# statistic_process

`_ZN18DisPatcher_BuyItem17statistic_processEP5CUserR12BuyItemParam`

`DisPatcher_BuyItem::statistic_process(CUser*, BuyItemParam&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081bec5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bec5e  _ZN18DisPatcher_BuyItem17statistic_processEP5CUserR12BuyItemParam
#           DisPatcher_BuyItem::statistic_process(CUser*, BuyItemParam&)
# range [0x081bec5e, 0x081bed43]
081bec5e +0x00:  push   %ebp
081bec5f +0x01:  mov    %esp,%ebp
081bec61 +0x03:  push   %edi
081bec62 +0x04:  push   %esi
081bec63 +0x05:  push   %ebx
081bec64 +0x06:  sub    $0x3c,%esp
081bec67 +0x09:  mov    0x10(%ebp),%eax
081bec6a +0x0c:  add    $0xb0,%eax
081bec6f +0x11:  mov    %eax,-0x1c(%ebp)
081bec72 +0x14:  mov    0x10(%ebp),%eax
081bec75 +0x17:  mov    0xb(%eax),%eax
081bec78 +0x1a:  movswl %ax,%esi
081bec7b +0x1d:  mov    0x10(%ebp),%eax
081bec7e +0x20:  mov    0xa8(%eax),%ebx
081bec84 +0x26:  mov    0x10(%ebp),%eax
081bec87 +0x29:  lea    0x4(%eax),%edi
081bec8a +0x2c:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
081bec8f +0x31:  mov    -0x1c(%ebp),%edx
081bec92 +0x34:  mov    %edx,0x14(%esp)
081bec96 +0x38:  movl   $0x0,0x10(%esp)
081bec9e +0x40:  mov    %esi,0xc(%esp)
081beca2 +0x44:  mov    %ebx,0x8(%esp)
081beca6 +0x48:  mov    %edi,0x4(%esp)
081becaa +0x4c:  mov    %eax,(%esp)
081becad +0x4f:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
081becb2 +0x54:  mov    0x10(%ebp),%eax
081becb5 +0x57:  mov    0xb0(%eax),%eax
081becbb +0x5d:  mov    %eax,%ebx
081becbd +0x5f:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
081becc2 +0x64:  mov    %ebx,0xc(%esp)
081becc6 +0x68:  mov    0xc(%ebp),%edx
081becc9 +0x6b:  mov    %edx,0x8(%esp)
081beccd +0x6f:  movl   $0x6,0x4(%esp)
081becd5 +0x77:  mov    %eax,(%esp)
081becd8 +0x7a:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
081becdd +0x7f:  mov    0x10(%ebp),%eax
081bece0 +0x82:  mov    0x80(%eax),%ebx
081bece6 +0x88:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
081beceb +0x8d:  mov    %ebx,0xc(%esp)
081becef +0x91:  mov    0xc(%ebp),%edx
081becf2 +0x94:  mov    %edx,0x8(%esp)
081becf6 +0x98:  movl   $0xd,0x4(%esp)
081becfe +0xa0:  mov    %eax,(%esp)
081bed01 +0xa3:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
081bed06 +0xa8:  mov    0x10(%ebp),%eax
081bed09 +0xab:  mov    0x9c(%eax),%esi
081bed0f +0xb1:  mov    0x10(%ebp),%eax
081bed12 +0xb4:  mov    0x98(%eax),%ebx
081bed18 +0xba:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
081bed1d +0xbf:  movl   $0x6a,0x10(%esp)
081bed25 +0xc7:  mov    0xc(%ebp),%edx
081bed28 +0xca:  mov    %edx,0xc(%esp)
081bed2c +0xce:  mov    %esi,0x8(%esp)
081bed30 +0xd2:  mov    %ebx,0x4(%esp)
081bed34 +0xd6:  mov    %eax,(%esp)
081bed37 +0xd9:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
081bed3c +0xde:  add    $0x3c,%esp
081bed3f +0xe1:  pop    %ebx
081bed40 +0xe2:  pop    %esi
081bed41 +0xe3:  pop    %edi
081bed42 +0xe4:  pop    %ebp
081bed43 +0xe5:  ret
```

## 反编译 C

```c
// DisPatcher_BuyItem::statistic_process @ 0x81bec5e

/* DisPatcher_BuyItem::statistic_process(CUser*, BuyItemParam&) */

void __thiscall
DisPatcher_BuyItem::statistic_process(DisPatcher_BuyItem *this,CUser *param_1,BuyItemParam *param_2)

{
  undefined4 uVar1;
  CItem *pCVar2;
  undefined4 uVar3;
  Store *this_00;
  CValueStatistic *pCVar4;
  CCubeStatistic *pCVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  pCVar2 = *(CItem **)(param_2 + 0xa8);
  this_00 = (Store *)G_Store();
  Store::GetSellItemPrice
            (this_00,(Inven_Item *)(param_2 + 4),pCVar2,(short)uVar1,false,(int *)(param_2 + 0xb0));
  uVar1 = *(undefined4 *)(param_2 + 0xb0);
  pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
  CValueStatistic::AddValueStatistic(pCVar4,6,param_1,uVar1);
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
  CValueStatistic::AddValueStatistic(pCVar4,0xd,param_1,uVar1);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  pCVar5 = (CCubeStatistic *)GetInstanceCubeStatistic();
  CCubeStatistic::collectCubeStatistics(pCVar5,uVar3,uVar1,param_1,0x6a);
  return;
}
```

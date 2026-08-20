# GetFinalProbability

`_ZN18ItemVendingMachine19GetFinalProbabilityEi`

`ItemVendingMachine::GetFinalProbability(int)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0854c470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854c470  _ZN18ItemVendingMachine19GetFinalProbabilityEi
#           ItemVendingMachine::GetFinalProbability(int)
# range [0x0854c470, 0x0854c4cf]
0854c470 +0x00:  push   %ebp
0854c471 +0x01:  mov    %esp,%ebp
0854c473 +0x03:  sub    $0x38,%esp
0854c476 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854c47b +0x0b:  mov    0xc(%ebp),%edx
0854c47e +0x0e:  mov    %edx,0x4(%esp)
0854c482 +0x12:  mov    %eax,(%esp)
0854c485 +0x15:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
0854c48a +0x1a:  mov    %eax,-0xc(%ebp)
0854c48d +0x1d:  mov    -0xc(%ebp),%eax
0854c490 +0x20:  mov    %eax,(%esp)
0854c493 +0x23:  call   0854c582 <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x1d>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x1d
0854c498 +0x28:  fstps  -0x24(%ebp)
0854c49b +0x2b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854c4a0 +0x30:  mov    0xc(%eax),%eax
0854c4a3 +0x33:  mov    %eax,(%esp)
0854c4a6 +0x36:  call   0854c596 <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x31>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x31
0854c4ab +0x3b:  mov    %eax,-0x1c(%ebp)
0854c4ae +0x3e:  fildl  -0x1c(%ebp)
0854c4b1 +0x41:  fmuls  -0x24(%ebp)
0854c4b4 +0x44:  fnstcw -0x1e(%ebp)
0854c4b7 +0x47:  movzwl -0x1e(%ebp),%eax
0854c4bb +0x4b:  mov    $0xc,%ah
0854c4bd +0x4d:  mov    %ax,-0x20(%ebp)
0854c4c1 +0x51:  fldcw  -0x20(%ebp)
0854c4c4 +0x54:  fistpl -0x1c(%ebp)
0854c4c7 +0x57:  fldcw  -0x1e(%ebp)
0854c4ca +0x5a:  mov    -0x1c(%ebp),%eax
0854c4cd +0x5d:  leave
0854c4ce +0x5e:  ret
0854c4cf +0x5f:  nop
```

## 反编译 C

```c
// ItemVendingMachine::GetFinalProbability @ 0x854c470

/* ItemVendingMachine::GetFinalProbability(int) */

int ItemVendingMachine::GetFinalProbability(int param_1)

{
  int iVar1;
  CCeraShopGoods *this;
  longdouble lVar2;
  
  iVar1 = G_CDataManager();
  this = (CCeraShopGoods *)CDataManager::FindGoods(iVar1);
  lVar2 = (longdouble)CCeraShopGoods::GetBonusWeight(this);
  iVar1 = G_CDataManager();
  iVar1 = CItemList::GetVendingBonusRate(*(CItemList **)(iVar1 + 0xc));
  return (int)ROUND((float)iVar1 * (float)lVar2);
}
```

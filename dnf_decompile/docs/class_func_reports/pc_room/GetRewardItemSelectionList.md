# GetRewardItemSelectionList

`_ZN7pc_room26GetRewardItemSelectionListEii`

`pc_room::GetRewardItemSelectionList(int, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x082712da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082712da  _ZN7pc_room26GetRewardItemSelectionListEii
#           pc_room::GetRewardItemSelectionList(int, int)
# range [0x082712da, 0x08271337]
082712da +0x00:  push   %ebp
082712db +0x01:  mov    %esp,%ebp
082712dd +0x03:  sub    $0x28,%esp
082712e0 +0x06:  mov    0xc(%ebp),%eax
082712e3 +0x09:  cmp    $0x1,%eax
082712e6 +0x0c:  je     082712ef <+0x15>
082712e8 +0x0e:  cmp    $0x2,%eax
082712eb +0x11:  je     08271310 <+0x36>
082712ed +0x13:  jmp    08271331 <+0x57>
082712ef +0x15:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082712f4 +0x1a:  add    $0x4af4,%eax
082712f9 +0x1f:  mov    %eax,-0x10(%ebp)
082712fc +0x22:  mov    0x8(%ebp),%eax
082712ff +0x25:  mov    %eax,0x4(%esp)
08271303 +0x29:  mov    -0x10(%ebp),%eax
08271306 +0x2c:  mov    %eax,(%esp)
08271309 +0x2f:  call   0891559c <_ZN20PcBangItemRentarData22getRewardSelectionListEi>  ; PcBangItemRentarData::getRewardSelectionList(int)
0827130e +0x34:  jmp    08271336 <+0x5c>
08271310 +0x36:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08271315 +0x3b:  add    $0x4b34,%eax
0827131a +0x40:  mov    %eax,-0xc(%ebp)
0827131d +0x43:  mov    0x8(%ebp),%eax
08271320 +0x46:  mov    %eax,0x4(%esp)
08271324 +0x4a:  mov    -0xc(%ebp),%eax
08271327 +0x4d:  mov    %eax,(%esp)
0827132a +0x50:  call   08916086 <_ZN29DimensionActivationRewardData23getRewardSelectItemListEi>  ; DimensionActivationRewardData::getRewardSelectItemList(int)
0827132f +0x55:  jmp    08271336 <+0x5c>
08271331 +0x57:  mov    $0x0,%eax
08271336 +0x5c:  leave
08271337 +0x5d:  ret
```

## 反编译 C

```c
// pc_room::GetRewardItemSelectionList @ 0x82712da

/* pc_room::GetRewardItemSelectionList(int, int) */

undefined4 pc_room::GetRewardItemSelectionList(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = G_CDataManager();
    uVar2 = PcBangItemRentarData::getRewardSelectionList(iVar1 + 0x4af4);
  }
  else if (param_2 == 2) {
    iVar1 = G_CDataManager();
    uVar2 = DimensionActivationRewardData::getRewardSelectItemList(iVar1 + 0x4b34);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

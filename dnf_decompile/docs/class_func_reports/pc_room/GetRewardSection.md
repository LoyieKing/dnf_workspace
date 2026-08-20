# GetRewardSection

`_ZN7pc_room16GetRewardSectionEii`

`pc_room::GetRewardSection(int, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08271338` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08271338  _ZN7pc_room16GetRewardSectionEii
#           pc_room::GetRewardSection(int, int)
# range [0x08271338, 0x08271395]
08271338 +0x00:  push   %ebp
08271339 +0x01:  mov    %esp,%ebp
0827133b +0x03:  sub    $0x28,%esp
0827133e +0x06:  mov    0xc(%ebp),%eax
08271341 +0x09:  cmp    $0x1,%eax
08271344 +0x0c:  je     0827134d <+0x15>
08271346 +0x0e:  cmp    $0x2,%eax
08271349 +0x11:  je     0827136e <+0x36>
0827134b +0x13:  jmp    0827138f <+0x57>
0827134d +0x15:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08271352 +0x1a:  add    $0x4af4,%eax
08271357 +0x1f:  mov    %eax,-0x10(%ebp)
0827135a +0x22:  mov    0x8(%ebp),%eax
0827135d +0x25:  mov    %eax,0x4(%esp)
08271361 +0x29:  mov    -0x10(%ebp),%eax
08271364 +0x2c:  mov    %eax,(%esp)
08271367 +0x2f:  call   08915518 <_ZN20PcBangItemRentarData14getSectionDataEi>  ; PcBangItemRentarData::getSectionData(int)
0827136c +0x34:  jmp    08271394 <+0x5c>
0827136e +0x36:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08271373 +0x3b:  add    $0x4b34,%eax
08271378 +0x40:  mov    %eax,-0xc(%ebp)
0827137b +0x43:  mov    0x8(%ebp),%eax
0827137e +0x46:  mov    %eax,0x4(%esp)
08271382 +0x4a:  mov    -0xc(%ebp),%eax
08271385 +0x4d:  mov    %eax,(%esp)
08271388 +0x50:  call   08915f16 <_ZN29DimensionActivationRewardData14getSectionDataEi>  ; DimensionActivationRewardData::getSectionData(int)
0827138d +0x55:  jmp    08271394 <+0x5c>
0827138f +0x57:  mov    $0x0,%eax
08271394 +0x5c:  leave
08271395 +0x5d:  ret
```

## 反编译 C

```c
// pc_room::GetRewardSection @ 0x8271338

/* pc_room::GetRewardSection(int, int) */

undefined4 pc_room::GetRewardSection(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = G_CDataManager();
    uVar2 = PcBangItemRentarData::getSectionData((PcBangItemRentarData *)(iVar1 + 0x4af4),param_1);
  }
  else if (param_2 == 2) {
    iVar1 = G_CDataManager();
    uVar2 = DimensionActivationRewardData::getSectionData
                      ((DimensionActivationRewardData *)(iVar1 + 0x4b34),param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

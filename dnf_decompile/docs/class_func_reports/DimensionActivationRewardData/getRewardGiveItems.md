# getRewardGiveItems

`_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii`

`DimensionActivationRewardData::getRewardGiveItems(int, int, int)`

| 类 | 地址 |
|---|---|
| `DimensionActivationRewardData` | `0x08915f9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08915f9a  _ZN29DimensionActivationRewardData18getRewardGiveItemsEiii
#           DimensionActivationRewardData::getRewardGiveItems(int, int, int)
# range [0x08915f9a, 0x08916003]
08915f9a +0x00:  push   %ebp
08915f9b +0x01:  mov    %esp,%ebp
08915f9d +0x03:  sub    $0x28,%esp
08915fa0 +0x06:  mov    0x14(%ebp),%eax
08915fa3 +0x09:  mov    %eax,0x8(%esp)
08915fa7 +0x0d:  mov    0x10(%ebp),%eax
08915faa +0x10:  mov    %eax,0x4(%esp)
08915fae +0x14:  mov    0x8(%ebp),%eax
08915fb1 +0x17:  mov    %eax,(%esp)
08915fb4 +0x1a:  call   08916004 <_ZN29DimensionActivationRewardData21getRewardGiveItemListEii>  ; DimensionActivationRewardData::getRewardGiveItemList(int, int)
08915fb9 +0x1f:  mov    %eax,-0xc(%ebp)
08915fbc +0x22:  cmpl   $0x0,-0xc(%ebp)
08915fc0 +0x26:  je     08915ffc <+0x62>
08915fc2 +0x28:  cmpl   $0x0,0xc(%ebp)
08915fc6 +0x2c:  js     08915fdf <+0x45>
08915fc8 +0x2e:  mov    -0xc(%ebp),%eax
08915fcb +0x31:  mov    %eax,(%esp)
08915fce +0x34:  call   0826fe58 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x45a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x45a
08915fd3 +0x39:  cmp    0xc(%ebp),%eax
08915fd6 +0x3c:  jl     08915fdf <+0x45>
08915fd8 +0x3e:  mov    $0x1,%eax
08915fdd +0x43:  jmp    08915fe4 <+0x4a>
08915fdf +0x45:  mov    $0x0,%eax
08915fe4 +0x4a:  test   %al,%al
08915fe6 +0x4c:  je     08915ffc <+0x62>
08915fe8 +0x4e:  mov    0xc(%ebp),%eax
08915feb +0x51:  mov    %eax,0x4(%esp)
08915fef +0x55:  mov    -0xc(%ebp),%eax
08915ff2 +0x58:  mov    %eax,(%esp)
08915ff5 +0x5b:  call   0826fe7a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x47c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x47c
08915ffa +0x60:  jmp    08916001 <+0x67>
08915ffc +0x62:  mov    $0x0,%eax
08916001 +0x67:  leave
08916002 +0x68:  ret
08916003 +0x69:  nop
```

## 反编译 C

```c
// DimensionActivationRewardData::getRewardGiveItems @ 0x8915f9a

/* DimensionActivationRewardData::getRewardGiveItems(int, int, int) */

undefined4 __thiscall
DimensionActivationRewardData::getRewardGiveItems
          (DimensionActivationRewardData *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  *this_00;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
             *)getRewardGiveItemList(this,param_2,param_3);
  if (this_00 !=
      (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
       *)0x0) {
    if ((param_1 < 0) ||
       (iVar2 = std::
                vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                ::size(this_00), iVar2 < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = std::
              vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
              ::at(this_00,param_1);
      return uVar3;
    }
  }
  return 0;
}
```

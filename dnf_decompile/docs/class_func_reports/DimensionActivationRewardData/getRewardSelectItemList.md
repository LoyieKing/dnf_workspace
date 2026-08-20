# getRewardSelectItemList

`_ZN29DimensionActivationRewardData23getRewardSelectItemListEi`

`DimensionActivationRewardData::getRewardSelectItemList(int)`

| 类 | 地址 |
|---|---|
| `DimensionActivationRewardData` | `0x08916086` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08916086  _ZN29DimensionActivationRewardData23getRewardSelectItemListEi
#           DimensionActivationRewardData::getRewardSelectItemList(int)
# range [0x08916086, 0x089160ef]
08916086 +0x00:  push   %ebp
08916087 +0x01:  mov    %esp,%ebp
08916089 +0x03:  sub    $0x28,%esp
0891608c +0x06:  mov    0x8(%ebp),%eax
0891608f +0x09:  lea    0xc(%eax),%ecx
08916092 +0x0c:  lea    -0x10(%ebp),%eax
08916095 +0x0f:  lea    0xc(%ebp),%edx
08916098 +0x12:  mov    %edx,0x8(%esp)
0891609c +0x16:  mov    %ecx,0x4(%esp)
089160a0 +0x1a:  mov    %eax,(%esp)
089160a3 +0x1d:  call   08921b2c <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x880b>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x880b
089160a8 +0x22:  sub    $0x4,%esp
089160ab +0x25:  mov    0x8(%ebp),%eax
089160ae +0x28:  lea    0xc(%eax),%edx
089160b1 +0x2b:  lea    -0xc(%ebp),%eax
089160b4 +0x2e:  mov    %edx,0x4(%esp)
089160b8 +0x32:  mov    %eax,(%esp)
089160bb +0x35:  call   0826fc1e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x220>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x220
089160c0 +0x3a:  sub    $0x4,%esp
089160c3 +0x3d:  lea    -0xc(%ebp),%eax
089160c6 +0x40:  mov    %eax,0x4(%esp)
089160ca +0x44:  lea    -0x10(%ebp),%eax
089160cd +0x47:  mov    %eax,(%esp)
089160d0 +0x4a:  call   0826fc44 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x246>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x246
089160d5 +0x4f:  test   %al,%al
089160d7 +0x51:  je     089160e9 <+0x63>
089160d9 +0x53:  lea    -0x10(%ebp),%eax
089160dc +0x56:  mov    %eax,(%esp)
089160df +0x59:  call   08921b58 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8837>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8837
089160e4 +0x5e:  add    $0x4,%eax
089160e7 +0x61:  jmp    089160ee <+0x68>
089160e9 +0x63:  mov    $0x0,%eax
089160ee +0x68:  leave
089160ef +0x69:  ret
```

## 反编译 C

```c
// DimensionActivationRewardData::getRewardSelectItemList @ 0x8916086

/* DimensionActivationRewardData::getRewardSelectItemList(int) */

int DimensionActivationRewardData::getRewardSelectItemList(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
  local_14 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator->(local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```

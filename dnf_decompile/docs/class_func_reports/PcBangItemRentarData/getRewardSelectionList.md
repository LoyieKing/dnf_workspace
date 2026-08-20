# getRewardSelectionList

`_ZN20PcBangItemRentarData22getRewardSelectionListEi`

`PcBangItemRentarData::getRewardSelectionList(int)`

| 类 | 地址 |
|---|---|
| `PcBangItemRentarData` | `0x0891559c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0891559c  _ZN20PcBangItemRentarData22getRewardSelectionListEi
#           PcBangItemRentarData::getRewardSelectionList(int)
# range [0x0891559c, 0x08915605]
0891559c +0x00:  push   %ebp
0891559d +0x01:  mov    %esp,%ebp
0891559f +0x03:  sub    $0x28,%esp
089155a2 +0x06:  mov    0x8(%ebp),%eax
089155a5 +0x09:  lea    0xc(%eax),%ecx
089155a8 +0x0c:  lea    -0x10(%ebp),%eax
089155ab +0x0f:  lea    0xc(%ebp),%edx
089155ae +0x12:  mov    %edx,0x8(%esp)
089155b2 +0x16:  mov    %ecx,0x4(%esp)
089155b6 +0x1a:  mov    %eax,(%esp)
089155b9 +0x1d:  call   08921b2c <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x880b>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x880b
089155be +0x22:  sub    $0x4,%esp
089155c1 +0x25:  mov    0x8(%ebp),%eax
089155c4 +0x28:  lea    0xc(%eax),%edx
089155c7 +0x2b:  lea    -0xc(%ebp),%eax
089155ca +0x2e:  mov    %edx,0x4(%esp)
089155ce +0x32:  mov    %eax,(%esp)
089155d1 +0x35:  call   0826fc1e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x220>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x220
089155d6 +0x3a:  sub    $0x4,%esp
089155d9 +0x3d:  lea    -0xc(%ebp),%eax
089155dc +0x40:  mov    %eax,0x4(%esp)
089155e0 +0x44:  lea    -0x10(%ebp),%eax
089155e3 +0x47:  mov    %eax,(%esp)
089155e6 +0x4a:  call   0826fc44 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x246>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x246
089155eb +0x4f:  test   %al,%al
089155ed +0x51:  je     089155ff <+0x63>
089155ef +0x53:  lea    -0x10(%ebp),%eax
089155f2 +0x56:  mov    %eax,(%esp)
089155f5 +0x59:  call   08921b58 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8837>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8837
089155fa +0x5e:  add    $0x4,%eax
089155fd +0x61:  jmp    08915604 <+0x68>
089155ff +0x63:  mov    $0x0,%eax
08915604 +0x68:  leave
08915605 +0x69:  ret
```

## 反编译 C

```c
// PcBangItemRentarData::getRewardSelectionList @ 0x891559c

/* PcBangItemRentarData::getRewardSelectionList(int) */

int PcBangItemRentarData::getRewardSelectionList(int param_1)

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

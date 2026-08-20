# getRewardGiveItemList

`_ZN29DimensionActivationRewardData21getRewardGiveItemListEii`

`DimensionActivationRewardData::getRewardGiveItemList(int, int)`

| 类 | 地址 |
|---|---|
| `DimensionActivationRewardData` | `0x08916004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08916004  _ZN29DimensionActivationRewardData21getRewardGiveItemListEii
#           DimensionActivationRewardData::getRewardGiveItemList(int, int)
# range [0x08916004, 0x08916085]
08916004 +0x00:  push   %ebp
08916005 +0x01:  mov    %esp,%ebp
08916007 +0x03:  sub    $0x28,%esp
0891600a +0x06:  lea    -0x14(%ebp),%eax
0891600d +0x09:  mov    %eax,(%esp)
08916010 +0x0c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08916015 +0x11:  mov    0xc(%ebp),%eax
08916018 +0x14:  mov    %eax,-0x14(%ebp)
0891601b +0x17:  mov    0x10(%ebp),%eax
0891601e +0x1a:  mov    %eax,-0x10(%ebp)
08916021 +0x1d:  mov    0x8(%ebp),%eax
08916024 +0x20:  lea    0x24(%eax),%ecx
08916027 +0x23:  lea    -0x18(%ebp),%eax
0891602a +0x26:  lea    -0x14(%ebp),%edx
0891602d +0x29:  mov    %edx,0x8(%esp)
08916031 +0x2d:  mov    %ecx,0x4(%esp)
08916035 +0x31:  mov    %eax,(%esp)
08916038 +0x34:  call   08921d94 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8a73>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8a73
0891603d +0x39:  sub    $0x4,%esp
08916040 +0x3c:  mov    0x8(%ebp),%eax
08916043 +0x3f:  lea    0x24(%eax),%edx
08916046 +0x42:  lea    -0xc(%ebp),%eax
08916049 +0x45:  mov    %edx,0x4(%esp)
0891604d +0x49:  mov    %eax,(%esp)
08916050 +0x4c:  call   0826fcaa <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x2ac>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x2ac
08916055 +0x51:  sub    $0x4,%esp
08916058 +0x54:  lea    -0xc(%ebp),%eax
0891605b +0x57:  mov    %eax,0x4(%esp)
0891605f +0x5b:  lea    -0x18(%ebp),%eax
08916062 +0x5e:  mov    %eax,(%esp)
08916065 +0x61:  call   0826fcd0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x2d2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x2d2
0891606a +0x66:  test   %al,%al
0891606c +0x68:  je     0891607e <+0x7a>
0891606e +0x6a:  lea    -0x18(%ebp),%eax
08916071 +0x6d:  mov    %eax,(%esp)
08916074 +0x70:  call   08921dc0 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8a9f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8a9f
08916079 +0x75:  add    $0x8,%eax
0891607c +0x78:  jmp    08916083 <+0x7f>
0891607e +0x7a:  mov    $0x0,%eax
08916083 +0x7f:  leave
08916084 +0x80:  ret
08916085 +0x81:  nop
```

## 反编译 C

```c
// DimensionActivationRewardData::getRewardGiveItemList @ 0x8916004

/* DimensionActivationRewardData::getRewardGiveItemList(int, int) */

int __thiscall
DimensionActivationRewardData::getRewardGiveItemList
          (DimensionActivationRewardData *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
  local_1c [4];
  int local_18;
  int local_14;
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_10 [12];
  
  std::pair<int,int>::pair((pair<int,int> *)&local_18);
  local_18 = param_1;
  local_14 = param_2;
  std::
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::find(local_1c);
  std::
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
          ::operator!=(local_1c,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator->(local_1c);
    iVar2 = iVar2 + 8;
  }
  return iVar2;
}
```

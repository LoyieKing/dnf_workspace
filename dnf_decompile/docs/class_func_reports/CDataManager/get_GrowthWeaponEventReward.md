# get_GrowthWeaponEventReward

`_ZNK12CDataManager27get_GrowthWeaponEventRewardEi`

`CDataManager::get_GrowthWeaponEventReward(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083655ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083655ac  _ZNK12CDataManager27get_GrowthWeaponEventRewardEi
#           CDataManager::get_GrowthWeaponEventReward(int) const
# range [0x083655ac, 0x0836561b]
083655ac +0x00:  push   %ebp
083655ad +0x01:  mov    %esp,%ebp
083655af +0x03:  sub    $0x28,%esp
083655b2 +0x06:  mov    0x8(%ebp),%eax
083655b5 +0x09:  lea    0x4bac(%eax),%ecx
083655bb +0x0f:  lea    -0x10(%ebp),%eax
083655be +0x12:  lea    0xc(%ebp),%edx
083655c1 +0x15:  mov    %edx,0x8(%esp)
083655c5 +0x19:  mov    %ecx,0x4(%esp)
083655c9 +0x1d:  mov    %eax,(%esp)
083655cc +0x20:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
083655d1 +0x25:  sub    $0x4,%esp
083655d4 +0x28:  mov    0x8(%ebp),%eax
083655d7 +0x2b:  lea    0x4bac(%eax),%edx
083655dd +0x31:  lea    -0xc(%ebp),%eax
083655e0 +0x34:  mov    %edx,0x4(%esp)
083655e4 +0x38:  mov    %eax,(%esp)
083655e7 +0x3b:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
083655ec +0x40:  sub    $0x4,%esp
083655ef +0x43:  lea    -0xc(%ebp),%eax
083655f2 +0x46:  mov    %eax,0x4(%esp)
083655f6 +0x4a:  lea    -0x10(%ebp),%eax
083655f9 +0x4d:  mov    %eax,(%esp)
083655fc +0x50:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
08365601 +0x55:  test   %al,%al
08365603 +0x57:  je     08365615 <+0x69>
08365605 +0x59:  lea    -0x10(%ebp),%eax
08365608 +0x5c:  mov    %eax,(%esp)
0836560b +0x5f:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08365610 +0x64:  mov    0x4(%eax),%eax
08365613 +0x67:  jmp    0836561a <+0x6e>
08365615 +0x69:  mov    $0x0,%eax
0836561a +0x6e:  leave
0836561b +0x6f:  ret
```

## 反编译 C

```c
// CDataManager::get_GrowthWeaponEventReward @ 0x83655ac

/* CDataManager::get_GrowthWeaponEventReward(int) const */

undefined4 CDataManager::get_GrowthWeaponEventReward(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```

# getGenuineUpgradeMaterialCnt

`_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY`

`GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt(unsigned char, int, ENUM_EQUIPMENTTYPE, ENUM_RARITY) const`

| 类 | 地址 |
|---|---|
| `GenuineDamageUpgradeTable` | `0x08912b88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08912b88  _ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY
#           GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt(unsigned char, int, ENUM_EQUIPMENTTYPE, ENUM_RARITY) const
# range [0x08912b88, 0x08912d0f]
08912b88 +0x000:  push   %ebp
08912b89 +0x001:  mov    %esp,%ebp
08912b8b +0x003:  sub    $0x68,%esp
08912b8e +0x006:  mov    0xc(%ebp),%eax
08912b91 +0x009:  mov    %al,-0x3c(%ebp)
08912b94 +0x00c:  mov    $0x33d6bf95,%eax
08912b99 +0x011:  mov    %eax,-0x14(%ebp)
08912b9c +0x014:  cmpl   $0xa,0x14(%ebp)
08912ba0 +0x018:  je     08912bac <+0x24>
08912ba2 +0x01a:  mov    $0xffffffff,%eax
08912ba7 +0x01f:  jmp    08912d0e <+0x186>
08912bac +0x024:  cmpb   $0x63,-0x3c(%ebp)
08912bb0 +0x028:  jbe    08912bbc <+0x34>
08912bb2 +0x02a:  mov    $0xffffffff,%eax
08912bb7 +0x02f:  jmp    08912d0e <+0x186>
08912bbc +0x034:  movl   $0x0,-0x10(%ebp)
08912bc3 +0x03b:  mov    $0x3f800000,%eax
08912bc8 +0x040:  mov    %eax,-0xc(%ebp)
08912bcb +0x043:  mov    0x18(%ebp),%edx
08912bce +0x046:  mov    0x8(%ebp),%eax
08912bd1 +0x049:  flds   0x8(%eax,%edx,4)
08912bd5 +0x04d:  flds   -0xc(%ebp)
08912bd8 +0x050:  fmulp  %st,%st(1)
08912bda +0x052:  fstps  -0xc(%ebp)
08912bdd +0x055:  mov    0x10(%ebp),%eax
08912be0 +0x058:  add    $0x1,%eax
08912be3 +0x05b:  mov    %eax,-0x24(%ebp)
08912be6 +0x05e:  mov    0x8(%ebp),%eax
08912be9 +0x061:  lea    0x158(%eax),%ecx
08912bef +0x067:  lea    -0x28(%ebp),%eax
08912bf2 +0x06a:  lea    -0x24(%ebp),%edx
08912bf5 +0x06d:  mov    %edx,0x8(%esp)
08912bf9 +0x071:  mov    %ecx,0x4(%esp)
08912bfd +0x075:  mov    %eax,(%esp)
08912c00 +0x078:  call   0811f13a <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x435>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x435
08912c05 +0x07d:  sub    $0x4,%esp
08912c08 +0x080:  mov    0x8(%ebp),%eax
08912c0b +0x083:  lea    0x158(%eax),%edx
08912c11 +0x089:  lea    -0x20(%ebp),%eax
08912c14 +0x08c:  mov    %edx,0x4(%esp)
08912c18 +0x090:  mov    %eax,(%esp)
08912c1b +0x093:  call   0811f166 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x461>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x461
08912c20 +0x098:  sub    $0x4,%esp
08912c23 +0x09b:  lea    -0x20(%ebp),%eax
08912c26 +0x09e:  mov    %eax,0x4(%esp)
08912c2a +0x0a2:  lea    -0x28(%ebp),%eax
08912c2d +0x0a5:  mov    %eax,(%esp)
08912c30 +0x0a8:  call   0811f18c <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x487>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x487
08912c35 +0x0ad:  test   %al,%al
08912c37 +0x0af:  je     08912c43 <+0xbb>
08912c39 +0x0b1:  mov    $0xffffffff,%eax
08912c3e +0x0b6:  jmp    08912d0e <+0x186>
08912c43 +0x0bb:  lea    -0x28(%ebp),%eax
08912c46 +0x0be:  mov    %eax,(%esp)
08912c49 +0x0c1:  call   0811f1a0 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x49b>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x49b
08912c4e +0x0c6:  flds   0x10(%eax)
08912c51 +0x0c9:  flds   -0xc(%ebp)
08912c54 +0x0cc:  fmulp  %st,%st(1)
08912c56 +0x0ce:  fstps  -0xc(%ebp)
08912c59 +0x0d1:  flds   -0xc(%ebp)
08912c5c +0x0d4:  flds   "빣�3"
08912c62 +0x0da:  faddp  %st,%st(1)
08912c64 +0x0dc:  fstps  -0xc(%ebp)
08912c67 +0x0df:  movzbl -0x3c(%ebp),%eax
08912c6b +0x0e3:  mov    %eax,-0x1c(%ebp)
08912c6e +0x0e6:  mov    0x8(%ebp),%eax
08912c71 +0x0e9:  lea    0x140(%eax),%ecx
08912c77 +0x0ef:  lea    -0x2c(%ebp),%eax
08912c7a +0x0f2:  lea    -0x1c(%ebp),%edx
08912c7d +0x0f5:  mov    %edx,0x8(%esp)
08912c81 +0x0f9:  mov    %ecx,0x4(%esp)
08912c85 +0x0fd:  mov    %eax,(%esp)
08912c88 +0x100:  call   0811f0c6 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x3c1>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x3c1
08912c8d +0x105:  sub    $0x4,%esp
08912c90 +0x108:  mov    0x8(%ebp),%eax
08912c93 +0x10b:  lea    0x158(%eax),%edx
08912c99 +0x111:  lea    -0x18(%ebp),%eax
08912c9c +0x114:  mov    %edx,0x4(%esp)
08912ca0 +0x118:  mov    %eax,(%esp)
08912ca3 +0x11b:  call   0811f166 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x461>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x461
08912ca8 +0x120:  sub    $0x4,%esp
08912cab +0x123:  lea    -0x18(%ebp),%eax
08912cae +0x126:  mov    %eax,0x4(%esp)
08912cb2 +0x12a:  lea    -0x28(%ebp),%eax
08912cb5 +0x12d:  mov    %eax,(%esp)
08912cb8 +0x130:  call   0811f18c <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x487>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x487
08912cbd +0x135:  test   %al,%al
08912cbf +0x137:  je     08912cc8 <+0x140>
08912cc1 +0x139:  mov    $0xffffffff,%eax
08912cc6 +0x13e:  jmp    08912d0e <+0x186>
08912cc8 +0x140:  lea    -0x2c(%ebp),%eax
08912ccb +0x143:  mov    %eax,(%esp)
08912cce +0x146:  call   0811f12c <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x427>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x427
08912cd3 +0x14b:  mov    0x8(%eax),%eax
08912cd6 +0x14e:  mov    %eax,-0x40(%ebp)
08912cd9 +0x151:  fildl  -0x40(%ebp)
08912cdc +0x154:  fmuls  -0xc(%ebp)
08912cdf +0x157:  fnstcw -0x42(%ebp)
08912ce2 +0x15a:  movzwl -0x42(%ebp),%eax
08912ce6 +0x15e:  mov    $0xc,%ah
08912ce8 +0x160:  mov    %ax,-0x44(%ebp)
08912cec +0x164:  fldcw  -0x44(%ebp)
08912cef +0x167:  fistpll -0x50(%ebp)
08912cf2 +0x16a:  fldcw  -0x42(%ebp)
08912cf5 +0x16d:  mov    -0x50(%ebp),%eax
08912cf8 +0x170:  mov    -0x4c(%ebp),%edx
08912cfb +0x173:  mov    %eax,-0x10(%ebp)
08912cfe +0x176:  cmpl   $0x0,-0x10(%ebp)
08912d02 +0x17a:  jne    08912d0b <+0x183>
08912d04 +0x17c:  mov    $0x1,%eax
08912d09 +0x181:  jmp    08912d0e <+0x186>
08912d0b +0x183:  mov    -0x10(%ebp),%eax
08912d0e +0x186:  leave
08912d0f +0x187:  ret
```

## 反编译 C

```c
// GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt @ 0x8912b88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt(unsigned char, int, ENUM_EQUIPMENTTYPE,
   ENUM_RARITY) const */

int __thiscall
GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt
          (GenuineDamageUpgradeTable *this,byte param_1,int param_2,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int local_54;
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>> local_30 [4];
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>> local_2c [4];
  int local_28;
  map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
  local_24 [4];
  uint local_20;
  map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  
  local_18 = 0x33d6bf95;
  if (param_4 == 10) {
    if (param_1 < 100) {
      local_14 = 0;
      local_10 = *(float *)(this + param_5 * 4 + 8) * 1.0;
      local_28 = param_2 + 1;
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::find((int *)local_2c);
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::end(local_24);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
              operator==(local_2c,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 == '\0') {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
                operator->(local_2c);
        local_10 = _DAT_08e122f4 + local_10 * *(float *)(iVar2 + 0x10);
        local_20 = (uint)param_1;
        std::
        map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
        ::find((int *)local_30);
        std::
        map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
        ::end(local_1c);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
                operator==(local_2c,(_Rb_tree_const_iterator *)local_1c);
        if (cVar1 == '\0') {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>::
                  operator->(local_30);
          local_54 = (int)(longlong)ROUND((float)*(int *)(iVar2 + 8) * local_10);
          if (local_54 == 0) {
            local_54 = 1;
          }
        }
        else {
          local_54 = -1;
        }
      }
      else {
        local_54 = -1;
      }
    }
    else {
      local_54 = -1;
    }
  }
  else {
    local_54 = -1;
  }
  return local_54;
}
```

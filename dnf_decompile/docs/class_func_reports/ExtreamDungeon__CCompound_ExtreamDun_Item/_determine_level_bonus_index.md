# _determine_level_bonus_index

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832cc02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832cc02  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const
# range [0x0832cc02, 0x0832ccbf]
0832cc02 +0x00:  push   %ebp
0832cc03 +0x01:  mov    %esp,%ebp
0832cc05 +0x03:  push   %ebx
0832cc06 +0x04:  sub    $0x24,%esp
0832cc09 +0x07:  mov    0x10(%ebp),%eax
0832cc0c +0x0a:  test   %eax,%eax
0832cc0e +0x0c:  js     0832cc18 <+0x16>
0832cc10 +0x0e:  mov    0x10(%ebp),%eax
0832cc13 +0x11:  cmp    $0x2,%eax
0832cc16 +0x14:  jle    0832cc22 <+0x20>
0832cc18 +0x16:  mov    $0x0,%eax
0832cc1d +0x1b:  jmp    0832ccb9 <+0xb7>
0832cc22 +0x20:  movl   $0x0,-0xc(%ebp)
0832cc29 +0x27:  jmp    0832cc74 <+0x72>
0832cc2b +0x29:  mov    -0xc(%ebp),%ebx
0832cc2e +0x2c:  mov    0x14(%ebp),%edx
0832cc31 +0x2f:  mov    0x10(%ebp),%ecx
0832cc34 +0x32:  mov    %ecx,%eax
0832cc36 +0x34:  add    %eax,%eax
0832cc38 +0x36:  add    %ecx,%eax
0832cc3a +0x38:  lea    0x0(,%eax,4),%ecx
0832cc41 +0x3f:  mov    %edx,%eax
0832cc43 +0x41:  add    %eax,%eax
0832cc45 +0x43:  add    %edx,%eax
0832cc47 +0x45:  shl    $0x4,%eax
0832cc4a +0x48:  lea    (%ecx,%eax,1),%eax
0832cc4d +0x4b:  add    $0xb80,%eax
0832cc52 +0x50:  add    0x8(%ebp),%eax
0832cc55 +0x53:  add    $0x18,%eax
0832cc58 +0x56:  mov    %ebx,0x4(%esp)
0832cc5c +0x5a:  mov    %eax,(%esp)
0832cc5f +0x5d:  call   080f5632 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5e3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5e3
0832cc64 +0x62:  mov    (%eax),%eax
0832cc66 +0x64:  cmp    0xc(%ebp),%eax
0832cc69 +0x67:  setae  %al
0832cc6c +0x6a:  test   %al,%al
0832cc6e +0x6c:  jne    0832ccb5 <+0xb3>
0832cc70 +0x6e:  addl   $0x1,-0xc(%ebp)
0832cc74 +0x72:  mov    0x14(%ebp),%edx
0832cc77 +0x75:  mov    0x10(%ebp),%ecx
0832cc7a +0x78:  mov    %ecx,%eax
0832cc7c +0x7a:  add    %eax,%eax
0832cc7e +0x7c:  add    %ecx,%eax
0832cc80 +0x7e:  lea    0x0(,%eax,4),%ecx
0832cc87 +0x85:  mov    %edx,%eax
0832cc89 +0x87:  add    %eax,%eax
0832cc8b +0x89:  add    %edx,%eax
0832cc8d +0x8b:  shl    $0x4,%eax
0832cc90 +0x8e:  lea    (%ecx,%eax,1),%eax
0832cc93 +0x91:  add    $0xb80,%eax
0832cc98 +0x96:  add    0x8(%ebp),%eax
0832cc9b +0x99:  add    $0x18,%eax
0832cc9e +0x9c:  mov    %eax,(%esp)
0832cca1 +0x9f:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
0832cca6 +0xa4:  test   %eax,%eax
0832cca8 +0xa6:  setne  %al
0832ccab +0xa9:  test   %al,%al
0832ccad +0xab:  jne    0832cc2b <+0x29>
0832ccb3 +0xb1:  jmp    0832ccb6 <+0xb4>
0832ccb5 +0xb3:  nop
0832ccb6 +0xb4:  mov    -0xc(%ebp),%eax
0832ccb9 +0xb7:  add    $0x24,%esp
0832ccbc +0xba:  pop    %ebx
0832ccbd +0xbb:  pop    %ebp
0832ccbe +0xbc:  ret
0832ccbf +0xbd:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index @ 0x832cc02

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index(unsigned int,
   ExtreamDungeon::ENUM_INPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const */

uint __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index
          (CCompound_ExtreamDun_Item *this,uint param_1,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint local_10;
  
  if ((param_3 < 0) || (2 < param_3)) {
    local_10 = 0;
  }
  else {
    local_10 = 0;
    while ((iVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               (this + param_3 * 0xc + param_4 * 0x30 + 0xb98)), iVar2 != 0 &&
           (puVar1 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                                       ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                                        (this + param_3 * 0xc + param_4 * 0x30 + 0xb98),local_10),
           *puVar1 < param_1))) {
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}
```

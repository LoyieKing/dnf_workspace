# convertComboSkillArray

`_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND`

`ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9986  _ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND
#           ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const
# range [0x080e9986, 0x080e9b0d]
080e9986 +0x000:  push   %ebp
080e9987 +0x001:  mov    %esp,%ebp
080e9989 +0x003:  push   %esi
080e998a +0x004:  push   %ebx
080e998b +0x005:  sub    $0x40,%esp
080e998e +0x008:  cmpl   $0x0,0x10(%ebp)
080e9992 +0x00c:  je     080e9b03 <+0x17d>
080e9998 +0x012:  mov    0x14(%ebp),%eax
080e999b +0x015:  test   %eax,%eax
080e999d +0x017:  je     080e99df <+0x59>
080e999f +0x019:  mov    0x14(%ebp),%eax
080e99a2 +0x01c:  cmp    $0x1,%eax
080e99a5 +0x01f:  je     080e99df <+0x59>
080e99a7 +0x021:  mov    0x14(%ebp),%eax
080e99aa +0x024:  mov    %eax,0x14(%esp)
080e99ae +0x028:  movl   $"ComboSkill::convertComboSkillArray kind(%d) error",0x10(%esp)
080e99b6 +0x030:  movl   $0x4b,0xc(%esp)
080e99be +0x038:  movl   $&_ZZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
080e99c6 +0x040:  movl   $"ComboSkill.cpp",0x4(%esp)
080e99ce +0x048:  movl   $0x1,(%esp)
080e99d5 +0x04f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080e99da +0x054:  jmp    080e9b04 <+0x17e>
080e99df +0x059:  mov    0x14(%ebp),%eax
080e99e2 +0x05c:  mov    %eax,0x4(%esp)
080e99e6 +0x060:  mov    0x8(%ebp),%eax
080e99e9 +0x063:  mov    %eax,(%esp)
080e99ec +0x066:  call   080ea3f8 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x31>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x31
080e99f1 +0x06b:  mov    %eax,-0x14(%ebp)
080e99f4 +0x06e:  lea    -0x1c(%ebp),%eax
080e99f7 +0x071:  mov    -0x14(%ebp),%edx
080e99fa +0x074:  mov    %edx,0x4(%esp)
080e99fe +0x078:  mov    %eax,(%esp)
080e9a01 +0x07b:  call   080ea818 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x451>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x451
080e9a06 +0x080:  sub    $0x4,%esp
080e9a09 +0x083:  movl   $0x0,-0x10(%ebp)
080e9a10 +0x08a:  jmp    080e9ac8 <+0x142>
080e9a15 +0x08f:  mov    -0x10(%ebp),%eax
080e9a18 +0x092:  add    %eax,%eax
080e9a1a +0x094:  lea    0x0(,%eax,8),%edx
080e9a21 +0x09b:  mov    %edx,%ecx
080e9a23 +0x09d:  sub    %eax,%ecx
080e9a25 +0x09f:  mov    %ecx,%eax
080e9a27 +0x0a1:  mov    %eax,%ebx
080e9a29 +0x0a3:  add    0x10(%ebp),%ebx
080e9a2c +0x0a6:  lea    -0x1c(%ebp),%eax
080e9a2f +0x0a9:  mov    %eax,(%esp)
080e9a32 +0x0ac:  call   080ea878 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4b1
080e9a37 +0x0b1:  movzwl (%eax),%eax
080e9a3a +0x0b4:  mov    %ax,(%ebx)
080e9a3d +0x0b7:  movl   $0x0,-0xc(%ebp)
080e9a44 +0x0be:  jmp    080e9a88 <+0x102>
080e9a46 +0x0c0:  mov    -0x10(%ebp),%eax
080e9a49 +0x0c3:  add    %eax,%eax
080e9a4b +0x0c5:  lea    0x0(,%eax,8),%edx
080e9a52 +0x0cc:  mov    %edx,%ecx
080e9a54 +0x0ce:  sub    %eax,%ecx
080e9a56 +0x0d0:  mov    %ecx,%eax
080e9a58 +0x0d2:  mov    %eax,%ebx
080e9a5a +0x0d4:  add    0x10(%ebp),%ebx
080e9a5d +0x0d7:  mov    -0xc(%ebp),%esi
080e9a60 +0x0da:  lea    -0x1c(%ebp),%eax
080e9a63 +0x0dd:  mov    %eax,(%esp)
080e9a66 +0x0e0:  call   080ea878 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4b1
080e9a6b +0x0e5:  lea    0x4(%eax),%edx
080e9a6e +0x0e8:  mov    -0xc(%ebp),%eax
080e9a71 +0x0eb:  mov    %eax,0x4(%esp)
080e9a75 +0x0ef:  mov    %edx,(%esp)
080e9a78 +0x0f2:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
080e9a7d +0x0f7:  mov    (%eax),%eax
080e9a7f +0x0f9:  mov    %ax,0x2(%ebx,%esi,2)
080e9a84 +0x0fe:  addl   $0x1,-0xc(%ebp)
080e9a88 +0x102:  lea    -0x1c(%ebp),%eax
080e9a8b +0x105:  mov    %eax,(%esp)
080e9a8e +0x108:  call   080ea878 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4b1
080e9a93 +0x10d:  add    $0x4,%eax
080e9a96 +0x110:  mov    %eax,(%esp)
080e9a99 +0x113:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080e9a9e +0x118:  cmp    -0xc(%ebp),%eax
080e9aa1 +0x11b:  jbe    080e9ab0 <+0x12a>
080e9aa3 +0x11d:  cmpl   $0x5,-0xc(%ebp)
080e9aa7 +0x121:  ja     080e9ab0 <+0x12a>
080e9aa9 +0x123:  mov    $0x1,%eax
080e9aae +0x128:  jmp    080e9ab5 <+0x12f>
080e9ab0 +0x12a:  mov    $0x0,%eax
080e9ab5 +0x12f:  test   %al,%al
080e9ab7 +0x131:  jne    080e9a46 <+0xc0>
080e9ab9 +0x133:  addl   $0x1,-0x10(%ebp)
080e9abd +0x137:  lea    -0x1c(%ebp),%eax
080e9ac0 +0x13a:  mov    %eax,(%esp)
080e9ac3 +0x13d:  call   080ea886 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4bf>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4bf
080e9ac8 +0x142:  lea    -0x18(%ebp),%eax
080e9acb +0x145:  mov    -0x14(%ebp),%edx
080e9ace +0x148:  mov    %edx,0x4(%esp)
080e9ad2 +0x14c:  mov    %eax,(%esp)
080e9ad5 +0x14f:  call   080ea83e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x477>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x477
080e9ada +0x154:  sub    $0x4,%esp
080e9add +0x157:  lea    -0x18(%ebp),%eax
080e9ae0 +0x15a:  mov    %eax,0x4(%esp)
080e9ae4 +0x15e:  lea    -0x1c(%ebp),%eax
080e9ae7 +0x161:  mov    %eax,(%esp)
080e9aea +0x164:  call   080ea864 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x49d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x49d
080e9aef +0x169:  test   %al,%al
080e9af1 +0x16b:  jne    080e9a15 <+0x8f>
080e9af7 +0x171:  mov    -0x10(%ebp),%eax
080e9afa +0x174:  mov    %eax,%edx
080e9afc +0x176:  mov    0xc(%ebp),%eax
080e9aff +0x179:  mov    %dl,(%eax)
080e9b01 +0x17b:  jmp    080e9b04 <+0x17e>
080e9b03 +0x17d:  nop
080e9b04 +0x17e:  lea    -0x8(%ebp),%esp
080e9b07 +0x181:  add    $0x0,%esp
080e9b0a +0x184:  pop    %ebx
080e9b0b +0x185:  pop    %esi
080e9b0c +0x186:  pop    %ebp
080e9b0d +0x187:  ret
```

## 反编译 C

```c
// ComboSkill::convertComboSkillArray @ 0x80e9986

/* ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const
    */

void __thiscall
ComboSkill::convertComboSkillArray(ComboSkill *this,undefined1 *param_1,int param_2,int param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_20 [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  if (param_2 != 0) {
    if ((param_4 == 0) || (param_4 == 1)) {
      local_18 = getComboSkillMap(this,param_4);
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::begin(local_20);
      local_14 = 0;
      while( true ) {
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end(local_1c);
        cVar3 = std::
                _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator!=((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_20,(_Rb_tree_const_iterator *)local_1c);
        if (cVar3 == '\0') break;
        iVar7 = local_14 * 0xe;
        puVar4 = (undefined2 *)
                 std::
                 _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                 ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                               *)local_20);
        *(undefined2 *)(iVar7 + param_2) = *puVar4;
        local_10 = 0;
        while( true ) {
          iVar7 = std::
                  _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_20);
          uVar8 = std::vector<int,std::allocator<int>>::size
                            ((vector<int,std::allocator<int>> *)(iVar7 + 4));
          uVar2 = local_10;
          if ((local_10 < uVar8) && (local_10 < 6)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
          iVar7 = local_14 * 0xe;
          iVar5 = std::
                  _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_20);
          puVar6 = (undefined4 *)
                   std::vector<int,std::allocator<int>>::operator[]
                             ((vector<int,std::allocator<int>> *)(iVar5 + 4),local_10);
          *(short *)(iVar7 + param_2 + 2 + uVar2 * 2) = (short)*puVar6;
          local_10 = local_10 + 1;
        }
        local_14 = local_14 + 1;
        std::_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
        operator++((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                    *)local_20);
      }
      *param_1 = (char)local_14;
    }
    else {
      LogManager::logFormat
                (1,"ComboSkill.cpp",
                 "void ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const"
                 ,0x4b,"ComboSkill::convertComboSkillArray kind(%d) error",param_4);
    }
  }
  return;
}
```

# resetTree

`_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND`

`ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9644` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9644  _ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND
#           ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)
# range [0x080e9644, 0x080e9759]
080e9644 +0x000:  push   %ebp
080e9645 +0x001:  mov    %esp,%ebp
080e9647 +0x003:  sub    $0x38,%esp
080e964a +0x006:  mov    0xc(%ebp),%eax
080e964d +0x009:  test   %eax,%eax
080e964f +0x00b:  je     080e9691 <+0x4d>
080e9651 +0x00d:  mov    0xc(%ebp),%eax
080e9654 +0x010:  cmp    $0x1,%eax
080e9657 +0x013:  je     080e9691 <+0x4d>
080e9659 +0x015:  mov    0xc(%ebp),%eax
080e965c +0x018:  mov    %eax,0x14(%esp)
080e9660 +0x01c:  movl   $"ComboSkill::resetTree kind(%d) error",0x10(%esp)
080e9668 +0x024:  movl   $0xd,0xc(%esp)
080e9670 +0x02c:  movl   $&_ZZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
080e9678 +0x034:  movl   $"ComboSkill.cpp",0x4(%esp)
080e9680 +0x03c:  movl   $0x1,(%esp)
080e9687 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080e968c +0x048:  jmp    080e9758 <+0x114>
080e9691 +0x04d:  mov    0xc(%ebp),%eax
080e9694 +0x050:  mov    %eax,0x4(%esp)
080e9698 +0x054:  mov    0x8(%ebp),%eax
080e969b +0x057:  mov    %eax,(%esp)
080e969e +0x05a:  call   080ea41c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x55>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x55
080e96a3 +0x05f:  mov    %eax,-0x10(%ebp)
080e96a6 +0x062:  lea    -0x18(%ebp),%eax
080e96a9 +0x065:  mov    -0x10(%ebp),%edx
080e96ac +0x068:  mov    %edx,0x4(%esp)
080e96b0 +0x06c:  mov    %eax,(%esp)
080e96b3 +0x06f:  call   080ea600 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x239>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x239
080e96b8 +0x074:  sub    $0x4,%esp
080e96bb +0x077:  jmp    080e9729 <+0xe5>
080e96bd +0x079:  movl   $0x0,-0xc(%ebp)
080e96c4 +0x080:  jmp    080e96ed <+0xa9>
080e96c6 +0x082:  lea    -0x18(%ebp),%eax
080e96c9 +0x085:  mov    %eax,(%esp)
080e96cc +0x088:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080e96d1 +0x08d:  lea    0x4(%eax),%edx
080e96d4 +0x090:  mov    -0xc(%ebp),%eax
080e96d7 +0x093:  mov    %eax,0x4(%esp)
080e96db +0x097:  mov    %edx,(%esp)
080e96de +0x09a:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080e96e3 +0x09f:  movl   $0x0,(%eax)
080e96e9 +0x0a5:  addl   $0x1,-0xc(%ebp)
080e96ed +0x0a9:  lea    -0x18(%ebp),%eax
080e96f0 +0x0ac:  mov    %eax,(%esp)
080e96f3 +0x0af:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080e96f8 +0x0b4:  add    $0x4,%eax
080e96fb +0x0b7:  mov    %eax,(%esp)
080e96fe +0x0ba:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080e9703 +0x0bf:  cmp    -0xc(%ebp),%eax
080e9706 +0x0c2:  jbe    080e9715 <+0xd1>
080e9708 +0x0c4:  cmpl   $0x5,-0xc(%ebp)
080e970c +0x0c8:  ja     080e9715 <+0xd1>
080e970e +0x0ca:  mov    $0x1,%eax
080e9713 +0x0cf:  jmp    080e971a <+0xd6>
080e9715 +0x0d1:  mov    $0x0,%eax
080e971a +0x0d6:  test   %al,%al
080e971c +0x0d8:  jne    080e96c6 <+0x82>
080e971e +0x0da:  lea    -0x18(%ebp),%eax
080e9721 +0x0dd:  mov    %eax,(%esp)
080e9724 +0x0e0:  call   080ea66e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x2a7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x2a7
080e9729 +0x0e5:  lea    -0x14(%ebp),%eax
080e972c +0x0e8:  mov    -0x10(%ebp),%edx
080e972f +0x0eb:  mov    %edx,0x4(%esp)
080e9733 +0x0ef:  mov    %eax,(%esp)
080e9736 +0x0f2:  call   080ea626 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x25f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x25f
080e973b +0x0f7:  sub    $0x4,%esp
080e973e +0x0fa:  lea    -0x14(%ebp),%eax
080e9741 +0x0fd:  mov    %eax,0x4(%esp)
080e9745 +0x101:  lea    -0x18(%ebp),%eax
080e9748 +0x104:  mov    %eax,(%esp)
080e974b +0x107:  call   080ea64c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x285>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x285
080e9750 +0x10c:  test   %al,%al
080e9752 +0x10e:  jne    080e96bd <+0x79>
080e9758 +0x114:  leave
080e9759 +0x115:  ret
```

## 反编译 C

```c
// ComboSkill::resetTree @ 0x80e9644

/* ComboSkill::resetTree(ENUM_SKILL_TREE_KIND) */

void __thiscall ComboSkill::resetTree(ComboSkill *this,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_18 [4];
  undefined4 local_14;
  uint local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    local_14 = getComboSkillMap(this,param_2);
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end(local_18);
      cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator!=((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
      if (cVar2 == '\0') break;
      local_10 = 0;
      while( true ) {
        iVar4 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        uVar5 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(iVar4 + 4));
        if ((local_10 < uVar5) && (local_10 < 6)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        iVar4 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        puVar3 = (undefined4 *)
                 std::vector<int,std::allocator<int>>::operator[]
                           ((vector<int,std::allocator<int>> *)(iVar4 + 4),local_10);
        *puVar3 = 0;
        local_10 = local_10 + 1;
      }
      std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator++((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *)
                 local_1c);
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp","void ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)",0xd,
               "ComboSkill::resetTree kind(%d) error",param_2);
  }
  return;
}
```

# setComboSkill

`_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE`

`ComboSkill::setComboSkill(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int, std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int, std::allocator<int> > > > >&)`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080ea030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ea030  _ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE
#           ComboSkill::setComboSkill(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int, std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int, std::allocator<int> > > > >&)
# range [0x080ea030, 0x080ea205]
080ea030 +0x000:  push   %ebp
080ea031 +0x001:  mov    %esp,%ebp
080ea033 +0x003:  push   %ebx
080ea034 +0x004:  sub    $0x54,%esp
080ea037 +0x007:  mov    0xc(%ebp),%eax
080ea03a +0x00a:  test   %eax,%eax
080ea03c +0x00c:  je     080ea07e <+0x4e>
080ea03e +0x00e:  mov    0xc(%ebp),%eax
080ea041 +0x011:  cmp    $0x1,%eax
080ea044 +0x014:  je     080ea07e <+0x4e>
080ea046 +0x016:  mov    0xc(%ebp),%eax
080ea049 +0x019:  mov    %eax,0x14(%esp)
080ea04d +0x01d:  movl   $"ComboSkill::setComboSkill kind(%d) error",0x10(%esp)
080ea055 +0x025:  movl   $0xb5,0xc(%esp)
080ea05d +0x02d:  movl   $&_ZZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEEE19__PRETTY_FUNCTION__,0x8(%esp)
080ea065 +0x035:  movl   $"ComboSkill.cpp",0x4(%esp)
080ea06d +0x03d:  movl   $0x1,(%esp)
080ea074 +0x044:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080ea079 +0x049:  jmp    080ea200 <+0x1d0>
080ea07e +0x04e:  mov    0x10(%ebp),%eax
080ea081 +0x051:  mov    %eax,(%esp)
080ea084 +0x054:  call   080ea978 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5b1
080ea089 +0x059:  test   %al,%al
080ea08b +0x05b:  jne    080ea1ff <+0x1cf>
080ea091 +0x061:  mov    0xc(%ebp),%eax
080ea094 +0x064:  mov    %eax,0x4(%esp)
080ea098 +0x068:  mov    0x8(%ebp),%eax
080ea09b +0x06b:  mov    %eax,(%esp)
080ea09e +0x06e:  call   080ea41c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x55>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x55
080ea0a3 +0x073:  mov    %eax,-0x10(%ebp)
080ea0a6 +0x076:  lea    -0x1c(%ebp),%eax
080ea0a9 +0x079:  mov    -0x10(%ebp),%edx
080ea0ac +0x07c:  mov    %edx,0x4(%esp)
080ea0b0 +0x080:  mov    %eax,(%esp)
080ea0b3 +0x083:  call   080ea626 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x25f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x25f
080ea0b8 +0x088:  sub    $0x4,%esp
080ea0bb +0x08b:  lea    -0x20(%ebp),%eax
080ea0be +0x08e:  mov    0x10(%ebp),%edx
080ea0c1 +0x091:  mov    %edx,0x4(%esp)
080ea0c5 +0x095:  mov    %eax,(%esp)
080ea0c8 +0x098:  call   080ea600 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x239>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x239
080ea0cd +0x09d:  sub    $0x4,%esp
080ea0d0 +0x0a0:  mov    0xc(%ebp),%eax
080ea0d3 +0x0a3:  mov    %eax,0x4(%esp)
080ea0d7 +0x0a7:  mov    0x8(%ebp),%eax
080ea0da +0x0aa:  mov    %eax,(%esp)
080ea0dd +0x0ad:  call   080e9644 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND>  ; ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)
080ea0e2 +0x0b2:  jmp    080ea1ce <+0x19e>
080ea0e7 +0x0b7:  lea    -0x20(%ebp),%eax
080ea0ea +0x0ba:  mov    %eax,(%esp)
080ea0ed +0x0bd:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea0f2 +0x0c2:  mov    %eax,%edx
080ea0f4 +0x0c4:  lea    -0x2c(%ebp),%eax
080ea0f7 +0x0c7:  mov    %edx,0x8(%esp)
080ea0fb +0x0cb:  mov    -0x10(%ebp),%edx
080ea0fe +0x0ce:  mov    %edx,0x4(%esp)
080ea102 +0x0d2:  mov    %eax,(%esp)
080ea105 +0x0d5:  call   080ea68c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x2c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x2c5
080ea10a +0x0da:  sub    $0x4,%esp
080ea10d +0x0dd:  mov    -0x2c(%ebp),%eax
080ea110 +0x0e0:  mov    %eax,-0x1c(%ebp)
080ea113 +0x0e3:  lea    -0x14(%ebp),%eax
080ea116 +0x0e6:  mov    -0x10(%ebp),%edx
080ea119 +0x0e9:  mov    %edx,0x4(%esp)
080ea11d +0x0ed:  mov    %eax,(%esp)
080ea120 +0x0f0:  call   080ea626 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x25f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x25f
080ea125 +0x0f5:  sub    $0x4,%esp
080ea128 +0x0f8:  lea    -0x14(%ebp),%eax
080ea12b +0x0fb:  mov    %eax,0x4(%esp)
080ea12f +0x0ff:  lea    -0x1c(%ebp),%eax
080ea132 +0x102:  mov    %eax,(%esp)
080ea135 +0x105:  call   080ea6b8 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x2f1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x2f1
080ea13a +0x10a:  test   %al,%al
080ea13c +0x10c:  jne    080ea1cd <+0x19d>
080ea142 +0x112:  movl   $0x0,-0xc(%ebp)
080ea149 +0x119:  jmp    080ea18f <+0x15f>
080ea14b +0x11b:  lea    -0x1c(%ebp),%eax
080ea14e +0x11e:  mov    %eax,(%esp)
080ea151 +0x121:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea156 +0x126:  lea    0x4(%eax),%edx
080ea159 +0x129:  mov    -0xc(%ebp),%eax
080ea15c +0x12c:  mov    %eax,0x4(%esp)
080ea160 +0x130:  mov    %edx,(%esp)
080ea163 +0x133:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080ea168 +0x138:  mov    %eax,%ebx
080ea16a +0x13a:  lea    -0x20(%ebp),%eax
080ea16d +0x13d:  mov    %eax,(%esp)
080ea170 +0x140:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea175 +0x145:  lea    0x4(%eax),%edx
080ea178 +0x148:  mov    -0xc(%ebp),%eax
080ea17b +0x14b:  mov    %eax,0x4(%esp)
080ea17f +0x14f:  mov    %edx,(%esp)
080ea182 +0x152:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080ea187 +0x157:  mov    (%eax),%eax
080ea189 +0x159:  mov    %eax,(%ebx)
080ea18b +0x15b:  addl   $0x1,-0xc(%ebp)
080ea18f +0x15f:  lea    -0x20(%ebp),%eax
080ea192 +0x162:  mov    %eax,(%esp)
080ea195 +0x165:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea19a +0x16a:  add    $0x4,%eax
080ea19d +0x16d:  mov    %eax,(%esp)
080ea1a0 +0x170:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080ea1a5 +0x175:  cmp    -0xc(%ebp),%eax
080ea1a8 +0x178:  jbe    080ea1b7 <+0x187>
080ea1aa +0x17a:  cmpl   $0x5,-0xc(%ebp)
080ea1ae +0x17e:  ja     080ea1b7 <+0x187>
080ea1b0 +0x180:  mov    $0x1,%eax
080ea1b5 +0x185:  jmp    080ea1bc <+0x18c>
080ea1b7 +0x187:  mov    $0x0,%eax
080ea1bc +0x18c:  test   %al,%al
080ea1be +0x18e:  jne    080ea14b <+0x11b>
080ea1c0 +0x190:  lea    -0x20(%ebp),%eax
080ea1c3 +0x193:  mov    %eax,(%esp)
080ea1c6 +0x196:  call   080ea66e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x2a7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x2a7
080ea1cb +0x19b:  jmp    080ea1ce <+0x19e>
080ea1cd +0x19d:  nop
080ea1ce +0x19e:  lea    -0x18(%ebp),%eax
080ea1d1 +0x1a1:  mov    0x10(%ebp),%edx
080ea1d4 +0x1a4:  mov    %edx,0x4(%esp)
080ea1d8 +0x1a8:  mov    %eax,(%esp)
080ea1db +0x1ab:  call   080ea626 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x25f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x25f
080ea1e0 +0x1b0:  sub    $0x4,%esp
080ea1e3 +0x1b3:  lea    -0x18(%ebp),%eax
080ea1e6 +0x1b6:  mov    %eax,0x4(%esp)
080ea1ea +0x1ba:  lea    -0x20(%ebp),%eax
080ea1ed +0x1bd:  mov    %eax,(%esp)
080ea1f0 +0x1c0:  call   080ea64c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x285>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x285
080ea1f5 +0x1c5:  test   %al,%al
080ea1f7 +0x1c7:  jne    080ea0e7 <+0xb7>
080ea1fd +0x1cd:  jmp    080ea200 <+0x1d0>
080ea1ff +0x1cf:  nop
080ea200 +0x1d0:  mov    -0x4(%ebp),%ebx
080ea203 +0x1d3:  leave
080ea204 +0x1d4:  ret
080ea205 +0x1d5:  nop
```

## 反编译 C

```c
// ComboSkill::setComboSkill @ 0x80ea030

/* ComboSkill::setComboSkill(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int,
   std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int,
   std::allocator<int> > > > >&) */

void __thiscall
ComboSkill::setComboSkill
          (ComboSkill *this,int param_2,
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_30 [3];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_24 [4];
  undefined4 local_20;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_18 [4];
  undefined4 local_14;
  uint local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    cVar2 = std::
            map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
            ::empty(param_3);
    if (cVar2 == '\0') {
      local_14 = getComboSkillMap(this,param_2);
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
             *)&local_20);
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::begin(local_24);
      resetTree(this,param_2);
      while( true ) {
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end(local_1c);
        cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_24,(_Rb_tree_iterator *)local_1c);
        if (cVar2 == '\0') break;
        std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
        operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *
                   )local_24);
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::find((short *)local_30);
        local_20 = local_30[0];
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end(local_18);
        cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator==((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)&local_20,(_Rb_tree_iterator *)local_18);
        if (cVar2 == '\0') {
          local_10 = 0;
          while( true ) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                    operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_24);
            uVar6 = std::vector<int,std::allocator<int>>::size
                              ((vector<int,std::allocator<int>> *)(iVar5 + 4));
            if ((local_10 < uVar6) && (local_10 < 6)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) break;
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                    operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)&local_20);
            puVar3 = (undefined4 *)
                     std::vector<int,std::allocator<int>>::operator[]
                               ((vector<int,std::allocator<int>> *)(iVar5 + 4),local_10);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                    operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_24);
            puVar4 = (undefined4 *)
                     std::vector<int,std::allocator<int>>::operator[]
                               ((vector<int,std::allocator<int>> *)(iVar5 + 4),local_10);
            *puVar3 = *puVar4;
            local_10 = local_10 + 1;
          }
          std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
          operator++((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                      *)local_24);
        }
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp",
               "void ComboSkill::setComboSkill(ENUM_SKILL_TREE_KIND, ComboSkillMap&)",0xb5,
               "ComboSkill::setComboSkill kind(%d) error",param_2);
  }
  return;
}
```

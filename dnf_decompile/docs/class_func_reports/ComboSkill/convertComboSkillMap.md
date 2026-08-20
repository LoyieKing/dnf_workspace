# convertComboSkillMap

`_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND`

`ComboSkill::convertComboSkillMap(unsigned char, comoboSkillData const*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e975a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e975a  _ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND
#           ComboSkill::convertComboSkillMap(unsigned char, comoboSkillData const*, ENUM_SKILL_TREE_KIND)
# range [0x080e975a, 0x080e9985]
080e975a +0x000:  push   %ebp
080e975b +0x001:  mov    %esp,%ebp
080e975d +0x003:  push   %esi
080e975e +0x004:  push   %ebx
080e975f +0x005:  sub    $0x60,%esp
080e9762 +0x008:  mov    0xc(%ebp),%eax
080e9765 +0x00b:  mov    %al,-0x3c(%ebp)
080e9768 +0x00e:  cmpl   $0x0,0x10(%ebp)
080e976c +0x012:  je     080e997b <+0x221>
080e9772 +0x018:  cmpb   $0x6,-0x3c(%ebp)
080e9776 +0x01c:  jbe    080e97b1 <+0x57>
080e9778 +0x01e:  movzbl -0x3c(%ebp),%eax
080e977c +0x022:  mov    %eax,0x14(%esp)
080e9780 +0x026:  movl   $"ComboSkill::setComboSkill count value(%d) error",0x10(%esp)
080e9788 +0x02e:  movl   $0x25,0xc(%esp)
080e9790 +0x036:  movl   $&_ZZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
080e9798 +0x03e:  movl   $"ComboSkill.cpp",0x4(%esp)
080e97a0 +0x046:  movl   $0x1,(%esp)
080e97a7 +0x04d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080e97ac +0x052:  jmp    080e997c <+0x222>
080e97b1 +0x057:  mov    0x14(%ebp),%eax
080e97b4 +0x05a:  test   %eax,%eax
080e97b6 +0x05c:  je     080e97f8 <+0x9e>
080e97b8 +0x05e:  mov    0x14(%ebp),%eax
080e97bb +0x061:  cmp    $0x1,%eax
080e97be +0x064:  je     080e97f8 <+0x9e>
080e97c0 +0x066:  mov    0x14(%ebp),%eax
080e97c3 +0x069:  mov    %eax,0x14(%esp)
080e97c7 +0x06d:  movl   $"ComboSkill::setComboSkill kind(%d) error",0x10(%esp)
080e97cf +0x075:  movl   $0x2b,0xc(%esp)
080e97d7 +0x07d:  movl   $&_ZZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
080e97df +0x085:  movl   $"ComboSkill.cpp",0x4(%esp)
080e97e7 +0x08d:  movl   $0x1,(%esp)
080e97ee +0x094:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080e97f3 +0x099:  jmp    080e997c <+0x222>
080e97f8 +0x09e:  mov    0x14(%ebp),%eax
080e97fb +0x0a1:  mov    %eax,0x4(%esp)
080e97ff +0x0a5:  mov    0x8(%ebp),%eax
080e9802 +0x0a8:  mov    %eax,(%esp)
080e9805 +0x0ab:  call   080ea41c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x55>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x55
080e980a +0x0b0:  mov    %eax,-0x14(%ebp)
080e980d +0x0b3:  lea    -0x20(%ebp),%eax
080e9810 +0x0b6:  mov    -0x14(%ebp),%edx
080e9813 +0x0b9:  mov    %edx,0x4(%esp)
080e9817 +0x0bd:  mov    %eax,(%esp)
080e981a +0x0c0:  call   080ea626 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x25f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x25f
080e981f +0x0c5:  sub    $0x4,%esp
080e9822 +0x0c8:  lea    -0x2c(%ebp),%eax
080e9825 +0x0cb:  mov    %eax,(%esp)
080e9828 +0x0ce:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
080e982d +0x0d3:  movl   $0x0,-0x10(%ebp)
080e9834 +0x0da:  jmp    080e992e <+0x1d4>
080e9839 +0x0df:  mov    -0x10(%ebp),%eax
080e983c +0x0e2:  add    %eax,%eax
080e983e +0x0e4:  lea    0x0(,%eax,8),%edx
080e9845 +0x0eb:  mov    %edx,%ecx
080e9847 +0x0ed:  sub    %eax,%ecx
080e9849 +0x0ef:  mov    %ecx,%eax
080e984b +0x0f1:  add    0x10(%ebp),%eax
080e984e +0x0f4:  mov    %eax,%edx
080e9850 +0x0f6:  lea    -0x40(%ebp),%eax
080e9853 +0x0f9:  mov    %edx,0x8(%esp)
080e9857 +0x0fd:  mov    -0x14(%ebp),%edx
080e985a +0x100:  mov    %edx,0x4(%esp)
080e985e +0x104:  mov    %eax,(%esp)
080e9861 +0x107:  call   080ea68c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x2c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x2c5
080e9866 +0x10c:  sub    $0x4,%esp
080e9869 +0x10f:  mov    -0x40(%ebp),%eax
080e986c +0x112:  mov    %eax,-0x20(%ebp)
080e986f +0x115:  lea    -0x1c(%ebp),%eax
080e9872 +0x118:  mov    -0x14(%ebp),%edx
080e9875 +0x11b:  mov    %edx,0x4(%esp)
080e9879 +0x11f:  mov    %eax,(%esp)
080e987c +0x122:  call   080ea626 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x25f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x25f
080e9881 +0x127:  sub    $0x4,%esp
080e9884 +0x12a:  lea    -0x1c(%ebp),%eax
080e9887 +0x12d:  mov    %eax,0x4(%esp)
080e988b +0x131:  lea    -0x20(%ebp),%eax
080e988e +0x134:  mov    %eax,(%esp)
080e9891 +0x137:  call   080ea6b8 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x2f1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x2f1
080e9896 +0x13c:  test   %al,%al
080e9898 +0x13e:  jne    080e9929 <+0x1cf>
080e989e +0x144:  lea    -0x2c(%ebp),%eax
080e98a1 +0x147:  mov    %eax,(%esp)
080e98a4 +0x14a:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
080e98a9 +0x14f:  movl   $0x0,-0xc(%ebp)
080e98b0 +0x156:  jmp    080e98e9 <+0x18f>
080e98b2 +0x158:  mov    -0x10(%ebp),%eax
080e98b5 +0x15b:  add    %eax,%eax
080e98b7 +0x15d:  lea    0x0(,%eax,8),%edx
080e98be +0x164:  mov    %edx,%ecx
080e98c0 +0x166:  sub    %eax,%ecx
080e98c2 +0x168:  mov    %ecx,%eax
080e98c4 +0x16a:  add    0x10(%ebp),%eax
080e98c7 +0x16d:  mov    -0xc(%ebp),%edx
080e98ca +0x170:  movzwl 0x2(%eax,%edx,2),%eax
080e98cf +0x175:  cwtl
080e98d0 +0x176:  mov    %eax,-0x18(%ebp)
080e98d3 +0x179:  lea    -0x18(%ebp),%eax
080e98d6 +0x17c:  mov    %eax,0x4(%esp)
080e98da +0x180:  lea    -0x2c(%ebp),%eax
080e98dd +0x183:  mov    %eax,(%esp)
080e98e0 +0x186:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080e98e5 +0x18b:  addl   $0x1,-0xc(%ebp)
080e98e9 +0x18f:  cmpl   $0x5,-0xc(%ebp)
080e98ed +0x193:  setle  %al
080e98f0 +0x196:  test   %al,%al
080e98f2 +0x198:  jne    080e98b2 <+0x158>
080e98f4 +0x19a:  mov    -0x10(%ebp),%eax
080e98f7 +0x19d:  add    %eax,%eax
080e98f9 +0x19f:  lea    0x0(,%eax,8),%edx
080e9900 +0x1a6:  mov    %edx,%ecx
080e9902 +0x1a8:  sub    %eax,%ecx
080e9904 +0x1aa:  mov    %ecx,%eax
080e9906 +0x1ac:  add    0x10(%ebp),%eax
080e9909 +0x1af:  mov    %eax,0x4(%esp)
080e990d +0x1b3:  mov    -0x14(%ebp),%eax
080e9910 +0x1b6:  mov    %eax,(%esp)
080e9913 +0x1b9:  call   080ea6cc <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x305>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x305
080e9918 +0x1be:  lea    -0x2c(%ebp),%edx
080e991b +0x1c1:  mov    %edx,0x4(%esp)
080e991f +0x1c5:  mov    %eax,(%esp)
080e9922 +0x1c8:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
080e9927 +0x1cd:  jmp    080e992a <+0x1d0>
080e9929 +0x1cf:  nop
080e992a +0x1d0:  addl   $0x1,-0x10(%ebp)
080e992e +0x1d4:  movzbl -0x3c(%ebp),%eax
080e9932 +0x1d8:  cmp    -0x10(%ebp),%eax
080e9935 +0x1db:  jle    080e9944 <+0x1ea>
080e9937 +0x1dd:  cmpl   $0x5,-0x10(%ebp)
080e993b +0x1e1:  jg     080e9944 <+0x1ea>
080e993d +0x1e3:  mov    $0x1,%eax
080e9942 +0x1e8:  jmp    080e9949 <+0x1ef>
080e9944 +0x1ea:  mov    $0x0,%eax
080e9949 +0x1ef:  test   %al,%al
080e994b +0x1f1:  jne    080e9839 <+0xdf>
080e9951 +0x1f7:  jmp    080e996e <+0x214>
080e9953 +0x1f9:  mov    %edx,%ebx
080e9955 +0x1fb:  mov    %eax,%esi
080e9957 +0x1fd:  lea    -0x2c(%ebp),%eax
080e995a +0x200:  mov    %eax,(%esp)
080e995d +0x203:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080e9962 +0x208:  mov    %esi,%eax
080e9964 +0x20a:  mov    %ebx,%edx
080e9966 +0x20c:  mov    %eax,(%esp)
080e9969 +0x20f:  call   08ae3750 <_Unwind_Resume>
080e996e +0x214:  lea    -0x2c(%ebp),%eax
080e9971 +0x217:  mov    %eax,(%esp)
080e9974 +0x21a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080e9979 +0x21f:  jmp    080e997c <+0x222>
080e997b +0x221:  nop
080e997c +0x222:  lea    -0x8(%ebp),%esp
080e997f +0x225:  add    $0x0,%esp
080e9982 +0x228:  pop    %ebx
080e9983 +0x229:  pop    %esi
080e9984 +0x22a:  pop    %ebp
080e9985 +0x22b:  ret
```

## 反编译 C

```c
// ComboSkill::convertComboSkillMap @ 0x80e975a

/* ComboSkill::convertComboSkillMap(unsigned char, comoboSkillData const*, ENUM_SKILL_TREE_KIND) */

void __thiscall
ComboSkill::convertComboSkillMap(ComboSkill *this,byte param_1,int param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  vector<int,std::allocator<int>> *this_00;
  undefined4 local_44;
  byte local_40;
  vector<int,std::allocator<int>> local_30 [12];
  undefined4 local_24;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_20 [4];
  int local_1c;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  *local_18;
  int local_14;
  int local_10;
  
  local_40 = param_1;
  if (param_2 != 0) {
    if (param_1 < 7) {
      if ((param_4 == 0) || (param_4 == 1)) {
        local_18 = (map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
                    *)getComboSkillMap(this,param_4);
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
               *)&local_24);
        std::vector<int,std::allocator<int>>::vector(local_30);
        local_14 = 0;
        while( true ) {
          if ((local_14 < (int)(uint)local_40) && (local_14 < 6)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
                    /* try { // try from 080e9861 to 080e9926 has its CatchHandler @ 080e9953 */
          std::
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          ::find((short *)&local_44);
          local_24 = local_44;
          std::
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          ::end(local_20);
          cVar2 = std::
                  _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                  operator==((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)&local_24,(_Rb_tree_iterator *)local_20);
          if (cVar2 == '\0') {
            std::vector<int,std::allocator<int>>::clear(local_30);
            for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
              local_1c = (int)*(short *)(local_14 * 0xe + param_2 + 2 + local_10 * 2);
              std::vector<int,std::allocator<int>>::push_back(local_30,&local_1c);
            }
            this_00 = (vector<int,std::allocator<int>> *)
                      std::
                      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
                      ::operator[](local_18,(short *)(local_14 * 0xe + param_2));
            std::vector<int,std::allocator<int>>::operator=(this_00,(vector *)local_30);
          }
          local_14 = local_14 + 1;
        }
        std::vector<int,std::allocator<int>>::~vector(local_30);
      }
      else {
        LogManager::logFormat
                  (1,"ComboSkill.cpp",
                   "void ComboSkill::convertComboSkillMap(unsigned char, const comoboSkillData*, ENUM_SKILL_TREE_KIND)"
                   ,0x2b,"ComboSkill::setComboSkill kind(%d) error",param_4);
      }
    }
    else {
      LogManager::logFormat
                (1,"ComboSkill.cpp",
                 "void ComboSkill::convertComboSkillMap(unsigned char, const comoboSkillData*, ENUM_SKILL_TREE_KIND)"
                 ,0x25,"ComboSkill::setComboSkill count value(%d) error",(uint)param_1);
    }
  }
  return;
}
```

# getComboSkillSendForm

`_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND`

`ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9e96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9e96  _ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND
#           ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const
# range [0x080e9e96, 0x080ea02f]
080e9e96 +0x000:  push   %ebp
080e9e97 +0x001:  mov    %esp,%ebp
080e9e99 +0x003:  sub    $0x38,%esp
080e9e9c +0x006:  mov    0x10(%ebp),%eax
080e9e9f +0x009:  test   %eax,%eax
080e9ea1 +0x00b:  je     080e9ee3 <+0x4d>
080e9ea3 +0x00d:  mov    0x10(%ebp),%eax
080e9ea6 +0x010:  cmp    $0x1,%eax
080e9ea9 +0x013:  je     080e9ee3 <+0x4d>
080e9eab +0x015:  mov    0x10(%ebp),%eax
080e9eae +0x018:  mov    %eax,0x14(%esp)
080e9eb2 +0x01c:  movl   $"ComboSkill::getComboSkillSendForm kind(%d) error",0x10(%esp)
080e9eba +0x024:  movl   $0x99,0xc(%esp)
080e9ec2 +0x02c:  movl   $&_ZZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
080e9eca +0x034:  movl   $"ComboSkill.cpp",0x4(%esp)
080e9ed2 +0x03c:  movl   $0x1,(%esp)
080e9ed9 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080e9ede +0x048:  jmp    080ea02d <+0x197>
080e9ee3 +0x04d:  mov    0x10(%ebp),%eax
080e9ee6 +0x050:  mov    %eax,0x4(%esp)
080e9eea +0x054:  mov    0x8(%ebp),%eax
080e9eed +0x057:  mov    %eax,(%esp)
080e9ef0 +0x05a:  call   080ea3f8 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x31>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x31
080e9ef5 +0x05f:  mov    %eax,-0x10(%ebp)
080e9ef8 +0x062:  lea    -0x18(%ebp),%eax
080e9efb +0x065:  mov    -0x10(%ebp),%edx
080e9efe +0x068:  mov    %edx,0x4(%esp)
080e9f02 +0x06c:  mov    %eax,(%esp)
080e9f05 +0x06f:  call   080ea818 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x451>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x451
080e9f0a +0x074:  sub    $0x4,%esp
080e9f0d +0x077:  mov    0x10(%ebp),%edx
080e9f10 +0x07a:  mov    0xc(%ebp),%eax
080e9f13 +0x07d:  mov    %edx,0x4(%esp)
080e9f17 +0x081:  mov    %eax,(%esp)
080e9f1a +0x084:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080e9f1f +0x089:  mov    -0x10(%ebp),%eax
080e9f22 +0x08c:  mov    %eax,(%esp)
080e9f25 +0x08f:  call   080ea964 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x59d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x59d
080e9f2a +0x094:  mov    %eax,%edx
080e9f2c +0x096:  mov    0xc(%ebp),%eax
080e9f2f +0x099:  mov    %edx,0x4(%esp)
080e9f33 +0x09d:  mov    %eax,(%esp)
080e9f36 +0x0a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080e9f3b +0x0a5:  jmp    080e9ffe <+0x168>
080e9f40 +0x0aa:  lea    -0x18(%ebp),%eax
080e9f43 +0x0ad:  mov    %eax,(%esp)
080e9f46 +0x0b0:  call   080ea878 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4b1
080e9f4b +0x0b5:  movzwl (%eax),%eax
080e9f4e +0x0b8:  movswl %ax,%edx
080e9f51 +0x0bb:  mov    0xc(%ebp),%eax
080e9f54 +0x0be:  mov    %edx,0x4(%esp)
080e9f58 +0x0c2:  mov    %eax,(%esp)
080e9f5b +0x0c5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
080e9f60 +0x0ca:  lea    -0x18(%ebp),%eax
080e9f63 +0x0cd:  mov    %eax,(%esp)
080e9f66 +0x0d0:  call   080ea878 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4b1
080e9f6b +0x0d5:  add    $0x4,%eax
080e9f6e +0x0d8:  mov    %eax,(%esp)
080e9f71 +0x0db:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080e9f76 +0x0e0:  mov    %eax,%edx
080e9f78 +0x0e2:  mov    0xc(%ebp),%eax
080e9f7b +0x0e5:  mov    %edx,0x4(%esp)
080e9f7f +0x0e9:  mov    %eax,(%esp)
080e9f82 +0x0ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080e9f87 +0x0f1:  movl   $0x0,-0xc(%ebp)
080e9f8e +0x0f8:  jmp    080e9fc2 <+0x12c>
080e9f90 +0x0fa:  lea    -0x18(%ebp),%eax
080e9f93 +0x0fd:  mov    %eax,(%esp)
080e9f96 +0x100:  call   080ea878 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4b1
080e9f9b +0x105:  lea    0x4(%eax),%edx
080e9f9e +0x108:  mov    -0xc(%ebp),%eax
080e9fa1 +0x10b:  mov    %eax,0x4(%esp)
080e9fa5 +0x10f:  mov    %edx,(%esp)
080e9fa8 +0x112:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
080e9fad +0x117:  mov    (%eax),%edx
080e9faf +0x119:  mov    0xc(%ebp),%eax
080e9fb2 +0x11c:  mov    %edx,0x4(%esp)
080e9fb6 +0x120:  mov    %eax,(%esp)
080e9fb9 +0x123:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
080e9fbe +0x128:  addl   $0x1,-0xc(%ebp)
080e9fc2 +0x12c:  lea    -0x18(%ebp),%eax
080e9fc5 +0x12f:  mov    %eax,(%esp)
080e9fc8 +0x132:  call   080ea878 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4b1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4b1
080e9fcd +0x137:  add    $0x4,%eax
080e9fd0 +0x13a:  mov    %eax,(%esp)
080e9fd3 +0x13d:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080e9fd8 +0x142:  cmp    -0xc(%ebp),%eax
080e9fdb +0x145:  jbe    080e9fea <+0x154>
080e9fdd +0x147:  cmpl   $0x5,-0xc(%ebp)
080e9fe1 +0x14b:  ja     080e9fea <+0x154>
080e9fe3 +0x14d:  mov    $0x1,%eax
080e9fe8 +0x152:  jmp    080e9fef <+0x159>
080e9fea +0x154:  mov    $0x0,%eax
080e9fef +0x159:  test   %al,%al
080e9ff1 +0x15b:  jne    080e9f90 <+0xfa>
080e9ff3 +0x15d:  lea    -0x18(%ebp),%eax
080e9ff6 +0x160:  mov    %eax,(%esp)
080e9ff9 +0x163:  call   080ea886 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4bf>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4bf
080e9ffe +0x168:  lea    -0x14(%ebp),%eax
080ea001 +0x16b:  mov    -0x10(%ebp),%edx
080ea004 +0x16e:  mov    %edx,0x4(%esp)
080ea008 +0x172:  mov    %eax,(%esp)
080ea00b +0x175:  call   080ea83e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x477>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x477
080ea010 +0x17a:  sub    $0x4,%esp
080ea013 +0x17d:  lea    -0x14(%ebp),%eax
080ea016 +0x180:  mov    %eax,0x4(%esp)
080ea01a +0x184:  lea    -0x18(%ebp),%eax
080ea01d +0x187:  mov    %eax,(%esp)
080ea020 +0x18a:  call   080ea864 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x49d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x49d
080ea025 +0x18f:  test   %al,%al
080ea027 +0x191:  jne    080e9f40 <+0xaa>
080ea02d +0x197:  leave
080ea02e +0x198:  ret
080ea02f +0x199:  nop
```

## 反编译 C

```c
// ComboSkill::getComboSkillSendForm @ 0x80e9e96

/* ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const */

void __thiscall
ComboSkill::getComboSkillSendForm(ComboSkill *this,InterfacePacketBuf *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  uint uVar6;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_18 [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  *local_14;
  uint local_10;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    local_14 = (map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
                *)getComboSkillMap(this,param_3);
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::begin(local_1c);
    InterfacePacketBuf::put_byte(param_1,param_3);
    iVar3 = std::
            map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
            ::size(local_14);
    InterfacePacketBuf::put_byte(param_1,iVar3);
    while( true ) {
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end(local_18);
      cVar2 = std::
              _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator!=((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_1c,(_Rb_tree_const_iterator *)local_18);
      if (cVar2 == '\0') break;
      psVar4 = (short *)std::
                        _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                        ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                      *)local_1c);
      InterfacePacketBuf::put_short(param_1,(int)*psVar4);
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_1c);
      iVar3 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(iVar3 + 4));
      InterfacePacketBuf::put_byte(param_1,iVar3);
      local_10 = 0;
      while( true ) {
        iVar3 = std::
                _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        uVar6 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(iVar3 + 4));
        if ((local_10 < uVar6) && (local_10 < 6)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        iVar3 = std::
                _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)(iVar3 + 4),local_10);
        InterfacePacketBuf::put_short(param_1,*piVar5);
        local_10 = local_10 + 1;
      }
      std::_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator++((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                  *)local_1c);
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp",
               "void ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const",
               0x99,"ComboSkill::getComboSkillSendForm kind(%d) error",param_3);
  }
  return;
}
```

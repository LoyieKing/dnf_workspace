# GetLevelUpSkill

`_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE`

`sync_script::CSyncScript::GetLevelUpSkill(STEquipmentScript*, EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861d472` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861d472  _ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE
#           sync_script::CSyncScript::GetLevelUpSkill(STEquipmentScript*, EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
# range [0x0861d472, 0x0861d705]
0861d472 +0x000:  push   %ebp
0861d473 +0x001:  mov    %esp,%ebp
0861d475 +0x003:  push   %edi
0861d476 +0x004:  push   %esi
0861d477 +0x005:  push   %ebx
0861d478 +0x006:  sub    $0x42c,%esp
0861d47e +0x00c:  mov    $&_ZGVZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,%eax
0861d483 +0x011:  movzbl (%eax),%eax
0861d486 +0x014:  test   %al,%al
0861d488 +0x016:  jne    0861d4fb <+0x89>
0861d48a +0x018:  movl   $&_ZGVZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d491 +0x01f:  call   08725330 <__cxa_guard_acquire>
0861d496 +0x024:  test   %eax,%eax
0861d498 +0x026:  setne  %al
0861d49b +0x029:  test   %al,%al
0861d49d +0x02b:  je     0861d4fb <+0x89>
0861d49f +0x02d:  mov    $0x0,%ebx
0861d4a4 +0x032:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d4ab +0x039:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0861d4b0 +0x03e:  movl   $&_ZGVZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d4b7 +0x045:  call   08725250 <__cxa_guard_release>
0861d4bc +0x04a:  mov    $&_ZNSsD1Ev,%eax
0861d4c1 +0x04f:  movl   $&__dso_handle,0x8(%esp)
0861d4c9 +0x057:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,0x4(%esp)
0861d4d1 +0x05f:  mov    %eax,(%esp)
0861d4d4 +0x062:  call   0807ddd0 <_init+0x6c8>
0861d4d9 +0x067:  jmp    0861d4fb <+0x89>
0861d4db +0x069:  mov    %edx,%esi
0861d4dd +0x06b:  mov    %eax,%edi
0861d4df +0x06d:  test   %bl,%bl
0861d4e1 +0x06f:  jne    0861d4ef <+0x7d>
0861d4e3 +0x071:  movl   $&_ZGVZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d4ea +0x078:  call   087252c0 <__cxa_guard_abort>
0861d4ef +0x07d:  mov    %edi,%eax
0861d4f1 +0x07f:  mov    %esi,%edx
0861d4f3 +0x081:  mov    %eax,(%esp)
0861d4f6 +0x084:  call   08ae3750 <_Unwind_Resume>
0861d4fb +0x089:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d502 +0x090:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0861d507 +0x095:  mov    0x10(%ebp),%edx
0861d50a +0x098:  mov    %edx,%eax
0861d50c +0x09a:  add    %eax,%eax
0861d50e +0x09c:  add    %edx,%eax
0861d510 +0x09e:  shl    $0x2,%eax
0861d513 +0x0a1:  add    $0x400,%eax
0861d518 +0x0a6:  add    0xc(%ebp),%eax
0861d51b +0x0a9:  add    $0xc,%eax
0861d51e +0x0ac:  mov    %eax,(%esp)
0861d521 +0x0af:  call   08180d70 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xa07>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xa07
0861d526 +0x0b4:  mov    %eax,-0x20(%ebp)
0861d529 +0x0b7:  movl   $0x0,-0x1c(%ebp)
0861d530 +0x0be:  jmp    0861d6de <+0x26c>
0861d535 +0x0c3:  movl   $"|",0x4(%esp)
0861d53d +0x0cb:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d544 +0x0d2:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0861d549 +0x0d7:  lea    -0x21(%ebp),%eax
0861d54c +0x0da:  mov    %eax,(%esp)
0861d54f +0x0dd:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0861d554 +0x0e2:  mov    -0x1c(%ebp),%ecx
0861d557 +0x0e5:  mov    0x10(%ebp),%edx
0861d55a +0x0e8:  mov    %edx,%eax
0861d55c +0x0ea:  add    %eax,%eax
0861d55e +0x0ec:  add    %edx,%eax
0861d560 +0x0ee:  shl    $0x2,%eax
0861d563 +0x0f1:  add    $0x400,%eax
0861d568 +0x0f6:  add    0xc(%ebp),%eax
0861d56b +0x0f9:  add    $0xc,%eax
0861d56e +0x0fc:  mov    %ecx,0x4(%esp)
0861d572 +0x100:  mov    %eax,(%esp)
0861d575 +0x103:  call   086286e8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1d46>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1d46
0861d57a +0x108:  mov    (%eax),%eax
0861d57c +0x10a:  mov    %eax,0x4(%esp)
0861d580 +0x10e:  mov    0x8(%ebp),%eax
0861d583 +0x111:  mov    %eax,(%esp)
0861d586 +0x114:  call   0861d2dc <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB>  ; sync_script::CSyncScript::GetUserJob(ENUM_CHARACTERJOB)
0861d58b +0x119:  lea    -0x21(%ebp),%edx
0861d58e +0x11c:  mov    %edx,0x8(%esp)
0861d592 +0x120:  mov    %eax,0x4(%esp)
0861d596 +0x124:  lea    -0x28(%ebp),%eax
0861d599 +0x127:  mov    %eax,(%esp)
0861d59c +0x12a:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0861d5a1 +0x12f:  jmp    0861d5be <+0x14c>
0861d5a3 +0x131:  mov    %edx,%ebx
0861d5a5 +0x133:  mov    %eax,%esi
0861d5a7 +0x135:  lea    -0x21(%ebp),%eax
0861d5aa +0x138:  mov    %eax,(%esp)
0861d5ad +0x13b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0861d5b2 +0x140:  mov    %esi,%eax
0861d5b4 +0x142:  mov    %ebx,%edx
0861d5b6 +0x144:  mov    %eax,(%esp)
0861d5b9 +0x147:  call   08ae3750 <_Unwind_Resume>
0861d5be +0x14c:  lea    -0x21(%ebp),%eax
0861d5c1 +0x14f:  mov    %eax,(%esp)
0861d5c4 +0x152:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0861d5c9 +0x157:  movl   $"",0x4(%esp)
0861d5d1 +0x15f:  lea    -0x28(%ebp),%eax
0861d5d4 +0x162:  mov    %eax,(%esp)
0861d5d7 +0x165:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
0861d5dc +0x16a:  test   %eax,%eax
0861d5de +0x16c:  sete   %al
0861d5e1 +0x16f:  test   %al,%al
0861d5e3 +0x171:  je     0861d5fb <+0x189>
0861d5e5 +0x173:  movl   $"공통",0x4(%esp)
0861d5ed +0x17b:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d5f4 +0x182:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0861d5f9 +0x187:  jmp    0861d60e <+0x19c>
0861d5fb +0x189:  lea    -0x28(%ebp),%eax
0861d5fe +0x18c:  mov    %eax,0x4(%esp)
0861d602 +0x190:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d609 +0x197:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
0861d60e +0x19c:  movl   $0x400,0x8(%esp)
0861d616 +0x1a4:  movl   $0x0,0x4(%esp)
0861d61e +0x1ac:  lea    -0x428(%ebp),%eax
0861d624 +0x1b2:  mov    %eax,(%esp)
0861d627 +0x1b5:  call   0807dcc0 <_init+0x5b8>
0861d62c +0x1ba:  mov    -0x1c(%ebp),%ecx
0861d62f +0x1bd:  mov    0x10(%ebp),%edx
0861d632 +0x1c0:  mov    %edx,%eax
0861d634 +0x1c2:  add    %eax,%eax
0861d636 +0x1c4:  add    %edx,%eax
0861d638 +0x1c6:  shl    $0x2,%eax
0861d63b +0x1c9:  add    $0x400,%eax
0861d640 +0x1ce:  add    0xc(%ebp),%eax
0861d643 +0x1d1:  add    $0xc,%eax
0861d646 +0x1d4:  mov    %ecx,0x4(%esp)
0861d64a +0x1d8:  mov    %eax,(%esp)
0861d64d +0x1db:  call   086286e8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1d46>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1d46
0861d652 +0x1e0:  mov    0x8(%eax),%ebx
0861d655 +0x1e3:  mov    -0x1c(%ebp),%ecx
0861d658 +0x1e6:  mov    0x10(%ebp),%edx
0861d65b +0x1e9:  mov    %edx,%eax
0861d65d +0x1eb:  add    %eax,%eax
0861d65f +0x1ed:  add    %edx,%eax
0861d661 +0x1ef:  shl    $0x2,%eax
0861d664 +0x1f2:  add    $0x400,%eax
0861d669 +0x1f7:  add    0xc(%ebp),%eax
0861d66c +0x1fa:  add    $0xc,%eax
0861d66f +0x1fd:  mov    %ecx,0x4(%esp)
0861d673 +0x201:  mov    %eax,(%esp)
0861d676 +0x204:  call   086286e8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1d46>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1d46
0861d67b +0x209:  mov    0x4(%eax),%eax
0861d67e +0x20c:  mov    %ebx,0xc(%esp)
0861d682 +0x210:  mov    %eax,0x8(%esp)
0861d686 +0x214:  movl   $"| %d| %d",0x4(%esp)
0861d68e +0x21c:  lea    -0x428(%ebp),%eax
0861d694 +0x222:  mov    %eax,(%esp)
0861d697 +0x225:  call   0807e440 <_init+0xd38>
0861d69c +0x22a:  lea    -0x428(%ebp),%eax
0861d6a2 +0x230:  mov    %eax,0x4(%esp)
0861d6a6 +0x234:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d6ad +0x23b:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0861d6b2 +0x240:  jmp    0861d6cf <+0x25d>
0861d6b4 +0x242:  mov    %edx,%ebx
0861d6b6 +0x244:  mov    %eax,%esi
0861d6b8 +0x246:  lea    -0x28(%ebp),%eax
0861d6bb +0x249:  mov    %eax,(%esp)
0861d6be +0x24c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d6c3 +0x251:  mov    %esi,%eax
0861d6c5 +0x253:  mov    %ebx,%edx
0861d6c7 +0x255:  mov    %eax,(%esp)
0861d6ca +0x258:  call   08ae3750 <_Unwind_Resume>
0861d6cf +0x25d:  lea    -0x28(%ebp),%eax
0861d6d2 +0x260:  mov    %eax,(%esp)
0861d6d5 +0x263:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d6da +0x268:  addl   $0x1,-0x1c(%ebp)
0861d6de +0x26c:  mov    -0x1c(%ebp),%eax
0861d6e1 +0x26f:  cmp    -0x20(%ebp),%eax
0861d6e4 +0x272:  setl   %al
0861d6e7 +0x275:  test   %al,%al
0861d6e9 +0x277:  jne    0861d535 <+0xc3>
0861d6ef +0x27d:  movl   $&_ZZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXEE14level_up_skill,(%esp)
0861d6f6 +0x284:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861d6fb +0x289:  add    $0x42c,%esp
0861d701 +0x28f:  pop    %ebx
0861d702 +0x290:  pop    %esi
0861d703 +0x291:  pop    %edi
0861d704 +0x292:  pop    %ebp
0861d705 +0x293:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::GetLevelUpSkill @ 0x861d472

/* sync_script::CSyncScript::GetLevelUpSkill(STEquipmentScript*,
   EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX) */

void __thiscall sync_script::CSyncScript::GetLevelUpSkill(CSyncScript *this,int param_1,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char local_42c [1024];
  string local_2c [7];
  allocator<char> local_25;
  int local_24;
  uint local_20;
  
  if (GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)::
      level_up_skill == '\0') {
    iVar2 = __cxa_guard_acquire(&GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                                 ::level_up_skill);
    if (iVar2 != 0) {
                    /* try { // try from 0861d4ab to 0861d4af has its CatchHandler @ 0861d4db */
      std::string::string((string *)
                          &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                           ::level_up_skill);
      __cxa_guard_release(&GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                           ::level_up_skill);
      __cxa_atexit(std::string::~string,
                   &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                    ::level_up_skill,&__dso_handle);
    }
  }
  std::string::clear((string *)
                     &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                      ::level_up_skill);
  local_24 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::size
                       ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                        (param_3 * 0xc + param_1 + 0x40c));
  for (local_20 = 0; (int)local_20 < local_24; local_20 = local_20 + 1) {
    std::string::operator+=
              ((string *)
               &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                ::level_up_skill,"|");
    std::allocator<char>::allocator();
                    /* try { // try from 0861d575 to 0861d5a0 has its CatchHandler @ 0861d5a3 */
    puVar3 = (undefined4 *)
             std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::at
                       ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                        (param_3 * 0xc + param_1 + 0x40c),local_20);
    pcVar4 = (char *)GetUserJob(this,*puVar3);
    std::string::string(local_2c,pcVar4,(allocator *)&local_25);
    std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0861d5d7 to 0861d6b1 has its CatchHandler @ 0861d6b4 */
    iVar2 = std::string::compare(local_2c,"");
    if (iVar2 == 0) {
      std::string::operator+=
                ((string *)
                 &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                  ::level_up_skill,&DAT_08ce2f26);
    }
    else {
      std::string::operator+=
                ((string *)
                 &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                  ::level_up_skill,local_2c);
    }
    memset(local_42c,0,0x400);
    iVar2 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::at
                      ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                       (param_3 * 0xc + param_1 + 0x40c),local_20);
    uVar1 = *(undefined4 *)(iVar2 + 8);
    iVar2 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::at
                      ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                       (param_3 * 0xc + param_1 + 0x40c),local_20);
    sprintf(local_42c,"| %d| %d",*(undefined4 *)(iVar2 + 4),uVar1);
    std::string::operator+=
              ((string *)
               &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                ::level_up_skill,local_42c);
    std::string::~string(local_2c);
  }
  std::string::c_str((string *)
                     &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                      ::level_up_skill);
  return;
}
```

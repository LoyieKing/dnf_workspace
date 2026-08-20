# StrikerScript

`_ZN13StrikerScriptC1Ev`

`StrikerScript::StrikerScript()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9d88e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d88e  _ZN13StrikerScriptC1Ev
#           StrikerScript::StrikerScript()
# range [0x08a9d88e, 0x08a9da27]
08a9d88e +0x000:  push   %ebp
08a9d88f +0x001:  mov    %esp,%ebp
08a9d891 +0x003:  push   %esi
08a9d892 +0x004:  push   %ebx
08a9d893 +0x005:  sub    $0x10,%esp
08a9d896 +0x008:  mov    0x8(%ebp),%eax
08a9d899 +0x00b:  add    $0x14,%eax
08a9d89c +0x00e:  mov    %eax,(%esp)
08a9d89f +0x011:  call   08a9ed76 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x89>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x89
08a9d8a4 +0x016:  mov    0x8(%ebp),%eax
08a9d8a7 +0x019:  add    $0x20,%eax
08a9d8aa +0x01c:  mov    %eax,(%esp)
08a9d8ad +0x01f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a9d8b2 +0x024:  mov    0x8(%ebp),%eax
08a9d8b5 +0x027:  add    $0x2c,%eax
08a9d8b8 +0x02a:  mov    %eax,(%esp)
08a9d8bb +0x02d:  call   08a9ede8 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xfb>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xfb
08a9d8c0 +0x032:  mov    0x8(%ebp),%eax
08a9d8c3 +0x035:  add    $0x40,%eax
08a9d8c6 +0x038:  mov    %eax,(%esp)
08a9d8c9 +0x03b:  call   08a9ee5a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x16d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x16d
08a9d8ce +0x040:  mov    0x8(%ebp),%eax
08a9d8d1 +0x043:  add    $0x4c,%eax
08a9d8d4 +0x046:  mov    %eax,(%esp)
08a9d8d7 +0x049:  call   08a9eecc <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1df>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1df
08a9d8dc +0x04e:  mov    0x8(%ebp),%eax
08a9d8df +0x051:  add    $0x58,%eax
08a9d8e2 +0x054:  mov    %eax,(%esp)
08a9d8e5 +0x057:  call   08a9eecc <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1df>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1df
08a9d8ea +0x05c:  mov    0x8(%ebp),%eax
08a9d8ed +0x05f:  add    $0x6c,%eax
08a9d8f0 +0x062:  mov    %eax,(%esp)
08a9d8f3 +0x065:  call   08a9ef3e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x251>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x251
08a9d8f8 +0x06a:  mov    0x8(%ebp),%eax
08a9d8fb +0x06d:  add    $0x78,%eax
08a9d8fe +0x070:  mov    %eax,(%esp)
08a9d901 +0x073:  call   08a9efb0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x2c3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x2c3
08a9d906 +0x078:  mov    0x8(%ebp),%eax
08a9d909 +0x07b:  add    $0x94,%eax
08a9d90e +0x080:  mov    %eax,(%esp)
08a9d911 +0x083:  call   08a9f02a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x33d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x33d
08a9d916 +0x088:  mov    0x8(%ebp),%eax
08a9d919 +0x08b:  add    $0xa8,%eax
08a9d91e +0x090:  mov    %eax,(%esp)
08a9d921 +0x093:  call   08a9d7ec <_ZN20StrikerDirectionTypeC1Ev>  ; StrikerDirectionType::StrikerDirectionType()
08a9d926 +0x098:  mov    0x8(%ebp),%eax
08a9d929 +0x09b:  mov    %eax,(%esp)
08a9d92c +0x09e:  call   08a9dbb4 <_ZN13StrikerScript5clearEv>  ; StrikerScript::clear()
08a9d931 +0x0a3:  mov    0x8(%ebp),%eax
08a9d934 +0x0a6:  mov    %eax,(%esp)
08a9d937 +0x0a9:  call   08a9dc70 <_ZN13StrikerScript6createEv>  ; StrikerScript::create()
08a9d93c +0x0ae:  jmp    08a9da21 <+0x193>
08a9d941 +0x0b3:  mov    %edx,%ebx
08a9d943 +0x0b5:  mov    %eax,%esi
08a9d945 +0x0b7:  mov    0x8(%ebp),%eax
08a9d948 +0x0ba:  add    $0x94,%eax
08a9d94d +0x0bf:  mov    %eax,(%esp)
08a9d950 +0x0c2:  call   08a9f03e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x351>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x351
08a9d955 +0x0c7:  mov    %esi,%eax
08a9d957 +0x0c9:  mov    %ebx,%edx
08a9d959 +0x0cb:  jmp    08a9d95b <+0xcd>
08a9d95b +0x0cd:  mov    %edx,%ebx
08a9d95d +0x0cf:  mov    %eax,%esi
08a9d95f +0x0d1:  mov    0x8(%ebp),%eax
08a9d962 +0x0d4:  add    $0x78,%eax
08a9d965 +0x0d7:  mov    %eax,(%esp)
08a9d968 +0x0da:  call   08a9ed0a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1d
08a9d96d +0x0df:  mov    %esi,%eax
08a9d96f +0x0e1:  mov    %ebx,%edx
08a9d971 +0x0e3:  jmp    08a9d973 <+0xe5>
08a9d973 +0x0e5:  mov    %edx,%ebx
08a9d975 +0x0e7:  mov    %eax,%esi
08a9d977 +0x0e9:  mov    0x8(%ebp),%eax
08a9d97a +0x0ec:  add    $0x6c,%eax
08a9d97d +0x0ef:  mov    %eax,(%esp)
08a9d980 +0x0f2:  call   08a9ef52 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x265>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x265
08a9d985 +0x0f7:  mov    %esi,%eax
08a9d987 +0x0f9:  mov    %ebx,%edx
08a9d989 +0x0fb:  jmp    08a9d98b <+0xfd>
08a9d98b +0x0fd:  mov    %edx,%ebx
08a9d98d +0x0ff:  mov    %eax,%esi
08a9d98f +0x101:  mov    0x8(%ebp),%eax
08a9d992 +0x104:  add    $0x58,%eax
08a9d995 +0x107:  mov    %eax,(%esp)
08a9d998 +0x10a:  call   08a9eee0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1f3
08a9d99d +0x10f:  mov    %esi,%eax
08a9d99f +0x111:  mov    %ebx,%edx
08a9d9a1 +0x113:  jmp    08a9d9a3 <+0x115>
08a9d9a3 +0x115:  mov    %edx,%ebx
08a9d9a5 +0x117:  mov    %eax,%esi
08a9d9a7 +0x119:  mov    0x8(%ebp),%eax
08a9d9aa +0x11c:  add    $0x4c,%eax
08a9d9ad +0x11f:  mov    %eax,(%esp)
08a9d9b0 +0x122:  call   08a9eee0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1f3
08a9d9b5 +0x127:  mov    %esi,%eax
08a9d9b7 +0x129:  mov    %ebx,%edx
08a9d9b9 +0x12b:  jmp    08a9d9bb <+0x12d>
08a9d9bb +0x12d:  mov    %edx,%ebx
08a9d9bd +0x12f:  mov    %eax,%esi
08a9d9bf +0x131:  mov    0x8(%ebp),%eax
08a9d9c2 +0x134:  add    $0x40,%eax
08a9d9c5 +0x137:  mov    %eax,(%esp)
08a9d9c8 +0x13a:  call   08a9ee6e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x181>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x181
08a9d9cd +0x13f:  mov    %esi,%eax
08a9d9cf +0x141:  mov    %ebx,%edx
08a9d9d1 +0x143:  jmp    08a9d9d3 <+0x145>
08a9d9d3 +0x145:  mov    %edx,%ebx
08a9d9d5 +0x147:  mov    %eax,%esi
08a9d9d7 +0x149:  mov    0x8(%ebp),%eax
08a9d9da +0x14c:  add    $0x2c,%eax
08a9d9dd +0x14f:  mov    %eax,(%esp)
08a9d9e0 +0x152:  call   08a9edfc <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x10f>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x10f
08a9d9e5 +0x157:  mov    %esi,%eax
08a9d9e7 +0x159:  mov    %ebx,%edx
08a9d9e9 +0x15b:  jmp    08a9d9eb <+0x15d>
08a9d9eb +0x15d:  mov    %edx,%ebx
08a9d9ed +0x15f:  mov    %eax,%esi
08a9d9ef +0x161:  mov    0x8(%ebp),%eax
08a9d9f2 +0x164:  add    $0x20,%eax
08a9d9f5 +0x167:  mov    %eax,(%esp)
08a9d9f8 +0x16a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a9d9fd +0x16f:  mov    %esi,%eax
08a9d9ff +0x171:  mov    %ebx,%edx
08a9da01 +0x173:  jmp    08a9da03 <+0x175>
08a9da03 +0x175:  mov    %edx,%ebx
08a9da05 +0x177:  mov    %eax,%esi
08a9da07 +0x179:  mov    0x8(%ebp),%eax
08a9da0a +0x17c:  add    $0x14,%eax
08a9da0d +0x17f:  mov    %eax,(%esp)
08a9da10 +0x182:  call   08a9ed8a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9d
08a9da15 +0x187:  mov    %esi,%eax
08a9da17 +0x189:  mov    %ebx,%edx
08a9da19 +0x18b:  mov    %eax,(%esp)
08a9da1c +0x18e:  call   08ae3750 <_Unwind_Resume>
08a9da21 +0x193:  add    $0x10,%esp
08a9da24 +0x196:  pop    %ebx
08a9da25 +0x197:  pop    %esi
08a9da26 +0x198:  pop    %ebp
08a9da27 +0x199:  ret
```

## 反编译 C

```c
// StrikerScript::StrikerScript @ 0x8a9d88e

/* StrikerScript::StrikerScript() */

void __thiscall StrikerScript::StrikerScript(StrikerScript *this)

{
  std::vector<ContentsType::T,std::allocator<ContentsType::T>>::vector
            ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)(this + 0x14));
                    /* try { // try from 08a9d8ad to 08a9d8b1 has its CatchHandler @ 08a9da03 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x20));
                    /* try { // try from 08a9d8bb to 08a9d8bf has its CatchHandler @ 08a9d9eb */
  std::vector<ContentsRevision,std::allocator<ContentsRevision>>::vector
            ((vector<ContentsRevision,std::allocator<ContentsRevision>> *)(this + 0x2c));
                    /* try { // try from 08a9d8c9 to 08a9d8cd has its CatchHandler @ 08a9d9d3 */
  std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::vector
            ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40));
                    /* try { // try from 08a9d8d7 to 08a9d8db has its CatchHandler @ 08a9d9bb */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x4c));
                    /* try { // try from 08a9d8e5 to 08a9d8e9 has its CatchHandler @ 08a9d9a3 */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x58));
                    /* try { // try from 08a9d8f3 to 08a9d8f7 has its CatchHandler @ 08a9d98b */
  std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::vector
            ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c));
                    /* try { // try from 08a9d901 to 08a9d905 has its CatchHandler @ 08a9d973 */
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::map((map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
         *)(this + 0x78));
                    /* try { // try from 08a9d911 to 08a9d915 has its CatchHandler @ 08a9d95b */
  std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::vector
            ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)(this + 0x94))
  ;
  StrikerDirectionType::StrikerDirectionType((StrikerDirectionType *)(this + 0xa8));
                    /* try { // try from 08a9d92c to 08a9d93b has its CatchHandler @ 08a9d941 */
  clear(this);
  create(this);
  return;
}
```

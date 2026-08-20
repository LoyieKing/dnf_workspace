# ~StrikerScript

`_ZN13StrikerScriptD1Ev`

`StrikerScript::~StrikerScript()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9da28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9da28  _ZN13StrikerScriptD1Ev
#           StrikerScript::~StrikerScript()
# range [0x08a9da28, 0x08a9dbb3]
08a9da28 +0x000:  push   %ebp
08a9da29 +0x001:  mov    %esp,%ebp
08a9da2b +0x003:  push   %esi
08a9da2c +0x004:  push   %ebx
08a9da2d +0x005:  sub    $0x10,%esp
08a9da30 +0x008:  mov    0x8(%ebp),%eax
08a9da33 +0x00b:  mov    %eax,(%esp)
08a9da36 +0x00e:  call   08a9dcbe <_ZN13StrikerScript7destoryEv>  ; StrikerScript::destory()
08a9da3b +0x013:  jmp    08a9da57 <+0x2f>
08a9da3d +0x015:  mov    %edx,%ebx
08a9da3f +0x017:  mov    %eax,%esi
08a9da41 +0x019:  mov    0x8(%ebp),%eax
08a9da44 +0x01c:  add    $0x94,%eax
08a9da49 +0x021:  mov    %eax,(%esp)
08a9da4c +0x024:  call   08a9f03e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x351>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x351
08a9da51 +0x029:  mov    %esi,%eax
08a9da53 +0x02b:  mov    %ebx,%edx
08a9da55 +0x02d:  jmp    08a9da69 <+0x41>
08a9da57 +0x02f:  mov    0x8(%ebp),%eax
08a9da5a +0x032:  add    $0x94,%eax
08a9da5f +0x037:  mov    %eax,(%esp)
08a9da62 +0x03a:  call   08a9f03e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x351>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x351
08a9da67 +0x03f:  jmp    08a9da81 <+0x59>
08a9da69 +0x041:  mov    %edx,%ebx
08a9da6b +0x043:  mov    %eax,%esi
08a9da6d +0x045:  mov    0x8(%ebp),%eax
08a9da70 +0x048:  add    $0x78,%eax
08a9da73 +0x04b:  mov    %eax,(%esp)
08a9da76 +0x04e:  call   08a9ed0a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1d
08a9da7b +0x053:  mov    %esi,%eax
08a9da7d +0x055:  mov    %ebx,%edx
08a9da7f +0x057:  jmp    08a9da91 <+0x69>
08a9da81 +0x059:  mov    0x8(%ebp),%eax
08a9da84 +0x05c:  add    $0x78,%eax
08a9da87 +0x05f:  mov    %eax,(%esp)
08a9da8a +0x062:  call   08a9ed0a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1d
08a9da8f +0x067:  jmp    08a9daa9 <+0x81>
08a9da91 +0x069:  mov    %edx,%ebx
08a9da93 +0x06b:  mov    %eax,%esi
08a9da95 +0x06d:  mov    0x8(%ebp),%eax
08a9da98 +0x070:  add    $0x6c,%eax
08a9da9b +0x073:  mov    %eax,(%esp)
08a9da9e +0x076:  call   08a9ef52 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x265>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x265
08a9daa3 +0x07b:  mov    %esi,%eax
08a9daa5 +0x07d:  mov    %ebx,%edx
08a9daa7 +0x07f:  jmp    08a9dab9 <+0x91>
08a9daa9 +0x081:  mov    0x8(%ebp),%eax
08a9daac +0x084:  add    $0x6c,%eax
08a9daaf +0x087:  mov    %eax,(%esp)
08a9dab2 +0x08a:  call   08a9ef52 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x265>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x265
08a9dab7 +0x08f:  jmp    08a9dad1 <+0xa9>
08a9dab9 +0x091:  mov    %edx,%ebx
08a9dabb +0x093:  mov    %eax,%esi
08a9dabd +0x095:  mov    0x8(%ebp),%eax
08a9dac0 +0x098:  add    $0x58,%eax
08a9dac3 +0x09b:  mov    %eax,(%esp)
08a9dac6 +0x09e:  call   08a9eee0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1f3
08a9dacb +0x0a3:  mov    %esi,%eax
08a9dacd +0x0a5:  mov    %ebx,%edx
08a9dacf +0x0a7:  jmp    08a9dae1 <+0xb9>
08a9dad1 +0x0a9:  mov    0x8(%ebp),%eax
08a9dad4 +0x0ac:  add    $0x58,%eax
08a9dad7 +0x0af:  mov    %eax,(%esp)
08a9dada +0x0b2:  call   08a9eee0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1f3
08a9dadf +0x0b7:  jmp    08a9daf9 <+0xd1>
08a9dae1 +0x0b9:  mov    %edx,%ebx
08a9dae3 +0x0bb:  mov    %eax,%esi
08a9dae5 +0x0bd:  mov    0x8(%ebp),%eax
08a9dae8 +0x0c0:  add    $0x4c,%eax
08a9daeb +0x0c3:  mov    %eax,(%esp)
08a9daee +0x0c6:  call   08a9eee0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1f3
08a9daf3 +0x0cb:  mov    %esi,%eax
08a9daf5 +0x0cd:  mov    %ebx,%edx
08a9daf7 +0x0cf:  jmp    08a9db09 <+0xe1>
08a9daf9 +0x0d1:  mov    0x8(%ebp),%eax
08a9dafc +0x0d4:  add    $0x4c,%eax
08a9daff +0x0d7:  mov    %eax,(%esp)
08a9db02 +0x0da:  call   08a9eee0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x1f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x1f3
08a9db07 +0x0df:  jmp    08a9db21 <+0xf9>
08a9db09 +0x0e1:  mov    %edx,%ebx
08a9db0b +0x0e3:  mov    %eax,%esi
08a9db0d +0x0e5:  mov    0x8(%ebp),%eax
08a9db10 +0x0e8:  add    $0x40,%eax
08a9db13 +0x0eb:  mov    %eax,(%esp)
08a9db16 +0x0ee:  call   08a9ee6e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x181>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x181
08a9db1b +0x0f3:  mov    %esi,%eax
08a9db1d +0x0f5:  mov    %ebx,%edx
08a9db1f +0x0f7:  jmp    08a9db31 <+0x109>
08a9db21 +0x0f9:  mov    0x8(%ebp),%eax
08a9db24 +0x0fc:  add    $0x40,%eax
08a9db27 +0x0ff:  mov    %eax,(%esp)
08a9db2a +0x102:  call   08a9ee6e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x181>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x181
08a9db2f +0x107:  jmp    08a9db49 <+0x121>
08a9db31 +0x109:  mov    %edx,%ebx
08a9db33 +0x10b:  mov    %eax,%esi
08a9db35 +0x10d:  mov    0x8(%ebp),%eax
08a9db38 +0x110:  add    $0x2c,%eax
08a9db3b +0x113:  mov    %eax,(%esp)
08a9db3e +0x116:  call   08a9edfc <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x10f>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x10f
08a9db43 +0x11b:  mov    %esi,%eax
08a9db45 +0x11d:  mov    %ebx,%edx
08a9db47 +0x11f:  jmp    08a9db59 <+0x131>
08a9db49 +0x121:  mov    0x8(%ebp),%eax
08a9db4c +0x124:  add    $0x2c,%eax
08a9db4f +0x127:  mov    %eax,(%esp)
08a9db52 +0x12a:  call   08a9edfc <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x10f>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x10f
08a9db57 +0x12f:  jmp    08a9db71 <+0x149>
08a9db59 +0x131:  mov    %edx,%ebx
08a9db5b +0x133:  mov    %eax,%esi
08a9db5d +0x135:  mov    0x8(%ebp),%eax
08a9db60 +0x138:  add    $0x20,%eax
08a9db63 +0x13b:  mov    %eax,(%esp)
08a9db66 +0x13e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a9db6b +0x143:  mov    %esi,%eax
08a9db6d +0x145:  mov    %ebx,%edx
08a9db6f +0x147:  jmp    08a9db81 <+0x159>
08a9db71 +0x149:  mov    0x8(%ebp),%eax
08a9db74 +0x14c:  add    $0x20,%eax
08a9db77 +0x14f:  mov    %eax,(%esp)
08a9db7a +0x152:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a9db7f +0x157:  jmp    08a9db9f <+0x177>
08a9db81 +0x159:  mov    %edx,%ebx
08a9db83 +0x15b:  mov    %eax,%esi
08a9db85 +0x15d:  mov    0x8(%ebp),%eax
08a9db88 +0x160:  add    $0x14,%eax
08a9db8b +0x163:  mov    %eax,(%esp)
08a9db8e +0x166:  call   08a9ed8a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9d
08a9db93 +0x16b:  mov    %esi,%eax
08a9db95 +0x16d:  mov    %ebx,%edx
08a9db97 +0x16f:  mov    %eax,(%esp)
08a9db9a +0x172:  call   08ae3750 <_Unwind_Resume>
08a9db9f +0x177:  mov    0x8(%ebp),%eax
08a9dba2 +0x17a:  add    $0x14,%eax
08a9dba5 +0x17d:  mov    %eax,(%esp)
08a9dba8 +0x180:  call   08a9ed8a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9d
08a9dbad +0x185:  add    $0x10,%esp
08a9dbb0 +0x188:  pop    %ebx
08a9dbb1 +0x189:  pop    %esi
08a9dbb2 +0x18a:  pop    %ebp
08a9dbb3 +0x18b:  ret
```

## 反编译 C

```c
// StrikerScript::~StrikerScript @ 0x8a9da28

/* StrikerScript::~StrikerScript() */

void __thiscall StrikerScript::~StrikerScript(StrikerScript *this)

{
                    /* try { // try from 08a9da36 to 08a9da3a has its CatchHandler @ 08a9da3d */
  destory(this);
                    /* try { // try from 08a9da62 to 08a9da66 has its CatchHandler @ 08a9da69 */
  std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::~vector
            ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)(this + 0x94))
  ;
                    /* try { // try from 08a9da8a to 08a9da8e has its CatchHandler @ 08a9da91 */
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::~map((map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
          *)(this + 0x78));
                    /* try { // try from 08a9dab2 to 08a9dab6 has its CatchHandler @ 08a9dab9 */
  std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::~vector
            ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c));
                    /* try { // try from 08a9dada to 08a9dade has its CatchHandler @ 08a9dae1 */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::~vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x58));
                    /* try { // try from 08a9db02 to 08a9db06 has its CatchHandler @ 08a9db09 */
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::~vector
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x4c));
                    /* try { // try from 08a9db2a to 08a9db2e has its CatchHandler @ 08a9db31 */
  std::vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>>::~vector
            ((vector<StrikerSkillDataUp,std::allocator<StrikerSkillDataUp>> *)(this + 0x40));
                    /* try { // try from 08a9db52 to 08a9db56 has its CatchHandler @ 08a9db59 */
  std::vector<ContentsRevision,std::allocator<ContentsRevision>>::~vector
            ((vector<ContentsRevision,std::allocator<ContentsRevision>> *)(this + 0x2c));
                    /* try { // try from 08a9db7a to 08a9db7e has its CatchHandler @ 08a9db81 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<ContentsType::T,std::allocator<ContentsType::T>>::~vector
            ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)(this + 0x14));
  return;
}
```

# ~HeroMissionEvent

`_ZN16HeroMissionEventD1Ev`

`HeroMissionEvent::~HeroMissionEvent()`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x081665a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081665a2  _ZN16HeroMissionEventD1Ev
#           HeroMissionEvent::~HeroMissionEvent()
# range [0x081665a2, 0x0816662b]
081665a2 +0x00:  push   %ebp
081665a3 +0x01:  mov    %esp,%ebp
081665a5 +0x03:  push   %esi
081665a6 +0x04:  push   %ebx
081665a7 +0x05:  sub    $0x10,%esp
081665aa +0x08:  mov    0x8(%ebp),%eax
081665ad +0x0b:  movl   $&_ZTV16HeroMissionEvent+0x8,(%eax)
081665b3 +0x11:  mov    0x8(%ebp),%eax
081665b6 +0x14:  add    $0x24,%eax
081665b9 +0x17:  mov    %eax,(%esp)
081665bc +0x1a:  call   08168310 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x171>  ; global constructors keyed to HeroMissionValue::clear()+0x171
081665c1 +0x1f:  jmp    081665db <+0x39>
081665c3 +0x21:  mov    %edx,%ebx
081665c5 +0x23:  mov    %eax,%esi
081665c7 +0x25:  mov    0x8(%ebp),%eax
081665ca +0x28:  add    $0xc,%eax
081665cd +0x2b:  mov    %eax,(%esp)
081665d0 +0x2e:  call   081682fc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x15d>  ; global constructors keyed to HeroMissionValue::clear()+0x15d
081665d5 +0x33:  mov    %esi,%eax
081665d7 +0x35:  mov    %ebx,%edx
081665d9 +0x37:  jmp    081665eb <+0x49>
081665db +0x39:  mov    0x8(%ebp),%eax
081665de +0x3c:  add    $0xc,%eax
081665e1 +0x3f:  mov    %eax,(%esp)
081665e4 +0x42:  call   081682fc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x15d>  ; global constructors keyed to HeroMissionValue::clear()+0x15d
081665e9 +0x47:  jmp    08166606 <+0x64>
081665eb +0x49:  mov    %edx,%ebx
081665ed +0x4b:  mov    %eax,%esi
081665ef +0x4d:  mov    0x8(%ebp),%eax
081665f2 +0x50:  mov    %eax,(%esp)
081665f5 +0x53:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081665fa +0x58:  mov    %esi,%eax
081665fc +0x5a:  mov    %ebx,%edx
081665fe +0x5c:  mov    %eax,(%esp)
08166601 +0x5f:  call   08ae3750 <_Unwind_Resume>
08166606 +0x64:  mov    0x8(%ebp),%eax
08166609 +0x67:  mov    %eax,(%esp)
0816660c +0x6a:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08166611 +0x6f:  mov    $0x0,%eax
08166616 +0x74:  test   %al,%al
08166618 +0x76:  je     08166625 <+0x83>
0816661a +0x78:  mov    0x8(%ebp),%eax
0816661d +0x7b:  mov    %eax,(%esp)
08166620 +0x7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08166625 +0x83:  add    $0x10,%esp
08166628 +0x86:  pop    %ebx
08166629 +0x87:  pop    %esi
0816662a +0x88:  pop    %ebp
0816662b +0x89:  ret
```

## 反编译 C

```c
// HeroMissionEvent::~HeroMissionEvent @ 0x81665a2

/* WARNING: Removing unreachable block (ram,0x0816661a) */
/* HeroMissionEvent::~HeroMissionEvent() */

void __thiscall HeroMissionEvent::~HeroMissionEvent(HeroMissionEvent *this)

{
  *(undefined ***)this = &PTR__HeroMissionEvent_08b7f008;
                    /* try { // try from 081665bc to 081665c0 has its CatchHandler @ 081665c3 */
  std::
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  ::~map((map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
          *)(this + 0x24));
                    /* try { // try from 081665e4 to 081665e8 has its CatchHandler @ 081665eb */
  std::
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  ::~map((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
          *)(this + 0xc));
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

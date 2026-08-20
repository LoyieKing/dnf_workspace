# HeroMissionEvent

`_ZN16HeroMissionEventC1Ev`

`HeroMissionEvent::HeroMissionEvent()`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08166522` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166522  _ZN16HeroMissionEventC1Ev
#           HeroMissionEvent::HeroMissionEvent()
# range [0x08166522, 0x081665a1]
08166522 +0x00:  push   %ebp
08166523 +0x01:  mov    %esp,%ebp
08166525 +0x03:  push   %esi
08166526 +0x04:  push   %ebx
08166527 +0x05:  sub    $0x10,%esp
0816652a +0x08:  mov    0x8(%ebp),%eax
0816652d +0x0b:  mov    %eax,(%esp)
08166530 +0x0e:  call   0816858c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3ed>  ; global constructors keyed to HeroMissionValue::clear()+0x3ed
08166535 +0x13:  mov    0x8(%ebp),%eax
08166538 +0x16:  mov    %eax,(%esp)
0816653b +0x19:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08166540 +0x1e:  mov    0x8(%ebp),%eax
08166543 +0x21:  movl   $&_ZTV16HeroMissionEvent+0x8,(%eax)
08166549 +0x27:  mov    0x8(%ebp),%eax
0816654c +0x2a:  add    $0xc,%eax
0816654f +0x2d:  mov    %eax,(%esp)
08166552 +0x30:  call   08168592 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3f3>  ; global constructors keyed to HeroMissionValue::clear()+0x3f3
08166557 +0x35:  mov    0x8(%ebp),%eax
0816655a +0x38:  add    $0x24,%eax
0816655d +0x3b:  mov    %eax,(%esp)
08166560 +0x3e:  call   0816860c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x46d>  ; global constructors keyed to HeroMissionValue::clear()+0x46d
08166565 +0x43:  jmp    0816659a <+0x78>
08166567 +0x45:  mov    %edx,%ebx
08166569 +0x47:  mov    %eax,%esi
0816656b +0x49:  mov    0x8(%ebp),%eax
0816656e +0x4c:  add    $0xc,%eax
08166571 +0x4f:  mov    %eax,(%esp)
08166574 +0x52:  call   081682fc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x15d>  ; global constructors keyed to HeroMissionValue::clear()+0x15d
08166579 +0x57:  mov    %esi,%eax
0816657b +0x59:  mov    %ebx,%edx
0816657d +0x5b:  jmp    0816657f <+0x5d>
0816657f +0x5d:  mov    %edx,%ebx
08166581 +0x5f:  mov    %eax,%esi
08166583 +0x61:  mov    0x8(%ebp),%eax
08166586 +0x64:  mov    %eax,(%esp)
08166589 +0x67:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0816658e +0x6c:  mov    %esi,%eax
08166590 +0x6e:  mov    %ebx,%edx
08166592 +0x70:  mov    %eax,(%esp)
08166595 +0x73:  call   08ae3750 <_Unwind_Resume>
0816659a +0x78:  add    $0x10,%esp
0816659d +0x7b:  pop    %ebx
0816659e +0x7c:  pop    %esi
0816659f +0x7d:  pop    %ebp
081665a0 +0x7e:  ret
081665a1 +0x7f:  nop
```

## 反编译 C

```c
// HeroMissionEvent::HeroMissionEvent @ 0x8166522

/* HeroMissionEvent::HeroMissionEvent() */

void __thiscall HeroMissionEvent::HeroMissionEvent(HeroMissionEvent *this)

{
  ARAD::Singleton<HeroMissionEvent>::Singleton();
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__HeroMissionEvent_08b7f008;
                    /* try { // try from 08166552 to 08166556 has its CatchHandler @ 0816657f */
  std::
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  ::map((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
         *)(this + 0xc));
                    /* try { // try from 08166560 to 08166564 has its CatchHandler @ 08166567 */
  std::
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  ::map((map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
         *)(this + 0x24));
  return;
}
```

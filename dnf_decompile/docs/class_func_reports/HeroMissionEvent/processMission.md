# processMission

`_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj`

`HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x081672be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081672be  _ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj
#           HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
# range [0x081672be, 0x0816748d]
081672be +0x000:  push   %ebp
081672bf +0x001:  mov    %esp,%ebp
081672c1 +0x003:  push   %ebx
081672c2 +0x004:  sub    $0x34,%esp
081672c5 +0x007:  mov    0x8(%ebp),%eax
081672c8 +0x00a:  mov    (%eax),%eax
081672ca +0x00c:  add    $0x34,%eax
081672cd +0x00f:  mov    (%eax),%edx
081672cf +0x011:  mov    0x8(%ebp),%eax
081672d2 +0x014:  movl   $0x0,0x4(%esp)
081672da +0x01c:  mov    %eax,(%esp)
081672dd +0x01f:  call   *%edx
081672df +0x021:  xor    $0x1,%eax
081672e2 +0x024:  test   %al,%al
081672e4 +0x026:  jne    08167488 <+0x1ca>
081672ea +0x02c:  cmpl   $0x0,0xc(%ebp)
081672ee +0x030:  jne    08167321 <+0x63>
081672f0 +0x032:  movl   $"[HeroMission] User is null.",0x10(%esp)
081672f8 +0x03a:  movl   $0x2b8,0xc(%esp)
08167300 +0x042:  movl   $&_ZZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEjE19__PRETTY_FUNCTION__,0x8(%esp)
08167308 +0x04a:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167310 +0x052:  movl   $0x1,(%esp)
08167317 +0x059:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816731c +0x05e:  jmp    08167489 <+0x1cb>
08167321 +0x063:  movl   $0x0,-0x14(%ebp)
08167328 +0x06a:  mov    0x10(%ebp),%eax
0816732b +0x06d:  lea    -0x14(%ebp),%edx
0816732e +0x070:  mov    %edx,0xc(%esp)
08167332 +0x074:  mov    %eax,0x8(%esp)
08167336 +0x078:  mov    0xc(%ebp),%eax
08167339 +0x07b:  mov    %eax,0x4(%esp)
0816733d +0x07f:  mov    0x8(%ebp),%eax
08167340 +0x082:  mov    %eax,(%esp)
08167343 +0x085:  call   08168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>  ; HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T, HeroMissionValue*&)
08167348 +0x08a:  test   %al,%al
0816734a +0x08c:  je     08167489 <+0x1cb>
08167350 +0x092:  mov    0x8(%ebp),%eax
08167353 +0x095:  lea    0xc(%eax),%ecx
08167356 +0x098:  lea    -0x18(%ebp),%eax
08167359 +0x09b:  lea    0x10(%ebp),%edx
0816735c +0x09e:  mov    %edx,0x8(%esp)
08167360 +0x0a2:  mov    %ecx,0x4(%esp)
08167364 +0x0a6:  mov    %eax,(%esp)
08167367 +0x0a9:  call   08168964 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7c5>  ; global constructors keyed to HeroMissionValue::clear()+0x7c5
0816736c +0x0ae:  sub    $0x4,%esp
0816736f +0x0b1:  mov    0x8(%ebp),%eax
08167372 +0x0b4:  lea    0xc(%eax),%edx
08167375 +0x0b7:  lea    -0x10(%ebp),%eax
08167378 +0x0ba:  mov    %edx,0x4(%esp)
0816737c +0x0be:  mov    %eax,(%esp)
0816737f +0x0c1:  call   0816871e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x57f>  ; global constructors keyed to HeroMissionValue::clear()+0x57f
08167384 +0x0c6:  sub    $0x4,%esp
08167387 +0x0c9:  lea    -0x10(%ebp),%eax
0816738a +0x0cc:  mov    %eax,0x4(%esp)
0816738e +0x0d0:  lea    -0x18(%ebp),%eax
08167391 +0x0d3:  mov    %eax,(%esp)
08167394 +0x0d6:  call   08168990 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7f1>  ; global constructors keyed to HeroMissionValue::clear()+0x7f1
08167399 +0x0db:  test   %al,%al
0816739b +0x0dd:  je     0816740e <+0x150>
0816739d +0x0df:  mov    0x10(%ebp),%eax
081673a0 +0x0e2:  mov    %eax,%ebx
081673a2 +0x0e4:  movl   $0xffffffff,0x4(%esp)
081673aa +0x0ec:  mov    0xc(%ebp),%eax
081673ad +0x0ef:  mov    %eax,(%esp)
081673b0 +0x0f2:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081673b5 +0x0f7:  mov    %ebx,0x18(%esp)
081673b9 +0x0fb:  mov    %eax,0x14(%esp)
081673bd +0x0ff:  movl   $"[HeroMission] Invalid mission. (charac:%u, mission:%d)",0x10(%esp)
081673c5 +0x107:  movl   $0x2c2,0xc(%esp)
081673cd +0x10f:  movl   $&_ZZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEjE19__PRETTY_FUNCTION__,0x8(%esp)
081673d5 +0x117:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
081673dd +0x11f:  movl   $0x1,(%esp)
081673e4 +0x126:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081673e9 +0x12b:  movl   $0x2c3,0xc(%esp)
081673f1 +0x133:  movl   $0x1,0x8(%esp)
081673f9 +0x13b:  movl   $0x3e,0x4(%esp)
08167401 +0x143:  mov    0xc(%ebp),%eax
08167404 +0x146:  mov    %eax,(%esp)
08167407 +0x149:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
0816740c +0x14e:  jmp    08167489 <+0x1cb>
0816740e +0x150:  mov    -0x14(%ebp),%eax
08167411 +0x153:  movzwl 0xa(%eax),%eax
08167415 +0x157:  mov    %ax,-0xa(%ebp)
08167419 +0x15b:  lea    -0x18(%ebp),%eax
0816741c +0x15e:  mov    %eax,(%esp)
0816741f +0x161:  call   08168776 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5d7>  ; global constructors keyed to HeroMissionValue::clear()+0x5d7
08167424 +0x166:  mov    0x4(%eax),%eax
08167427 +0x169:  mov    (%eax),%edx
08167429 +0x16b:  add    $0x8,%edx
0816742c +0x16e:  mov    (%edx),%ebx
0816742e +0x170:  mov    -0x14(%ebp),%edx
08167431 +0x173:  mov    0x14(%ebp),%ecx
08167434 +0x176:  mov    %ecx,0xc(%esp)
08167438 +0x17a:  mov    %edx,0x8(%esp)
0816743c +0x17e:  mov    0xc(%ebp),%edx
0816743f +0x181:  mov    %edx,0x4(%esp)
08167443 +0x185:  mov    %eax,(%esp)
08167446 +0x188:  call   *%ebx
08167448 +0x18a:  mov    0x10(%ebp),%eax
0816744b +0x18d:  cmp    $0x4,%eax
0816744e +0x190:  jne    08167489 <+0x1cb>
08167450 +0x192:  cmpw   $0x0,-0xa(%ebp)
08167455 +0x197:  jne    08167489 <+0x1cb>
08167457 +0x199:  mov    -0x14(%ebp),%eax
0816745a +0x19c:  movzwl 0xa(%eax),%eax
0816745e +0x1a0:  cmp    -0xa(%ebp),%ax
08167462 +0x1a4:  jbe    08167489 <+0x1cb>
08167464 +0x1a6:  movl   $0x1,0xc(%esp)
0816746c +0x1ae:  movl   $0x6,0x8(%esp)
08167474 +0x1b6:  mov    0xc(%ebp),%eax
08167477 +0x1b9:  mov    %eax,0x4(%esp)
0816747b +0x1bd:  mov    0x8(%ebp),%eax
0816747e +0x1c0:  mov    %eax,(%esp)
08167481 +0x1c3:  call   081672be <+0x0>
08167486 +0x1c8:  jmp    08167489 <+0x1cb>
08167488 +0x1ca:  nop
08167489 +0x1cb:  mov    -0x4(%ebp),%ebx
0816748c +0x1ce:  leave
0816748d +0x1cf:  ret
```

## 反编译 C

```c
// HeroMissionEvent::processMission @ 0x81672be

/* HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int) */

void __thiscall
HeroMissionEvent::processMission
          (HeroMissionEvent *this,CUser *param_1,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_1c [4];
  int local_18;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_14 [6];
  short local_e;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)"
                 ,0x2b8,"[HeroMission] User is null.");
    }
    else {
      local_18 = 0;
      cVar1 = findMissionValue(this,param_1,param_3,&local_18);
      if (cVar1 != '\0') {
        std::
        map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
        ::find(local_1c);
        std::
        map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
        ::end(local_14);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
        if (cVar1 == '\0') {
          local_e = *(short *)(local_18 + 10);
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                  ::operator->(local_1c);
          (**(code **)(**(int **)(iVar3 + 4) + 8))(*(int **)(iVar3 + 4),param_1,local_18,param_4);
          if (((param_3 == 4) && (local_e == 0)) && (*(short *)(local_18 + 10) != 0)) {
            processMission(this,param_1,6,1);
          }
        }
        else {
          uVar2 = CUser::get_charac_no(param_1,-1);
          LogManager::logFormat
                    (1,"localtaiwan/Event/EventHeroMission.cpp",
                     "void HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)"
                     ,0x2c2,"[HeroMission] Invalid mission. (charac:%u, mission:%d)",uVar2,param_3);
          CUser::DisConnSig(param_1,0x3e,1,0x2c3);
        }
      }
    }
  }
  return;
}
```

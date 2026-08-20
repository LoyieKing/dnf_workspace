# rewardMission

`_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue`

`UseFatigueMission::rewardMission(CUser*, HeroMissionValue&)`

| 类 | 地址 |
|---|---|
| `UseFatigueMission` | `0x081657a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081657a2  _ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue
#           UseFatigueMission::rewardMission(CUser*, HeroMissionValue&)
# range [0x081657a2, 0x0816591f]
081657a2 +0x000:  push   %ebp
081657a3 +0x001:  mov    %esp,%ebp
081657a5 +0x003:  push   %esi
081657a6 +0x004:  push   %ebx
081657a7 +0x005:  sub    $0x30,%esp
081657aa +0x008:  mov    0x8(%ebp),%eax
081657ad +0x00b:  mov    %eax,(%esp)
081657b0 +0x00e:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
081657b5 +0x013:  xor    $0x1,%eax
081657b8 +0x016:  test   %al,%al
081657ba +0x018:  je     081657cf <+0x2d>
081657bc +0x01a:  mov    0x10(%ebp),%eax
081657bf +0x01d:  movzwl 0xa(%eax),%eax
081657c3 +0x021:  test   %ax,%ax
081657c6 +0x024:  je     081657cf <+0x2d>
081657c8 +0x026:  mov    $0x1,%eax
081657cd +0x02b:  jmp    081657d4 <+0x32>
081657cf +0x02d:  mov    $0x0,%eax
081657d4 +0x032:  test   %al,%al
081657d6 +0x034:  je     0816583e <+0x9c>
081657d8 +0x036:  mov    0x10(%ebp),%eax
081657db +0x039:  movzwl 0xa(%eax),%eax
081657df +0x03d:  movzwl %ax,%esi
081657e2 +0x040:  mov    0x10(%ebp),%eax
081657e5 +0x043:  mov    (%eax),%eax
081657e7 +0x045:  mov    %eax,%ebx
081657e9 +0x047:  movl   $0xffffffff,0x4(%esp)
081657f1 +0x04f:  mov    0xc(%ebp),%eax
081657f4 +0x052:  mov    %eax,(%esp)
081657f7 +0x055:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081657fc +0x05a:  mov    %esi,0x1c(%esp)
08165800 +0x05e:  mov    %ebx,0x18(%esp)
08165804 +0x062:  mov    %eax,0x14(%esp)
08165808 +0x066:  movl   $"[HeroMission] Already reward. (charac:%u,mission:%d,count:%d)",0x10(%esp)
08165810 +0x06e:  movl   $0xe5,0xc(%esp)
08165818 +0x076:  movl   $&_ZZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x8(%esp)
08165820 +0x07e:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08165828 +0x086:  movl   $0x1,(%esp)
0816582f +0x08d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08165834 +0x092:  mov    $0x0,%eax
08165839 +0x097:  jmp    08165918 <+0x176>
0816583e +0x09c:  mov    0x10(%ebp),%eax
08165841 +0x09f:  movzwl 0x4(%eax),%ebx
08165845 +0x0a3:  mov    0x8(%ebp),%eax
08165848 +0x0a6:  add    $0x28,%eax
0816584b +0x0a9:  movl   $0x0,0x4(%esp)
08165853 +0x0b1:  mov    %eax,(%esp)
08165856 +0x0b4:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
0816585b +0x0b9:  movzwl (%eax),%eax
0816585e +0x0bc:  cmp    %ax,%bx
08165861 +0x0bf:  setb   %al
08165864 +0x0c2:  test   %al,%al
08165866 +0x0c4:  je     081658cb <+0x129>
08165868 +0x0c6:  mov    0x10(%ebp),%eax
0816586b +0x0c9:  movzwl 0xa(%eax),%eax
0816586f +0x0cd:  movzwl %ax,%esi
08165872 +0x0d0:  mov    0x10(%ebp),%eax
08165875 +0x0d3:  mov    (%eax),%eax
08165877 +0x0d5:  mov    %eax,%ebx
08165879 +0x0d7:  movl   $0xffffffff,0x4(%esp)
08165881 +0x0df:  mov    0xc(%ebp),%eax
08165884 +0x0e2:  mov    %eax,(%esp)
08165887 +0x0e5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0816588c +0x0ea:  mov    %esi,0x1c(%esp)
08165890 +0x0ee:  mov    %ebx,0x18(%esp)
08165894 +0x0f2:  mov    %eax,0x14(%esp)
08165898 +0x0f6:  movl   $"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,count:%d)",0x10(%esp)
081658a0 +0x0fe:  movl   $0xec,0xc(%esp)
081658a8 +0x106:  movl   $&_ZZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x8(%esp)
081658b0 +0x10e:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
081658b8 +0x116:  movl   $0x1,(%esp)
081658bf +0x11d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081658c4 +0x122:  mov    $0x0,%eax
081658c9 +0x127:  jmp    08165918 <+0x176>
081658cb +0x129:  mov    0x8(%ebp),%eax
081658ce +0x12c:  mov    0xc(%ebp),%edx
081658d1 +0x12f:  mov    %edx,0x4(%esp)
081658d5 +0x133:  mov    %eax,(%esp)
081658d8 +0x136:  call   0816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>  ; BaseHeroMissionCondition::rewardProcess(CUser*)
081658dd +0x13b:  mov    %al,-0x9(%ebp)
081658e0 +0x13e:  mov    0x10(%ebp),%eax
081658e3 +0x141:  movzwl 0xa(%eax),%eax
081658e7 +0x145:  lea    0x1(%eax),%edx
081658ea +0x148:  mov    0x10(%ebp),%eax
081658ed +0x14b:  mov    %dx,0xa(%eax)
081658f1 +0x14f:  mov    0x10(%ebp),%eax
081658f4 +0x152:  movw   $0x1,0x6(%eax)
081658fa +0x158:  mov    0x8(%ebp),%eax
081658fd +0x15b:  mov    %eax,(%esp)
08165900 +0x15e:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
08165905 +0x163:  test   %al,%al
08165907 +0x165:  je     08165914 <+0x172>
08165909 +0x167:  mov    0x10(%ebp),%eax
0816590c +0x16a:  mov    %eax,(%esp)
0816590f +0x16d:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
08165914 +0x172:  movzbl -0x9(%ebp),%eax
08165918 +0x176:  add    $0x30,%esp
0816591b +0x179:  pop    %ebx
0816591c +0x17a:  pop    %esi
0816591d +0x17b:  pop    %ebp
0816591e +0x17c:  ret
0816591f +0x17d:  nop
```

## 反编译 C

```c
// UseFatigueMission::rewardMission @ 0x81657a2

/* UseFatigueMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
UseFatigueMission::rewardMission(UseFatigueMission *this,CUser *param_1,HeroMissionValue *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  
  cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
  if ((cVar4 == '\x01') || (*(short *)(param_2 + 10) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(undefined4 *)param_2;
    uVar6 = CUser::get_charac_no(param_1,-1);
    LogManager::logFormat
              (1,"localtaiwan/Event/EventHeroMission.cpp",
               "virtual bool UseFatigueMission::rewardMission(CUser*, HeroMissionValue&)",0xe5,
               "[HeroMission] Already reward. (charac:%u,mission:%d,count:%d)",uVar6,uVar2,
               (uint)uVar1);
    uVar5 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 4);
    puVar7 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
    if (uVar1 < *puVar7) {
      uVar1 = *(ushort *)(param_2 + 10);
      uVar2 = *(undefined4 *)param_2;
      uVar6 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "virtual bool UseFatigueMission::rewardMission(CUser*, HeroMissionValue&)",0xec,
                 "[HeroMission] Invalid reward condition. (charac:%u,mission:%d,count:%d)",uVar6,
                 uVar2,(uint)uVar1);
      uVar5 = 0;
    }
    else {
      uVar5 = BaseHeroMissionCondition::rewardProcess((BaseHeroMissionCondition *)this,param_1);
      *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + 1;
      *(undefined2 *)(param_2 + 6) = 1;
      cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
      if (cVar4 != '\0') {
        HeroMissionValue::reset(param_2);
      }
    }
  }
  return uVar5;
}
```

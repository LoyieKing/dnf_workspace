# rewardMission

`_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue`

`ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)`

| 类 | 地址 |
|---|---|
| `ClearDungeonMission` | `0x08165484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165484  _ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue
#           ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)
# range [0x08165484, 0x08165693]
08165484 +0x000:  push   %ebp
08165485 +0x001:  mov    %esp,%ebp
08165487 +0x003:  push   %esi
08165488 +0x004:  push   %ebx
08165489 +0x005:  sub    $0x30,%esp
0816548c +0x008:  mov    0x8(%ebp),%eax
0816548f +0x00b:  mov    %eax,(%esp)
08165492 +0x00e:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
08165497 +0x013:  xor    $0x1,%eax
0816549a +0x016:  test   %al,%al
0816549c +0x018:  je     081654b1 <+0x2d>
0816549e +0x01a:  mov    0x10(%ebp),%eax
081654a1 +0x01d:  movzwl 0xa(%eax),%eax
081654a5 +0x021:  test   %ax,%ax
081654a8 +0x024:  je     081654b1 <+0x2d>
081654aa +0x026:  mov    $0x1,%eax
081654af +0x02b:  jmp    081654b6 <+0x32>
081654b1 +0x02d:  mov    $0x0,%eax
081654b6 +0x032:  test   %al,%al
081654b8 +0x034:  je     08165520 <+0x9c>
081654ba +0x036:  mov    0x10(%ebp),%eax
081654bd +0x039:  movzwl 0xa(%eax),%eax
081654c1 +0x03d:  movzwl %ax,%esi
081654c4 +0x040:  mov    0x10(%ebp),%eax
081654c7 +0x043:  mov    (%eax),%eax
081654c9 +0x045:  mov    %eax,%ebx
081654cb +0x047:  movl   $0xffffffff,0x4(%esp)
081654d3 +0x04f:  mov    0xc(%ebp),%eax
081654d6 +0x052:  mov    %eax,(%esp)
081654d9 +0x055:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081654de +0x05a:  mov    %esi,0x1c(%esp)
081654e2 +0x05e:  mov    %ebx,0x18(%esp)
081654e6 +0x062:  mov    %eax,0x14(%esp)
081654ea +0x066:  movl   $"[HeroMission] Already reward. (charac:%u,mission:%d,count:%d)",0x10(%esp)
081654f2 +0x06e:  movl   $0xac,0xc(%esp)
081654fa +0x076:  movl   $&_ZZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x8(%esp)
08165502 +0x07e:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
0816550a +0x086:  movl   $0x1,(%esp)
08165511 +0x08d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08165516 +0x092:  mov    $0x0,%eax
0816551b +0x097:  jmp    0816568d <+0x209>
08165520 +0x09c:  mov    0x8(%ebp),%eax
08165523 +0x09f:  mov    %eax,(%esp)
08165526 +0x0a2:  call   08164fb6 <_ZN24BaseHeroMissionCondition14getMissionTypeEv>  ; BaseHeroMissionCondition::getMissionType()
0816552b +0x0a7:  cmp    $0x2,%eax
0816552e +0x0aa:  jne    08165544 <+0xc0>
08165530 +0x0ac:  mov    0x10(%ebp),%eax
08165533 +0x0af:  movzwl 0x8(%eax),%eax
08165537 +0x0b3:  cmp    $0x7,%ax
0816553b +0x0b7:  je     08165544 <+0xc0>
0816553d +0x0b9:  mov    $0x1,%eax
08165542 +0x0be:  jmp    08165549 <+0xc5>
08165544 +0x0c0:  mov    $0x0,%eax
08165549 +0x0c5:  test   %al,%al
0816554b +0x0c7:  je     081655b3 <+0x12f>
0816554d +0x0c9:  mov    0x10(%ebp),%eax
08165550 +0x0cc:  movzwl 0x8(%eax),%eax
08165554 +0x0d0:  movzwl %ax,%esi
08165557 +0x0d3:  mov    0x10(%ebp),%eax
0816555a +0x0d6:  mov    (%eax),%eax
0816555c +0x0d8:  mov    %eax,%ebx
0816555e +0x0da:  movl   $0xffffffff,0x4(%esp)
08165566 +0x0e2:  mov    0xc(%ebp),%eax
08165569 +0x0e5:  mov    %eax,(%esp)
0816556c +0x0e8:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08165571 +0x0ed:  mov    %esi,0x1c(%esp)
08165575 +0x0f1:  mov    %ebx,0x18(%esp)
08165579 +0x0f5:  mov    %eax,0x14(%esp)
0816557d +0x0f9:  movl   $"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,value:%d)",0x10(%esp)
08165585 +0x101:  movl   $0xb4,0xc(%esp)
0816558d +0x109:  movl   $&_ZZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x8(%esp)
08165595 +0x111:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
0816559d +0x119:  movl   $0x1,(%esp)
081655a4 +0x120:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081655a9 +0x125:  mov    $0x0,%eax
081655ae +0x12a:  jmp    0816568d <+0x209>
081655b3 +0x12f:  mov    0x10(%ebp),%eax
081655b6 +0x132:  movzwl 0x4(%eax),%ebx
081655ba +0x136:  mov    0x8(%ebp),%eax
081655bd +0x139:  add    $0x28,%eax
081655c0 +0x13c:  movl   $0x0,0x4(%esp)
081655c8 +0x144:  mov    %eax,(%esp)
081655cb +0x147:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
081655d0 +0x14c:  movzwl (%eax),%eax
081655d3 +0x14f:  cmp    %ax,%bx
081655d6 +0x152:  setb   %al
081655d9 +0x155:  test   %al,%al
081655db +0x157:  je     08165640 <+0x1bc>
081655dd +0x159:  mov    0x10(%ebp),%eax
081655e0 +0x15c:  movzwl 0xa(%eax),%eax
081655e4 +0x160:  movzwl %ax,%esi
081655e7 +0x163:  mov    0x10(%ebp),%eax
081655ea +0x166:  mov    (%eax),%eax
081655ec +0x168:  mov    %eax,%ebx
081655ee +0x16a:  movl   $0xffffffff,0x4(%esp)
081655f6 +0x172:  mov    0xc(%ebp),%eax
081655f9 +0x175:  mov    %eax,(%esp)
081655fc +0x178:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08165601 +0x17d:  mov    %esi,0x1c(%esp)
08165605 +0x181:  mov    %ebx,0x18(%esp)
08165609 +0x185:  mov    %eax,0x14(%esp)
0816560d +0x189:  movl   $"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,count:%d)",0x10(%esp)
08165615 +0x191:  movl   $0xbb,0xc(%esp)
0816561d +0x199:  movl   $&_ZZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x8(%esp)
08165625 +0x1a1:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
0816562d +0x1a9:  movl   $0x1,(%esp)
08165634 +0x1b0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08165639 +0x1b5:  mov    $0x0,%eax
0816563e +0x1ba:  jmp    0816568d <+0x209>
08165640 +0x1bc:  mov    0x8(%ebp),%eax
08165643 +0x1bf:  mov    0xc(%ebp),%edx
08165646 +0x1c2:  mov    %edx,0x4(%esp)
0816564a +0x1c6:  mov    %eax,(%esp)
0816564d +0x1c9:  call   0816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>  ; BaseHeroMissionCondition::rewardProcess(CUser*)
08165652 +0x1ce:  mov    %al,-0x9(%ebp)
08165655 +0x1d1:  mov    0x10(%ebp),%eax
08165658 +0x1d4:  movzwl 0xa(%eax),%eax
0816565c +0x1d8:  lea    0x1(%eax),%edx
0816565f +0x1db:  mov    0x10(%ebp),%eax
08165662 +0x1de:  mov    %dx,0xa(%eax)
08165666 +0x1e2:  mov    0x10(%ebp),%eax
08165669 +0x1e5:  movw   $0x1,0x6(%eax)
0816566f +0x1eb:  mov    0x8(%ebp),%eax
08165672 +0x1ee:  mov    %eax,(%esp)
08165675 +0x1f1:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
0816567a +0x1f6:  test   %al,%al
0816567c +0x1f8:  je     08165689 <+0x205>
0816567e +0x1fa:  mov    0x10(%ebp),%eax
08165681 +0x1fd:  mov    %eax,(%esp)
08165684 +0x200:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
08165689 +0x205:  movzbl -0x9(%ebp),%eax
0816568d +0x209:  add    $0x30,%esp
08165690 +0x20c:  pop    %ebx
08165691 +0x20d:  pop    %esi
08165692 +0x20e:  pop    %ebp
08165693 +0x20f:  ret
```

## 反编译 C

```c
// ClearDungeonMission::rewardMission @ 0x8165484

/* ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
ClearDungeonMission::rewardMission
          (ClearDungeonMission *this,CUser *param_1,HeroMissionValue *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  
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
               "virtual bool ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)",0xac,
               "[HeroMission] Already reward. (charac:%u,mission:%d,count:%d)",uVar6,uVar2,
               (uint)uVar1);
    uVar5 = 0;
  }
  else {
    iVar7 = BaseHeroMissionCondition::getMissionType((BaseHeroMissionCondition *)this);
    if ((iVar7 == 2) && (*(short *)(param_2 + 8) != 7)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = *(ushort *)(param_2 + 8);
      uVar2 = *(undefined4 *)param_2;
      uVar6 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "virtual bool ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)",0xb4,
                 "[HeroMission] Invalid reward condition. (charac:%u,mission:%d,value:%d)",uVar6,
                 uVar2,(uint)uVar1);
      uVar5 = 0;
    }
    else {
      uVar1 = *(ushort *)(param_2 + 4);
      puVar8 = (ushort *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
      if (uVar1 < *puVar8) {
        uVar1 = *(ushort *)(param_2 + 10);
        uVar2 = *(undefined4 *)param_2;
        uVar6 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "virtual bool ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)",0xbb
                   ,"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,count:%d)",uVar6,
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
  }
  return uVar5;
}
```

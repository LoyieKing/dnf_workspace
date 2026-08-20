# rewardMission

`_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue`

`UseCubeMission::rewardMission(CUser*, HeroMissionValue&)`

| 类 | 地址 |
|---|---|
| `UseCubeMission` | `0x08165a2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165a2e  _ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue
#           UseCubeMission::rewardMission(CUser*, HeroMissionValue&)
# range [0x08165a2e, 0x08165bab]
08165a2e +0x000:  push   %ebp
08165a2f +0x001:  mov    %esp,%ebp
08165a31 +0x003:  push   %esi
08165a32 +0x004:  push   %ebx
08165a33 +0x005:  sub    $0x30,%esp
08165a36 +0x008:  mov    0x8(%ebp),%eax
08165a39 +0x00b:  mov    %eax,(%esp)
08165a3c +0x00e:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
08165a41 +0x013:  xor    $0x1,%eax
08165a44 +0x016:  test   %al,%al
08165a46 +0x018:  je     08165a5b <+0x2d>
08165a48 +0x01a:  mov    0x10(%ebp),%eax
08165a4b +0x01d:  movzwl 0xa(%eax),%eax
08165a4f +0x021:  test   %ax,%ax
08165a52 +0x024:  je     08165a5b <+0x2d>
08165a54 +0x026:  mov    $0x1,%eax
08165a59 +0x02b:  jmp    08165a60 <+0x32>
08165a5b +0x02d:  mov    $0x0,%eax
08165a60 +0x032:  test   %al,%al
08165a62 +0x034:  je     08165aca <+0x9c>
08165a64 +0x036:  mov    0x10(%ebp),%eax
08165a67 +0x039:  movzwl 0xa(%eax),%eax
08165a6b +0x03d:  movzwl %ax,%esi
08165a6e +0x040:  mov    0x10(%ebp),%eax
08165a71 +0x043:  mov    (%eax),%eax
08165a73 +0x045:  mov    %eax,%ebx
08165a75 +0x047:  movl   $0xffffffff,0x4(%esp)
08165a7d +0x04f:  mov    0xc(%ebp),%eax
08165a80 +0x052:  mov    %eax,(%esp)
08165a83 +0x055:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08165a88 +0x05a:  mov    %esi,0x1c(%esp)
08165a8c +0x05e:  mov    %ebx,0x18(%esp)
08165a90 +0x062:  mov    %eax,0x14(%esp)
08165a94 +0x066:  movl   $"[HeroMission] Already reward. (charac:%u,mission:%d,count:%d)",0x10(%esp)
08165a9c +0x06e:  movl   $0x117,0xc(%esp)
08165aa4 +0x076:  movl   $&_ZZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x8(%esp)
08165aac +0x07e:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08165ab4 +0x086:  movl   $0x1,(%esp)
08165abb +0x08d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08165ac0 +0x092:  mov    $0x0,%eax
08165ac5 +0x097:  jmp    08165ba4 <+0x176>
08165aca +0x09c:  mov    0x10(%ebp),%eax
08165acd +0x09f:  movzwl 0x4(%eax),%ebx
08165ad1 +0x0a3:  mov    0x8(%ebp),%eax
08165ad4 +0x0a6:  add    $0x28,%eax
08165ad7 +0x0a9:  movl   $0x0,0x4(%esp)
08165adf +0x0b1:  mov    %eax,(%esp)
08165ae2 +0x0b4:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08165ae7 +0x0b9:  movzwl (%eax),%eax
08165aea +0x0bc:  cmp    %ax,%bx
08165aed +0x0bf:  setb   %al
08165af0 +0x0c2:  test   %al,%al
08165af2 +0x0c4:  je     08165b57 <+0x129>
08165af4 +0x0c6:  mov    0x10(%ebp),%eax
08165af7 +0x0c9:  movzwl 0xa(%eax),%eax
08165afb +0x0cd:  movzwl %ax,%esi
08165afe +0x0d0:  mov    0x10(%ebp),%eax
08165b01 +0x0d3:  mov    (%eax),%eax
08165b03 +0x0d5:  mov    %eax,%ebx
08165b05 +0x0d7:  movl   $0xffffffff,0x4(%esp)
08165b0d +0x0df:  mov    0xc(%ebp),%eax
08165b10 +0x0e2:  mov    %eax,(%esp)
08165b13 +0x0e5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08165b18 +0x0ea:  mov    %esi,0x1c(%esp)
08165b1c +0x0ee:  mov    %ebx,0x18(%esp)
08165b20 +0x0f2:  mov    %eax,0x14(%esp)
08165b24 +0x0f6:  movl   $"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,count:%d)",0x10(%esp)
08165b2c +0x0fe:  movl   $0x11e,0xc(%esp)
08165b34 +0x106:  movl   $&_ZZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x8(%esp)
08165b3c +0x10e:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08165b44 +0x116:  movl   $0x1,(%esp)
08165b4b +0x11d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08165b50 +0x122:  mov    $0x0,%eax
08165b55 +0x127:  jmp    08165ba4 <+0x176>
08165b57 +0x129:  mov    0x8(%ebp),%eax
08165b5a +0x12c:  mov    0xc(%ebp),%edx
08165b5d +0x12f:  mov    %edx,0x4(%esp)
08165b61 +0x133:  mov    %eax,(%esp)
08165b64 +0x136:  call   0816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>  ; BaseHeroMissionCondition::rewardProcess(CUser*)
08165b69 +0x13b:  mov    %al,-0x9(%ebp)
08165b6c +0x13e:  mov    0x10(%ebp),%eax
08165b6f +0x141:  movzwl 0xa(%eax),%eax
08165b73 +0x145:  lea    0x1(%eax),%edx
08165b76 +0x148:  mov    0x10(%ebp),%eax
08165b79 +0x14b:  mov    %dx,0xa(%eax)
08165b7d +0x14f:  mov    0x10(%ebp),%eax
08165b80 +0x152:  movw   $0x1,0x6(%eax)
08165b86 +0x158:  mov    0x8(%ebp),%eax
08165b89 +0x15b:  mov    %eax,(%esp)
08165b8c +0x15e:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
08165b91 +0x163:  test   %al,%al
08165b93 +0x165:  je     08165ba0 <+0x172>
08165b95 +0x167:  mov    0x10(%ebp),%eax
08165b98 +0x16a:  mov    %eax,(%esp)
08165b9b +0x16d:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
08165ba0 +0x172:  movzbl -0x9(%ebp),%eax
08165ba4 +0x176:  add    $0x30,%esp
08165ba7 +0x179:  pop    %ebx
08165ba8 +0x17a:  pop    %esi
08165ba9 +0x17b:  pop    %ebp
08165baa +0x17c:  ret
08165bab +0x17d:  nop
```

## 反编译 C

```c
// UseCubeMission::rewardMission @ 0x8165a2e

/* UseCubeMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
UseCubeMission::rewardMission(UseCubeMission *this,CUser *param_1,HeroMissionValue *param_2)

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
               "virtual bool UseCubeMission::rewardMission(CUser*, HeroMissionValue&)",0x117,
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
                 "virtual bool UseCubeMission::rewardMission(CUser*, HeroMissionValue&)",0x11e,
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

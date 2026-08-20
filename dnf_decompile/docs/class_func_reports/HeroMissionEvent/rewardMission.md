# rewardMission

`_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE`

`HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x0816748e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816748e  _ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE
#           HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T)
# range [0x0816748e, 0x0816770d]
0816748e +0x000:  push   %ebp
0816748f +0x001:  mov    %esp,%ebp
08167491 +0x003:  push   %ebx
08167492 +0x004:  sub    $0x44,%esp
08167495 +0x007:  mov    0x8(%ebp),%eax
08167498 +0x00a:  mov    (%eax),%eax
0816749a +0x00c:  add    $0x34,%eax
0816749d +0x00f:  mov    (%eax),%edx
0816749f +0x011:  mov    0x8(%ebp),%eax
081674a2 +0x014:  movl   $0x0,0x4(%esp)
081674aa +0x01c:  mov    %eax,(%esp)
081674ad +0x01f:  call   *%edx
081674af +0x021:  xor    $0x1,%eax
081674b2 +0x024:  test   %al,%al
081674b4 +0x026:  je     081674c0 <+0x32>
081674b6 +0x028:  mov    $0x0,%eax
081674bb +0x02d:  jmp    08167709 <+0x27b>
081674c0 +0x032:  cmpl   $0x0,0xc(%ebp)
081674c4 +0x036:  jne    081674fc <+0x6e>
081674c6 +0x038:  movl   $"[HeroMission] User is null.",0x10(%esp)
081674ce +0x040:  movl   $0x2d8,0xc(%esp)
081674d6 +0x048:  movl   $&_ZZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TEE19__PRETTY_FUNCTION__,0x8(%esp)
081674de +0x050:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
081674e6 +0x058:  movl   $0x1,(%esp)
081674ed +0x05f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081674f2 +0x064:  mov    $0x0,%eax
081674f7 +0x069:  jmp    08167709 <+0x27b>
081674fc +0x06e:  mov    0x8(%ebp),%eax
081674ff +0x071:  lea    0xc(%eax),%ecx
08167502 +0x074:  lea    -0x20(%ebp),%eax
08167505 +0x077:  lea    0x10(%ebp),%edx
08167508 +0x07a:  mov    %edx,0x8(%esp)
0816750c +0x07e:  mov    %ecx,0x4(%esp)
08167510 +0x082:  mov    %eax,(%esp)
08167513 +0x085:  call   08168964 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7c5>  ; global constructors keyed to HeroMissionValue::clear()+0x7c5
08167518 +0x08a:  sub    $0x4,%esp
0816751b +0x08d:  mov    0x8(%ebp),%eax
0816751e +0x090:  lea    0xc(%eax),%edx
08167521 +0x093:  lea    -0x1c(%ebp),%eax
08167524 +0x096:  mov    %edx,0x4(%esp)
08167528 +0x09a:  mov    %eax,(%esp)
0816752b +0x09d:  call   0816871e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x57f>  ; global constructors keyed to HeroMissionValue::clear()+0x57f
08167530 +0x0a2:  sub    $0x4,%esp
08167533 +0x0a5:  lea    -0x1c(%ebp),%eax
08167536 +0x0a8:  mov    %eax,0x4(%esp)
0816753a +0x0ac:  lea    -0x20(%ebp),%eax
0816753d +0x0af:  mov    %eax,(%esp)
08167540 +0x0b2:  call   08168990 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7f1>  ; global constructors keyed to HeroMissionValue::clear()+0x7f1
08167545 +0x0b7:  test   %al,%al
08167547 +0x0b9:  je     081675c2 <+0x134>
08167549 +0x0bb:  mov    0x10(%ebp),%eax
0816754c +0x0be:  mov    %eax,%ebx
0816754e +0x0c0:  movl   $0xffffffff,0x4(%esp)
08167556 +0x0c8:  mov    0xc(%ebp),%eax
08167559 +0x0cb:  mov    %eax,(%esp)
0816755c +0x0ce:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08167561 +0x0d3:  mov    %ebx,0x18(%esp)
08167565 +0x0d7:  mov    %eax,0x14(%esp)
08167569 +0x0db:  movl   $"[HeroMission] Invalid mission. (charac:%u, mission:%d)",0x10(%esp)
08167571 +0x0e3:  movl   $0x2df,0xc(%esp)
08167579 +0x0eb:  movl   $&_ZZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TEE19__PRETTY_FUNCTION__,0x8(%esp)
08167581 +0x0f3:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167589 +0x0fb:  movl   $0x1,(%esp)
08167590 +0x102:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08167595 +0x107:  movl   $0x2e0,0xc(%esp)
0816759d +0x10f:  movl   $0x1,0x8(%esp)
081675a5 +0x117:  movl   $0x3e,0x4(%esp)
081675ad +0x11f:  mov    0xc(%ebp),%eax
081675b0 +0x122:  mov    %eax,(%esp)
081675b3 +0x125:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
081675b8 +0x12a:  mov    $0x0,%eax
081675bd +0x12f:  jmp    08167709 <+0x27b>
081675c2 +0x134:  movb   $0x0,-0x12(%ebp)
081675c6 +0x138:  movb   $0x0,-0x11(%ebp)
081675ca +0x13c:  movl   $0x0,-0x24(%ebp)
081675d1 +0x143:  mov    0x10(%ebp),%eax
081675d4 +0x146:  lea    -0x24(%ebp),%edx
081675d7 +0x149:  mov    %edx,0xc(%esp)
081675db +0x14d:  mov    %eax,0x8(%esp)
081675df +0x151:  mov    0xc(%ebp),%eax
081675e2 +0x154:  mov    %eax,0x4(%esp)
081675e6 +0x158:  mov    0x8(%ebp),%eax
081675e9 +0x15b:  mov    %eax,(%esp)
081675ec +0x15e:  call   08168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>  ; HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T, HeroMissionValue*&)
081675f1 +0x163:  test   %al,%al
081675f3 +0x165:  je     081676dd <+0x24f>
081675f9 +0x16b:  lea    -0x20(%ebp),%eax
081675fc +0x16e:  mov    %eax,(%esp)
081675ff +0x171:  call   08168776 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5d7>  ; global constructors keyed to HeroMissionValue::clear()+0x5d7
08167604 +0x176:  mov    0x4(%eax),%eax
08167607 +0x179:  mov    %eax,(%esp)
0816760a +0x17c:  call   08164fb6 <_ZN24BaseHeroMissionCondition14getMissionTypeEv>  ; BaseHeroMissionCondition::getMissionType()
0816760f +0x181:  cmp    $0x3,%eax
08167612 +0x184:  sete   %al
08167615 +0x187:  test   %al,%al
08167617 +0x189:  je     0816768f <+0x201>
08167619 +0x18b:  movl   $0xffffffff,0x4(%esp)
08167621 +0x193:  mov    0xc(%ebp),%eax
08167624 +0x196:  mov    %eax,(%esp)
08167627 +0x199:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0816762c +0x19e:  mov    %eax,-0x18(%ebp)
0816762f +0x1a1:  mov    0x8(%ebp),%eax
08167632 +0x1a4:  lea    0x24(%eax),%ecx
08167635 +0x1a7:  lea    -0x28(%ebp),%eax
08167638 +0x1aa:  lea    -0x18(%ebp),%edx
0816763b +0x1ad:  mov    %edx,0x8(%esp)
0816763f +0x1b1:  mov    %ecx,0x4(%esp)
08167643 +0x1b5:  mov    %eax,(%esp)
08167646 +0x1b8:  call   081687f8 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x659>  ; global constructors keyed to HeroMissionValue::clear()+0x659
0816764b +0x1bd:  sub    $0x4,%esp
0816764e +0x1c0:  lea    -0x20(%ebp),%eax
08167651 +0x1c3:  mov    %eax,(%esp)
08167654 +0x1c6:  call   08168776 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5d7>  ; global constructors keyed to HeroMissionValue::clear()+0x5d7
08167659 +0x1cb:  mov    0x4(%eax),%eax
0816765c +0x1ce:  mov    %eax,-0x10(%ebp)
0816765f +0x1d1:  lea    -0x28(%ebp),%eax
08167662 +0x1d4:  mov    %eax,(%esp)
08167665 +0x1d7:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
0816766a +0x1dc:  lea    0x4(%eax),%edx
0816766d +0x1df:  mov    -0x24(%ebp),%eax
08167670 +0x1e2:  mov    %edx,0xc(%esp)
08167674 +0x1e6:  mov    %eax,0x8(%esp)
08167678 +0x1ea:  mov    0xc(%ebp),%eax
0816767b +0x1ed:  mov    %eax,0x4(%esp)
0816767f +0x1f1:  mov    -0x10(%ebp),%eax
08167682 +0x1f4:  mov    %eax,(%esp)
08167685 +0x1f7:  call   081663fe <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE>  ; TotalMission::rewardMission(CUser*, HeroMissionValue&, std::vector<HeroMissionValue, std::allocator<HeroMissionValue> >&)
0816768a +0x1fc:  mov    %al,-0x12(%ebp)
0816768d +0x1ff:  jmp    081676dd <+0x24f>
0816768f +0x201:  mov    -0x24(%ebp),%eax
08167692 +0x204:  movzwl 0xa(%eax),%eax
08167696 +0x208:  mov    %ax,-0xa(%ebp)
0816769a +0x20c:  lea    -0x20(%ebp),%eax
0816769d +0x20f:  mov    %eax,(%esp)
081676a0 +0x212:  call   08168776 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x5d7>  ; global constructors keyed to HeroMissionValue::clear()+0x5d7
081676a5 +0x217:  mov    0x4(%eax),%eax
081676a8 +0x21a:  mov    (%eax),%edx
081676aa +0x21c:  add    $0xc,%edx
081676ad +0x21f:  mov    (%edx),%ecx
081676af +0x221:  mov    -0x24(%ebp),%edx
081676b2 +0x224:  mov    %edx,0x8(%esp)
081676b6 +0x228:  mov    0xc(%ebp),%edx
081676b9 +0x22b:  mov    %edx,0x4(%esp)
081676bd +0x22f:  mov    %eax,(%esp)
081676c0 +0x232:  call   *%ecx
081676c2 +0x234:  mov    %al,-0x12(%ebp)
081676c5 +0x237:  cmpw   $0x0,-0xa(%ebp)
081676ca +0x23c:  jne    081676dd <+0x24f>
081676cc +0x23e:  mov    -0x24(%ebp),%eax
081676cf +0x241:  movzwl 0xa(%eax),%eax
081676d3 +0x245:  cmp    -0xa(%ebp),%ax
081676d7 +0x249:  jbe    081676dd <+0x24f>
081676d9 +0x24b:  movb   $0x1,-0x11(%ebp)
081676dd +0x24f:  cmpb   $0x0,-0x11(%ebp)
081676e1 +0x253:  je     08167705 <+0x277>
081676e3 +0x255:  movl   $0x1,0xc(%esp)
081676eb +0x25d:  movl   $0x6,0x8(%esp)
081676f3 +0x265:  mov    0xc(%ebp),%eax
081676f6 +0x268:  mov    %eax,0x4(%esp)
081676fa +0x26c:  mov    0x8(%ebp),%eax
081676fd +0x26f:  mov    %eax,(%esp)
08167700 +0x272:  call   081672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
08167705 +0x277:  movzbl -0x12(%ebp),%eax
08167709 +0x27b:  mov    -0x4(%ebp),%ebx
0816770c +0x27e:  leave
0816770d +0x27f:  ret
```

## 反编译 C

```c
// HeroMissionEvent::rewardMission @ 0x816748e

/* HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T) */

undefined1 __thiscall
HeroMissionEvent::rewardMission(HeroMissionEvent *this,CUser *param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_2c [4];
  vector *local_28;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_24 [4];
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_20 [4];
  undefined4 local_1c;
  undefined1 local_16;
  char local_15;
  CUser *local_14;
  short local_e;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "bool HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T)",
                 0x2d8,"[HeroMission] User is null.");
      local_16 = 0;
    }
    else {
      std::
      map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
      ::find(local_24);
      std::
      map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
      ::end(local_20);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
              ::operator==(local_24,(_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') {
        local_16 = 0;
        local_15 = '\0';
        local_28 = (vector *)0x0;
        cVar1 = findMissionValue(this,param_1,param_3,&local_28);
        if (cVar1 != '\0') {
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                  ::operator->(local_24);
          iVar3 = BaseHeroMissionCondition::getMissionType
                            (*(BaseHeroMissionCondition **)(iVar3 + 4));
          if (iVar3 == 3) {
            local_1c = CUser::get_charac_no(param_1,-1);
            std::
            map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
            ::find((uint *)local_2c);
            iVar3 = std::
                    _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                    ::operator->(local_24);
            local_14 = *(CUser **)(iVar3 + 4);
            std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator->(local_2c);
            local_16 = TotalMission::rewardMission(local_14,(HeroMissionValue *)param_1,local_28);
          }
          else {
            local_e = *(short *)(local_28 + 10);
            iVar3 = std::
                    _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                    ::operator->(local_24);
            local_16 = (**(code **)(**(int **)(iVar3 + 4) + 0xc))
                                 (*(int **)(iVar3 + 4),param_1,local_28);
            if ((local_e == 0) && (*(short *)(local_28 + 10) != 0)) {
              local_15 = '\x01';
            }
          }
        }
        if (local_15 != '\0') {
          processMission(this,param_1,6,1);
        }
      }
      else {
        uVar2 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "bool HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T)"
                   ,0x2df,"[HeroMission] Invalid mission. (charac:%u, mission:%d)",uVar2,param_3);
        CUser::DisConnSig(param_1,0x3e,1,0x2e0);
        local_16 = 0;
      }
    }
  }
  else {
    local_16 = 0;
  }
  return local_16;
}
```

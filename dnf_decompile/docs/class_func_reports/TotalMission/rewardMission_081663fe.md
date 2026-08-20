# rewardMission

`_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE`

`TotalMission::rewardMission(CUser*, HeroMissionValue&, std::vector<HeroMissionValue, std::allocator<HeroMissionValue> >&)`

| 类 | 地址 |
|---|---|
| `TotalMission` | `0x081663fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081663fe  _ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE
#           TotalMission::rewardMission(CUser*, HeroMissionValue&, std::vector<HeroMissionValue, std::allocator<HeroMissionValue> >&)
# range [0x081663fe, 0x08166521]
081663fe +0x000:  push   %ebp
081663ff +0x001:  mov    %esp,%ebp
08166401 +0x003:  sub    $0x28,%esp
08166404 +0x006:  mov    0x8(%ebp),%eax
08166407 +0x009:  mov    %eax,(%esp)
0816640a +0x00c:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
0816640f +0x011:  xor    $0x1,%eax
08166412 +0x014:  test   %al,%al
08166414 +0x016:  je     08166429 <+0x2b>
08166416 +0x018:  mov    0x10(%ebp),%eax
08166419 +0x01b:  movzwl 0xa(%eax),%eax
0816641d +0x01f:  test   %ax,%ax
08166420 +0x022:  je     08166429 <+0x2b>
08166422 +0x024:  mov    $0x1,%eax
08166427 +0x029:  jmp    0816642e <+0x30>
08166429 +0x02b:  mov    $0x0,%eax
0816642e +0x030:  test   %al,%al
08166430 +0x032:  je     0816643c <+0x3e>
08166432 +0x034:  mov    $0x0,%eax
08166437 +0x039:  jmp    08166520 <+0x122>
0816643c +0x03e:  movb   $0x1,-0xa(%ebp)
08166440 +0x042:  lea    -0x14(%ebp),%eax
08166443 +0x045:  mov    0x14(%ebp),%edx
08166446 +0x048:  mov    %edx,0x4(%esp)
0816644a +0x04c:  mov    %eax,(%esp)
0816644d +0x04f:  call   081684f6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x357>  ; global constructors keyed to HeroMissionValue::clear()+0x357
08166452 +0x054:  sub    $0x4,%esp
08166455 +0x057:  jmp    0816649e <+0xa0>
08166457 +0x059:  lea    -0x14(%ebp),%eax
0816645a +0x05c:  mov    %eax,(%esp)
0816645d +0x05f:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
08166462 +0x064:  mov    (%eax),%eax
08166464 +0x066:  cmp    $0x6,%eax
08166467 +0x069:  je     08166484 <+0x86>
08166469 +0x06b:  lea    -0x14(%ebp),%eax
0816646c +0x06e:  mov    %eax,(%esp)
0816646f +0x071:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
08166474 +0x076:  movzwl 0xa(%eax),%eax
08166478 +0x07a:  test   %ax,%ax
0816647b +0x07d:  jne    08166484 <+0x86>
0816647d +0x07f:  mov    $0x1,%eax
08166482 +0x084:  jmp    08166489 <+0x8b>
08166484 +0x086:  mov    $0x0,%eax
08166489 +0x08b:  test   %al,%al
0816648b +0x08d:  je     08166493 <+0x95>
0816648d +0x08f:  movb   $0x0,-0xa(%ebp)
08166491 +0x093:  jmp    081664c9 <+0xcb>
08166493 +0x095:  lea    -0x14(%ebp),%eax
08166496 +0x098:  mov    %eax,(%esp)
08166499 +0x09b:  call   0816856c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3cd>  ; global constructors keyed to HeroMissionValue::clear()+0x3cd
0816649e +0x0a0:  lea    -0x10(%ebp),%eax
081664a1 +0x0a3:  mov    0x14(%ebp),%edx
081664a4 +0x0a6:  mov    %edx,0x4(%esp)
081664a8 +0x0aa:  mov    %eax,(%esp)
081664ab +0x0ad:  call   0816851a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x37b>  ; global constructors keyed to HeroMissionValue::clear()+0x37b
081664b0 +0x0b2:  sub    $0x4,%esp
081664b3 +0x0b5:  lea    -0x10(%ebp),%eax
081664b6 +0x0b8:  mov    %eax,0x4(%esp)
081664ba +0x0bc:  lea    -0x14(%ebp),%eax
081664bd +0x0bf:  mov    %eax,(%esp)
081664c0 +0x0c2:  call   08168540 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3a1>  ; global constructors keyed to HeroMissionValue::clear()+0x3a1
081664c5 +0x0c7:  test   %al,%al
081664c7 +0x0c9:  jne    08166457 <+0x59>
081664c9 +0x0cb:  movb   $0x0,-0x9(%ebp)
081664cd +0x0cf:  cmpb   $0x0,-0xa(%ebp)
081664d1 +0x0d3:  je     0816651c <+0x11e>
081664d3 +0x0d5:  mov    0x8(%ebp),%eax
081664d6 +0x0d8:  mov    0xc(%ebp),%edx
081664d9 +0x0db:  mov    %edx,0x4(%esp)
081664dd +0x0df:  mov    %eax,(%esp)
081664e0 +0x0e2:  call   0816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>  ; BaseHeroMissionCondition::rewardProcess(CUser*)
081664e5 +0x0e7:  mov    %al,-0x9(%ebp)
081664e8 +0x0ea:  mov    0x10(%ebp),%eax
081664eb +0x0ed:  movzwl 0xa(%eax),%eax
081664ef +0x0f1:  lea    0x1(%eax),%edx
081664f2 +0x0f4:  mov    0x10(%ebp),%eax
081664f5 +0x0f7:  mov    %dx,0xa(%eax)
081664f9 +0x0fb:  mov    0x10(%ebp),%eax
081664fc +0x0fe:  movw   $0x1,0x6(%eax)
08166502 +0x104:  mov    0x8(%ebp),%eax
08166505 +0x107:  mov    %eax,(%esp)
08166508 +0x10a:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
0816650d +0x10f:  test   %al,%al
0816650f +0x111:  je     0816651c <+0x11e>
08166511 +0x113:  mov    0x10(%ebp),%eax
08166514 +0x116:  mov    %eax,(%esp)
08166517 +0x119:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
0816651c +0x11e:  movzbl -0x9(%ebp),%eax
08166520 +0x122:  leave
08166521 +0x123:  ret
```

## 反编译 C

```c
// TotalMission::rewardMission @ 0x81663fe

/* TotalMission::rewardMission(CUser*, HeroMissionValue&, std::vector<HeroMissionValue,
   std::allocator<HeroMissionValue> >&) */

undefined1 TotalMission::rewardMission(CUser *param_1,HeroMissionValue *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_18 [4];
  __normal_iterator local_14 [6];
  char local_e;
  undefined1 local_d;
  
  cVar1 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
  if ((cVar1 == '\x01') || (*(short *)(param_3 + 10) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_d = 0;
  }
  else {
    local_e = '\x01';
    std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
    while( true ) {
      std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
      bVar2 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar2) break;
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                      ::operator->(local_18);
      if ((*piVar3 == 6) ||
         (iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_18), *(short *)(iVar4 + 10) != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_e = '\0';
        break;
      }
      __gnu_cxx::
      __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
      ::operator++(local_18);
    }
    local_d = 0;
    if (local_e != '\0') {
      local_d = BaseHeroMissionCondition::rewardProcess
                          ((BaseHeroMissionCondition *)param_1,(CUser *)param_2);
      *(short *)(param_3 + 10) = *(short *)(param_3 + 10) + 1;
      *(undefined2 *)(param_3 + 6) = 1;
      cVar1 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
      if (cVar1 != '\0') {
        HeroMissionValue::reset((HeroMissionValue *)param_3);
      }
    }
  }
  return local_d;
}
```

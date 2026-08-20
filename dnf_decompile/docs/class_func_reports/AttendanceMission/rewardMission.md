# rewardMission

`_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue`

`AttendanceMission::rewardMission(CUser*, HeroMissionValue&)`

| 类 | 地址 |
|---|---|
| `AttendanceMission` | `0x081661d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081661d6  _ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue
#           AttendanceMission::rewardMission(CUser*, HeroMissionValue&)
# range [0x081661d6, 0x08166305]
081661d6 +0x000:  push   %ebp
081661d7 +0x001:  mov    %esp,%ebp
081661d9 +0x003:  push   %edi
081661da +0x004:  push   %esi
081661db +0x005:  push   %ebx
081661dc +0x006:  sub    $0x4c,%esp
081661df +0x009:  mov    0x8(%ebp),%eax
081661e2 +0x00c:  mov    %eax,(%esp)
081661e5 +0x00f:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
081661ea +0x014:  xor    $0x1,%eax
081661ed +0x017:  test   %al,%al
081661ef +0x019:  je     08166204 <+0x2e>
081661f1 +0x01b:  mov    0x10(%ebp),%eax
081661f4 +0x01e:  movzwl 0xa(%eax),%eax
081661f8 +0x022:  test   %ax,%ax
081661fb +0x025:  je     08166204 <+0x2e>
081661fd +0x027:  mov    $0x1,%eax
08166202 +0x02c:  jmp    08166209 <+0x33>
08166204 +0x02e:  mov    $0x0,%eax
08166209 +0x033:  test   %al,%al
0816620b +0x035:  je     08166217 <+0x41>
0816620d +0x037:  mov    $0x0,%eax
08166212 +0x03c:  jmp    081662fd <+0x127>
08166217 +0x041:  mov    0x10(%ebp),%eax
0816621a +0x044:  movzwl 0x4(%eax),%ebx
0816621e +0x048:  mov    0x8(%ebp),%eax
08166221 +0x04b:  add    $0x28,%eax
08166224 +0x04e:  movl   $0x0,0x4(%esp)
0816622c +0x056:  mov    %eax,(%esp)
0816622f +0x059:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08166234 +0x05e:  movzwl (%eax),%eax
08166237 +0x061:  cmp    %ax,%bx
0816623a +0x064:  setb   %al
0816623d +0x067:  test   %al,%al
0816623f +0x069:  je     081662b0 <+0xda>
08166241 +0x06b:  mov    0x10(%ebp),%eax
08166244 +0x06e:  movzwl 0xa(%eax),%eax
08166248 +0x072:  movzwl %ax,%edi
0816624b +0x075:  mov    0x10(%ebp),%eax
0816624e +0x078:  mov    (%eax),%eax
08166250 +0x07a:  mov    %eax,%esi
08166252 +0x07c:  movl   $0xffffffff,0x4(%esp)
0816625a +0x084:  mov    0xc(%ebp),%eax
0816625d +0x087:  mov    %eax,(%esp)
08166260 +0x08a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166265 +0x08f:  mov    %eax,%ebx
08166267 +0x091:  movl   $0x5,0xc(%esp)
0816626f +0x099:  movl   $0x1a4,0x8(%esp)
08166277 +0x0a1:  movl   $&_ZZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValueE19__PRETTY_FUNCTION__,0x4(%esp)
0816627f +0x0a9:  lea    -0x2c(%ebp),%eax
08166282 +0x0ac:  mov    %eax,(%esp)
08166285 +0x0af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816628a +0x0b4:  mov    %edi,0x10(%esp)
0816628e +0x0b8:  mov    %esi,0xc(%esp)
08166292 +0x0bc:  mov    %ebx,0x8(%esp)
08166296 +0x0c0:  movl   $"[HeroMission] Reward condition error. (charac:%u,mission:%d,count:%d)",0x4(%esp)
0816629e +0x0c8:  lea    -0x2c(%ebp),%eax
081662a1 +0x0cb:  mov    %eax,(%esp)
081662a4 +0x0ce:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081662a9 +0x0d3:  mov    $0x0,%eax
081662ae +0x0d8:  jmp    081662fd <+0x127>
081662b0 +0x0da:  mov    0x8(%ebp),%eax
081662b3 +0x0dd:  mov    0xc(%ebp),%edx
081662b6 +0x0e0:  mov    %edx,0x4(%esp)
081662ba +0x0e4:  mov    %eax,(%esp)
081662bd +0x0e7:  call   0816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>  ; BaseHeroMissionCondition::rewardProcess(CUser*)
081662c2 +0x0ec:  mov    %al,-0x19(%ebp)
081662c5 +0x0ef:  mov    0x10(%ebp),%eax
081662c8 +0x0f2:  movzwl 0xa(%eax),%eax
081662cc +0x0f6:  lea    0x1(%eax),%edx
081662cf +0x0f9:  mov    0x10(%ebp),%eax
081662d2 +0x0fc:  mov    %dx,0xa(%eax)
081662d6 +0x100:  mov    0x10(%ebp),%eax
081662d9 +0x103:  movw   $0x1,0x6(%eax)
081662df +0x109:  mov    0x8(%ebp),%eax
081662e2 +0x10c:  mov    %eax,(%esp)
081662e5 +0x10f:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
081662ea +0x114:  test   %al,%al
081662ec +0x116:  je     081662f9 <+0x123>
081662ee +0x118:  mov    0x10(%ebp),%eax
081662f1 +0x11b:  mov    %eax,(%esp)
081662f4 +0x11e:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
081662f9 +0x123:  movzbl -0x19(%ebp),%eax
081662fd +0x127:  add    $0x4c,%esp
08166300 +0x12a:  pop    %ebx
08166301 +0x12b:  pop    %esi
08166302 +0x12c:  pop    %edi
08166303 +0x12d:  pop    %ebp
08166304 +0x12e:  ret
08166305 +0x12f:  nop
```

## 反编译 C

```c
// AttendanceMission::rewardMission @ 0x81661d6

/* AttendanceMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
AttendanceMission::rewardMission(AttendanceMission *this,CUser *param_1,HeroMissionValue *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  ushort *puVar5;
  undefined4 uVar6;
  cMyTrace local_30 [19];
  undefined1 local_1d;
  
  cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
  if ((cVar4 == '\x01') || (*(short *)(param_2 + 10) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    local_1d = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 4);
    puVar5 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
    if (uVar1 < *puVar5) {
      uVar1 = *(ushort *)(param_2 + 10);
      uVar2 = *(undefined4 *)param_2;
      uVar6 = CUser::get_charac_no(param_1,-1);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool AttendanceMission::rewardMission(CUser*, HeroMissionValue&)",
                         0x1a4,5);
      cMyTrace::operator()
                (local_30,"[HeroMission] Reward condition error. (charac:%u,mission:%d,count:%d)",
                 uVar6,uVar2,(uint)uVar1);
      local_1d = 0;
    }
    else {
      local_1d = BaseHeroMissionCondition::rewardProcess((BaseHeroMissionCondition *)this,param_1);
      *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + 1;
      *(undefined2 *)(param_2 + 6) = 1;
      cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
      if (cVar4 != '\0') {
        HeroMissionValue::reset(param_2);
      }
    }
  }
  return local_1d;
}
```

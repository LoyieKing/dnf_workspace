# processMission

`_ZN17AttendanceMission14processMissionEP5CUserR16HeroMissionValuej`

`AttendanceMission::processMission(CUser*, HeroMissionValue&, unsigned int)`

| 类 | 地址 |
|---|---|
| `AttendanceMission` | `0x08166002` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166002  _ZN17AttendanceMission14processMissionEP5CUserR16HeroMissionValuej
#           AttendanceMission::processMission(CUser*, HeroMissionValue&, unsigned int)
# range [0x08166002, 0x081661d5]
08166002 +0x000:  push   %ebp
08166003 +0x001:  mov    %esp,%ebp
08166005 +0x003:  push   %ebx
08166006 +0x004:  sub    $0x84,%esp
0816600c +0x00a:  mov    0x8(%ebp),%eax
0816600f +0x00d:  add    $0x28,%eax
08166012 +0x010:  movl   $0x0,0x4(%esp)
0816601a +0x018:  mov    %eax,(%esp)
0816601d +0x01b:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08166022 +0x020:  movzwl (%eax),%edx
08166025 +0x023:  mov    0x10(%ebp),%eax
08166028 +0x026:  movzwl 0x4(%eax),%eax
0816602c +0x02a:  cmp    %ax,%dx
0816602f +0x02d:  setbe  %al
08166032 +0x030:  test   %al,%al
08166034 +0x032:  jne    081661cb <+0x1c9>
0816603a +0x038:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08166041 +0x03f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08166046 +0x044:  mov    %eax,-0x14(%ebp)
08166049 +0x047:  lea    -0x40(%ebp),%eax
0816604c +0x04a:  mov    %eax,0x4(%esp)
08166050 +0x04e:  lea    -0x14(%ebp),%eax
08166053 +0x051:  mov    %eax,(%esp)
08166056 +0x054:  call   0807e360 <_init+0xc58>
0816605b +0x059:  lea    -0x6c(%ebp),%eax
0816605e +0x05c:  mov    %eax,0x4(%esp)
08166062 +0x060:  lea    -0x14(%ebp),%eax
08166065 +0x063:  mov    %eax,(%esp)
08166068 +0x066:  call   0807e360 <_init+0xc58>
0816606d +0x06b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08166072 +0x070:  mov    0x37c(%eax),%eax
08166078 +0x076:  mov    %eax,-0x38(%ebp)
0816607b +0x079:  movl   $0x0,-0x3c(%ebp)
08166082 +0x080:  movl   $0x0,-0x40(%ebp)
08166089 +0x087:  lea    -0x40(%ebp),%eax
0816608c +0x08a:  mov    %eax,(%esp)
0816608f +0x08d:  call   0807e820 <_init+0x1118>
08166094 +0x092:  mov    %eax,-0x10(%ebp)
08166097 +0x095:  mov    0x8(%ebp),%eax
0816609a +0x098:  add    $0x28,%eax
0816609d +0x09b:  movl   $0x1,0x4(%esp)
081660a5 +0x0a3:  mov    %eax,(%esp)
081660a8 +0x0a6:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
081660ad +0x0ab:  movzwl (%eax),%eax
081660b0 +0x0ae:  movzwl %ax,%eax
081660b3 +0x0b1:  sub    $0x1,%eax
081660b6 +0x0b4:  mov    %eax,-0x5c(%ebp)
081660b9 +0x0b7:  mov    0x8(%ebp),%eax
081660bc +0x0ba:  add    $0x28,%eax
081660bf +0x0bd:  movl   $0x2,0x4(%esp)
081660c7 +0x0c5:  mov    %eax,(%esp)
081660ca +0x0c8:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
081660cf +0x0cd:  movzwl (%eax),%eax
081660d2 +0x0d0:  movzwl %ax,%edx
081660d5 +0x0d3:  mov    0x10(%ebp),%eax
081660d8 +0x0d6:  movzwl 0x8(%eax),%eax
081660dc +0x0da:  movzwl %ax,%eax
081660df +0x0dd:  lea    (%edx,%eax,1),%eax
081660e2 +0x0e0:  mov    %eax,-0x60(%ebp)
081660e5 +0x0e3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081660ea +0x0e8:  mov    0x37c(%eax),%eax
081660f0 +0x0ee:  mov    %eax,-0x64(%ebp)
081660f3 +0x0f1:  movl   $0x0,-0x68(%ebp)
081660fa +0x0f8:  movl   $0x0,-0x6c(%ebp)
08166101 +0x0ff:  lea    -0x6c(%ebp),%eax
08166104 +0x102:  mov    %eax,(%esp)
08166107 +0x105:  call   0807e820 <_init+0x1118>
0816610c +0x10a:  mov    %eax,-0xc(%ebp)
0816610f +0x10d:  mov    -0xc(%ebp),%eax
08166112 +0x110:  mov    -0x10(%ebp),%edx
08166115 +0x113:  mov    %edx,%ecx
08166117 +0x115:  sub    %eax,%ecx
08166119 +0x117:  mov    %ecx,%eax
0816611b +0x119:  cmp    $&_ZL14gUnicodeBuffer+0xac54,%eax
08166120 +0x11e:  jle    0816612d <+0x12b>
08166122 +0x120:  mov    0x10(%ebp),%eax
08166125 +0x123:  mov    %eax,(%esp)
08166128 +0x126:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
0816612d +0x12b:  mov    0x8(%ebp),%eax
08166130 +0x12e:  add    $0x28,%eax
08166133 +0x131:  movl   $0x0,0x4(%esp)
0816613b +0x139:  mov    %eax,(%esp)
0816613e +0x13c:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08166143 +0x141:  movzwl (%eax),%eax
08166146 +0x144:  movzwl %ax,%edx
08166149 +0x147:  mov    0x10(%ebp),%eax
0816614c +0x14a:  movzwl 0x4(%eax),%eax
08166150 +0x14e:  movzwl %ax,%eax
08166153 +0x151:  add    $0x1,%eax
08166156 +0x154:  cmp    %eax,%edx
08166158 +0x156:  setle  %al
0816615b +0x159:  test   %al,%al
0816615d +0x15b:  je     08166181 <+0x17f>
0816615f +0x15d:  mov    0x8(%ebp),%eax
08166162 +0x160:  add    $0x28,%eax
08166165 +0x163:  movl   $0x0,0x4(%esp)
0816616d +0x16b:  mov    %eax,(%esp)
08166170 +0x16e:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08166175 +0x173:  movzwl (%eax),%edx
08166178 +0x176:  mov    0x10(%ebp),%eax
0816617b +0x179:  mov    %dx,0x4(%eax)
0816617f +0x17d:  jmp    08166192 <+0x190>
08166181 +0x17f:  mov    0x10(%ebp),%eax
08166184 +0x182:  movzwl 0x4(%eax),%eax
08166188 +0x186:  lea    0x1(%eax),%edx
0816618b +0x189:  mov    0x10(%ebp),%eax
0816618e +0x18c:  mov    %dx,0x4(%eax)
08166192 +0x190:  mov    0x10(%ebp),%eax
08166195 +0x193:  movzwl 0x8(%eax),%ebx
08166199 +0x197:  mov    -0xc(%ebp),%eax
0816619c +0x19a:  mov    -0x10(%ebp),%edx
0816619f +0x19d:  mov    %edx,%ecx
081661a1 +0x19f:  sub    %eax,%ecx
081661a3 +0x1a1:  mov    $0xc22e4507,%edx
081661a8 +0x1a6:  mov    %ecx,%eax
081661aa +0x1a8:  imul   %edx
081661ac +0x1aa:  lea    (%edx,%ecx,1),%eax
081661af +0x1ad:  mov    %eax,%edx
081661b1 +0x1af:  sar    $0x10,%edx
081661b4 +0x1b2:  mov    %ecx,%eax
081661b6 +0x1b4:  sar    $0x1f,%eax
081661b9 +0x1b7:  mov    %edx,%ecx
081661bb +0x1b9:  sub    %eax,%ecx
081661bd +0x1bb:  mov    %ecx,%eax
081661bf +0x1bd:  lea    (%ebx,%eax,1),%edx
081661c2 +0x1c0:  mov    0x10(%ebp),%eax
081661c5 +0x1c3:  mov    %dx,0x8(%eax)
081661c9 +0x1c7:  jmp    081661cc <+0x1ca>
081661cb +0x1c9:  nop
081661cc +0x1ca:  add    $0x84,%esp
081661d2 +0x1d0:  pop    %ebx
081661d3 +0x1d1:  pop    %ebp
081661d4 +0x1d2:  ret
081661d5 +0x1d3:  nop
```

## 反编译 C

```c
// AttendanceMission::processMission @ 0x8166002

/* AttendanceMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void AttendanceMission::processMission(CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  ushort *puVar1;
  int iVar2;
  undefined2 *puVar3;
  tm local_70;
  tm local_44;
  time_t local_18;
  time_t local_14;
  time_t local_10;
  
  puVar1 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),0);
  if (*(ushort *)(param_3 + 4) < *puVar1) {
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_18,&local_44);
    localtime_r(&local_18,&local_70);
    iVar2 = G_CEnvironment();
    local_44.tm_hour = *(int *)(iVar2 + 0x37c);
    local_44.tm_min = 0;
    local_44.tm_sec = 0;
    local_14 = mktime(&local_44);
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),1)
    ;
    local_70.tm_mon = *puVar1 - 1;
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),2)
    ;
    local_70.tm_mday = (uint)*puVar1 + (uint)*(ushort *)(param_3 + 8);
    iVar2 = G_CEnvironment();
    local_70.tm_hour = *(int *)(iVar2 + 0x37c);
    local_70.tm_min = 0;
    local_70.tm_sec = 0;
    local_10 = mktime(&local_70);
    if (0x15180 < local_14 - local_10) {
      HeroMissionValue::reset((HeroMissionValue *)param_3);
    }
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),0)
    ;
    if (*(ushort *)(param_3 + 4) + 1 < (uint)*puVar1) {
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 1;
    }
    else {
      puVar3 = (undefined2 *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),
                          0);
      *(undefined2 *)(param_3 + 4) = *puVar3;
    }
    *(short *)(param_3 + 8) = *(short *)(param_3 + 8) + (short)((local_14 - local_10) / 0x15180);
  }
  return;
}
```

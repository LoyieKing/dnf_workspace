# InitPlayUser

`_ZN8WongWork9CBossPlay12InitPlayUserEii`

`WongWork::CBossPlay::InitPlayUser(int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x0814926e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814926e  _ZN8WongWork9CBossPlay12InitPlayUserEii
#           WongWork::CBossPlay::InitPlayUser(int, int)
# range [0x0814926e, 0x08149381]
0814926e +0x000:  push   %ebp
0814926f +0x001:  mov    %esp,%ebp
08149271 +0x003:  push   %ebx
08149272 +0x004:  sub    $0x24,%esp
08149275 +0x007:  movl   $0x0,-0x10(%ebp)
0814927c +0x00e:  jmp    0814936c <+0xfe>
08149281 +0x013:  mov    0x8(%ebp),%eax
08149284 +0x016:  mov    0x4(%eax),%eax
08149287 +0x019:  mov    -0x10(%ebp),%edx
0814928a +0x01c:  mov    %edx,0x4(%esp)
0814928e +0x020:  mov    %eax,(%esp)
08149291 +0x023:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08149296 +0x028:  mov    %eax,-0xc(%ebp)
08149299 +0x02b:  cmpl   $0x0,-0xc(%ebp)
0814929d +0x02f:  je     081492bb <+0x4d>
0814929f +0x031:  mov    0x8(%ebp),%eax
081492a2 +0x034:  mov    0x4(%eax),%eax
081492a5 +0x037:  mov    -0x10(%ebp),%edx
081492a8 +0x03a:  mov    %edx,0x4(%esp)
081492ac +0x03e:  mov    %eax,(%esp)
081492af +0x041:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081492b4 +0x046:  xor    $0x1,%eax
081492b7 +0x049:  test   %al,%al
081492b9 +0x04b:  je     081492c2 <+0x54>
081492bb +0x04d:  mov    $0x1,%eax
081492c0 +0x052:  jmp    081492c7 <+0x59>
081492c2 +0x054:  mov    $0x0,%eax
081492c7 +0x059:  test   %al,%al
081492c9 +0x05b:  jne    08149367 <+0xf9>
081492cf +0x061:  mov    0x10(%ebp),%eax
081492d2 +0x064:  movswl %ax,%ebx
081492d5 +0x067:  mov    0x8(%ebp),%eax
081492d8 +0x06a:  mov    0x4(%eax),%eax
081492db +0x06d:  mov    -0x10(%ebp),%edx
081492de +0x070:  mov    %edx,0x4(%esp)
081492e2 +0x074:  mov    %eax,(%esp)
081492e5 +0x077:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081492ea +0x07c:  mov    %ebx,0x4(%esp)
081492ee +0x080:  mov    %eax,(%esp)
081492f1 +0x083:  call   0814aaac <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x84b>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x84b
081492f6 +0x088:  mov    -0xc(%ebp),%eax
081492f9 +0x08b:  mov    %eax,(%esp)
081492fc +0x08e:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08149301 +0x093:  add    $0x75d8,%eax
08149306 +0x098:  mov    %eax,(%esp)
08149309 +0x09b:  call   0814aa16 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7b5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7b5
0814930e +0x0a0:  mov    -0xc(%ebp),%eax
08149311 +0x0a3:  mov    %eax,(%esp)
08149314 +0x0a6:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08149319 +0x0ab:  movl   $0xffffffff,0xc(%esp)
08149321 +0x0b3:  mov    0xc(%ebp),%edx
08149324 +0x0b6:  mov    %edx,0x8(%esp)
08149328 +0x0ba:  movl   $0x0,0x4(%esp)
08149330 +0x0c2:  mov    %eax,(%esp)
08149333 +0x0c5:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
08149338 +0x0ca:  movl   $0xc,0x4(%esp)
08149340 +0x0d2:  mov    -0xc(%ebp),%eax
08149343 +0x0d5:  mov    %eax,(%esp)
08149346 +0x0d8:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0814934b +0x0dd:  movl   $0x1,0x8(%esp)
08149353 +0x0e5:  mov    -0x10(%ebp),%eax
08149356 +0x0e8:  mov    %eax,0x4(%esp)
0814935a +0x0ec:  mov    0x8(%ebp),%eax
0814935d +0x0ef:  mov    %eax,(%esp)
08149360 +0x0f2:  call   0814a7e4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x583>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x583
08149365 +0x0f7:  jmp    08149368 <+0xfa>
08149367 +0x0f9:  nop
08149368 +0x0fa:  addl   $0x1,-0x10(%ebp)
0814936c +0x0fe:  cmpl   $0x3,-0x10(%ebp)
08149370 +0x102:  setle  %al
08149373 +0x105:  test   %al,%al
08149375 +0x107:  jne    08149281 <+0x13>
0814937b +0x10d:  add    $0x24,%esp
0814937e +0x110:  pop    %ebx
0814937f +0x111:  pop    %ebp
08149380 +0x112:  ret
08149381 +0x113:  nop
```

## 反编译 C

```c
// WongWork::CBossPlay::InitPlayUser @ 0x814926e

/* WongWork::CBossPlay::InitPlayUser(int, int) */

void __thiscall WongWork::CBossPlay::InitPlayUser(CBossPlay *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  CUser *this_00;
  CUser *this_01;
  int iVar3;
  UserQuest *pUVar4;
  int local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    this_00 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (this_00 == (CUser *)0x0) {
LAB_081492bb:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar2 != '\x01') goto LAB_081492bb;
      bVar1 = false;
    }
    if (!bVar1) {
      this_01 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
      CUser::setBossTowerIndex(this_01,(short)param_2);
      iVar3 = CUser::getCurCharacQuestW(this_00);
      _Quest_Authen_Data::reset((_Quest_Authen_Data *)(iVar3 + 0x75d8));
      pUVar4 = (UserQuest *)CUser::getCurCharacQuestW(this_00);
      UserQuest::set_authen_data(pUVar4,0,param_1,0xffffffff);
      CUser::set_state(this_00,0xc);
      setMemberAlive(this,local_14,true);
    }
    local_14 = local_14 + 1;
  } while( true );
}
```

# BloodPhaseSpawnTimerResgister

`_ZN13CBattle_Field29BloodPhaseSpawnTimerResgisterEs`

`CBattle_Field::BloodPhaseSpawnTimerResgister(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083053d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083053d2  _ZN13CBattle_Field29BloodPhaseSpawnTimerResgisterEs
#           CBattle_Field::BloodPhaseSpawnTimerResgister(short)
# range [0x083053d2, 0x08305539]
083053d2 +0x000:  push   %ebp
083053d3 +0x001:  mov    %esp,%ebp
083053d5 +0x003:  push   %edi
083053d6 +0x004:  push   %esi
083053d7 +0x005:  push   %ebx
083053d8 +0x006:  sub    $0x4c,%esp
083053db +0x009:  mov    0xc(%ebp),%eax
083053de +0x00c:  mov    %ax,-0x2c(%ebp)
083053e2 +0x010:  movswl -0x2c(%ebp),%eax
083053e6 +0x014:  mov    %eax,0x4(%esp)
083053ea +0x018:  mov    0x8(%ebp),%eax
083053ed +0x01b:  mov    %eax,(%esp)
083053f0 +0x01e:  call   08306670 <_ZN13CBattle_Field34get_blood_spawn_cnt_of_small_roundEs>  ; CBattle_Field::get_blood_spawn_cnt_of_small_round(short)
083053f5 +0x023:  mov    %eax,-0x24(%ebp)
083053f8 +0x026:  cmpl   $0x0,-0x24(%ebp)
083053fc +0x02a:  js     08305404 <+0x32>
083053fe +0x02c:  cmpl   $0xa,-0x24(%ebp)
08305402 +0x030:  jle    0830540e <+0x3c>
08305404 +0x032:  mov    $0xffffffff,%eax
08305409 +0x037:  jmp    08305531 <+0x15f>
0830540e +0x03c:  cmpl   $0x0,-0x24(%ebp)
08305412 +0x040:  jne    08305418 <+0x46>
08305414 +0x042:  addl   $0x1,-0x24(%ebp)
08305418 +0x046:  movl   $0x0,-0x20(%ebp)
0830541f +0x04d:  jmp    0830551b <+0x149>
08305424 +0x052:  movswl -0x2c(%ebp),%eax
08305428 +0x056:  mov    %eax,0x4(%esp)
0830542c +0x05a:  mov    0x8(%ebp),%eax
0830542f +0x05d:  mov    %eax,(%esp)
08305432 +0x060:  call   083066ea <_ZN13CBattle_Field36get_blood_spawn_small_round_intervalEs>  ; CBattle_Field::get_blood_spawn_small_round_interval(short)
08305437 +0x065:  mov    %eax,-0x1c(%ebp)
0830543a +0x068:  cmpl   $0x0,-0x1c(%ebp)
0830543e +0x06c:  jg     0830544a <+0x78>
08305440 +0x06e:  mov    $0xffffffff,%eax
08305445 +0x073:  jmp    08305531 <+0x15f>
0830544a +0x078:  mov    0x8(%ebp),%eax
0830544d +0x07b:  movzwl 0x2a8(%eax),%eax
08305454 +0x082:  cmp    -0x2c(%ebp),%ax
08305458 +0x086:  jne    08305465 <+0x93>
0830545a +0x088:  mov    0x8(%ebp),%eax
0830545d +0x08b:  mov    %eax,(%esp)
08305460 +0x08e:  call   08305d0c <_ZN13CBattle_Field28BloodCrazyMonsterSpawnPacketEv>  ; CBattle_Field::BloodCrazyMonsterSpawnPacket()
08305465 +0x093:  mov    -0x20(%ebp),%edx
08305468 +0x096:  mov    0x8(%ebp),%eax
0830546b +0x099:  lea    0x138(%edx),%ecx
08305471 +0x09f:  movzwl -0x2c(%ebp),%edx
08305475 +0x0a3:  mov    %dx,0x8(%eax,%ecx,2)
0830547a +0x0a8:  mov    -0x20(%ebp),%edx
0830547d +0x0ab:  mov    0x8(%ebp),%eax
08305480 +0x0ae:  add    $0x140,%edx
08305486 +0x0b4:  movw   $0x0,0xe(%eax,%edx,2)
0830548d +0x0bb:  mov    -0x20(%ebp),%eax
08305490 +0x0be:  add    $0x17,%eax
08305493 +0x0c1:  mov    %eax,%edx
08305495 +0x0c3:  mov    0x8(%ebp),%eax
08305498 +0x0c6:  mov    (%eax),%eax
0830549a +0x0c8:  mov    %edx,0x4(%esp)
0830549e +0x0cc:  mov    %eax,(%esp)
083054a1 +0x0cf:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
083054a6 +0x0d4:  mov    %eax,-0x34(%ebp)
083054a9 +0x0d7:  mov    -0x1c(%ebp),%eax
083054ac +0x0da:  mov    %eax,%ebx
083054ae +0x0dc:  mov    %eax,%esi
083054b0 +0x0de:  sar    $0x1f,%esi
083054b3 +0x0e1:  mov    -0x20(%ebp),%eax
083054b6 +0x0e4:  add    $0x17,%eax
083054b9 +0x0e7:  mov    %eax,-0x30(%ebp)
083054bc +0x0ea:  mov    0x8(%ebp),%eax
083054bf +0x0ed:  mov    (%eax),%eax
083054c1 +0x0ef:  mov    %eax,(%esp)
083054c4 +0x0f2:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
083054c9 +0x0f7:  mov    %eax,%edi
083054cb +0x0f9:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
083054d0 +0x0fe:  movl   $0x0,0x1c(%esp)
083054d8 +0x106:  mov    -0x34(%ebp),%edx
083054db +0x109:  mov    %edx,0x18(%esp)
083054df +0x10d:  mov    %ebx,0x10(%esp)
083054e3 +0x111:  mov    %esi,0x14(%esp)
083054e7 +0x115:  mov    -0x30(%ebp),%edx
083054ea +0x118:  mov    %edx,0xc(%esp)
083054ee +0x11c:  mov    %edi,0x8(%esp)
083054f2 +0x120:  movl   $0x1,0x4(%esp)
083054fa +0x128:  mov    %eax,(%esp)
083054fd +0x12b:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
08305502 +0x130:  addw   $0x1,-0x2c(%ebp)
08305507 +0x135:  mov    0x8(%ebp),%eax
0830550a +0x138:  add    $0x2ac,%eax
0830550f +0x13d:  mov    %eax,(%esp)
08305512 +0x140:  call   0830ebfc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7e1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7e1
08305517 +0x145:  addl   $0x1,-0x20(%ebp)
0830551b +0x149:  mov    -0x20(%ebp),%eax
0830551e +0x14c:  cmp    -0x24(%ebp),%eax
08305521 +0x14f:  setl   %al
08305524 +0x152:  test   %al,%al
08305526 +0x154:  jne    08305424 <+0x52>
0830552c +0x15a:  mov    $0x0,%eax
08305531 +0x15f:  add    $0x4c,%esp
08305534 +0x162:  pop    %ebx
08305535 +0x163:  pop    %esi
08305536 +0x164:  pop    %edi
08305537 +0x165:  pop    %ebp
08305538 +0x166:  ret
08305539 +0x167:  nop
```

## 反编译 C

```c
// CBattle_Field::BloodPhaseSpawnTimerResgister @ 0x83053d2

/* CBattle_Field::BloodPhaseSpawnTimerResgister(short) */

undefined4 __thiscall
CBattle_Field::BloodPhaseSpawnTimerResgister(CBattle_Field *this,short param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short local_30;
  int local_28;
  int local_24;
  
  local_30 = param_1;
  local_28 = get_blood_spawn_cnt_of_small_round(this,param_1);
  if ((local_28 < 0) || (10 < local_28)) {
    uVar1 = 0xffffffff;
  }
  else {
    if (local_28 == 0) {
      local_28 = 1;
    }
    for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
      iVar2 = get_blood_spawn_small_round_interval(this,local_30);
      if (iVar2 < 1) {
        return 0xffffffff;
      }
      if (*(short *)(this + 0x2a8) == local_30) {
        BloodCrazyMonsterSpawnPacket(this);
      }
      *(short *)(this + (local_24 + 0x138) * 2 + 8) = local_30;
      *(undefined2 *)(this + (local_24 + 0x140) * 2 + 0xe) = 0;
      uVar1 = CParty::gen_timer_key(*(CParty **)this,local_24 + 0x17);
      uVar3 = CParty::GetPartyIndex(*(CParty **)this);
      uVar4 = G_TimerQueue();
      TimerQueue::InsertTimerInMilisecond(uVar4,1,uVar3,local_24 + 0x17,iVar2,iVar2 >> 0x1f,uVar1,0)
      ;
      local_30 = local_30 + 1;
      CBloodRound::incBloodSmallRoundOrder((CBloodRound *)(this + 0x2ac));
    }
    uVar1 = 0;
  }
  return uVar1;
}
```

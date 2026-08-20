# BloodHandleDieUser

`_ZN6CParty18BloodHandleDieUserEP5CUser`

`CParty::BloodHandleDieUser(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b8e5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b8e5c  _ZN6CParty18BloodHandleDieUserEP5CUser
#           CParty::BloodHandleDieUser(CUser*)
# range [0x085b8e5c, 0x085b8f91]
085b8e5c +0x000:  push   %ebp
085b8e5d +0x001:  mov    %esp,%ebp
085b8e5f +0x003:  push   %esi
085b8e60 +0x004:  push   %ebx
085b8e61 +0x005:  sub    $0x30,%esp
085b8e64 +0x008:  movl   $0x0,-0xc(%ebp)
085b8e6b +0x00f:  movl   $0x0,-0xc(%ebp)
085b8e72 +0x016:  jmp    085b8f03 <+0xa7>
085b8e77 +0x01b:  mov    -0xc(%ebp),%eax
085b8e7a +0x01e:  mov    %eax,0x4(%esp)
085b8e7e +0x022:  mov    0x8(%ebp),%eax
085b8e81 +0x025:  mov    %eax,(%esp)
085b8e84 +0x028:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b8e89 +0x02d:  test   %al,%al
085b8e8b +0x02f:  je     085b8eff <+0xa3>
085b8e8d +0x031:  mov    -0xc(%ebp),%eax
085b8e90 +0x034:  mov    %eax,0x4(%esp)
085b8e94 +0x038:  mov    0x8(%ebp),%eax
085b8e97 +0x03b:  mov    %eax,(%esp)
085b8e9a +0x03e:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b8e9f +0x043:  cmp    0xc(%ebp),%eax
085b8ea2 +0x046:  sete   %al
085b8ea5 +0x049:  test   %al,%al
085b8ea7 +0x04b:  je     085b8eff <+0xa3>
085b8ea9 +0x04d:  mov    -0xc(%ebp),%eax
085b8eac +0x050:  mov    0x8(%ebp),%edx
085b8eaf +0x053:  movzbl 0x380(%edx,%eax,1),%eax
085b8eb7 +0x05b:  xor    $0x1,%eax
085b8eba +0x05e:  test   %al,%al
085b8ebc +0x060:  je     085b8ee3 <+0x87>
085b8ebe +0x062:  movl   $0x12,0x8(%esp)
085b8ec6 +0x06a:  movl   $0x2b,0x4(%esp)
085b8ece +0x072:  mov    0xc(%ebp),%eax
085b8ed1 +0x075:  mov    %eax,(%esp)
085b8ed4 +0x078:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085b8ed9 +0x07d:  mov    $0x0,%eax
085b8ede +0x082:  jmp    085b8f8b <+0x12f>
085b8ee3 +0x087:  movl   $0x0,0x8(%esp)
085b8eeb +0x08f:  mov    0xc(%ebp),%eax
085b8eee +0x092:  mov    %eax,0x4(%esp)
085b8ef2 +0x096:  mov    0x8(%ebp),%eax
085b8ef5 +0x099:  mov    %eax,(%esp)
085b8ef8 +0x09c:  call   085b29bc <_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE>  ; CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)
085b8efd +0x0a1:  jmp    085b8f12 <+0xb6>
085b8eff +0x0a3:  addl   $0x1,-0xc(%ebp)
085b8f03 +0x0a7:  cmpl   $0x3,-0xc(%ebp)
085b8f07 +0x0ab:  setle  %al
085b8f0a +0x0ae:  test   %al,%al
085b8f0c +0x0b0:  jne    085b8e77 <+0x1b>
085b8f12 +0x0b6:  mov    0x8(%ebp),%eax
085b8f15 +0x0b9:  mov    %eax,(%esp)
085b8f18 +0x0bc:  call   085b2b52 <_ZN6CParty19check_allmember_dieEv>  ; CParty::check_allmember_die()
085b8f1d +0x0c1:  test   %al,%al
085b8f1f +0x0c3:  je     085b8f86 <+0x12a>
085b8f21 +0x0c5:  mov    0x8(%ebp),%eax
085b8f24 +0x0c8:  mov    0xcd8(%eax),%eax
085b8f2a +0x0ce:  cmp    $0x1,%eax
085b8f2d +0x0d1:  je     085b8f86 <+0x12a>
085b8f2f +0x0d3:  movl   $0x22,0x4(%esp)
085b8f37 +0x0db:  mov    0x8(%ebp),%eax
085b8f3a +0x0de:  mov    %eax,(%esp)
085b8f3d +0x0e1:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b8f42 +0x0e6:  mov    %eax,%esi
085b8f44 +0x0e8:  mov    0x8(%ebp),%eax
085b8f47 +0x0eb:  mov    %eax,(%esp)
085b8f4a +0x0ee:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085b8f4f +0x0f3:  mov    %eax,%ebx
085b8f51 +0x0f5:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b8f56 +0x0fa:  movl   $0x22,0x18(%esp)
085b8f5e +0x102:  mov    %esi,0x14(%esp)
085b8f62 +0x106:  movl   $0xa,0x10(%esp)
085b8f6a +0x10e:  movl   $0x22,0xc(%esp)
085b8f72 +0x116:  mov    %ebx,0x8(%esp)
085b8f76 +0x11a:  movl   $0x1,0x4(%esp)
085b8f7e +0x122:  mov    %eax,(%esp)
085b8f81 +0x125:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b8f86 +0x12a:  mov    $0x1,%eax
085b8f8b +0x12f:  add    $0x30,%esp
085b8f8e +0x132:  pop    %ebx
085b8f8f +0x133:  pop    %esi
085b8f90 +0x134:  pop    %ebp
085b8f91 +0x135:  ret
```

## 反编译 C

```c
// CParty::BloodHandleDieUser @ 0x85b8e5c

/* CParty::BloodHandleDieUser(CUser*) */

undefined4 __thiscall CParty::BloodHandleDieUser(CParty *this,CUser *param_1)

{
  char cVar1;
  CUser *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TimerQueue *pTVar5;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_085b8f12:
      cVar1 = check_allmember_die(this);
      if ((cVar1 != '\0') && (*(int *)(this + 0xcd8) != 1)) {
        uVar3 = gen_timer_key(this,0x22);
        uVar4 = GetPartyIndex(this);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,1,uVar4,0x22,10,uVar3,0x22);
      }
      return 1;
    }
    cVar1 = checkValidUser(this,local_10);
    if ((cVar1 != '\0') && (pCVar2 = (CUser *)get_user(this,local_10), pCVar2 == param_1)) {
      if (this[local_10 + 0x380] != (CParty)0x1) {
        CUser::SendCmdErrorPacket(param_1,0x2b,0x12);
        return 0;
      }
      set_charac_live(this,param_1,0);
      goto LAB_085b8f12;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```

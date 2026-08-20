# VoteLackUser

`_ZN8PvP_Room12VoteLackUserEP5CUseri`

`PvP_Room::VoteLackUser(CUser*, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dcf1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dcf1a  _ZN8PvP_Room12VoteLackUserEP5CUseri
#           PvP_Room::VoteLackUser(CUser*, int)
# range [0x085dcf1a, 0x085dd06f]
085dcf1a +0x000:  push   %ebp
085dcf1b +0x001:  mov    %esp,%ebp
085dcf1d +0x003:  push   %esi
085dcf1e +0x004:  push   %ebx
085dcf1f +0x005:  sub    $0x30,%esp
085dcf22 +0x008:  cmpl   $0x0,0x10(%ebp)
085dcf26 +0x00c:  js     085dcf2e <+0x14>
085dcf28 +0x00e:  cmpl   $0x7,0x10(%ebp)
085dcf2c +0x012:  jle    085dcf6b <+0x51>
085dcf2e +0x014:  mov    0x10(%ebp),%eax
085dcf31 +0x017:  mov    %eax,0x14(%esp)
085dcf35 +0x01b:  movl   $"VoteSlotNo(%d) < 0 || MAX_PVP_PLAYER < VoteSlotNo",0x10(%esp)
085dcf3d +0x023:  movl   $0x116d,0xc(%esp)
085dcf45 +0x02b:  movl   $&_ZZN8PvP_Room12VoteLackUserEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
085dcf4d +0x033:  movl   $"pvp.cpp",0x4(%esp)
085dcf55 +0x03b:  movl   $0x1,(%esp)
085dcf5c +0x042:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085dcf61 +0x047:  mov    $0x0,%eax
085dcf66 +0x04c:  jmp    085dd068 <+0x14e>
085dcf6b +0x051:  mov    0x10(%ebp),%edx
085dcf6e +0x054:  mov    0x8(%ebp),%eax
085dcf71 +0x057:  add    $0xc,%edx
085dcf74 +0x05a:  mov    (%eax,%edx,4),%eax
085dcf77 +0x05d:  mov    %eax,-0x10(%ebp)
085dcf7a +0x060:  mov    0xc(%ebp),%eax
085dcf7d +0x063:  cmp    -0x10(%ebp),%eax
085dcf80 +0x066:  je     085dcf88 <+0x6e>
085dcf82 +0x068:  cmpl   $0x0,-0x10(%ebp)
085dcf86 +0x06c:  jne    085dcf92 <+0x78>
085dcf88 +0x06e:  mov    $0x0,%eax
085dcf8d +0x073:  jmp    085dd068 <+0x14e>
085dcf92 +0x078:  mov    0xc(%ebp),%eax
085dcf95 +0x07b:  mov    %eax,0x4(%esp)
085dcf99 +0x07f:  mov    0x8(%ebp),%eax
085dcf9c +0x082:  mov    %eax,(%esp)
085dcf9f +0x085:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085dcfa4 +0x08a:  mov    %eax,-0xc(%ebp)
085dcfa7 +0x08d:  cmpl   $0x0,-0xc(%ebp)
085dcfab +0x091:  js     085dcfb3 <+0x99>
085dcfad +0x093:  cmpl   $0x8,-0xc(%ebp)
085dcfb1 +0x097:  jle    085dcfed <+0xd3>
085dcfb3 +0x099:  mov    -0xc(%ebp),%eax
085dcfb6 +0x09c:  mov    %eax,0x14(%esp)
085dcfba +0x0a0:  movl   $"UserSlotNo(%d) < 0 || MAX_PVP_PLAYER < UserSlotNo",0x10(%esp)
085dcfc2 +0x0a8:  movl   $0x117b,0xc(%esp)
085dcfca +0x0b0:  movl   $&_ZZN8PvP_Room12VoteLackUserEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
085dcfd2 +0x0b8:  movl   $"pvp.cpp",0x4(%esp)
085dcfda +0x0c0:  movl   $0x1,(%esp)
085dcfe1 +0x0c7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085dcfe6 +0x0cc:  mov    $0x0,%eax
085dcfeb +0x0d1:  jmp    085dd068 <+0x14e>
085dcfed +0x0d3:  mov    0x8(%ebp),%eax
085dcff0 +0x0d6:  lea    0x12c(%eax),%edx
085dcff6 +0x0dc:  mov    0x10(%ebp),%eax
085dcff9 +0x0df:  mov    %eax,0x8(%esp)
085dcffd +0x0e3:  mov    -0xc(%ebp),%eax
085dd000 +0x0e6:  mov    %eax,0x4(%esp)
085dd004 +0x0ea:  mov    %edx,(%esp)
085dd007 +0x0ed:  call   085e00a4 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x92b>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x92b
085dd00c +0x0f2:  movl   $0x31,0x4(%esp)
085dd014 +0x0fa:  mov    0x8(%ebp),%eax
085dd017 +0x0fd:  mov    %eax,(%esp)
085dd01a +0x100:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085dd01f +0x105:  mov    %eax,%ebx
085dd021 +0x107:  mov    0x8(%ebp),%eax
085dd024 +0x10a:  mov    (%eax),%esi
085dd026 +0x10c:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085dd02b +0x111:  movl   $0x0,0x1c(%esp)
085dd033 +0x119:  mov    %ebx,0x18(%esp)
085dd037 +0x11d:  movl   $0x9c4,0x10(%esp)
085dd03f +0x125:  movl   $0x0,0x14(%esp)
085dd047 +0x12d:  movl   $0x31,0xc(%esp)
085dd04f +0x135:  mov    %esi,0x8(%esp)
085dd053 +0x139:  movl   $0x1,0x4(%esp)
085dd05b +0x141:  mov    %eax,(%esp)
085dd05e +0x144:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
085dd063 +0x149:  mov    $0x1,%eax
085dd068 +0x14e:  add    $0x30,%esp
085dd06b +0x151:  pop    %ebx
085dd06c +0x152:  pop    %esi
085dd06d +0x153:  pop    %ebp
085dd06e +0x154:  ret
085dd06f +0x155:  nop
```

## 反编译 C

```c
// PvP_Room::VoteLackUser @ 0x85dcf1a

/* PvP_Room::VoteLackUser(CUser*, int) */

undefined4 __thiscall PvP_Room::VoteLackUser(PvP_Room *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_2 < 0) || (7 < param_2)) {
    LogManager::logFormat
              (1,"pvp.cpp","bool PvP_Room::VoteLackUser(CUser*, int)",0x116d,
               "VoteSlotNo(%d) < 0 || MAX_PVP_PLAYER < VoteSlotNo",param_2);
    uVar1 = 0;
  }
  else if ((param_1 == *(CUser **)(this + (param_2 + 0xc) * 4)) ||
          (*(CUser **)(this + (param_2 + 0xc) * 4) == (CUser *)0x0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_user_seat(this,param_1);
    if ((iVar2 < 0) || (8 < iVar2)) {
      LogManager::logFormat
                (1,"pvp.cpp","bool PvP_Room::VoteLackUser(CUser*, int)",0x117b,
                 "UserSlotNo(%d) < 0 || MAX_PVP_PLAYER < UserSlotNo",iVar2);
      uVar1 = 0;
    }
    else {
      cElection<int,8,8>::Vote((cElection<int,8,8> *)(this + 300),iVar2,param_2);
      uVar3 = gen_timer_key(this,0x31);
      uVar1 = *(undefined4 *)this;
      uVar4 = G_TimerQueue();
      TimerQueue::InsertTimerInMilisecond(uVar4,1,uVar1,0x31,0x9c4,0,uVar3,0);
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

# dispatch_sig

`_ZN21TimerCheckPvPRoomUser12dispatch_sigEiij`

`TimerCheckPvPRoomUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckPvPRoomUser` | `0x08636f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636f90  _ZN21TimerCheckPvPRoomUser12dispatch_sigEiij
#           TimerCheckPvPRoomUser::dispatch_sig(int, int, unsigned int)
# range [0x08636f90, 0x08637039]
08636f90 +0x00:  push   %ebp
08636f91 +0x01:  mov    %esp,%ebp
08636f93 +0x03:  sub    $0x28,%esp
08636f96 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08636f9b +0x0b:  movl   $0x3c,0xc(%esp)
08636fa3 +0x13:  movl   $0x0,0x8(%esp)
08636fab +0x1b:  mov    0xc(%ebp),%edx
08636fae +0x1e:  mov    %edx,0x4(%esp)
08636fb2 +0x22:  mov    %eax,(%esp)
08636fb5 +0x25:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08636fba +0x2a:  mov    %eax,-0xc(%ebp)
08636fbd +0x2d:  cmpl   $0x0,-0xc(%ebp)
08636fc1 +0x31:  jne    08636fca <+0x3a>
08636fc3 +0x33:  mov    $0x0,%eax
08636fc8 +0x38:  jmp    08637037 <+0xa7>
08636fca +0x3a:  movl   $0x3c,0x4(%esp)
08636fd2 +0x42:  mov    -0xc(%ebp),%eax
08636fd5 +0x45:  mov    %eax,(%esp)
08636fd8 +0x48:  call   0863bcb4 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1c5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1c5
08636fdd +0x4d:  cmp    0x10(%ebp),%eax
08636fe0 +0x50:  setne  %al
08636fe3 +0x53:  test   %al,%al
08636fe5 +0x55:  je     08636fee <+0x5e>
08636fe7 +0x57:  mov    $0x0,%eax
08636fec +0x5c:  jmp    08637037 <+0xa7>
08636fee +0x5e:  mov    -0xc(%ebp),%eax
08636ff1 +0x61:  mov    %eax,(%esp)
08636ff4 +0x64:  call   085df946 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1cd>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1cd
08636ff9 +0x69:  cmp    $0x2,%eax
08636ffc +0x6c:  setne  %al
08636fff +0x6f:  test   %al,%al
08637001 +0x71:  je     0863700a <+0x7a>
08637003 +0x73:  mov    $0x0,%eax
08637008 +0x78:  jmp    08637037 <+0xa7>
0863700a +0x7a:  mov    -0xc(%ebp),%eax
0863700d +0x7d:  mov    %eax,(%esp)
08637010 +0x80:  call   085dc3ca <_ZN8PvP_Room19check_recv_pvp_rankEv>  ; PvP_Room::check_recv_pvp_rank()
08637015 +0x85:  mov    -0xc(%ebp),%eax
08637018 +0x88:  mov    %eax,(%esp)
0863701b +0x8b:  call   082a4332 <_GLOBAL__I__ZN4CLog5this_E+0x759>  ; global constructors keyed to CLog::this_+0x759
08637020 +0x90:  xor    $0x1,%eax
08637023 +0x93:  test   %al,%al
08637025 +0x95:  je     08637032 <+0xa2>
08637027 +0x97:  mov    -0xc(%ebp),%eax
0863702a +0x9a:  mov    %eax,(%esp)
0863702d +0x9d:  call   085dc476 <_ZN8PvP_Room12send_pvp_endEv>  ; PvP_Room::send_pvp_end()
08637032 +0xa2:  mov    $0x1,%eax
08637037 +0xa7:  leave
08637038 +0xa8:  ret
08637039 +0xa9:  nop
```

## 反编译 C

```c
// TimerCheckPvPRoomUser::dispatch_sig @ 0x8636f90

/* TimerCheckPvPRoomUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckPvPRoomUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CGameManager *this;
  PvP_Room *this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3c);
  if (this_00 == (PvP_Room *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = PvP_Room::get_timer_key(this_00,0x3c);
    if (uVar3 == param_3) {
      iVar4 = PvP_Room::get_state(this_00);
      if (iVar4 == 2) {
        PvP_Room::check_recv_pvp_rank(this_00);
        cVar1 = PvP_Room::IsEndPvpBattle(this_00);
        if (cVar1 != '\x01') {
          PvP_Room::send_pvp_end(this_00);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

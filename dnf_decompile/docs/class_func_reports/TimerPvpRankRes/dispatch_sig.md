# dispatch_sig

`_ZN15TimerPvpRankRes12dispatch_sigEiij`

`TimerPvpRankRes::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPvpRankRes` | `0x08633be8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633be8  _ZN15TimerPvpRankRes12dispatch_sigEiij
#           TimerPvpRankRes::dispatch_sig(int, int, unsigned int)
# range [0x08633be8, 0x08633c57]
08633be8 +0x00:  push   %ebp
08633be9 +0x01:  mov    %esp,%ebp
08633beb +0x03:  sub    $0x28,%esp
08633bee +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633bf3 +0x0b:  movl   $0x32,0xc(%esp)
08633bfb +0x13:  movl   $0x0,0x8(%esp)
08633c03 +0x1b:  mov    0xc(%ebp),%edx
08633c06 +0x1e:  mov    %edx,0x4(%esp)
08633c0a +0x22:  mov    %eax,(%esp)
08633c0d +0x25:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08633c12 +0x2a:  mov    %eax,-0xc(%ebp)
08633c15 +0x2d:  cmpl   $0x0,-0xc(%ebp)
08633c19 +0x31:  jne    08633c22 <+0x3a>
08633c1b +0x33:  mov    $0x0,%eax
08633c20 +0x38:  jmp    08633c56 <+0x6e>
08633c22 +0x3a:  movl   $0x32,0x4(%esp)
08633c2a +0x42:  mov    -0xc(%ebp),%eax
08633c2d +0x45:  mov    %eax,(%esp)
08633c30 +0x48:  call   0863bcb4 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1c5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1c5
08633c35 +0x4d:  cmp    0x10(%ebp),%eax
08633c38 +0x50:  setne  %al
08633c3b +0x53:  test   %al,%al
08633c3d +0x55:  je     08633c46 <+0x5e>
08633c3f +0x57:  mov    $0x0,%eax
08633c44 +0x5c:  jmp    08633c56 <+0x6e>
08633c46 +0x5e:  mov    -0xc(%ebp),%eax
08633c49 +0x61:  mov    %eax,(%esp)
08633c4c +0x64:  call   085da882 <_ZN8PvP_Room10pvp_rewardEv>  ; PvP_Room::pvp_reward()
08633c51 +0x69:  mov    $0x1,%eax
08633c56 +0x6e:  leave
08633c57 +0x6f:  ret
```

## 反编译 C

```c
// TimerPvpRankRes::dispatch_sig @ 0x8633be8

/* TimerPvpRankRes::dispatch_sig(int, int, unsigned int) */

undefined4 TimerPvpRankRes::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  PvP_Room *this_00;
  undefined4 uVar1;
  uint uVar2;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x32);
  if (this_00 == (PvP_Room *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = PvP_Room::get_timer_key(this_00,0x32);
    if (uVar2 == param_3) {
      PvP_Room::pvp_reward(this_00);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

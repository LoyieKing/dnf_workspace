# dispatch_sig

`_ZN23TimerPVPWalkOutLackUser12dispatch_sigEiij`

`TimerPVPWalkOutLackUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPVPWalkOutLackUser` | `0x08633e86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633e86  _ZN23TimerPVPWalkOutLackUser12dispatch_sigEiij
#           TimerPVPWalkOutLackUser::dispatch_sig(int, int, unsigned int)
# range [0x08633e86, 0x08633f1b]
08633e86 +0x00:  push   %ebp
08633e87 +0x01:  mov    %esp,%ebp
08633e89 +0x03:  sub    $0x28,%esp
08633e8c +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633e91 +0x0b:  movl   $0x31,0xc(%esp)
08633e99 +0x13:  movl   $0x0,0x8(%esp)
08633ea1 +0x1b:  mov    0xc(%ebp),%edx
08633ea4 +0x1e:  mov    %edx,0x4(%esp)
08633ea8 +0x22:  mov    %eax,(%esp)
08633eab +0x25:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08633eb0 +0x2a:  mov    %eax,-0xc(%ebp)
08633eb3 +0x2d:  cmpl   $0x0,-0xc(%ebp)
08633eb7 +0x31:  jne    08633ec0 <+0x3a>
08633eb9 +0x33:  mov    $0x0,%eax
08633ebe +0x38:  jmp    08633f1a <+0x94>
08633ec0 +0x3a:  movl   $0x31,0x4(%esp)
08633ec8 +0x42:  mov    -0xc(%ebp),%eax
08633ecb +0x45:  mov    %eax,(%esp)
08633ece +0x48:  call   0863bcb4 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1c5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1c5
08633ed3 +0x4d:  cmp    0x10(%ebp),%eax
08633ed6 +0x50:  setne  %al
08633ed9 +0x53:  test   %al,%al
08633edb +0x55:  je     08633ee4 <+0x5e>
08633edd +0x57:  mov    $0x0,%eax
08633ee2 +0x5c:  jmp    08633f1a <+0x94>
08633ee4 +0x5e:  mov    -0xc(%ebp),%eax
08633ee7 +0x61:  mov    %eax,(%esp)
08633eea +0x64:  call   085dce28 <_ZN8PvP_Room22OnTimerWalkOutLackUserEv>  ; PvP_Room::OnTimerWalkOutLackUser()
08633eef +0x69:  xor    $0x1,%eax
08633ef2 +0x6c:  test   %al,%al
08633ef4 +0x6e:  je     08633f15 <+0x8f>
08633ef6 +0x70:  mov    -0xc(%ebp),%eax
08633ef9 +0x73:  mov    %eax,(%esp)
08633efc +0x76:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
08633f01 +0x7b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633f06 +0x80:  mov    -0xc(%ebp),%edx
08633f09 +0x83:  mov    %edx,0x4(%esp)
08633f0d +0x87:  mov    %eax,(%esp)
08633f10 +0x8a:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
08633f15 +0x8f:  mov    $0x1,%eax
08633f1a +0x94:  leave
08633f1b +0x95:  ret
```

## 反编译 C

```c
// TimerPVPWalkOutLackUser::dispatch_sig @ 0x8633e86

/* TimerPVPWalkOutLackUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerPVPWalkOutLackUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CGameManager *pCVar2;
  PvP_Room *this;
  undefined4 uVar3;
  uint uVar4;
  
  pCVar2 = (CGameManager *)G_CGameManager();
  this = (PvP_Room *)CGameManager::GetPvp(pCVar2,param_2,(CUser *)0x0,0x31);
  if (this == (PvP_Room *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = PvP_Room::get_timer_key(this,0x31);
    if (uVar4 == param_3) {
      cVar1 = PvP_Room::OnTimerWalkOutLackUser(this);
      if (cVar1 != '\x01') {
        PvP_Room::reset(this);
        pCVar2 = (CGameManager *)G_CGameManager();
        CGameManager::PutPvp(pCVar2,this);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

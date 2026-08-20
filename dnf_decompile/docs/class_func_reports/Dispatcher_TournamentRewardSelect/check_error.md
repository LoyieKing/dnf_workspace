# check_error

`_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_TournamentRewardSelect::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelect` | `0x081e046c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e046c  _ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_TournamentRewardSelect::check_error(CUser*, MSG_BASE&)
# range [0x081e046c, 0x081e04f1]
081e046c +0x00:  push   %ebp
081e046d +0x01:  mov    %esp,%ebp
081e046f +0x03:  push   %ebx
081e0470 +0x04:  sub    $0x24,%esp
081e0473 +0x07:  cmpl   $0x0,0xc(%ebp)
081e0477 +0x0b:  jne    081e0480 <+0x14>
081e0479 +0x0d:  mov    $0xffffffff,%eax
081e047e +0x12:  jmp    081e04eb <+0x7f>
081e0480 +0x14:  mov    0xc(%ebp),%eax
081e0483 +0x17:  mov    %eax,(%esp)
081e0486 +0x1a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e048b +0x1f:  cmp    $0x5,%eax
081e048e +0x22:  setne  %al
081e0491 +0x25:  test   %al,%al
081e0493 +0x27:  je     081e049c <+0x30>
081e0495 +0x29:  mov    $0x7fffffff,%eax
081e049a +0x2e:  jmp    081e04eb <+0x7f>
081e049c +0x30:  mov    0xc(%ebp),%eax
081e049f +0x33:  mov    %eax,(%esp)
081e04a2 +0x36:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081e04a7 +0x3b:  movswl %ax,%ebx
081e04aa +0x3e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081e04af +0x43:  mov    %ebx,0x4(%esp)
081e04b3 +0x47:  mov    %eax,(%esp)
081e04b6 +0x4a:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081e04bb +0x4f:  mov    %eax,-0xc(%ebp)
081e04be +0x52:  cmpl   $0x0,-0xc(%ebp)
081e04c2 +0x56:  jne    081e04cb <+0x5f>
081e04c4 +0x58:  mov    $0xffffffff,%eax
081e04c9 +0x5d:  jmp    081e04eb <+0x7f>
081e04cb +0x5f:  mov    -0xc(%ebp),%eax
081e04ce +0x62:  mov    %eax,(%esp)
081e04d1 +0x65:  call   085bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>  ; CParty::GetTournamentDungeonClearState()
081e04d6 +0x6a:  cmp    $0x2,%al
081e04d8 +0x6c:  setne  %al
081e04db +0x6f:  test   %al,%al
081e04dd +0x71:  je     081e04e6 <+0x7a>
081e04df +0x73:  mov    $0x7fffffff,%eax
081e04e4 +0x78:  jmp    081e04eb <+0x7f>
081e04e6 +0x7a:  mov    $0x0,%eax
081e04eb +0x7f:  add    $0x24,%esp
081e04ee +0x82:  pop    %ebx
081e04ef +0x83:  pop    %ebp
081e04f0 +0x84:  ret
081e04f1 +0x85:  nop
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelect::check_error @ 0x81e046c

/* Dispatcher_TournamentRewardSelect::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_TournamentRewardSelect::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CParty *this;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 5) {
      CUser::GetPartyIndex((CUser *)param_2);
      iVar3 = G_CGameManager();
      this = (CParty *)CGameManager::GetParty(iVar3);
      if (this == (CParty *)0x0) {
        uVar2 = 0xffffffff;
      }
      else {
        cVar1 = CParty::GetTournamentDungeonClearState(this);
        if (cVar1 == '\x02') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x7fffffff;
        }
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
  }
  return uVar2;
}
```

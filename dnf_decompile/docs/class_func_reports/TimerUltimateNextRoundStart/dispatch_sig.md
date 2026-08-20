# dispatch_sig

`_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij`

`TimerUltimateNextRoundStart::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerUltimateNextRoundStart` | `0x08638d2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638d2c  _ZN27TimerUltimateNextRoundStart12dispatch_sigEiij
#           TimerUltimateNextRoundStart::dispatch_sig(int, int, unsigned int)
# range [0x08638d2c, 0x08638e77]
08638d2c +0x000:  push   %ebp
08638d2d +0x001:  mov    %esp,%ebp
08638d2f +0x003:  push   %ebx
08638d30 +0x004:  sub    $0x24,%esp
08638d33 +0x007:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08638d38 +0x00c:  mov    0xc(%ebp),%edx
08638d3b +0x00f:  mov    %edx,0x4(%esp)
08638d3f +0x013:  mov    %eax,(%esp)
08638d42 +0x016:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08638d47 +0x01b:  mov    %eax,-0x10(%ebp)
08638d4a +0x01e:  cmpl   $0x0,-0x10(%ebp)
08638d4e +0x022:  jne    08638d5a <+0x2e>
08638d50 +0x024:  mov    $0x0,%eax
08638d55 +0x029:  jmp    08638e71 <+0x145>
08638d5a +0x02e:  mov    0x10(%ebp),%eax
08638d5d +0x031:  mov    %eax,0x8(%esp)
08638d61 +0x035:  mov    0x14(%ebp),%eax
08638d64 +0x038:  mov    %eax,0x4(%esp)
08638d68 +0x03c:  mov    -0x10(%ebp),%eax
08638d6b +0x03f:  mov    %eax,(%esp)
08638d6e +0x042:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08638d73 +0x047:  xor    $0x1,%eax
08638d76 +0x04a:  test   %al,%al
08638d78 +0x04c:  je     08638d84 <+0x58>
08638d7a +0x04e:  mov    $0x0,%eax
08638d7f +0x053:  jmp    08638e71 <+0x145>
08638d84 +0x058:  mov    -0x10(%ebp),%eax
08638d87 +0x05b:  mov    0xcac(%eax),%eax
08638d8d +0x061:  test   %eax,%eax
08638d8f +0x063:  je     08638daf <+0x83>
08638d91 +0x065:  mov    -0x10(%ebp),%eax
08638d94 +0x068:  mov    0xcac(%eax),%eax
08638d9a +0x06e:  movzbl 0x89f(%eax),%eax
08638da1 +0x075:  cmp    $0x2,%al
08638da3 +0x077:  je     08638daf <+0x83>
08638da5 +0x079:  mov    $0x0,%eax
08638daa +0x07e:  jmp    08638e71 <+0x145>
08638daf +0x083:  mov    -0x10(%ebp),%eax
08638db2 +0x086:  add    $0xb24,%eax
08638db7 +0x08b:  mov    %eax,(%esp)
08638dba +0x08e:  call   0822d02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26d8
08638dbf +0x093:  test   %al,%al
08638dc1 +0x095:  setne  %al
08638dc4 +0x098:  test   %al,%al
08638dc6 +0x09a:  je     08638dd2 <+0xa6>
08638dc8 +0x09c:  mov    $0x0,%eax
08638dcd +0x0a1:  jmp    08638e71 <+0x145>
08638dd2 +0x0a6:  mov    -0x10(%ebp),%eax
08638dd5 +0x0a9:  add    $0xb24,%eax
08638dda +0x0ae:  mov    %eax,(%esp)
08638ddd +0x0b1:  call   08306156 <_ZN13CBattle_Field28getNextRoundRandomDifficultyEv>  ; CBattle_Field::getNextRoundRandomDifficulty()
08638de2 +0x0b6:  mov    %eax,-0xc(%ebp)
08638de5 +0x0b9:  mov    -0xc(%ebp),%eax
08638de8 +0x0bc:  movsbl %al,%eax
08638deb +0x0bf:  mov    -0x10(%ebp),%edx
08638dee +0x0c2:  add    $0xb24,%edx
08638df4 +0x0c8:  mov    %eax,0x4(%esp)
08638df8 +0x0cc:  mov    %edx,(%esp)
08638dfb +0x0cf:  call   0822d012 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26bc
08638e00 +0x0d4:  mov    -0x10(%ebp),%eax
08638e03 +0x0d7:  add    $0xdd0,%eax
08638e08 +0x0dc:  mov    %eax,(%esp)
08638e0b +0x0df:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
08638e10 +0x0e4:  movswl %ax,%ebx
08638e13 +0x0e7:  mov    -0x10(%ebp),%eax
08638e16 +0x0ea:  add    $0xb24,%eax
08638e1b +0x0ef:  mov    %eax,(%esp)
08638e1e +0x0f2:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
08638e23 +0x0f7:  sub    $0x1,%eax
08638e26 +0x0fa:  cmp    %eax,%ebx
08638e28 +0x0fc:  setne  %al
08638e2b +0x0ff:  test   %al,%al
08638e2d +0x101:  je     08638e5c <+0x130>
08638e2f +0x103:  mov    -0x10(%ebp),%eax
08638e32 +0x106:  add    $0xdd0,%eax
08638e37 +0x10b:  mov    %eax,(%esp)
08638e3a +0x10e:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
08638e3f +0x113:  cwtl
08638e40 +0x114:  mov    -0x10(%ebp),%edx
08638e43 +0x117:  add    $0xb24,%edx
08638e49 +0x11d:  mov    %eax,0x8(%esp)
08638e4d +0x121:  mov    -0xc(%ebp),%eax
08638e50 +0x124:  mov    %eax,0x4(%esp)
08638e54 +0x128:  mov    %edx,(%esp)
08638e57 +0x12b:  call   08306436 <_ZN13CBattle_Field28sendUltimateRandomDifficultyEii>  ; CBattle_Field::sendUltimateRandomDifficulty(int, int)
08638e5c +0x130:  mov    -0x10(%ebp),%eax
08638e5f +0x133:  add    $0xb24,%eax
08638e64 +0x138:  mov    %eax,(%esp)
08638e67 +0x13b:  call   083064de <_ZN13CBattle_Field18startUltimateRoundEv>  ; CBattle_Field::startUltimateRound()
08638e6c +0x140:  mov    $0x1,%eax
08638e71 +0x145:  add    $0x24,%esp
08638e74 +0x148:  pop    %ebx
08638e75 +0x149:  pop    %ebp
08638e76 +0x14a:  ret
08638e77 +0x14b:  nop
```

## 反编译 C

```c
// TimerUltimateNextRoundStart::dispatch_sig @ 0x8638d2c

/* TimerUltimateNextRoundStart::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerUltimateNextRoundStart::dispatch_sig
          (TimerUltimateNextRoundStart *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  CParty *pCVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar3 = G_CGameManager();
  pCVar4 = (CParty *)CGameManager::GetParty(iVar3);
  if (pCVar4 == (CParty *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar4,param_3,param_2);
    if (cVar1 == '\x01') {
      if ((*(int *)(pCVar4 + 0xcac) == 0) || (*(char *)(*(int *)(pCVar4 + 0xcac) + 0x89f) == '\x02')
         ) {
        cVar1 = CBattle_Field::getUltimateDifficylty((CBattle_Field *)(pCVar4 + 0xb24));
        if (cVar1 == '\0') {
          iVar3 = CBattle_Field::getNextRoundRandomDifficulty((CBattle_Field *)(pCVar4 + 0xb24));
          CBattle_Field::setUltimateDifficulty((CBattle_Field *)(pCVar4 + 0xb24),(char)iVar3);
          sVar2 = CBattle_Field::CBloodRound::getBloodRoundOrder((CBloodRound *)(pCVar4 + 0xdd0));
          iVar6 = CBattle_Field::getBloodMaxRound((CBattle_Field *)(pCVar4 + 0xb24));
          if ((int)sVar2 != iVar6 + -1) {
            sVar2 = CBattle_Field::CBloodRound::getBloodRoundOrder((CBloodRound *)(pCVar4 + 0xdd0));
            CBattle_Field::sendUltimateRandomDifficulty
                      ((CBattle_Field *)(pCVar4 + 0xb24),iVar3,(int)sVar2);
          }
          CBattle_Field::startUltimateRound((CBattle_Field *)(pCVar4 + 0xb24));
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```

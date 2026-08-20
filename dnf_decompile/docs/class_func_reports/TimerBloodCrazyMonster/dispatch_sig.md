# dispatch_sig

`_ZN22TimerBloodCrazyMonster12dispatch_sigEiij`

`TimerBloodCrazyMonster::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodCrazyMonster` | `0x086356a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086356a0  _ZN22TimerBloodCrazyMonster12dispatch_sigEiij
#           TimerBloodCrazyMonster::dispatch_sig(int, int, unsigned int)
# range [0x086356a0, 0x08635709]
086356a0 +0x00:  push   %ebp
086356a1 +0x01:  mov    %esp,%ebp
086356a3 +0x03:  sub    $0x28,%esp
086356a6 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086356ab +0x0b:  mov    0xc(%ebp),%edx
086356ae +0x0e:  mov    %edx,0x4(%esp)
086356b2 +0x12:  mov    %eax,(%esp)
086356b5 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086356ba +0x1a:  mov    %eax,-0xc(%ebp)
086356bd +0x1d:  cmpl   $0x0,-0xc(%ebp)
086356c1 +0x21:  jne    086356ca <+0x2a>
086356c3 +0x23:  mov    $0x0,%eax
086356c8 +0x28:  jmp    08635707 <+0x67>
086356ca +0x2a:  mov    0x10(%ebp),%eax
086356cd +0x2d:  mov    %eax,0x8(%esp)
086356d1 +0x31:  movl   $0x21,0x4(%esp)
086356d9 +0x39:  mov    -0xc(%ebp),%eax
086356dc +0x3c:  mov    %eax,(%esp)
086356df +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086356e4 +0x44:  xor    $0x1,%eax
086356e7 +0x47:  test   %al,%al
086356e9 +0x49:  je     086356f2 <+0x52>
086356eb +0x4b:  mov    $0x0,%eax
086356f0 +0x50:  jmp    08635707 <+0x67>
086356f2 +0x52:  mov    -0xc(%ebp),%eax
086356f5 +0x55:  add    $0xb24,%eax
086356fa +0x5a:  mov    %eax,(%esp)
086356fd +0x5d:  call   08305d0c <_ZN13CBattle_Field28BloodCrazyMonsterSpawnPacketEv>  ; CBattle_Field::BloodCrazyMonsterSpawnPacket()
08635702 +0x62:  mov    $0x1,%eax
08635707 +0x67:  leave
08635708 +0x68:  ret
08635709 +0x69:  nop
```

## 反编译 C

```c
// TimerBloodCrazyMonster::dispatch_sig @ 0x86356a0

/* TimerBloodCrazyMonster::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodCrazyMonster::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
  if (pCVar3 == (CParty *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar3,0x21,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodCrazyMonsterSpawnPacket((CBattle_Field *)(pCVar3 + 0xb24));
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

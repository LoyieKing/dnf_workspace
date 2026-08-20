# dispatch_sig

`_ZN28TimerBloodSmallRoundRegister12dispatch_sigEiij`

`TimerBloodSmallRoundRegister::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodSmallRoundRegister` | `0x08634fd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634fd2  _ZN28TimerBloodSmallRoundRegister12dispatch_sigEiij
#           TimerBloodSmallRoundRegister::dispatch_sig(int, int, unsigned int)
# range [0x08634fd2, 0x0863504b]
08634fd2 +0x00:  push   %ebp
08634fd3 +0x01:  mov    %esp,%ebp
08634fd5 +0x03:  sub    $0x28,%esp
08634fd8 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634fdd +0x0b:  mov    0xc(%ebp),%edx
08634fe0 +0x0e:  mov    %edx,0x4(%esp)
08634fe4 +0x12:  mov    %eax,(%esp)
08634fe7 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08634fec +0x1a:  mov    %eax,-0xc(%ebp)
08634fef +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634ff3 +0x21:  jne    08634ffc <+0x2a>
08634ff5 +0x23:  mov    $0x0,%eax
08634ffa +0x28:  jmp    08635049 <+0x77>
08634ffc +0x2a:  mov    0x10(%ebp),%eax
08634fff +0x2d:  mov    %eax,0x8(%esp)
08635003 +0x31:  movl   $0x16,0x4(%esp)
0863500b +0x39:  mov    -0xc(%ebp),%eax
0863500e +0x3c:  mov    %eax,(%esp)
08635011 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08635016 +0x44:  xor    $0x1,%eax
08635019 +0x47:  test   %al,%al
0863501b +0x49:  je     08635024 <+0x52>
0863501d +0x4b:  mov    $0x0,%eax
08635022 +0x50:  jmp    08635049 <+0x77>
08635024 +0x52:  mov    -0xc(%ebp),%eax
08635027 +0x55:  add    $0xb24,%eax
0863502c +0x5a:  movl   $0x1,0x8(%esp)
08635034 +0x62:  movl   $0x0,0x4(%esp)
0863503c +0x6a:  mov    %eax,(%esp)
0863503f +0x6d:  call   08304dd2 <_ZN13CBattle_Field22BloodSpawnTimerManagerEbb>  ; CBattle_Field::BloodSpawnTimerManager(bool, bool)
08635044 +0x72:  mov    $0x1,%eax
08635049 +0x77:  leave
0863504a +0x78:  ret
0863504b +0x79:  nop
```

## 反编译 C

```c
// TimerBloodSmallRoundRegister::dispatch_sig @ 0x8634fd2

/* TimerBloodSmallRoundRegister::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodSmallRoundRegister::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x16,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodSpawnTimerManager((CBattle_Field *)(pCVar3 + 0xb24),false,true);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

# dispatch_sig

`_ZN24TimerBloodPhaseRegister012dispatch_sigEiij`

`TimerBloodPhaseRegister0::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister0` | `0x0863504c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863504c  _ZN24TimerBloodPhaseRegister012dispatch_sigEiij
#           TimerBloodPhaseRegister0::dispatch_sig(int, int, unsigned int)
# range [0x0863504c, 0x086350ed]
0863504c +0x00:  push   %ebp
0863504d +0x01:  mov    %esp,%ebp
0863504f +0x03:  sub    $0x38,%esp
08635052 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635057 +0x0b:  mov    0xc(%ebp),%edx
0863505a +0x0e:  mov    %edx,0x4(%esp)
0863505e +0x12:  mov    %eax,(%esp)
08635061 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08635066 +0x1a:  mov    %eax,-0x14(%ebp)
08635069 +0x1d:  cmpl   $0x0,-0x14(%ebp)
0863506d +0x21:  jne    08635076 <+0x2a>
0863506f +0x23:  mov    $0x0,%eax
08635074 +0x28:  jmp    086350ec <+0xa0>
08635076 +0x2a:  mov    0x10(%ebp),%eax
08635079 +0x2d:  mov    %eax,0x8(%esp)
0863507d +0x31:  movl   $0x17,0x4(%esp)
08635085 +0x39:  mov    -0x14(%ebp),%eax
08635088 +0x3c:  mov    %eax,(%esp)
0863508b +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08635090 +0x44:  xor    $0x1,%eax
08635093 +0x47:  test   %al,%al
08635095 +0x49:  je     0863509e <+0x52>
08635097 +0x4b:  mov    $0x0,%eax
0863509c +0x50:  jmp    086350ec <+0xa0>
0863509e +0x52:  mov    -0x14(%ebp),%eax
086350a1 +0x55:  movzwl 0xd9c(%eax),%eax
086350a8 +0x5c:  mov    %ax,-0xe(%ebp)
086350ac +0x60:  mov    -0x14(%ebp),%eax
086350af +0x63:  add    $0xdb2,%eax
086350b4 +0x68:  mov    %eax,-0xc(%ebp)
086350b7 +0x6b:  movswl -0xe(%ebp),%eax
086350bb +0x6f:  mov    -0x14(%ebp),%edx
086350be +0x72:  lea    0xb24(%edx),%ecx
086350c4 +0x78:  movl   $0x0,0x10(%esp)
086350cc +0x80:  movl   $0x17,0xc(%esp)
086350d4 +0x88:  mov    -0xc(%ebp),%edx
086350d7 +0x8b:  mov    %edx,0x8(%esp)
086350db +0x8f:  mov    %eax,0x4(%esp)
086350df +0x93:  mov    %ecx,(%esp)
086350e2 +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
086350e7 +0x9b:  mov    $0x1,%eax
086350ec +0xa0:  leave
086350ed +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister0::dispatch_sig @ 0x863504c

/* TimerBloodPhaseRegister0::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister0::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x17,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xd9c),
                 (short *)(pCVar3 + 0xdb2),0x17,0);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

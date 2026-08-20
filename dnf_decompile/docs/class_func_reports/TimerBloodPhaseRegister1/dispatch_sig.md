# dispatch_sig

`_ZN24TimerBloodPhaseRegister112dispatch_sigEiij`

`TimerBloodPhaseRegister1::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister1` | `0x086350ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086350ee  _ZN24TimerBloodPhaseRegister112dispatch_sigEiij
#           TimerBloodPhaseRegister1::dispatch_sig(int, int, unsigned int)
# range [0x086350ee, 0x0863518f]
086350ee +0x00:  push   %ebp
086350ef +0x01:  mov    %esp,%ebp
086350f1 +0x03:  sub    $0x38,%esp
086350f4 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086350f9 +0x0b:  mov    0xc(%ebp),%edx
086350fc +0x0e:  mov    %edx,0x4(%esp)
08635100 +0x12:  mov    %eax,(%esp)
08635103 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08635108 +0x1a:  mov    %eax,-0x14(%ebp)
0863510b +0x1d:  cmpl   $0x0,-0x14(%ebp)
0863510f +0x21:  jne    08635118 <+0x2a>
08635111 +0x23:  mov    $0x0,%eax
08635116 +0x28:  jmp    0863518e <+0xa0>
08635118 +0x2a:  mov    0x10(%ebp),%eax
0863511b +0x2d:  mov    %eax,0x8(%esp)
0863511f +0x31:  movl   $0x18,0x4(%esp)
08635127 +0x39:  mov    -0x14(%ebp),%eax
0863512a +0x3c:  mov    %eax,(%esp)
0863512d +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08635132 +0x44:  xor    $0x1,%eax
08635135 +0x47:  test   %al,%al
08635137 +0x49:  je     08635140 <+0x52>
08635139 +0x4b:  mov    $0x0,%eax
0863513e +0x50:  jmp    0863518e <+0xa0>
08635140 +0x52:  mov    -0x14(%ebp),%eax
08635143 +0x55:  movzwl 0xd9e(%eax),%eax
0863514a +0x5c:  mov    %ax,-0xe(%ebp)
0863514e +0x60:  mov    -0x14(%ebp),%eax
08635151 +0x63:  add    $0xdb4,%eax
08635156 +0x68:  mov    %eax,-0xc(%ebp)
08635159 +0x6b:  movswl -0xe(%ebp),%eax
0863515d +0x6f:  mov    -0x14(%ebp),%edx
08635160 +0x72:  lea    0xb24(%edx),%ecx
08635166 +0x78:  movl   $0x1,0x10(%esp)
0863516e +0x80:  movl   $0x18,0xc(%esp)
08635176 +0x88:  mov    -0xc(%ebp),%edx
08635179 +0x8b:  mov    %edx,0x8(%esp)
0863517d +0x8f:  mov    %eax,0x4(%esp)
08635181 +0x93:  mov    %ecx,(%esp)
08635184 +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
08635189 +0x9b:  mov    $0x1,%eax
0863518e +0xa0:  leave
0863518f +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister1::dispatch_sig @ 0x86350ee

/* TimerBloodPhaseRegister1::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister1::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x18,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xd9e),
                 (short *)(pCVar3 + 0xdb4),0x18,1);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

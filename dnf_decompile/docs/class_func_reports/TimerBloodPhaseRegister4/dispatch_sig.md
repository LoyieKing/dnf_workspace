# dispatch_sig

`_ZN24TimerBloodPhaseRegister412dispatch_sigEiij`

`TimerBloodPhaseRegister4::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister4` | `0x086352d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086352d4  _ZN24TimerBloodPhaseRegister412dispatch_sigEiij
#           TimerBloodPhaseRegister4::dispatch_sig(int, int, unsigned int)
# range [0x086352d4, 0x08635375]
086352d4 +0x00:  push   %ebp
086352d5 +0x01:  mov    %esp,%ebp
086352d7 +0x03:  sub    $0x38,%esp
086352da +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086352df +0x0b:  mov    0xc(%ebp),%edx
086352e2 +0x0e:  mov    %edx,0x4(%esp)
086352e6 +0x12:  mov    %eax,(%esp)
086352e9 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086352ee +0x1a:  mov    %eax,-0x14(%ebp)
086352f1 +0x1d:  cmpl   $0x0,-0x14(%ebp)
086352f5 +0x21:  jne    086352fe <+0x2a>
086352f7 +0x23:  mov    $0x0,%eax
086352fc +0x28:  jmp    08635374 <+0xa0>
086352fe +0x2a:  mov    0x10(%ebp),%eax
08635301 +0x2d:  mov    %eax,0x8(%esp)
08635305 +0x31:  movl   $0x1b,0x4(%esp)
0863530d +0x39:  mov    -0x14(%ebp),%eax
08635310 +0x3c:  mov    %eax,(%esp)
08635313 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08635318 +0x44:  xor    $0x1,%eax
0863531b +0x47:  test   %al,%al
0863531d +0x49:  je     08635326 <+0x52>
0863531f +0x4b:  mov    $0x0,%eax
08635324 +0x50:  jmp    08635374 <+0xa0>
08635326 +0x52:  mov    -0x14(%ebp),%eax
08635329 +0x55:  movzwl 0xda4(%eax),%eax
08635330 +0x5c:  mov    %ax,-0xe(%ebp)
08635334 +0x60:  mov    -0x14(%ebp),%eax
08635337 +0x63:  add    $0xdba,%eax
0863533c +0x68:  mov    %eax,-0xc(%ebp)
0863533f +0x6b:  movswl -0xe(%ebp),%eax
08635343 +0x6f:  mov    -0x14(%ebp),%edx
08635346 +0x72:  lea    0xb24(%edx),%ecx
0863534c +0x78:  movl   $0x4,0x10(%esp)
08635354 +0x80:  movl   $0x1b,0xc(%esp)
0863535c +0x88:  mov    -0xc(%ebp),%edx
0863535f +0x8b:  mov    %edx,0x8(%esp)
08635363 +0x8f:  mov    %eax,0x4(%esp)
08635367 +0x93:  mov    %ecx,(%esp)
0863536a +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
0863536f +0x9b:  mov    $0x1,%eax
08635374 +0xa0:  leave
08635375 +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister4::dispatch_sig @ 0x86352d4

/* TimerBloodPhaseRegister4::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister4::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1b,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda4),
                 (short *)(pCVar3 + 0xdba),0x1b,4);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

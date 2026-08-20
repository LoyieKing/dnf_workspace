# dispatch_sig

`_ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij`

`TimerVillageAttackedPlayTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerVillageAttackedPlayTimeout` | `0x0863905c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863905c  _ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij
#           TimerVillageAttackedPlayTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863905c, 0x086390e9]
0863905c +0x00:  push   %ebp
0863905d +0x01:  mov    %esp,%ebp
0863905f +0x03:  sub    $0x28,%esp
08639062 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08639067 +0x0b:  mov    0xc(%ebp),%edx
0863906a +0x0e:  mov    %edx,0x4(%esp)
0863906e +0x12:  mov    %eax,(%esp)
08639071 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08639076 +0x1a:  mov    %eax,-0xc(%ebp)
08639079 +0x1d:  cmpl   $0x0,-0xc(%ebp)
0863907d +0x21:  jne    08639086 <+0x2a>
0863907f +0x23:  mov    $0x0,%eax
08639084 +0x28:  jmp    086390e7 <+0x8b>
08639086 +0x2a:  mov    0x10(%ebp),%eax
08639089 +0x2d:  mov    %eax,0x8(%esp)
0863908d +0x31:  movl   $0x27,0x4(%esp)
08639095 +0x39:  mov    -0xc(%ebp),%eax
08639098 +0x3c:  mov    %eax,(%esp)
0863909b +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086390a0 +0x44:  xor    $0x1,%eax
086390a3 +0x47:  test   %al,%al
086390a5 +0x49:  je     086390ae <+0x52>
086390a7 +0x4b:  mov    $0x0,%eax
086390ac +0x50:  jmp    086390e7 <+0x8b>
086390ae +0x52:  mov    -0xc(%ebp),%eax
086390b1 +0x55:  movzwl 0xc4c(%eax),%eax
086390b8 +0x5c:  movzwl %ax,%eax
086390bb +0x5f:  cmp    0x14(%ebp),%eax
086390be +0x62:  je     086390c7 <+0x6b>
086390c0 +0x64:  mov    $0x0,%eax
086390c5 +0x69:  jmp    086390e7 <+0x8b>
086390c7 +0x6b:  movl   $0x1,0x8(%esp)
086390cf +0x73:  movl   $0x0,0x4(%esp)
086390d7 +0x7b:  mov    -0xc(%ebp),%eax
086390da +0x7e:  mov    %eax,(%esp)
086390dd +0x81:  call   085b99ac <_ZN6CParty30OnFinishVillageMonsterFightingEP5CUserb>  ; CParty::OnFinishVillageMonsterFighting(CUser*, bool)
086390e2 +0x86:  mov    $0x1,%eax
086390e7 +0x8b:  leave
086390e8 +0x8c:  ret
086390e9 +0x8d:  nop
```

## 反编译 C

```c
// TimerVillageAttackedPlayTimeout::dispatch_sig @ 0x863905c

/* TimerVillageAttackedPlayTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerVillageAttackedPlayTimeout::dispatch_sig
          (TimerVillageAttackedPlayTimeout *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this_00;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this_00 = (CParty *)CGameManager::GetParty(iVar2);
  if (this_00 == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this_00,0x27,param_2);
    if (cVar1 == '\x01') {
      if (*(ushort *)(this_00 + 0xc4c) == param_3) {
        CParty::OnFinishVillageMonsterFighting(this_00,(CUser *)0x0,true);
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

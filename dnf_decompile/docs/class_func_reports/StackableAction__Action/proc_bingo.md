# proc_bingo

`_ZN15StackableAction6Action10proc_bingoERNS_11input_paramE`

`StackableAction::Action::proc_bingo(StackableAction::input_param&)`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827fb14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827fb14  _ZN15StackableAction6Action10proc_bingoERNS_11input_paramE
#           StackableAction::Action::proc_bingo(StackableAction::input_param&)
# range [0x0827fb14, 0x0827fb85]
0827fb14 +0x00:  push   %ebp
0827fb15 +0x01:  mov    %esp,%ebp
0827fb17 +0x03:  sub    $0x28,%esp
0827fb1a +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0827fb1f +0x0b:  movl   $0x6a,0x4(%esp)
0827fb27 +0x13:  mov    %eax,(%esp)
0827fb2a +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0827fb2f +0x1b:  mov    (%eax),%edx
0827fb31 +0x1d:  add    $0x34,%edx
0827fb34 +0x20:  mov    (%edx),%edx
0827fb36 +0x22:  movl   $0x0,0x4(%esp)
0827fb3e +0x2a:  mov    %eax,(%esp)
0827fb41 +0x2d:  call   *%edx
0827fb43 +0x2f:  test   %al,%al
0827fb45 +0x31:  je     0827fb7f <+0x6b>
0827fb47 +0x33:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0827fb4c +0x38:  movl   $0x6a,0x4(%esp)
0827fb54 +0x40:  mov    %eax,(%esp)
0827fb57 +0x43:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0827fb5c +0x48:  mov    %eax,-0x10(%ebp)
0827fb5f +0x4b:  cmpl   $0x0,-0x10(%ebp)
0827fb63 +0x4f:  je     0827fb7f <+0x6b>
0827fb65 +0x51:  mov    0xc(%ebp),%eax
0827fb68 +0x54:  mov    %eax,0x4(%esp)
0827fb6c +0x58:  mov    -0x10(%ebp),%eax
0827fb6f +0x5b:  mov    %eax,(%esp)
0827fb72 +0x5e:  call   080c9ff6 <_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE>  ; BingoEvent::reqBingoMark(StackableAction::input_param&)
0827fb77 +0x63:  mov    %eax,-0xc(%ebp)
0827fb7a +0x66:  mov    -0xc(%ebp),%eax
0827fb7d +0x69:  jmp    0827fb84 <+0x70>
0827fb7f +0x6b:  mov    $0x13,%eax
0827fb84 +0x70:  leave
0827fb85 +0x71:  ret
```

## 反编译 C

```c
// StackableAction::Action::proc_bingo @ 0x827fb14

/* StackableAction::Action::proc_bingo(StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::proc_bingo(Action *this,input_param *param_1)

{
  char cVar1;
  int *piVar2;
  BingoEvent *this_00;
  undefined4 uVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if ((cVar1 != '\0') &&
     (this_00 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a),
     this_00 != (BingoEvent *)0x0)) {
    uVar3 = BingoEvent::reqBingoMark(this_00,param_1);
    return uVar3;
  }
  return 0x13;
}
```

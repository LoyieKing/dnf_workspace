# proc_lotteryCount

`_ZN15StackableAction6Action17proc_lotteryCountERNS_11input_paramE`

`StackableAction::Action::proc_lotteryCount(StackableAction::input_param&)`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827fb86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827fb86  _ZN15StackableAction6Action17proc_lotteryCountERNS_11input_paramE
#           StackableAction::Action::proc_lotteryCount(StackableAction::input_param&)
# range [0x0827fb86, 0x0827fbd5]
0827fb86 +0x00:  push   %ebp
0827fb87 +0x01:  mov    %esp,%ebp
0827fb89 +0x03:  sub    $0x18,%esp
0827fb8c +0x06:  mov    0xc(%ebp),%eax
0827fb8f +0x09:  mov    0x8(%eax),%eax
0827fb92 +0x0c:  test   %eax,%eax
0827fb94 +0x0e:  je     0827fbcf <+0x49>
0827fb96 +0x10:  mov    0xc(%ebp),%eax
0827fb99 +0x13:  mov    0xc(%eax),%eax
0827fb9c +0x16:  test   %eax,%eax
0827fb9e +0x18:  je     0827fbcf <+0x49>
0827fba0 +0x1a:  mov    0xc(%ebp),%eax
0827fba3 +0x1d:  mov    0xc(%eax),%eax
0827fba6 +0x20:  mov    %eax,(%esp)
0827fba9 +0x23:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0827fbae +0x28:  mov    0xc(%ebp),%edx
0827fbb1 +0x2b:  mov    0x8(%edx),%edx
0827fbb4 +0x2e:  movl   $0x0,0x8(%esp)
0827fbbc +0x36:  mov    %eax,0x4(%esp)
0827fbc0 +0x3a:  mov    %edx,(%esp)
0827fbc3 +0x3d:  call   0869154a <_ZN5CUser20giveLotteryCountItemEib>  ; CUser::giveLotteryCountItem(int, bool)
0827fbc8 +0x42:  mov    $0x0,%eax
0827fbcd +0x47:  jmp    0827fbd4 <+0x4e>
0827fbcf +0x49:  mov    $0x13,%eax
0827fbd4 +0x4e:  leave
0827fbd5 +0x4f:  ret
```

## 反编译 C

```c
// StackableAction::Action::proc_lotteryCount @ 0x827fb86

/* StackableAction::Action::proc_lotteryCount(StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::proc_lotteryCount(Action *this,input_param *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    uVar2 = 0x13;
  }
  else {
    iVar1 = CItem::get_index(*(CItem **)(param_1 + 0xc));
    CUser::giveLotteryCountItem(*(CUser **)(param_1 + 8),iVar1,false);
    uVar2 = 0;
  }
  return uVar2;
}
```

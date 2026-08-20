# end_pvp_result

`_ZN8PvP_Room14end_pvp_resultEv`

`PvP_Room::end_pvp_result()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dca48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dca48  _ZN8PvP_Room14end_pvp_resultEv
#           PvP_Room::end_pvp_result()
# range [0x085dca48, 0x085dcab9]
085dca48 +0x00:  push   %ebp
085dca49 +0x01:  mov    %esp,%ebp
085dca4b +0x03:  sub    $0x28,%esp
085dca4e +0x06:  mov    0x8(%ebp),%eax
085dca51 +0x09:  mov    %eax,(%esp)
085dca54 +0x0c:  call   085d7df0 <_ZN8PvP_Room24change_manager_to_winnerEv>  ; PvP_Room::change_manager_to_winner()
085dca59 +0x11:  mov    0x8(%ebp),%eax
085dca5c +0x14:  movl   $0x1,0xb8(%eax)
085dca66 +0x1e:  movl   $0x0,-0xc(%ebp)
085dca6d +0x25:  jmp    085dcaa2 <+0x5a>
085dca6f +0x27:  mov    -0xc(%ebp),%edx
085dca72 +0x2a:  mov    0x8(%ebp),%eax
085dca75 +0x2d:  add    $0xc,%edx
085dca78 +0x30:  mov    (%eax,%edx,4),%eax
085dca7b +0x33:  test   %eax,%eax
085dca7d +0x35:  je     085dca9d <+0x55>
085dca7f +0x37:  mov    -0xc(%ebp),%edx
085dca82 +0x3a:  mov    0x8(%ebp),%eax
085dca85 +0x3d:  add    $0xc,%edx
085dca88 +0x40:  mov    (%eax,%edx,4),%eax
085dca8b +0x43:  movl   $0x6,0x4(%esp)
085dca93 +0x4b:  mov    %eax,(%esp)
085dca96 +0x4e:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
085dca9b +0x53:  jmp    085dca9e <+0x56>
085dca9d +0x55:  nop
085dca9e +0x56:  addl   $0x1,-0xc(%ebp)
085dcaa2 +0x5a:  cmpl   $0x7,-0xc(%ebp)
085dcaa6 +0x5e:  setle  %al
085dcaa9 +0x61:  test   %al,%al
085dcaab +0x63:  jne    085dca6f <+0x27>
085dcaad +0x65:  mov    0x8(%ebp),%eax
085dcab0 +0x68:  mov    %eax,(%esp)
085dcab3 +0x6b:  call   085dcaba <_ZN8PvP_Room23SkipLastRankResultTimerEv>  ; PvP_Room::SkipLastRankResultTimer()
085dcab8 +0x70:  leave
085dcab9 +0x71:  ret
```

## 反编译 C

```c
// PvP_Room::end_pvp_result @ 0x85dca48

/* PvP_Room::end_pvp_result() */

void __thiscall PvP_Room::end_pvp_result(PvP_Room *this)

{
  int local_10;
  
  change_manager_to_winner(this);
  *(undefined4 *)(this + 0xb8) = 1;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      CUser::set_state(*(CUser **)(this + (local_10 + 0xc) * 4),6);
    }
  }
  SkipLastRankResultTimer(this);
  return;
}
```

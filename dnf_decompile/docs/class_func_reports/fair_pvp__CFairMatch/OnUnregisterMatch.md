# OnUnregisterMatch

`_ZN8fair_pvp10CFairMatch17OnUnregisterMatchEP5CUserP8PvP_Room`

`fair_pvp::CFairMatch::OnUnregisterMatch(CUser*, PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563cc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563cc6  _ZN8fair_pvp10CFairMatch17OnUnregisterMatchEP5CUserP8PvP_Room
#           fair_pvp::CFairMatch::OnUnregisterMatch(CUser*, PvP_Room*)
# range [0x08563cc6, 0x08563d31]
08563cc6 +0x00:  push   %ebp
08563cc7 +0x01:  mov    %esp,%ebp
08563cc9 +0x03:  sub    $0x18,%esp
08563ccc +0x06:  mov    0x8(%ebp),%eax
08563ccf +0x09:  mov    0x4(%eax),%eax
08563cd2 +0x0c:  cmp    $0x1,%eax
08563cd5 +0x0f:  je     08563ce9 <+0x23>
08563cd7 +0x11:  mov    0x8(%ebp),%eax
08563cda +0x14:  mov    0x4(%eax),%eax
08563cdd +0x17:  cmp    $0x2,%eax
08563ce0 +0x1a:  je     08563ce9 <+0x23>
08563ce2 +0x1c:  mov    $0x0,%eax
08563ce7 +0x21:  jmp    08563d30 <+0x6a>
08563ce9 +0x23:  mov    0x8(%ebp),%eax
08563cec +0x26:  movl   $0x0,0x4(%eax)
08563cf3 +0x2d:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08563cf8 +0x32:  mov    (%eax),%eax
08563cfa +0x34:  add    $0x4,%eax
08563cfd +0x37:  mov    (%eax),%ecx
08563cff +0x39:  mov    0x8(%ebp),%edx
08563d02 +0x3c:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08563d07 +0x41:  mov    %edx,0x4(%esp)
08563d0b +0x45:  mov    %eax,(%esp)
08563d0e +0x48:  call   *%ecx
08563d10 +0x4a:  movl   $0x1,0x8(%esp)
08563d18 +0x52:  movl   $0x5,0x4(%esp)
08563d20 +0x5a:  mov    0x8(%ebp),%eax
08563d23 +0x5d:  mov    %eax,(%esp)
08563d26 +0x60:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
08563d2b +0x65:  mov    $0x1,%eax
08563d30 +0x6a:  leave
08563d31 +0x6b:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnUnregisterMatch @ 0x8563cc6

/* fair_pvp::CFairMatch::OnUnregisterMatch(CUser*, PvP_Room*) */

undefined4 fair_pvp::CFairMatch::OnUnregisterMatch(CUser *param_1,PvP_Room *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 4) == 1) || (*(int *)(param_1 + 4) == 2)) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
    _SendMatchStatePacket((CFairMatch *)param_1,5,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

# OnJoinRoom

`_ZN8fair_pvp10CFairMatch10OnJoinRoomEP5CUser`

`fair_pvp::CFairMatch::OnJoinRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562df6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562df6  _ZN8fair_pvp10CFairMatch10OnJoinRoomEP5CUser
#           fair_pvp::CFairMatch::OnJoinRoom(CUser*)
# range [0x08562df6, 0x08562e1d]
08562df6 +0x00:  push   %ebp
08562df7 +0x01:  mov    %esp,%ebp
08562df9 +0x03:  sub    $0x18,%esp
08562dfc +0x06:  mov    0x8(%ebp),%eax
08562dff +0x09:  mov    0x4(%eax),%eax
08562e02 +0x0c:  cmp    $0x3,%eax
08562e05 +0x0f:  je     08562e1c <+0x26>
08562e07 +0x11:  mov    0x8(%ebp),%eax
08562e0a +0x14:  lea    0x1c(%eax),%edx
08562e0d +0x17:  mov    0xc(%ebp),%eax
08562e10 +0x1a:  mov    %eax,0x4(%esp)
08562e14 +0x1e:  mov    %edx,(%esp)
08562e17 +0x21:  call   085625c6 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser>  ; fair_pvp::TeamInfoThird::add(CUser*)
08562e1c +0x26:  leave
08562e1d +0x27:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnJoinRoom @ 0x8562df6

/* fair_pvp::CFairMatch::OnJoinRoom(CUser*) */

void __thiscall fair_pvp::CFairMatch::OnJoinRoom(CFairMatch *this,CUser *param_1)

{
  if (*(int *)(this + 4) != 3) {
    TeamInfoThird::add((TeamInfoThird *)(this + 0x1c),param_1);
  }
  return;
}
```

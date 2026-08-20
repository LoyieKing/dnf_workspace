# SendToTeam

`_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard`

`fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `fair_pvp::TeamInfoThird` | `0x0856274c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856274c  _ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard
#           fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
# range [0x0856274c, 0x085627b1]
0856274c +0x00:  push   %ebp
0856274d +0x01:  mov    %esp,%ebp
0856274f +0x03:  sub    $0x28,%esp
08562752 +0x06:  movl   $0x0,-0xc(%ebp)
08562759 +0x0d:  jmp    085627a4 <+0x58>
0856275b +0x0f:  mov    -0xc(%ebp),%edx
0856275e +0x12:  mov    0x8(%ebp),%eax
08562761 +0x15:  shl    $0x4,%edx
08562764 +0x18:  movzbl 0xc(%edx,%eax,1),%eax
08562769 +0x1d:  test   %al,%al
0856276b +0x1f:  je     085627a0 <+0x54>
0856276d +0x21:  mov    -0xc(%ebp),%edx
08562770 +0x24:  mov    0x8(%ebp),%eax
08562773 +0x27:  shl    $0x4,%edx
08562776 +0x2a:  add    %edx,%eax
08562778 +0x2c:  add    $0x8,%eax
0856277b +0x2f:  mov    (%eax),%eax
0856277d +0x31:  test   %eax,%eax
0856277f +0x33:  je     085627a0 <+0x54>
08562781 +0x35:  mov    -0xc(%ebp),%edx
08562784 +0x38:  mov    0x8(%ebp),%eax
08562787 +0x3b:  shl    $0x4,%edx
0856278a +0x3e:  add    %edx,%eax
0856278c +0x40:  add    $0x8,%eax
0856278f +0x43:  mov    (%eax),%eax
08562791 +0x45:  mov    0xc(%ebp),%edx
08562794 +0x48:  mov    %edx,0x4(%esp)
08562798 +0x4c:  mov    %eax,(%esp)
0856279b +0x4f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085627a0 +0x54:  addl   $0x1,-0xc(%ebp)
085627a4 +0x58:  cmpl   $0x3,-0xc(%ebp)
085627a8 +0x5c:  setle  %al
085627ab +0x5f:  test   %al,%al
085627ad +0x61:  jne    0856275b <+0xf>
085627af +0x63:  leave
085627b0 +0x64:  ret
085627b1 +0x65:  nop
```

## 反编译 C

```c
// fair_pvp::TeamInfoThird::SendToTeam @ 0x856274c

/* fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&) */

void __thiscall fair_pvp::TeamInfoThird::SendToTeam(TeamInfoThird *this,PacketGuard *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[local_10 * 0x10 + 0xc] != (TeamInfoThird)0x0) &&
       (*(int *)(this + local_10 * 0x10 + 8) != 0)) {
      CUser::Send(*(CUser **)(this + local_10 * 0x10 + 8),param_1);
    }
  }
  return;
}
```

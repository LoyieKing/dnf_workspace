# send_to_pvp

`_ZN8PvP_Room11send_to_pvpER11PacketGuard`

`PvP_Room::send_to_pvp(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dbe18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dbe18  _ZN8PvP_Room11send_to_pvpER11PacketGuard
#           PvP_Room::send_to_pvp(PacketGuard&)
# range [0x085dbe18, 0x085dbe63]
085dbe18 +0x00:  push   %ebp
085dbe19 +0x01:  mov    %esp,%ebp
085dbe1b +0x03:  sub    $0x28,%esp
085dbe1e +0x06:  movl   $0x0,-0xc(%ebp)
085dbe25 +0x0d:  jmp    085dbe56 <+0x3e>
085dbe27 +0x0f:  mov    -0xc(%ebp),%edx
085dbe2a +0x12:  mov    0x8(%ebp),%eax
085dbe2d +0x15:  add    $0xc,%edx
085dbe30 +0x18:  mov    (%eax,%edx,4),%eax
085dbe33 +0x1b:  test   %eax,%eax
085dbe35 +0x1d:  je     085dbe52 <+0x3a>
085dbe37 +0x1f:  mov    -0xc(%ebp),%edx
085dbe3a +0x22:  mov    0x8(%ebp),%eax
085dbe3d +0x25:  add    $0xc,%edx
085dbe40 +0x28:  mov    (%eax,%edx,4),%eax
085dbe43 +0x2b:  mov    0xc(%ebp),%edx
085dbe46 +0x2e:  mov    %edx,0x4(%esp)
085dbe4a +0x32:  mov    %eax,(%esp)
085dbe4d +0x35:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085dbe52 +0x3a:  addl   $0x1,-0xc(%ebp)
085dbe56 +0x3e:  cmpl   $0x7,-0xc(%ebp)
085dbe5a +0x42:  setle  %al
085dbe5d +0x45:  test   %al,%al
085dbe5f +0x47:  jne    085dbe27 <+0xf>
085dbe61 +0x49:  leave
085dbe62 +0x4a:  ret
085dbe63 +0x4b:  nop
```

## 反编译 C

```c
// PvP_Room::send_to_pvp @ 0x85dbe18

/* PvP_Room::send_to_pvp(PacketGuard&) */

void __thiscall PvP_Room::send_to_pvp(PvP_Room *this,PacketGuard *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      CUser::Send(*(CUser **)(this + (local_10 + 0xc) * 4),param_1);
    }
  }
  return;
}
```

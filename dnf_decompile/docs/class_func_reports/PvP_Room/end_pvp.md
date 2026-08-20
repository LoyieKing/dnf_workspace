# end_pvp

`_ZN8PvP_Room7end_pvpEv`

`PvP_Room::end_pvp()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d92fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d92fc  _ZN8PvP_Room7end_pvpEv
#           PvP_Room::end_pvp()
# range [0x085d92fc, 0x085d9329]
085d92fc +0x00:  push   %ebp
085d92fd +0x01:  mov    %esp,%ebp
085d92ff +0x03:  sub    $0x18,%esp
085d9302 +0x06:  mov    0x8(%ebp),%eax
085d9305 +0x09:  mov    0x6e4(%eax),%eax
085d930b +0x0f:  mov    (%eax),%eax
085d930d +0x11:  add    $0x40,%eax
085d9310 +0x14:  mov    (%eax),%ecx
085d9312 +0x16:  mov    0x8(%ebp),%eax
085d9315 +0x19:  mov    0x6e4(%eax),%eax
085d931b +0x1f:  mov    0x8(%ebp),%edx
085d931e +0x22:  mov    %edx,0x4(%esp)
085d9322 +0x26:  mov    %eax,(%esp)
085d9325 +0x29:  call   *%ecx
085d9327 +0x2b:  leave
085d9328 +0x2c:  ret
085d9329 +0x2d:  nop
```

## 反编译 C

```c
// PvP_Room::end_pvp @ 0x85d92fc

/* PvP_Room::end_pvp() */

void __thiscall PvP_Room::end_pvp(PvP_Room *this)

{
  (**(code **)(**(int **)(this + 0x6e4) + 0x40))(*(undefined4 *)(this + 0x6e4),this);
  return;
}
```

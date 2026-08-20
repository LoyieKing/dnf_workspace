# is_last_win

`_ZN8PvP_Room11is_last_winEi`

`PvP_Room::is_last_win(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d7d9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d7d9c  _ZN8PvP_Room11is_last_winEi
#           PvP_Room::is_last_win(int)
# range [0x085d7d9c, 0x085d7def]
085d7d9c +0x00:  push   %ebp
085d7d9d +0x01:  mov    %esp,%ebp
085d7d9f +0x03:  sub    $0x28,%esp
085d7da2 +0x06:  mov    0xc(%ebp),%edx
085d7da5 +0x09:  mov    0x8(%ebp),%eax
085d7da8 +0x0c:  add    $0xc,%edx
085d7dab +0x0f:  mov    (%eax,%edx,4),%eax
085d7dae +0x12:  test   %eax,%eax
085d7db0 +0x14:  jne    085d7db9 <+0x1d>
085d7db2 +0x16:  mov    $0x0,%eax
085d7db7 +0x1b:  jmp    085d7ded <+0x51>
085d7db9 +0x1d:  mov    0xc(%ebp),%edx
085d7dbc +0x20:  mov    0x8(%ebp),%eax
085d7dbf +0x23:  add    $0xc,%edx
085d7dc2 +0x26:  mov    (%eax,%edx,4),%eax
085d7dc5 +0x29:  mov    %eax,0x4(%esp)
085d7dc9 +0x2d:  mov    0x8(%ebp),%eax
085d7dcc +0x30:  mov    %eax,(%esp)
085d7dcf +0x33:  call   085dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>  ; PvP_Room::GetTeamIndex(CUser*)
085d7dd4 +0x38:  mov    %eax,-0xc(%ebp)
085d7dd7 +0x3b:  mov    0x8(%ebp),%eax
085d7dda +0x3e:  add    $0x268,%eax
085d7ddf +0x43:  mov    %eax,(%esp)
085d7de2 +0x46:  call   085df7a4 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2b>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2b
085d7de7 +0x4b:  cmp    -0xc(%ebp),%eax
085d7dea +0x4e:  sete   %al
085d7ded +0x51:  leave
085d7dee +0x52:  ret
085d7def +0x53:  nop
```

## 反编译 C

```c
// PvP_Room::is_last_win @ 0x85d7d9c

/* PvP_Room::is_last_win(int) */

bool __thiscall PvP_Room::is_last_win(PvP_Room *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(this + (param_1 + 0xc) * 4) == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = GetTeamIndex(this,*(CUser **)(this + (param_1 + 0xc) * 4));
    iVar2 = PvpUserTable::GetWinTeam((PvpUserTable *)(this + 0x268));
    bVar3 = iVar2 == iVar1;
  }
  return bVar3;
}
```

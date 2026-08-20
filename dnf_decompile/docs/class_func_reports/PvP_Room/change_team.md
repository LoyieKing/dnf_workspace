# change_team

`_ZN8PvP_Room11change_teamEii`

`PvP_Room::change_team(int, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d7d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d7d50  _ZN8PvP_Room11change_teamEii
#           PvP_Room::change_team(int, int)
# range [0x085d7d50, 0x085d7d9b]
085d7d50 +0x00:  push   %ebp
085d7d51 +0x01:  mov    %esp,%ebp
085d7d53 +0x03:  sub    $0x18,%esp
085d7d56 +0x06:  mov    0x8(%ebp),%eax
085d7d59 +0x09:  mov    %eax,(%esp)
085d7d5c +0x0c:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d7d61 +0x11:  mov    0xc(%ebp),%edx
085d7d64 +0x14:  mov    0x8(%ebp),%eax
085d7d67 +0x17:  lea    0x14(%edx),%ecx
085d7d6a +0x1a:  mov    0x10(%ebp),%edx
085d7d6d +0x1d:  mov    %edx,(%eax,%ecx,4)
085d7d70 +0x20:  mov    0x8(%ebp),%eax
085d7d73 +0x23:  lea    0x620(%eax),%edx
085d7d79 +0x29:  mov    0x10(%ebp),%eax
085d7d7c +0x2c:  mov    %eax,0x8(%esp)
085d7d80 +0x30:  mov    0xc(%ebp),%eax
085d7d83 +0x33:  mov    %eax,0x4(%esp)
085d7d87 +0x37:  mov    %edx,(%esp)
085d7d8a +0x3a:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d7d8f +0x3f:  mov    0x8(%ebp),%eax
085d7d92 +0x42:  mov    %eax,(%esp)
085d7d95 +0x45:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d7d9a +0x4a:  leave
085d7d9b +0x4b:  ret
```

## 反编译 C

```c
// PvP_Room::change_team @ 0x85d7d50

/* PvP_Room::change_team(int, int) */

void __thiscall PvP_Room::change_team(PvP_Room *this,int param_1,int param_2)

{
  lock();
  *(int *)(this + (param_1 + 0x14) * 4) = param_2;
  CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),param_1,param_2);
  unlock();
  return;
}
```

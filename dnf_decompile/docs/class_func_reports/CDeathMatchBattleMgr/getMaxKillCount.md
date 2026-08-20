# getMaxKillCount

`_ZN20CDeathMatchBattleMgr15getMaxKillCountEv`

`CDeathMatchBattleMgr::getMaxKillCount()`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085defcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085defcc  _ZN20CDeathMatchBattleMgr15getMaxKillCountEv
#           CDeathMatchBattleMgr::getMaxKillCount()
# range [0x085defcc, 0x085df011]
085defcc +0x00:  push   %ebp
085defcd +0x01:  mov    %esp,%ebp
085defcf +0x03:  sub    $0x10,%esp
085defd2 +0x06:  movl   $0x0,-0x8(%ebp)
085defd9 +0x0d:  movl   $0x0,-0x4(%ebp)
085defe0 +0x14:  jmp    085df002 <+0x36>
085defe2 +0x16:  mov    -0x4(%ebp),%edx
085defe5 +0x19:  mov    0x8(%ebp),%eax
085defe8 +0x1c:  mov    0x4(%eax,%edx,4),%eax
085defec +0x20:  cmp    -0x8(%ebp),%eax
085defef +0x23:  jle    085deffe <+0x32>
085deff1 +0x25:  mov    -0x4(%ebp),%edx
085deff4 +0x28:  mov    0x8(%ebp),%eax
085deff7 +0x2b:  mov    0x4(%eax,%edx,4),%eax
085deffb +0x2f:  mov    %eax,-0x8(%ebp)
085deffe +0x32:  addl   $0x1,-0x4(%ebp)
085df002 +0x36:  cmpl   $0x7,-0x4(%ebp)
085df006 +0x3a:  setle  %al
085df009 +0x3d:  test   %al,%al
085df00b +0x3f:  jne    085defe2 <+0x16>
085df00d +0x41:  mov    -0x8(%ebp),%eax
085df010 +0x44:  leave
085df011 +0x45:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::getMaxKillCount @ 0x85defcc

/* CDeathMatchBattleMgr::getMaxKillCount() */

int __thiscall CDeathMatchBattleMgr::getMaxKillCount(CDeathMatchBattleMgr *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (local_c < *(int *)(this + local_8 * 4 + 4)) {
      local_c = *(int *)(this + local_8 * 4 + 4);
    }
  }
  return local_c;
}
```

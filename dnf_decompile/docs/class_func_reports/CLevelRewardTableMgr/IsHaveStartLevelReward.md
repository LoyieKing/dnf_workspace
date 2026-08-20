# IsHaveStartLevelReward

`_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv`

`CLevelRewardTableMgr::IsHaveStartLevelReward()`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x08687d18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687d18  _ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv
#           CLevelRewardTableMgr::IsHaveStartLevelReward()
# range [0x08687d18, 0x08687d6b]
08687d18 +0x00:  push   %ebp
08687d19 +0x01:  mov    %esp,%ebp
08687d1b +0x03:  sub    $0x10,%esp
08687d1e +0x06:  movl   $0x0,-0x4(%ebp)
08687d25 +0x0d:  jmp    08687d5a <+0x42>
08687d27 +0x0f:  mov    0x8(%ebp),%eax
08687d2a +0x12:  mov    0x4(%eax),%eax
08687d2d +0x15:  mov    -0x4(%ebp),%edx
08687d30 +0x18:  mov    (%eax,%edx,4),%eax
08687d33 +0x1b:  test   %eax,%eax
08687d35 +0x1d:  jne    08687d3e <+0x26>
08687d37 +0x1f:  mov    $0x0,%eax
08687d3c +0x24:  jmp    08687d6a <+0x52>
08687d3e +0x26:  mov    0x8(%ebp),%eax
08687d41 +0x29:  mov    0x4(%eax),%eax
08687d44 +0x2c:  mov    -0x4(%ebp),%edx
08687d47 +0x2f:  mov    (%eax,%edx,4),%eax
08687d4a +0x32:  cmp    $0x1,%eax
08687d4d +0x35:  jne    08687d56 <+0x3e>
08687d4f +0x37:  mov    $0x1,%eax
08687d54 +0x3c:  jmp    08687d6a <+0x52>
08687d56 +0x3e:  addl   $0x1,-0x4(%ebp)
08687d5a +0x42:  cmpl   $0x45,-0x4(%ebp)
08687d5e +0x46:  setle  %al
08687d61 +0x49:  test   %al,%al
08687d63 +0x4b:  jne    08687d27 <+0xf>
08687d65 +0x4d:  mov    $0x0,%eax
08687d6a +0x52:  leave
08687d6b +0x53:  ret
```

## 反编译 C

```c
// CLevelRewardTableMgr::IsHaveStartLevelReward @ 0x8687d18

/* CLevelRewardTableMgr::IsHaveStartLevelReward() */

undefined4 __thiscall CLevelRewardTableMgr::IsHaveStartLevelReward(CLevelRewardTableMgr *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x45 < local_8) {
      return 0;
    }
    if (*(int *)(*(int *)(this + 4) + local_8 * 4) == 0) break;
    if (*(int *)(*(int *)(this + 4) + local_8 * 4) == 1) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 0;
}
```

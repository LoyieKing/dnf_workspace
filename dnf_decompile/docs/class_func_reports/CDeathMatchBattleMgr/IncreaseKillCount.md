# IncreaseKillCount

`_ZN20CDeathMatchBattleMgr17IncreaseKillCountEi`

`CDeathMatchBattleMgr::IncreaseKillCount(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085def0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085def0e  _ZN20CDeathMatchBattleMgr17IncreaseKillCountEi
#           CDeathMatchBattleMgr::IncreaseKillCount(int)
# range [0x085def0e, 0x085def33]
085def0e +0x00:  push   %ebp
085def0f +0x01:  mov    %esp,%ebp
085def11 +0x03:  cmpl   $0x0,0xc(%ebp)
085def15 +0x07:  js     085def31 <+0x23>
085def17 +0x09:  cmpl   $0x7,0xc(%ebp)
085def1b +0x0d:  jg     085def31 <+0x23>
085def1d +0x0f:  mov    0xc(%ebp),%eax
085def20 +0x12:  mov    0x8(%ebp),%edx
085def23 +0x15:  mov    0x4(%edx,%eax,4),%edx
085def27 +0x19:  lea    0x1(%edx),%ecx
085def2a +0x1c:  mov    0x8(%ebp),%edx
085def2d +0x1f:  mov    %ecx,0x4(%edx,%eax,4)
085def31 +0x23:  pop    %ebp
085def32 +0x24:  ret
085def33 +0x25:  nop
```

## 反编译 C

```c
// CDeathMatchBattleMgr::IncreaseKillCount @ 0x85def0e

/* CDeathMatchBattleMgr::IncreaseKillCount(int) */

void __thiscall CDeathMatchBattleMgr::IncreaseKillCount(CDeathMatchBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    *(int *)(this + param_1 * 4 + 4) = *(int *)(this + param_1 * 4 + 4) + 1;
  }
  return;
}
```

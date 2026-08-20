# GetItemUpgradeSuccessRate

`_ZN10expert_job10CAlchemist25GetItemUpgradeSuccessRateEv`

`expert_job::CAlchemist::GetItemUpgradeSuccessRate()`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d1360` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1360  _ZN10expert_job10CAlchemist25GetItemUpgradeSuccessRateEv
#           expert_job::CAlchemist::GetItemUpgradeSuccessRate()
# range [0x085d1360, 0x085d137b]
085d1360 +0x00:  push   %ebp
085d1361 +0x01:  mov    %esp,%ebp
085d1363 +0x03:  sub    $0x4,%esp
085d1366 +0x06:  mov    &g_alchemistInfo,%eax
085d136b +0x0b:  mov    %eax,-0x4(%ebp)
085d136e +0x0e:  fildl  -0x4(%ebp)
085d1371 +0x11:  flds   ""
085d1377 +0x17:  fdivrp %st,%st(1)
085d1379 +0x19:  leave
085d137a +0x1a:  ret
085d137b +0x1b:  nop
```

## 反编译 C

```c
// expert_job::CAlchemist::GetItemUpgradeSuccessRate @ 0x85d1360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expert_job::CAlchemist::GetItemUpgradeSuccessRate() */

longdouble expert_job::CAlchemist::GetItemUpgradeSuccessRate(void)

{
  return (longdouble)g_alchemistInfo / (longdouble)_DAT_08cbfa3c;
}
```

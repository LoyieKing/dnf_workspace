# sendNewAccountLevelUpToJobData

`_ZN27NewAccountLevelUpEventToJob30sendNewAccountLevelUpToJobDataER5CUser`

`NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData(CUser&)`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b829e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b829e  _ZN27NewAccountLevelUpEventToJob30sendNewAccountLevelUpToJobDataER5CUser
#           NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData(CUser&)
# range [0x081b829e, 0x081b82a3]
081b829e +0x00:  push   %ebp
081b829f +0x01:  mov    %esp,%ebp
081b82a1 +0x03:  pop    %ebp
081b82a2 +0x04:  ret
081b82a3 +0x05:  nop
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData @ 0x81b829e

/* NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData(CUser&) */

void NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData(CUser *param_1)

{
  return;
}
```

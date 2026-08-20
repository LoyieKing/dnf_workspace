# StartAction

`_ZN27NewAccountLevelUpEventToJob11StartActionEv`

`NewAccountLevelUpEventToJob::StartAction()`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b8246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b8246  _ZN27NewAccountLevelUpEventToJob11StartActionEv
#           NewAccountLevelUpEventToJob::StartAction()
# range [0x081b8246, 0x081b824b]
081b8246 +0x00:  push   %ebp
081b8247 +0x01:  mov    %esp,%ebp
081b8249 +0x03:  pop    %ebp
081b824a +0x04:  ret
081b824b +0x05:  nop
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::StartAction @ 0x81b8246

/* NewAccountLevelUpEventToJob::StartAction() */

void NewAccountLevelUpEventToJob::StartAction(void)

{
  return;
}
```

# makeRequest

`_ZN8APSystem20DB_UpdateRewardMedal11makeRequestEiRKNS_22_SIG_LOAD_REWARD_MEDALE`

`APSystem::DB_UpdateRewardMedal::makeRequest(int, APSystem::_SIG_LOAD_REWARD_MEDAL const&)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_UpdateRewardMedal` | `0x08124c70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124c70  _ZN8APSystem20DB_UpdateRewardMedal11makeRequestEiRKNS_22_SIG_LOAD_REWARD_MEDALE
#           APSystem::DB_UpdateRewardMedal::makeRequest(int, APSystem::_SIG_LOAD_REWARD_MEDAL const&)
# range [0x08124c70, 0x08124c77]
08124c70 +0x00:  push   %ebp
08124c71 +0x01:  mov    %esp,%ebp
08124c73 +0x03:  sub    $0x10,%esp
08124c76 +0x06:  leave
08124c77 +0x07:  ret
```

## 反编译 C

```c
// APSystem::DB_UpdateRewardMedal::makeRequest @ 0x8124c70

/* APSystem::DB_UpdateRewardMedal::makeRequest(int, APSystem::_SIG_LOAD_REWARD_MEDAL const&) */

void APSystem::DB_UpdateRewardMedal::makeRequest(int param_1,_SIG_LOAD_REWARD_MEDAL *param_2)

{
  return;
}
```

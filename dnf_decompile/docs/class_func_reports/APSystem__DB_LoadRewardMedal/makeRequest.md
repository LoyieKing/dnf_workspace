# makeRequest

`_ZN8APSystem18DB_LoadRewardMedal11makeRequestEij`

`APSystem::DB_LoadRewardMedal::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadRewardMedal` | `0x0812487a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812487a  _ZN8APSystem18DB_LoadRewardMedal11makeRequestEij
#           APSystem::DB_LoadRewardMedal::makeRequest(int, unsigned int)
# range [0x0812487a, 0x08124881]
0812487a +0x00:  push   %ebp
0812487b +0x01:  mov    %esp,%ebp
0812487d +0x03:  sub    $0x10,%esp
08124880 +0x06:  leave
08124881 +0x07:  ret
```

## 反编译 C

```c
// APSystem::DB_LoadRewardMedal::makeRequest @ 0x812487a

/* APSystem::DB_LoadRewardMedal::makeRequest(int, unsigned int) */

void APSystem::DB_LoadRewardMedal::makeRequest(int param_1,uint param_2)

{
  return;
}
```

# execute

`_ZN11game_master13CGetCashInven7executeEv`

`game_master::CGetCashInven::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CGetCashInven` | `0x084ac846` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac846  _ZN11game_master13CGetCashInven7executeEv
#           game_master::CGetCashInven::execute()
# range [0x084ac846, 0x084ac84b]
084ac846 +0x00:  push   %ebp
084ac847 +0x01:  mov    %esp,%ebp
084ac849 +0x03:  pop    %ebp
084ac84a +0x04:  ret
084ac84b +0x05:  nop
```

## 反编译 C

```c
// game_master::CGetCashInven::execute @ 0x84ac846

/* game_master::CGetCashInven::execute() */

void game_master::CGetCashInven::execute(void)

{
  return;
}
```

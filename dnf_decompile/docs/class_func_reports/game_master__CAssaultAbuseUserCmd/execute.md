# execute

`_ZN11game_master20CAssaultAbuseUserCmd7executeEv`

`game_master::CAssaultAbuseUserCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAssaultAbuseUserCmd` | `0x084a9daa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9daa  _ZN11game_master20CAssaultAbuseUserCmd7executeEv
#           game_master::CAssaultAbuseUserCmd::execute()
# range [0x084a9daa, 0x084a9daf]
084a9daa +0x00:  push   %ebp
084a9dab +0x01:  mov    %esp,%ebp
084a9dad +0x03:  pop    %ebp
084a9dae +0x04:  ret
084a9daf +0x05:  nop
```

## 反编译 C

```c
// game_master::CAssaultAbuseUserCmd::execute @ 0x84a9daa

/* game_master::CAssaultAbuseUserCmd::execute() */

void game_master::CAssaultAbuseUserCmd::execute(void)

{
  return;
}
```

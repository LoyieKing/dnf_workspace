# execute

`_ZN11game_master31CAutoMarketConditionsControlCmd7executeEv`

`game_master::CAutoMarketConditionsControlCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAutoMarketConditionsControlCmd` | `0x084a8ffc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8ffc  _ZN11game_master31CAutoMarketConditionsControlCmd7executeEv
#           game_master::CAutoMarketConditionsControlCmd::execute()
# range [0x084a8ffc, 0x084a9001]
084a8ffc +0x00:  push   %ebp
084a8ffd +0x01:  mov    %esp,%ebp
084a8fff +0x03:  pop    %ebp
084a9000 +0x04:  ret
084a9001 +0x05:  nop
```

## 反编译 C

```c
// game_master::CAutoMarketConditionsControlCmd::execute @ 0x84a8ffc

/* game_master::CAutoMarketConditionsControlCmd::execute() */

void game_master::CAutoMarketConditionsControlCmd::execute(void)

{
  return;
}
```

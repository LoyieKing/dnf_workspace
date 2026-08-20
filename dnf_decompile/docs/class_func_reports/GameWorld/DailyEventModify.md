# DailyEventModify

`_ZN9GameWorld16DailyEventModifyEv`

`GameWorld::DailyEventModify()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd004  _ZN9GameWorld16DailyEventModifyEv
#           GameWorld::DailyEventModify()
# range [0x086cd004, 0x086cd00f]
086cd004 +0x00:  push   %ebp
086cd005 +0x01:  mov    %esp,%ebp
086cd007 +0x03:  sub    $0x140,%esp
086cd00d +0x09:  leave
086cd00e +0x0a:  ret
086cd00f +0x0b:  nop
```

## 反编译 C

```c
// GameWorld::DailyEventModify @ 0x86cd004

/* GameWorld::DailyEventModify() */

void GameWorld::DailyEventModify(void)

{
  return;
}
```

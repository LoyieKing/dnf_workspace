# get_event_start_time

`_ZN13EventClassify12CEventEntity20get_event_start_timeEv`

`EventClassify::CEventEntity::get_event_start_time()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b094  _ZN13EventClassify12CEventEntity20get_event_start_timeEv
#           EventClassify::CEventEntity::get_event_start_time()
# range [0x0810b094, 0x0810b09f]
0810b094 +0x00:  push   %ebp
0810b095 +0x01:  mov    %esp,%ebp
0810b097 +0x03:  mov    0x8(%ebp),%eax
0810b09a +0x06:  mov    0xc(%eax),%eax
0810b09d +0x09:  pop    %ebp
0810b09e +0x0a:  ret
0810b09f +0x0b:  nop
```

## 反编译 C

```c
// EventClassify::CEventEntity::get_event_start_time @ 0x810b094

/* EventClassify::CEventEntity::get_event_start_time() */

undefined4 __thiscall EventClassify::CEventEntity::get_event_start_time(CEventEntity *this)

{
  return *(undefined4 *)(this + 0xc);
}
```

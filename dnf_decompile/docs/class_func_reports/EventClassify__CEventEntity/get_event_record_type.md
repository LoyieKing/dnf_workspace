# get_event_record_type

`_ZN13EventClassify12CEventEntity21get_event_record_typeEv`

`EventClassify::CEventEntity::get_event_record_type()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b052` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b052  _ZN13EventClassify12CEventEntity21get_event_record_typeEv
#           EventClassify::CEventEntity::get_event_record_type()
# range [0x0810b052, 0x0810b05d]
0810b052 +0x00:  push   %ebp
0810b053 +0x01:  mov    %esp,%ebp
0810b055 +0x03:  mov    0x8(%ebp),%eax
0810b058 +0x06:  mov    0x18(%eax),%eax
0810b05b +0x09:  pop    %ebp
0810b05c +0x0a:  ret
0810b05d +0x0b:  nop
```

## 反编译 C

```c
// EventClassify::CEventEntity::get_event_record_type @ 0x810b052

/* EventClassify::CEventEntity::get_event_record_type() */

undefined4 __thiscall EventClassify::CEventEntity::get_event_record_type(CEventEntity *this)

{
  return *(undefined4 *)(this + 0x18);
}
```

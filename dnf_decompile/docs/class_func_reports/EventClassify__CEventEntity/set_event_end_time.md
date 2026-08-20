# set_event_end_time

`_ZN13EventClassify12CEventEntity18set_event_end_timeEi`

`EventClassify::CEventEntity::set_event_end_time(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b086` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b086  _ZN13EventClassify12CEventEntity18set_event_end_timeEi
#           EventClassify::CEventEntity::set_event_end_time(int)
# range [0x0810b086, 0x0810b093]
0810b086 +0x00:  push   %ebp
0810b087 +0x01:  mov    %esp,%ebp
0810b089 +0x03:  mov    0x8(%ebp),%eax
0810b08c +0x06:  mov    0xc(%ebp),%edx
0810b08f +0x09:  mov    %edx,0x10(%eax)
0810b092 +0x0c:  pop    %ebp
0810b093 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CEventEntity::set_event_end_time @ 0x810b086

/* EventClassify::CEventEntity::set_event_end_time(int) */

void __thiscall EventClassify::CEventEntity::set_event_end_time(CEventEntity *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}
```

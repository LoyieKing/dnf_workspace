# set_event_start_time

`_ZN13EventClassify12CEventEntity20set_event_start_timeEi`

`EventClassify::CEventEntity::set_event_start_time(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b078` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b078  _ZN13EventClassify12CEventEntity20set_event_start_timeEi
#           EventClassify::CEventEntity::set_event_start_time(int)
# range [0x0810b078, 0x0810b085]
0810b078 +0x00:  push   %ebp
0810b079 +0x01:  mov    %esp,%ebp
0810b07b +0x03:  mov    0x8(%ebp),%eax
0810b07e +0x06:  mov    0xc(%ebp),%edx
0810b081 +0x09:  mov    %edx,0xc(%eax)
0810b084 +0x0c:  pop    %ebp
0810b085 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CEventEntity::set_event_start_time @ 0x810b078

/* EventClassify::CEventEntity::set_event_start_time(int) */

void __thiscall EventClassify::CEventEntity::set_event_start_time(CEventEntity *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}
```

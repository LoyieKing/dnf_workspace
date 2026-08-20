# is_eventing

`_ZN13EventClassify12CEventEntity11is_eventingEv`

`EventClassify::CEventEntity::is_eventing()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b016` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b016  _ZN13EventClassify12CEventEntity11is_eventingEv
#           EventClassify::CEventEntity::is_eventing()
# range [0x0810b016, 0x0810b021]
0810b016 +0x00:  push   %ebp
0810b017 +0x01:  mov    %esp,%ebp
0810b019 +0x03:  mov    0x8(%ebp),%eax
0810b01c +0x06:  movzbl 0x4(%eax),%eax
0810b020 +0x0a:  pop    %ebp
0810b021 +0x0b:  ret
```

## 反编译 C

```c
// EventClassify::CEventEntity::is_eventing @ 0x810b016

/* EventClassify::CEventEntity::is_eventing() */

CEventEntity __thiscall EventClassify::CEventEntity::is_eventing(CEventEntity *this)

{
  return this[4];
}
```

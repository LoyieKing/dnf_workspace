# set_event_flag

`_ZN13EventClassify12CEventEntity14set_event_flagEb`

`EventClassify::CEventEntity::set_event_flag(bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b022  _ZN13EventClassify12CEventEntity14set_event_flagEb
#           EventClassify::CEventEntity::set_event_flag(bool)
# range [0x0810b022, 0x0810b039]
0810b022 +0x00:  push   %ebp
0810b023 +0x01:  mov    %esp,%ebp
0810b025 +0x03:  sub    $0x4,%esp
0810b028 +0x06:  mov    0xc(%ebp),%eax
0810b02b +0x09:  mov    %al,-0x4(%ebp)
0810b02e +0x0c:  mov    0x8(%ebp),%eax
0810b031 +0x0f:  movzbl -0x4(%ebp),%edx
0810b035 +0x13:  mov    %dl,0x4(%eax)
0810b038 +0x16:  leave
0810b039 +0x17:  ret
```

## 反编译 C

```c
// EventClassify::CEventEntity::set_event_flag @ 0x810b022

/* EventClassify::CEventEntity::set_event_flag(bool) */

void __thiscall EventClassify::CEventEntity::set_event_flag(CEventEntity *this,bool param_1)

{
  this[4] = (CEventEntity)param_1;
  return;
}
```

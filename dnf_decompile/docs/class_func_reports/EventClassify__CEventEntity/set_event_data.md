# set_event_data

`_ZN13EventClassify12CEventEntity14set_event_dataEiP17InGameEventScript`

`EventClassify::CEventEntity::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b03a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b03a  _ZN13EventClassify12CEventEntity14set_event_dataEiP17InGameEventScript
#           EventClassify::CEventEntity::set_event_data(int, InGameEventScript*)
# range [0x0810b03a, 0x0810b051]
0810b03a +0x00:  push   %ebp
0810b03b +0x01:  mov    %esp,%ebp
0810b03d +0x03:  mov    0x8(%ebp),%eax
0810b040 +0x06:  mov    0xc(%ebp),%edx
0810b043 +0x09:  mov    %edx,0x18(%eax)
0810b046 +0x0c:  mov    0x8(%ebp),%eax
0810b049 +0x0f:  mov    0x10(%ebp),%edx
0810b04c +0x12:  mov    %edx,0x14(%eax)
0810b04f +0x15:  pop    %ebp
0810b050 +0x16:  ret
0810b051 +0x17:  nop
```

## 反编译 C

```c
// EventClassify::CEventEntity::set_event_data @ 0x810b03a

/* EventClassify::CEventEntity::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CEventEntity::set_event_data
          (CEventEntity *this,int param_1,InGameEventScript *param_2)

{
  *(int *)(this + 0x18) = param_1;
  *(InGameEventScript **)(this + 0x14) = param_2;
  return;
}
```

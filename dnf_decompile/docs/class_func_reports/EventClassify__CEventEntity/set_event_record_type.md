# set_event_record_type

`_ZN13EventClassify12CEventEntity21set_event_record_typeEi`

`EventClassify::CEventEntity::set_event_record_type(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b05e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b05e  _ZN13EventClassify12CEventEntity21set_event_record_typeEi
#           EventClassify::CEventEntity::set_event_record_type(int)
# range [0x0810b05e, 0x0810b06b]
0810b05e +0x00:  push   %ebp
0810b05f +0x01:  mov    %esp,%ebp
0810b061 +0x03:  mov    0x8(%ebp),%eax
0810b064 +0x06:  mov    0xc(%ebp),%edx
0810b067 +0x09:  mov    %edx,0x18(%eax)
0810b06a +0x0c:  pop    %ebp
0810b06b +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CEventEntity::set_event_record_type @ 0x810b05e

/* EventClassify::CEventEntity::set_event_record_type(int) */

void __thiscall EventClassify::CEventEntity::set_event_record_type(CEventEntity *this,int param_1)

{
  *(int *)(this + 0x18) = param_1;
  return;
}
```

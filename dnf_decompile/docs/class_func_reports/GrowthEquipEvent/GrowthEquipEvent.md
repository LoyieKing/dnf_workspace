# GrowthEquipEvent

`_ZN16GrowthEquipEventC1Ev`

`GrowthEquipEvent::GrowthEquipEvent()`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f6ef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6ef0  _ZN16GrowthEquipEventC1Ev
#           GrowthEquipEvent::GrowthEquipEvent()
# range [0x080f6ef0, 0x080f6f0b]
080f6ef0 +0x00:  push   %ebp
080f6ef1 +0x01:  mov    %esp,%ebp
080f6ef3 +0x03:  sub    $0x18,%esp
080f6ef6 +0x06:  mov    0x8(%ebp),%eax
080f6ef9 +0x09:  mov    %eax,(%esp)
080f6efc +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
080f6f01 +0x11:  mov    0x8(%ebp),%eax
080f6f04 +0x14:  movl   $&_ZTV16GrowthEquipEvent+0x8,(%eax)
080f6f0a +0x1a:  leave
080f6f0b +0x1b:  ret
```

## 反编译 C

```c
// GrowthEquipEvent::GrowthEquipEvent @ 0x80f6ef0

/* GrowthEquipEvent::GrowthEquipEvent() */

void __thiscall GrowthEquipEvent::GrowthEquipEvent(GrowthEquipEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__GrowthEquipEvent_08b3d5a8;
  return;
}
```

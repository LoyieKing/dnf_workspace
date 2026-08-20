# ~GrowthEquipEvent

`_ZN16GrowthEquipEventD0Ev`

`GrowthEquipEvent::~GrowthEquipEvent()`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f6f3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6f3c  _ZN16GrowthEquipEventD0Ev
#           GrowthEquipEvent::~GrowthEquipEvent()
# range [0x080f6f3c, 0x080f6f59]
080f6f3c +0x00:  push   %ebp
080f6f3d +0x01:  mov    %esp,%ebp
080f6f3f +0x03:  sub    $0x18,%esp
080f6f42 +0x06:  mov    0x8(%ebp),%eax
080f6f45 +0x09:  mov    %eax,(%esp)
080f6f48 +0x0c:  call   080f6f0c <_ZN16GrowthEquipEventD1Ev>  ; GrowthEquipEvent::~GrowthEquipEvent()
080f6f4d +0x11:  mov    0x8(%ebp),%eax
080f6f50 +0x14:  mov    %eax,(%esp)
080f6f53 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080f6f58 +0x1c:  leave
080f6f59 +0x1d:  ret
```

## 反编译 C

```c
// GrowthEquipEvent::~GrowthEquipEvent @ 0x80f6f3c

/* GrowthEquipEvent::~GrowthEquipEvent() */

void __thiscall GrowthEquipEvent::~GrowthEquipEvent(GrowthEquipEvent *this)

{
  ~GrowthEquipEvent(this);
  operator_delete(this);
  return;
}
```

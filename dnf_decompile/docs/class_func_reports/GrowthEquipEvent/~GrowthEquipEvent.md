# ~GrowthEquipEvent

`_ZN16GrowthEquipEventD1Ev`

`GrowthEquipEvent::~GrowthEquipEvent()`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f6f0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6f0c  _ZN16GrowthEquipEventD1Ev
#           GrowthEquipEvent::~GrowthEquipEvent()
# range [0x080f6f0c, 0x080f6f3b]
080f6f0c +0x00:  push   %ebp
080f6f0d +0x01:  mov    %esp,%ebp
080f6f0f +0x03:  sub    $0x18,%esp
080f6f12 +0x06:  mov    0x8(%ebp),%eax
080f6f15 +0x09:  movl   $&_ZTV16GrowthEquipEvent+0x8,(%eax)
080f6f1b +0x0f:  mov    0x8(%ebp),%eax
080f6f1e +0x12:  mov    %eax,(%esp)
080f6f21 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080f6f26 +0x1a:  mov    $0x0,%eax
080f6f2b +0x1f:  test   %al,%al
080f6f2d +0x21:  je     080f6f3a <+0x2e>
080f6f2f +0x23:  mov    0x8(%ebp),%eax
080f6f32 +0x26:  mov    %eax,(%esp)
080f6f35 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080f6f3a +0x2e:  leave
080f6f3b +0x2f:  ret
```

## 反编译 C

```c
// GrowthEquipEvent::~GrowthEquipEvent @ 0x80f6f0c

/* WARNING: Removing unreachable block (ram,0x080f6f2f) */
/* GrowthEquipEvent::~GrowthEquipEvent() */

void __thiscall GrowthEquipEvent::~GrowthEquipEvent(GrowthEquipEvent *this)

{
  *(undefined ***)this = &PTR__GrowthEquipEvent_08b3d5a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

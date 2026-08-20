# ~Arad_MomijiEvent

`_ZN16Arad_MomijiEventD1Ev`

`Arad_MomijiEvent::~Arad_MomijiEvent()`

| 类 | 地址 |
|---|---|
| `Arad_MomijiEvent` | `0x0819e754` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e754  _ZN16Arad_MomijiEventD1Ev
#           Arad_MomijiEvent::~Arad_MomijiEvent()
# range [0x0819e754, 0x0819e783]
0819e754 +0x00:  push   %ebp
0819e755 +0x01:  mov    %esp,%ebp
0819e757 +0x03:  sub    $0x18,%esp
0819e75a +0x06:  mov    0x8(%ebp),%eax
0819e75d +0x09:  movl   $&_ZTV16Arad_MomijiEvent+0x8,(%eax)
0819e763 +0x0f:  mov    0x8(%ebp),%eax
0819e766 +0x12:  mov    %eax,(%esp)
0819e769 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0819e76e +0x1a:  mov    $0x0,%eax
0819e773 +0x1f:  test   %al,%al
0819e775 +0x21:  je     0819e782 <+0x2e>
0819e777 +0x23:  mov    0x8(%ebp),%eax
0819e77a +0x26:  mov    %eax,(%esp)
0819e77d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0819e782 +0x2e:  leave
0819e783 +0x2f:  ret
```

## 反编译 C

```c
// Arad_MomijiEvent::~Arad_MomijiEvent @ 0x819e754

/* WARNING: Removing unreachable block (ram,0x0819e777) */
/* Arad_MomijiEvent::~Arad_MomijiEvent() */

void __thiscall Arad_MomijiEvent::~Arad_MomijiEvent(Arad_MomijiEvent *this)

{
  *(undefined ***)this = &PTR__Arad_MomijiEvent_08ba8c08;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

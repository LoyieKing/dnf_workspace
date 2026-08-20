# ~CMemberExpRewardEvent

`_ZN21CMemberExpRewardEventD1Ev`

`CMemberExpRewardEvent::~CMemberExpRewardEvent()`

| 类 | 地址 |
|---|---|
| `CMemberExpRewardEvent` | `0x081b2942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2942  _ZN21CMemberExpRewardEventD1Ev
#           CMemberExpRewardEvent::~CMemberExpRewardEvent()
# range [0x081b2942, 0x081b2971]
081b2942 +0x00:  push   %ebp
081b2943 +0x01:  mov    %esp,%ebp
081b2945 +0x03:  sub    $0x18,%esp
081b2948 +0x06:  mov    0x8(%ebp),%eax
081b294b +0x09:  movl   $&_ZTV21CMemberExpRewardEvent+0x8,(%eax)
081b2951 +0x0f:  mov    0x8(%ebp),%eax
081b2954 +0x12:  mov    %eax,(%esp)
081b2957 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081b295c +0x1a:  mov    $0x0,%eax
081b2961 +0x1f:  test   %al,%al
081b2963 +0x21:  je     081b2970 <+0x2e>
081b2965 +0x23:  mov    0x8(%ebp),%eax
081b2968 +0x26:  mov    %eax,(%esp)
081b296b +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b2970 +0x2e:  leave
081b2971 +0x2f:  ret
```

## 反编译 C

```c
// CMemberExpRewardEvent::~CMemberExpRewardEvent @ 0x81b2942

/* WARNING: Removing unreachable block (ram,0x081b2965) */
/* CMemberExpRewardEvent::~CMemberExpRewardEvent() */

void __thiscall CMemberExpRewardEvent::~CMemberExpRewardEvent(CMemberExpRewardEvent *this)

{
  *(undefined ***)this = &PTR__CMemberExpRewardEvent_08bb7b88;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

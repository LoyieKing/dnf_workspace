# ~EventGiveMeBox

`_ZN14EventGiveMeBoxD1Ev`

`EventGiveMeBox::~EventGiveMeBox()`

| 类 | 地址 |
|---|---|
| `EventGiveMeBox` | `0x081649cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081649cc  _ZN14EventGiveMeBoxD1Ev
#           EventGiveMeBox::~EventGiveMeBox()
# range [0x081649cc, 0x081649fb]
081649cc +0x00:  push   %ebp
081649cd +0x01:  mov    %esp,%ebp
081649cf +0x03:  sub    $0x18,%esp
081649d2 +0x06:  mov    0x8(%ebp),%eax
081649d5 +0x09:  movl   $&_ZTV14EventGiveMeBox+0x8,(%eax)
081649db +0x0f:  mov    0x8(%ebp),%eax
081649de +0x12:  mov    %eax,(%esp)
081649e1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081649e6 +0x1a:  mov    $0x0,%eax
081649eb +0x1f:  test   %al,%al
081649ed +0x21:  je     081649fa <+0x2e>
081649ef +0x23:  mov    0x8(%ebp),%eax
081649f2 +0x26:  mov    %eax,(%esp)
081649f5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081649fa +0x2e:  leave
081649fb +0x2f:  ret
```

## 反编译 C

```c
// EventGiveMeBox::~EventGiveMeBox @ 0x81649cc

/* WARNING: Removing unreachable block (ram,0x081649ef) */
/* EventGiveMeBox::~EventGiveMeBox() */

void __thiscall EventGiveMeBox::~EventGiveMeBox(EventGiveMeBox *this)

{
  *(undefined ***)this = &PTR__EventGiveMeBox_08b7da48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

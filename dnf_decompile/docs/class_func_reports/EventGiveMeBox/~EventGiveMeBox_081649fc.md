# ~EventGiveMeBox

`_ZN14EventGiveMeBoxD0Ev`

`EventGiveMeBox::~EventGiveMeBox()`

| 类 | 地址 |
|---|---|
| `EventGiveMeBox` | `0x081649fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081649fc  _ZN14EventGiveMeBoxD0Ev
#           EventGiveMeBox::~EventGiveMeBox()
# range [0x081649fc, 0x08164a19]
081649fc +0x00:  push   %ebp
081649fd +0x01:  mov    %esp,%ebp
081649ff +0x03:  sub    $0x18,%esp
08164a02 +0x06:  mov    0x8(%ebp),%eax
08164a05 +0x09:  mov    %eax,(%esp)
08164a08 +0x0c:  call   081649cc <_ZN14EventGiveMeBoxD1Ev>  ; EventGiveMeBox::~EventGiveMeBox()
08164a0d +0x11:  mov    0x8(%ebp),%eax
08164a10 +0x14:  mov    %eax,(%esp)
08164a13 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08164a18 +0x1c:  leave
08164a19 +0x1d:  ret
```

## 反编译 C

```c
// EventGiveMeBox::~EventGiveMeBox @ 0x81649fc

/* EventGiveMeBox::~EventGiveMeBox() */

void __thiscall EventGiveMeBox::~EventGiveMeBox(EventGiveMeBox *this)

{
  ~EventGiveMeBox(this);
  operator_delete(this);
  return;
}
```

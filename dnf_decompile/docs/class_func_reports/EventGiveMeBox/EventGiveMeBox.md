# EventGiveMeBox

`_ZN14EventGiveMeBoxC1Ev`

`EventGiveMeBox::EventGiveMeBox()`

| 类 | 地址 |
|---|---|
| `EventGiveMeBox` | `0x081649b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081649b0  _ZN14EventGiveMeBoxC1Ev
#           EventGiveMeBox::EventGiveMeBox()
# range [0x081649b0, 0x081649cb]
081649b0 +0x00:  push   %ebp
081649b1 +0x01:  mov    %esp,%ebp
081649b3 +0x03:  sub    $0x18,%esp
081649b6 +0x06:  mov    0x8(%ebp),%eax
081649b9 +0x09:  mov    %eax,(%esp)
081649bc +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081649c1 +0x11:  mov    0x8(%ebp),%eax
081649c4 +0x14:  movl   $&_ZTV14EventGiveMeBox+0x8,(%eax)
081649ca +0x1a:  leave
081649cb +0x1b:  ret
```

## 反编译 C

```c
// EventGiveMeBox::EventGiveMeBox @ 0x81649b0

/* EventGiveMeBox::EventGiveMeBox() */

void __thiscall EventGiveMeBox::EventGiveMeBox(EventGiveMeBox *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__EventGiveMeBox_08b7da48;
  return;
}
```

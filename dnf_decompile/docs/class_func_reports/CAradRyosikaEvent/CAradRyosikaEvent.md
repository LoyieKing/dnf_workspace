# CAradRyosikaEvent

`_ZN17CAradRyosikaEventC1Ev`

`CAradRyosikaEvent::CAradRyosikaEvent()`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0ea0  _ZN17CAradRyosikaEventC1Ev
#           CAradRyosikaEvent::CAradRyosikaEvent()
# range [0x081a0ea0, 0x081a0ecf]
081a0ea0 +0x00:  push   %ebp
081a0ea1 +0x01:  mov    %esp,%ebp
081a0ea3 +0x03:  sub    $0x18,%esp
081a0ea6 +0x06:  mov    0x8(%ebp),%eax
081a0ea9 +0x09:  mov    %eax,(%esp)
081a0eac +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081a0eb1 +0x11:  mov    0x8(%ebp),%eax
081a0eb4 +0x14:  movl   $&_ZTV17CAradRyosikaEvent+0x8,(%eax)
081a0eba +0x1a:  mov    0x8(%ebp),%eax
081a0ebd +0x1d:  movl   $0xffffffff,0xc(%eax)
081a0ec4 +0x24:  mov    0x8(%ebp),%eax
081a0ec7 +0x27:  movl   $0xffffffff,0x10(%eax)
081a0ece +0x2e:  leave
081a0ecf +0x2f:  ret
```

## 反编译 C

```c
// CAradRyosikaEvent::CAradRyosikaEvent @ 0x81a0ea0

/* CAradRyosikaEvent::CAradRyosikaEvent() */

void __thiscall CAradRyosikaEvent::CAradRyosikaEvent(CAradRyosikaEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CAradRyosikaEvent_08bab968;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return;
}
```

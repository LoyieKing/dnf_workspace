# CRestrictCharacCreationEvent

`_ZN28CRestrictCharacCreationEventC1Ev`

`CRestrictCharacCreationEvent::CRestrictCharacCreationEvent()`

| 类 | 地址 |
|---|---|
| `CRestrictCharacCreationEvent` | `0x08273c44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273c44  _ZN28CRestrictCharacCreationEventC1Ev
#           CRestrictCharacCreationEvent::CRestrictCharacCreationEvent()
# range [0x08273c44, 0x08273c69]
08273c44 +0x00:  push   %ebp
08273c45 +0x01:  mov    %esp,%ebp
08273c47 +0x03:  sub    $0x18,%esp
08273c4a +0x06:  mov    0x8(%ebp),%eax
08273c4d +0x09:  mov    %eax,(%esp)
08273c50 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08273c55 +0x11:  mov    0x8(%ebp),%eax
08273c58 +0x14:  movl   $&_ZTV28CRestrictCharacCreationEvent+0x8,(%eax)
08273c5e +0x1a:  mov    0x8(%ebp),%eax
08273c61 +0x1d:  movl   $0x2,0xc(%eax)
08273c68 +0x24:  leave
08273c69 +0x25:  ret
```

## 反编译 C

```c
// CRestrictCharacCreationEvent::CRestrictCharacCreationEvent @ 0x8273c44

/* CRestrictCharacCreationEvent::CRestrictCharacCreationEvent() */

void __thiscall
CRestrictCharacCreationEvent::CRestrictCharacCreationEvent(CRestrictCharacCreationEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CRestrictCharacCreationEvent_08bfb7a8;
  *(undefined4 *)(this + 0xc) = 2;
  return;
}
```

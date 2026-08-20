# CPCRoomBurningEvent

`_ZN19CPCRoomBurningEventC1Ev`

`CPCRoomBurningEvent::CPCRoomBurningEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomBurningEvent` | `0x082671dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082671dc  _ZN19CPCRoomBurningEventC1Ev
#           CPCRoomBurningEvent::CPCRoomBurningEvent()
# range [0x082671dc, 0x08267201]
082671dc +0x00:  push   %ebp
082671dd +0x01:  mov    %esp,%ebp
082671df +0x03:  sub    $0x18,%esp
082671e2 +0x06:  mov    0x8(%ebp),%eax
082671e5 +0x09:  mov    %eax,(%esp)
082671e8 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
082671ed +0x11:  mov    0x8(%ebp),%eax
082671f0 +0x14:  movl   $&_ZTV19CPCRoomBurningEvent+0x8,(%eax)
082671f6 +0x1a:  mov    0x8(%ebp),%eax
082671f9 +0x1d:  movl   $0x64,0xc(%eax)
08267200 +0x24:  leave
08267201 +0x25:  ret
```

## 反编译 C

```c
// CPCRoomBurningEvent::CPCRoomBurningEvent @ 0x82671dc

/* CPCRoomBurningEvent::CPCRoomBurningEvent() */

void __thiscall CPCRoomBurningEvent::CPCRoomBurningEvent(CPCRoomBurningEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPCRoomBurningEvent_08bee848;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}
```

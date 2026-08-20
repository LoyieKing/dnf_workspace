# ~SeriaRoomAniDecoEvent

`_ZN21SeriaRoomAniDecoEventD1Ev`

`SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent()`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b4ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b4ac  _ZN21SeriaRoomAniDecoEventD1Ev
#           SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent()
# range [0x0827b4ac, 0x0827b4db]
0827b4ac +0x00:  push   %ebp
0827b4ad +0x01:  mov    %esp,%ebp
0827b4af +0x03:  sub    $0x18,%esp
0827b4b2 +0x06:  mov    0x8(%ebp),%eax
0827b4b5 +0x09:  movl   $&_ZTV21SeriaRoomAniDecoEvent+0x8,(%eax)
0827b4bb +0x0f:  mov    0x8(%ebp),%eax
0827b4be +0x12:  mov    %eax,(%esp)
0827b4c1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0827b4c6 +0x1a:  mov    $0x0,%eax
0827b4cb +0x1f:  test   %al,%al
0827b4cd +0x21:  je     0827b4da <+0x2e>
0827b4cf +0x23:  mov    0x8(%ebp),%eax
0827b4d2 +0x26:  mov    %eax,(%esp)
0827b4d5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0827b4da +0x2e:  leave
0827b4db +0x2f:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent @ 0x827b4ac

/* WARNING: Removing unreachable block (ram,0x0827b4cf) */
/* SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent() */

void __thiscall SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent(SeriaRoomAniDecoEvent *this)

{
  *(undefined ***)this = &PTR__SeriaRoomAniDecoEvent_08c07188;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

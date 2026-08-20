# ~BlueMarbleDungeonEvent

`_ZN22BlueMarbleDungeonEventD1Ev`

`BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent()`

| 类 | 地址 |
|---|---|
| `BlueMarbleDungeonEvent` | `0x080dc48c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc48c  _ZN22BlueMarbleDungeonEventD1Ev
#           BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent()
# range [0x080dc48c, 0x080dc4bb]
080dc48c +0x00:  push   %ebp
080dc48d +0x01:  mov    %esp,%ebp
080dc48f +0x03:  sub    $0x18,%esp
080dc492 +0x06:  mov    0x8(%ebp),%eax
080dc495 +0x09:  movl   $&_ZTV22BlueMarbleDungeonEvent+0x8,(%eax)
080dc49b +0x0f:  mov    0x8(%ebp),%eax
080dc49e +0x12:  mov    %eax,(%esp)
080dc4a1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080dc4a6 +0x1a:  mov    $0x0,%eax
080dc4ab +0x1f:  test   %al,%al
080dc4ad +0x21:  je     080dc4ba <+0x2e>
080dc4af +0x23:  mov    0x8(%ebp),%eax
080dc4b2 +0x26:  mov    %eax,(%esp)
080dc4b5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080dc4ba +0x2e:  leave
080dc4bb +0x2f:  ret
```

## 反编译 C

```c
// BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent @ 0x80dc48c

/* WARNING: Removing unreachable block (ram,0x080dc4af) */
/* BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent() */

void __thiscall BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent(BlueMarbleDungeonEvent *this)

{
  *(undefined ***)this = &PTR__BlueMarbleDungeonEvent_08b2a248;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

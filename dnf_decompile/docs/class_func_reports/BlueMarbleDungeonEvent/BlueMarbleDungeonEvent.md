# BlueMarbleDungeonEvent

`_ZN22BlueMarbleDungeonEventC1Ev`

`BlueMarbleDungeonEvent::BlueMarbleDungeonEvent()`

| 类 | 地址 |
|---|---|
| `BlueMarbleDungeonEvent` | `0x080dc470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc470  _ZN22BlueMarbleDungeonEventC1Ev
#           BlueMarbleDungeonEvent::BlueMarbleDungeonEvent()
# range [0x080dc470, 0x080dc48b]
080dc470 +0x00:  push   %ebp
080dc471 +0x01:  mov    %esp,%ebp
080dc473 +0x03:  sub    $0x18,%esp
080dc476 +0x06:  mov    0x8(%ebp),%eax
080dc479 +0x09:  mov    %eax,(%esp)
080dc47c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
080dc481 +0x11:  mov    0x8(%ebp),%eax
080dc484 +0x14:  movl   $&_ZTV22BlueMarbleDungeonEvent+0x8,(%eax)
080dc48a +0x1a:  leave
080dc48b +0x1b:  ret
```

## 反编译 C

```c
// BlueMarbleDungeonEvent::BlueMarbleDungeonEvent @ 0x80dc470

/* BlueMarbleDungeonEvent::BlueMarbleDungeonEvent() */

void __thiscall BlueMarbleDungeonEvent::BlueMarbleDungeonEvent(BlueMarbleDungeonEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__BlueMarbleDungeonEvent_08b2a248;
  return;
}
```

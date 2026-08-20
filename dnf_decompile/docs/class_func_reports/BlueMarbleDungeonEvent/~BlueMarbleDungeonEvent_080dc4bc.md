# ~BlueMarbleDungeonEvent

`_ZN22BlueMarbleDungeonEventD0Ev`

`BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent()`

| 类 | 地址 |
|---|---|
| `BlueMarbleDungeonEvent` | `0x080dc4bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc4bc  _ZN22BlueMarbleDungeonEventD0Ev
#           BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent()
# range [0x080dc4bc, 0x080dc4d9]
080dc4bc +0x00:  push   %ebp
080dc4bd +0x01:  mov    %esp,%ebp
080dc4bf +0x03:  sub    $0x18,%esp
080dc4c2 +0x06:  mov    0x8(%ebp),%eax
080dc4c5 +0x09:  mov    %eax,(%esp)
080dc4c8 +0x0c:  call   080dc48c <_ZN22BlueMarbleDungeonEventD1Ev>  ; BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent()
080dc4cd +0x11:  mov    0x8(%ebp),%eax
080dc4d0 +0x14:  mov    %eax,(%esp)
080dc4d3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080dc4d8 +0x1c:  leave
080dc4d9 +0x1d:  ret
```

## 反编译 C

```c
// BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent @ 0x80dc4bc

/* BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent() */

void __thiscall BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent(BlueMarbleDungeonEvent *this)

{
  ~BlueMarbleDungeonEvent(this);
  operator_delete(this);
  return;
}
```

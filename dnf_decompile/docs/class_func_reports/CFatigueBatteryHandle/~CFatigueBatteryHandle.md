# ~CFatigueBatteryHandle

`_ZN21CFatigueBatteryHandleD1Ev`

`CFatigueBatteryHandle::~CFatigueBatteryHandle()`

| 类 | 地址 |
|---|---|
| `CFatigueBatteryHandle` | `0x084a7ffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a7ffe  _ZN21CFatigueBatteryHandleD1Ev
#           CFatigueBatteryHandle::~CFatigueBatteryHandle()
# range [0x084a7ffe, 0x084a8003]
084a7ffe +0x00:  push   %ebp
084a7fff +0x01:  mov    %esp,%ebp
084a8001 +0x03:  pop    %ebp
084a8002 +0x04:  ret
084a8003 +0x05:  nop
```

## 反编译 C

```c
// CFatigueBatteryHandle::~CFatigueBatteryHandle @ 0x84a7ffe

/* CFatigueBatteryHandle::~CFatigueBatteryHandle() */

void __thiscall CFatigueBatteryHandle::~CFatigueBatteryHandle(CFatigueBatteryHandle *this)

{
  return;
}
```

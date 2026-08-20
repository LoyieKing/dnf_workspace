# ~RentalMachinePcRoom

`_ZN19RentalMachinePcRoomD0Ev`

`RentalMachinePcRoom::~RentalMachinePcRoom()`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x082704c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082704c8  _ZN19RentalMachinePcRoomD0Ev
#           RentalMachinePcRoom::~RentalMachinePcRoom()
# range [0x082704c8, 0x082704e5]
082704c8 +0x00:  push   %ebp
082704c9 +0x01:  mov    %esp,%ebp
082704cb +0x03:  sub    $0x18,%esp
082704ce +0x06:  mov    0x8(%ebp),%eax
082704d1 +0x09:  mov    %eax,(%esp)
082704d4 +0x0c:  call   08270466 <_ZN19RentalMachinePcRoomD1Ev>  ; RentalMachinePcRoom::~RentalMachinePcRoom()
082704d9 +0x11:  mov    0x8(%ebp),%eax
082704dc +0x14:  mov    %eax,(%esp)
082704df +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082704e4 +0x1c:  leave
082704e5 +0x1d:  ret
```

## 反编译 C

```c
// RentalMachinePcRoom::~RentalMachinePcRoom @ 0x82704c8

/* RentalMachinePcRoom::~RentalMachinePcRoom() */

void __thiscall RentalMachinePcRoom::~RentalMachinePcRoom(RentalMachinePcRoom *this)

{
  ~RentalMachinePcRoom(this);
  operator_delete(this);
  return;
}
```

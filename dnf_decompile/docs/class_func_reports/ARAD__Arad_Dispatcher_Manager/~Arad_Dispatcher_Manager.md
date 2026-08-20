# ~Arad_Dispatcher_Manager

`_ZN4ARAD23Arad_Dispatcher_ManagerD1Ev`

`ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Manager` | `0x0818fe32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818fe32  _ZN4ARAD23Arad_Dispatcher_ManagerD1Ev
#           ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager()
# range [0x0818fe32, 0x0818fe37]
0818fe32 +0x00:  push   %ebp
0818fe33 +0x01:  mov    %esp,%ebp
0818fe35 +0x03:  pop    %ebp
0818fe36 +0x04:  ret
0818fe37 +0x05:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager @ 0x818fe32

/* ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager() */

void __thiscall
ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager(Arad_Dispatcher_Manager *this)

{
  return;
}
```

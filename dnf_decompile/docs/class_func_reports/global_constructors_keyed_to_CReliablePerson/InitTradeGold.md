# InitTradeGold

`_GLOBAL__I__ZN15CReliablePerson13InitTradeGoldEjjj`

`global constructors keyed to CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CReliablePerson` | `0x086454a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086454a8  _GLOBAL__I__ZN15CReliablePerson13InitTradeGoldEjjj
#           global constructors keyed to CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int)
# range [0x086454a8, 0x086454c3]
086454a8 +0x00:  push   %ebp
086454a9 +0x01:  mov    %esp,%ebp
086454ab +0x03:  sub    $0x18,%esp
086454ae +0x06:  movl   $0xffff,0x4(%esp)
086454b6 +0x0e:  movl   $0x1,(%esp)
086454bd +0x15:  call   08645468 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086454c2 +0x1a:  leave
086454c3 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x86454a8

/* CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int) */

void CReliablePerson::_GLOBAL__I_InitTradeGold(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

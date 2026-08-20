# Arad_Dispatcher_Manager

`_GLOBAL__I__ZN4ARAD23Arad_Dispatcher_ManagerC2Ev`

`global constructors keyed to ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_Dispatcher_Manager` | `0x0819015d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819015d  _GLOBAL__I__ZN4ARAD23Arad_Dispatcher_ManagerC2Ev
#           global constructors keyed to ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager()
# range [0x0819015d, 0x0819017b]
0819015d +0x00:  push   %ebp
0819015e +0x01:  mov    %esp,%ebp
08190160 +0x03:  sub    $0x18,%esp
08190163 +0x06:  movl   $0xffff,0x4(%esp)
0819016b +0x0e:  movl   $0x1,(%esp)
08190172 +0x15:  call   0819011d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08190177 +0x1a:  leave
08190178 +0x1b:  ret
08190179 +0x1c:  nop
0819017a +0x1d:  nop
0819017b +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x819015d

/* ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager() */

void ARAD::Arad_Dispatcher_Manager::_GLOBAL__I_Arad_Dispatcher_Manager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

# Arad_MomijiEvent

`_GLOBAL__I__ZN16Arad_MomijiEventC2Ev`

`global constructors keyed to Arad_MomijiEvent::Arad_MomijiEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Arad_MomijiEvent` | `0x0819e89f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e89f  _GLOBAL__I__ZN16Arad_MomijiEventC2Ev
#           global constructors keyed to Arad_MomijiEvent::Arad_MomijiEvent()
# range [0x0819e89f, 0x0819e8bb]
0819e89f +0x00:  push   %ebp
0819e8a0 +0x01:  mov    %esp,%ebp
0819e8a2 +0x03:  sub    $0x18,%esp
0819e8a5 +0x06:  movl   $0xffff,0x4(%esp)
0819e8ad +0x0e:  movl   $0x1,(%esp)
0819e8b4 +0x15:  call   0819e85f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0819e8b9 +0x1a:  leave
0819e8ba +0x1b:  ret
0819e8bb +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x819e89f

/* Arad_MomijiEvent::Arad_MomijiEvent() */

void Arad_MomijiEvent::_GLOBAL__I_Arad_MomijiEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

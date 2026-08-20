# Init

`_GLOBAL__I__ZN4ARAD20Arad_GMCommandManger4InitEv`

`global constructors keyed to ARAD::Arad_GMCommandManger::Init()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_GMCommandManger` | `0x081982e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081982e4  _GLOBAL__I__ZN4ARAD20Arad_GMCommandManger4InitEv
#           global constructors keyed to ARAD::Arad_GMCommandManger::Init()
# range [0x081982e4, 0x081982ff]
081982e4 +0x00:  push   %ebp
081982e5 +0x01:  mov    %esp,%ebp
081982e7 +0x03:  sub    $0x18,%esp
081982ea +0x06:  movl   $0xffff,0x4(%esp)
081982f2 +0x0e:  movl   $0x1,(%esp)
081982f9 +0x15:  call   081982a4 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081982fe +0x1a:  leave
081982ff +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81982e4

/* ARAD::Arad_GMCommandManger::Init() */

void ARAD::Arad_GMCommandManger::_GLOBAL__I_Init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

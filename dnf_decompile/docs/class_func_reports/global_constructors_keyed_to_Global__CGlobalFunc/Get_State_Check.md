# Get_State_Check

`_GLOBAL__I__ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state`

`global constructors keyed to Global::CGlobalFunc::Get_State_Check(ch_state)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Global::CGlobalFunc` | `0x08146cfd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146cfd  _GLOBAL__I__ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state
#           global constructors keyed to Global::CGlobalFunc::Get_State_Check(ch_state)
# range [0x08146cfd, 0x08146d1b]
08146cfd +0x00:  push   %ebp
08146cfe +0x01:  mov    %esp,%ebp
08146d00 +0x03:  sub    $0x18,%esp
08146d03 +0x06:  movl   $0xffff,0x4(%esp)
08146d0b +0x0e:  movl   $0x1,(%esp)
08146d12 +0x15:  call   08146cbd <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08146d17 +0x1a:  leave
08146d18 +0x1b:  ret
08146d19 +0x1c:  nop
08146d1a +0x1d:  nop
08146d1b +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8146cfd

/* Global::CGlobalFunc::Get_State_Check(ch_state) */

void Global::CGlobalFunc::_GLOBAL__I_Get_State_Check(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

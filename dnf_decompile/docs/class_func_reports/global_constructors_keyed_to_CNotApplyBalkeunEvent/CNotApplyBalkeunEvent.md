# CNotApplyBalkeunEvent

`_GLOBAL__I__ZN21CNotApplyBalkeunEventC2Ev`

`global constructors keyed to CNotApplyBalkeunEvent::CNotApplyBalkeunEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CNotApplyBalkeunEvent` | `0x081b9f81` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9f81  _GLOBAL__I__ZN21CNotApplyBalkeunEventC2Ev
#           global constructors keyed to CNotApplyBalkeunEvent::CNotApplyBalkeunEvent()
# range [0x081b9f81, 0x081b9f9f]
081b9f81 +0x00:  push   %ebp
081b9f82 +0x01:  mov    %esp,%ebp
081b9f84 +0x03:  sub    $0x18,%esp
081b9f87 +0x06:  movl   $0xffff,0x4(%esp)
081b9f8f +0x0e:  movl   $0x1,(%esp)
081b9f96 +0x15:  call   081b9f41 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b9f9b +0x1a:  leave
081b9f9c +0x1b:  ret
081b9f9d +0x1c:  nop
081b9f9e +0x1d:  nop
081b9f9f +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b9f81

/* CNotApplyBalkeunEvent::CNotApplyBalkeunEvent() */

void CNotApplyBalkeunEvent::_GLOBAL__I_CNotApplyBalkeunEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

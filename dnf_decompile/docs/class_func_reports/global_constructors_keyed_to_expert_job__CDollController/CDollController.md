# CDollController

`_GLOBAL__I__ZN10expert_job15CDollControllerC2Ev`

`global constructors keyed to expert_job::CDollController::CDollController()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to expert_job::CDollController` | `0x085d465e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d465e  _GLOBAL__I__ZN10expert_job15CDollControllerC2Ev
#           global constructors keyed to expert_job::CDollController::CDollController()
# range [0x085d465e, 0x085d467b]
085d465e +0x00:  push   %ebp
085d465f +0x01:  mov    %esp,%ebp
085d4661 +0x03:  sub    $0x18,%esp
085d4664 +0x06:  movl   $0xffff,0x4(%esp)
085d466c +0x0e:  movl   $0x1,(%esp)
085d4673 +0x15:  call   085d461e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085d4678 +0x1a:  leave
085d4679 +0x1b:  ret
085d467a +0x1c:  nop
085d467b +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85d465e

/* expert_job::CDollController::CDollController() */

void expert_job::CDollController::_GLOBAL__I_CDollController(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

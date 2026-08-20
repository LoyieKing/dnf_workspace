# inc

`_GLOBAL__I__ZN7PerfMgr3incENS_8TASK_IDXE`

`global constructors keyed to PerfMgr::inc(PerfMgr::TASK_IDX)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to PerfMgr` | `0x085c3cd7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3cd7  _GLOBAL__I__ZN7PerfMgr3incENS_8TASK_IDXE
#           global constructors keyed to PerfMgr::inc(PerfMgr::TASK_IDX)
# range [0x085c3cd7, 0x085c3cf3]
085c3cd7 +0x00:  push   %ebp
085c3cd8 +0x01:  mov    %esp,%ebp
085c3cda +0x03:  sub    $0x18,%esp
085c3cdd +0x06:  movl   $0xffff,0x4(%esp)
085c3ce5 +0x0e:  movl   $0x1,(%esp)
085c3cec +0x15:  call   085c3c97 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085c3cf1 +0x1a:  leave
085c3cf2 +0x1b:  ret
085c3cf3 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85c3cd7

/* PerfMgr::inc(PerfMgr::TASK_IDX) */

void PerfMgr::_GLOBAL__I_inc(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

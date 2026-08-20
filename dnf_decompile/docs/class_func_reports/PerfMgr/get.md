# get

`_ZN7PerfMgr3getENS_8TASK_IDXE`

`PerfMgr::get(PerfMgr::TASK_IDX)`

| 类 | 地址 |
|---|---|
| `PerfMgr` | `0x085c3c5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3c5c  _ZN7PerfMgr3getENS_8TASK_IDXE
#           PerfMgr::get(PerfMgr::TASK_IDX)
# range [0x085c3c5c, 0x085c3c69]
085c3c5c +0x00:  push   %ebp
085c3c5d +0x01:  mov    %esp,%ebp
085c3c5f +0x03:  mov    0xc(%ebp),%edx
085c3c62 +0x06:  mov    0x8(%ebp),%eax
085c3c65 +0x09:  mov    (%eax,%edx,4),%eax
085c3c68 +0x0c:  pop    %ebp
085c3c69 +0x0d:  ret
```

## 反编译 C

```c
// PerfMgr::get @ 0x85c3c5c

/* PerfMgr::get(PerfMgr::TASK_IDX) */

undefined4 __thiscall PerfMgr::get(PerfMgr *this,int param_2)

{
  return *(undefined4 *)(this + param_2 * 4);
}
```

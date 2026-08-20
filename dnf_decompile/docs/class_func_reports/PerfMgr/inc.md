# inc

`_ZN7PerfMgr3incENS_8TASK_IDXE`

`PerfMgr::inc(PerfMgr::TASK_IDX)`

| 类 | 地址 |
|---|---|
| `PerfMgr` | `0x085c3c44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3c44  _ZN7PerfMgr3incENS_8TASK_IDXE
#           PerfMgr::inc(PerfMgr::TASK_IDX)
# range [0x085c3c44, 0x085c3c5b]
085c3c44 +0x00:  push   %ebp
085c3c45 +0x01:  mov    %esp,%ebp
085c3c47 +0x03:  mov    0xc(%ebp),%eax
085c3c4a +0x06:  mov    0x8(%ebp),%edx
085c3c4d +0x09:  mov    (%edx,%eax,4),%edx
085c3c50 +0x0c:  lea    0x1(%edx),%ecx
085c3c53 +0x0f:  mov    0x8(%ebp),%edx
085c3c56 +0x12:  mov    %ecx,(%edx,%eax,4)
085c3c59 +0x15:  pop    %ebp
085c3c5a +0x16:  ret
085c3c5b +0x17:  nop
```

## 反编译 C

```c
// PerfMgr::inc @ 0x85c3c44

/* PerfMgr::inc(PerfMgr::TASK_IDX) */

void __thiscall PerfMgr::inc(PerfMgr *this,int param_2)

{
  *(int *)(this + param_2 * 4) = *(int *)(this + param_2 * 4) + 1;
  return;
}
```

# clear

`_ZN7PerfMgr5clearEv`

`PerfMgr::clear()`

| 类 | 地址 |
|---|---|
| `PerfMgr` | `0x085c3c6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3c6a  _ZN7PerfMgr5clearEv
#           PerfMgr::clear()
# range [0x085c3c6a, 0x085c3c96]
085c3c6a +0x00:  push   %ebp
085c3c6b +0x01:  mov    %esp,%ebp
085c3c6d +0x03:  sub    $0x10,%esp
085c3c70 +0x06:  movl   $0x0,-0x4(%ebp)
085c3c77 +0x0d:  jmp    085c3c8a <+0x20>
085c3c79 +0x0f:  mov    -0x4(%ebp),%edx
085c3c7c +0x12:  mov    0x8(%ebp),%eax
085c3c7f +0x15:  movl   $0x0,(%eax,%edx,4)
085c3c86 +0x1c:  addl   $0x1,-0x4(%ebp)
085c3c8a +0x20:  cmpl   $0x3,-0x4(%ebp)
085c3c8e +0x24:  setle  %al
085c3c91 +0x27:  test   %al,%al
085c3c93 +0x29:  jne    085c3c79 <+0xf>
085c3c95 +0x2b:  leave
085c3c96 +0x2c:  ret
```

## 反编译 C

```c
// PerfMgr::clear @ 0x85c3c6a

/* PerfMgr::clear() */

void __thiscall PerfMgr::clear(PerfMgr *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4) = 0;
  }
  return;
}
```

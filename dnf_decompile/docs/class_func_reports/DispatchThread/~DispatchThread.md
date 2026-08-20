# ~DispatchThread

`_ZN14DispatchThreadD1Ev`

`DispatchThread::~DispatchThread()`

| 类 | 地址 |
|---|---|
| `DispatchThread` | `0x0847e284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847e284  _ZN14DispatchThreadD1Ev
#           DispatchThread::~DispatchThread()
# range [0x0847e284, 0x0847e2b3]
0847e284 +0x00:  push   %ebp
0847e285 +0x01:  mov    %esp,%ebp
0847e287 +0x03:  sub    $0x18,%esp
0847e28a +0x06:  mov    0x8(%ebp),%eax
0847e28d +0x09:  movl   $&_ZTV14DispatchThread+0x8,(%eax)
0847e293 +0x0f:  mov    0x8(%ebp),%eax
0847e296 +0x12:  mov    %eax,(%esp)
0847e299 +0x15:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
0847e29e +0x1a:  mov    $0x0,%eax
0847e2a3 +0x1f:  test   %al,%al
0847e2a5 +0x21:  je     0847e2b2 <+0x2e>
0847e2a7 +0x23:  mov    0x8(%ebp),%eax
0847e2aa +0x26:  mov    %eax,(%esp)
0847e2ad +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0847e2b2 +0x2e:  leave
0847e2b3 +0x2f:  ret
```

## 反编译 C

```c
// DispatchThread::~DispatchThread @ 0x847e284

/* WARNING: Removing unreachable block (ram,0x0847e2a7) */
/* DispatchThread::~DispatchThread() */

void __thiscall DispatchThread::~DispatchThread(DispatchThread *this)

{
  *(undefined ***)this = &PTR_stop_08c71ca0;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}
```

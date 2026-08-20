# DBThread

`_ZN8DBThreadC1Ev`

`DBThread::DBThread()`

| 类 | 地址 |
|---|---|
| `DBThread` | `0x083ff5f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff5f2  _ZN8DBThreadC1Ev
#           DBThread::DBThread()
# range [0x083ff5f2, 0x083ff647]
083ff5f2 +0x00:  push   %ebp
083ff5f3 +0x01:  mov    %esp,%ebp
083ff5f5 +0x03:  push   %esi
083ff5f6 +0x04:  push   %ebx
083ff5f7 +0x05:  sub    $0x10,%esp
083ff5fa +0x08:  mov    0x8(%ebp),%eax
083ff5fd +0x0b:  mov    %eax,(%esp)
083ff600 +0x0e:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
083ff605 +0x13:  mov    0x8(%ebp),%eax
083ff608 +0x16:  movl   $&_ZTV8DBThread+0x8,(%eax)
083ff60e +0x1c:  mov    0x8(%ebp),%eax
083ff611 +0x1f:  movb   $0x0,0xc(%eax)
083ff615 +0x23:  mov    0x8(%ebp),%eax
083ff618 +0x26:  add    $0x10,%eax
083ff61b +0x29:  mov    %eax,(%esp)
083ff61e +0x2c:  call   085ecaec <_ZN13CQueryCounterC1Ev>  ; CQueryCounter::CQueryCounter()
083ff623 +0x31:  jmp    083ff640 <+0x4e>
083ff625 +0x33:  mov    %edx,%ebx
083ff627 +0x35:  mov    %eax,%esi
083ff629 +0x37:  mov    0x8(%ebp),%eax
083ff62c +0x3a:  mov    %eax,(%esp)
083ff62f +0x3d:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
083ff634 +0x42:  mov    %esi,%eax
083ff636 +0x44:  mov    %ebx,%edx
083ff638 +0x46:  mov    %eax,(%esp)
083ff63b +0x49:  call   08ae3750 <_Unwind_Resume>
083ff640 +0x4e:  add    $0x10,%esp
083ff643 +0x51:  pop    %ebx
083ff644 +0x52:  pop    %esi
083ff645 +0x53:  pop    %ebp
083ff646 +0x54:  ret
083ff647 +0x55:  nop
```

## 反编译 C

```c
// DBThread::DBThread @ 0x83ff5f2

/* DBThread::DBThread() */

void __thiscall DBThread::DBThread(DBThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08c5fd20;
  this[0xc] = (DBThread)0x0;
                    /* try { // try from 083ff61e to 083ff622 has its CatchHandler @ 083ff625 */
  CQueryCounter::CQueryCounter((CQueryCounter *)(this + 0x10));
  return;
}
```

# ~DBThread

`_ZN8DBThreadD1Ev`

`DBThread::~DBThread()`

| 类 | 地址 |
|---|---|
| `DBThread` | `0x083ff648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff648  _ZN8DBThreadD1Ev
#           DBThread::~DBThread()
# range [0x083ff648, 0x083ff6a9]
083ff648 +0x00:  push   %ebp
083ff649 +0x01:  mov    %esp,%ebp
083ff64b +0x03:  push   %esi
083ff64c +0x04:  push   %ebx
083ff64d +0x05:  sub    $0x10,%esp
083ff650 +0x08:  mov    0x8(%ebp),%eax
083ff653 +0x0b:  movl   $&_ZTV8DBThread+0x8,(%eax)
083ff659 +0x11:  mov    0x8(%ebp),%eax
083ff65c +0x14:  add    $0x10,%eax
083ff65f +0x17:  mov    %eax,(%esp)
083ff662 +0x1a:  call   085ecb8a <_ZN13CQueryCounterD1Ev>  ; CQueryCounter::~CQueryCounter()
083ff667 +0x1f:  jmp    083ff684 <+0x3c>
083ff669 +0x21:  mov    %edx,%ebx
083ff66b +0x23:  mov    %eax,%esi
083ff66d +0x25:  mov    0x8(%ebp),%eax
083ff670 +0x28:  mov    %eax,(%esp)
083ff673 +0x2b:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
083ff678 +0x30:  mov    %esi,%eax
083ff67a +0x32:  mov    %ebx,%edx
083ff67c +0x34:  mov    %eax,(%esp)
083ff67f +0x37:  call   08ae3750 <_Unwind_Resume>
083ff684 +0x3c:  mov    0x8(%ebp),%eax
083ff687 +0x3f:  mov    %eax,(%esp)
083ff68a +0x42:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
083ff68f +0x47:  mov    $0x0,%eax
083ff694 +0x4c:  test   %al,%al
083ff696 +0x4e:  je     083ff6a3 <+0x5b>
083ff698 +0x50:  mov    0x8(%ebp),%eax
083ff69b +0x53:  mov    %eax,(%esp)
083ff69e +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ff6a3 +0x5b:  add    $0x10,%esp
083ff6a6 +0x5e:  pop    %ebx
083ff6a7 +0x5f:  pop    %esi
083ff6a8 +0x60:  pop    %ebp
083ff6a9 +0x61:  ret
```

## 反编译 C

```c
// DBThread::~DBThread @ 0x83ff648

/* WARNING: Removing unreachable block (ram,0x083ff698) */
/* DBThread::~DBThread() */

void __thiscall DBThread::~DBThread(DBThread *this)

{
  *(undefined ***)this = &PTR_stop_08c5fd20;
                    /* try { // try from 083ff662 to 083ff666 has its CatchHandler @ 083ff669 */
  CQueryCounter::~CQueryCounter((CQueryCounter *)(this + 0x10));
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}
```

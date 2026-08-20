# ~NetworkThread

`_ZN13NetworkThreadD1Ev`

`NetworkThread::~NetworkThread()`

| 类 | 地址 |
|---|---|
| `NetworkThread` | `0x0857d570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d570  _ZN13NetworkThreadD1Ev
#           NetworkThread::~NetworkThread()
# range [0x0857d570, 0x0857d59f]
0857d570 +0x00:  push   %ebp
0857d571 +0x01:  mov    %esp,%ebp
0857d573 +0x03:  sub    $0x18,%esp
0857d576 +0x06:  mov    0x8(%ebp),%eax
0857d579 +0x09:  movl   $&_ZTV13NetworkThread+0x8,(%eax)
0857d57f +0x0f:  mov    0x8(%ebp),%eax
0857d582 +0x12:  mov    %eax,(%esp)
0857d585 +0x15:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
0857d58a +0x1a:  mov    $0x0,%eax
0857d58f +0x1f:  test   %al,%al
0857d591 +0x21:  je     0857d59e <+0x2e>
0857d593 +0x23:  mov    0x8(%ebp),%eax
0857d596 +0x26:  mov    %eax,(%esp)
0857d599 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857d59e +0x2e:  leave
0857d59f +0x2f:  ret
```

## 反编译 C

```c
// NetworkThread::~NetworkThread @ 0x857d570

/* WARNING: Removing unreachable block (ram,0x0857d593) */
/* NetworkThread::~NetworkThread() */

void __thiscall NetworkThread::~NetworkThread(NetworkThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca9098;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}
```

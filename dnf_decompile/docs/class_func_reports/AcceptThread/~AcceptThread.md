# ~AcceptThread

`_ZN12AcceptThreadD1Ev`

`AcceptThread::~AcceptThread()`

| 类 | 地址 |
|---|---|
| `AcceptThread` | `0x0857cc0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857cc0c  _ZN12AcceptThreadD1Ev
#           AcceptThread::~AcceptThread()
# range [0x0857cc0c, 0x0857cc3b]
0857cc0c +0x00:  push   %ebp
0857cc0d +0x01:  mov    %esp,%ebp
0857cc0f +0x03:  sub    $0x18,%esp
0857cc12 +0x06:  mov    0x8(%ebp),%eax
0857cc15 +0x09:  movl   $&_ZTV12AcceptThread+0x8,(%eax)
0857cc1b +0x0f:  mov    0x8(%ebp),%eax
0857cc1e +0x12:  mov    %eax,(%esp)
0857cc21 +0x15:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
0857cc26 +0x1a:  mov    $0x0,%eax
0857cc2b +0x1f:  test   %al,%al
0857cc2d +0x21:  je     0857cc3a <+0x2e>
0857cc2f +0x23:  mov    0x8(%ebp),%eax
0857cc32 +0x26:  mov    %eax,(%esp)
0857cc35 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857cc3a +0x2e:  leave
0857cc3b +0x2f:  ret
```

## 反编译 C

```c
// AcceptThread::~AcceptThread @ 0x857cc0c

/* WARNING: Removing unreachable block (ram,0x0857cc2f) */
/* AcceptThread::~AcceptThread() */

void __thiscall AcceptThread::~AcceptThread(AcceptThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca90b0;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}
```

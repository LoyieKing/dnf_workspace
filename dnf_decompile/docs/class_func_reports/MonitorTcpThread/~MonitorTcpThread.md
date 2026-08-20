# ~MonitorTcpThread

`_ZN16MonitorTcpThreadD1Ev`

`MonitorTcpThread::~MonitorTcpThread()`

| 类 | 地址 |
|---|---|
| `MonitorTcpThread` | `0x0857d90c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d90c  _ZN16MonitorTcpThreadD1Ev
#           MonitorTcpThread::~MonitorTcpThread()
# range [0x0857d90c, 0x0857d93b]
0857d90c +0x00:  push   %ebp
0857d90d +0x01:  mov    %esp,%ebp
0857d90f +0x03:  sub    $0x18,%esp
0857d912 +0x06:  mov    0x8(%ebp),%eax
0857d915 +0x09:  movl   $&_ZTV16MonitorTcpThread+0x8,(%eax)
0857d91b +0x0f:  mov    0x8(%ebp),%eax
0857d91e +0x12:  mov    %eax,(%esp)
0857d921 +0x15:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
0857d926 +0x1a:  mov    $0x0,%eax
0857d92b +0x1f:  test   %al,%al
0857d92d +0x21:  je     0857d93a <+0x2e>
0857d92f +0x23:  mov    0x8(%ebp),%eax
0857d932 +0x26:  mov    %eax,(%esp)
0857d935 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857d93a +0x2e:  leave
0857d93b +0x2f:  ret
```

## 反编译 C

```c
// MonitorTcpThread::~MonitorTcpThread @ 0x857d90c

/* WARNING: Removing unreachable block (ram,0x0857d92f) */
/* MonitorTcpThread::~MonitorTcpThread() */

void __thiscall MonitorTcpThread::~MonitorTcpThread(MonitorTcpThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca9080;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}
```

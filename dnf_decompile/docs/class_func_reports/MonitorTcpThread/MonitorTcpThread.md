# MonitorTcpThread

`_ZN16MonitorTcpThreadC1Ev`

`MonitorTcpThread::MonitorTcpThread()`

| 类 | 地址 |
|---|---|
| `MonitorTcpThread` | `0x0857d8f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d8f0  _ZN16MonitorTcpThreadC1Ev
#           MonitorTcpThread::MonitorTcpThread()
# range [0x0857d8f0, 0x0857d90b]
0857d8f0 +0x00:  push   %ebp
0857d8f1 +0x01:  mov    %esp,%ebp
0857d8f3 +0x03:  sub    $0x18,%esp
0857d8f6 +0x06:  mov    0x8(%ebp),%eax
0857d8f9 +0x09:  mov    %eax,(%esp)
0857d8fc +0x0c:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
0857d901 +0x11:  mov    0x8(%ebp),%eax
0857d904 +0x14:  movl   $&_ZTV16MonitorTcpThread+0x8,(%eax)
0857d90a +0x1a:  leave
0857d90b +0x1b:  ret
```

## 反编译 C

```c
// MonitorTcpThread::MonitorTcpThread @ 0x857d8f0

/* MonitorTcpThread::MonitorTcpThread() */

void __thiscall MonitorTcpThread::MonitorTcpThread(MonitorTcpThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca9080;
  return;
}
```

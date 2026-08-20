# ~MonitorTcpThread

`_ZN16MonitorTcpThreadD0Ev`

`MonitorTcpThread::~MonitorTcpThread()`

| 类 | 地址 |
|---|---|
| `MonitorTcpThread` | `0x0857d93c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d93c  _ZN16MonitorTcpThreadD0Ev
#           MonitorTcpThread::~MonitorTcpThread()
# range [0x0857d93c, 0x0857d959]
0857d93c +0x00:  push   %ebp
0857d93d +0x01:  mov    %esp,%ebp
0857d93f +0x03:  sub    $0x18,%esp
0857d942 +0x06:  mov    0x8(%ebp),%eax
0857d945 +0x09:  mov    %eax,(%esp)
0857d948 +0x0c:  call   0857d90c <_ZN16MonitorTcpThreadD1Ev>  ; MonitorTcpThread::~MonitorTcpThread()
0857d94d +0x11:  mov    0x8(%ebp),%eax
0857d950 +0x14:  mov    %eax,(%esp)
0857d953 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857d958 +0x1c:  leave
0857d959 +0x1d:  ret
```

## 反编译 C

```c
// MonitorTcpThread::~MonitorTcpThread @ 0x857d93c

/* MonitorTcpThread::~MonitorTcpThread() */

void __thiscall MonitorTcpThread::~MonitorTcpThread(MonitorTcpThread *this)

{
  ~MonitorTcpThread(this);
  operator_delete(this);
  return;
}
```

# ~UdpThread

`_ZN9UdpThreadD0Ev`

`UdpThread::~UdpThread()`

| 类 | 地址 |
|---|---|
| `UdpThread` | `0x0857c3a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c3a0  _ZN9UdpThreadD0Ev
#           UdpThread::~UdpThread()
# range [0x0857c3a0, 0x0857c3bd]
0857c3a0 +0x00:  push   %ebp
0857c3a1 +0x01:  mov    %esp,%ebp
0857c3a3 +0x03:  sub    $0x18,%esp
0857c3a6 +0x06:  mov    0x8(%ebp),%eax
0857c3a9 +0x09:  mov    %eax,(%esp)
0857c3ac +0x0c:  call   0857c370 <_ZN9UdpThreadD1Ev>  ; UdpThread::~UdpThread()
0857c3b1 +0x11:  mov    0x8(%ebp),%eax
0857c3b4 +0x14:  mov    %eax,(%esp)
0857c3b7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857c3bc +0x1c:  leave
0857c3bd +0x1d:  ret
```

## 反编译 C

```c
// UdpThread::~UdpThread @ 0x857c3a0

/* UdpThread::~UdpThread() */

void __thiscall UdpThread::~UdpThread(UdpThread *this)

{
  ~UdpThread(this);
  operator_delete(this);
  return;
}
```

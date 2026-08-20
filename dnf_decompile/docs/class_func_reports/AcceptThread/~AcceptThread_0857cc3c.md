# ~AcceptThread

`_ZN12AcceptThreadD0Ev`

`AcceptThread::~AcceptThread()`

| 类 | 地址 |
|---|---|
| `AcceptThread` | `0x0857cc3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857cc3c  _ZN12AcceptThreadD0Ev
#           AcceptThread::~AcceptThread()
# range [0x0857cc3c, 0x0857cc59]
0857cc3c +0x00:  push   %ebp
0857cc3d +0x01:  mov    %esp,%ebp
0857cc3f +0x03:  sub    $0x18,%esp
0857cc42 +0x06:  mov    0x8(%ebp),%eax
0857cc45 +0x09:  mov    %eax,(%esp)
0857cc48 +0x0c:  call   0857cc0c <_ZN12AcceptThreadD1Ev>  ; AcceptThread::~AcceptThread()
0857cc4d +0x11:  mov    0x8(%ebp),%eax
0857cc50 +0x14:  mov    %eax,(%esp)
0857cc53 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857cc58 +0x1c:  leave
0857cc59 +0x1d:  ret
```

## 反编译 C

```c
// AcceptThread::~AcceptThread @ 0x857cc3c

/* AcceptThread::~AcceptThread() */

void __thiscall AcceptThread::~AcceptThread(AcceptThread *this)

{
  ~AcceptThread(this);
  operator_delete(this);
  return;
}
```

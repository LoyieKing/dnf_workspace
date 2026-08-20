# ~DispatchThread

`_ZN14DispatchThreadD0Ev`

`DispatchThread::~DispatchThread()`

| 类 | 地址 |
|---|---|
| `DispatchThread` | `0x0847e2b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847e2b4  _ZN14DispatchThreadD0Ev
#           DispatchThread::~DispatchThread()
# range [0x0847e2b4, 0x0847e2d1]
0847e2b4 +0x00:  push   %ebp
0847e2b5 +0x01:  mov    %esp,%ebp
0847e2b7 +0x03:  sub    $0x18,%esp
0847e2ba +0x06:  mov    0x8(%ebp),%eax
0847e2bd +0x09:  mov    %eax,(%esp)
0847e2c0 +0x0c:  call   0847e284 <_ZN14DispatchThreadD1Ev>  ; DispatchThread::~DispatchThread()
0847e2c5 +0x11:  mov    0x8(%ebp),%eax
0847e2c8 +0x14:  mov    %eax,(%esp)
0847e2cb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0847e2d0 +0x1c:  leave
0847e2d1 +0x1d:  ret
```

## 反编译 C

```c
// DispatchThread::~DispatchThread @ 0x847e2b4

/* DispatchThread::~DispatchThread() */

void __thiscall DispatchThread::~DispatchThread(DispatchThread *this)

{
  ~DispatchThread(this);
  operator_delete(this);
  return;
}
```

# DispatchThread

`_ZN14DispatchThreadC1Ev`

`DispatchThread::DispatchThread()`

| 类 | 地址 |
|---|---|
| `DispatchThread` | `0x0847e268` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847e268  _ZN14DispatchThreadC1Ev
#           DispatchThread::DispatchThread()
# range [0x0847e268, 0x0847e283]
0847e268 +0x00:  push   %ebp
0847e269 +0x01:  mov    %esp,%ebp
0847e26b +0x03:  sub    $0x18,%esp
0847e26e +0x06:  mov    0x8(%ebp),%eax
0847e271 +0x09:  mov    %eax,(%esp)
0847e274 +0x0c:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
0847e279 +0x11:  mov    0x8(%ebp),%eax
0847e27c +0x14:  movl   $&_ZTV14DispatchThread+0x8,(%eax)
0847e282 +0x1a:  leave
0847e283 +0x1b:  ret
```

## 反编译 C

```c
// DispatchThread::DispatchThread @ 0x847e268

/* DispatchThread::DispatchThread() */

void __thiscall DispatchThread::DispatchThread(DispatchThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08c71ca0;
  return;
}
```

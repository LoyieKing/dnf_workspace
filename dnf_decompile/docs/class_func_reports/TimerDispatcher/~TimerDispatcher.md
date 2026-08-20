# ~TimerDispatcher

`_ZN15TimerDispatcherD1Ev`

`TimerDispatcher::~TimerDispatcher()`

| 类 | 地址 |
|---|---|
| `TimerDispatcher` | `0x0863298e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863298e  _ZN15TimerDispatcherD1Ev
#           TimerDispatcher::~TimerDispatcher()
# range [0x0863298e, 0x086329f5]
0863298e +0x00:  push   %ebp
0863298f +0x01:  mov    %esp,%ebp
08632991 +0x03:  sub    $0x28,%esp
08632994 +0x06:  movl   $0x0,-0xc(%ebp)
0863299b +0x0d:  jmp    086329e6 <+0x58>
0863299d +0x0f:  mov    -0xc(%ebp),%edx
086329a0 +0x12:  mov    0x8(%ebp),%eax
086329a3 +0x15:  mov    (%eax,%edx,4),%eax
086329a6 +0x18:  test   %eax,%eax
086329a8 +0x1a:  je     086329d5 <+0x47>
086329aa +0x1c:  mov    -0xc(%ebp),%edx
086329ad +0x1f:  mov    0x8(%ebp),%eax
086329b0 +0x22:  mov    (%eax,%edx,4),%eax
086329b3 +0x25:  test   %eax,%eax
086329b5 +0x27:  je     086329d5 <+0x47>
086329b7 +0x29:  mov    -0xc(%ebp),%edx
086329ba +0x2c:  mov    0x8(%ebp),%eax
086329bd +0x2f:  mov    (%eax,%edx,4),%eax
086329c0 +0x32:  mov    (%eax),%eax
086329c2 +0x34:  add    $0x8,%eax
086329c5 +0x37:  mov    (%eax),%ecx
086329c7 +0x39:  mov    -0xc(%ebp),%edx
086329ca +0x3c:  mov    0x8(%ebp),%eax
086329cd +0x3f:  mov    (%eax,%edx,4),%eax
086329d0 +0x42:  mov    %eax,(%esp)
086329d3 +0x45:  call   *%ecx
086329d5 +0x47:  mov    -0xc(%ebp),%edx
086329d8 +0x4a:  mov    0x8(%ebp),%eax
086329db +0x4d:  movl   $0x0,(%eax,%edx,4)
086329e2 +0x54:  addl   $0x1,-0xc(%ebp)
086329e6 +0x58:  cmpl   $0xae,-0xc(%ebp)
086329ed +0x5f:  setle  %al
086329f0 +0x62:  test   %al,%al
086329f2 +0x64:  jne    0863299d <+0xf>
086329f4 +0x66:  leave
086329f5 +0x67:  ret
```

## 反编译 C

```c
// TimerDispatcher::~TimerDispatcher @ 0x863298e

/* TimerDispatcher::~TimerDispatcher() */

void __thiscall TimerDispatcher::~TimerDispatcher(TimerDispatcher *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0xaf; local_10 = local_10 + 1) {
    if ((*(int *)(this + local_10 * 4) != 0) && (*(int *)(this + local_10 * 4) != 0)) {
      (**(code **)(**(int **)(this + local_10 * 4) + 8))(*(undefined4 *)(this + local_10 * 4));
    }
    *(undefined4 *)(this + local_10 * 4) = 0;
  }
  return;
}
```

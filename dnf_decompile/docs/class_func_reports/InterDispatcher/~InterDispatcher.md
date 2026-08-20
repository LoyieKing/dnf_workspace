# ~InterDispatcher

`_ZN15InterDispatcherD1Ev`

`InterDispatcher::~InterDispatcher()`

| 类 | 地址 |
|---|---|
| `InterDispatcher` | `0x084be89e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084be89e  _ZN15InterDispatcherD1Ev
#           InterDispatcher::~InterDispatcher()
# range [0x084be89e, 0x084be905]
084be89e +0x00:  push   %ebp
084be89f +0x01:  mov    %esp,%ebp
084be8a1 +0x03:  sub    $0x28,%esp
084be8a4 +0x06:  movl   $0x0,-0xc(%ebp)
084be8ab +0x0d:  jmp    084be8f6 <+0x58>
084be8ad +0x0f:  mov    -0xc(%ebp),%edx
084be8b0 +0x12:  mov    0x8(%ebp),%eax
084be8b3 +0x15:  mov    (%eax,%edx,4),%eax
084be8b6 +0x18:  test   %eax,%eax
084be8b8 +0x1a:  je     084be8e5 <+0x47>
084be8ba +0x1c:  mov    -0xc(%ebp),%edx
084be8bd +0x1f:  mov    0x8(%ebp),%eax
084be8c0 +0x22:  mov    (%eax,%edx,4),%eax
084be8c3 +0x25:  test   %eax,%eax
084be8c5 +0x27:  je     084be8e5 <+0x47>
084be8c7 +0x29:  mov    -0xc(%ebp),%edx
084be8ca +0x2c:  mov    0x8(%ebp),%eax
084be8cd +0x2f:  mov    (%eax,%edx,4),%eax
084be8d0 +0x32:  mov    (%eax),%eax
084be8d2 +0x34:  add    $0x8,%eax
084be8d5 +0x37:  mov    (%eax),%ecx
084be8d7 +0x39:  mov    -0xc(%ebp),%edx
084be8da +0x3c:  mov    0x8(%ebp),%eax
084be8dd +0x3f:  mov    (%eax,%edx,4),%eax
084be8e0 +0x42:  mov    %eax,(%esp)
084be8e3 +0x45:  call   *%ecx
084be8e5 +0x47:  mov    -0xc(%ebp),%edx
084be8e8 +0x4a:  mov    0x8(%ebp),%eax
084be8eb +0x4d:  movl   $0x0,(%eax,%edx,4)
084be8f2 +0x54:  addl   $0x1,-0xc(%ebp)
084be8f6 +0x58:  cmpl   $0x353,-0xc(%ebp)
084be8fd +0x5f:  setle  %al
084be900 +0x62:  test   %al,%al
084be902 +0x64:  jne    084be8ad <+0xf>
084be904 +0x66:  leave
084be905 +0x67:  ret
```

## 反编译 C

```c
// InterDispatcher::~InterDispatcher @ 0x84be89e

/* InterDispatcher::~InterDispatcher() */

void __thiscall InterDispatcher::~InterDispatcher(InterDispatcher *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x354; local_10 = local_10 + 1) {
    if ((*(int *)(this + local_10 * 4) != 0) && (*(int *)(this + local_10 * 4) != 0)) {
      (**(code **)(**(int **)(this + local_10 * 4) + 8))(*(undefined4 *)(this + local_10 * 4));
    }
    *(undefined4 *)(this + local_10 * 4) = 0;
  }
  return;
}
```

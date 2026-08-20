# destroy

`_ZN12EpollHandler7destroyEv`

`EpollHandler::destroy()`

| 类 | 地址 |
|---|---|
| `EpollHandler` | `0x0857c0f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c0f8  _ZN12EpollHandler7destroyEv
#           EpollHandler::destroy()
# range [0x0857c0f8, 0x0857c121]
0857c0f8 +0x00:  push   %ebp
0857c0f9 +0x01:  mov    %esp,%ebp
0857c0fb +0x03:  sub    $0x18,%esp
0857c0fe +0x06:  mov    0x8(%ebp),%eax
0857c101 +0x09:  mov    0xc(%eax),%eax
0857c104 +0x0c:  test   %eax,%eax
0857c106 +0x0e:  je     0857c116 <+0x1e>
0857c108 +0x10:  mov    0x8(%ebp),%eax
0857c10b +0x13:  mov    0xc(%eax),%eax
0857c10e +0x16:  mov    %eax,(%esp)
0857c111 +0x19:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0857c116 +0x1e:  mov    0x8(%ebp),%eax
0857c119 +0x21:  movl   $0x0,0xc(%eax)
0857c120 +0x28:  leave
0857c121 +0x29:  ret
```

## 反编译 C

```c
// EpollHandler::destroy @ 0x857c0f8

/* EpollHandler::destroy() */

void __thiscall EpollHandler::destroy(EpollHandler *this)

{
  if (*(int *)(this + 0xc) != 0) {
    operator_delete__(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

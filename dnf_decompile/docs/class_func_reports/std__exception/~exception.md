# ~exception

`_ZNSt9exceptionD1Ev`

`std::exception::~exception()`

| 类 | 地址 |
|---|---|
| `std::exception` | `0x08725080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725080  _ZNSt9exceptionD1Ev
#           std::exception::~exception()
# range [0x08725080, 0x0872509f]
08725080 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08725085 +0x05:  add    $0xc47b13,%ecx
0872508b +0x0b:  push   %ebp
0872508c +0x0c:  mov    %esp,%ebp
0872508e +0x0e:  mov    -0x20c(%ecx),%eax
08725094 +0x14:  lea    0x8(%eax),%edx
08725097 +0x17:  mov    0x8(%ebp),%eax
0872509a +0x1a:  mov    %edx,(%eax)
0872509c +0x1c:  pop    %ebp
0872509d +0x1d:  ret
0872509e +0x1e:  nop
0872509f +0x1f:  nop
```

## 反编译 C

```c
// std::exception::~exception @ 0x8725080

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  *(undefined **)this = PTR_vtable_0936c98c + 8;
  return;
}
```

# ~exception

`_ZNSt9exceptionD0Ev`

`std::exception::~exception()`

| 类 | 地址 |
|---|---|
| `std::exception` | `0x08725210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725210  _ZNSt9exceptionD0Ev
#           std::exception::~exception()
# range [0x08725210, 0x0872524f]
08725210 +0x00:  push   %ebp
08725211 +0x01:  mov    %esp,%ebp
08725213 +0x03:  sub    $0x18,%esp
08725216 +0x06:  mov    %ebx,-0x8(%ebp)
08725219 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0872521e +0x0e:  add    $0xc4797a,%ebx
08725224 +0x14:  mov    %esi,-0x4(%ebp)
08725227 +0x17:  mov    0x8(%ebp),%esi
0872522a +0x1a:  mov    %esi,(%esp)
0872522d +0x1d:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
08725232 +0x22:  mov    %esi,(%esp)
08725235 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0872523a +0x2a:  mov    -0x8(%ebp),%ebx
0872523d +0x2d:  mov    -0x4(%ebp),%esi
08725240 +0x30:  mov    %ebp,%esp
08725242 +0x32:  pop    %ebp
08725243 +0x33:  ret
08725244 +0x34:  nop
08725245 +0x35:  nop
08725246 +0x36:  nop
08725247 +0x37:  nop
08725248 +0x38:  nop
08725249 +0x39:  nop
0872524a +0x3a:  nop
0872524b +0x3b:  nop
0872524c +0x3c:  nop
0872524d +0x3d:  nop
0872524e +0x3e:  nop
0872524f +0x3f:  nop
```

## 反编译 C

```c
// std::exception::~exception @ 0x8725210

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return;
}
```

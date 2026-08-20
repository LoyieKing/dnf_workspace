# __exchange_and_add_dispatch

`_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii`

`__gnu_cxx::__exchange_and_add_dispatch(int*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x0854e19b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e19b  _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii
#           __gnu_cxx::__exchange_and_add_dispatch(int*, int)
# range [0x0854e19b, 0x0854e1d6]
0854e19b +0x00:  push   %ebp
0854e19c +0x01:  mov    %esp,%ebp
0854e19e +0x03:  sub    $0x8,%esp
0854e1a1 +0x06:  call   0854e134 <_ZL18__gthread_active_pv>  ; __gthread_active_p()
0854e1a6 +0x0b:  test   %eax,%eax
0854e1a8 +0x0d:  setne  %al
0854e1ab +0x10:  test   %al,%al
0854e1ad +0x12:  je     0854e1c3 <+0x28>
0854e1af +0x14:  mov    0x8(%ebp),%eax
0854e1b2 +0x17:  mov    0xc(%ebp),%edx
0854e1b5 +0x1a:  mov    %edx,0x4(%esp)
0854e1b9 +0x1e:  mov    %eax,(%esp)
0854e1bc +0x21:  call   0854e146 <_ZN9__gnu_cxxL18__exchange_and_addEPVii>  ; __gnu_cxx::__exchange_and_add(int volatile*, int)
0854e1c1 +0x26:  jmp    0854e1d5 <+0x3a>
0854e1c3 +0x28:  mov    0xc(%ebp),%eax
0854e1c6 +0x2b:  mov    %eax,0x4(%esp)
0854e1ca +0x2f:  mov    0x8(%ebp),%eax
0854e1cd +0x32:  mov    %eax,(%esp)
0854e1d0 +0x35:  call   0854e165 <_ZN9__gnu_cxxL25__exchange_and_add_singleEPii>  ; __gnu_cxx::__exchange_and_add_single(int*, int)
0854e1d5 +0x3a:  leave
0854e1d6 +0x3b:  ret
```

## 反编译 C

```c
// __gnu_cxx::__exchange_and_add_dispatch @ 0x854e19b

/* __gnu_cxx::__exchange_and_add_dispatch(int*, int) */

void __gnu_cxx::__exchange_and_add_dispatch(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __gthread_active_p();
  if (iVar1 == 0) {
    __exchange_and_add_single(param_1,param_2);
  }
  else {
    __exchange_and_add(param_1,param_2);
  }
  return;
}
```

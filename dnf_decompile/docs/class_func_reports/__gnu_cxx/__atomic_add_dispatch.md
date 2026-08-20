# __atomic_add_dispatch

`_ZN9__gnu_cxxL21__atomic_add_dispatchEPii`

`__gnu_cxx::__atomic_add_dispatch(int*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x0854e1d7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e1d7  _ZN9__gnu_cxxL21__atomic_add_dispatchEPii
#           __gnu_cxx::__atomic_add_dispatch(int*, int)
# range [0x0854e1d7, 0x0854e212]
0854e1d7 +0x00:  push   %ebp
0854e1d8 +0x01:  mov    %esp,%ebp
0854e1da +0x03:  sub    $0x8,%esp
0854e1dd +0x06:  call   0854e134 <_ZL18__gthread_active_pv>  ; __gthread_active_p()
0854e1e2 +0x0b:  test   %eax,%eax
0854e1e4 +0x0d:  setne  %al
0854e1e7 +0x10:  test   %al,%al
0854e1e9 +0x12:  je     0854e1ff <+0x28>
0854e1eb +0x14:  mov    0x8(%ebp),%eax
0854e1ee +0x17:  mov    0xc(%ebp),%edx
0854e1f1 +0x1a:  mov    %edx,0x4(%esp)
0854e1f5 +0x1e:  mov    %eax,(%esp)
0854e1f8 +0x21:  call   0854e157 <_ZN9__gnu_cxxL12__atomic_addEPVii>  ; __gnu_cxx::__atomic_add(int volatile*, int)
0854e1fd +0x26:  jmp    0854e211 <+0x3a>
0854e1ff +0x28:  mov    0xc(%ebp),%eax
0854e202 +0x2b:  mov    %eax,0x4(%esp)
0854e206 +0x2f:  mov    0x8(%ebp),%eax
0854e209 +0x32:  mov    %eax,(%esp)
0854e20c +0x35:  call   0854e187 <_ZN9__gnu_cxxL19__atomic_add_singleEPii>  ; __gnu_cxx::__atomic_add_single(int*, int)
0854e211 +0x3a:  leave
0854e212 +0x3b:  ret
```

## 反编译 C

```c
// __gnu_cxx::__atomic_add_dispatch @ 0x854e1d7

/* __gnu_cxx::__atomic_add_dispatch(int*, int) */

void __gnu_cxx::__atomic_add_dispatch(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __gthread_active_p();
  if (iVar1 == 0) {
    __atomic_add_single(param_1,param_2);
  }
  else {
    __atomic_add(param_1,param_2);
  }
  return;
}
```

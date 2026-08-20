# __exchange_and_add_dispatch

`_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii`

`__gnu_cxx::__exchange_and_add_dispatch(int*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x08ad3917` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3917  _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii
#           __gnu_cxx::__exchange_and_add_dispatch(int*, int)
# range [0x08ad3917, 0x08ad3952]
08ad3917 +0x00:  push   %ebp
08ad3918 +0x01:  mov    %esp,%ebp
08ad391a +0x03:  sub    $0x8,%esp
08ad391d +0x06:  call   08ad38b0 <_ZL18__gthread_active_pv>  ; __gthread_active_p()
08ad3922 +0x0b:  test   %eax,%eax
08ad3924 +0x0d:  setne  %al
08ad3927 +0x10:  test   %al,%al
08ad3929 +0x12:  je     08ad393f <+0x28>
08ad392b +0x14:  mov    0x8(%ebp),%eax
08ad392e +0x17:  mov    0xc(%ebp),%edx
08ad3931 +0x1a:  mov    %edx,0x4(%esp)
08ad3935 +0x1e:  mov    %eax,(%esp)
08ad3938 +0x21:  call   08ad38c2 <_ZN9__gnu_cxxL18__exchange_and_addEPVii>  ; __gnu_cxx::__exchange_and_add(int volatile*, int)
08ad393d +0x26:  jmp    08ad3951 <+0x3a>
08ad393f +0x28:  mov    0xc(%ebp),%eax
08ad3942 +0x2b:  mov    %eax,0x4(%esp)
08ad3946 +0x2f:  mov    0x8(%ebp),%eax
08ad3949 +0x32:  mov    %eax,(%esp)
08ad394c +0x35:  call   08ad38e1 <_ZN9__gnu_cxxL25__exchange_and_add_singleEPii>  ; __gnu_cxx::__exchange_and_add_single(int*, int)
08ad3951 +0x3a:  leave
08ad3952 +0x3b:  ret
```

## 反编译 C

```c
// __gnu_cxx::__exchange_and_add_dispatch @ 0x8ad3917

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

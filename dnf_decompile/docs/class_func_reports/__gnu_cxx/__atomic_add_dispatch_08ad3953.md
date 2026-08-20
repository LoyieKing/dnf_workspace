# __atomic_add_dispatch

`_ZN9__gnu_cxxL21__atomic_add_dispatchEPii`

`__gnu_cxx::__atomic_add_dispatch(int*, int)`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x08ad3953` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3953  _ZN9__gnu_cxxL21__atomic_add_dispatchEPii
#           __gnu_cxx::__atomic_add_dispatch(int*, int)
# range [0x08ad3953, 0x08ad398f]
08ad3953 +0x00:  push   %ebp
08ad3954 +0x01:  mov    %esp,%ebp
08ad3956 +0x03:  sub    $0x8,%esp
08ad3959 +0x06:  call   08ad38b0 <_ZL18__gthread_active_pv>  ; __gthread_active_p()
08ad395e +0x0b:  test   %eax,%eax
08ad3960 +0x0d:  setne  %al
08ad3963 +0x10:  test   %al,%al
08ad3965 +0x12:  je     08ad397b <+0x28>
08ad3967 +0x14:  mov    0x8(%ebp),%eax
08ad396a +0x17:  mov    0xc(%ebp),%edx
08ad396d +0x1a:  mov    %edx,0x4(%esp)
08ad3971 +0x1e:  mov    %eax,(%esp)
08ad3974 +0x21:  call   08ad38d3 <_ZN9__gnu_cxxL12__atomic_addEPVii>  ; __gnu_cxx::__atomic_add(int volatile*, int)
08ad3979 +0x26:  jmp    08ad398d <+0x3a>
08ad397b +0x28:  mov    0xc(%ebp),%eax
08ad397e +0x2b:  mov    %eax,0x4(%esp)
08ad3982 +0x2f:  mov    0x8(%ebp),%eax
08ad3985 +0x32:  mov    %eax,(%esp)
08ad3988 +0x35:  call   08ad3903 <_ZN9__gnu_cxxL19__atomic_add_singleEPii>  ; __gnu_cxx::__atomic_add_single(int*, int)
08ad398d +0x3a:  leave
08ad398e +0x3b:  ret
08ad398f +0x3c:  nop
```

## 反编译 C

```c
// __gnu_cxx::__atomic_add_dispatch @ 0x8ad3953

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

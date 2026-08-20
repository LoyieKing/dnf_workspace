# timer

`_ZN5yaSSL5timerEv`

`yaSSL::timer()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a1780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1780  _ZN5yaSSL5timerEv
#           yaSSL::timer()
# range [0x087a1780, 0x087a17bf]
087a1780 +0x00:  push   %ebp
087a1781 +0x01:  mov    %esp,%ebp
087a1783 +0x03:  push   %ebx
087a1784 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1789 +0x09:  add    $0xbcb40f,%ebx
087a178f +0x0f:  sub    $0x24,%esp
087a1792 +0x12:  lea    -0x10(%ebp),%eax
087a1795 +0x15:  movl   $0x0,0x4(%esp)
087a179d +0x1d:  mov    %eax,(%esp)
087a17a0 +0x20:  call   0807e2f0 <_init+0xbe8>
087a17a5 +0x25:  fildl  -0x10(%ebp)
087a17a8 +0x28:  fildl  -0xc(%ebp)
087a17ab +0x2b:  fdivs  -0x65f6a8(%ebx)
087a17b1 +0x31:  add    $0x24,%esp
087a17b4 +0x34:  pop    %ebx
087a17b5 +0x35:  pop    %ebp
087a17b6 +0x36:  faddp  %st,%st(1)
087a17b8 +0x38:  ret
087a17b9 +0x39:  nop
087a17ba +0x3a:  nop
087a17bb +0x3b:  nop
087a17bc +0x3c:  nop
087a17bd +0x3d:  nop
087a17be +0x3e:  nop
087a17bf +0x3f:  nop
```

## 反编译 C

```c
// yaSSL::timer @ 0x87a1780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::timer() */

longdouble yaSSL::timer(void)

{
  timeval local_14;
  undefined4 uStack_c;
  
  uStack_c = 0x87a1789;
  gettimeofday(&local_14,(__timezone_ptr_t)0x0);
  return (longdouble)local_14.tv_usec / (longdouble)DAT_08d0d4f0 + (longdouble)local_14.tv_sec;
}
```

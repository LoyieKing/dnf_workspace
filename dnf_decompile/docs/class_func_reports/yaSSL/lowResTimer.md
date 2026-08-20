# lowResTimer

`_ZN5yaSSL11lowResTimerEv`

`yaSSL::lowResTimer()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a1750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1750  _ZN5yaSSL11lowResTimerEv
#           yaSSL::lowResTimer()
# range [0x087a1750, 0x087a177e]
087a1750 +0x00:  push   %ebp
087a1751 +0x01:  mov    %esp,%ebp
087a1753 +0x03:  push   %ebx
087a1754 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1759 +0x09:  add    $0xbcb43f,%ebx
087a175f +0x0f:  sub    $0x24,%esp
087a1762 +0x12:  lea    -0x10(%ebp),%eax
087a1765 +0x15:  movl   $0x0,0x4(%esp)
087a176d +0x1d:  mov    %eax,(%esp)
087a1770 +0x20:  call   0807e2f0 <_init+0xbe8>
087a1775 +0x25:  mov    -0x10(%ebp),%eax
087a1778 +0x28:  add    $0x24,%esp
087a177b +0x2b:  pop    %ebx
087a177c +0x2c:  pop    %ebp
087a177d +0x2d:  ret
087a177e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::lowResTimer @ 0x87a1750

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::lowResTimer() */

__time_t yaSSL::lowResTimer(void)

{
  timeval local_14;
  undefined4 uStack_c;
  
  uStack_c = 0x87a1759;
  gettimeofday(&local_14,(__timezone_ptr_t)0x0);
  return local_14.tv_sec;
}
```

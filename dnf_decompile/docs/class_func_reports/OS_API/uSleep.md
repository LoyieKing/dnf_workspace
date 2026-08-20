# uSleep

`_ZN6OS_API6uSleepEj`

`OS_API::uSleep(unsigned int)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c4fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c4fa  _ZN6OS_API6uSleepEj
#           OS_API::uSleep(unsigned int)
# range [0x0858c4fa, 0x0858c539]
0858c4fa +0x00:  push   %ebp
0858c4fb +0x01:  mov    %esp,%ebp
0858c4fd +0x03:  sub    $0x38,%esp
0858c500 +0x06:  movl   $0x0,-0x10(%ebp)
0858c507 +0x0d:  mov    0x8(%ebp),%eax
0858c50a +0x10:  mov    %eax,-0xc(%ebp)
0858c50d +0x13:  lea    -0x10(%ebp),%eax
0858c510 +0x16:  mov    %eax,0x10(%esp)
0858c514 +0x1a:  movl   $0x0,0xc(%esp)
0858c51c +0x22:  movl   $0x0,0x8(%esp)
0858c524 +0x2a:  movl   $0x0,0x4(%esp)
0858c52c +0x32:  movl   $0x0,(%esp)
0858c533 +0x39:  call   0807e840 <_init+0x1138>
0858c538 +0x3e:  leave
0858c539 +0x3f:  ret
```

## 反编译 C

```c
// OS_API::uSleep @ 0x858c4fa

/* OS_API::uSleep(unsigned int) */

void OS_API::uSleep(uint param_1)

{
  timeval local_14 [2];
  
  local_14[0].tv_sec = 0;
  local_14[0].tv_usec = param_1;
  select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,local_14);
  return;
}
```

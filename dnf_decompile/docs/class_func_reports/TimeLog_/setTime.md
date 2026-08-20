# setTime

`_ZN8TimeLog_7setTimeEv`

`TimeLog_::setTime()`

| 类 | 地址 |
|---|---|
| `TimeLog_` | `0x0854e228` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e228  _ZN8TimeLog_7setTimeEv
#           TimeLog_::setTime()
# range [0x0854e228, 0x0854e2ad]
0854e228 +0x00:  push   %ebp
0854e229 +0x01:  mov    %esp,%ebp
0854e22b +0x03:  sub    $0x58,%esp
0854e22e +0x06:  movl   $0x0,(%esp)
0854e235 +0x0d:  call   0807d750 <_init+0x48>
0854e23a +0x12:  mov    %eax,-0x10(%ebp)
0854e23d +0x15:  lea    -0x3c(%ebp),%eax
0854e240 +0x18:  mov    %eax,0x4(%esp)
0854e244 +0x1c:  lea    -0x10(%ebp),%eax
0854e247 +0x1f:  mov    %eax,(%esp)
0854e24a +0x22:  call   0807e360 <_init+0xc58>
0854e24f +0x27:  mov    %eax,-0xc(%ebp)
0854e252 +0x2a:  mov    -0xc(%ebp),%eax
0854e255 +0x2d:  mov    0x14(%eax),%eax
0854e258 +0x30:  add    $0x76c,%ax
0854e25c +0x34:  mov    %eax,%edx
0854e25e +0x36:  mov    0x8(%ebp),%eax
0854e261 +0x39:  mov    %dx,(%eax)
0854e264 +0x3c:  mov    -0xc(%ebp),%eax
0854e267 +0x3f:  mov    0x10(%eax),%eax
0854e26a +0x42:  add    $0x1,%eax
0854e26d +0x45:  mov    %eax,%edx
0854e26f +0x47:  mov    0x8(%ebp),%eax
0854e272 +0x4a:  mov    %dl,0x2(%eax)
0854e275 +0x4d:  mov    -0xc(%ebp),%eax
0854e278 +0x50:  mov    0xc(%eax),%eax
0854e27b +0x53:  mov    %eax,%edx
0854e27d +0x55:  mov    0x8(%ebp),%eax
0854e280 +0x58:  mov    %dl,0x3(%eax)
0854e283 +0x5b:  mov    -0xc(%ebp),%eax
0854e286 +0x5e:  mov    0x8(%eax),%eax
0854e289 +0x61:  mov    %eax,%edx
0854e28b +0x63:  mov    0x8(%ebp),%eax
0854e28e +0x66:  mov    %dl,0x4(%eax)
0854e291 +0x69:  mov    -0xc(%ebp),%eax
0854e294 +0x6c:  mov    0x4(%eax),%eax
0854e297 +0x6f:  mov    %eax,%edx
0854e299 +0x71:  mov    0x8(%ebp),%eax
0854e29c +0x74:  mov    %dl,0x5(%eax)
0854e29f +0x77:  mov    -0xc(%ebp),%eax
0854e2a2 +0x7a:  mov    (%eax),%eax
0854e2a4 +0x7c:  mov    %eax,%edx
0854e2a6 +0x7e:  mov    0x8(%ebp),%eax
0854e2a9 +0x81:  mov    %dl,0x6(%eax)
0854e2ac +0x84:  leave
0854e2ad +0x85:  ret
```

## 反编译 C

```c
// TimeLog_::setTime @ 0x854e228

/* TimeLog_::setTime() */

void __thiscall TimeLog_::setTime(TimeLog_ *this)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime_r(local_14,&local_40);
  *(short *)this = (short)ptVar1->tm_year + 0x76c;
  this[2] = (TimeLog_)((char)ptVar1->tm_mon + '\x01');
  this[3] = SUB41(ptVar1->tm_mday,0);
  this[4] = SUB41(ptVar1->tm_hour,0);
  this[5] = SUB41(ptVar1->tm_min,0);
  this[6] = SUB41(ptVar1->tm_sec,0);
  return;
}
```

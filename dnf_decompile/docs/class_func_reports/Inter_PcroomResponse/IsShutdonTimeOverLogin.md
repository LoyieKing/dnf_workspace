# IsShutdonTimeOverLogin

`_ZN20Inter_PcroomResponse22IsShutdonTimeOverLoginEv`

`Inter_PcroomResponse::IsShutdonTimeOverLogin()`

| 类 | 地址 |
|---|---|
| `Inter_PcroomResponse` | `0x084db40e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084db40e  _ZN20Inter_PcroomResponse22IsShutdonTimeOverLoginEv
#           Inter_PcroomResponse::IsShutdonTimeOverLogin()
# range [0x084db40e, 0x084db451]
084db40e +0x00:  push   %ebp
084db40f +0x01:  mov    %esp,%ebp
084db411 +0x03:  sub    $0x58,%esp
084db414 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084db41b +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084db420 +0x12:  mov    %eax,-0x10(%ebp)
084db423 +0x15:  lea    -0x3c(%ebp),%eax
084db426 +0x18:  mov    %eax,0x4(%esp)
084db42a +0x1c:  lea    -0x10(%ebp),%eax
084db42d +0x1f:  mov    %eax,(%esp)
084db430 +0x22:  call   0807e360 <_init+0xc58>
084db435 +0x27:  mov    %eax,-0xc(%ebp)
084db438 +0x2a:  mov    -0xc(%ebp),%eax
084db43b +0x2d:  mov    0x8(%eax),%eax
084db43e +0x30:  cmp    $0x5,%eax
084db441 +0x33:  jg     084db44a <+0x3c>
084db443 +0x35:  mov    $0x1,%eax
084db448 +0x3a:  jmp    084db44f <+0x41>
084db44a +0x3c:  mov    $0x0,%eax
084db44f +0x41:  leave
084db450 +0x42:  ret
084db451 +0x43:  nop
```

## 反编译 C

```c
// Inter_PcroomResponse::IsShutdonTimeOverLogin @ 0x84db40e

/* Inter_PcroomResponse::IsShutdonTimeOverLogin() */

bool Inter_PcroomResponse::IsShutdonTimeOverLogin(void)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  ptVar1 = localtime_r(local_14,&local_40);
  return ptVar1->tm_hour < 6;
}
```

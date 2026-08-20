# checkValidPassword

`_ZN8WongWork10CSimpleSSO18checkValidPasswordEjPKcS2_RNS0_14stOutputData_tE`

`WongWork::CSimpleSSO::checkValidPassword(unsigned int, char const*, char const*, WongWork::CSimpleSSO::stOutputData_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x086028c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086028c6  _ZN8WongWork10CSimpleSSO18checkValidPasswordEjPKcS2_RNS0_14stOutputData_tE
#           WongWork::CSimpleSSO::checkValidPassword(unsigned int, char const*, char const*, WongWork::CSimpleSSO::stOutputData_t&)
# range [0x086028c6, 0x08602905]
086028c6 +0x00:  push   %ebp
086028c7 +0x01:  mov    %esp,%ebp
086028c9 +0x03:  sub    $0xf8,%esp
086028cf +0x09:  movl   $0x0,-0x14(%ebp)
086028d6 +0x10:  movl   $0x0,-0x18(%ebp)
086028dd +0x17:  mov    0x18(%ebp),%eax
086028e0 +0x1a:  mov    %eax,0x10(%esp)
086028e4 +0x1e:  lea    -0x18(%ebp),%eax
086028e7 +0x21:  mov    %eax,0xc(%esp)
086028eb +0x25:  lea    -0x14(%ebp),%eax
086028ee +0x28:  mov    %eax,0x8(%esp)
086028f2 +0x2c:  mov    0xc(%ebp),%eax
086028f5 +0x2f:  mov    %eax,0x4(%esp)
086028f9 +0x33:  mov    0x8(%ebp),%eax
086028fc +0x36:  mov    %eax,(%esp)
086028ff +0x39:  call   08602da6 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>  ; WongWork::CSimpleSSO::_getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)
08602904 +0x3e:  leave
08602905 +0x3f:  ret
```

## 反编译 C

```c
// WongWork::CSimpleSSO::checkValidPassword @ 0x86028c6

/* WongWork::CSimpleSSO::checkValidPassword(unsigned int, char const*, char const*,
   WongWork::CSimpleSSO::stOutputData_t&) */

void __thiscall
WongWork::CSimpleSSO::checkValidPassword
          (CSimpleSSO *this,uint param_1,char *param_2,char *param_3,stOutputData_t *param_4)

{
  long local_1c [6];
  
  local_1c[1] = 0;
  local_1c[0] = 0;
  _getGameStartTime(this,param_1,local_1c + 1,local_1c,param_4);
  return;
}
```

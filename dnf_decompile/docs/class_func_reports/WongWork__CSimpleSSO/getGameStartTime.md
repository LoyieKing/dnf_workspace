# getGameStartTime

`_ZN8WongWork10CSimpleSSO16getGameStartTimeEjRlS1_RNS0_14stOutputData_tE`

`WongWork::CSimpleSSO::getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x086031f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086031f6  _ZN8WongWork10CSimpleSSO16getGameStartTimeEjRlS1_RNS0_14stOutputData_tE
#           WongWork::CSimpleSSO::getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)
# range [0x086031f6, 0x08603225]
086031f6 +0x00:  push   %ebp
086031f7 +0x01:  mov    %esp,%ebp
086031f9 +0x03:  sub    $0x28,%esp
086031fc +0x06:  mov    0x18(%ebp),%eax
086031ff +0x09:  mov    %eax,0x10(%esp)
08603203 +0x0d:  mov    0x14(%ebp),%eax
08603206 +0x10:  mov    %eax,0xc(%esp)
0860320a +0x14:  mov    0x10(%ebp),%eax
0860320d +0x17:  mov    %eax,0x8(%esp)
08603211 +0x1b:  mov    0xc(%ebp),%eax
08603214 +0x1e:  mov    %eax,0x4(%esp)
08603218 +0x22:  mov    0x8(%ebp),%eax
0860321b +0x25:  mov    %eax,(%esp)
0860321e +0x28:  call   08602da6 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>  ; WongWork::CSimpleSSO::_getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)
08603223 +0x2d:  leave
08603224 +0x2e:  ret
08603225 +0x2f:  nop
```

## 反编译 C

```c
// WongWork::CSimpleSSO::getGameStartTime @ 0x86031f6

/* WongWork::CSimpleSSO::getGameStartTime(unsigned int, long&, long&,
   WongWork::CSimpleSSO::stOutputData_t&) */

void __thiscall
WongWork::CSimpleSSO::getGameStartTime
          (CSimpleSSO *this,uint param_1,long *param_2,long *param_3,stOutputData_t *param_4)

{
  _getGameStartTime(this,param_1,param_2,param_3,param_4);
  return;
}
```

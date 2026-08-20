# get_lastError

`_ZN5yaSSL6Socket13get_lastErrorEv`

`yaSSL::Socket::get_lastError()`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1540  _ZN5yaSSL6Socket13get_lastErrorEv
#           yaSSL::Socket::get_lastError()
# range [0x087a1540, 0x087a155f]
087a1540 +0x00:  push   %ebp
087a1541 +0x01:  mov    %esp,%ebp
087a1543 +0x03:  push   %ebx
087a1544 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1549 +0x09:  add    $0xbcb64f,%ebx
087a154f +0x0f:  sub    $0x4,%esp
087a1552 +0x12:  call   0807dd70 <_init+0x668>
087a1557 +0x17:  mov    (%eax),%eax
087a1559 +0x19:  add    $0x4,%esp
087a155c +0x1c:  pop    %ebx
087a155d +0x1d:  pop    %ebp
087a155e +0x1e:  ret
087a155f +0x1f:  nop
```

## 反编译 C

```c
// yaSSL::Socket::get_lastError @ 0x87a1540

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::get_lastError() */

int yaSSL::Socket::get_lastError(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}
```

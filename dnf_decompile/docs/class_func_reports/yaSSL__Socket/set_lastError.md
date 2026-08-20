# set_lastError

`_ZN5yaSSL6Socket13set_lastErrorEi`

`yaSSL::Socket::set_lastError(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1510  _ZN5yaSSL6Socket13set_lastErrorEi
#           yaSSL::Socket::set_lastError(int)
# range [0x087a1510, 0x087a1539]
087a1510 +0x00:  push   %ebp
087a1511 +0x01:  mov    %esp,%ebp
087a1513 +0x03:  push   %ebx
087a1514 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1519 +0x09:  add    $0xbcb67f,%ebx
087a151f +0x0f:  sub    $0x4,%esp
087a1522 +0x12:  call   0807dd70 <_init+0x668>
087a1527 +0x17:  mov    0x8(%ebp),%edx
087a152a +0x1a:  mov    %edx,(%eax)
087a152c +0x1c:  add    $0x4,%esp
087a152f +0x1f:  pop    %ebx
087a1530 +0x20:  pop    %ebp
087a1531 +0x21:  ret
087a1532 +0x22:  lea    0x0(%esi,%eiz,1),%esi
087a1539 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Socket::set_lastError @ 0x87a1510

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::set_lastError(int) */

void yaSSL::Socket::set_lastError(int param_1)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = param_1;
  return;
}
```

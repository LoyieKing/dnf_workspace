# shutDown

`_ZN5yaSSL6Socket8shutDownEi`

`yaSSL::Socket::shutDown(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1560  _ZN5yaSSL6Socket8shutDownEi
#           yaSSL::Socket::shutDown(int)
# range [0x087a1560, 0x087a158c]
087a1560 +0x00:  push   %ebp
087a1561 +0x01:  mov    %esp,%ebp
087a1563 +0x03:  push   %ebx
087a1564 +0x04:  sub    $0x14,%esp
087a1567 +0x07:  mov    0xc(%ebp),%eax
087a156a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087a156f +0x0f:  add    $0xbcb629,%ebx
087a1575 +0x15:  mov    %eax,0x4(%esp)
087a1579 +0x19:  mov    0x8(%ebp),%eax
087a157c +0x1c:  mov    (%eax),%eax
087a157e +0x1e:  mov    %eax,(%esp)
087a1581 +0x21:  call   0807dd90 <_init+0x688>
087a1586 +0x26:  add    $0x14,%esp
087a1589 +0x29:  pop    %ebx
087a158a +0x2a:  pop    %ebp
087a158b +0x2b:  ret
087a158c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Socket::shutDown @ 0x87a1560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::shutDown(int) */

void __thiscall yaSSL::Socket::shutDown(Socket *this,int param_1)

{
  shutdown(*(int *)this,param_1);
  return;
}
```

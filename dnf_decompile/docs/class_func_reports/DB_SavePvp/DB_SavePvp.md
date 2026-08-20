# DB_SavePvp

`_ZN10DB_SavePvpC1Ev`

`DB_SavePvp::DB_SavePvp()`

| 类 | 地址 |
|---|---|
| `DB_SavePvp` | `0x0841720e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841720e  _ZN10DB_SavePvpC1Ev
#           DB_SavePvp::DB_SavePvp()
# range [0x0841720e, 0x08417229]
0841720e +0x00:  push   %ebp
0841720f +0x01:  mov    %esp,%ebp
08417211 +0x03:  sub    $0x18,%esp
08417214 +0x06:  mov    0x8(%ebp),%eax
08417217 +0x09:  mov    %eax,(%esp)
0841721a +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0841721f +0x11:  mov    0x8(%ebp),%eax
08417222 +0x14:  movl   $&_ZTV10DB_SavePvp+0x8,(%eax)
08417228 +0x1a:  leave
08417229 +0x1b:  ret
```

## 反编译 C

```c
// DB_SavePvp::DB_SavePvp @ 0x841720e

/* DB_SavePvp::DB_SavePvp() */

void __thiscall DB_SavePvp::DB_SavePvp(DB_SavePvp *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fac8;
  return;
}
```

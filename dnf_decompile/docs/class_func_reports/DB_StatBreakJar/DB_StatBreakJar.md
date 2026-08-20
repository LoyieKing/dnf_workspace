# DB_StatBreakJar

`_ZN15DB_StatBreakJarC1Ev`

`DB_StatBreakJar::DB_StatBreakJar()`

| 类 | 地址 |
|---|---|
| `DB_StatBreakJar` | `0x08417a12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417a12  _ZN15DB_StatBreakJarC1Ev
#           DB_StatBreakJar::DB_StatBreakJar()
# range [0x08417a12, 0x08417a2d]
08417a12 +0x00:  push   %ebp
08417a13 +0x01:  mov    %esp,%ebp
08417a15 +0x03:  sub    $0x18,%esp
08417a18 +0x06:  mov    0x8(%ebp),%eax
08417a1b +0x09:  mov    %eax,(%esp)
08417a1e +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417a23 +0x11:  mov    0x8(%ebp),%eax
08417a26 +0x14:  movl   $&_ZTV15DB_StatBreakJar+0x8,(%eax)
08417a2c +0x1a:  leave
08417a2d +0x1b:  ret
```

## 反编译 C

```c
// DB_StatBreakJar::DB_StatBreakJar @ 0x8417a12

/* DB_StatBreakJar::DB_StatBreakJar() */

void __thiscall DB_StatBreakJar::DB_StatBreakJar(DB_StatBreakJar *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa80;
  return;
}
```

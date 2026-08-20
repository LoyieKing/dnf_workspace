# DB_DeleteCharac

`_ZN15DB_DeleteCharacC1Ev`

`DB_DeleteCharac::DB_DeleteCharac()`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x08402bce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402bce  _ZN15DB_DeleteCharacC1Ev
#           DB_DeleteCharac::DB_DeleteCharac()
# range [0x08402bce, 0x08402be9]
08402bce +0x00:  push   %ebp
08402bcf +0x01:  mov    %esp,%ebp
08402bd1 +0x03:  sub    $0x18,%esp
08402bd4 +0x06:  mov    0x8(%ebp),%eax
08402bd7 +0x09:  mov    %eax,(%esp)
08402bda +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08402bdf +0x11:  mov    0x8(%ebp),%eax
08402be2 +0x14:  movl   $&_ZTV15DB_DeleteCharac+0x8,(%eax)
08402be8 +0x1a:  leave
08402be9 +0x1b:  ret
```

## 反编译 C

```c
// DB_DeleteCharac::DB_DeleteCharac @ 0x8402bce

/* DB_DeleteCharac::DB_DeleteCharac() */

void __thiscall DB_DeleteCharac::DB_DeleteCharac(DB_DeleteCharac *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc48;
  return;
}
```

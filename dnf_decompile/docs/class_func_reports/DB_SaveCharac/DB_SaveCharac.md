# DB_SaveCharac

`_ZN13DB_SaveCharacC1Ev`

`DB_SaveCharac::DB_SaveCharac()`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x08415c2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415c2e  _ZN13DB_SaveCharacC1Ev
#           DB_SaveCharac::DB_SaveCharac()
# range [0x08415c2e, 0x08415c49]
08415c2e +0x00:  push   %ebp
08415c2f +0x01:  mov    %esp,%ebp
08415c31 +0x03:  sub    $0x18,%esp
08415c34 +0x06:  mov    0x8(%ebp),%eax
08415c37 +0x09:  mov    %eax,(%esp)
08415c3a +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08415c3f +0x11:  mov    0x8(%ebp),%eax
08415c42 +0x14:  movl   $&_ZTV13DB_SaveCharac+0x8,(%eax)
08415c48 +0x1a:  leave
08415c49 +0x1b:  ret
```

## 反编译 C

```c
// DB_SaveCharac::DB_SaveCharac @ 0x8415c2e

/* DB_SaveCharac::DB_SaveCharac() */

void __thiscall DB_SaveCharac::DB_SaveCharac(DB_SaveCharac *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5faf8;
  return;
}
```

# DB_CreateCharac

`_ZN15DB_CreateCharacC1Ev`

`DB_CreateCharac::DB_CreateCharac()`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08400cc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08400cc2  _ZN15DB_CreateCharacC1Ev
#           DB_CreateCharac::DB_CreateCharac()
# range [0x08400cc2, 0x08400cdd]
08400cc2 +0x00:  push   %ebp
08400cc3 +0x01:  mov    %esp,%ebp
08400cc5 +0x03:  sub    $0x18,%esp
08400cc8 +0x06:  mov    0x8(%ebp),%eax
08400ccb +0x09:  mov    %eax,(%esp)
08400cce +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08400cd3 +0x11:  mov    0x8(%ebp),%eax
08400cd6 +0x14:  movl   $&_ZTV15DB_CreateCharac+0x8,(%eax)
08400cdc +0x1a:  leave
08400cdd +0x1b:  ret
```

## 反编译 C

```c
// DB_CreateCharac::DB_CreateCharac @ 0x8400cc2

/* DB_CreateCharac::DB_CreateCharac() */

void __thiscall DB_CreateCharac::DB_CreateCharac(DB_CreateCharac *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc78;
  return;
}
```

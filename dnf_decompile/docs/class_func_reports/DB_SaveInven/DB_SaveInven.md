# DB_SaveInven

`_ZN12DB_SaveInvenC1Ev`

`DB_SaveInven::DB_SaveInven()`

| 类 | 地址 |
|---|---|
| `DB_SaveInven` | `0x08416a42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08416a42  _ZN12DB_SaveInvenC1Ev
#           DB_SaveInven::DB_SaveInven()
# range [0x08416a42, 0x08416a5d]
08416a42 +0x00:  push   %ebp
08416a43 +0x01:  mov    %esp,%ebp
08416a45 +0x03:  sub    $0x18,%esp
08416a48 +0x06:  mov    0x8(%ebp),%eax
08416a4b +0x09:  mov    %eax,(%esp)
08416a4e +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08416a53 +0x11:  mov    0x8(%ebp),%eax
08416a56 +0x14:  movl   $&_ZTV12DB_SaveInven+0x8,(%eax)
08416a5c +0x1a:  leave
08416a5d +0x1b:  ret
```

## 反编译 C

```c
// DB_SaveInven::DB_SaveInven @ 0x8416a42

/* DB_SaveInven::DB_SaveInven() */

void __thiscall DB_SaveInven::DB_SaveInven(DB_SaveInven *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fae0;
  return;
}
```

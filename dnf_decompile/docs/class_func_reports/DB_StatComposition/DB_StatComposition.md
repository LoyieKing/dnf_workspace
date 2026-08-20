# DB_StatComposition

`_ZN18DB_StatCompositionC1Ev`

`DB_StatComposition::DB_StatComposition()`

| 类 | 地址 |
|---|---|
| `DB_StatComposition` | `0x08417b82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417b82  _ZN18DB_StatCompositionC1Ev
#           DB_StatComposition::DB_StatComposition()
# range [0x08417b82, 0x08417b9d]
08417b82 +0x00:  push   %ebp
08417b83 +0x01:  mov    %esp,%ebp
08417b85 +0x03:  sub    $0x18,%esp
08417b88 +0x06:  mov    0x8(%ebp),%eax
08417b8b +0x09:  mov    %eax,(%esp)
08417b8e +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417b93 +0x11:  mov    0x8(%ebp),%eax
08417b96 +0x14:  movl   $&_ZTV18DB_StatComposition+0x8,(%eax)
08417b9c +0x1a:  leave
08417b9d +0x1b:  ret
```

## 反编译 C

```c
// DB_StatComposition::DB_StatComposition @ 0x8417b82

/* DB_StatComposition::DB_StatComposition() */

void __thiscall DB_StatComposition::DB_StatComposition(DB_StatComposition *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa50;
  return;
}
```

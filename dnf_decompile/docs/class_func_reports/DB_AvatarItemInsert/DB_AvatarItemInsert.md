# DB_AvatarItemInsert

`_ZN19DB_AvatarItemInsertC1Ev`

`DB_AvatarItemInsert::DB_AvatarItemInsert()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemInsert` | `0x083ffd50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffd50  _ZN19DB_AvatarItemInsertC1Ev
#           DB_AvatarItemInsert::DB_AvatarItemInsert()
# range [0x083ffd50, 0x083ffd6b]
083ffd50 +0x00:  push   %ebp
083ffd51 +0x01:  mov    %esp,%ebp
083ffd53 +0x03:  sub    $0x18,%esp
083ffd56 +0x06:  mov    0x8(%ebp),%eax
083ffd59 +0x09:  mov    %eax,(%esp)
083ffd5c +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
083ffd61 +0x11:  mov    0x8(%ebp),%eax
083ffd64 +0x14:  movl   $&_ZTV19DB_AvatarItemInsert+0x8,(%eax)
083ffd6a +0x1a:  leave
083ffd6b +0x1b:  ret
```

## 反编译 C

```c
// DB_AvatarItemInsert::DB_AvatarItemInsert @ 0x83ffd50

/* DB_AvatarItemInsert::DB_AvatarItemInsert() */

void __thiscall DB_AvatarItemInsert::DB_AvatarItemInsert(DB_AvatarItemInsert *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fcd8;
  return;
}
```

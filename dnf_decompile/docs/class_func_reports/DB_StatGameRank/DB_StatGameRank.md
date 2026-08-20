# DB_StatGameRank

`_ZN15DB_StatGameRankC1Ev`

`DB_StatGameRank::DB_StatGameRank()`

| 类 | 地址 |
|---|---|
| `DB_StatGameRank` | `0x08417d66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417d66  _ZN15DB_StatGameRankC1Ev
#           DB_StatGameRank::DB_StatGameRank()
# range [0x08417d66, 0x08417d81]
08417d66 +0x00:  push   %ebp
08417d67 +0x01:  mov    %esp,%ebp
08417d69 +0x03:  sub    $0x18,%esp
08417d6c +0x06:  mov    0x8(%ebp),%eax
08417d6f +0x09:  mov    %eax,(%esp)
08417d72 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417d77 +0x11:  mov    0x8(%ebp),%eax
08417d7a +0x14:  movl   $&_ZTV15DB_StatGameRank+0x8,(%eax)
08417d80 +0x1a:  leave
08417d81 +0x1b:  ret
```

## 反编译 C

```c
// DB_StatGameRank::DB_StatGameRank @ 0x8417d66

/* DB_StatGameRank::DB_StatGameRank() */

void __thiscall DB_StatGameRank::DB_StatGameRank(DB_StatGameRank *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa20;
  return;
}
```

# DB_SaveSkill

`_ZN12DB_SaveSkillC1Ev`

`DB_SaveSkill::DB_SaveSkill()`

| 类 | 地址 |
|---|---|
| `DB_SaveSkill` | `0x08417770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417770  _ZN12DB_SaveSkillC1Ev
#           DB_SaveSkill::DB_SaveSkill()
# range [0x08417770, 0x0841778b]
08417770 +0x00:  push   %ebp
08417771 +0x01:  mov    %esp,%ebp
08417773 +0x03:  sub    $0x18,%esp
08417776 +0x06:  mov    0x8(%ebp),%eax
08417779 +0x09:  mov    %eax,(%esp)
0841777c +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417781 +0x11:  mov    0x8(%ebp),%eax
08417784 +0x14:  movl   $&_ZTV12DB_SaveSkill+0x8,(%eax)
0841778a +0x1a:  leave
0841778b +0x1b:  ret
```

## 反编译 C

```c
// DB_SaveSkill::DB_SaveSkill @ 0x8417770

/* DB_SaveSkill::DB_SaveSkill() */

void __thiscall DB_SaveSkill::DB_SaveSkill(DB_SaveSkill *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa98;
  return;
}
```

# ~DB_SaveSkill

`_ZN12DB_SaveSkillD1Ev`

`DB_SaveSkill::~DB_SaveSkill()`

| 类 | 地址 |
|---|---|
| `DB_SaveSkill` | `0x0841778c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841778c  _ZN12DB_SaveSkillD1Ev
#           DB_SaveSkill::~DB_SaveSkill()
# range [0x0841778c, 0x084177bb]
0841778c +0x00:  push   %ebp
0841778d +0x01:  mov    %esp,%ebp
0841778f +0x03:  sub    $0x18,%esp
08417792 +0x06:  mov    0x8(%ebp),%eax
08417795 +0x09:  movl   $&_ZTV12DB_SaveSkill+0x8,(%eax)
0841779b +0x0f:  mov    0x8(%ebp),%eax
0841779e +0x12:  mov    %eax,(%esp)
084177a1 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
084177a6 +0x1a:  mov    $0x0,%eax
084177ab +0x1f:  test   %al,%al
084177ad +0x21:  je     084177ba <+0x2e>
084177af +0x23:  mov    0x8(%ebp),%eax
084177b2 +0x26:  mov    %eax,(%esp)
084177b5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084177ba +0x2e:  leave
084177bb +0x2f:  ret
```

## 反编译 C

```c
// DB_SaveSkill::~DB_SaveSkill @ 0x841778c

/* WARNING: Removing unreachable block (ram,0x084177af) */
/* DB_SaveSkill::~DB_SaveSkill() */

void __thiscall DB_SaveSkill::~DB_SaveSkill(DB_SaveSkill *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa98;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```

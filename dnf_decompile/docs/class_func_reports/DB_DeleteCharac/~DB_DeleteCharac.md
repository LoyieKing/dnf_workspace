# ~DB_DeleteCharac

`_ZN15DB_DeleteCharacD1Ev`

`DB_DeleteCharac::~DB_DeleteCharac()`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x08402bea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402bea  _ZN15DB_DeleteCharacD1Ev
#           DB_DeleteCharac::~DB_DeleteCharac()
# range [0x08402bea, 0x08402c19]
08402bea +0x00:  push   %ebp
08402beb +0x01:  mov    %esp,%ebp
08402bed +0x03:  sub    $0x18,%esp
08402bf0 +0x06:  mov    0x8(%ebp),%eax
08402bf3 +0x09:  movl   $&_ZTV15DB_DeleteCharac+0x8,(%eax)
08402bf9 +0x0f:  mov    0x8(%ebp),%eax
08402bfc +0x12:  mov    %eax,(%esp)
08402bff +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08402c04 +0x1a:  mov    $0x0,%eax
08402c09 +0x1f:  test   %al,%al
08402c0b +0x21:  je     08402c18 <+0x2e>
08402c0d +0x23:  mov    0x8(%ebp),%eax
08402c10 +0x26:  mov    %eax,(%esp)
08402c13 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08402c18 +0x2e:  leave
08402c19 +0x2f:  ret
```

## 反编译 C

```c
// DB_DeleteCharac::~DB_DeleteCharac @ 0x8402bea

/* WARNING: Removing unreachable block (ram,0x08402c0d) */
/* DB_DeleteCharac::~DB_DeleteCharac() */

void __thiscall DB_DeleteCharac::~DB_DeleteCharac(DB_DeleteCharac *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc48;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```

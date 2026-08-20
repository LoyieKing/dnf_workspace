# ~DB_SaveInven

`_ZN12DB_SaveInvenD1Ev`

`DB_SaveInven::~DB_SaveInven()`

| 类 | 地址 |
|---|---|
| `DB_SaveInven` | `0x08416a5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08416a5e  _ZN12DB_SaveInvenD1Ev
#           DB_SaveInven::~DB_SaveInven()
# range [0x08416a5e, 0x08416a8d]
08416a5e +0x00:  push   %ebp
08416a5f +0x01:  mov    %esp,%ebp
08416a61 +0x03:  sub    $0x18,%esp
08416a64 +0x06:  mov    0x8(%ebp),%eax
08416a67 +0x09:  movl   $&_ZTV12DB_SaveInven+0x8,(%eax)
08416a6d +0x0f:  mov    0x8(%ebp),%eax
08416a70 +0x12:  mov    %eax,(%esp)
08416a73 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08416a78 +0x1a:  mov    $0x0,%eax
08416a7d +0x1f:  test   %al,%al
08416a7f +0x21:  je     08416a8c <+0x2e>
08416a81 +0x23:  mov    0x8(%ebp),%eax
08416a84 +0x26:  mov    %eax,(%esp)
08416a87 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08416a8c +0x2e:  leave
08416a8d +0x2f:  ret
```

## 反编译 C

```c
// DB_SaveInven::~DB_SaveInven @ 0x8416a5e

/* WARNING: Removing unreachable block (ram,0x08416a81) */
/* DB_SaveInven::~DB_SaveInven() */

void __thiscall DB_SaveInven::~DB_SaveInven(DB_SaveInven *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fae0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```

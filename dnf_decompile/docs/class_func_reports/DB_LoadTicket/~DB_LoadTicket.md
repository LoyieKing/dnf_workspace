# ~DB_LoadTicket

`_ZN13DB_LoadTicketD1Ev`

`DB_LoadTicket::~DB_LoadTicket()`

| 类 | 地址 |
|---|---|
| `DB_LoadTicket` | `0x0841958e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841958e  _ZN13DB_LoadTicketD1Ev
#           DB_LoadTicket::~DB_LoadTicket()
# range [0x0841958e, 0x084195bd]
0841958e +0x00:  push   %ebp
0841958f +0x01:  mov    %esp,%ebp
08419591 +0x03:  sub    $0x18,%esp
08419594 +0x06:  mov    0x8(%ebp),%eax
08419597 +0x09:  movl   $&_ZTV13DB_LoadTicket+0x8,(%eax)
0841959d +0x0f:  mov    0x8(%ebp),%eax
084195a0 +0x12:  mov    %eax,(%esp)
084195a3 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
084195a8 +0x1a:  mov    $0x0,%eax
084195ad +0x1f:  test   %al,%al
084195af +0x21:  je     084195bc <+0x2e>
084195b1 +0x23:  mov    0x8(%ebp),%eax
084195b4 +0x26:  mov    %eax,(%esp)
084195b7 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084195bc +0x2e:  leave
084195bd +0x2f:  ret
```

## 反编译 C

```c
// DB_LoadTicket::~DB_LoadTicket @ 0x841958e

/* WARNING: Removing unreachable block (ram,0x084195b1) */
/* DB_LoadTicket::~DB_LoadTicket() */

void __thiscall DB_LoadTicket::~DB_LoadTicket(DB_LoadTicket *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f978;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```

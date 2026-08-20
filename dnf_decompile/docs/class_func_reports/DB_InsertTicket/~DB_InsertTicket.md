# ~DB_InsertTicket

`_ZN15DB_InsertTicketD1Ev`

`DB_InsertTicket::~DB_InsertTicket()`

| 类 | 地址 |
|---|---|
| `DB_InsertTicket` | `0x08403a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403a6a  _ZN15DB_InsertTicketD1Ev
#           DB_InsertTicket::~DB_InsertTicket()
# range [0x08403a6a, 0x08403a99]
08403a6a +0x00:  push   %ebp
08403a6b +0x01:  mov    %esp,%ebp
08403a6d +0x03:  sub    $0x18,%esp
08403a70 +0x06:  mov    0x8(%ebp),%eax
08403a73 +0x09:  movl   $&_ZTV15DB_InsertTicket+0x8,(%eax)
08403a79 +0x0f:  mov    0x8(%ebp),%eax
08403a7c +0x12:  mov    %eax,(%esp)
08403a7f +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08403a84 +0x1a:  mov    $0x0,%eax
08403a89 +0x1f:  test   %al,%al
08403a8b +0x21:  je     08403a98 <+0x2e>
08403a8d +0x23:  mov    0x8(%ebp),%eax
08403a90 +0x26:  mov    %eax,(%esp)
08403a93 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08403a98 +0x2e:  leave
08403a99 +0x2f:  ret
```

## 反编译 C

```c
// DB_InsertTicket::~DB_InsertTicket @ 0x8403a6a

/* WARNING: Removing unreachable block (ram,0x08403a8d) */
/* DB_InsertTicket::~DB_InsertTicket() */

void __thiscall DB_InsertTicket::~DB_InsertTicket(DB_InsertTicket *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc18;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```

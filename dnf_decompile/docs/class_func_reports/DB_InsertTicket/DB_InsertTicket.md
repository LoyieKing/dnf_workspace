# DB_InsertTicket

`_ZN15DB_InsertTicketC1Ev`

`DB_InsertTicket::DB_InsertTicket()`

| 类 | 地址 |
|---|---|
| `DB_InsertTicket` | `0x08403a4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403a4e  _ZN15DB_InsertTicketC1Ev
#           DB_InsertTicket::DB_InsertTicket()
# range [0x08403a4e, 0x08403a69]
08403a4e +0x00:  push   %ebp
08403a4f +0x01:  mov    %esp,%ebp
08403a51 +0x03:  sub    $0x18,%esp
08403a54 +0x06:  mov    0x8(%ebp),%eax
08403a57 +0x09:  mov    %eax,(%esp)
08403a5a +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08403a5f +0x11:  mov    0x8(%ebp),%eax
08403a62 +0x14:  movl   $&_ZTV15DB_InsertTicket+0x8,(%eax)
08403a68 +0x1a:  leave
08403a69 +0x1b:  ret
```

## 反编译 C

```c
// DB_InsertTicket::DB_InsertTicket @ 0x8403a4e

/* DB_InsertTicket::DB_InsertTicket() */

void __thiscall DB_InsertTicket::DB_InsertTicket(DB_InsertTicket *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc18;
  return;
}
```

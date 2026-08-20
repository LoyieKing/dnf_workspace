# DB_LoadTicket

`_ZN13DB_LoadTicketC1Ev`

`DB_LoadTicket::DB_LoadTicket()`

| 类 | 地址 |
|---|---|
| `DB_LoadTicket` | `0x08419572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08419572  _ZN13DB_LoadTicketC1Ev
#           DB_LoadTicket::DB_LoadTicket()
# range [0x08419572, 0x0841958d]
08419572 +0x00:  push   %ebp
08419573 +0x01:  mov    %esp,%ebp
08419575 +0x03:  sub    $0x18,%esp
08419578 +0x06:  mov    0x8(%ebp),%eax
0841957b +0x09:  mov    %eax,(%esp)
0841957e +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08419583 +0x11:  mov    0x8(%ebp),%eax
08419586 +0x14:  movl   $&_ZTV13DB_LoadTicket+0x8,(%eax)
0841958c +0x1a:  leave
0841958d +0x1b:  ret
```

## 反编译 C

```c
// DB_LoadTicket::DB_LoadTicket @ 0x8419572

/* DB_LoadTicket::DB_LoadTicket() */

void __thiscall DB_LoadTicket::DB_LoadTicket(DB_LoadTicket *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f978;
  return;
}
```

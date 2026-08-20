# ~DB_InsertTicket

`_ZN15DB_InsertTicketD0Ev`

`DB_InsertTicket::~DB_InsertTicket()`

| 类 | 地址 |
|---|---|
| `DB_InsertTicket` | `0x08403a9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403a9a  _ZN15DB_InsertTicketD0Ev
#           DB_InsertTicket::~DB_InsertTicket()
# range [0x08403a9a, 0x08403ab7]
08403a9a +0x00:  push   %ebp
08403a9b +0x01:  mov    %esp,%ebp
08403a9d +0x03:  sub    $0x18,%esp
08403aa0 +0x06:  mov    0x8(%ebp),%eax
08403aa3 +0x09:  mov    %eax,(%esp)
08403aa6 +0x0c:  call   08403a6a <_ZN15DB_InsertTicketD1Ev>  ; DB_InsertTicket::~DB_InsertTicket()
08403aab +0x11:  mov    0x8(%ebp),%eax
08403aae +0x14:  mov    %eax,(%esp)
08403ab1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08403ab6 +0x1c:  leave
08403ab7 +0x1d:  ret
```

## 反编译 C

```c
// DB_InsertTicket::~DB_InsertTicket @ 0x8403a9a

/* DB_InsertTicket::~DB_InsertTicket() */

void __thiscall DB_InsertTicket::~DB_InsertTicket(DB_InsertTicket *this)

{
  ~DB_InsertTicket(this);
  operator_delete(this);
  return;
}
```

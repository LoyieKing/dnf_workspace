# ~DB_LoadTicket

`_ZN13DB_LoadTicketD0Ev`

`DB_LoadTicket::~DB_LoadTicket()`

| 类 | 地址 |
|---|---|
| `DB_LoadTicket` | `0x084195be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084195be  _ZN13DB_LoadTicketD0Ev
#           DB_LoadTicket::~DB_LoadTicket()
# range [0x084195be, 0x084195db]
084195be +0x00:  push   %ebp
084195bf +0x01:  mov    %esp,%ebp
084195c1 +0x03:  sub    $0x18,%esp
084195c4 +0x06:  mov    0x8(%ebp),%eax
084195c7 +0x09:  mov    %eax,(%esp)
084195ca +0x0c:  call   0841958e <_ZN13DB_LoadTicketD1Ev>  ; DB_LoadTicket::~DB_LoadTicket()
084195cf +0x11:  mov    0x8(%ebp),%eax
084195d2 +0x14:  mov    %eax,(%esp)
084195d5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084195da +0x1c:  leave
084195db +0x1d:  ret
```

## 反编译 C

```c
// DB_LoadTicket::~DB_LoadTicket @ 0x84195be

/* DB_LoadTicket::~DB_LoadTicket() */

void __thiscall DB_LoadTicket::~DB_LoadTicket(DB_LoadTicket *this)

{
  ~DB_LoadTicket(this);
  operator_delete(this);
  return;
}
```

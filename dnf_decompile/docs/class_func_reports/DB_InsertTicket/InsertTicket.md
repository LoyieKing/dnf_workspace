# InsertTicket

`_ZN15DB_InsertTicket12InsertTicketEP17SIG_INSERT_TICKET`

`DB_InsertTicket::InsertTicket(SIG_INSERT_TICKET*)`

| 类 | 地址 |
|---|---|
| `DB_InsertTicket` | `0x08403b08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403b08  _ZN15DB_InsertTicket12InsertTicketEP17SIG_INSERT_TICKET
#           DB_InsertTicket::InsertTicket(SIG_INSERT_TICKET*)
# range [0x08403b08, 0x08403b83]
08403b08 +0x00:  push   %ebp
08403b09 +0x01:  mov    %esp,%ebp
08403b0b +0x03:  sub    $0x28,%esp
08403b0e +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08403b13 +0x0b:  movl   $0x0,0x8(%esp)
08403b1b +0x13:  movl   $0x3,0x4(%esp)
08403b23 +0x1b:  mov    %eax,(%esp)
08403b26 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08403b2b +0x23:  mov    %eax,-0xc(%ebp)
08403b2e +0x26:  mov    0xc(%ebp),%eax
08403b31 +0x29:  mov    0x4(%eax),%edx
08403b34 +0x2c:  mov    0xc(%ebp),%eax
08403b37 +0x2f:  mov    (%eax),%eax
08403b39 +0x31:  mov    %edx,0xc(%esp)
08403b3d +0x35:  mov    %eax,0x8(%esp)
08403b41 +0x39:  movl   $"inSert village_ticket values(%u,%d)",0x4(%esp)
08403b49 +0x41:  mov    -0xc(%ebp),%eax
08403b4c +0x44:  mov    %eax,(%esp)
08403b4f +0x47:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08403b54 +0x4c:  movl   $0x1,0x4(%esp)
08403b5c +0x54:  mov    -0xc(%ebp),%eax
08403b5f +0x57:  mov    %eax,(%esp)
08403b62 +0x5a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08403b67 +0x5f:  mov    %al,-0xd(%ebp)
08403b6a +0x62:  movzbl -0xd(%ebp),%eax
08403b6e +0x66:  xor    $0x1,%eax
08403b71 +0x69:  test   %al,%al
08403b73 +0x6b:  je     08403b7c <+0x74>
08403b75 +0x6d:  mov    $0x0,%eax
08403b7a +0x72:  jmp    08403b81 <+0x79>
08403b7c +0x74:  mov    $0x1,%eax
08403b81 +0x79:  leave
08403b82 +0x7a:  ret
08403b83 +0x7b:  nop
```

## 反编译 C

```c
// DB_InsertTicket::InsertTicket @ 0x8403b08

/* DB_InsertTicket::InsertTicket(SIG_INSERT_TICKET*) */

bool __thiscall DB_InsertTicket::InsertTicket(DB_InsertTicket *this,SIG_INSERT_TICKET *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this_00,"inSert village_ticket values(%u,%d)",*(undefined4 *)param_1,
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```

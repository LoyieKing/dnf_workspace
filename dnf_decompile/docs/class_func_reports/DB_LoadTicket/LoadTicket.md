# LoadTicket

`_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET`

`DB_LoadTicket::LoadTicket(SIG_LOAD_TICKET*)`

| 类 | 地址 |
|---|---|
| `DB_LoadTicket` | `0x0841968a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841968a  _ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET
#           DB_LoadTicket::LoadTicket(SIG_LOAD_TICKET*)
# range [0x0841968a, 0x0841976f]
0841968a +0x00:  push   %ebp
0841968b +0x01:  mov    %esp,%ebp
0841968d +0x03:  sub    $0x28,%esp
08419690 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08419695 +0x0b:  movl   $0x0,0x8(%esp)
0841969d +0x13:  movl   $0x3,0x4(%esp)
084196a5 +0x1b:  mov    %eax,(%esp)
084196a8 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084196ad +0x23:  mov    %eax,-0xc(%ebp)
084196b0 +0x26:  mov    0xc(%ebp),%eax
084196b3 +0x29:  mov    (%eax),%eax
084196b5 +0x2b:  mov    %eax,0x8(%esp)
084196b9 +0x2f:  movl   $"seLect village from village_ticket where charac_no=%u",0x4(%esp)
084196c1 +0x37:  mov    -0xc(%ebp),%eax
084196c4 +0x3a:  mov    %eax,(%esp)
084196c7 +0x3d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084196cc +0x42:  movl   $0x1,0x4(%esp)
084196d4 +0x4a:  mov    -0xc(%ebp),%eax
084196d7 +0x4d:  mov    %eax,(%esp)
084196da +0x50:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084196df +0x55:  mov    %al,-0xd(%ebp)
084196e2 +0x58:  movzbl -0xd(%ebp),%eax
084196e6 +0x5c:  xor    $0x1,%eax
084196e9 +0x5f:  test   %al,%al
084196eb +0x61:  je     084196f4 <+0x6a>
084196ed +0x63:  mov    $0x0,%eax
084196f2 +0x68:  jmp    0841976e <+0xe4>
084196f4 +0x6a:  movl   $0x0,-0x14(%ebp)
084196fb +0x71:  jmp    08419752 <+0xc8>
084196fd +0x73:  mov    -0xc(%ebp),%eax
08419700 +0x76:  mov    %eax,(%esp)
08419703 +0x79:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08419708 +0x7e:  mov    %al,-0xd(%ebp)
0841970b +0x81:  movzbl -0xd(%ebp),%eax
0841970f +0x85:  xor    $0x1,%eax
08419712 +0x88:  test   %al,%al
08419714 +0x8a:  jne    0841975f <+0xd5>
08419716 +0x8c:  mov    -0x14(%ebp),%eax
08419719 +0x8f:  shl    $0x2,%eax
0841971c +0x92:  add    0xc(%ebp),%eax
0841971f +0x95:  add    $0xc,%eax
08419722 +0x98:  mov    %eax,0x8(%esp)
08419726 +0x9c:  movl   $0x0,0x4(%esp)
0841972e +0xa4:  mov    -0xc(%ebp),%eax
08419731 +0xa7:  mov    %eax,(%esp)
08419734 +0xaa:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
08419739 +0xaf:  mov    %al,-0xd(%ebp)
0841973c +0xb2:  movzbl -0xd(%ebp),%eax
08419740 +0xb6:  xor    $0x1,%eax
08419743 +0xb9:  test   %al,%al
08419745 +0xbb:  je     0841974e <+0xc4>
08419747 +0xbd:  mov    $0x0,%eax
0841974c +0xc2:  jmp    0841976e <+0xe4>
0841974e +0xc4:  addl   $0x1,-0x14(%ebp)
08419752 +0xc8:  cmpl   $0x63,-0x14(%ebp)
08419756 +0xcc:  setle  %al
08419759 +0xcf:  test   %al,%al
0841975b +0xd1:  jne    084196fd <+0x73>
0841975d +0xd3:  jmp    08419760 <+0xd6>
0841975f +0xd5:  nop
08419760 +0xd6:  mov    0xc(%ebp),%eax
08419763 +0xd9:  mov    -0x14(%ebp),%edx
08419766 +0xdc:  mov    %edx,0x8(%eax)
08419769 +0xdf:  mov    $0x1,%eax
0841976e +0xe4:  leave
0841976f +0xe5:  ret
```

## 反编译 C

```c
// DB_LoadTicket::LoadTicket @ 0x841968a

/* DB_LoadTicket::LoadTicket(SIG_LOAD_TICKET*) */

undefined4 __thiscall DB_LoadTicket::LoadTicket(DB_LoadTicket *this,SIG_LOAD_TICKET *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int local_18;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this_00,"seLect village from village_ticket where charac_no=%u",
                   *(undefined4 *)param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    local_18 = 0;
    while ((local_18 < 100 && (cVar1 = MySQL::fetch(this_00), cVar1 == '\x01'))) {
      cVar1 = MySQL::get_short(this_00,0,(int *)(param_1 + local_18 * 4 + 0xc));
      if (cVar1 != '\x01') {
        return 0;
      }
      local_18 = local_18 + 1;
    }
    *(int *)(param_1 + 8) = local_18;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

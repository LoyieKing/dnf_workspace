# DeleteCharacOption

`_ZN15DB_DeleteCharac18DeleteCharacOptionEP17SIG_DELETE_CHARAC`

`DB_DeleteCharac::DeleteCharacOption(SIG_DELETE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x084035e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084035e0  _ZN15DB_DeleteCharac18DeleteCharacOptionEP17SIG_DELETE_CHARAC
#           DB_DeleteCharac::DeleteCharacOption(SIG_DELETE_CHARAC*)
# range [0x084035e0, 0x0840364b]
084035e0 +0x00:  push   %ebp
084035e1 +0x01:  mov    %esp,%ebp
084035e3 +0x03:  sub    $0x28,%esp
084035e6 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084035eb +0x0b:  movl   $0x0,0x8(%esp)
084035f3 +0x13:  movl   $0x2,0x4(%esp)
084035fb +0x1b:  mov    %eax,(%esp)
084035fe +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08403603 +0x23:  mov    %eax,-0xc(%ebp)
08403606 +0x26:  mov    0xc(%ebp),%eax
08403609 +0x29:  mov    0x4(%eax),%eax
0840360c +0x2c:  mov    %eax,0x8(%esp)
08403610 +0x30:  movl   $"deLete from charac_option where charac_no = %u",0x4(%esp)
08403618 +0x38:  mov    -0xc(%ebp),%eax
0840361b +0x3b:  mov    %eax,(%esp)
0840361e +0x3e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08403623 +0x43:  movl   $0x1,0x4(%esp)
0840362b +0x4b:  mov    -0xc(%ebp),%eax
0840362e +0x4e:  mov    %eax,(%esp)
08403631 +0x51:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08403636 +0x56:  xor    $0x1,%eax
08403639 +0x59:  test   %al,%al
0840363b +0x5b:  je     08403644 <+0x64>
0840363d +0x5d:  mov    $0x0,%eax
08403642 +0x62:  jmp    08403649 <+0x69>
08403644 +0x64:  mov    $0x1,%eax
08403649 +0x69:  leave
0840364a +0x6a:  ret
0840364b +0x6b:  nop
```

## 反编译 C

```c
// DB_DeleteCharac::DeleteCharacOption @ 0x84035e0

/* DB_DeleteCharac::DeleteCharacOption(SIG_DELETE_CHARAC*) */

bool __thiscall
DB_DeleteCharac::DeleteCharacOption(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"deLete from charac_option where charac_no = %u",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```

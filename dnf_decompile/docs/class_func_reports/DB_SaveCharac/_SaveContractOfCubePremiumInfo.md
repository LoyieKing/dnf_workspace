# _SaveContractOfCubePremiumInfo

`_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC`

`DB_SaveCharac::_SaveContractOfCubePremiumInfo(SIG_SAVE_CHARAC const&)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x08415dbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415dbe  _ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC
#           DB_SaveCharac::_SaveContractOfCubePremiumInfo(SIG_SAVE_CHARAC const&)
# range [0x08415dbe, 0x08415ed9]
08415dbe +0x000:  push   %ebp
08415dbf +0x001:  mov    %esp,%ebp
08415dc1 +0x003:  sub    $0x38,%esp
08415dc4 +0x006:  mov    0xc(%ebp),%eax
08415dc7 +0x009:  movzbl 0x10a(%eax),%eax
08415dce +0x010:  xor    $0x1,%eax
08415dd1 +0x013:  test   %al,%al
08415dd3 +0x015:  je     08415ddf <+0x21>
08415dd5 +0x017:  mov    $0x1,%eax
08415dda +0x01c:  jmp    08415ed8 <+0x11a>
08415ddf +0x021:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08415de4 +0x026:  movl   $0x0,0x8(%esp)
08415dec +0x02e:  movl   $0x2,0x4(%esp)
08415df4 +0x036:  mov    %eax,(%esp)
08415df7 +0x039:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08415dfc +0x03e:  mov    %eax,-0xc(%ebp)
08415dff +0x041:  mov    0xc(%ebp),%eax
08415e02 +0x044:  mov    (%eax),%ecx
08415e04 +0x046:  mov    0xc(%ebp),%eax
08415e07 +0x049:  movzbl 0x10c(%eax),%eax
08415e0e +0x050:  movzbl %al,%edx
08415e11 +0x053:  mov    0xc(%ebp),%eax
08415e14 +0x056:  movzbl 0x10b(%eax),%eax
08415e1b +0x05d:  movzbl %al,%eax
08415e1e +0x060:  mov    %ecx,0x10(%esp)
08415e22 +0x064:  mov    %edx,0xc(%esp)
08415e26 +0x068:  mov    %eax,0x8(%esp)
08415e2a +0x06c:  movl   $"upDate cube_premium set selected=%u, cube_type=%u where charac_no=%u",0x4(%esp)
08415e32 +0x074:  mov    -0xc(%ebp),%eax
08415e35 +0x077:  mov    %eax,(%esp)
08415e38 +0x07a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08415e3d +0x07f:  movl   $0x1,0x4(%esp)
08415e45 +0x087:  mov    -0xc(%ebp),%eax
08415e48 +0x08a:  mov    %eax,(%esp)
08415e4b +0x08d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08415e50 +0x092:  xor    $0x1,%eax
08415e53 +0x095:  test   %al,%al
08415e55 +0x097:  je     08415e5e <+0xa0>
08415e57 +0x099:  mov    $0x0,%eax
08415e5c +0x09e:  jmp    08415ed8 <+0x11a>
08415e5e +0x0a0:  mov    -0xc(%ebp),%eax
08415e61 +0x0a3:  mov    %eax,(%esp)
08415e64 +0x0a6:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08415e69 +0x0ab:  or     %edx,%eax
08415e6b +0x0ad:  test   %eax,%eax
08415e6d +0x0af:  sete   %al
08415e70 +0x0b2:  test   %al,%al
08415e72 +0x0b4:  je     08415ed3 <+0x115>
08415e74 +0x0b6:  mov    0xc(%ebp),%eax
08415e77 +0x0b9:  movzbl 0x10c(%eax),%eax
08415e7e +0x0c0:  movzbl %al,%ecx
08415e81 +0x0c3:  mov    0xc(%ebp),%eax
08415e84 +0x0c6:  movzbl 0x10b(%eax),%eax
08415e8b +0x0cd:  movzbl %al,%edx
08415e8e +0x0d0:  mov    0xc(%ebp),%eax
08415e91 +0x0d3:  mov    (%eax),%eax
08415e93 +0x0d5:  mov    %ecx,0x10(%esp)
08415e97 +0x0d9:  mov    %edx,0xc(%esp)
08415e9b +0x0dd:  mov    %eax,0x8(%esp)
08415e9f +0x0e1:  movl   $"inSert into cube_premium(charac_no, selected, cube_type) values(%u,%u,%u)",0x4(%esp)
08415ea7 +0x0e9:  mov    -0xc(%ebp),%eax
08415eaa +0x0ec:  mov    %eax,(%esp)
08415ead +0x0ef:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08415eb2 +0x0f4:  movl   $0x1,0x4(%esp)
08415eba +0x0fc:  mov    -0xc(%ebp),%eax
08415ebd +0x0ff:  mov    %eax,(%esp)
08415ec0 +0x102:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08415ec5 +0x107:  xor    $0x1,%eax
08415ec8 +0x10a:  test   %al,%al
08415eca +0x10c:  je     08415ed3 <+0x115>
08415ecc +0x10e:  mov    $0x0,%eax
08415ed1 +0x113:  jmp    08415ed8 <+0x11a>
08415ed3 +0x115:  mov    $0x1,%eax
08415ed8 +0x11a:  leave
08415ed9 +0x11b:  ret
```

## 反编译 C

```c
// DB_SaveCharac::_SaveContractOfCubePremiumInfo @ 0x8415dbe

/* DB_SaveCharac::_SaveContractOfCubePremiumInfo(SIG_SAVE_CHARAC const&) */

undefined4 __thiscall
DB_SaveCharac::_SaveContractOfCubePremiumInfo(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  longlong lVar3;
  
  if (param_1[0x10a] == (SIG_SAVE_CHARAC)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"upDate cube_premium set selected=%u, cube_type=%u where charac_no=%u",
                     (uint)(byte)param_1[0x10b],(uint)(byte)param_1[0x10c],*(undefined4 *)param_1);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(this_00);
      if (lVar3 == 0) {
        MySQL::set_query(this_00,
                         "inSert into cube_premium(charac_no, selected, cube_type) values(%u,%u,%u)"
                         ,*(undefined4 *)param_1,(uint)(byte)param_1[0x10b],
                         (uint)(byte)param_1[0x10c]);
        cVar1 = MySQL::exec(this_00,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```

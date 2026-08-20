# LoadOnceGiveAvengerTitle

`_ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadOnceGiveAvengerTitle(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08406600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08406600  _ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadOnceGiveAvengerTitle(SIG_LOAD_ETC*)
# range [0x08406600, 0x084066ad]
08406600 +0x00:  push   %ebp
08406601 +0x01:  mov    %esp,%ebp
08406603 +0x03:  sub    $0x28,%esp
08406606 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840660b +0x0b:  movl   $0x0,0x8(%esp)
08406613 +0x13:  movl   $0x9,0x4(%esp)
0840661b +0x1b:  mov    %eax,(%esp)
0840661e +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08406623 +0x23:  mov    %eax,-0x10(%ebp)
08406626 +0x26:  mov    0xc(%ebp),%eax
08406629 +0x29:  mov    (%eax),%eax
0840662b +0x2b:  movl   $0x0,0x4(%esp)
08406633 +0x33:  mov    %eax,(%esp)
08406636 +0x36:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0840663b +0x3b:  mov    %eax,0x8(%esp)
0840663f +0x3f:  movl   $"seLect m_id from event_1107_avenger_plan where m_id=%s",0x4(%esp)
08406647 +0x47:  mov    -0x10(%ebp),%eax
0840664a +0x4a:  mov    %eax,(%esp)
0840664d +0x4d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08406652 +0x52:  movl   $0x1,0x4(%esp)
0840665a +0x5a:  mov    -0x10(%ebp),%eax
0840665d +0x5d:  mov    %eax,(%esp)
08406660 +0x60:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08406665 +0x65:  xor    $0x1,%eax
08406668 +0x68:  test   %al,%al
0840666a +0x6a:  je     0840667d <+0x7d>
0840666c +0x6c:  mov    0xc(%ebp),%eax
0840666f +0x6f:  movb   $0x1,0xc9ae(%eax)
08406676 +0x76:  mov    $0x0,%eax
0840667b +0x7b:  jmp    084066ac <+0xac>
0840667d +0x7d:  mov    -0x10(%ebp),%eax
08406680 +0x80:  mov    %eax,(%esp)
08406683 +0x83:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08406688 +0x88:  mov    %eax,-0xc(%ebp)
0840668b +0x8b:  cmpl   $0x0,-0xc(%ebp)
0840668f +0x8f:  je     0840669d <+0x9d>
08406691 +0x91:  mov    0xc(%ebp),%eax
08406694 +0x94:  movb   $0x1,0xc9ae(%eax)
0840669b +0x9b:  jmp    084066a7 <+0xa7>
0840669d +0x9d:  mov    0xc(%ebp),%eax
084066a0 +0xa0:  movb   $0x0,0xc9ae(%eax)
084066a7 +0xa7:  mov    $0x1,%eax
084066ac +0xac:  leave
084066ad +0xad:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadOnceGiveAvengerTitle @ 0x8406600

/* DB_LoadEtc::LoadOnceGiveAvengerTitle(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadOnceGiveAvengerTitle(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar2 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(this_00,"seLect m_id from event_1107_avenger_plan where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      param_1[0xc9ae] = (SIG_LOAD_ETC)0x0;
    }
    else {
      param_1[0xc9ae] = (SIG_LOAD_ETC)0x1;
    }
    uVar2 = 1;
  }
  else {
    param_1[0xc9ae] = (SIG_LOAD_ETC)0x1;
    uVar2 = 0;
  }
  return uVar2;
}
```

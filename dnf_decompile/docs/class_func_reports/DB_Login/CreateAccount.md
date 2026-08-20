# CreateAccount

`_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL`

`DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08412eb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08412eb8  _ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL
#           DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)
# range [0x08412eb8, 0x0841300d]
08412eb8 +0x000:  push   %ebp
08412eb9 +0x001:  mov    %esp,%ebp
08412ebb +0x003:  push   %ebx
08412ebc +0x004:  sub    $0x34,%esp
08412ebf +0x007:  cmpl   $0x0,0xc(%ebp)
08412ec3 +0x00b:  je     08412ecb <+0x13>
08412ec5 +0x00d:  cmpl   $0x0,0x10(%ebp)
08412ec9 +0x011:  jne    08412ed5 <+0x1d>
08412ecb +0x013:  mov    $0x0,%eax
08412ed0 +0x018:  jmp    08413007 <+0x14f>
08412ed5 +0x01d:  mov    0xc(%ebp),%eax
08412ed8 +0x020:  mov    %eax,0x8(%esp)
08412edc +0x024:  movl   $"call usp_create_account('%s')",0x4(%esp)
08412ee4 +0x02c:  mov    0x10(%ebp),%eax
08412ee7 +0x02f:  mov    %eax,(%esp)
08412eea +0x032:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08412eef +0x037:  movl   $0x1,0x4(%esp)
08412ef7 +0x03f:  mov    0x10(%ebp),%eax
08412efa +0x042:  mov    %eax,(%esp)
08412efd +0x045:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08412f02 +0x04a:  xor    $0x1,%eax
08412f05 +0x04d:  test   %al,%al
08412f07 +0x04f:  je     08412f46 <+0x8e>
08412f09 +0x051:  mov    0xc(%ebp),%eax
08412f0c +0x054:  mov    %eax,0x14(%esp)
08412f10 +0x058:  movl   $"[Taiwan, Account] Fail create account. id=%s",0x10(%esp)
08412f18 +0x060:  movl   $0x37e6,0xc(%esp)
08412f20 +0x068:  movl   $&_ZZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQLE19__PRETTY_FUNCTION__,0x8(%esp)
08412f28 +0x070:  movl   $"DBThread.cpp",0x4(%esp)
08412f30 +0x078:  movl   $0x1,(%esp)
08412f37 +0x07f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08412f3c +0x084:  mov    $0x0,%eax
08412f41 +0x089:  jmp    08413007 <+0x14f>
08412f46 +0x08e:  mov    0xc(%ebp),%ebx
08412f49 +0x091:  movl   $0x0,0xc(%esp)
08412f51 +0x099:  movl   $0x37ea,0x8(%esp)
08412f59 +0x0a1:  movl   $&_ZZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQLE19__PRETTY_FUNCTION__,0x4(%esp)
08412f61 +0x0a9:  lea    -0x18(%ebp),%eax
08412f64 +0x0ac:  mov    %eax,(%esp)
08412f67 +0x0af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08412f6c +0x0b4:  mov    %ebx,0x8(%esp)
08412f70 +0x0b8:  movl   $"[Taiwan, Account] Success create account. id=%s",0x4(%esp)
08412f78 +0x0c0:  lea    -0x18(%ebp),%eax
08412f7b +0x0c3:  mov    %eax,(%esp)
08412f7e +0x0c6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08412f83 +0x0cb:  mov    0xc(%ebp),%eax
08412f86 +0x0ce:  movzbl 0xa0(%eax),%eax
08412f8d +0x0d5:  movzbl %al,%edx
08412f90 +0x0d8:  mov    0xc(%ebp),%eax
08412f93 +0x0db:  mov    %edx,0xc(%esp)
08412f97 +0x0df:  mov    %eax,0x8(%esp)
08412f9b +0x0e3:  movl   $"seLect m_id, passwd,first_ssn, second_ssn,DATE_FORMAT(from_unixtime(reg_date),'%%Y%%m%%d%%H'),user_name,email,hangame_flag,reg_date from member_info where user_id='%s' and hangame_flag=%d",0x4(%esp)
08412fa3 +0x0eb:  mov    0x10(%ebp),%eax
08412fa6 +0x0ee:  mov    %eax,(%esp)
08412fa9 +0x0f1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08412fae +0x0f6:  movl   $0x1,0x4(%esp)
08412fb6 +0x0fe:  mov    0x10(%ebp),%eax
08412fb9 +0x101:  mov    %eax,(%esp)
08412fbc +0x104:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08412fc1 +0x109:  xor    $0x1,%eax
08412fc4 +0x10c:  test   %al,%al
08412fc6 +0x10e:  je     08413002 <+0x14a>
08412fc8 +0x110:  mov    0xc(%ebp),%eax
08412fcb +0x113:  mov    %eax,0x14(%esp)
08412fcf +0x117:  movl   $"[Taiwan, Account] Fail select member_info m_id=%s",0x10(%esp)
08412fd7 +0x11f:  movl   $0x3804,0xc(%esp)
08412fdf +0x127:  movl   $&_ZZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQLE19__PRETTY_FUNCTION__,0x8(%esp)
08412fe7 +0x12f:  movl   $"DBThread.cpp",0x4(%esp)
08412fef +0x137:  movl   $0x1,(%esp)
08412ff6 +0x13e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08412ffb +0x143:  mov    $0x0,%eax
08413000 +0x148:  jmp    08413007 <+0x14f>
08413002 +0x14a:  mov    $0x1,%eax
08413007 +0x14f:  add    $0x34,%esp
0841300a +0x152:  pop    %ebx
0841300b +0x153:  pop    %ebp
0841300c +0x154:  ret
0841300d +0x155:  nop
```

## 反编译 C

```c
// DB_Login::CreateAccount @ 0x8412eb8

/* DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*) */

undefined4 __thiscall DB_Login::CreateAccount(DB_Login *this,SIG_LOGIN_DATA *param_1,MySQL *param_2)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  if ((param_1 == (SIG_LOGIN_DATA *)0x0) || (param_2 == (MySQL *)0x0)) {
    uVar2 = 0;
  }
  else {
    MySQL::set_query(param_2,"call usp_create_account(\'%s\')",param_1);
    cVar1 = MySQL::exec(param_2,true);
    if (cVar1 == '\x01') {
      cMyTrace::cMyTrace(local_1c,"bool DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)",0x37ea,0);
      cMyTrace::operator()(local_1c,"[Taiwan, Account] Success create account. id=%s",param_1);
      MySQL::set_query(param_2,
                       "seLect m_id, passwd,first_ssn, second_ssn,DATE_FORMAT(from_unixtime(reg_date),\'%%Y%%m%%d%%H\'),user_name,email,hangame_flag,reg_date from member_info where user_id=\'%s\' and hangame_flag=%d"
                       ,param_1,(uint)(byte)param_1[0xa0]);
      cVar1 = MySQL::exec(param_2,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp","bool DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)",0x3804,
                   "[Taiwan, Account] Fail select member_info m_id=%s",param_1);
        uVar2 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)",0x37e6,
                 "[Taiwan, Account] Fail create account. id=%s",param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

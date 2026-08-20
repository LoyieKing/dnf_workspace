# dispatch

`_ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream`

`DB_BlackipPrivateSecurityValuation::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_BlackipPrivateSecurityValuation` | `0x084354da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084354da  _ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream
#           DB_BlackipPrivateSecurityValuation::dispatch(int, int, Stream*)
# range [0x084354da, 0x084355c9]
084354da +0x00:  push   %ebp
084354db +0x01:  mov    %esp,%ebp
084354dd +0x03:  sub    $0x28,%esp
084354e0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084354e5 +0x0b:  movl   $0x0,0x8(%esp)
084354ed +0x13:  movl   $0x1,0x4(%esp)
084354f5 +0x1b:  mov    %eax,(%esp)
084354f8 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084354fd +0x23:  mov    %eax,-0xc(%ebp)
08435500 +0x26:  lea    -0x10(%ebp),%eax
08435503 +0x29:  mov    %eax,0x4(%esp)
08435507 +0x2d:  mov    0x14(%ebp),%eax
0843550a +0x30:  mov    %eax,(%esp)
0843550d +0x33:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08435512 +0x38:  mov    -0x10(%ebp),%eax
08435515 +0x3b:  movl   $0x0,0x4(%esp)
0843551d +0x43:  mov    %eax,(%esp)
08435520 +0x46:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08435525 +0x4b:  mov    %eax,0x8(%esp)
08435529 +0x4f:  movl   $"upDate member_security_grade set black_ip_try_time=now() where m_id=%s",0x4(%esp)
08435531 +0x57:  mov    -0xc(%ebp),%eax
08435534 +0x5a:  mov    %eax,(%esp)
08435537 +0x5d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843553c +0x62:  movl   $0x1,0x4(%esp)
08435544 +0x6a:  mov    -0xc(%ebp),%eax
08435547 +0x6d:  mov    %eax,(%esp)
0843554a +0x70:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843554f +0x75:  xor    $0x1,%eax
08435552 +0x78:  test   %al,%al
08435554 +0x7a:  jne    08435567 <+0x8d>
08435556 +0x7c:  mov    -0xc(%ebp),%eax
08435559 +0x7f:  mov    %eax,(%esp)
0843555c +0x82:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08435561 +0x87:  or     %edx,%eax
08435563 +0x89:  test   %eax,%eax
08435565 +0x8b:  jne    0843556e <+0x94>
08435567 +0x8d:  mov    $0x1,%eax
0843556c +0x92:  jmp    08435573 <+0x99>
0843556e +0x94:  mov    $0x0,%eax
08435573 +0x99:  test   %al,%al
08435575 +0x9b:  je     084355c2 <+0xe8>
08435577 +0x9d:  mov    -0x10(%ebp),%eax
0843557a +0xa0:  movl   $0x0,0x4(%esp)
08435582 +0xa8:  mov    %eax,(%esp)
08435585 +0xab:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843558a +0xb0:  mov    %eax,0x8(%esp)
0843558e +0xb4:  movl   $"inSert into member_security_grade(m_id, black_ip_try_time) values(%s, now())",0x4(%esp)
08435596 +0xbc:  mov    -0xc(%ebp),%eax
08435599 +0xbf:  mov    %eax,(%esp)
0843559c +0xc2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084355a1 +0xc7:  movl   $0x1,0x4(%esp)
084355a9 +0xcf:  mov    -0xc(%ebp),%eax
084355ac +0xd2:  mov    %eax,(%esp)
084355af +0xd5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084355b4 +0xda:  xor    $0x1,%eax
084355b7 +0xdd:  test   %al,%al
084355b9 +0xdf:  je     084355c2 <+0xe8>
084355bb +0xe1:  mov    $0x0,%eax
084355c0 +0xe6:  jmp    084355c7 <+0xed>
084355c2 +0xe8:  mov    $0x1,%eax
084355c7 +0xed:  leave
084355c8 +0xee:  ret
084355c9 +0xef:  nop
```

## 反编译 C

```c
// DB_BlackipPrivateSecurityValuation::dispatch @ 0x84354da

/* DB_BlackipPrivateSecurityValuation::dispatch(int, int, Stream*) */

undefined4 DB_BlackipPrivateSecurityValuation::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate member_security_grade set black_ip_try_time=now() where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "inSert into member_security_grade(m_id, black_ip_try_time) values(%s, now())",
                     uVar3);
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

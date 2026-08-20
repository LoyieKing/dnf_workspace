# dispatch

`_ZN20DB_SecuServiceReward8dispatchEiiP6Stream`

`DB_SecuServiceReward::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecuServiceReward` | `0x08437764` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437764  _ZN20DB_SecuServiceReward8dispatchEiiP6Stream
#           DB_SecuServiceReward::dispatch(int, int, Stream*)
# range [0x08437764, 0x08437843]
08437764 +0x00:  push   %ebp
08437765 +0x01:  mov    %esp,%ebp
08437767 +0x03:  sub    $0x38,%esp
0843776a +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843776f +0x0b:  movl   $0x0,0x8(%esp)
08437777 +0x13:  movl   $0x1,0x4(%esp)
0843777f +0x1b:  mov    %eax,(%esp)
08437782 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08437787 +0x23:  mov    %eax,-0x10(%ebp)
0843778a +0x26:  mov    0x14(%ebp),%eax
0843778d +0x29:  mov    %eax,(%esp)
08437790 +0x2c:  call   0845357e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6194>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6194
08437795 +0x31:  mov    %eax,-0xc(%ebp)
08437798 +0x34:  mov    -0xc(%ebp),%eax
0843779b +0x37:  mov    (%eax),%eax
0843779d +0x39:  movl   $0x0,0x4(%esp)
084377a5 +0x41:  mov    %eax,(%esp)
084377a8 +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084377ad +0x49:  mov    %eax,0x8(%esp)
084377b1 +0x4d:  movl   $"upDate member_security_grade set last_check_time=now() where m_id=%s",0x4(%esp)
084377b9 +0x55:  mov    -0x10(%ebp),%eax
084377bc +0x58:  mov    %eax,(%esp)
084377bf +0x5b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084377c4 +0x60:  movl   $0x1,0x4(%esp)
084377cc +0x68:  mov    -0x10(%ebp),%eax
084377cf +0x6b:  mov    %eax,(%esp)
084377d2 +0x6e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084377d7 +0x73:  xor    $0x1,%eax
084377da +0x76:  test   %al,%al
084377dc +0x78:  jne    084377ef <+0x8b>
084377de +0x7a:  mov    -0x10(%ebp),%eax
084377e1 +0x7d:  mov    %eax,(%esp)
084377e4 +0x80:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084377e9 +0x85:  or     %edx,%eax
084377eb +0x87:  test   %eax,%eax
084377ed +0x89:  jne    084377f6 <+0x92>
084377ef +0x8b:  mov    $0x1,%eax
084377f4 +0x90:  jmp    084377fb <+0x97>
084377f6 +0x92:  mov    $0x0,%eax
084377fb +0x97:  test   %al,%al
084377fd +0x99:  je     0843783c <+0xd8>
084377ff +0x9b:  movl   $0x0,0xc(%esp)
08437807 +0xa3:  movl   $0x8461,0x8(%esp)
0843780f +0xab:  movl   $&_ZZN20DB_SecuServiceReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08437817 +0xb3:  lea    -0x20(%ebp),%eax
0843781a +0xb6:  mov    %eax,(%esp)
0843781d +0xb9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08437822 +0xbe:  movl   $"DB_SecuServiceReward Update Error",0x4(%esp)
0843782a +0xc6:  lea    -0x20(%ebp),%eax
0843782d +0xc9:  mov    %eax,(%esp)
08437830 +0xcc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08437835 +0xd1:  mov    $0x0,%eax
0843783a +0xd6:  jmp    08437841 <+0xdd>
0843783c +0xd8:  mov    $0x1,%eax
08437841 +0xdd:  leave
08437842 +0xde:  ret
08437843 +0xdf:  nop
```

## 反编译 C

```c
// DB_SecuServiceReward::dispatch @ 0x8437764

/* DB_SecuServiceReward::dispatch(int, int, Stream*) */

bool DB_SecuServiceReward::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  MySQL *local_14;
  SIG_SECU_SERVICE_REWARD *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_10 = Stream::GetOutBuffer<SIG_SECU_SERVICE_REWARD>(in_stack_00000010);
  uVar3 = NumberToString(*(uint *)local_10,0);
  MySQL::set_query(local_14,"upDate member_security_grade set last_check_time=now() where m_id=%s",
                   uVar3);
  cVar2 = MySQL::exec(local_14,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_14), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_24,"virtual bool DB_SecuServiceReward::dispatch(int, int, Stream*)",
                       0x8461,0);
    cMyTrace::operator()(local_24,"DB_SecuServiceReward Update Error");
  }
  return !bVar1;
}
```

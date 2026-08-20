# setLogDB

`_ZN8DBThread8setLogDBEb`

`DBThread::setLogDB(bool)`

| 类 | 地址 |
|---|---|
| `DBThread` | `0x083ff6c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff6c8  _ZN8DBThread8setLogDBEb
#           DBThread::setLogDB(bool)
# range [0x083ff6c8, 0x083ff779]
083ff6c8 +0x00:  push   %ebp
083ff6c9 +0x01:  mov    %esp,%ebp
083ff6cb +0x03:  sub    $0x38,%esp
083ff6ce +0x06:  mov    0xc(%ebp),%eax
083ff6d1 +0x09:  mov    %al,-0x1c(%ebp)
083ff6d4 +0x0c:  mov    0x8(%ebp),%eax
083ff6d7 +0x0f:  movzbl -0x1c(%ebp),%edx
083ff6db +0x13:  mov    %dl,0xc(%eax)
083ff6de +0x16:  mov    0x8(%ebp),%eax
083ff6e1 +0x19:  movzbl 0xc(%eax),%eax
083ff6e5 +0x1d:  movzbl %al,%eax
083ff6e8 +0x20:  mov    0x8(%ebp),%edx
083ff6eb +0x23:  add    $0x10,%edx
083ff6ee +0x26:  mov    %eax,0x4(%esp)
083ff6f2 +0x2a:  mov    %edx,(%esp)
083ff6f5 +0x2d:  call   0844d63a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x250>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x250
083ff6fa +0x32:  movl   $0x0,-0x10(%ebp)
083ff701 +0x39:  jmp    083ff76d <+0xa5>
083ff703 +0x3b:  mov    -0x10(%ebp),%edx
083ff706 +0x3e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083ff70b +0x43:  movl   $0x0,0x8(%esp)
083ff713 +0x4b:  mov    %edx,0x4(%esp)
083ff717 +0x4f:  mov    %eax,(%esp)
083ff71a +0x52:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083ff71f +0x57:  mov    %eax,-0xc(%ebp)
083ff722 +0x5a:  mov    0x8(%ebp),%eax
083ff725 +0x5d:  mov    %eax,(%esp)
083ff728 +0x60:  call   083ff77a <_ZN8DBThread7isLogDBEv>  ; DBThread::isLogDB()
083ff72d +0x65:  test   %al,%al
083ff72f +0x67:  je     083ff74e <+0x86>
083ff731 +0x69:  cmpl   $0x4,-0x10(%ebp)
083ff735 +0x6d:  jne    083ff769 <+0xa1>
083ff737 +0x6f:  mov    0x8(%ebp),%eax
083ff73a +0x72:  add    $0x10,%eax
083ff73d +0x75:  mov    %eax,0x4(%esp)
083ff741 +0x79:  mov    -0xc(%ebp),%eax
083ff744 +0x7c:  mov    %eax,(%esp)
083ff747 +0x7f:  call   083f531c <_GLOBAL__I__ZN5MySQLC2Ev+0x1d>  ; global constructors keyed to MySQL::MySQL()+0x1d
083ff74c +0x84:  jmp    083ff769 <+0xa1>
083ff74e +0x86:  cmpl   $0x4,-0x10(%ebp)
083ff752 +0x8a:  je     083ff769 <+0xa1>
083ff754 +0x8c:  mov    0x8(%ebp),%eax
083ff757 +0x8f:  add    $0x10,%eax
083ff75a +0x92:  mov    %eax,0x4(%esp)
083ff75e +0x96:  mov    -0xc(%ebp),%eax
083ff761 +0x99:  mov    %eax,(%esp)
083ff764 +0x9c:  call   083f531c <_GLOBAL__I__ZN5MySQLC2Ev+0x1d>  ; global constructors keyed to MySQL::MySQL()+0x1d
083ff769 +0xa1:  addl   $0x1,-0x10(%ebp)
083ff76d +0xa5:  cmpl   $0x10,-0x10(%ebp)
083ff771 +0xa9:  setle  %al
083ff774 +0xac:  test   %al,%al
083ff776 +0xae:  jne    083ff703 <+0x3b>
083ff778 +0xb0:  leave
083ff779 +0xb1:  ret
```

## 反编译 C

```c
// DBThread::setLogDB @ 0x83ff6c8

/* DBThread::setLogDB(bool) */

void __thiscall DBThread::setLogDB(DBThread *this,bool param_1)

{
  char cVar1;
  MySQL *this_00;
  int local_14;
  
  this[0xc] = (DBThread)param_1;
  CQueryCounter::setLogDB((CQueryCounter *)(this + 0x10),(bool)this[0xc]);
  for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,local_14,0);
    cVar1 = isLogDB(this);
    if (cVar1 == '\0') {
      if (local_14 != 4) {
        MySQL::SetQueryCounter(this_00,(CQueryCounter *)(this + 0x10));
      }
    }
    else if (local_14 == 4) {
      MySQL::SetQueryCounter(this_00,(CQueryCounter *)(this + 0x10));
    }
  }
  return;
}
```

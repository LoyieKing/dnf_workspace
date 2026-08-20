# ExtendPeriod

`_ZN21DB_AvatarExtendPeriod12ExtendPeriodER16SIG_AVATAR_RENEW`

`DB_AvatarExtendPeriod::ExtendPeriod(SIG_AVATAR_RENEW&)`

| 类 | 地址 |
|---|---|
| `DB_AvatarExtendPeriod` | `0x083ffbb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffbb4  _ZN21DB_AvatarExtendPeriod12ExtendPeriodER16SIG_AVATAR_RENEW
#           DB_AvatarExtendPeriod::ExtendPeriod(SIG_AVATAR_RENEW&)
# range [0x083ffbb4, 0x083ffc41]
083ffbb4 +0x00:  push   %ebp
083ffbb5 +0x01:  mov    %esp,%ebp
083ffbb7 +0x03:  sub    $0x38,%esp
083ffbba +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083ffbbf +0x0b:  movl   $0x0,0x8(%esp)
083ffbc7 +0x13:  movl   $0x3,0x4(%esp)
083ffbcf +0x1b:  mov    %eax,(%esp)
083ffbd2 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083ffbd7 +0x23:  mov    %eax,-0xc(%ebp)
083ffbda +0x26:  mov    0xc(%ebp),%eax
083ffbdd +0x29:  movzbl 0x4(%eax),%eax
083ffbe1 +0x2d:  movzbl %al,%ecx
083ffbe4 +0x30:  mov    0xc(%ebp),%eax
083ffbe7 +0x33:  mov    (%eax),%edx
083ffbe9 +0x35:  mov    0xc(%ebp),%eax
083ffbec +0x38:  movzwl 0x5(%eax),%eax
083ffbf0 +0x3c:  movzwl %ax,%eax
083ffbf3 +0x3f:  mov    %ecx,0x10(%esp)
083ffbf7 +0x43:  mov    %edx,0xc(%esp)
083ffbfb +0x47:  mov    %eax,0x8(%esp)
083ffbff +0x4b:  movl   $"upDate user_items set expire_date = adddate(expire_date, interval %d day) where charac_no=%u and slot=%d",0x4(%esp)
083ffc07 +0x53:  mov    -0xc(%ebp),%eax
083ffc0a +0x56:  mov    %eax,(%esp)
083ffc0d +0x59:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083ffc12 +0x5e:  movl   $0x1,0x4(%esp)
083ffc1a +0x66:  mov    -0xc(%ebp),%eax
083ffc1d +0x69:  mov    %eax,(%esp)
083ffc20 +0x6c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083ffc25 +0x71:  mov    %al,-0xd(%ebp)
083ffc28 +0x74:  movzbl -0xd(%ebp),%eax
083ffc2c +0x78:  xor    $0x1,%eax
083ffc2f +0x7b:  test   %al,%al
083ffc31 +0x7d:  je     083ffc3a <+0x86>
083ffc33 +0x7f:  mov    $0x0,%eax
083ffc38 +0x84:  jmp    083ffc3f <+0x8b>
083ffc3a +0x86:  mov    $0x1,%eax
083ffc3f +0x8b:  leave
083ffc40 +0x8c:  ret
083ffc41 +0x8d:  nop
```

## 反编译 C

```c
// DB_AvatarExtendPeriod::ExtendPeriod @ 0x83ffbb4

/* DB_AvatarExtendPeriod::ExtendPeriod(SIG_AVATAR_RENEW&) */

bool __thiscall
DB_AvatarExtendPeriod::ExtendPeriod(DB_AvatarExtendPeriod *this,SIG_AVATAR_RENEW *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this_00,
                   "upDate user_items set expire_date = adddate(expire_date, interval %d day) where charac_no=%u and slot=%d"
                   ,(uint)*(ushort *)(param_1 + 5),*(undefined4 *)param_1,(uint)(byte)param_1[4]);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```

# dispatch

`_ZN20DB_SaveCleanpadPoint8dispatchEiiP6Stream`

`DB_SaveCleanpadPoint::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCleanpadPoint` | `0x08432f3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08432f3e  _ZN20DB_SaveCleanpadPoint8dispatchEiiP6Stream
#           DB_SaveCleanpadPoint::dispatch(int, int, Stream*)
# range [0x08432f3e, 0x08432fe1]
08432f3e +0x00:  push   %ebp
08432f3f +0x01:  mov    %esp,%ebp
08432f41 +0x03:  sub    $0x28,%esp
08432f44 +0x06:  lea    -0x10(%ebp),%eax
08432f47 +0x09:  mov    %eax,0x4(%esp)
08432f4b +0x0d:  mov    0x14(%ebp),%eax
08432f4e +0x10:  mov    %eax,(%esp)
08432f51 +0x13:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08432f56 +0x18:  lea    -0x14(%ebp),%eax
08432f59 +0x1b:  mov    %eax,0x4(%esp)
08432f5d +0x1f:  mov    0x14(%ebp),%eax
08432f60 +0x22:  mov    %eax,(%esp)
08432f63 +0x25:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08432f68 +0x2a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08432f6d +0x2f:  movl   $0x0,0x8(%esp)
08432f75 +0x37:  movl   $0x6,0x4(%esp)
08432f7d +0x3f:  mov    %eax,(%esp)
08432f80 +0x42:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08432f85 +0x47:  mov    %eax,-0xc(%ebp)
08432f88 +0x4a:  mov    -0x14(%ebp),%eax
08432f8b +0x4d:  movl   $0x0,0x4(%esp)
08432f93 +0x55:  mov    %eax,(%esp)
08432f96 +0x58:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08432f9b +0x5d:  mov    -0x10(%ebp),%edx
08432f9e +0x60:  mov    %eax,0xc(%esp)
08432fa2 +0x64:  mov    %edx,0x8(%esp)
08432fa6 +0x68:  movl   $"upDate member_login set cleanpad_point=%d where m_id=%s",0x4(%esp)
08432fae +0x70:  mov    -0xc(%ebp),%eax
08432fb1 +0x73:  mov    %eax,(%esp)
08432fb4 +0x76:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08432fb9 +0x7b:  movl   $0x1,0x4(%esp)
08432fc1 +0x83:  mov    -0xc(%ebp),%eax
08432fc4 +0x86:  mov    %eax,(%esp)
08432fc7 +0x89:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08432fcc +0x8e:  xor    $0x1,%eax
08432fcf +0x91:  test   %al,%al
08432fd1 +0x93:  je     08432fda <+0x9c>
08432fd3 +0x95:  mov    $0x0,%eax
08432fd8 +0x9a:  jmp    08432fdf <+0xa1>
08432fda +0x9c:  mov    $0x1,%eax
08432fdf +0xa1:  leave
08432fe0 +0xa2:  ret
08432fe1 +0xa3:  nop
```

## 反编译 C

```c
// DB_SaveCleanpadPoint::dispatch @ 0x8432f3e

/* DB_SaveCleanpadPoint::dispatch(int, int, Stream*) */

bool DB_SaveCleanpadPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(local_18,0);
  MySQL::set_query(local_10,"upDate member_login set cleanpad_point=%d where m_id=%s",local_14,uVar2
                  );
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```

# dispatch

`_ZN29DB_UpdateBreakAwayAccruedCera8dispatchEiiP6Stream`

`DB_UpdateBreakAwayAccruedCera::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBreakAwayAccruedCera` | `0x0843865c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843865c  _ZN29DB_UpdateBreakAwayAccruedCera8dispatchEiiP6Stream
#           DB_UpdateBreakAwayAccruedCera::dispatch(int, int, Stream*)
# range [0x0843865c, 0x08438739]
0843865c +0x00:  push   %ebp
0843865d +0x01:  mov    %esp,%ebp
0843865f +0x03:  sub    $0x38,%esp
08438662 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08438667 +0x0b:  movl   $0x0,0x8(%esp)
0843866f +0x13:  movl   $0x6,0x4(%esp)
08438677 +0x1b:  mov    %eax,(%esp)
0843867a +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843867f +0x23:  mov    %eax,-0xc(%ebp)
08438682 +0x26:  movl   $0x0,-0x10(%ebp)
08438689 +0x2d:  movl   $0x0,-0x14(%ebp)
08438690 +0x34:  lea    -0x10(%ebp),%eax
08438693 +0x37:  mov    %eax,0x4(%esp)
08438697 +0x3b:  mov    0x14(%ebp),%eax
0843869a +0x3e:  mov    %eax,(%esp)
0843869d +0x41:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084386a2 +0x46:  lea    -0x14(%ebp),%eax
084386a5 +0x49:  mov    %eax,0x4(%esp)
084386a9 +0x4d:  mov    0x14(%ebp),%eax
084386ac +0x50:  mov    %eax,(%esp)
084386af +0x53:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084386b4 +0x58:  mov    -0x10(%ebp),%eax
084386b7 +0x5b:  movl   $0x0,0x4(%esp)
084386bf +0x63:  mov    %eax,(%esp)
084386c2 +0x66:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084386c7 +0x6b:  mov    -0x14(%ebp),%edx
084386ca +0x6e:  mov    %eax,0xc(%esp)
084386ce +0x72:  mov    %edx,0x8(%esp)
084386d2 +0x76:  movl   $"upDate churn_member_info set accrue_cera= accrue_cera+%u where m_id=%s",0x4(%esp)
084386da +0x7e:  mov    -0xc(%ebp),%eax
084386dd +0x81:  mov    %eax,(%esp)
084386e0 +0x84:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084386e5 +0x89:  movl   $0x1,0x4(%esp)
084386ed +0x91:  mov    -0xc(%ebp),%eax
084386f0 +0x94:  mov    %eax,(%esp)
084386f3 +0x97:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084386f8 +0x9c:  xor    $0x1,%eax
084386fb +0x9f:  test   %al,%al
084386fd +0xa1:  je     08438732 <+0xd6>
084386ff +0xa3:  movl   $"BREAK_AWAY : UPDATE CERA ERROR!!",0x10(%esp)
08438707 +0xab:  movl   $0x8619,0xc(%esp)
0843870f +0xb3:  movl   $&_ZZN29DB_UpdateBreakAwayAccruedCera8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08438717 +0xbb:  movl   $"DBThread.cpp",0x4(%esp)
0843871f +0xc3:  movl   $0x1,(%esp)
08438726 +0xca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0843872b +0xcf:  mov    $0x0,%eax
08438730 +0xd4:  jmp    08438737 <+0xdb>
08438732 +0xd6:  mov    $0x1,%eax
08438737 +0xdb:  leave
08438738 +0xdc:  ret
08438739 +0xdd:  nop
```

## 反编译 C

```c
// DB_UpdateBreakAwayAccruedCera::dispatch @ 0x843865c

/* DB_UpdateBreakAwayAccruedCera::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayAccruedCera::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate churn_member_info set accrue_cera= accrue_cera+%u where m_id=%s"
                   ,local_18,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_UpdateBreakAwayAccruedCera::dispatch(int, int, Stream*)",0x8619,
               "BREAK_AWAY : UPDATE CERA ERROR!!");
  }
  return cVar1 == '\x01';
}
```

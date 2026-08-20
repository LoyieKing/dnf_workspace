# dispatch

`_ZN20DB_UpdateSchoolPoint8dispatchEiiP6Stream`

`DB_UpdateSchoolPoint::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateSchoolPoint` | `0x0842f05e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842f05e  _ZN20DB_UpdateSchoolPoint8dispatchEiiP6Stream
#           DB_UpdateSchoolPoint::dispatch(int, int, Stream*)
# range [0x0842f05e, 0x0842f0ef]
0842f05e +0x00:  push   %ebp
0842f05f +0x01:  mov    %esp,%ebp
0842f061 +0x03:  sub    $0x28,%esp
0842f064 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842f069 +0x0b:  movl   $0x0,0x8(%esp)
0842f071 +0x13:  movl   $0x6,0x4(%esp)
0842f079 +0x1b:  mov    %eax,(%esp)
0842f07c +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842f081 +0x23:  mov    %eax,-0x10(%ebp)
0842f084 +0x26:  mov    0x14(%ebp),%eax
0842f087 +0x29:  mov    %eax,(%esp)
0842f08a +0x2c:  call   08452a1a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5630>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5630
0842f08f +0x31:  mov    %eax,-0xc(%ebp)
0842f092 +0x34:  mov    -0xc(%ebp),%eax
0842f095 +0x37:  mov    (%eax),%eax
0842f097 +0x39:  movl   $0x0,0x4(%esp)
0842f09f +0x41:  mov    %eax,(%esp)
0842f0a2 +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f0a7 +0x49:  mov    -0xc(%ebp),%edx
0842f0aa +0x4c:  mov    0x4(%edx),%edx
0842f0ad +0x4f:  mov    %eax,0xc(%esp)
0842f0b1 +0x53:  mov    %edx,0x8(%esp)
0842f0b5 +0x57:  movl   $"upDate event_school_point set point=%d+point where m_id=%s",0x4(%esp)
0842f0bd +0x5f:  mov    -0x10(%ebp),%eax
0842f0c0 +0x62:  mov    %eax,(%esp)
0842f0c3 +0x65:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842f0c8 +0x6a:  movl   $0x1,0x4(%esp)
0842f0d0 +0x72:  mov    -0x10(%ebp),%eax
0842f0d3 +0x75:  mov    %eax,(%esp)
0842f0d6 +0x78:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842f0db +0x7d:  xor    $0x1,%eax
0842f0de +0x80:  test   %al,%al
0842f0e0 +0x82:  je     0842f0e9 <+0x8b>
0842f0e2 +0x84:  mov    $0x0,%eax
0842f0e7 +0x89:  jmp    0842f0ee <+0x90>
0842f0e9 +0x8b:  mov    $0x1,%eax
0842f0ee +0x90:  leave
0842f0ef +0x91:  ret
```

## 反编译 C

```c
// DB_UpdateSchoolPoint::dispatch @ 0x842f05e

/* DB_UpdateSchoolPoint::dispatch(int, int, Stream*) */

bool DB_UpdateSchoolPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_UPDATE_SCHOOL_POINT *pSVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_SCHOOL_POINT>(in_stack_00000010);
  uVar3 = NumberToString(*(uint *)pSVar2,0);
  MySQL::set_query(this,"upDate event_school_point set point=%d+point where m_id=%s",
                   *(undefined4 *)(pSVar2 + 4),uVar3);
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```

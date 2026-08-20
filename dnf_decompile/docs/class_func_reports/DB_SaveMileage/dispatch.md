# dispatch

`_ZN14DB_SaveMileage8dispatchEiiP6Stream`

`DB_SaveMileage::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveMileage` | `0x08443c62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08443c62  _ZN14DB_SaveMileage8dispatchEiiP6Stream
#           DB_SaveMileage::dispatch(int, int, Stream*)
# range [0x08443c62, 0x08443d2b]
08443c62 +0x00:  push   %ebp
08443c63 +0x01:  mov    %esp,%ebp
08443c65 +0x03:  sub    $0x38,%esp
08443c68 +0x06:  mov    0x14(%ebp),%eax
08443c6b +0x09:  mov    %eax,(%esp)
08443c6e +0x0c:  call   08453f5c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6b72>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6b72
08443c73 +0x11:  mov    %eax,-0x10(%ebp)
08443c76 +0x14:  cmpl   $0x0,-0x10(%ebp)
08443c7a +0x18:  jne    08443c86 <+0x24>
08443c7c +0x1a:  mov    $0x0,%eax
08443c81 +0x1f:  jmp    08443d2a <+0xc8>
08443c86 +0x24:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08443c8b +0x29:  movl   $0x0,0x8(%esp)
08443c93 +0x31:  movl   $0x1,0x4(%esp)
08443c9b +0x39:  mov    %eax,(%esp)
08443c9e +0x3c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08443ca3 +0x41:  mov    %eax,-0xc(%ebp)
08443ca6 +0x44:  cmpl   $0x0,-0xc(%ebp)
08443caa +0x48:  jne    08443cf1 <+0x8f>
08443cac +0x4a:  movl   $0x5,0xc(%esp)
08443cb4 +0x52:  movl   $0xa79a,0x8(%esp)
08443cbc +0x5a:  movl   $&_ZZN14DB_SaveMileage8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08443cc4 +0x62:  lea    -0x20(%ebp),%eax
08443cc7 +0x65:  mov    %eax,(%esp)
08443cca +0x68:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08443ccf +0x6d:  movl   $0x1,0x8(%esp)
08443cd7 +0x75:  movl   $"[ERROR] Database Handle is NULL [index:%d]",0x4(%esp)
08443cdf +0x7d:  lea    -0x20(%ebp),%eax
08443ce2 +0x80:  mov    %eax,(%esp)
08443ce5 +0x83:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08443cea +0x88:  mov    $0x0,%eax
08443cef +0x8d:  jmp    08443d2a <+0xc8>
08443cf1 +0x8f:  mov    -0x10(%ebp),%eax
08443cf4 +0x92:  mov    (%eax),%edx
08443cf6 +0x94:  mov    -0x10(%ebp),%eax
08443cf9 +0x97:  mov    0x8(%eax),%eax
08443cfc +0x9a:  mov    %edx,0xc(%esp)
08443d00 +0x9e:  mov    %eax,0x8(%esp)
08443d04 +0xa2:  movl   $"upDate member_miles set miles = %d where m_id = %u",0x4(%esp)
08443d0c +0xaa:  mov    -0xc(%ebp),%eax
08443d0f +0xad:  mov    %eax,(%esp)
08443d12 +0xb0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08443d17 +0xb5:  movl   $0x1,0x4(%esp)
08443d1f +0xbd:  mov    -0xc(%ebp),%eax
08443d22 +0xc0:  mov    %eax,(%esp)
08443d25 +0xc3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08443d2a +0xc8:  leave
08443d2b +0xc9:  ret
```

## 反编译 C

```c
// DB_SaveMileage::dispatch @ 0x8443c62

/* DB_SaveMileage::dispatch(int, int, Stream*) */

undefined4 DB_SaveMileage::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_MILEAGE_STRUCT *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_MILEAGE_STRUCT>(in_stack_00000010);
  if (local_14 == (SIG_MILEAGE_STRUCT *)0x0) {
    uVar1 = 0;
  }
  else {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_10 == (MySQL *)0x0) {
      cMyTrace::cMyTrace(local_24,"virtual bool DB_SaveMileage::dispatch(int, int, Stream*)",0xa79a,
                         5);
      cMyTrace::operator()(local_24,"[ERROR] Database Handle is NULL [index:%d]",1);
      uVar1 = 0;
    }
    else {
      MySQL::set_query(local_10,"upDate member_miles set miles = %d where m_id = %u",
                       *(undefined4 *)(local_14 + 8),*(undefined4 *)local_14);
      uVar1 = MySQL::exec(local_10,true);
    }
  }
  return uVar1;
}
```

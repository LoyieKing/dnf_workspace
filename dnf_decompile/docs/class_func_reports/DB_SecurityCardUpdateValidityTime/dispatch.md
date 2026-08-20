# dispatch

`_ZN33DB_SecurityCardUpdateValidityTime8dispatchEiiP6Stream`

`DB_SecurityCardUpdateValidityTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardUpdateValidityTime` | `0x0842bc64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842bc64  _ZN33DB_SecurityCardUpdateValidityTime8dispatchEiiP6Stream
#           DB_SecurityCardUpdateValidityTime::dispatch(int, int, Stream*)
# range [0x0842bc64, 0x0842bce7]
0842bc64 +0x00:  push   %ebp
0842bc65 +0x01:  mov    %esp,%ebp
0842bc67 +0x03:  sub    $0x28,%esp
0842bc6a +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842bc6f +0x0b:  movl   $0x0,0x8(%esp)
0842bc77 +0x13:  movl   $0x6,0x4(%esp)
0842bc7f +0x1b:  mov    %eax,(%esp)
0842bc82 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842bc87 +0x23:  mov    %eax,-0x10(%ebp)
0842bc8a +0x26:  mov    0x14(%ebp),%eax
0842bc8d +0x29:  mov    %eax,(%esp)
0842bc90 +0x2c:  call   084526f2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5308>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5308
0842bc95 +0x31:  mov    %eax,-0xc(%ebp)
0842bc98 +0x34:  mov    -0xc(%ebp),%eax
0842bc9b +0x37:  mov    (%eax),%eax
0842bc9d +0x39:  movl   $0x0,0x4(%esp)
0842bca5 +0x41:  mov    %eax,(%esp)
0842bca8 +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842bcad +0x49:  mov    -0xc(%ebp),%edx
0842bcb0 +0x4c:  mov    0x4(%edx),%edx
0842bcb3 +0x4f:  mov    %eax,0xc(%esp)
0842bcb7 +0x53:  mov    %edx,0x8(%esp)
0842bcbb +0x57:  movl   $"upDate member_security_card set validity_time=unix_timestamp(now())+%d where m_id=%s and apply_flag=1",0x4(%esp)
0842bcc3 +0x5f:  mov    -0x10(%ebp),%eax
0842bcc6 +0x62:  mov    %eax,(%esp)
0842bcc9 +0x65:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842bcce +0x6a:  movl   $0x1,0x4(%esp)
0842bcd6 +0x72:  mov    -0x10(%ebp),%eax
0842bcd9 +0x75:  mov    %eax,(%esp)
0842bcdc +0x78:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842bce1 +0x7d:  mov    $0x1,%eax
0842bce6 +0x82:  leave
0842bce7 +0x83:  ret
```

## 反编译 C

```c
// DB_SecurityCardUpdateValidityTime::dispatch @ 0x842bc64

/* DB_SecurityCardUpdateValidityTime::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardUpdateValidityTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_UPDATE_VALIDITYTIME *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_VALIDITYTIME>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_security_card set validity_time=unix_timestamp(now())+%d where m_id=%s and apply_flag=1"
                   ,*(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}
```

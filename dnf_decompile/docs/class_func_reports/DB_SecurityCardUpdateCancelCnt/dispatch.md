# dispatch

`_ZN30DB_SecurityCardUpdateCancelCnt8dispatchEiiP6Stream`

`DB_SecurityCardUpdateCancelCnt::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardUpdateCancelCnt` | `0x0842c08e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842c08e  _ZN30DB_SecurityCardUpdateCancelCnt8dispatchEiiP6Stream
#           DB_SecurityCardUpdateCancelCnt::dispatch(int, int, Stream*)
# range [0x0842c08e, 0x0842c111]
0842c08e +0x00:  push   %ebp
0842c08f +0x01:  mov    %esp,%ebp
0842c091 +0x03:  sub    $0x28,%esp
0842c094 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842c099 +0x0b:  movl   $0x0,0x8(%esp)
0842c0a1 +0x13:  movl   $0x6,0x4(%esp)
0842c0a9 +0x1b:  mov    %eax,(%esp)
0842c0ac +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842c0b1 +0x23:  mov    %eax,-0x10(%ebp)
0842c0b4 +0x26:  mov    0x14(%ebp),%eax
0842c0b7 +0x29:  mov    %eax,(%esp)
0842c0ba +0x2c:  call   08451dc6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x49dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x49dc
0842c0bf +0x31:  mov    %eax,-0xc(%ebp)
0842c0c2 +0x34:  mov    -0xc(%ebp),%eax
0842c0c5 +0x37:  mov    (%eax),%eax
0842c0c7 +0x39:  movl   $0x0,0x4(%esp)
0842c0cf +0x41:  mov    %eax,(%esp)
0842c0d2 +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842c0d7 +0x49:  mov    -0xc(%ebp),%edx
0842c0da +0x4c:  mov    0x4(%edx),%edx
0842c0dd +0x4f:  mov    %eax,0xc(%esp)
0842c0e1 +0x53:  mov    %edx,0x8(%esp)
0842c0e5 +0x57:  movl   $"upDate member_security_card set cancel_cnt=%d where m_id=%s and apply_flag=1",0x4(%esp)
0842c0ed +0x5f:  mov    -0x10(%ebp),%eax
0842c0f0 +0x62:  mov    %eax,(%esp)
0842c0f3 +0x65:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842c0f8 +0x6a:  movl   $0x1,0x4(%esp)
0842c100 +0x72:  mov    -0x10(%ebp),%eax
0842c103 +0x75:  mov    %eax,(%esp)
0842c106 +0x78:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842c10b +0x7d:  mov    $0x1,%eax
0842c110 +0x82:  leave
0842c111 +0x83:  ret
```

## 反编译 C

```c
// DB_SecurityCardUpdateCancelCnt::dispatch @ 0x842c08e

/* DB_SecurityCardUpdateCancelCnt::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardUpdateCancelCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_security_card set cancel_cnt=%d where m_id=%s and apply_flag=1",
                   *(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}
```

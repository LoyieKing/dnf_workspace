# dispatch

`_ZN25DB_PassPadUpdateCancelCnt8dispatchEiiP6Stream`

`DB_PassPadUpdateCancelCnt::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_PassPadUpdateCancelCnt` | `0x08423fb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08423fb6  _ZN25DB_PassPadUpdateCancelCnt8dispatchEiiP6Stream
#           DB_PassPadUpdateCancelCnt::dispatch(int, int, Stream*)
# range [0x08423fb6, 0x08424039]
08423fb6 +0x00:  push   %ebp
08423fb7 +0x01:  mov    %esp,%ebp
08423fb9 +0x03:  sub    $0x28,%esp
08423fbc +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08423fc1 +0x0b:  movl   $0x0,0x8(%esp)
08423fc9 +0x13:  movl   $0x6,0x4(%esp)
08423fd1 +0x1b:  mov    %eax,(%esp)
08423fd4 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08423fd9 +0x23:  mov    %eax,-0x10(%ebp)
08423fdc +0x26:  mov    0x14(%ebp),%eax
08423fdf +0x29:  mov    %eax,(%esp)
08423fe2 +0x2c:  call   08451dc6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x49dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x49dc
08423fe7 +0x31:  mov    %eax,-0xc(%ebp)
08423fea +0x34:  mov    -0xc(%ebp),%eax
08423fed +0x37:  mov    (%eax),%eax
08423fef +0x39:  movl   $0x0,0x4(%esp)
08423ff7 +0x41:  mov    %eax,(%esp)
08423ffa +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423fff +0x49:  mov    -0xc(%ebp),%edx
08424002 +0x4c:  mov    0x4(%edx),%edx
08424005 +0x4f:  mov    %eax,0xc(%esp)
08424009 +0x53:  mov    %edx,0x8(%esp)
0842400d +0x57:  movl   $"upDate member_mousepass set cancel_cnt=%d where m_id=%s and enable_flag = '1'",0x4(%esp)
08424015 +0x5f:  mov    -0x10(%ebp),%eax
08424018 +0x62:  mov    %eax,(%esp)
0842401b +0x65:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08424020 +0x6a:  movl   $0x1,0x4(%esp)
08424028 +0x72:  mov    -0x10(%ebp),%eax
0842402b +0x75:  mov    %eax,(%esp)
0842402e +0x78:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08424033 +0x7d:  mov    $0x1,%eax
08424038 +0x82:  leave
08424039 +0x83:  ret
```

## 反编译 C

```c
// DB_PassPadUpdateCancelCnt::dispatch @ 0x8423fb6

/* DB_PassPadUpdateCancelCnt::dispatch(int, int, Stream*) */

undefined4 DB_PassPadUpdateCancelCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_mousepass set cancel_cnt=%d where m_id=%s and enable_flag = \'1\'"
                   ,*(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}
```

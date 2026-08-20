# dispatch

`_ZN25DB_SecurityCardAddCertCnt8dispatchEiiP6Stream`

`DB_SecurityCardAddCertCnt::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardAddCertCnt` | `0x0843630e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843630e  _ZN25DB_SecurityCardAddCertCnt8dispatchEiiP6Stream
#           DB_SecurityCardAddCertCnt::dispatch(int, int, Stream*)
# range [0x0843630e, 0x08436387]
0843630e +0x00:  push   %ebp
0843630f +0x01:  mov    %esp,%ebp
08436311 +0x03:  sub    $0x28,%esp
08436314 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08436319 +0x0b:  movl   $0x0,0x8(%esp)
08436321 +0x13:  movl   $0x6,0x4(%esp)
08436329 +0x1b:  mov    %eax,(%esp)
0843632c +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08436331 +0x23:  mov    %eax,-0x10(%ebp)
08436334 +0x26:  mov    0x14(%ebp),%eax
08436337 +0x29:  mov    %eax,(%esp)
0843633a +0x2c:  call   084532da <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5ef0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5ef0
0843633f +0x31:  mov    %eax,-0xc(%ebp)
08436342 +0x34:  mov    -0xc(%ebp),%eax
08436345 +0x37:  mov    (%eax),%eax
08436347 +0x39:  movl   $0x0,0x4(%esp)
0843634f +0x41:  mov    %eax,(%esp)
08436352 +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08436357 +0x49:  mov    %eax,0x8(%esp)
0843635b +0x4d:  movl   $"upDate member_security_card set cert_cnt = cert_cnt+1  where m_id=%s and apply_flag=1",0x4(%esp)
08436363 +0x55:  mov    -0x10(%ebp),%eax
08436366 +0x58:  mov    %eax,(%esp)
08436369 +0x5b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843636e +0x60:  movl   $0x1,0x4(%esp)
08436376 +0x68:  mov    -0x10(%ebp),%eax
08436379 +0x6b:  mov    %eax,(%esp)
0843637c +0x6e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436381 +0x73:  mov    $0x1,%eax
08436386 +0x78:  leave
08436387 +0x79:  ret
```

## 反编译 C

```c
// DB_SecurityCardAddCertCnt::dispatch @ 0x843630e

/* DB_SecurityCardAddCertCnt::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardAddCertCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_ADD_CERT_CNT *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_ADD_CERT_CNT>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_security_card set cert_cnt = cert_cnt+1  where m_id=%s and apply_flag=1"
                   ,uVar2);
  MySQL::exec(this,true);
  return 1;
}
```

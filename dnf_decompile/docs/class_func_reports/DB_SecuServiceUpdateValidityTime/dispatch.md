# dispatch

`_ZN32DB_SecuServiceUpdateValidityTime8dispatchEiiP6Stream`

`DB_SecuServiceUpdateValidityTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecuServiceUpdateValidityTime` | `0x0843a264` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a264  _ZN32DB_SecuServiceUpdateValidityTime8dispatchEiiP6Stream
#           DB_SecuServiceUpdateValidityTime::dispatch(int, int, Stream*)
# range [0x0843a264, 0x0843a34d]
0843a264 +0x00:  push   %ebp
0843a265 +0x01:  mov    %esp,%ebp
0843a267 +0x03:  sub    $0x38,%esp
0843a26a +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843a26f +0x0b:  movl   $0x0,0x8(%esp)
0843a277 +0x13:  movl   $0x1,0x4(%esp)
0843a27f +0x1b:  mov    %eax,(%esp)
0843a282 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843a287 +0x23:  mov    %eax,-0x10(%ebp)
0843a28a +0x26:  mov    0x14(%ebp),%eax
0843a28d +0x29:  mov    %eax,(%esp)
0843a290 +0x2c:  call   084538a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x64bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x64bc
0843a295 +0x31:  mov    %eax,-0xc(%ebp)
0843a298 +0x34:  mov    -0xc(%ebp),%eax
0843a29b +0x37:  movzwl 0x8(%eax),%eax
0843a29f +0x3b:  cmp    $0x8,%ax
0843a2a3 +0x3f:  jne    0843a2e7 <+0x83>
0843a2a5 +0x41:  mov    -0xc(%ebp),%eax
0843a2a8 +0x44:  mov    (%eax),%eax
0843a2aa +0x46:  movl   $0x0,0x4(%esp)
0843a2b2 +0x4e:  mov    %eax,(%esp)
0843a2b5 +0x51:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843a2ba +0x56:  mov    -0xc(%ebp),%edx
0843a2bd +0x59:  lea    0xa(%edx),%ecx
0843a2c0 +0x5c:  mov    -0xc(%ebp),%edx
0843a2c3 +0x5f:  mov    0x4(%edx),%edx
0843a2c6 +0x62:  mov    %eax,0x10(%esp)
0843a2ca +0x66:  mov    %ecx,0xc(%esp)
0843a2ce +0x6a:  mov    %edx,0x8(%esp)
0843a2d2 +0x6e:  movl   $"upDate member_security_grade set security_card_validity_time\t=unix_timestamp(now())+%d , validity_ip = '%s' where m_id=%s",0x4(%esp)
0843a2da +0x76:  mov    -0x10(%ebp),%eax
0843a2dd +0x79:  mov    %eax,(%esp)
0843a2e0 +0x7c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843a2e5 +0x81:  jmp    0843a334 <+0xd0>
0843a2e7 +0x83:  mov    -0xc(%ebp),%eax
0843a2ea +0x86:  movzwl 0x8(%eax),%eax
0843a2ee +0x8a:  cmp    $0x10,%ax
0843a2f2 +0x8e:  jne    0843a334 <+0xd0>
0843a2f4 +0x90:  mov    -0xc(%ebp),%eax
0843a2f7 +0x93:  mov    (%eax),%eax
0843a2f9 +0x95:  movl   $0x0,0x4(%esp)
0843a301 +0x9d:  mov    %eax,(%esp)
0843a304 +0xa0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843a309 +0xa5:  mov    -0xc(%ebp),%edx
0843a30c +0xa8:  lea    0xa(%edx),%ecx
0843a30f +0xab:  mov    -0xc(%ebp),%edx
0843a312 +0xae:  mov    0x4(%edx),%edx
0843a315 +0xb1:  mov    %eax,0x10(%esp)
0843a319 +0xb5:  mov    %ecx,0xc(%esp)
0843a31d +0xb9:  mov    %edx,0x8(%esp)
0843a321 +0xbd:  movl   $"upDate member_security_grade set goblin_validity_time\t\t=unix_timestamp(now())+%d , validity_ip = '%s' where m_id=%s",0x4(%esp)
0843a329 +0xc5:  mov    -0x10(%ebp),%eax
0843a32c +0xc8:  mov    %eax,(%esp)
0843a32f +0xcb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843a334 +0xd0:  movl   $0x1,0x4(%esp)
0843a33c +0xd8:  mov    -0x10(%ebp),%eax
0843a33f +0xdb:  mov    %eax,(%esp)
0843a342 +0xde:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843a347 +0xe3:  mov    $0x1,%eax
0843a34c +0xe8:  leave
0843a34d +0xe9:  ret
```

## 反编译 C

```c
// DB_SecuServiceUpdateValidityTime::dispatch @ 0x843a264

/* DB_SecuServiceUpdateValidityTime::dispatch(int, int, Stream*) */

undefined4 DB_SecuServiceUpdateValidityTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_SERVICE_VALIDITYTIME *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_SERVICE_VALIDITYTIME>(in_stack_00000010);
  if (*(short *)(pSVar1 + 8) == 8) {
    uVar2 = NumberToString(*(uint *)pSVar1,0);
    MySQL::set_query(this,
                     "upDate member_security_grade set security_card_validity_time\t=unix_timestamp(now())+%d , validity_ip = \'%s\' where m_id=%s"
                     ,*(undefined4 *)(pSVar1 + 4),pSVar1 + 10,uVar2);
  }
  else if (*(short *)(pSVar1 + 8) == 0x10) {
    uVar2 = NumberToString(*(uint *)pSVar1,0);
    MySQL::set_query(this,
                     "upDate member_security_grade set goblin_validity_time\t\t=unix_timestamp(now())+%d , validity_ip = \'%s\' where m_id=%s"
                     ,*(undefined4 *)(pSVar1 + 4),pSVar1 + 10,uVar2);
  }
  MySQL::exec(this,true);
  return 1;
}
```

# dispatch

`_ZN21DB_SecurityCardDisuse8dispatchEiiP6Stream`

`DB_SecurityCardDisuse::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardDisuse` | `0x0842b6e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842b6e6  _ZN21DB_SecurityCardDisuse8dispatchEiiP6Stream
#           DB_SecurityCardDisuse::dispatch(int, int, Stream*)
# range [0x0842b6e6, 0x0842b78f]
0842b6e6 +0x00:  push   %ebp
0842b6e7 +0x01:  mov    %esp,%ebp
0842b6e9 +0x03:  sub    $0x28,%esp
0842b6ec +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842b6f1 +0x0b:  movl   $0x0,0x8(%esp)
0842b6f9 +0x13:  movl   $0x6,0x4(%esp)
0842b701 +0x1b:  mov    %eax,(%esp)
0842b704 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842b709 +0x23:  mov    %eax,-0x10(%ebp)
0842b70c +0x26:  mov    0x14(%ebp),%eax
0842b70f +0x29:  mov    %eax,(%esp)
0842b712 +0x2c:  call   0845261e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5234>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5234
0842b717 +0x31:  mov    %eax,-0xc(%ebp)
0842b71a +0x34:  mov    -0xc(%ebp),%eax
0842b71d +0x37:  mov    (%eax),%eax
0842b71f +0x39:  mov    %eax,0x4(%esp)
0842b723 +0x3d:  mov    -0x10(%ebp),%eax
0842b726 +0x40:  mov    %eax,(%esp)
0842b729 +0x43:  call   0842af12 <_Z19turnOffSecurityFlagP5MySQLj>  ; turnOffSecurityFlag(MySQL*, unsigned int)
0842b72e +0x48:  mov    -0xc(%ebp),%eax
0842b731 +0x4b:  mov    (%eax),%eax
0842b733 +0x4d:  movl   $0x0,0x4(%esp)
0842b73b +0x55:  mov    %eax,(%esp)
0842b73e +0x58:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842b743 +0x5d:  mov    %eax,0x8(%esp)
0842b747 +0x61:  movl   $"upDate member_security_card set apply_flag=0 where m_id=%s",0x4(%esp)
0842b74f +0x69:  mov    -0x10(%ebp),%eax
0842b752 +0x6c:  mov    %eax,(%esp)
0842b755 +0x6f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842b75a +0x74:  movl   $0x1,0x4(%esp)
0842b762 +0x7c:  mov    -0x10(%ebp),%eax
0842b765 +0x7f:  mov    %eax,(%esp)
0842b768 +0x82:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842b76d +0x87:  mov    -0xc(%ebp),%eax
0842b770 +0x8a:  mov    (%eax),%eax
0842b772 +0x8c:  movl   $0x2,0x8(%esp)
0842b77a +0x94:  mov    %eax,0x4(%esp)
0842b77e +0x98:  mov    -0x10(%ebp),%eax
0842b781 +0x9b:  mov    %eax,(%esp)
0842b784 +0x9e:  call   0842ae3f <_Z23saveSecurityCardHistoryP5MySQLj26ENUM_SECURITYCARD_MOD_TYPE>  ; saveSecurityCardHistory(MySQL*, unsigned int, ENUM_SECURITYCARD_MOD_TYPE)
0842b789 +0xa3:  mov    $0x1,%eax
0842b78e +0xa8:  leave
0842b78f +0xa9:  ret
```

## 反编译 C

```c
// DB_SecurityCardDisuse::dispatch @ 0x842b6e6

/* DB_SecurityCardDisuse::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardDisuse::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_DISUSE *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_DISUSE>(in_stack_00000010);
  turnOffSecurityFlag(this,*(uint *)pSVar1);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,"upDate member_security_card set apply_flag=0 where m_id=%s",uVar2);
  MySQL::exec(this,true);
  saveSecurityCardHistory(this,*(undefined4 *)pSVar1,2);
  return 1;
}
```

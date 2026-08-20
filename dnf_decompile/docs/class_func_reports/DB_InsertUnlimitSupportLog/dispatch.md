# dispatch

`_ZN26DB_InsertUnlimitSupportLog8dispatchEiiP6Stream`

`DB_InsertUnlimitSupportLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertUnlimitSupportLog` | `0x0842eb2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842eb2e  _ZN26DB_InsertUnlimitSupportLog8dispatchEiiP6Stream
#           DB_InsertUnlimitSupportLog::dispatch(int, int, Stream*)
# range [0x0842eb2e, 0x0842ebcf]
0842eb2e +0x00:  push   %ebp
0842eb2f +0x01:  mov    %esp,%ebp
0842eb31 +0x03:  push   %edi
0842eb32 +0x04:  push   %esi
0842eb33 +0x05:  push   %ebx
0842eb34 +0x06:  sub    $0x3c,%esp
0842eb37 +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842eb3c +0x0e:  movl   $0x0,0x8(%esp)
0842eb44 +0x16:  movl   $0x6,0x4(%esp)
0842eb4c +0x1e:  mov    %eax,(%esp)
0842eb4f +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842eb54 +0x26:  mov    %eax,-0x20(%ebp)
0842eb57 +0x29:  mov    0x14(%ebp),%eax
0842eb5a +0x2c:  mov    %eax,(%esp)
0842eb5d +0x2f:  call   0845299a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x55b0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x55b0
0842eb62 +0x34:  mov    %eax,-0x1c(%ebp)
0842eb65 +0x37:  mov    -0x1c(%ebp),%eax
0842eb68 +0x3a:  lea    0xc(%eax),%edi
0842eb6b +0x3d:  mov    -0x1c(%ebp),%eax
0842eb6e +0x40:  mov    0x8(%eax),%esi
0842eb71 +0x43:  mov    -0x1c(%ebp),%eax
0842eb74 +0x46:  mov    0x4(%eax),%ebx
0842eb77 +0x49:  mov    -0x1c(%ebp),%eax
0842eb7a +0x4c:  mov    (%eax),%eax
0842eb7c +0x4e:  movl   $0x0,0x4(%esp)
0842eb84 +0x56:  mov    %eax,(%esp)
0842eb87 +0x59:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842eb8c +0x5e:  mov    %edi,0x14(%esp)
0842eb90 +0x62:  mov    %esi,0x10(%esp)
0842eb94 +0x66:  mov    %ebx,0xc(%esp)
0842eb98 +0x6a:  mov    %eax,0x8(%esp)
0842eb9c +0x6e:  movl   $"inSert into event_unlimitsupport_lev(m_id,occ_time,server_id,charac_no,charac_name) values(%s,now(),%d,%d,'%s')",0x4(%esp)
0842eba4 +0x76:  mov    -0x20(%ebp),%eax
0842eba7 +0x79:  mov    %eax,(%esp)
0842ebaa +0x7c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842ebaf +0x81:  movl   $0x1,0x4(%esp)
0842ebb7 +0x89:  mov    -0x20(%ebp),%eax
0842ebba +0x8c:  mov    %eax,(%esp)
0842ebbd +0x8f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842ebc2 +0x94:  mov    $0x1,%eax
0842ebc7 +0x99:  add    $0x3c,%esp
0842ebca +0x9c:  pop    %ebx
0842ebcb +0x9d:  pop    %esi
0842ebcc +0x9e:  pop    %edi
0842ebcd +0x9f:  pop    %ebp
0842ebce +0xa0:  ret
0842ebcf +0xa1:  nop
```

## 反编译 C

```c
// DB_InsertUnlimitSupportLog::dispatch @ 0x842eb2e

/* DB_InsertUnlimitSupportLog::dispatch(int, int, Stream*) */

undefined4 DB_InsertUnlimitSupportLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MySQL *this;
  SIG_INSERT_UNLIMIT_SUPPORT_LOG *pSVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar3 = Stream::GetOutBuffer<SIG_INSERT_UNLIMIT_SUPPORT_LOG>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar3 + 8);
  uVar2 = *(undefined4 *)(pSVar3 + 4);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "inSert into event_unlimitsupport_lev(m_id,occ_time,server_id,charac_no,charac_name) values(%s,now(),%d,%d,\'%s\')"
                   ,uVar4,uVar2,uVar1,pSVar3 + 0xc);
  MySQL::exec(this,true);
  return 1;
}
```

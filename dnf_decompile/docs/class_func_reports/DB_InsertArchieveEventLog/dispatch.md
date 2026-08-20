# dispatch

`_ZN25DB_InsertArchieveEventLog8dispatchEiiP6Stream`

`DB_InsertArchieveEventLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertArchieveEventLog` | `0x0842e7be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842e7be  _ZN25DB_InsertArchieveEventLog8dispatchEiiP6Stream
#           DB_InsertArchieveEventLog::dispatch(int, int, Stream*)
# range [0x0842e7be, 0x0842e855]
0842e7be +0x00:  push   %ebp
0842e7bf +0x01:  mov    %esp,%ebp
0842e7c1 +0x03:  push   %esi
0842e7c2 +0x04:  push   %ebx
0842e7c3 +0x05:  sub    $0x30,%esp
0842e7c6 +0x08:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842e7cb +0x0d:  movl   $0x0,0x8(%esp)
0842e7d3 +0x15:  movl   $0x4,0x4(%esp)
0842e7db +0x1d:  mov    %eax,(%esp)
0842e7de +0x20:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842e7e3 +0x25:  mov    %eax,-0x10(%ebp)
0842e7e6 +0x28:  mov    0x14(%ebp),%eax
0842e7e9 +0x2b:  mov    %eax,(%esp)
0842e7ec +0x2e:  call   08452930 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5546>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5546
0842e7f1 +0x33:  mov    %eax,-0xc(%ebp)
0842e7f4 +0x36:  mov    -0xc(%ebp),%eax
0842e7f7 +0x39:  mov    0x8(%eax),%eax
0842e7fa +0x3c:  mov    %eax,%esi
0842e7fc +0x3e:  mov    -0xc(%ebp),%eax
0842e7ff +0x41:  mov    0x4(%eax),%ebx
0842e802 +0x44:  mov    -0xc(%ebp),%eax
0842e805 +0x47:  mov    (%eax),%eax
0842e807 +0x49:  movl   $0x0,0x4(%esp)
0842e80f +0x51:  mov    %eax,(%esp)
0842e812 +0x54:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e817 +0x59:  mov    %esi,0x10(%esp)
0842e81b +0x5d:  mov    %ebx,0xc(%esp)
0842e81f +0x61:  mov    %eax,0x8(%esp)
0842e823 +0x65:  movl   $"inSert into log_charac_lev_log(occ_time,m_id,charac_no,achieve_type) values(now(),%s,%d,%d)",0x4(%esp)
0842e82b +0x6d:  mov    -0x10(%ebp),%eax
0842e82e +0x70:  mov    %eax,(%esp)
0842e831 +0x73:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e836 +0x78:  movl   $0x1,0x4(%esp)
0842e83e +0x80:  mov    -0x10(%ebp),%eax
0842e841 +0x83:  mov    %eax,(%esp)
0842e844 +0x86:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e849 +0x8b:  mov    $0x1,%eax
0842e84e +0x90:  add    $0x30,%esp
0842e851 +0x93:  pop    %ebx
0842e852 +0x94:  pop    %esi
0842e853 +0x95:  pop    %ebp
0842e854 +0x96:  ret
0842e855 +0x97:  nop
```

## 反编译 C

```c
// DB_InsertArchieveEventLog::dispatch @ 0x842e7be

/* DB_InsertArchieveEventLog::dispatch(int, int, Stream*) */

undefined4 DB_InsertArchieveEventLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MySQL *this;
  SIG_INSERT_ACHIEVE_EVENT *pSVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar3 = Stream::GetOutBuffer<SIG_INSERT_ACHIEVE_EVENT>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar3 + 8);
  uVar2 = *(undefined4 *)(pSVar3 + 4);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "inSert into log_charac_lev_log(occ_time,m_id,charac_no,achieve_type) values(now(),%s,%d,%d)"
                   ,uVar4,uVar2,uVar1);
  MySQL::exec(this,true);
  return 1;
}
```

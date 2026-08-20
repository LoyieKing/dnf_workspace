# dispatch

`_ZN18DB_InsertPartyType8dispatchEiiP6Stream`

`DB_InsertPartyType::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertPartyType` | `0x0842c906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842c906  _ZN18DB_InsertPartyType8dispatchEiiP6Stream
#           DB_InsertPartyType::dispatch(int, int, Stream*)
# range [0x0842c906, 0x0842ca05]
0842c906 +0x00:  push   %ebp
0842c907 +0x01:  mov    %esp,%ebp
0842c909 +0x03:  push   %edi
0842c90a +0x04:  push   %esi
0842c90b +0x05:  push   %ebx
0842c90c +0x06:  sub    $0x5c,%esp
0842c90f +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842c914 +0x0e:  movl   $0x0,0x8(%esp)
0842c91c +0x16:  movl   $0x4,0x4(%esp)
0842c924 +0x1e:  mov    %eax,(%esp)
0842c927 +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842c92c +0x26:  mov    %eax,-0x20(%ebp)
0842c92f +0x29:  movl   $0x0,-0x34(%ebp)
0842c936 +0x30:  movl   $0x0,-0x30(%ebp)
0842c93d +0x37:  movl   $0x0,-0x2c(%ebp)
0842c944 +0x3e:  movl   $0x0,-0x28(%ebp)
0842c94b +0x45:  movl   $0x0,-0x24(%ebp)
0842c952 +0x4c:  movl   $0x0,-0x1c(%ebp)
0842c959 +0x53:  jmp    0842c979 <+0x73>
0842c95b +0x55:  mov    -0x1c(%ebp),%edx
0842c95e +0x58:  lea    -0x34(%ebp),%eax
0842c961 +0x5b:  shl    $0x2,%edx
0842c964 +0x5e:  add    %edx,%eax
0842c966 +0x60:  mov    %eax,0x4(%esp)
0842c96a +0x64:  mov    0x14(%ebp),%eax
0842c96d +0x67:  mov    %eax,(%esp)
0842c970 +0x6a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842c975 +0x6f:  addl   $0x1,-0x1c(%ebp)
0842c979 +0x73:  cmpl   $0x4,-0x1c(%ebp)
0842c97d +0x77:  setle  %al
0842c980 +0x7a:  test   %al,%al
0842c982 +0x7c:  jne    0842c95b <+0x55>
0842c984 +0x7e:  mov    -0x24(%ebp),%eax
0842c987 +0x81:  mov    %eax,-0x40(%ebp)
0842c98a +0x84:  mov    -0x28(%ebp),%edx
0842c98d +0x87:  mov    %edx,-0x3c(%ebp)
0842c990 +0x8a:  mov    -0x2c(%ebp),%edi
0842c993 +0x8d:  mov    -0x30(%ebp),%esi
0842c996 +0x90:  mov    -0x34(%ebp),%ebx
0842c999 +0x93:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842c99e +0x98:  mov    %eax,(%esp)
0842c9a1 +0x9b:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0842c9a6 +0xa0:  mov    -0x40(%ebp),%edx
0842c9a9 +0xa3:  mov    %edx,0x1c(%esp)
0842c9ad +0xa7:  mov    -0x3c(%ebp),%edx
0842c9b0 +0xaa:  mov    %edx,0x18(%esp)
0842c9b4 +0xae:  mov    %edi,0x14(%esp)
0842c9b8 +0xb2:  mov    %esi,0x10(%esp)
0842c9bc +0xb6:  mov    %ebx,0xc(%esp)
0842c9c0 +0xba:  mov    %eax,0x8(%esp)
0842c9c4 +0xbe:  movl   $"inSert into log_party_type(channel_no,occ_date,guild_count,member_count,helped_count,normal_count,member_helped_count) values(%d,now(),%d,%d,%d,%d,%d)",0x4(%esp)
0842c9cc +0xc6:  mov    -0x20(%ebp),%eax
0842c9cf +0xc9:  mov    %eax,(%esp)
0842c9d2 +0xcc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842c9d7 +0xd1:  movl   $0x1,0x4(%esp)
0842c9df +0xd9:  mov    -0x20(%ebp),%eax
0842c9e2 +0xdc:  mov    %eax,(%esp)
0842c9e5 +0xdf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842c9ea +0xe4:  xor    $0x1,%eax
0842c9ed +0xe7:  test   %al,%al
0842c9ef +0xe9:  je     0842c9f8 <+0xf2>
0842c9f1 +0xeb:  mov    $0x0,%eax
0842c9f6 +0xf0:  jmp    0842c9fd <+0xf7>
0842c9f8 +0xf2:  mov    $0x1,%eax
0842c9fd +0xf7:  add    $0x5c,%esp
0842ca00 +0xfa:  pop    %ebx
0842ca01 +0xfb:  pop    %esi
0842ca02 +0xfc:  pop    %edi
0842ca03 +0xfd:  pop    %ebp
0842ca04 +0xfe:  ret
0842ca05 +0xff:  nop
```

## 反编译 C

```c
// DB_InsertPartyType::dispatch @ 0x842c906

/* DB_InsertPartyType::dispatch(int, int, Stream*) */

bool DB_InsertPartyType::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  CEnvironment *this;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  int local_38 [5];
  MySQL *local_24;
  int local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  for (local_20 = 0; iVar5 = local_38[4], iVar4 = local_38[3], iVar3 = local_38[2],
      iVar2 = local_38[1], iVar1 = local_38[0], local_20 < 5; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,local_38 + local_20);
  }
  this = (CEnvironment *)G_CEnvironment();
  uVar7 = CEnvironment::get_channel_no(this);
  MySQL::set_query(local_24,
                   "inSert into log_party_type(channel_no,occ_date,guild_count,member_count,helped_count,normal_count,member_helped_count) values(%d,now(),%d,%d,%d,%d,%d)"
                   ,uVar7,iVar1,iVar2,iVar3,iVar4,iVar5);
  cVar6 = MySQL::exec(local_24,true);
  return cVar6 == '\x01';
}
```

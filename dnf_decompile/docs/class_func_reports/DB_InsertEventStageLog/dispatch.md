# dispatch

`_ZN22DB_InsertEventStageLog8dispatchEiiP6Stream`

`DB_InsertEventStageLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertEventStageLog` | `0x08449144` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449144  _ZN22DB_InsertEventStageLog8dispatchEiiP6Stream
#           DB_InsertEventStageLog::dispatch(int, int, Stream*)
# range [0x08449144, 0x0844920d]
08449144 +0x00:  push   %ebp
08449145 +0x01:  mov    %esp,%ebp
08449147 +0x03:  push   %edi
08449148 +0x04:  push   %esi
08449149 +0x05:  push   %ebx
0844914a +0x06:  sub    $0x4c,%esp
0844914d +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08449152 +0x0e:  movl   $0x0,0x8(%esp)
0844915a +0x16:  movl   $0x9,0x4(%esp)
08449162 +0x1e:  mov    %eax,(%esp)
08449165 +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844916a +0x26:  mov    %eax,-0x20(%ebp)
0844916d +0x29:  mov    0x14(%ebp),%eax
08449170 +0x2c:  mov    %eax,(%esp)
08449173 +0x2f:  call   0845467a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7290>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7290
08449178 +0x34:  mov    %eax,-0x1c(%ebp)
0844917b +0x37:  mov    -0x1c(%ebp),%eax
0844917e +0x3a:  add    $0x14,%eax
08449181 +0x3d:  mov    %eax,-0x2c(%ebp)
08449184 +0x40:  mov    -0x1c(%ebp),%eax
08449187 +0x43:  mov    0x10(%eax),%edi
0844918a +0x46:  mov    -0x1c(%ebp),%eax
0844918d +0x49:  mov    0xc(%eax),%esi
08449190 +0x4c:  mov    -0x1c(%ebp),%eax
08449193 +0x4f:  mov    0x8(%eax),%ebx
08449196 +0x52:  mov    -0x1c(%ebp),%eax
08449199 +0x55:  mov    0x4(%eax),%eax
0844919c +0x58:  movl   $0x0,0x4(%esp)
084491a4 +0x60:  mov    %eax,(%esp)
084491a7 +0x63:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084491ac +0x68:  mov    -0x1c(%ebp),%edx
084491af +0x6b:  mov    (%edx),%edx
084491b1 +0x6d:  mov    -0x2c(%ebp),%ecx
084491b4 +0x70:  mov    %ecx,0x1c(%esp)
084491b8 +0x74:  mov    %edi,0x18(%esp)
084491bc +0x78:  mov    %esi,0x14(%esp)
084491c0 +0x7c:  mov    %ebx,0x10(%esp)
084491c4 +0x80:  mov    %eax,0xc(%esp)
084491c8 +0x84:  mov    %edx,0x8(%esp)
084491cc +0x88:  movl   $"inSert into dnf_event_accept_list(event_id,m_id,charac_no,server_info,occ_date,stage,stage_result) values(%d,%s,%d,%d,now(),%d,'%s')",0x4(%esp)
084491d4 +0x90:  mov    -0x20(%ebp),%eax
084491d7 +0x93:  mov    %eax,(%esp)
084491da +0x96:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084491df +0x9b:  movl   $0x1,0x4(%esp)
084491e7 +0xa3:  mov    -0x20(%ebp),%eax
084491ea +0xa6:  mov    %eax,(%esp)
084491ed +0xa9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084491f2 +0xae:  xor    $0x1,%eax
084491f5 +0xb1:  test   %al,%al
084491f7 +0xb3:  je     08449200 <+0xbc>
084491f9 +0xb5:  mov    $0x0,%eax
084491fe +0xba:  jmp    08449205 <+0xc1>
08449200 +0xbc:  mov    $0x1,%eax
08449205 +0xc1:  add    $0x4c,%esp
08449208 +0xc4:  pop    %ebx
08449209 +0xc5:  pop    %esi
0844920a +0xc6:  pop    %edi
0844920b +0xc7:  pop    %ebp
0844920c +0xc8:  ret
0844920d +0xc9:  nop
```

## 反编译 C

```c
// DB_InsertEventStageLog::dispatch @ 0x8449144

/* DB_InsertEventStageLog::dispatch(int, int, Stream*) */

bool DB_InsertEventStageLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  MySQL *this;
  SIG_EVENT_STAGE_LOG *pSVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  pSVar5 = Stream::GetOutBuffer<SIG_EVENT_STAGE_LOG>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar5 + 0x10);
  uVar2 = *(undefined4 *)(pSVar5 + 0xc);
  uVar3 = *(undefined4 *)(pSVar5 + 8);
  uVar6 = NumberToString(*(uint *)(pSVar5 + 4),0);
  MySQL::set_query(this,
                   "inSert into dnf_event_accept_list(event_id,m_id,charac_no,server_info,occ_date,stage,stage_result) values(%d,%s,%d,%d,now(),%d,\'%s\')"
                   ,*(undefined4 *)pSVar5,uVar6,uVar3,uVar2,uVar1,pSVar5 + 0x14);
  cVar4 = MySQL::exec(this,true);
  return cVar4 == '\x01';
}
```

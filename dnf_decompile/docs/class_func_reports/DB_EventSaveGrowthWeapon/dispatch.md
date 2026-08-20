# dispatch

`_ZN24DB_EventSaveGrowthWeapon8dispatchEiiP6Stream`

`DB_EventSaveGrowthWeapon::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_EventSaveGrowthWeapon` | `0x084492fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084492fc  _ZN24DB_EventSaveGrowthWeapon8dispatchEiiP6Stream
#           DB_EventSaveGrowthWeapon::dispatch(int, int, Stream*)
# range [0x084492fc, 0x084493e7]
084492fc +0x00:  push   %ebp
084492fd +0x01:  mov    %esp,%ebp
084492ff +0x03:  push   %ebx
08449300 +0x04:  sub    $0x34,%esp
08449303 +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08449308 +0x0c:  movl   $0x0,0x8(%esp)
08449310 +0x14:  movl   $0x9,0x4(%esp)
08449318 +0x1c:  mov    %eax,(%esp)
0844931b +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08449320 +0x24:  mov    %eax,-0xc(%ebp)
08449323 +0x27:  movl   $0x0,-0x10(%ebp)
0844932a +0x2e:  movw   $0x0,-0x12(%ebp)
08449330 +0x34:  lea    -0x10(%ebp),%eax
08449333 +0x37:  mov    %eax,0x4(%esp)
08449337 +0x3b:  mov    0x14(%ebp),%eax
0844933a +0x3e:  mov    %eax,(%esp)
0844933d +0x41:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08449342 +0x46:  lea    -0x12(%ebp),%eax
08449345 +0x49:  mov    %eax,0x4(%esp)
08449349 +0x4d:  mov    0x14(%ebp),%eax
0844934c +0x50:  mov    %eax,(%esp)
0844934f +0x53:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
08449354 +0x58:  movzwl -0x12(%ebp),%eax
08449358 +0x5c:  movswl %ax,%ebx
0844935b +0x5f:  mov    -0x10(%ebp),%eax
0844935e +0x62:  movl   $0x0,0x4(%esp)
08449366 +0x6a:  mov    %eax,(%esp)
08449369 +0x6d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844936e +0x72:  mov    %ebx,0xc(%esp)
08449372 +0x76:  mov    %eax,0x8(%esp)
08449376 +0x7a:  movl   $"inSert into event_1207_growthweapon(m_id, server_id, occ_date) values(%s, %d, now())",0x4(%esp)
0844937e +0x82:  mov    -0xc(%ebp),%eax
08449381 +0x85:  mov    %eax,(%esp)
08449384 +0x88:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449389 +0x8d:  movl   $0x1,0x4(%esp)
08449391 +0x95:  mov    -0xc(%ebp),%eax
08449394 +0x98:  mov    %eax,(%esp)
08449397 +0x9b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844939c +0xa0:  xor    $0x1,%eax
0844939f +0xa3:  test   %al,%al
084493a1 +0xa5:  je     084493dd <+0xe1>
084493a3 +0xa7:  mov    -0x10(%ebp),%eax
084493a6 +0xaa:  mov    %eax,0x14(%esp)
084493aa +0xae:  movl   $"DB_EventSaveGrowthWeapon Query Error : m_id(%d)",0x10(%esp)
084493b2 +0xb6:  movl   $0xb8e6,0xc(%esp)
084493ba +0xbe:  movl   $&_ZZN24DB_EventSaveGrowthWeapon8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
084493c2 +0xc6:  movl   $"DBThread.cpp",0x4(%esp)
084493ca +0xce:  movl   $0x1,(%esp)
084493d1 +0xd5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084493d6 +0xda:  mov    $0x0,%eax
084493db +0xdf:  jmp    084493e2 <+0xe6>
084493dd +0xe1:  mov    $0x1,%eax
084493e2 +0xe6:  add    $0x34,%esp
084493e5 +0xe9:  pop    %ebx
084493e6 +0xea:  pop    %ebp
084493e7 +0xeb:  ret
```

## 反编译 C

```c
// DB_EventSaveGrowthWeapon::dispatch @ 0x84492fc

/* DB_EventSaveGrowthWeapon::dispatch(int, int, Stream*) */

bool DB_EventSaveGrowthWeapon::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *in_stack_00000010;
  short local_16;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_16 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_16);
  iVar3 = (int)local_16;
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into event_1207_growthweapon(m_id, server_id, occ_date) values(%s, %d, now())"
                   ,uVar2,iVar3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_EventSaveGrowthWeapon::dispatch(int, int, Stream*)"
               ,0xb8e6,"DB_EventSaveGrowthWeapon Query Error : m_id(%d)",local_14);
  }
  return cVar1 == '\x01';
}
```

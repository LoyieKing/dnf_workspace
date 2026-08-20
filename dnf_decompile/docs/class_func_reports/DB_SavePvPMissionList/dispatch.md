# dispatch

`_ZN21DB_SavePvPMissionList8dispatchEiiP6Stream`

`DB_SavePvPMissionList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SavePvPMissionList` | `0x0843f8fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f8fa  _ZN21DB_SavePvPMissionList8dispatchEiiP6Stream
#           DB_SavePvPMissionList::dispatch(int, int, Stream*)
# range [0x0843f8fa, 0x0843fa77]
0843f8fa +0x000:  push   %ebp
0843f8fb +0x001:  mov    %esp,%ebp
0843f8fd +0x003:  push   %edi
0843f8fe +0x004:  push   %ebx
0843f8ff +0x005:  sub    $0x1c0,%esp
0843f905 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843f90a +0x010:  movl   $0x0,0x8(%esp)
0843f912 +0x018:  movl   $0x3,0x4(%esp)
0843f91a +0x020:  mov    %eax,(%esp)
0843f91d +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843f922 +0x028:  mov    %eax,-0x10(%ebp)
0843f925 +0x02b:  mov    0x14(%ebp),%eax
0843f928 +0x02e:  mov    %eax,(%esp)
0843f92b +0x031:  call   08453bbc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x67d2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x67d2
0843f930 +0x036:  mov    %eax,-0xc(%ebp)
0843f933 +0x039:  lea    -0x1ac(%ebp),%ebx
0843f939 +0x03f:  mov    $0x0,%eax
0843f93e +0x044:  mov    $0x66,%edx
0843f943 +0x049:  mov    %ebx,%edi
0843f945 +0x04b:  mov    %edx,%ecx
0843f947 +0x04d:  rep stos %eax,%es:(%edi)
0843f949 +0x04f:  movl   $0x198,-0x14(%ebp)
0843f950 +0x056:  mov    -0xc(%ebp),%eax
0843f953 +0x059:  movl   $0x14a,0xc(%esp)
0843f95b +0x061:  mov    %eax,0x8(%esp)
0843f95f +0x065:  lea    -0x14(%ebp),%eax
0843f962 +0x068:  mov    %eax,0x4(%esp)
0843f966 +0x06c:  lea    -0x1ac(%ebp),%eax
0843f96c +0x072:  mov    %eax,(%esp)
0843f96f +0x075:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0843f974 +0x07a:  xor    $0x1,%eax
0843f977 +0x07d:  test   %al,%al
0843f979 +0x07f:  je     0843f985 <+0x8b>
0843f97b +0x081:  mov    $0x0,%eax
0843f980 +0x086:  jmp    0843fa6d <+0x173>
0843f985 +0x08b:  mov    -0xc(%ebp),%eax
0843f988 +0x08e:  mov    (%eax),%ebx
0843f98a +0x090:  mov    -0x14(%ebp),%eax
0843f98d +0x093:  mov    %eax,0xc(%esp)
0843f991 +0x097:  lea    -0x1ac(%ebp),%eax
0843f997 +0x09d:  mov    %eax,0x8(%esp)
0843f99b +0x0a1:  movl   $0x0,0x4(%esp)
0843f9a3 +0x0a9:  mov    -0x10(%ebp),%eax
0843f9a6 +0x0ac:  mov    %eax,(%esp)
0843f9a9 +0x0af:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0843f9ae +0x0b4:  mov    %ebx,0xc(%esp)
0843f9b2 +0x0b8:  mov    %eax,0x8(%esp)
0843f9b6 +0x0bc:  movl   $"upDate fair_pvp_score set pvp_mission_info='%s' where charac_no=%u",0x4(%esp)
0843f9be +0x0c4:  mov    -0x10(%ebp),%eax
0843f9c1 +0x0c7:  mov    %eax,(%esp)
0843f9c4 +0x0ca:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843f9c9 +0x0cf:  movl   $0x1,0x4(%esp)
0843f9d1 +0x0d7:  mov    -0x10(%ebp),%eax
0843f9d4 +0x0da:  mov    %eax,(%esp)
0843f9d7 +0x0dd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843f9dc +0x0e2:  xor    $0x1,%eax
0843f9df +0x0e5:  test   %al,%al
0843f9e1 +0x0e7:  je     0843f9ed <+0xf3>
0843f9e3 +0x0e9:  mov    $0x0,%eax
0843f9e8 +0x0ee:  jmp    0843fa6d <+0x173>
0843f9ed +0x0f3:  mov    -0x10(%ebp),%eax
0843f9f0 +0x0f6:  mov    %eax,(%esp)
0843f9f3 +0x0f9:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843f9f8 +0x0fe:  or     %edx,%eax
0843f9fa +0x100:  test   %eax,%eax
0843f9fc +0x102:  sete   %al
0843f9ff +0x105:  test   %al,%al
0843fa01 +0x107:  je     0843fa68 <+0x16e>
0843fa03 +0x109:  mov    -0x14(%ebp),%eax
0843fa06 +0x10c:  mov    %eax,0xc(%esp)
0843fa0a +0x110:  lea    -0x1ac(%ebp),%eax
0843fa10 +0x116:  mov    %eax,0x8(%esp)
0843fa14 +0x11a:  movl   $0x0,0x4(%esp)
0843fa1c +0x122:  mov    -0x10(%ebp),%eax
0843fa1f +0x125:  mov    %eax,(%esp)
0843fa22 +0x128:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0843fa27 +0x12d:  mov    -0xc(%ebp),%edx
0843fa2a +0x130:  mov    (%edx),%edx
0843fa2c +0x132:  mov    %eax,0xc(%esp)
0843fa30 +0x136:  mov    %edx,0x8(%esp)
0843fa34 +0x13a:  movl   $"inSert into fair_pvp_score(charac_no, pvp_mission_info) values(%u, '%s')",0x4(%esp)
0843fa3c +0x142:  mov    -0x10(%ebp),%eax
0843fa3f +0x145:  mov    %eax,(%esp)
0843fa42 +0x148:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843fa47 +0x14d:  movl   $0x1,0x4(%esp)
0843fa4f +0x155:  mov    -0x10(%ebp),%eax
0843fa52 +0x158:  mov    %eax,(%esp)
0843fa55 +0x15b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843fa5a +0x160:  xor    $0x1,%eax
0843fa5d +0x163:  test   %al,%al
0843fa5f +0x165:  je     0843fa68 <+0x16e>
0843fa61 +0x167:  mov    $0x0,%eax
0843fa66 +0x16c:  jmp    0843fa6d <+0x173>
0843fa68 +0x16e:  mov    $0x1,%eax
0843fa6d +0x173:  add    $0x1c0,%esp
0843fa73 +0x179:  pop    %ebx
0843fa74 +0x17a:  pop    %edi
0843fa75 +0x17b:  pop    %ebp
0843fa76 +0x17c:  ret
0843fa77 +0x17d:  nop
```

## 反编译 C

```c
// DB_SavePvPMissionList::dispatch @ 0x843f8fa

/* DB_SavePvPMissionList::dispatch(int, int, Stream*) */

undefined4 DB_SavePvPMissionList::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  char local_1b0 [408];
  uint local_18;
  MySQL *local_14;
  SIG_REQUEST_PVP_MISSION_LIST *local_10;
  
  bVar6 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_10 = Stream::GetOutBuffer<SIG_REQUEST_PVP_MISSION_LIST>(in_stack_00000010);
  pcVar5 = local_1b0;
  for (iVar4 = 0x66; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  local_18 = 0x198;
  cVar1 = compress_zip(local_1b0,&local_18,(char *)local_10,0x14a);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)local_10;
    uVar3 = MySQL::blob_to_str(local_14,0,local_1b0,local_18);
    MySQL::set_query(local_14,"upDate fair_pvp_score set pvp_mission_info=\'%s\' where charac_no=%u"
                     ,uVar3,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      lVar7 = MySQL::getAffectedRowCount(local_14);
      if (lVar7 == 0) {
        uVar2 = MySQL::blob_to_str(local_14,0,local_1b0,local_18);
        MySQL::set_query(local_14,
                         "inSert into fair_pvp_score(charac_no, pvp_mission_info) values(%u, \'%s\')"
                         ,*(undefined4 *)local_10,uVar2);
        cVar1 = MySQL::exec(local_14,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

# dispatch

`_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream`

`DB_InsertAccountFirstLoginDailyFlag::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertAccountFirstLoginDailyFlag` | `0x0843e8be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843e8be  _ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream
#           DB_InsertAccountFirstLoginDailyFlag::dispatch(int, int, Stream*)
# range [0x0843e8be, 0x0843ea63]
0843e8be +0x000:  push   %ebp
0843e8bf +0x001:  mov    %esp,%ebp
0843e8c1 +0x003:  push   %esi
0843e8c2 +0x004:  push   %ebx
0843e8c3 +0x005:  sub    $0x40,%esp
0843e8c6 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843e8cb +0x00d:  movl   $0x0,0x8(%esp)
0843e8d3 +0x015:  movl   $0x9,0x4(%esp)
0843e8db +0x01d:  mov    %eax,(%esp)
0843e8de +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843e8e3 +0x025:  mov    %eax,-0x18(%ebp)
0843e8e6 +0x028:  movl   $0x0,-0x1c(%ebp)
0843e8ed +0x02f:  movl   $0x0,-0x20(%ebp)
0843e8f4 +0x036:  movl   $0x0,-0x14(%ebp)
0843e8fb +0x03d:  lea    -0x1c(%ebp),%eax
0843e8fe +0x040:  mov    %eax,0x4(%esp)
0843e902 +0x044:  mov    0x14(%ebp),%eax
0843e905 +0x047:  mov    %eax,(%esp)
0843e908 +0x04a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843e90d +0x04f:  lea    -0x20(%ebp),%eax
0843e910 +0x052:  mov    %eax,0x4(%esp)
0843e914 +0x056:  mov    0x14(%ebp),%eax
0843e917 +0x059:  mov    %eax,(%esp)
0843e91a +0x05c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843e91f +0x061:  lea    -0x24(%ebp),%eax
0843e922 +0x064:  mov    %eax,0x4(%esp)
0843e926 +0x068:  mov    0x14(%ebp),%eax
0843e929 +0x06b:  mov    %eax,(%esp)
0843e92c +0x06e:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843e931 +0x073:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0843e936 +0x078:  mov    %eax,(%esp)
0843e939 +0x07b:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0843e93e +0x080:  mov    %eax,-0x10(%ebp)
0843e941 +0x083:  movl   $0x0,-0xc(%ebp)
0843e948 +0x08a:  mov    -0x24(%ebp),%eax
0843e94b +0x08d:  cmp    $0x19c,%eax
0843e950 +0x092:  jne    0843e977 <+0xb9>
0843e952 +0x094:  mov    -0x24(%ebp),%eax
0843e955 +0x097:  mov    %eax,0x4(%esp)
0843e959 +0x09b:  mov    -0x10(%ebp),%eax
0843e95c +0x09e:  mov    %eax,(%esp)
0843e95f +0x0a1:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0843e964 +0x0a6:  mov    %eax,-0xc(%ebp)
0843e967 +0x0a9:  cmpl   $0x0,-0xc(%ebp)
0843e96b +0x0ad:  jne    0843e981 <+0xc3>
0843e96d +0x0af:  mov    $0x0,%eax
0843e972 +0x0b4:  jmp    0843ea5c <+0x19e>
0843e977 +0x0b9:  mov    $0x0,%eax
0843e97c +0x0be:  jmp    0843ea5c <+0x19e>
0843e981 +0x0c3:  mov    -0x1c(%ebp),%esi
0843e984 +0x0c6:  mov    -0x20(%ebp),%ebx
0843e987 +0x0c9:  mov    -0xc(%ebp),%eax
0843e98a +0x0cc:  mov    (%eax),%eax
0843e98c +0x0ce:  add    $0x20,%eax
0843e98f +0x0d1:  mov    (%eax),%edx
0843e991 +0x0d3:  mov    -0xc(%ebp),%eax
0843e994 +0x0d6:  mov    %eax,(%esp)
0843e997 +0x0d9:  call   *%edx
0843e999 +0x0db:  mov    %eax,(%esp)
0843e99c +0x0de:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843e9a1 +0x0e3:  mov    %esi,0x10(%esp)
0843e9a5 +0x0e7:  mov    %ebx,0xc(%esp)
0843e9a9 +0x0eb:  mov    %eax,0x8(%esp)
0843e9ad +0x0ef:  movl   $"upDate %s set charac_no=%u, occ_date=now() where m_id=%u",0x4(%esp)
0843e9b5 +0x0f7:  mov    -0x18(%ebp),%eax
0843e9b8 +0x0fa:  mov    %eax,(%esp)
0843e9bb +0x0fd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843e9c0 +0x102:  movl   $0x1,0x4(%esp)
0843e9c8 +0x10a:  mov    -0x18(%ebp),%eax
0843e9cb +0x10d:  mov    %eax,(%esp)
0843e9ce +0x110:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843e9d3 +0x115:  xor    $0x1,%eax
0843e9d6 +0x118:  test   %al,%al
0843e9d8 +0x11a:  je     0843e9e1 <+0x123>
0843e9da +0x11c:  mov    $0x0,%eax
0843e9df +0x121:  jmp    0843ea5c <+0x19e>
0843e9e1 +0x123:  mov    -0x18(%ebp),%eax
0843e9e4 +0x126:  mov    %eax,(%esp)
0843e9e7 +0x129:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843e9ec +0x12e:  or     %edx,%eax
0843e9ee +0x130:  test   %eax,%eax
0843e9f0 +0x132:  sete   %al
0843e9f3 +0x135:  test   %al,%al
0843e9f5 +0x137:  je     0843ea57 <+0x199>
0843e9f7 +0x139:  mov    -0x20(%ebp),%esi
0843e9fa +0x13c:  mov    -0x1c(%ebp),%ebx
0843e9fd +0x13f:  mov    -0xc(%ebp),%eax
0843ea00 +0x142:  mov    (%eax),%eax
0843ea02 +0x144:  add    $0x20,%eax
0843ea05 +0x147:  mov    (%eax),%edx
0843ea07 +0x149:  mov    -0xc(%ebp),%eax
0843ea0a +0x14c:  mov    %eax,(%esp)
0843ea0d +0x14f:  call   *%edx
0843ea0f +0x151:  mov    %eax,(%esp)
0843ea12 +0x154:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843ea17 +0x159:  mov    %esi,0x10(%esp)
0843ea1b +0x15d:  mov    %ebx,0xc(%esp)
0843ea1f +0x161:  mov    %eax,0x8(%esp)
0843ea23 +0x165:  movl   $"inSert into %s(m_id, charac_no, occ_date) values(%u, %u, now())",0x4(%esp)
0843ea2b +0x16d:  mov    -0x18(%ebp),%eax
0843ea2e +0x170:  mov    %eax,(%esp)
0843ea31 +0x173:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ea36 +0x178:  movl   $0x1,0x4(%esp)
0843ea3e +0x180:  mov    -0x18(%ebp),%eax
0843ea41 +0x183:  mov    %eax,(%esp)
0843ea44 +0x186:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ea49 +0x18b:  xor    $0x1,%eax
0843ea4c +0x18e:  test   %al,%al
0843ea4e +0x190:  je     0843ea57 <+0x199>
0843ea50 +0x192:  mov    $0x0,%eax
0843ea55 +0x197:  jmp    0843ea5c <+0x19e>
0843ea57 +0x199:  mov    $0x1,%eax
0843ea5c +0x19e:  add    $0x40,%esp
0843ea5f +0x1a1:  pop    %ebx
0843ea60 +0x1a2:  pop    %esi
0843ea61 +0x1a3:  pop    %ebp
0843ea62 +0x1a4:  ret
0843ea63 +0x1a5:  nop
```

## 反编译 C

```c
// DB_InsertAccountFirstLoginDailyFlag::dispatch @ 0x843e8be

/* DB_InsertAccountFirstLoginDailyFlag::dispatch(int, int, Stream*) */

undefined4 DB_InsertAccountFirstLoginDailyFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this;
  undefined4 uVar4;
  string *psVar5;
  TCHAR *pTVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  int local_28;
  uint local_24;
  uint local_20;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_20 = 0;
  local_24 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  this = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::get_event_script_mng(this);
  local_10 = (int *)0x0;
  if (local_28 == 0x19c) {
    local_10 = (int *)EventClassify::CEventScriptMng::get_event_entity(local_14);
    uVar2 = local_20;
    uVar1 = local_24;
    if (local_10 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      psVar5 = (string *)(**(code **)(*local_10 + 0x20))(local_10,local_28);
      pTVar6 = toTString(psVar5);
      MySQL::set_query(local_1c,"upDate %s set charac_no=%u, occ_date=now() where m_id=%u",pTVar6,
                       uVar1,uVar2);
      cVar3 = MySQL::exec(local_1c,true);
      if (cVar3 == '\x01') {
        lVar7 = MySQL::getAffectedRowCount(local_1c);
        uVar2 = local_20;
        uVar1 = local_24;
        if (lVar7 == 0) {
          psVar5 = (string *)(**(code **)(*local_10 + 0x20))(local_10);
          pTVar6 = toTString(psVar5);
          MySQL::set_query(local_1c,
                           "inSert into %s(m_id, charac_no, occ_date) values(%u, %u, now())",pTVar6,
                           uVar2,uVar1);
          cVar3 = MySQL::exec(local_1c,true);
          if (cVar3 != '\x01') {
            return 0;
          }
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

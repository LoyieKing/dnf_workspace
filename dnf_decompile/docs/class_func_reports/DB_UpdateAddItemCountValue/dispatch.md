# dispatch

`_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream`

`DB_UpdateAddItemCountValue::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAddItemCountValue` | `0x0843ed96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ed96  _ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream
#           DB_UpdateAddItemCountValue::dispatch(int, int, Stream*)
# range [0x0843ed96, 0x0843ef2f]
0843ed96 +0x000:  push   %ebp
0843ed97 +0x001:  mov    %esp,%ebp
0843ed99 +0x003:  push   %esi
0843ed9a +0x004:  push   %ebx
0843ed9b +0x005:  sub    $0x40,%esp
0843ed9e +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843eda3 +0x00d:  movl   $0x0,0x8(%esp)
0843edab +0x015:  movl   $0x9,0x4(%esp)
0843edb3 +0x01d:  mov    %eax,(%esp)
0843edb6 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843edbb +0x025:  mov    %eax,-0x14(%ebp)
0843edbe +0x028:  movl   $0x0,-0x18(%ebp)
0843edc5 +0x02f:  movl   $0x0,-0x1c(%ebp)
0843edcc +0x036:  lea    -0x18(%ebp),%eax
0843edcf +0x039:  mov    %eax,0x4(%esp)
0843edd3 +0x03d:  mov    0x14(%ebp),%eax
0843edd6 +0x040:  mov    %eax,(%esp)
0843edd9 +0x043:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843edde +0x048:  lea    -0x1c(%ebp),%eax
0843ede1 +0x04b:  mov    %eax,0x4(%esp)
0843ede5 +0x04f:  mov    0x14(%ebp),%eax
0843ede8 +0x052:  mov    %eax,(%esp)
0843edeb +0x055:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843edf0 +0x05a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0843edf5 +0x05f:  mov    %eax,(%esp)
0843edf8 +0x062:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0843edfd +0x067:  mov    %eax,-0x10(%ebp)
0843ee00 +0x06a:  movl   $0x193,0x4(%esp)
0843ee08 +0x072:  mov    -0x10(%ebp),%eax
0843ee0b +0x075:  mov    %eax,(%esp)
0843ee0e +0x078:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0843ee13 +0x07d:  mov    %eax,-0xc(%ebp)
0843ee16 +0x080:  cmpl   $0x0,-0xc(%ebp)
0843ee1a +0x084:  jne    0843ee26 <+0x90>
0843ee1c +0x086:  mov    $0x0,%eax
0843ee21 +0x08b:  jmp    0843ef28 <+0x192>
0843ee26 +0x090:  mov    -0x18(%ebp),%eax
0843ee29 +0x093:  movl   $0x0,0x4(%esp)
0843ee31 +0x09b:  mov    %eax,(%esp)
0843ee34 +0x09e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843ee39 +0x0a3:  mov    %eax,%ebx
0843ee3b +0x0a5:  mov    -0x1c(%ebp),%esi
0843ee3e +0x0a8:  mov    -0xc(%ebp),%eax
0843ee41 +0x0ab:  mov    (%eax),%eax
0843ee43 +0x0ad:  add    $0x20,%eax
0843ee46 +0x0b0:  mov    (%eax),%edx
0843ee48 +0x0b2:  mov    -0xc(%ebp),%eax
0843ee4b +0x0b5:  mov    %eax,(%esp)
0843ee4e +0x0b8:  call   *%edx
0843ee50 +0x0ba:  mov    %eax,(%esp)
0843ee53 +0x0bd:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843ee58 +0x0c2:  mov    %ebx,0x10(%esp)
0843ee5c +0x0c6:  mov    %esi,0xc(%esp)
0843ee60 +0x0ca:  mov    %eax,0x8(%esp)
0843ee64 +0x0ce:  movl   $"upDate %s set item_cnt=item_cnt+%d where m_id=%s",0x4(%esp)
0843ee6c +0x0d6:  mov    -0x14(%ebp),%eax
0843ee6f +0x0d9:  mov    %eax,(%esp)
0843ee72 +0x0dc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ee77 +0x0e1:  movl   $0x1,0x4(%esp)
0843ee7f +0x0e9:  mov    -0x14(%ebp),%eax
0843ee82 +0x0ec:  mov    %eax,(%esp)
0843ee85 +0x0ef:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ee8a +0x0f4:  xor    $0x1,%eax
0843ee8d +0x0f7:  test   %al,%al
0843ee8f +0x0f9:  je     0843ee9b <+0x105>
0843ee91 +0x0fb:  mov    $0x0,%eax
0843ee96 +0x100:  jmp    0843ef28 <+0x192>
0843ee9b +0x105:  mov    -0x14(%ebp),%eax
0843ee9e +0x108:  mov    %eax,(%esp)
0843eea1 +0x10b:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843eea6 +0x110:  or     %edx,%eax
0843eea8 +0x112:  test   %eax,%eax
0843eeaa +0x114:  sete   %al
0843eead +0x117:  test   %al,%al
0843eeaf +0x119:  je     0843ef23 <+0x18d>
0843eeb1 +0x11b:  mov    -0x1c(%ebp),%esi
0843eeb4 +0x11e:  mov    -0x18(%ebp),%eax
0843eeb7 +0x121:  movl   $0x0,0x4(%esp)
0843eebf +0x129:  mov    %eax,(%esp)
0843eec2 +0x12c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843eec7 +0x131:  mov    %eax,%ebx
0843eec9 +0x133:  mov    -0xc(%ebp),%eax
0843eecc +0x136:  mov    (%eax),%eax
0843eece +0x138:  add    $0x20,%eax
0843eed1 +0x13b:  mov    (%eax),%edx
0843eed3 +0x13d:  mov    -0xc(%ebp),%eax
0843eed6 +0x140:  mov    %eax,(%esp)
0843eed9 +0x143:  call   *%edx
0843eedb +0x145:  mov    %eax,(%esp)
0843eede +0x148:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843eee3 +0x14d:  mov    %esi,0x10(%esp)
0843eee7 +0x151:  mov    %ebx,0xc(%esp)
0843eeeb +0x155:  mov    %eax,0x8(%esp)
0843eeef +0x159:  movl   $"inSert into %s(m_id, item_cnt) values(%s, %d)",0x4(%esp)
0843eef7 +0x161:  mov    -0x14(%ebp),%eax
0843eefa +0x164:  mov    %eax,(%esp)
0843eefd +0x167:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ef02 +0x16c:  movl   $0x1,0x4(%esp)
0843ef0a +0x174:  mov    -0x14(%ebp),%eax
0843ef0d +0x177:  mov    %eax,(%esp)
0843ef10 +0x17a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ef15 +0x17f:  xor    $0x1,%eax
0843ef18 +0x182:  test   %al,%al
0843ef1a +0x184:  je     0843ef23 <+0x18d>
0843ef1c +0x186:  mov    $0x0,%eax
0843ef21 +0x18b:  jmp    0843ef28 <+0x192>
0843ef23 +0x18d:  mov    $0x1,%eax
0843ef28 +0x192:  add    $0x40,%esp
0843ef2b +0x195:  pop    %ebx
0843ef2c +0x196:  pop    %esi
0843ef2d +0x197:  pop    %ebp
0843ef2e +0x198:  ret
0843ef2f +0x199:  nop
```

## 反编译 C

```c
// DB_UpdateAddItemCountValue::dispatch @ 0x843ed96

/* DB_UpdateAddItemCountValue::dispatch(int, int, Stream*) */

undefined4 DB_UpdateAddItemCountValue::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  CDataManager *this;
  undefined4 uVar3;
  string *psVar4;
  TCHAR *pTVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  uint local_20;
  uint local_1c;
  MySQL *local_18;
  int local_14;
  int *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_1c = 0;
  local_20 = 0;
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_20);
  this = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::get_event_script_mng(this);
  local_10 = (int *)EventClassify::CEventScriptMng::get_event_entity(local_14);
  if (local_10 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = NumberToString(local_1c,0);
    uVar1 = local_20;
    psVar4 = (string *)(**(code **)(*local_10 + 0x20))(local_10);
    pTVar5 = toTString(psVar4);
    MySQL::set_query(local_18,"upDate %s set item_cnt=item_cnt+%d where m_id=%s",pTVar5,uVar1,uVar3)
    ;
    cVar2 = MySQL::exec(local_18,true);
    if (cVar2 == '\x01') {
      lVar6 = MySQL::getAffectedRowCount(local_18);
      uVar1 = local_20;
      if (lVar6 == 0) {
        uVar3 = NumberToString(local_1c,0);
        psVar4 = (string *)(**(code **)(*local_10 + 0x20))(local_10);
        pTVar5 = toTString(psVar4);
        MySQL::set_query(local_18,"inSert into %s(m_id, item_cnt) values(%s, %d)",pTVar5,uVar3,uVar1
                        );
        cVar2 = MySQL::exec(local_18,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

# dispatch

`_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream`

`DB_InsertAccountFirstLoginFlag::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertAccountFirstLoginFlag` | `0x0843e636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843e636  _ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream
#           DB_InsertAccountFirstLoginFlag::dispatch(int, int, Stream*)
# range [0x0843e636, 0x0843e799]
0843e636 +0x000:  push   %ebp
0843e637 +0x001:  mov    %esp,%ebp
0843e639 +0x003:  push   %edi
0843e63a +0x004:  push   %esi
0843e63b +0x005:  push   %ebx
0843e63c +0x006:  sub    $0x4c,%esp
0843e63f +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843e644 +0x00e:  movl   $0x0,0x8(%esp)
0843e64c +0x016:  movl   $0x9,0x4(%esp)
0843e654 +0x01e:  mov    %eax,(%esp)
0843e657 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843e65c +0x026:  mov    %eax,-0x24(%ebp)
0843e65f +0x029:  movl   $0x0,-0x28(%ebp)
0843e666 +0x030:  movl   $0x0,-0x2c(%ebp)
0843e66d +0x037:  movl   $0x0,-0x30(%ebp)
0843e674 +0x03e:  lea    -0x28(%ebp),%eax
0843e677 +0x041:  mov    %eax,0x4(%esp)
0843e67b +0x045:  mov    0x14(%ebp),%eax
0843e67e +0x048:  mov    %eax,(%esp)
0843e681 +0x04b:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843e686 +0x050:  lea    -0x30(%ebp),%eax
0843e689 +0x053:  mov    %eax,0x4(%esp)
0843e68d +0x057:  mov    0x14(%ebp),%eax
0843e690 +0x05a:  mov    %eax,(%esp)
0843e693 +0x05d:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843e698 +0x062:  lea    -0x2c(%ebp),%eax
0843e69b +0x065:  mov    %eax,0x4(%esp)
0843e69f +0x069:  mov    0x14(%ebp),%eax
0843e6a2 +0x06c:  mov    %eax,(%esp)
0843e6a5 +0x06f:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843e6aa +0x074:  lea    -0x34(%ebp),%eax
0843e6ad +0x077:  mov    %eax,0x4(%esp)
0843e6b1 +0x07b:  mov    0x14(%ebp),%eax
0843e6b4 +0x07e:  mov    %eax,(%esp)
0843e6b7 +0x081:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843e6bc +0x086:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0843e6c1 +0x08b:  mov    %eax,(%esp)
0843e6c4 +0x08e:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0843e6c9 +0x093:  mov    %eax,-0x20(%ebp)
0843e6cc +0x096:  movl   $0x0,-0x1c(%ebp)
0843e6d3 +0x09d:  mov    -0x34(%ebp),%eax
0843e6d6 +0x0a0:  cmp    $0x191,%eax
0843e6db +0x0a5:  je     0843e6e7 <+0xb1>
0843e6dd +0x0a7:  mov    -0x34(%ebp),%eax
0843e6e0 +0x0aa:  cmp    $0x192,%eax
0843e6e5 +0x0af:  jne    0843e70c <+0xd6>
0843e6e7 +0x0b1:  mov    -0x34(%ebp),%eax
0843e6ea +0x0b4:  mov    %eax,0x4(%esp)
0843e6ee +0x0b8:  mov    -0x20(%ebp),%eax
0843e6f1 +0x0bb:  mov    %eax,(%esp)
0843e6f4 +0x0be:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0843e6f9 +0x0c3:  mov    %eax,-0x1c(%ebp)
0843e6fc +0x0c6:  cmpl   $0x0,-0x1c(%ebp)
0843e700 +0x0ca:  jne    0843e713 <+0xdd>
0843e702 +0x0cc:  mov    $0x0,%eax
0843e707 +0x0d1:  jmp    0843e792 <+0x15c>
0843e70c +0x0d6:  mov    $0x0,%eax
0843e711 +0x0db:  jmp    0843e792 <+0x15c>
0843e713 +0x0dd:  nop
0843e714 +0x0de:  mov    -0x2c(%ebp),%edi
0843e717 +0x0e1:  mov    -0x30(%ebp),%esi
0843e71a +0x0e4:  mov    -0x28(%ebp),%eax
0843e71d +0x0e7:  movl   $0x0,0x4(%esp)
0843e725 +0x0ef:  mov    %eax,(%esp)
0843e728 +0x0f2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843e72d +0x0f7:  mov    %eax,%ebx
0843e72f +0x0f9:  mov    -0x1c(%ebp),%eax
0843e732 +0x0fc:  mov    (%eax),%eax
0843e734 +0x0fe:  add    $0x20,%eax
0843e737 +0x101:  mov    (%eax),%edx
0843e739 +0x103:  mov    -0x1c(%ebp),%eax
0843e73c +0x106:  mov    %eax,(%esp)
0843e73f +0x109:  call   *%edx
0843e741 +0x10b:  mov    %eax,(%esp)
0843e744 +0x10e:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843e749 +0x113:  mov    %edi,0x14(%esp)
0843e74d +0x117:  mov    %esi,0x10(%esp)
0843e751 +0x11b:  mov    %ebx,0xc(%esp)
0843e755 +0x11f:  mov    %eax,0x8(%esp)
0843e759 +0x123:  movl   $"inSert into %s(m_id,server_id, charac_no, occ_date) values(%s,%d, %u, now())",0x4(%esp)
0843e761 +0x12b:  mov    -0x24(%ebp),%eax
0843e764 +0x12e:  mov    %eax,(%esp)
0843e767 +0x131:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843e76c +0x136:  movl   $0x1,0x4(%esp)
0843e774 +0x13e:  mov    -0x24(%ebp),%eax
0843e777 +0x141:  mov    %eax,(%esp)
0843e77a +0x144:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843e77f +0x149:  xor    $0x1,%eax
0843e782 +0x14c:  test   %al,%al
0843e784 +0x14e:  je     0843e78d <+0x157>
0843e786 +0x150:  mov    $0x0,%eax
0843e78b +0x155:  jmp    0843e792 <+0x15c>
0843e78d +0x157:  mov    $0x1,%eax
0843e792 +0x15c:  add    $0x4c,%esp
0843e795 +0x15f:  pop    %ebx
0843e796 +0x160:  pop    %esi
0843e797 +0x161:  pop    %edi
0843e798 +0x162:  pop    %ebp
0843e799 +0x163:  ret
```

## 反编译 C

```c
// DB_InsertAccountFirstLoginFlag::dispatch @ 0x843e636

/* DB_InsertAccountFirstLoginFlag::dispatch(int, int, Stream*) */

undefined4 DB_InsertAccountFirstLoginFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this;
  undefined4 uVar4;
  string *sSrc;
  TCHAR *pTVar5;
  Stream *in_stack_00000010;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  MySQL *local_28;
  int local_24;
  int *local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_30);
  Stream::operator>>(in_stack_00000010,&local_38);
  this = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::get_event_script_mng(this);
  local_20 = (int *)0x0;
  if ((local_38 == 0x191) || (local_38 == 0x192)) {
    local_20 = (int *)EventClassify::CEventScriptMng::get_event_entity(local_24);
    uVar2 = local_30;
    iVar1 = local_34;
    if (local_20 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = NumberToString(local_2c,0);
      sSrc = (string *)(**(code **)(*local_20 + 0x20))(local_20);
      pTVar5 = toTString(sSrc);
      MySQL::set_query(local_28,
                       "inSert into %s(m_id,server_id, charac_no, occ_date) values(%s,%d, %u, now())"
                       ,pTVar5,uVar4,iVar1,uVar2);
      cVar3 = MySQL::exec(local_28,true);
      if (cVar3 == '\x01') {
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

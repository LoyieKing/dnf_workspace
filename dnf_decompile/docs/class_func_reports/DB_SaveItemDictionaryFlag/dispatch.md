# dispatch

`_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream`

`DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveItemDictionaryFlag` | `0x0844547e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844547e  _ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream
#           DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)
# range [0x0844547e, 0x0844565f]
0844547e +0x000:  push   %ebp
0844547f +0x001:  mov    %esp,%ebp
08445481 +0x003:  sub    $0x38,%esp
08445484 +0x006:  mov    0x14(%ebp),%eax
08445487 +0x009:  mov    %eax,(%esp)
0844548a +0x00c:  call   0845418a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6da0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6da0
0844548f +0x011:  mov    %eax,-0x14(%ebp)
08445492 +0x014:  cmpl   $0x0,-0x14(%ebp)
08445496 +0x018:  jne    084454a2 <+0x24>
08445498 +0x01a:  mov    $0x0,%eax
0844549d +0x01f:  jmp    0844565e <+0x1e0>
084454a2 +0x024:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084454a7 +0x029:  movl   $0x0,0x8(%esp)
084454af +0x031:  movl   $0x2,0x4(%esp)
084454b7 +0x039:  mov    %eax,(%esp)
084454ba +0x03c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084454bf +0x041:  mov    %eax,-0x10(%ebp)
084454c2 +0x044:  movb   $0x0,-0x9(%ebp)
084454c6 +0x048:  movl   $0x0,-0x18(%ebp)
084454cd +0x04f:  mov    -0x14(%ebp),%eax
084454d0 +0x052:  add    $0x4,%eax
084454d3 +0x055:  lea    -0x18(%ebp),%edx
084454d6 +0x058:  mov    %edx,0x10(%esp)
084454da +0x05c:  movl   $0x1388,0xc(%esp)
084454e2 +0x064:  mov    %eax,0x8(%esp)
084454e6 +0x068:  movl   $0x0,0x4(%esp)
084454ee +0x070:  mov    -0x10(%ebp),%eax
084454f1 +0x073:  mov    %eax,(%esp)
084454f4 +0x076:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
084454f9 +0x07b:  mov    %al,-0x9(%ebp)
084454fc +0x07e:  movzbl -0x9(%ebp),%eax
08445500 +0x082:  xor    $0x1,%eax
08445503 +0x085:  test   %al,%al
08445505 +0x087:  je     0844554e <+0xd0>
08445507 +0x089:  mov    -0x14(%ebp),%eax
0844550a +0x08c:  mov    (%eax),%eax
0844550c +0x08e:  mov    %eax,0x18(%esp)
08445510 +0x092:  movl   $0x0,0x14(%esp)
08445518 +0x09a:  movl   $"DB_SaveItemDictionaryFalg::dispatch compress_zip(%u) ERROR charac_no=%u",0x10(%esp)
08445520 +0x0a2:  movl   $0xac56,0xc(%esp)
08445528 +0x0aa:  movl   $&_ZZN25DB_SaveItemDictionaryFlag8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08445530 +0x0b2:  movl   $"DBThread.cpp",0x4(%esp)
08445538 +0x0ba:  movl   $0x1,(%esp)
0844553f +0x0c1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08445544 +0x0c6:  mov    $0x0,%eax
08445549 +0x0cb:  jmp    0844565e <+0x1e0>
0844554e +0x0d0:  mov    -0x14(%ebp),%eax
08445551 +0x0d3:  mov    (%eax),%edx
08445553 +0x0d5:  mov    -0x18(%ebp),%eax
08445556 +0x0d8:  mov    %edx,0xc(%esp)
0844555a +0x0dc:  mov    %eax,0x8(%esp)
0844555e +0x0e0:  movl   $"upDate charac_item_stat set check_flag = '%s' where charac_no=%u",0x4(%esp)
08445566 +0x0e8:  mov    -0x10(%ebp),%eax
08445569 +0x0eb:  mov    %eax,(%esp)
0844556c +0x0ee:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445571 +0x0f3:  movl   $0x1,0x4(%esp)
08445579 +0x0fb:  mov    -0x10(%ebp),%eax
0844557c +0x0fe:  mov    %eax,(%esp)
0844557f +0x101:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445584 +0x106:  xor    $0x1,%eax
08445587 +0x109:  test   %al,%al
08445589 +0x10b:  je     084455ca <+0x14c>
0844558b +0x10d:  mov    -0x14(%ebp),%eax
0844558e +0x110:  mov    (%eax),%eax
08445590 +0x112:  mov    %eax,0x14(%esp)
08445594 +0x116:  movl   $"DB_SaveItemDictionaryFalg->upDate Query ERROR charac_no=%u",0x10(%esp)
0844559c +0x11e:  movl   $0xac5e,0xc(%esp)
084455a4 +0x126:  movl   $&_ZZN25DB_SaveItemDictionaryFlag8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
084455ac +0x12e:  movl   $"DBThread.cpp",0x4(%esp)
084455b4 +0x136:  movl   $0x1,(%esp)
084455bb +0x13d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084455c0 +0x142:  mov    $0x0,%eax
084455c5 +0x147:  jmp    0844565e <+0x1e0>
084455ca +0x14c:  mov    -0x10(%ebp),%eax
084455cd +0x14f:  mov    %eax,(%esp)
084455d0 +0x152:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084455d5 +0x157:  or     %edx,%eax
084455d7 +0x159:  test   %eax,%eax
084455d9 +0x15b:  sete   %al
084455dc +0x15e:  test   %al,%al
084455de +0x160:  je     08445659 <+0x1db>
084455e0 +0x162:  mov    -0x18(%ebp),%edx
084455e3 +0x165:  mov    -0x14(%ebp),%eax
084455e6 +0x168:  mov    (%eax),%eax
084455e8 +0x16a:  mov    %edx,0xc(%esp)
084455ec +0x16e:  mov    %eax,0x8(%esp)
084455f0 +0x172:  movl   $"inSert into charac_item_stat(charac_no, check_flag) values(%u, '%s')",0x4(%esp)
084455f8 +0x17a:  mov    -0x10(%ebp),%eax
084455fb +0x17d:  mov    %eax,(%esp)
084455fe +0x180:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445603 +0x185:  movl   $0x1,0x4(%esp)
0844560b +0x18d:  mov    -0x10(%ebp),%eax
0844560e +0x190:  mov    %eax,(%esp)
08445611 +0x193:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445616 +0x198:  xor    $0x1,%eax
08445619 +0x19b:  test   %al,%al
0844561b +0x19d:  je     08445659 <+0x1db>
0844561d +0x19f:  mov    -0x14(%ebp),%eax
08445620 +0x1a2:  mov    (%eax),%eax
08445622 +0x1a4:  mov    %eax,0x14(%esp)
08445626 +0x1a8:  movl   $"DB_SaveItemDictionaryFalg->inSert Query ERROR charac_no=%u",0x10(%esp)
0844562e +0x1b0:  movl   $0xac67,0xc(%esp)
08445636 +0x1b8:  movl   $&_ZZN25DB_SaveItemDictionaryFlag8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0844563e +0x1c0:  movl   $"DBThread.cpp",0x4(%esp)
08445646 +0x1c8:  movl   $0x1,(%esp)
0844564d +0x1cf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08445652 +0x1d4:  mov    $0x0,%eax
08445657 +0x1d9:  jmp    0844565e <+0x1e0>
08445659 +0x1db:  mov    $0x1,%eax
0844565e +0x1e0:  leave
0844565f +0x1e1:  ret
```

## 反编译 C

```c
// DB_SaveItemDictionaryFlag::dispatch @ 0x844547e

/* DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*) */

undefined4 DB_SaveItemDictionaryFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  char *local_1c;
  SIG_ITEM_DICTIONARY_FLAG *local_18;
  MySQL *local_14;
  char local_d;
  
  local_18 = Stream::GetOutBuffer<SIG_ITEM_DICTIONARY_FLAG>(in_stack_00000010);
  if (local_18 == (SIG_ITEM_DICTIONARY_FLAG *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_d = 0;
    local_1c = (char *)0x0;
    local_d = put_compressed_blob_data(local_14,0,(char *)(local_18 + 4),5000,&local_1c);
    if (local_d == '\x01') {
      MySQL::set_query(local_14,"upDate charac_item_stat set check_flag = \'%s\' where charac_no=%u"
                       ,local_1c,*(undefined4 *)local_18);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 == '\x01') {
        lVar3 = MySQL::getAffectedRowCount(local_14);
        if (lVar3 == 0) {
          MySQL::set_query(local_14,
                           "inSert into charac_item_stat(charac_no, check_flag) values(%u, \'%s\')",
                           *(undefined4 *)local_18,local_1c);
          cVar1 = MySQL::exec(local_14,true);
          if (cVar1 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "virtual bool DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)",0xac67,
                       "DB_SaveItemDictionaryFalg->inSert Query ERROR charac_no=%u",
                       *(undefined4 *)local_18);
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "virtual bool DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)",0xac5e,
                   "DB_SaveItemDictionaryFalg->upDate Query ERROR charac_no=%u",
                   *(undefined4 *)local_18);
        uVar2 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "virtual bool DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)",0xac56,
                 "DB_SaveItemDictionaryFalg::dispatch compress_zip(%u) ERROR charac_no=%u",0,
                 *(undefined4 *)local_18);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

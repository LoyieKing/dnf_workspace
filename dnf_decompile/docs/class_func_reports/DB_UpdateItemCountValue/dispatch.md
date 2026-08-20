# dispatch

`_ZN23DB_UpdateItemCountValue8dispatchEiiP6Stream`

`DB_UpdateItemCountValue::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateItemCountValue` | `0x0843eb6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843eb6e  _ZN23DB_UpdateItemCountValue8dispatchEiiP6Stream
#           DB_UpdateItemCountValue::dispatch(int, int, Stream*)
# range [0x0843eb6e, 0x0843eca3]
0843eb6e +0x000:  push   %ebp
0843eb6f +0x001:  mov    %esp,%ebp
0843eb71 +0x003:  push   %esi
0843eb72 +0x004:  push   %ebx
0843eb73 +0x005:  sub    $0x30,%esp
0843eb76 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843eb7b +0x00d:  movl   $0x0,0x8(%esp)
0843eb83 +0x015:  movl   $0x9,0x4(%esp)
0843eb8b +0x01d:  mov    %eax,(%esp)
0843eb8e +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843eb93 +0x025:  mov    %eax,-0xc(%ebp)
0843eb96 +0x028:  movl   $0x0,-0x10(%ebp)
0843eb9d +0x02f:  movl   $0x0,-0x14(%ebp)
0843eba4 +0x036:  lea    -0x10(%ebp),%eax
0843eba7 +0x039:  mov    %eax,0x4(%esp)
0843ebab +0x03d:  mov    0x14(%ebp),%eax
0843ebae +0x040:  mov    %eax,(%esp)
0843ebb1 +0x043:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843ebb6 +0x048:  lea    -0x14(%ebp),%eax
0843ebb9 +0x04b:  mov    %eax,0x4(%esp)
0843ebbd +0x04f:  mov    0x14(%ebp),%eax
0843ebc0 +0x052:  mov    %eax,(%esp)
0843ebc3 +0x055:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843ebc8 +0x05a:  mov    -0x10(%ebp),%eax
0843ebcb +0x05d:  movl   $0x0,0x4(%esp)
0843ebd3 +0x065:  mov    %eax,(%esp)
0843ebd6 +0x068:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843ebdb +0x06d:  mov    %eax,%ebx
0843ebdd +0x06f:  mov    -0x14(%ebp),%esi
0843ebe0 +0x072:  call   083fbe07 <_Z25get_item_count_table_namev>  ; get_item_count_table_name()
0843ebe5 +0x077:  mov    %ebx,0x10(%esp)
0843ebe9 +0x07b:  mov    %esi,0xc(%esp)
0843ebed +0x07f:  mov    %eax,0x8(%esp)
0843ebf1 +0x083:  movl   $"upDate %s set item_cnt=item_cnt+%d where m_id=%s",0x4(%esp)
0843ebf9 +0x08b:  mov    -0xc(%ebp),%eax
0843ebfc +0x08e:  mov    %eax,(%esp)
0843ebff +0x091:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ec04 +0x096:  movl   $0x1,0x4(%esp)
0843ec0c +0x09e:  mov    -0xc(%ebp),%eax
0843ec0f +0x0a1:  mov    %eax,(%esp)
0843ec12 +0x0a4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ec17 +0x0a9:  xor    $0x1,%eax
0843ec1a +0x0ac:  test   %al,%al
0843ec1c +0x0ae:  je     0843ec25 <+0xb7>
0843ec1e +0x0b0:  mov    $0x0,%eax
0843ec23 +0x0b5:  jmp    0843ec9d <+0x12f>
0843ec25 +0x0b7:  mov    -0xc(%ebp),%eax
0843ec28 +0x0ba:  mov    %eax,(%esp)
0843ec2b +0x0bd:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843ec30 +0x0c2:  or     %edx,%eax
0843ec32 +0x0c4:  test   %eax,%eax
0843ec34 +0x0c6:  sete   %al
0843ec37 +0x0c9:  test   %al,%al
0843ec39 +0x0cb:  je     0843ec98 <+0x12a>
0843ec3b +0x0cd:  mov    -0x14(%ebp),%esi
0843ec3e +0x0d0:  mov    -0x10(%ebp),%eax
0843ec41 +0x0d3:  movl   $0x0,0x4(%esp)
0843ec49 +0x0db:  mov    %eax,(%esp)
0843ec4c +0x0de:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843ec51 +0x0e3:  mov    %eax,%ebx
0843ec53 +0x0e5:  call   083fbe07 <_Z25get_item_count_table_namev>  ; get_item_count_table_name()
0843ec58 +0x0ea:  mov    %esi,0x10(%esp)
0843ec5c +0x0ee:  mov    %ebx,0xc(%esp)
0843ec60 +0x0f2:  mov    %eax,0x8(%esp)
0843ec64 +0x0f6:  movl   $"inSert into %s(m_id, item_cnt) values(%s, %d)",0x4(%esp)
0843ec6c +0x0fe:  mov    -0xc(%ebp),%eax
0843ec6f +0x101:  mov    %eax,(%esp)
0843ec72 +0x104:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ec77 +0x109:  movl   $0x1,0x4(%esp)
0843ec7f +0x111:  mov    -0xc(%ebp),%eax
0843ec82 +0x114:  mov    %eax,(%esp)
0843ec85 +0x117:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ec8a +0x11c:  xor    $0x1,%eax
0843ec8d +0x11f:  test   %al,%al
0843ec8f +0x121:  je     0843ec98 <+0x12a>
0843ec91 +0x123:  mov    $0x0,%eax
0843ec96 +0x128:  jmp    0843ec9d <+0x12f>
0843ec98 +0x12a:  mov    $0x1,%eax
0843ec9d +0x12f:  add    $0x30,%esp
0843eca0 +0x132:  pop    %ebx
0843eca1 +0x133:  pop    %esi
0843eca2 +0x134:  pop    %ebp
0843eca3 +0x135:  ret
```

## 反编译 C

```c
// DB_UpdateItemCountValue::dispatch @ 0x843eb6e

/* DB_UpdateItemCountValue::dispatch(int, int, Stream*) */

undefined4 DB_UpdateItemCountValue::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar3 = NumberToString(local_14,0);
  uVar1 = local_18;
  uVar4 = get_item_count_table_name();
  MySQL::set_query(local_10,"upDate %s set item_cnt=item_cnt+%d where m_id=%s",uVar4,uVar1,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_10);
    uVar1 = local_18;
    if (lVar5 == 0) {
      uVar3 = NumberToString(local_14,0);
      uVar4 = get_item_count_table_name();
      MySQL::set_query(local_10,"inSert into %s(m_id, item_cnt) values(%s, %d)",uVar4,uVar3,uVar1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

# dispatch

`_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream`

`DB_UpdateExpertJobStatistic::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateExpertJobStatistic` | `0x08436964` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08436964  _ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream
#           DB_UpdateExpertJobStatistic::dispatch(int, int, Stream*)
# range [0x08436964, 0x08436ad3]
08436964 +0x000:  push   %ebp
08436965 +0x001:  mov    %esp,%ebp
08436967 +0x003:  sub    $0x48,%esp
0843696a +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843696f +0x00b:  movl   $0x0,0x8(%esp)
08436977 +0x013:  movl   $0x4,0x4(%esp)
0843697f +0x01b:  mov    %eax,(%esp)
08436982 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08436987 +0x023:  mov    %eax,-0x10(%ebp)
0843698a +0x026:  movl   $0x0,-0x14(%ebp)
08436991 +0x02d:  lea    -0x14(%ebp),%eax
08436994 +0x030:  mov    %eax,0x4(%esp)
08436998 +0x034:  mov    0x14(%ebp),%eax
0843699b +0x037:  mov    %eax,(%esp)
0843699e +0x03a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084369a3 +0x03f:  mov    -0x14(%ebp),%eax
084369a6 +0x042:  test   %eax,%eax
084369a8 +0x044:  jne    084369b4 <+0x50>
084369aa +0x046:  mov    $0x1,%eax
084369af +0x04b:  jmp    08436ad1 <+0x16d>
084369b4 +0x050:  movl   $0x0,-0xc(%ebp)
084369bb +0x057:  jmp    08436ab8 <+0x154>
084369c0 +0x05c:  movl   $0x0,-0x18(%ebp)
084369c7 +0x063:  movl   $0x0,-0x1c(%ebp)
084369ce +0x06a:  movl   $0x0,-0x20(%ebp)
084369d5 +0x071:  lea    -0x18(%ebp),%eax
084369d8 +0x074:  mov    %eax,0x4(%esp)
084369dc +0x078:  mov    0x14(%ebp),%eax
084369df +0x07b:  mov    %eax,(%esp)
084369e2 +0x07e:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084369e7 +0x083:  lea    -0x1c(%ebp),%eax
084369ea +0x086:  mov    %eax,0x4(%esp)
084369ee +0x08a:  mov    0x14(%ebp),%eax
084369f1 +0x08d:  mov    %eax,(%esp)
084369f4 +0x090:  call   0861c7c8 <_ZN6StreamrsERm>  ; Stream::operator>>(unsigned long&)
084369f9 +0x095:  lea    -0x20(%ebp),%eax
084369fc +0x098:  mov    %eax,0x4(%esp)
08436a00 +0x09c:  mov    0x14(%ebp),%eax
08436a03 +0x09f:  mov    %eax,(%esp)
08436a06 +0x0a2:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08436a0b +0x0a7:  mov    -0x1c(%ebp),%eax
08436a0e +0x0aa:  test   %eax,%eax
08436a10 +0x0ac:  je     08436acb <+0x167>
08436a16 +0x0b2:  mov    -0x1c(%ebp),%ecx
08436a19 +0x0b5:  mov    -0x18(%ebp),%edx
08436a1c +0x0b8:  mov    -0x20(%ebp),%eax
08436a1f +0x0bb:  mov    %ecx,0x10(%esp)
08436a23 +0x0bf:  mov    %edx,0xc(%esp)
08436a27 +0x0c3:  mov    %eax,0x8(%esp)
08436a2b +0x0c7:  movl   $"upDate expert_job_product_cnt set item_cnt=item_cnt+%d where expert_job_type=%d and occ_date=curdate() and item_id=%d",0x4(%esp)
08436a33 +0x0cf:  mov    -0x10(%ebp),%eax
08436a36 +0x0d2:  mov    %eax,(%esp)
08436a39 +0x0d5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436a3e +0x0da:  movl   $0x1,0x4(%esp)
08436a46 +0x0e2:  mov    -0x10(%ebp),%eax
08436a49 +0x0e5:  mov    %eax,(%esp)
08436a4c +0x0e8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436a51 +0x0ed:  xor    $0x1,%eax
08436a54 +0x0f0:  test   %al,%al
08436a56 +0x0f2:  jne    08436a69 <+0x105>
08436a58 +0x0f4:  mov    -0x10(%ebp),%eax
08436a5b +0x0f7:  mov    %eax,(%esp)
08436a5e +0x0fa:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08436a63 +0x0ff:  or     %edx,%eax
08436a65 +0x101:  test   %eax,%eax
08436a67 +0x103:  jne    08436a70 <+0x10c>
08436a69 +0x105:  mov    $0x1,%eax
08436a6e +0x10a:  jmp    08436a75 <+0x111>
08436a70 +0x10c:  mov    $0x0,%eax
08436a75 +0x111:  test   %al,%al
08436a77 +0x113:  je     08436ab4 <+0x150>
08436a79 +0x115:  mov    -0x20(%ebp),%ecx
08436a7c +0x118:  mov    -0x1c(%ebp),%edx
08436a7f +0x11b:  mov    -0x18(%ebp),%eax
08436a82 +0x11e:  mov    %ecx,0x10(%esp)
08436a86 +0x122:  mov    %edx,0xc(%esp)
08436a8a +0x126:  mov    %eax,0x8(%esp)
08436a8e +0x12a:  movl   $"inSert into expert_job_product_cnt(expert_job_type,occ_date,item_id,item_cnt) values(%d,curdate(),%d,%d)",0x4(%esp)
08436a96 +0x132:  mov    -0x10(%ebp),%eax
08436a99 +0x135:  mov    %eax,(%esp)
08436a9c +0x138:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436aa1 +0x13d:  movl   $0x1,0x4(%esp)
08436aa9 +0x145:  mov    -0x10(%ebp),%eax
08436aac +0x148:  mov    %eax,(%esp)
08436aaf +0x14b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436ab4 +0x150:  addl   $0x1,-0xc(%ebp)
08436ab8 +0x154:  mov    -0x14(%ebp),%eax
08436abb +0x157:  cmp    %eax,-0xc(%ebp)
08436abe +0x15a:  setb   %al
08436ac1 +0x15d:  test   %al,%al
08436ac3 +0x15f:  jne    084369c0 <+0x5c>
08436ac9 +0x165:  jmp    08436acc <+0x168>
08436acb +0x167:  nop
08436acc +0x168:  mov    $0x1,%eax
08436ad1 +0x16d:  leave
08436ad2 +0x16e:  ret
08436ad3 +0x16f:  nop
```

## 反编译 C

```c
// DB_UpdateExpertJobStatistic::dispatch @ 0x8436964

/* DB_UpdateExpertJobStatistic::dispatch(int, int, Stream*) */

undefined4 DB_UpdateExpertJobStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  uint local_24;
  ulong local_20;
  int local_1c;
  uint local_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  if (local_18 != 0) {
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      Stream::operator>>(in_stack_00000010,&local_1c);
      Stream::operator>>(in_stack_00000010,&local_20);
      Stream::operator>>(in_stack_00000010,&local_24);
      if (local_20 == 0) {
        return 1;
      }
      MySQL::set_query(local_14,
                       "upDate expert_job_product_cnt set item_cnt=item_cnt+%d where expert_job_type=%d and occ_date=curdate() and item_id=%d"
                       ,local_24,local_1c,local_20);
      cVar2 = MySQL::exec(local_14,true);
      if ((cVar2 == '\x01') && (lVar3 = MySQL::getAffectedRowCount(local_14), lVar3 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        MySQL::set_query(local_14,
                         "inSert into expert_job_product_cnt(expert_job_type,occ_date,item_id,item_cnt) values(%d,curdate(),%d,%d)"
                         ,local_1c,local_20,local_24);
        MySQL::exec(local_14,true);
      }
    }
  }
  return 1;
}
```

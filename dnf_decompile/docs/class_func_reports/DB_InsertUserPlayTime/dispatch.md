# dispatch

`_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream`

`DB_InsertUserPlayTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertUserPlayTime` | `0x084256b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084256b4  _ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream
#           DB_InsertUserPlayTime::dispatch(int, int, Stream*)
# range [0x084256b4, 0x084258ed]
084256b4 +0x000:  push   %ebp
084256b5 +0x001:  mov    %esp,%ebp
084256b7 +0x003:  push   %edi
084256b8 +0x004:  push   %esi
084256b9 +0x005:  push   %ebx
084256ba +0x006:  sub    $0x7c,%esp
084256bd +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084256c2 +0x00e:  movl   $0x0,0x8(%esp)
084256ca +0x016:  movl   $0x6,0x4(%esp)
084256d2 +0x01e:  mov    %eax,(%esp)
084256d5 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084256da +0x026:  mov    %eax,-0x1c(%ebp)
084256dd +0x029:  movl   $0x0,-0x20(%ebp)
084256e4 +0x030:  movl   $0x0,-0x24(%ebp)
084256eb +0x037:  movl   $0x0,-0x28(%ebp)
084256f2 +0x03e:  movl   $0x0,-0x2c(%ebp)
084256f9 +0x045:  movw   $0x0,-0x2e(%ebp)
084256ff +0x04b:  lea    -0x20(%ebp),%eax
08425702 +0x04e:  mov    %eax,0x4(%esp)
08425706 +0x052:  mov    0x14(%ebp),%eax
08425709 +0x055:  mov    %eax,(%esp)
0842570c +0x058:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425711 +0x05d:  lea    -0x24(%ebp),%eax
08425714 +0x060:  mov    %eax,0x4(%esp)
08425718 +0x064:  mov    0x14(%ebp),%eax
0842571b +0x067:  mov    %eax,(%esp)
0842571e +0x06a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08425723 +0x06f:  lea    -0x28(%ebp),%eax
08425726 +0x072:  mov    %eax,0x4(%esp)
0842572a +0x076:  mov    0x14(%ebp),%eax
0842572d +0x079:  mov    %eax,(%esp)
08425730 +0x07c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08425735 +0x081:  lea    -0x2c(%ebp),%eax
08425738 +0x084:  mov    %eax,0x4(%esp)
0842573c +0x088:  mov    0x14(%ebp),%eax
0842573f +0x08b:  mov    %eax,(%esp)
08425742 +0x08e:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425747 +0x093:  lea    -0x2e(%ebp),%eax
0842574a +0x096:  mov    %eax,0x4(%esp)
0842574e +0x09a:  mov    0x14(%ebp),%eax
08425751 +0x09d:  mov    %eax,(%esp)
08425754 +0x0a0:  call   0861c762 <_ZN6StreamrsERt>  ; Stream::operator>>(unsigned short&)
08425759 +0x0a5:  lea    -0x2f(%ebp),%eax
0842575c +0x0a8:  mov    %eax,0x4(%esp)
08425760 +0x0ac:  mov    0x14(%ebp),%eax
08425763 +0x0af:  mov    %eax,(%esp)
08425766 +0x0b2:  call   0861c47c <_ZN6StreamrsERb>  ; Stream::operator>>(bool&)
0842576b +0x0b7:  movl   $0x14,0x8(%esp)
08425773 +0x0bf:  movl   $0x0,0x4(%esp)
0842577b +0x0c7:  lea    -0x43(%ebp),%eax
0842577e +0x0ca:  mov    %eax,(%esp)
08425781 +0x0cd:  call   0807dcc0 <_init+0x5b8>
08425786 +0x0d2:  movl   $0x11,0x8(%esp)
0842578e +0x0da:  movl   $"member_play_info",0x4(%esp)
08425796 +0x0e2:  lea    -0x43(%ebp),%eax
08425799 +0x0e5:  mov    %eax,(%esp)
0842579c +0x0e8:  call   0807d8a0 <_init+0x198>
084257a1 +0x0ed:  mov    -0x20(%ebp),%eax
084257a4 +0x0f0:  movl   $0x0,0x4(%esp)
084257ac +0x0f8:  mov    %eax,(%esp)
084257af +0x0fb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084257b4 +0x100:  mov    %eax,%edx
084257b6 +0x102:  movzbl -0x2f(%ebp),%eax
084257ba +0x106:  test   %al,%al
084257bc +0x108:  je     084257c5 <+0x111>
084257be +0x10a:  mov    $0x0,%eax
084257c3 +0x10f:  jmp    084257ca <+0x116>
084257c5 +0x111:  mov    $0x1,%eax
084257ca +0x116:  movzwl -0x2e(%ebp),%ecx
084257ce +0x11a:  movzwl %cx,%edi
084257d1 +0x11d:  mov    -0x2c(%ebp),%esi
084257d4 +0x120:  mov    -0x28(%ebp),%ebx
084257d7 +0x123:  mov    -0x24(%ebp),%ecx
084257da +0x126:  mov    %edx,0x20(%esp)
084257de +0x12a:  mov    %eax,0x1c(%esp)
084257e2 +0x12e:  mov    %edi,0x18(%esp)
084257e6 +0x132:  mov    %esi,0x14(%esp)
084257ea +0x136:  mov    %ebx,0x10(%esp)
084257ee +0x13a:  mov    %ecx,0xc(%esp)
084257f2 +0x13e:  lea    -0x43(%ebp),%eax
084257f5 +0x141:  mov    %eax,0x8(%esp)
084257f9 +0x145:  movl   $"upDate %s set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d where occ_date=cast(now() as date) and m_id=%s",0x4(%esp)
08425801 +0x14d:  mov    -0x1c(%ebp),%eax
08425804 +0x150:  mov    %eax,(%esp)
08425807 +0x153:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842580c +0x158:  movl   $0x1,0x4(%esp)
08425814 +0x160:  mov    -0x1c(%ebp),%eax
08425817 +0x163:  mov    %eax,(%esp)
0842581a +0x166:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842581f +0x16b:  xor    $0x1,%eax
08425822 +0x16e:  test   %al,%al
08425824 +0x170:  jne    08425837 <+0x183>
08425826 +0x172:  mov    -0x1c(%ebp),%eax
08425829 +0x175:  mov    %eax,(%esp)
0842582c +0x178:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08425831 +0x17d:  or     %edx,%eax
08425833 +0x17f:  test   %eax,%eax
08425835 +0x181:  jne    0842583e <+0x18a>
08425837 +0x183:  mov    $0x1,%eax
0842583c +0x188:  jmp    08425843 <+0x18f>
0842583e +0x18a:  mov    $0x0,%eax
08425843 +0x18f:  test   %al,%al
08425845 +0x191:  je     084258e1 <+0x22d>
0842584b +0x197:  movzbl -0x2f(%ebp),%eax
0842584f +0x19b:  test   %al,%al
08425851 +0x19d:  je     0842585a <+0x1a6>
08425853 +0x19f:  mov    $0x0,%ebx
08425858 +0x1a4:  jmp    0842585f <+0x1ab>
0842585a +0x1a6:  mov    $0x1,%ebx
0842585f +0x1ab:  movzwl -0x2e(%ebp),%eax
08425863 +0x1af:  movzwl %ax,%eax
08425866 +0x1b2:  mov    %eax,-0x50(%ebp)
08425869 +0x1b5:  mov    -0x2c(%ebp),%eax
0842586c +0x1b8:  mov    %eax,-0x4c(%ebp)
0842586f +0x1bb:  mov    -0x28(%ebp),%edi
08425872 +0x1be:  mov    -0x24(%ebp),%esi
08425875 +0x1c1:  mov    -0x20(%ebp),%eax
08425878 +0x1c4:  movl   $0x0,0x4(%esp)
08425880 +0x1cc:  mov    %eax,(%esp)
08425883 +0x1cf:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08425888 +0x1d4:  mov    %ebx,0x20(%esp)
0842588c +0x1d8:  mov    -0x50(%ebp),%edx
0842588f +0x1db:  mov    %edx,0x1c(%esp)
08425893 +0x1df:  mov    -0x4c(%ebp),%edx
08425896 +0x1e2:  mov    %edx,0x18(%esp)
0842589a +0x1e6:  mov    %edi,0x14(%esp)
0842589e +0x1ea:  mov    %esi,0x10(%esp)
084258a2 +0x1ee:  mov    %eax,0xc(%esp)
084258a6 +0x1f2:  lea    -0x43(%ebp),%eax
084258a9 +0x1f5:  mov    %eax,0x8(%esp)
084258ad +0x1f9:  movl   $"inSert into %s(occ_date,m_id,play_time,play_count,trade_cnt,exp,used_fatigue,ting_count) values(cast(now() as date),%s,%d,1,%d,%u,%u,%d)",0x4(%esp)
084258b5 +0x201:  mov    -0x1c(%ebp),%eax
084258b8 +0x204:  mov    %eax,(%esp)
084258bb +0x207:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084258c0 +0x20c:  movl   $0x1,0x4(%esp)
084258c8 +0x214:  mov    -0x1c(%ebp),%eax
084258cb +0x217:  mov    %eax,(%esp)
084258ce +0x21a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084258d3 +0x21f:  xor    $0x1,%eax
084258d6 +0x222:  test   %al,%al
084258d8 +0x224:  je     084258e1 <+0x22d>
084258da +0x226:  mov    $0x0,%eax
084258df +0x22b:  jmp    084258e6 <+0x232>
084258e1 +0x22d:  mov    $0x1,%eax
084258e6 +0x232:  add    $0x7c,%esp
084258e9 +0x235:  pop    %ebx
084258ea +0x236:  pop    %esi
084258eb +0x237:  pop    %edi
084258ec +0x238:  pop    %ebp
084258ed +0x239:  ret
```

## 反编译 C

```c
// DB_InsertUserPlayTime::dispatch @ 0x84256b4

/* DB_InsertUserPlayTime::dispatch(int, int, Stream*) */

undefined4 DB_InsertUserPlayTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  undefined1 local_47 [20];
  bool local_33;
  ushort local_32;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_32 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_30);
  Stream::operator>>(in_stack_00000010,&local_32);
  Stream::operator>>(in_stack_00000010,&local_33);
  memset(local_47,0,0x14);
  memcpy(local_47,"member_play_info",0x11);
  uVar6 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "upDate %s set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d where occ_date=cast(now() as date) and m_id=%s"
                   ,local_47,local_28,local_2c,local_30,(uint)local_32,(uint)(local_33 == false),
                   uVar6);
  cVar5 = MySQL::exec(local_20,true);
  if ((cVar5 == '\x01') && (lVar8 = MySQL::getAffectedRowCount(local_20), lVar8 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar4 = local_28;
  iVar3 = local_2c;
  uVar2 = local_30;
  if (bVar1) {
    uVar7 = (uint)local_32;
    uVar6 = NumberToString(local_24,0);
    MySQL::set_query(local_20,
                     "inSert into %s(occ_date,m_id,play_time,play_count,trade_cnt,exp,used_fatigue,ting_count) values(cast(now() as date),%s,%d,1,%d,%u,%u,%d)"
                     ,local_47,uVar6,iVar4,iVar3,uVar2,uVar7,(uint)(local_33 == false));
    cVar5 = MySQL::exec(local_20,true);
    if (cVar5 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

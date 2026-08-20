# dispatch

`_ZN18DB_SaveAccountInfo8dispatchEiiP6Stream`

`DB_SaveAccountInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveAccountInfo` | `0x08432646` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08432646  _ZN18DB_SaveAccountInfo8dispatchEiiP6Stream
#           DB_SaveAccountInfo::dispatch(int, int, Stream*)
# range [0x08432646, 0x084327b9]
08432646 +0x000:  push   %ebp
08432647 +0x001:  mov    %esp,%ebp
08432649 +0x003:  push   %edi
0843264a +0x004:  push   %esi
0843264b +0x005:  push   %ebx
0843264c +0x006:  sub    $0x4c,%esp
0843264f +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08432654 +0x00e:  movl   $0x0,0x8(%esp)
0843265c +0x016:  movl   $0x6,0x4(%esp)
08432664 +0x01e:  mov    %eax,(%esp)
08432667 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843266c +0x026:  mov    %eax,-0x20(%ebp)
0843266f +0x029:  mov    0x14(%ebp),%eax
08432672 +0x02c:  mov    %eax,(%esp)
08432675 +0x02f:  call   08452fa0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5bb6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5bb6
0843267a +0x034:  mov    %eax,-0x1c(%ebp)
0843267d +0x037:  mov    -0x1c(%ebp),%eax
08432680 +0x03a:  mov    (%eax),%eax
08432682 +0x03c:  movl   $0x0,0x4(%esp)
0843268a +0x044:  mov    %eax,(%esp)
0843268d +0x047:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08432692 +0x04c:  mov    -0x1c(%ebp),%edx
08432695 +0x04f:  lea    0x2c(%edx),%edi
08432698 +0x052:  mov    -0x1c(%ebp),%edx
0843269b +0x055:  lea    0x28(%edx),%esi
0843269e +0x058:  mov    -0x1c(%ebp),%edx
084326a1 +0x05b:  movzbl 0x4(%edx),%edx
084326a5 +0x05f:  movzbl %dl,%ecx
084326a8 +0x062:  mov    -0x1c(%ebp),%edx
084326ab +0x065:  mov    0x8(%edx),%edx
084326ae +0x068:  mov    -0x1c(%ebp),%ebx
084326b1 +0x06b:  add    $0x1c,%ebx
084326b4 +0x06e:  mov    %eax,0x1c(%esp)
084326b8 +0x072:  mov    %edi,0x18(%esp)
084326bc +0x076:  mov    %esi,0x14(%esp)
084326c0 +0x07a:  mov    %ecx,0x10(%esp)
084326c4 +0x07e:  mov    %edx,0xc(%esp)
084326c8 +0x082:  mov    %ebx,0x8(%esp)
084326cc +0x086:  movl   $"upDate member_play_info set ip=\"%s\", last_play_time=%u, pcbang_flag=%d, end_ip=\"%s\", mac_addr=\"%s\" where occ_date=now() and m_id=%s",0x4(%esp)
084326d4 +0x08e:  mov    -0x20(%ebp),%eax
084326d7 +0x091:  mov    %eax,(%esp)
084326da +0x094:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084326df +0x099:  movl   $0x1,0x4(%esp)
084326e7 +0x0a1:  mov    -0x20(%ebp),%eax
084326ea +0x0a4:  mov    %eax,(%esp)
084326ed +0x0a7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084326f2 +0x0ac:  xor    $0x1,%eax
084326f5 +0x0af:  test   %al,%al
084326f7 +0x0b1:  jne    0843270a <+0xc4>
084326f9 +0x0b3:  mov    -0x20(%ebp),%eax
084326fc +0x0b6:  mov    %eax,(%esp)
084326ff +0x0b9:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08432704 +0x0be:  or     %edx,%eax
08432706 +0x0c0:  test   %eax,%eax
08432708 +0x0c2:  jne    08432711 <+0xcb>
0843270a +0x0c4:  mov    $0x1,%eax
0843270f +0x0c9:  jmp    08432716 <+0xd0>
08432711 +0x0cb:  mov    $0x0,%eax
08432716 +0x0d0:  test   %al,%al
08432718 +0x0d2:  je     084327ad <+0x167>
0843271e +0x0d8:  mov    -0x1c(%ebp),%eax
08432721 +0x0db:  add    $0x2c,%eax
08432724 +0x0de:  mov    %eax,-0x30(%ebp)
08432727 +0x0e1:  mov    -0x1c(%ebp),%eax
0843272a +0x0e4:  add    $0x28,%eax
0843272d +0x0e7:  mov    %eax,-0x2c(%ebp)
08432730 +0x0ea:  mov    -0x1c(%ebp),%eax
08432733 +0x0ed:  movzbl 0x4(%eax),%eax
08432737 +0x0f1:  movzbl %al,%esi
0843273a +0x0f4:  mov    -0x1c(%ebp),%eax
0843273d +0x0f7:  mov    0x8(%eax),%ebx
08432740 +0x0fa:  mov    -0x1c(%ebp),%eax
08432743 +0x0fd:  lea    0x1c(%eax),%edi
08432746 +0x100:  mov    -0x1c(%ebp),%eax
08432749 +0x103:  mov    (%eax),%eax
0843274b +0x105:  movl   $0x0,0x4(%esp)
08432753 +0x10d:  mov    %eax,(%esp)
08432756 +0x110:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843275b +0x115:  mov    -0x30(%ebp),%edx
0843275e +0x118:  mov    %edx,0x1c(%esp)
08432762 +0x11c:  mov    -0x2c(%ebp),%edx
08432765 +0x11f:  mov    %edx,0x18(%esp)
08432769 +0x123:  mov    %esi,0x14(%esp)
0843276d +0x127:  mov    %ebx,0x10(%esp)
08432771 +0x12b:  mov    %edi,0xc(%esp)
08432775 +0x12f:  mov    %eax,0x8(%esp)
08432779 +0x133:  movl   $"inSert into member_play_info(occ_date, m_id, play_count, ip, last_play_time, pcbang_flag, end_ip, mac_addr) values(now(), %s, 1, \"%s\", %u, %d, \"%s\", \"%s\")",0x4(%esp)
08432781 +0x13b:  mov    -0x20(%ebp),%eax
08432784 +0x13e:  mov    %eax,(%esp)
08432787 +0x141:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843278c +0x146:  movl   $0x1,0x4(%esp)
08432794 +0x14e:  mov    -0x20(%ebp),%eax
08432797 +0x151:  mov    %eax,(%esp)
0843279a +0x154:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843279f +0x159:  xor    $0x1,%eax
084327a2 +0x15c:  test   %al,%al
084327a4 +0x15e:  je     084327ad <+0x167>
084327a6 +0x160:  mov    $0x0,%eax
084327ab +0x165:  jmp    084327b2 <+0x16c>
084327ad +0x167:  mov    $0x1,%eax
084327b2 +0x16c:  add    $0x4c,%esp
084327b5 +0x16f:  pop    %ebx
084327b6 +0x170:  pop    %esi
084327b7 +0x171:  pop    %edi
084327b8 +0x172:  pop    %ebp
084327b9 +0x173:  ret
```

## 反编译 C

```c
// DB_SaveAccountInfo::dispatch @ 0x8432646

/* DB_SaveAccountInfo::dispatch(int, int, Stream*) */

undefined4 DB_SaveAccountInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_ACCOUNT_INFO SVar1;
  bool bVar2;
  char cVar3;
  MySQL *this;
  SIG_SAVE_ACCOUNT_INFO *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar4 = Stream::GetOutBuffer<SIG_SAVE_ACCOUNT_INFO>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)pSVar4,0);
  MySQL::set_query(this,
                   "upDate member_play_info set ip=\"%s\", last_play_time=%u, pcbang_flag=%d, end_ip=\"%s\", mac_addr=\"%s\" where occ_date=now() and m_id=%s"
                   ,pSVar4 + 0x1c,*(undefined4 *)(pSVar4 + 8),(uint)(byte)pSVar4[4],pSVar4 + 0x28,
                   pSVar4 + 0x2c,uVar5);
  cVar3 = MySQL::exec(this,true);
  if ((cVar3 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(this), lVar7 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    SVar1 = pSVar4[4];
    uVar5 = *(undefined4 *)(pSVar4 + 8);
    uVar6 = NumberToString(*(uint *)pSVar4,0);
    MySQL::set_query(this,
                     "inSert into member_play_info(occ_date, m_id, play_count, ip, last_play_time, pcbang_flag, end_ip, mac_addr) values(now(), %s, 1, \"%s\", %u, %d, \"%s\", \"%s\")"
                     ,uVar6,pSVar4 + 0x1c,uVar5,(uint)(byte)SVar1,pSVar4 + 0x28,pSVar4 + 0x2c);
    cVar3 = MySQL::exec(this,true);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

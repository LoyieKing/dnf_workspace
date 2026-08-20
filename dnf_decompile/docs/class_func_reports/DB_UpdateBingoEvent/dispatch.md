# dispatch

`_ZN19DB_UpdateBingoEvent8dispatchEiiP6Stream`

`DB_UpdateBingoEvent::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBingoEvent` | `0x08448eb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08448eb8  _ZN19DB_UpdateBingoEvent8dispatchEiiP6Stream
#           DB_UpdateBingoEvent::dispatch(int, int, Stream*)
# range [0x08448eb8, 0x08449031]
08448eb8 +0x000:  push   %ebp
08448eb9 +0x001:  mov    %esp,%ebp
08448ebb +0x003:  push   %esi
08448ebc +0x004:  push   %ebx
08448ebd +0x005:  sub    $0x40,%esp
08448ec0 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448ec5 +0x00d:  movl   $0x0,0x8(%esp)
08448ecd +0x015:  movl   $0x9,0x4(%esp)
08448ed5 +0x01d:  mov    %eax,(%esp)
08448ed8 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08448edd +0x025:  mov    %eax,-0x10(%ebp)
08448ee0 +0x028:  movl   $0x0,-0x14(%ebp)
08448ee7 +0x02f:  movl   $0x0,-0x18(%ebp)
08448eee +0x036:  movb   $0x0,-0x19(%ebp)
08448ef2 +0x03a:  lea    -0x14(%ebp),%eax
08448ef5 +0x03d:  mov    %eax,0x4(%esp)
08448ef9 +0x041:  mov    0x14(%ebp),%eax
08448efc +0x044:  mov    %eax,(%esp)
08448eff +0x047:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08448f04 +0x04c:  lea    -0x18(%ebp),%eax
08448f07 +0x04f:  mov    %eax,0x4(%esp)
08448f0b +0x053:  mov    0x14(%ebp),%eax
08448f0e +0x056:  mov    %eax,(%esp)
08448f11 +0x059:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08448f16 +0x05e:  lea    -0x19(%ebp),%eax
08448f19 +0x061:  mov    %eax,0x4(%esp)
08448f1d +0x065:  mov    0x14(%ebp),%eax
08448f20 +0x068:  mov    %eax,(%esp)
08448f23 +0x06b:  call   0861c4f0 <_ZN6StreamrsERc>  ; Stream::operator>>(char&)
08448f28 +0x070:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08448f2d +0x075:  mov    0x37c(%eax),%ebx
08448f33 +0x07b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08448f3a +0x082:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08448f3f +0x087:  mov    %ebx,0x4(%esp)
08448f43 +0x08b:  mov    %eax,(%esp)
08448f46 +0x08e:  call   0810912a <_Z23GetCurrentResetBaseTimeli>  ; GetCurrentResetBaseTime(long, int)
08448f4b +0x093:  mov    %eax,-0xc(%ebp)
08448f4e +0x096:  mov    -0x14(%ebp),%eax
08448f51 +0x099:  movl   $0x0,0x4(%esp)
08448f59 +0x0a1:  mov    %eax,(%esp)
08448f5c +0x0a4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08448f61 +0x0a9:  movzbl -0x19(%ebp),%edx
08448f65 +0x0ad:  movsbl %dl,%ecx
08448f68 +0x0b0:  mov    -0x18(%ebp),%edx
08448f6b +0x0b3:  mov    -0xc(%ebp),%ebx
08448f6e +0x0b6:  mov    %ebx,0x14(%esp)
08448f72 +0x0ba:  mov    %eax,0x10(%esp)
08448f76 +0x0be:  mov    %ecx,0xc(%esp)
08448f7a +0x0c2:  mov    %edx,0x8(%esp)
08448f7e +0x0c6:  movl   $"upDate event_1208_bingo set board = %d,reward=%d where m_id = %s and occ_date > from_unixtime(%u)",0x4(%esp)
08448f86 +0x0ce:  mov    -0x10(%ebp),%eax
08448f89 +0x0d1:  mov    %eax,(%esp)
08448f8c +0x0d4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08448f91 +0x0d9:  movl   $0x1,0x4(%esp)
08448f99 +0x0e1:  mov    -0x10(%ebp),%eax
08448f9c +0x0e4:  mov    %eax,(%esp)
08448f9f +0x0e7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08448fa4 +0x0ec:  xor    $0x1,%eax
08448fa7 +0x0ef:  test   %al,%al
08448fa9 +0x0f1:  je     08448fb2 <+0xfa>
08448fab +0x0f3:  mov    $0x0,%eax
08448fb0 +0x0f8:  jmp    0844902a <+0x172>
08448fb2 +0x0fa:  mov    -0x10(%ebp),%eax
08448fb5 +0x0fd:  mov    %eax,(%esp)
08448fb8 +0x100:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08448fbd +0x105:  or     %edx,%eax
08448fbf +0x107:  test   %eax,%eax
08448fc1 +0x109:  sete   %al
08448fc4 +0x10c:  test   %al,%al
08448fc6 +0x10e:  je     08449025 <+0x16d>
08448fc8 +0x110:  movzbl -0x19(%ebp),%eax
08448fcc +0x114:  movsbl %al,%esi
08448fcf +0x117:  mov    -0x18(%ebp),%ebx
08448fd2 +0x11a:  mov    -0x14(%ebp),%eax
08448fd5 +0x11d:  movl   $0x0,0x4(%esp)
08448fdd +0x125:  mov    %eax,(%esp)
08448fe0 +0x128:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08448fe5 +0x12d:  mov    %esi,0x10(%esp)
08448fe9 +0x131:  mov    %ebx,0xc(%esp)
08448fed +0x135:  mov    %eax,0x8(%esp)
08448ff1 +0x139:  movl   $"inSert into event_1208_bingo(m_id,occ_date,board,reward) values(%s,now(),%d,%d)",0x4(%esp)
08448ff9 +0x141:  mov    -0x10(%ebp),%eax
08448ffc +0x144:  mov    %eax,(%esp)
08448fff +0x147:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449004 +0x14c:  movl   $0x1,0x4(%esp)
0844900c +0x154:  mov    -0x10(%ebp),%eax
0844900f +0x157:  mov    %eax,(%esp)
08449012 +0x15a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08449017 +0x15f:  xor    $0x1,%eax
0844901a +0x162:  test   %al,%al
0844901c +0x164:  je     08449025 <+0x16d>
0844901e +0x166:  mov    $0x0,%eax
08449023 +0x16b:  jmp    0844902a <+0x172>
08449025 +0x16d:  mov    $0x1,%eax
0844902a +0x172:  add    $0x40,%esp
0844902d +0x175:  pop    %ebx
0844902e +0x176:  pop    %esi
0844902f +0x177:  pop    %ebp
08449030 +0x178:  ret
08449031 +0x179:  nop
```

## 反编译 C

```c
// DB_UpdateBingoEvent::dispatch @ 0x8448eb8

/* DB_UpdateBingoEvent::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBingoEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  char local_1d;
  int local_1c;
  uint local_18;
  MySQL *local_14;
  undefined4 local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_18 = 0;
  local_1c = 0;
  local_1d = '\0';
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_1d);
  iVar2 = G_CEnvironment();
  iVar2 = *(int *)(iVar2 + 0x37c);
  lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_10 = GetCurrentResetBaseTime(lVar3,iVar2);
  uVar4 = NumberToString(local_18,0);
  uVar5 = local_10;
  MySQL::set_query(local_14,
                   "upDate event_1208_bingo set board = %d,reward=%d where m_id = %s and occ_date > from_unixtime(%u)"
                   ,local_1c,(int)local_1d,uVar4,local_10);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    lVar7 = MySQL::getAffectedRowCount(local_14);
    iVar2 = local_1c;
    if (lVar7 == 0) {
      iVar6 = (int)local_1d;
      uVar4 = NumberToString(local_18,0);
      MySQL::set_query(local_14,
                       "inSert into event_1208_bingo(m_id,occ_date,board,reward) values(%s,now(),%d,%d)"
                       ,uVar4,iVar2,iVar6,uVar5);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```

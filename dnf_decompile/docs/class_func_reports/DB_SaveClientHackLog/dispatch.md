# dispatch

`_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream`

`DB_SaveClientHackLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveClientHackLog` | `0x08421f16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421f16  _ZN20DB_SaveClientHackLog8dispatchEiiP6Stream
#           DB_SaveClientHackLog::dispatch(int, int, Stream*)
# range [0x08421f16, 0x08422151]
08421f16 +0x000:  push   %ebp
08421f17 +0x001:  mov    %esp,%ebp
08421f19 +0x003:  push   %edi
08421f1a +0x004:  push   %esi
08421f1b +0x005:  push   %ebx
08421f1c +0x006:  sub    $0x4c,%esp
08421f1f +0x009:  mov    0x14(%ebp),%eax
08421f22 +0x00c:  mov    %eax,(%esp)
08421f25 +0x00f:  call   08451ba2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x47b8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x47b8
08421f2a +0x014:  mov    %eax,-0x24(%ebp)
08421f2d +0x017:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08421f32 +0x01c:  movl   $0x0,0x8(%esp)
08421f3a +0x024:  movl   $0x4,0x4(%esp)
08421f42 +0x02c:  mov    %eax,(%esp)
08421f45 +0x02f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08421f4a +0x034:  mov    %eax,-0x20(%ebp)
08421f4d +0x037:  mov    -0x24(%ebp),%eax
08421f50 +0x03a:  movzwl 0x8(%eax),%eax
08421f54 +0x03e:  movzwl %ax,%esi
08421f57 +0x041:  mov    -0x24(%ebp),%eax
08421f5a +0x044:  mov    (%eax),%eax
08421f5c +0x046:  movl   $0x0,0x4(%esp)
08421f64 +0x04e:  mov    %eax,(%esp)
08421f67 +0x051:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08421f6c +0x056:  mov    -0x24(%ebp),%edx
08421f6f +0x059:  mov    0xa(%edx),%ebx
08421f72 +0x05c:  mov    -0x24(%ebp),%edx
08421f75 +0x05f:  mov    0xe(%edx),%ecx
08421f78 +0x062:  mov    -0x24(%ebp),%edx
08421f7b +0x065:  mov    0x4(%edx),%edx
08421f7e +0x068:  mov    %esi,0x18(%esp)
08421f82 +0x06c:  mov    %eax,0x14(%esp)
08421f86 +0x070:  mov    %ebx,0x10(%esp)
08421f8a +0x074:  mov    %ecx,0xc(%esp)
08421f8e +0x078:  mov    %edx,0x8(%esp)
08421f92 +0x07c:  movl   $"upDate dnf_hack_log set charac_no=%d,last_time=now(),cnt=cnt+%d,etc=%d where m_id=%s and hack_type=%d and occ_date=CAST(DATE_FORMAT(now(), '%%Y-%%m-%%d') AS CHAR)",0x4(%esp)
08421f9a +0x084:  mov    -0x20(%ebp),%eax
08421f9d +0x087:  mov    %eax,(%esp)
08421fa0 +0x08a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08421fa5 +0x08f:  movl   $0x1,0x4(%esp)
08421fad +0x097:  mov    -0x20(%ebp),%eax
08421fb0 +0x09a:  mov    %eax,(%esp)
08421fb3 +0x09d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08421fb8 +0x0a2:  xor    $0x1,%eax
08421fbb +0x0a5:  test   %al,%al
08421fbd +0x0a7:  jne    08421fd0 <+0xba>
08421fbf +0x0a9:  mov    -0x20(%ebp),%eax
08421fc2 +0x0ac:  mov    %eax,(%esp)
08421fc5 +0x0af:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08421fca +0x0b4:  or     %edx,%eax
08421fcc +0x0b6:  test   %eax,%eax
08421fce +0x0b8:  jne    08421fd7 <+0xc1>
08421fd0 +0x0ba:  mov    $0x1,%eax
08421fd5 +0x0bf:  jmp    08421fdc <+0xc6>
08421fd7 +0x0c1:  mov    $0x0,%eax
08421fdc +0x0c6:  test   %al,%al
08421fde +0x0c8:  je     08422056 <+0x140>
08421fe0 +0x0ca:  mov    -0x24(%ebp),%eax
08421fe3 +0x0cd:  mov    0xe(%eax),%eax
08421fe6 +0x0d0:  mov    %eax,-0x2c(%ebp)
08421fe9 +0x0d3:  mov    -0x24(%ebp),%eax
08421fec +0x0d6:  mov    0xa(%eax),%edi
08421fef +0x0d9:  mov    -0x24(%ebp),%eax
08421ff2 +0x0dc:  movzwl 0x8(%eax),%eax
08421ff6 +0x0e0:  movzwl %ax,%esi
08421ff9 +0x0e3:  mov    -0x24(%ebp),%eax
08421ffc +0x0e6:  mov    0x4(%eax),%ebx
08421fff +0x0e9:  mov    -0x24(%ebp),%eax
08422002 +0x0ec:  mov    (%eax),%eax
08422004 +0x0ee:  movl   $0x0,0x4(%esp)
0842200c +0x0f6:  mov    %eax,(%esp)
0842200f +0x0f9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08422014 +0x0fe:  mov    -0x2c(%ebp),%edx
08422017 +0x101:  mov    %edx,0x18(%esp)
0842201b +0x105:  mov    %edi,0x14(%esp)
0842201f +0x109:  mov    %esi,0x10(%esp)
08422023 +0x10d:  mov    %ebx,0xc(%esp)
08422027 +0x111:  mov    %eax,0x8(%esp)
0842202b +0x115:  movl   $"inSert into dnf_hack_log(m_id,charac_no,hack_type,occ_date,last_time,etc,cnt) values(%s,%d,%d,cast(now() as date),now(),%d,%d)",0x4(%esp)
08422033 +0x11d:  mov    -0x20(%ebp),%eax
08422036 +0x120:  mov    %eax,(%esp)
08422039 +0x123:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842203e +0x128:  movl   $0x1,0x4(%esp)
08422046 +0x130:  mov    -0x20(%ebp),%eax
08422049 +0x133:  mov    %eax,(%esp)
0842204c +0x136:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08422051 +0x13b:  jmp    08422145 <+0x22f>
08422056 +0x140:  movl   $0xffffffff,-0x1c(%ebp)
0842205d +0x147:  mov    -0x24(%ebp),%eax
08422060 +0x14a:  movzwl 0x8(%eax),%eax
08422064 +0x14e:  movzwl %ax,%eax
08422067 +0x151:  cmp    $0x1f7,%eax
0842206c +0x156:  je     0842208c <+0x176>
0842206e +0x158:  cmp    $0x1f7,%eax
08422073 +0x15d:  jg     0842207e <+0x168>
08422075 +0x15f:  cmp    $0x193,%eax
0842207a +0x164:  je     0842208c <+0x176>
0842207c +0x166:  jmp    084220db <+0x1c5>
0842207e +0x168:  cmp    $0x326,%eax
08422083 +0x16d:  je     0842208c <+0x176>
08422085 +0x16f:  cmp    $0x3ba,%eax
0842208a +0x174:  jne    084220db <+0x1c5>
0842208c +0x176:  mov    -0x24(%ebp),%eax
0842208f +0x179:  movzwl 0x8(%eax),%eax
08422093 +0x17d:  movzwl %ax,%edx
08422096 +0x180:  mov    -0x24(%ebp),%eax
08422099 +0x183:  mov    (%eax),%eax
0842209b +0x185:  mov    %edx,0xc(%esp)
0842209f +0x189:  mov    %eax,0x8(%esp)
084220a3 +0x18d:  mov    -0x20(%ebp),%eax
084220a6 +0x190:  mov    %eax,0x4(%esp)
084220aa +0x194:  mov    0x8(%ebp),%eax
084220ad +0x197:  mov    %eax,(%esp)
084220b0 +0x19a:  call   08421d50 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt>  ; DB_SaveClientHackLog::_getTodaysHackCount(MySQL*, unsigned int, unsigned short)
084220b5 +0x19f:  mov    -0x24(%ebp),%edx
084220b8 +0x1a2:  movzwl 0x8(%edx),%edx
084220bc +0x1a6:  movzwl %dx,%ecx
084220bf +0x1a9:  mov    -0x24(%ebp),%edx
084220c2 +0x1ac:  mov    (%edx),%edx
084220c4 +0x1ae:  mov    %eax,0xc(%esp)
084220c8 +0x1b2:  mov    %ecx,0x8(%esp)
084220cc +0x1b6:  mov    %edx,0x4(%esp)
084220d0 +0x1ba:  mov    0x8(%ebp),%eax
084220d3 +0x1bd:  mov    %eax,(%esp)
084220d6 +0x1c0:  call   08422152 <_ZN20DB_SaveClientHackLog19_sendHackTypeResultEjii>  ; DB_SaveClientHackLog::_sendHackTypeResult(unsigned int, int, int)
084220db +0x1c5:  cmpl   $0xffffffff,-0x1c(%ebp)
084220df +0x1c9:  je     08422145 <+0x22f>
084220e1 +0x1cb:  mov    -0x24(%ebp),%eax
084220e4 +0x1ce:  movzwl 0x8(%eax),%eax
084220e8 +0x1d2:  movzwl %ax,%edx
084220eb +0x1d5:  mov    -0x24(%ebp),%eax
084220ee +0x1d8:  mov    (%eax),%eax
084220f0 +0x1da:  mov    %edx,0xc(%esp)
084220f4 +0x1de:  mov    %eax,0x8(%esp)
084220f8 +0x1e2:  mov    -0x20(%ebp),%eax
084220fb +0x1e5:  mov    %eax,0x4(%esp)
084220ff +0x1e9:  mov    0x8(%ebp),%eax
08422102 +0x1ec:  mov    %eax,(%esp)
08422105 +0x1ef:  call   08421d50 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt>  ; DB_SaveClientHackLog::_getTodaysHackCount(MySQL*, unsigned int, unsigned short)
0842210a +0x1f4:  cmp    -0x1c(%ebp),%eax
0842210d +0x1f7:  setge  %al
08422110 +0x1fa:  test   %al,%al
08422112 +0x1fc:  je     08422145 <+0x22f>
08422114 +0x1fe:  mov    -0x24(%ebp),%eax
08422117 +0x201:  mov    (%eax),%eax
08422119 +0x203:  movl   $0x0,0x8(%esp)
08422121 +0x20b:  movl   $0xa8,0x4(%esp)
08422129 +0x213:  mov    %eax,(%esp)
0842212c +0x216:  call   08425494 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc>  ; DB_ReqSaveHackUserPunish::makeRequest(unsigned int, unsigned int, char const*)
08422131 +0x21b:  mov    -0x24(%ebp),%eax
08422134 +0x21e:  mov    (%eax),%eax
08422136 +0x220:  mov    %eax,0x4(%esp)
0842213a +0x224:  mov    0x8(%ebp),%eax
0842213d +0x227:  mov    %eax,(%esp)
08422140 +0x22a:  call   08421e3a <_ZN20DB_SaveClientHackLog11_sendResultEj>  ; DB_SaveClientHackLog::_sendResult(unsigned int)
08422145 +0x22f:  mov    $0x1,%eax
0842214a +0x234:  add    $0x4c,%esp
0842214d +0x237:  pop    %ebx
0842214e +0x238:  pop    %esi
0842214f +0x239:  pop    %edi
08422150 +0x23a:  pop    %ebp
08422151 +0x23b:  ret
```

## 反编译 C

```c
// DB_SaveClientHackLog::dispatch @ 0x8421f16

/* WARNING: Removing unreachable block (ram,0x084220e1) */
/* WARNING: Removing unreachable block (ram,0x08422114) */
/* DB_SaveClientHackLog::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveClientHackLog::dispatch(DB_SaveClientHackLog *this,int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  SIG_SAVE_CLIENT_HACK_LOG *pSVar6;
  MySQL *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  
  pSVar6 = Stream::GetOutBuffer<SIG_SAVE_CLIENT_HACK_LOG>(param_3);
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar1 = *(ushort *)(pSVar6 + 8);
  uVar7 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this_00,
                   "upDate dnf_hack_log set charac_no=%d,last_time=now(),cnt=cnt+%d,etc=%d where m_id=%s and hack_type=%d and occ_date=CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR)"
                   ,*(undefined4 *)(pSVar6 + 4),*(undefined4 *)(pSVar6 + 0xe),
                   *(undefined4 *)(pSVar6 + 10),uVar7,(uint)uVar1);
  cVar5 = MySQL::exec(this_00,true);
  if ((cVar5 == '\x01') && (lVar10 = MySQL::getAffectedRowCount(this_00), lVar10 != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    uVar1 = *(ushort *)(pSVar6 + 8);
    if (uVar1 != 0x1f7) {
      if (uVar1 < 0x1f8) {
        if (uVar1 != 0x193) {
          return 1;
        }
      }
      else if ((uVar1 != 0x326) && (uVar1 != 0x3ba)) {
        return 1;
      }
    }
    iVar9 = _getTodaysHackCount(this,this_00,*(uint *)pSVar6,*(ushort *)(pSVar6 + 8));
    _sendHackTypeResult(this,*(uint *)pSVar6,(uint)*(ushort *)(pSVar6 + 8),iVar9);
    return 1;
  }
  uVar7 = *(undefined4 *)(pSVar6 + 0xe);
  uVar2 = *(undefined4 *)(pSVar6 + 10);
  uVar1 = *(ushort *)(pSVar6 + 8);
  uVar3 = *(undefined4 *)(pSVar6 + 4);
  uVar8 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this_00,
                   "inSert into dnf_hack_log(m_id,charac_no,hack_type,occ_date,last_time,etc,cnt) values(%s,%d,%d,cast(now() as date),now(),%d,%d)"
                   ,uVar8,uVar3,(uint)uVar1,uVar2,uVar7);
  MySQL::exec(this_00,true);
  return 1;
}
```

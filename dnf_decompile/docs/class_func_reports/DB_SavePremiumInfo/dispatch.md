# dispatch

`_ZN18DB_SavePremiumInfo8dispatchEiiP6Stream`

`DB_SavePremiumInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SavePremiumInfo` | `0x0841b4be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841b4be  _ZN18DB_SavePremiumInfo8dispatchEiiP6Stream
#           DB_SavePremiumInfo::dispatch(int, int, Stream*)
# range [0x0841b4be, 0x0841b623]
0841b4be +0x000:  push   %ebp
0841b4bf +0x001:  mov    %esp,%ebp
0841b4c1 +0x003:  push   %edi
0841b4c2 +0x004:  push   %esi
0841b4c3 +0x005:  push   %ebx
0841b4c4 +0x006:  sub    $0x4c,%esp
0841b4c7 +0x009:  mov    0x14(%ebp),%eax
0841b4ca +0x00c:  mov    %eax,(%esp)
0841b4cd +0x00f:  call   0845116c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3d82>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3d82
0841b4d2 +0x014:  mov    %eax,-0x20(%ebp)
0841b4d5 +0x017:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b4da +0x01c:  movl   $0x0,0x8(%esp)
0841b4e2 +0x024:  movl   $0x6,0x4(%esp)
0841b4ea +0x02c:  mov    %eax,(%esp)
0841b4ed +0x02f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b4f2 +0x034:  mov    %eax,-0x1c(%ebp)
0841b4f5 +0x037:  mov    -0x20(%ebp),%eax
0841b4f8 +0x03a:  mov    0x14(%eax),%edi
0841b4fb +0x03d:  mov    -0x20(%ebp),%eax
0841b4fe +0x040:  mov    0x8(%eax),%esi
0841b501 +0x043:  mov    -0x20(%ebp),%eax
0841b504 +0x046:  mov    (%eax),%eax
0841b506 +0x048:  movl   $0x0,0x4(%esp)
0841b50e +0x050:  mov    %eax,(%esp)
0841b511 +0x053:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841b516 +0x058:  mov    -0x20(%ebp),%edx
0841b519 +0x05b:  mov    0x4(%edx),%ebx
0841b51c +0x05e:  mov    -0x20(%ebp),%edx
0841b51f +0x061:  mov    0x10(%edx),%ecx
0841b522 +0x064:  mov    -0x20(%ebp),%edx
0841b525 +0x067:  mov    0xc(%edx),%edx
0841b528 +0x06a:  mov    %edi,0x1c(%esp)
0841b52c +0x06e:  mov    %esi,0x18(%esp)
0841b530 +0x072:  mov    %eax,0x14(%esp)
0841b534 +0x076:  mov    %ebx,0x10(%esp)
0841b538 +0x07a:  mov    %ecx,0xc(%esp)
0841b53c +0x07e:  mov    %edx,0x8(%esp)
0841b540 +0x082:  movl   $"upDate member_premium set service_end=from_unixtime(%d) where event_id=%d and pre_type=%d and m_id=%s and service_end>from_unixtime(%d) and server_id=%d",0x4(%esp)
0841b548 +0x08a:  mov    -0x1c(%ebp),%eax
0841b54b +0x08d:  mov    %eax,(%esp)
0841b54e +0x090:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b553 +0x095:  movl   $0x1,0x4(%esp)
0841b55b +0x09d:  mov    -0x1c(%ebp),%eax
0841b55e +0x0a0:  mov    %eax,(%esp)
0841b561 +0x0a3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b566 +0x0a8:  xor    $0x1,%eax
0841b569 +0x0ab:  test   %al,%al
0841b56b +0x0ad:  jne    0841b57e <+0xc0>
0841b56d +0x0af:  mov    -0x1c(%ebp),%eax
0841b570 +0x0b2:  mov    %eax,(%esp)
0841b573 +0x0b5:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0841b578 +0x0ba:  or     %edx,%eax
0841b57a +0x0bc:  test   %eax,%eax
0841b57c +0x0be:  jne    0841b585 <+0xc7>
0841b57e +0x0c0:  mov    $0x1,%eax
0841b583 +0x0c5:  jmp    0841b58a <+0xcc>
0841b585 +0x0c7:  mov    $0x0,%eax
0841b58a +0x0cc:  test   %al,%al
0841b58c +0x0ce:  je     0841b617 <+0x159>
0841b592 +0x0d4:  mov    -0x20(%ebp),%eax
0841b595 +0x0d7:  mov    0x14(%eax),%eax
0841b598 +0x0da:  mov    %eax,-0x2c(%ebp)
0841b59b +0x0dd:  mov    -0x20(%ebp),%eax
0841b59e +0x0e0:  mov    0x10(%eax),%edi
0841b5a1 +0x0e3:  mov    -0x20(%ebp),%eax
0841b5a4 +0x0e6:  mov    0xc(%eax),%esi
0841b5a7 +0x0e9:  mov    -0x20(%ebp),%eax
0841b5aa +0x0ec:  mov    0x8(%eax),%ebx
0841b5ad +0x0ef:  mov    -0x20(%ebp),%eax
0841b5b0 +0x0f2:  mov    (%eax),%eax
0841b5b2 +0x0f4:  movl   $0x0,0x4(%esp)
0841b5ba +0x0fc:  mov    %eax,(%esp)
0841b5bd +0x0ff:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841b5c2 +0x104:  mov    -0x20(%ebp),%edx
0841b5c5 +0x107:  mov    0x4(%edx),%edx
0841b5c8 +0x10a:  mov    -0x2c(%ebp),%ecx
0841b5cb +0x10d:  mov    %ecx,0x1c(%esp)
0841b5cf +0x111:  mov    %edi,0x18(%esp)
0841b5d3 +0x115:  mov    %esi,0x14(%esp)
0841b5d7 +0x119:  mov    %ebx,0x10(%esp)
0841b5db +0x11d:  mov    %eax,0xc(%esp)
0841b5df +0x121:  mov    %edx,0x8(%esp)
0841b5e3 +0x125:  movl   $"inSert into member_premium(pre_type,m_id,service_start,service_end,event_id,server_id) values(%d,%s,from_unixtime(%d),from_unixtime(%d),%d,%d)",0x4(%esp)
0841b5eb +0x12d:  mov    -0x1c(%ebp),%eax
0841b5ee +0x130:  mov    %eax,(%esp)
0841b5f1 +0x133:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b5f6 +0x138:  movl   $0x1,0x4(%esp)
0841b5fe +0x140:  mov    -0x1c(%ebp),%eax
0841b601 +0x143:  mov    %eax,(%esp)
0841b604 +0x146:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b609 +0x14b:  xor    $0x1,%eax
0841b60c +0x14e:  test   %al,%al
0841b60e +0x150:  je     0841b617 <+0x159>
0841b610 +0x152:  mov    $0x0,%eax
0841b615 +0x157:  jmp    0841b61c <+0x15e>
0841b617 +0x159:  mov    $0x1,%eax
0841b61c +0x15e:  add    $0x4c,%esp
0841b61f +0x161:  pop    %ebx
0841b620 +0x162:  pop    %esi
0841b621 +0x163:  pop    %edi
0841b622 +0x164:  pop    %ebp
0841b623 +0x165:  ret
```

## 反编译 C

```c
// DB_SavePremiumInfo::dispatch @ 0x841b4be

/* DB_SavePremiumInfo::dispatch(int, int, Stream*) */

undefined4 DB_SavePremiumInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  SIG_SAVE_PREMIUM_INFO *pSVar6;
  MySQL *this;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  
  pSVar6 = Stream::GetOutBuffer<SIG_SAVE_PREMIUM_INFO>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(undefined4 *)(pSVar6 + 0x14);
  uVar2 = *(undefined4 *)(pSVar6 + 8);
  uVar7 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this,
                   "upDate member_premium set service_end=from_unixtime(%d) where event_id=%d and pre_type=%d and m_id=%s and service_end>from_unixtime(%d) and server_id=%d"
                   ,*(undefined4 *)(pSVar6 + 0xc),*(undefined4 *)(pSVar6 + 0x10),
                   *(undefined4 *)(pSVar6 + 4),uVar7,uVar2,uVar1);
  cVar5 = MySQL::exec(this,true);
  if ((cVar5 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(this), lVar9 != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar1 = *(undefined4 *)(pSVar6 + 0x14);
    uVar2 = *(undefined4 *)(pSVar6 + 0x10);
    uVar7 = *(undefined4 *)(pSVar6 + 0xc);
    uVar3 = *(undefined4 *)(pSVar6 + 8);
    uVar8 = NumberToString(*(uint *)pSVar6,0);
    MySQL::set_query(this,
                     "inSert into member_premium(pre_type,m_id,service_start,service_end,event_id,server_id) values(%d,%s,from_unixtime(%d),from_unixtime(%d),%d,%d)"
                     ,*(undefined4 *)(pSVar6 + 4),uVar8,uVar3,uVar7,uVar2,uVar1);
    cVar5 = MySQL::exec(this,true);
    if (cVar5 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

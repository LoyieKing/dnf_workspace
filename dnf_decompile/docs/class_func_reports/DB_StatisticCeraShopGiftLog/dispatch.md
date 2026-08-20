# dispatch

`_ZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6Stream`

`DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatisticCeraShopGiftLog` | `0x08444066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444066  _ZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6Stream
#           DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*)
# range [0x08444066, 0x084441e5]
08444066 +0x000:  push   %ebp
08444067 +0x001:  mov    %esp,%ebp
08444069 +0x003:  push   %edi
0844406a +0x004:  push   %esi
0844406b +0x005:  push   %ebx
0844406c +0x006:  sub    $0x6c,%esp
0844406f +0x009:  mov    0x14(%ebp),%eax
08444072 +0x00c:  mov    %eax,(%esp)
08444075 +0x00f:  call   08453fb0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6bc6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6bc6
0844407a +0x014:  mov    %eax,-0x20(%ebp)
0844407d +0x017:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08444082 +0x01c:  movl   $0x0,0x8(%esp)
0844408a +0x024:  movl   $0x4,0x4(%esp)
08444092 +0x02c:  mov    %eax,(%esp)
08444095 +0x02f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844409a +0x034:  mov    %eax,-0x1c(%ebp)
0844409d +0x037:  cmpl   $0x0,-0x1c(%ebp)
084440a1 +0x03b:  jne    084440ad <+0x47>
084440a3 +0x03d:  mov    $0x0,%eax
084440a8 +0x042:  jmp    084441de <+0x178>
084440ad +0x047:  mov    -0x20(%ebp),%eax
084440b0 +0x04a:  mov    0x14(%eax),%edi
084440b3 +0x04d:  mov    -0x20(%ebp),%eax
084440b6 +0x050:  mov    0x10(%eax),%esi
084440b9 +0x053:  mov    -0x20(%ebp),%eax
084440bc +0x056:  mov    0xc(%eax),%ebx
084440bf +0x059:  mov    -0x20(%ebp),%eax
084440c2 +0x05c:  mov    0x8(%eax),%ecx
084440c5 +0x05f:  mov    -0x20(%ebp),%eax
084440c8 +0x062:  mov    0x4(%eax),%edx
084440cb +0x065:  mov    -0x20(%ebp),%eax
084440ce +0x068:  mov    (%eax),%eax
084440d0 +0x06a:  mov    %edi,0x1c(%esp)
084440d4 +0x06e:  mov    %esi,0x18(%esp)
084440d8 +0x072:  mov    %ebx,0x14(%esp)
084440dc +0x076:  mov    %ecx,0x10(%esp)
084440e0 +0x07a:  mov    %edx,0xc(%esp)
084440e4 +0x07e:  mov    %eax,0x8(%esp)
084440e8 +0x082:  movl   $"inSert into log_cerashop_gift(occ_time, from_mid, from_charac_no, to_mid, to_charac_no, item_idx, item_cnt) values(unix_timestamp(), %u, %u, %u, %u, %u, %u)",0x4(%esp)
084440f0 +0x08a:  mov    -0x1c(%ebp),%eax
084440f3 +0x08d:  mov    %eax,(%esp)
084440f6 +0x090:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084440fb +0x095:  movl   $0x1,0x4(%esp)
08444103 +0x09d:  mov    -0x1c(%ebp),%eax
08444106 +0x0a0:  mov    %eax,(%esp)
08444109 +0x0a3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844410e +0x0a8:  xor    $0x1,%eax
08444111 +0x0ab:  test   %al,%al
08444113 +0x0ad:  je     084441d9 <+0x173>
08444119 +0x0b3:  movl   $0x5,0xc(%esp)
08444121 +0x0bb:  movl   $0xa9c1,0x8(%esp)
08444129 +0x0c3:  movl   $&_ZZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08444131 +0x0cb:  lea    -0x40(%ebp),%eax
08444134 +0x0ce:  mov    %eax,(%esp)
08444137 +0x0d1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844413c +0x0d6:  movl   $"DB_StatisticAmazingBoxProtectLucky_USE inSert exec fail",0x4(%esp)
08444144 +0x0de:  lea    -0x40(%ebp),%eax
08444147 +0x0e1:  mov    %eax,(%esp)
0844414a +0x0e4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844414f +0x0e9:  mov    -0x20(%ebp),%eax
08444152 +0x0ec:  mov    0x14(%eax),%eax
08444155 +0x0ef:  mov    %eax,-0x54(%ebp)
08444158 +0x0f2:  mov    -0x20(%ebp),%eax
0844415b +0x0f5:  mov    0x10(%eax),%eax
0844415e +0x0f8:  mov    %eax,-0x50(%ebp)
08444161 +0x0fb:  mov    -0x20(%ebp),%eax
08444164 +0x0fe:  mov    0xc(%eax),%eax
08444167 +0x101:  mov    %eax,-0x4c(%ebp)
0844416a +0x104:  mov    -0x20(%ebp),%eax
0844416d +0x107:  mov    0x8(%eax),%edi
08444170 +0x10a:  mov    -0x20(%ebp),%eax
08444173 +0x10d:  mov    0x4(%eax),%esi
08444176 +0x110:  mov    -0x20(%ebp),%eax
08444179 +0x113:  mov    (%eax),%ebx
0844417b +0x115:  movl   $0x5,0xc(%esp)
08444183 +0x11d:  movl   $0xa9c3,0x8(%esp)
0844418b +0x125:  movl   $&_ZZN27DB_StatisticCeraShopGiftLog8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08444193 +0x12d:  lea    -0x30(%ebp),%eax
08444196 +0x130:  mov    %eax,(%esp)
08444199 +0x133:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844419e +0x138:  mov    -0x54(%ebp),%eax
084441a1 +0x13b:  mov    %eax,0x1c(%esp)
084441a5 +0x13f:  mov    -0x50(%ebp),%eax
084441a8 +0x142:  mov    %eax,0x18(%esp)
084441ac +0x146:  mov    -0x4c(%ebp),%eax
084441af +0x149:  mov    %eax,0x14(%esp)
084441b3 +0x14d:  mov    %edi,0x10(%esp)
084441b7 +0x151:  mov    %esi,0xc(%esp)
084441bb +0x155:  mov    %ebx,0x8(%esp)
084441bf +0x159:  movl   $"inSert into log_cerashop_gift(occ_time, from_mid, from_charac_no, to_m_id, to_charac_no, item_idx, count) values(unix_timestamp(), %u, %u, %u, %u, %u, %u)",0x4(%esp)
084441c7 +0x161:  lea    -0x30(%ebp),%eax
084441ca +0x164:  mov    %eax,(%esp)
084441cd +0x167:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084441d2 +0x16c:  mov    $0x0,%eax
084441d7 +0x171:  jmp    084441de <+0x178>
084441d9 +0x173:  mov    $0x1,%eax
084441de +0x178:  add    $0x6c,%esp
084441e1 +0x17b:  pop    %ebx
084441e2 +0x17c:  pop    %esi
084441e3 +0x17d:  pop    %edi
084441e4 +0x17e:  pop    %ebp
084441e5 +0x17f:  ret
```

## 反编译 C

```c
// DB_StatisticCeraShopGiftLog::dispatch @ 0x8444066

/* DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*) */

undefined4 DB_StatisticCeraShopGiftLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  SIG_STATISTIC_CERASHOP_GIFT_LOG *local_24;
  MySQL *local_20;
  
  local_24 = Stream::GetOutBuffer<SIG_STATISTIC_CERASHOP_GIFT_LOG>(in_stack_00000010);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  if (local_20 == (MySQL *)0x0) {
    uVar7 = 0;
  }
  else {
    MySQL::set_query(local_20,
                     "inSert into log_cerashop_gift(occ_time, from_mid, from_charac_no, to_mid, to_charac_no, item_idx, item_cnt) values(unix_timestamp(), %u, %u, %u, %u, %u, %u)"
                     ,*(undefined4 *)local_24,*(undefined4 *)(local_24 + 4),
                     *(undefined4 *)(local_24 + 8),*(undefined4 *)(local_24 + 0xc),
                     *(undefined4 *)(local_24 + 0x10),*(undefined4 *)(local_24 + 0x14));
    cVar6 = MySQL::exec(local_20,true);
    if (cVar6 == '\x01') {
      uVar7 = 1;
    }
    else {
      cMyTrace::cMyTrace(local_44,
                         "virtual bool DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*)",
                         0xa9c1,5);
      cMyTrace::operator()(local_44,"DB_StatisticAmazingBoxProtectLucky_USE inSert exec fail");
      uVar7 = *(undefined4 *)(local_24 + 0x14);
      uVar1 = *(undefined4 *)(local_24 + 0x10);
      uVar2 = *(undefined4 *)(local_24 + 0xc);
      uVar3 = *(undefined4 *)(local_24 + 8);
      uVar4 = *(undefined4 *)(local_24 + 4);
      uVar5 = *(undefined4 *)local_24;
      cMyTrace::cMyTrace(local_34,
                         "virtual bool DB_StatisticCeraShopGiftLog::dispatch(int, int, Stream*)",
                         0xa9c3,5);
      cMyTrace::operator()
                (local_34,
                 "inSert into log_cerashop_gift(occ_time, from_mid, from_charac_no, to_m_id, to_charac_no, item_idx, count) values(unix_timestamp(), %u, %u, %u, %u, %u, %u)"
                 ,uVar5,uVar4,uVar3,uVar2,uVar1,uVar7);
      uVar7 = 0;
    }
  }
  return uVar7;
}
```

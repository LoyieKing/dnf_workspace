# dispatch

`_ZN23DB_SaveGoldZeroTradeLog8dispatchEiiP6Stream`

`DB_SaveGoldZeroTradeLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveGoldZeroTradeLog` | `0x084227f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084227f6  _ZN23DB_SaveGoldZeroTradeLog8dispatchEiiP6Stream
#           DB_SaveGoldZeroTradeLog::dispatch(int, int, Stream*)
# range [0x084227f6, 0x08422937]
084227f6 +0x000:  push   %ebp
084227f7 +0x001:  mov    %esp,%ebp
084227f9 +0x003:  push   %edi
084227fa +0x004:  push   %esi
084227fb +0x005:  push   %ebx
084227fc +0x006:  sub    $0x7c,%esp
084227ff +0x009:  mov    0x14(%ebp),%eax
08422802 +0x00c:  mov    %eax,(%esp)
08422805 +0x00f:  call   08451d08 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x491e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x491e
0842280a +0x014:  mov    %eax,-0x20(%ebp)
0842280d +0x017:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08422812 +0x01c:  movl   $0x0,0x8(%esp)
0842281a +0x024:  movl   $0x4,0x4(%esp)
08422822 +0x02c:  mov    %eax,(%esp)
08422825 +0x02f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842282a +0x034:  mov    %eax,-0x1c(%ebp)
0842282d +0x037:  mov    -0x20(%ebp),%eax
08422830 +0x03a:  add    $0x31,%eax
08422833 +0x03d:  mov    %eax,-0x44(%ebp)
08422836 +0x040:  mov    -0x20(%ebp),%eax
08422839 +0x043:  add    $0x9b,%eax
0842283e +0x048:  mov    %eax,-0x40(%ebp)
08422841 +0x04b:  mov    -0x20(%ebp),%eax
08422844 +0x04e:  mov    0xdc(%eax),%eax
0842284a +0x054:  mov    %eax,-0x3c(%ebp)
0842284d +0x057:  mov    -0x20(%ebp),%eax
08422850 +0x05a:  movzbl 0x30(%eax),%eax
08422854 +0x05e:  movzbl %al,%eax
08422857 +0x061:  mov    %eax,-0x38(%ebp)
0842285a +0x064:  mov    -0x20(%ebp),%eax
0842285d +0x067:  add    $0x1c,%eax
08422860 +0x06a:  mov    %eax,-0x34(%ebp)
08422863 +0x06d:  mov    -0x20(%ebp),%eax
08422866 +0x070:  add    $0x8,%eax
08422869 +0x073:  mov    %eax,-0x30(%ebp)
0842286c +0x076:  mov    -0x20(%ebp),%eax
0842286f +0x079:  mov    0x4(%eax),%eax
08422872 +0x07c:  movl   $0x1,0x4(%esp)
0842287a +0x084:  mov    %eax,(%esp)
0842287d +0x087:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08422882 +0x08c:  mov    %eax,-0x2c(%ebp)
08422885 +0x08f:  mov    -0x20(%ebp),%eax
08422888 +0x092:  movzbl 0x9a(%eax),%eax
0842288f +0x099:  movzbl %al,%edi
08422892 +0x09c:  mov    -0x20(%ebp),%eax
08422895 +0x09f:  lea    0x86(%eax),%esi
0842289b +0x0a5:  mov    -0x20(%ebp),%eax
0842289e +0x0a8:  lea    0x72(%eax),%ebx
084228a1 +0x0ab:  mov    -0x20(%ebp),%eax
084228a4 +0x0ae:  mov    (%eax),%eax
084228a6 +0x0b0:  movl   $0x0,0x4(%esp)
084228ae +0x0b8:  mov    %eax,(%esp)
084228b1 +0x0bb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084228b6 +0x0c0:  mov    -0x44(%ebp),%edx
084228b9 +0x0c3:  mov    %edx,0x30(%esp)
084228bd +0x0c7:  mov    -0x40(%ebp),%edx
084228c0 +0x0ca:  mov    %edx,0x2c(%esp)
084228c4 +0x0ce:  mov    -0x3c(%ebp),%edx
084228c7 +0x0d1:  mov    %edx,0x28(%esp)
084228cb +0x0d5:  mov    -0x38(%ebp),%edx
084228ce +0x0d8:  mov    %edx,0x24(%esp)
084228d2 +0x0dc:  mov    -0x34(%ebp),%edx
084228d5 +0x0df:  mov    %edx,0x20(%esp)
084228d9 +0x0e3:  mov    -0x30(%ebp),%edx
084228dc +0x0e6:  mov    %edx,0x1c(%esp)
084228e0 +0x0ea:  mov    -0x2c(%ebp),%edx
084228e3 +0x0ed:  mov    %edx,0x18(%esp)
084228e7 +0x0f1:  mov    %edi,0x14(%esp)
084228eb +0x0f5:  mov    %esi,0x10(%esp)
084228ef +0x0f9:  mov    %ebx,0xc(%esp)
084228f3 +0x0fd:  mov    %eax,0x8(%esp)
084228f7 +0x101:  movl   $"inSert into dnf_zeromoney_log(to_m_id,to_nat_ip,to_peer_ip,to_nat_type,from_m_id,from_nat_ip,from_peer_ip,from_nat_type,occ_time,injury_money,to_mac_addr,from_mac_addr) values(%s,'%s','%s',%d,%s,'%s','%s',%d,now(),%d,'%s','%s')",0x4(%esp)
084228ff +0x109:  mov    -0x1c(%ebp),%eax
08422902 +0x10c:  mov    %eax,(%esp)
08422905 +0x10f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842290a +0x114:  movl   $0x1,0x4(%esp)
08422912 +0x11c:  mov    -0x1c(%ebp),%eax
08422915 +0x11f:  mov    %eax,(%esp)
08422918 +0x122:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842291d +0x127:  xor    $0x1,%eax
08422920 +0x12a:  test   %al,%al
08422922 +0x12c:  je     0842292b <+0x135>
08422924 +0x12e:  mov    $0x0,%eax
08422929 +0x133:  jmp    08422930 <+0x13a>
0842292b +0x135:  mov    $0x1,%eax
08422930 +0x13a:  add    $0x7c,%esp
08422933 +0x13d:  pop    %ebx
08422934 +0x13e:  pop    %esi
08422935 +0x13f:  pop    %edi
08422936 +0x140:  pop    %ebp
08422937 +0x141:  ret
```

## 反编译 C

```c
// DB_SaveGoldZeroTradeLog::dispatch @ 0x84227f6

/* DB_SaveGoldZeroTradeLog::dispatch(int, int, Stream*) */

bool DB_SaveGoldZeroTradeLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_GOLD_ZERO_TRADE_LOG SVar1;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG SVar2;
  undefined4 uVar3;
  char cVar4;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG *pSVar5;
  MySQL *this;
  undefined4 uVar6;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  
  pSVar5 = Stream::GetOutBuffer<SIG_SAVE_GOLD_ZERO_TRADE_LOG>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar3 = *(undefined4 *)(pSVar5 + 0xdc);
  SVar1 = pSVar5[0x30];
  uVar6 = NumberToString(*(uint *)(pSVar5 + 4),1);
  SVar2 = pSVar5[0x9a];
  uVar7 = NumberToString(*(uint *)pSVar5,0);
  MySQL::set_query(this,
                   "inSert into dnf_zeromoney_log(to_m_id,to_nat_ip,to_peer_ip,to_nat_type,from_m_id,from_nat_ip,from_peer_ip,from_nat_type,occ_time,injury_money,to_mac_addr,from_mac_addr) values(%s,\'%s\',\'%s\',%d,%s,\'%s\',\'%s\',%d,now(),%d,\'%s\',\'%s\')"
                   ,uVar7,pSVar5 + 0x72,pSVar5 + 0x86,(uint)(byte)SVar2,uVar6,pSVar5 + 8,
                   pSVar5 + 0x1c,(uint)(byte)SVar1,uVar3,pSVar5 + 0x9b,pSVar5 + 0x31);
  cVar4 = MySQL::exec(this,true);
  return cVar4 == '\x01';
}
```

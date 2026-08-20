# sendPremiumGoldCardStatistic

`_ZN6CParty28sendPremiumGoldCardStatisticEiii`

`CParty::sendPremiumGoldCardStatistic(int, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085aca0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085aca0a  _ZN6CParty28sendPremiumGoldCardStatisticEiii
#           CParty::sendPremiumGoldCardStatistic(int, int, int)
# range [0x085aca0a, 0x085aca5f]
085aca0a +0x00:  push   %ebp
085aca0b +0x01:  mov    %esp,%ebp
085aca0d +0x03:  push   %ebx
085aca0e +0x04:  sub    $0x34,%esp
085aca11 +0x07:  lea    -0x1b(%ebp),%eax
085aca14 +0x0a:  mov    %eax,(%esp)
085aca17 +0x0d:  call   085bee96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x3f4>  ; global constructors keyed to CParty::cMember::cMember()+0x3f4
085aca1c +0x12:  mov    0xc(%ebp),%eax
085aca1f +0x15:  mov    %al,-0x11(%ebp)
085aca22 +0x18:  mov    0x10(%ebp),%eax
085aca25 +0x1b:  mov    %eax,-0x10(%ebp)
085aca28 +0x1e:  mov    0x14(%ebp),%eax
085aca2b +0x21:  mov    %eax,-0xc(%ebp)
085aca2e +0x24:  lea    -0x1b(%ebp),%ebx
085aca31 +0x27:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
085aca36 +0x2c:  movl   $0x0,0x4(%esp)
085aca3e +0x34:  mov    %eax,(%esp)
085aca41 +0x37:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085aca46 +0x3c:  movl   $0x13,0x8(%esp)
085aca4e +0x44:  mov    %ebx,0x4(%esp)
085aca52 +0x48:  mov    %eax,(%esp)
085aca55 +0x4b:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085aca5a +0x50:  add    $0x34,%esp
085aca5d +0x53:  pop    %ebx
085aca5e +0x54:  pop    %ebp
085aca5f +0x55:  ret
```

## 反编译 C

```c
// CParty::sendPremiumGoldCardStatistic @ 0x85aca0a

/* CParty::sendPremiumGoldCardStatistic(int, int, int) */

void __thiscall
CParty::sendPremiumGoldCardStatistic(CParty *this,int param_1,int param_2,int param_3)

{
  CStatisticServerProxy *this_00;
  Packet_Goldcard_Event_Statistic_GTS local_1f [10];
  undefined1 local_15;
  int local_14;
  int local_10;
  
  Packet_Goldcard_Event_Statistic_GTS::Packet_Goldcard_Event_Statistic_GTS(local_1f);
  local_15 = (undefined1)param_1;
  local_14 = param_2;
  local_10 = param_3;
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_1f,0x13);
  return;
}
```

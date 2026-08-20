# SendDeathTowerPlayInfo

`_ZN28CDeathTowerPlayDataStatistic22SendDeathTowerPlayInfoEicPK30stDeathTowerRecordMemberInfo_tjj`

`CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo(int, char, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CDeathTowerPlayDataStatistic` | `0x0860f45c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860f45c  _ZN28CDeathTowerPlayDataStatistic22SendDeathTowerPlayInfoEicPK30stDeathTowerRecordMemberInfo_tjj
#           CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo(int, char, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
# range [0x0860f45c, 0x0860f5a3]
0860f45c +0x000:  push   %ebp
0860f45d +0x001:  mov    %esp,%ebp
0860f45f +0x003:  push   %esi
0860f460 +0x004:  push   %ebx
0860f461 +0x005:  sub    $0x70,%esp
0860f464 +0x008:  mov    0x10(%ebp),%eax
0860f467 +0x00b:  mov    %al,-0x3c(%ebp)
0860f46a +0x00e:  lea    -0x1e(%ebp),%eax
0860f46d +0x011:  mov    %eax,(%esp)
0860f470 +0x014:  call   0860ffe6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x64>  ; global constructors keyed to Statistics::Statistics()+0x64
0860f475 +0x019:  movzbl -0x3c(%ebp),%eax
0860f479 +0x01d:  mov    %al,-0x14(%ebp)
0860f47c +0x020:  mov    0xc(%ebp),%eax
0860f47f +0x023:  imul   $0x17,%eax,%eax
0860f482 +0x026:  add    0x14(%ebp),%eax
0860f485 +0x029:  movzbl 0x14(%eax),%eax
0860f489 +0x02d:  movzbl %al,%eax
0860f48c +0x030:  mov    %ax,-0x13(%ebp)
0860f490 +0x034:  mov    0xc(%ebp),%eax
0860f493 +0x037:  imul   $0x17,%eax,%eax
0860f496 +0x03a:  add    0x14(%ebp),%eax
0860f499 +0x03d:  movzbl 0x15(%eax),%eax
0860f49d +0x041:  movzbl %al,%eax
0860f4a0 +0x044:  mov    %eax,-0x11(%ebp)
0860f4a3 +0x047:  mov    0xc(%ebp),%eax
0860f4a6 +0x04a:  imul   $0x17,%eax,%eax
0860f4a9 +0x04d:  add    0x14(%ebp),%eax
0860f4ac +0x050:  movzbl 0x16(%eax),%eax
0860f4b0 +0x054:  mov    %al,-0xd(%ebp)
0860f4b3 +0x057:  mov    0x18(%ebp),%eax
0860f4b6 +0x05a:  mov    %eax,-0xc(%ebp)
0860f4b9 +0x05d:  movzwl -0x13(%ebp),%eax
0860f4bd +0x061:  test   %ax,%ax
0860f4c0 +0x064:  jne    0860f521 <+0xc5>
0860f4c2 +0x066:  mov    -0xc(%ebp),%esi
0860f4c5 +0x069:  movzbl -0xd(%ebp),%eax
0860f4c9 +0x06d:  movsbl %al,%ebx
0860f4cc +0x070:  mov    -0x11(%ebp),%eax
0860f4cf +0x073:  mov    %eax,%ecx
0860f4d1 +0x075:  movzwl -0x13(%ebp),%eax
0860f4d5 +0x079:  movswl %ax,%edx
0860f4d8 +0x07c:  movzbl -0x14(%ebp),%eax
0860f4dc +0x080:  movsbl %al,%eax
0860f4df +0x083:  mov    %esi,0x24(%esp)
0860f4e3 +0x087:  mov    %ebx,0x20(%esp)
0860f4e7 +0x08b:  mov    %ecx,0x1c(%esp)
0860f4eb +0x08f:  mov    %edx,0x18(%esp)
0860f4ef +0x093:  mov    %eax,0x14(%esp)
0860f4f3 +0x097:  movl   $"CDeathTowerPlayDataStatistic ERROR!! deathTower_type (%d) level (%d) job_ (%d) grow_type_ (%d) clearStage (%d)",0x10(%esp)
0860f4fb +0x09f:  movl   $0x5fe,0xc(%esp)
0860f503 +0x0a7:  movl   $&_ZZN28CDeathTowerPlayDataStatistic22SendDeathTowerPlayInfoEicPK30stDeathTowerRecordMemberInfo_tjjE19__PRETTY_FUNCTION__,0x8(%esp)
0860f50b +0x0af:  movl   $"Statistics.cpp",0x4(%esp)
0860f513 +0x0b7:  movl   $0x1,(%esp)
0860f51a +0x0be:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0860f51f +0x0c3:  jmp    0860f54d <+0xf1>
0860f521 +0x0c5:  lea    -0x1e(%ebp),%ebx
0860f524 +0x0c8:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0860f529 +0x0cd:  movl   $0x0,0x4(%esp)
0860f531 +0x0d5:  mov    %eax,(%esp)
0860f534 +0x0d8:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860f539 +0x0dd:  movl   $0x16,0x8(%esp)
0860f541 +0x0e5:  mov    %ebx,0x4(%esp)
0860f545 +0x0e9:  mov    %eax,(%esp)
0860f548 +0x0ec:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860f54d +0x0f1:  lea    -0x2e(%ebp),%eax
0860f550 +0x0f4:  mov    %eax,(%esp)
0860f553 +0x0f7:  call   0861000a <_GLOBAL__I__ZN10StatisticsC2Ev+0x88>  ; global constructors keyed to Statistics::Statistics()+0x88
0860f558 +0x0fc:  movzbl -0x3c(%ebp),%eax
0860f55c +0x100:  mov    %al,-0x24(%ebp)
0860f55f +0x103:  mov    0x1c(%ebp),%eax
0860f562 +0x106:  mov    %al,-0x23(%ebp)
0860f565 +0x109:  mov    0x18(%ebp),%eax
0860f568 +0x10c:  mov    %eax,-0x22(%ebp)
0860f56b +0x10f:  lea    -0x2e(%ebp),%ebx
0860f56e +0x112:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0860f573 +0x117:  movl   $0x0,0x4(%esp)
0860f57b +0x11f:  mov    %eax,(%esp)
0860f57e +0x122:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860f583 +0x127:  movl   $0x10,0x8(%esp)
0860f58b +0x12f:  mov    %ebx,0x4(%esp)
0860f58f +0x133:  mov    %eax,(%esp)
0860f592 +0x136:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860f597 +0x13b:  mov    $0x1,%eax
0860f59c +0x140:  add    $0x70,%esp
0860f59f +0x143:  pop    %ebx
0860f5a0 +0x144:  pop    %esi
0860f5a1 +0x145:  pop    %ebp
0860f5a2 +0x146:  ret
0860f5a3 +0x147:  nop
```

## 反编译 C

```c
// CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo @ 0x860f45c

/* CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo(int, char, stDeathTowerRecordMemberInfo_t
   const*, unsigned int, unsigned int) */

undefined4 __thiscall
CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo
          (CDeathTowerPlayDataStatistic *this,int param_1,char param_2,
          stDeathTowerRecordMemberInfo_t *param_3,uint param_4,uint param_5)

{
  CStatisticServerProxy *pCVar1;
  Packet_DeathTower_Statistic_Playdata_Party local_32 [10];
  char local_28;
  undefined1 local_27;
  uint local_26;
  Packet_DeathTower_Statistic_Playdata_Job local_22 [10];
  char local_18;
  ushort local_17;
  uint local_15;
  stDeathTowerRecordMemberInfo_t local_11;
  uint local_10;
  
  Packet_DeathTower_Statistic_Playdata_Job::Packet_DeathTower_Statistic_Playdata_Job(local_22);
  local_17 = (ushort)(byte)param_3[param_1 * 0x17 + 0x14];
  local_15 = (uint)(byte)param_3[param_1 * 0x17 + 0x15];
  local_11 = param_3[param_1 * 0x17 + 0x16];
  local_10 = param_4;
  local_18 = param_2;
  if (local_17 == 0) {
    LogManager::logFormat
              (1,"Statistics.cpp",
               "bool CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo(int, char, const stDeathTowerRecordMemberInfo_t*, unsigned int, unsigned int)"
               ,0x5fe,
               "CDeathTowerPlayDataStatistic ERROR!! deathTower_type (%d) level (%d) job_ (%d) grow_type_ (%d) clearStage (%d)"
               ,(int)param_2,0,local_15,(int)(char)local_11,param_4);
  }
  else {
    pCVar1 = (CStatisticServerProxy *)
             CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                       (GlobalData::s_statistic_proxy_mgr,0);
    CStatisticServerProxy::SendPacket(pCVar1,(char *)local_22,0x16);
  }
  Packet_DeathTower_Statistic_Playdata_Party::Packet_DeathTower_Statistic_Playdata_Party(local_32);
  local_27 = (undefined1)param_5;
  local_26 = param_4;
  local_28 = param_2;
  pCVar1 = (CStatisticServerProxy *)
           CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                     (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(pCVar1,(char *)local_32,0x10);
  return 1;
}
```

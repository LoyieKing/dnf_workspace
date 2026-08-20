# SendDeathTowerValueStatistic

`_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj`

`CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)`

| 类 | 地址 |
|---|---|
| `CDeathTowerValueStatistic` | `0x0860f342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860f342  _ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj
#           CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
# range [0x0860f342, 0x0860f450]
0860f342 +0x000:  push   %ebp
0860f343 +0x001:  mov    %esp,%ebp
0860f345 +0x003:  push   %ebx
0860f346 +0x004:  sub    $0x54,%esp
0860f349 +0x007:  mov    0x10(%ebp),%edx
0860f34c +0x00a:  mov    0x14(%ebp),%eax
0860f34f +0x00d:  mov    %dl,-0x2c(%ebp)
0860f352 +0x010:  mov    %al,-0x30(%ebp)
0860f355 +0x013:  lea    -0x1d(%ebp),%eax
0860f358 +0x016:  mov    %eax,(%esp)
0860f35b +0x019:  call   0860ffc2 <_GLOBAL__I__ZN10StatisticsC2Ev+0x40>  ; global constructors keyed to Statistics::Statistics()+0x40
0860f360 +0x01e:  movzbl -0x2c(%ebp),%eax
0860f364 +0x022:  mov    %al,-0x13(%ebp)
0860f367 +0x025:  movsbw -0x30(%ebp),%ax
0860f36c +0x02a:  mov    %ax,-0x12(%ebp)
0860f370 +0x02e:  cmpl   $0xa,0xc(%ebp)
0860f374 +0x032:  jne    0860f40e <+0xcc>
0860f37a +0x038:  mov    0x18(%ebp),%eax
0860f37d +0x03b:  cmp    $0x1,%eax
0860f380 +0x03e:  je     0860f3a3 <+0x61>
0860f382 +0x040:  cmp    $0x1,%eax
0860f385 +0x043:  jb     0860f393 <+0x51>
0860f387 +0x045:  cmp    $0x2,%eax
0860f38a +0x048:  je     0860f3b3 <+0x71>
0860f38c +0x04a:  cmp    $0x3,%eax
0860f38f +0x04d:  je     0860f3c3 <+0x81>
0860f391 +0x04f:  jmp    0860f3d4 <+0x92>
0860f393 +0x051:  movl   $0x3,-0x10(%ebp)
0860f39a +0x058:  movl   $0x1,0x18(%ebp)
0860f3a1 +0x05f:  jmp    0860f414 <+0xd2>
0860f3a3 +0x061:  movl   $0x4,-0x10(%ebp)
0860f3aa +0x068:  movl   $0x1,0x18(%ebp)
0860f3b1 +0x06f:  jmp    0860f414 <+0xd2>
0860f3b3 +0x071:  movl   $0x5,-0x10(%ebp)
0860f3ba +0x078:  movl   $0x1,0x18(%ebp)
0860f3c1 +0x07f:  jmp    0860f414 <+0xd2>
0860f3c3 +0x081:  movl   $0x6,-0x10(%ebp)
0860f3ca +0x088:  movl   $0x1,0x18(%ebp)
0860f3d1 +0x08f:  nop
0860f3d2 +0x090:  jmp    0860f414 <+0xd2>
0860f3d4 +0x092:  mov    0xc(%ebp),%eax
0860f3d7 +0x095:  mov    %eax,0x14(%esp)
0860f3db +0x099:  movl   $"name(%d), 존재하지 않는 아이템 등급",0x10(%esp)
0860f3e3 +0x0a1:  movl   $0x5d5,0xc(%esp)
0860f3eb +0x0a9:  movl   $&_ZZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccjE19__PRETTY_FUNCTION__,0x8(%esp)
0860f3f3 +0x0b1:  movl   $"Statistics.cpp",0x4(%esp)
0860f3fb +0x0b9:  movl   $0x1,(%esp)
0860f402 +0x0c0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0860f407 +0x0c5:  mov    $0x0,%eax
0860f40c +0x0ca:  jmp    0860f44b <+0x109>
0860f40e +0x0cc:  mov    0xc(%ebp),%eax
0860f411 +0x0cf:  mov    %eax,-0x10(%ebp)
0860f414 +0x0d2:  mov    0x18(%ebp),%eax
0860f417 +0x0d5:  mov    %eax,-0xc(%ebp)
0860f41a +0x0d8:  lea    -0x1d(%ebp),%ebx
0860f41d +0x0db:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0860f422 +0x0e0:  movl   $0x0,0x4(%esp)
0860f42a +0x0e8:  mov    %eax,(%esp)
0860f42d +0x0eb:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860f432 +0x0f0:  movl   $0x15,0x8(%esp)
0860f43a +0x0f8:  mov    %ebx,0x4(%esp)
0860f43e +0x0fc:  mov    %eax,(%esp)
0860f441 +0x0ff:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860f446 +0x104:  mov    $0x1,%eax
0860f44b +0x109:  add    $0x54,%esp
0860f44e +0x10c:  pop    %ebx
0860f44f +0x10d:  pop    %ebp
0860f450 +0x10e:  ret
```

## 反编译 C

```c
// CDeathTowerValueStatistic::SendDeathTowerValueStatistic @ 0x860f342

/* CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char,
   char, unsigned int) */

undefined4 __thiscall
CDeathTowerValueStatistic::SendDeathTowerValueStatistic
          (undefined4 this,int param_2,undefined1 param_3,char param_4,int param_5)

{
  CStatisticServerProxy *this_00;
  Packet_DeathTower_Statistic_Value local_21 [10];
  undefined1 local_17;
  short local_16;
  int local_14;
  int local_10;
  
  Packet_DeathTower_Statistic_Value::Packet_DeathTower_Statistic_Value(local_21);
  local_16 = (short)param_4;
  local_17 = param_3;
  if (param_2 == 10) {
    if (param_5 == 1) {
      local_14 = 4;
      param_5 = 1;
    }
    else if (param_5 == 0) {
      local_14 = 3;
      param_5 = 1;
    }
    else if (param_5 == 2) {
      local_14 = 5;
      param_5 = 1;
    }
    else {
      if (param_5 != 3) {
        LogManager::logFormat
                  (1,"Statistics.cpp",
                   "bool CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)"
                   ,0x5d5,&DAT_08ce0390,10);
        return 0;
      }
      local_14 = 6;
      param_5 = 1;
    }
  }
  else {
    local_14 = param_2;
  }
  local_10 = param_5;
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_21,0x15);
  return 1;
}
```

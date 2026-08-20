# sendCubeStatistic

`_ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD`

`CCubeStatistic::sendCubeStatistic(int, int, CUser*, CUBE_STATISTIC_FIELD)`

| 类 | 地址 |
|---|---|
| `CCubeStatistic` | `0x0860e0d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e0d8  _ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD
#           CCubeStatistic::sendCubeStatistic(int, int, CUser*, CUBE_STATISTIC_FIELD)
# range [0x0860e0d8, 0x0860e15a]
0860e0d8 +0x00:  push   %ebp
0860e0d9 +0x01:  mov    %esp,%ebp
0860e0db +0x03:  push   %ebx
0860e0dc +0x04:  sub    $0x34,%esp
0860e0df +0x07:  lea    -0x1f(%ebp),%eax
0860e0e2 +0x0a:  mov    %eax,(%esp)
0860e0e5 +0x0d:  call   0861002e <_GLOBAL__I__ZN10StatisticsC2Ev+0xac>  ; global constructors keyed to Statistics::Statistics()+0xac
0860e0ea +0x12:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0860e0ef +0x17:  mov    %eax,(%esp)
0860e0f2 +0x1a:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0860e0f7 +0x1f:  mov    %ax,-0x15(%ebp)
0860e0fb +0x23:  mov    0x14(%ebp),%eax
0860e0fe +0x26:  mov    %eax,(%esp)
0860e101 +0x29:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860e106 +0x2e:  mov    %ax,-0x13(%ebp)
0860e10a +0x32:  mov    0xc(%ebp),%eax
0860e10d +0x35:  mov    %eax,-0x11(%ebp)
0860e110 +0x38:  mov    0x10(%ebp),%eax
0860e113 +0x3b:  mov    %eax,-0xd(%ebp)
0860e116 +0x3e:  mov    0x18(%ebp),%eax
0860e119 +0x41:  mov    %al,-0x9(%ebp)
0860e11c +0x44:  lea    -0x1f(%ebp),%ebx
0860e11f +0x47:  mov    0x14(%ebp),%eax
0860e122 +0x4a:  mov    %eax,(%esp)
0860e125 +0x4d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0860e12a +0x52:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0860e130 +0x58:  mov    %eax,0x4(%esp)
0860e134 +0x5c:  mov    %edx,(%esp)
0860e137 +0x5f:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860e13c +0x64:  movl   $0x17,0x8(%esp)
0860e144 +0x6c:  mov    %ebx,0x4(%esp)
0860e148 +0x70:  mov    %eax,(%esp)
0860e14b +0x73:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860e150 +0x78:  mov    $0x1,%eax
0860e155 +0x7d:  add    $0x34,%esp
0860e158 +0x80:  pop    %ebx
0860e159 +0x81:  pop    %ebp
0860e15a +0x82:  ret
```

## 反编译 C

```c
// CCubeStatistic::sendCubeStatistic @ 0x860e0d8

/* CCubeStatistic::sendCubeStatistic(int, int, CUser*, CUBE_STATISTIC_FIELD) */

undefined4 __thiscall
CCubeStatistic::sendCubeStatistic
          (undefined4 this,undefined4 param_1,undefined4 param_2,CUserCharacInfo *param_3,
          undefined1 param_5)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  CStatisticServerProxy *this_01;
  Packet_Cube_Statistic local_23 [10];
  undefined2 local_19;
  undefined2 local_17;
  undefined4 local_15;
  undefined4 local_11;
  undefined1 local_d;
  
  Packet_Cube_Statistic::Packet_Cube_Statistic(local_23);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_19 = CEnvironment::get_channel_no(this_00);
  local_17 = CUserCharacInfo::get_charac_level(param_3);
  local_15 = param_1;
  local_11 = param_2;
  local_d = param_5;
  uVar1 = CUser::GetServerGroup((CUser *)param_3);
  this_01 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_01,(char *)local_23,0x17);
  return 1;
}
```

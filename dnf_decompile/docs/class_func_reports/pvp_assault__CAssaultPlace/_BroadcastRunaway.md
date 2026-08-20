# _BroadcastRunaway

`_ZN11pvp_assault13CAssaultPlace17_BroadcastRunawayEP5CUseri`

`pvp_assault::CAssaultPlace::_BroadcastRunaway(CUser*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eab7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eab7a  _ZN11pvp_assault13CAssaultPlace17_BroadcastRunawayEP5CUseri
#           pvp_assault::CAssaultPlace::_BroadcastRunaway(CUser*, int)
# range [0x082eab7a, 0x082eacf3]
082eab7a +0x000:  push   %ebp
082eab7b +0x001:  mov    %esp,%ebp
082eab7d +0x003:  push   %edi
082eab7e +0x004:  push   %esi
082eab7f +0x005:  push   %ebx
082eab80 +0x006:  sub    $0x53c,%esp
082eab86 +0x00c:  lea    -0x52a(%ebp),%edx
082eab8c +0x012:  mov    $0x400,%ebx
082eab91 +0x017:  mov    $0x0,%eax
082eab96 +0x01c:  mov    %edx,%ecx
082eab98 +0x01e:  and    $0x2,%ecx
082eab9b +0x021:  test   %ecx,%ecx
082eab9d +0x023:  je     082eaba8 <+0x2e>
082eab9f +0x025:  mov    %ax,(%edx)
082eaba2 +0x028:  add    $0x2,%edx
082eaba5 +0x02b:  sub    $0x2,%ebx
082eaba8 +0x02e:  mov    %ebx,%ecx
082eabaa +0x030:  shr    $0x2,%ecx
082eabad +0x033:  mov    %edx,%edi
082eabaf +0x035:  rep stos %eax,%es:(%edi)
082eabb1 +0x037:  mov    %edi,%edx
082eabb3 +0x039:  mov    %ebx,%ecx
082eabb5 +0x03b:  and    $0x2,%ecx
082eabb8 +0x03e:  test   %ecx,%ecx
082eabba +0x040:  je     082eabc2 <+0x48>
082eabbc +0x042:  mov    %ax,(%edx)
082eabbf +0x045:  add    $0x2,%edx
082eabc2 +0x048:  mov    %ebx,%ecx
082eabc4 +0x04a:  and    $0x1,%ecx
082eabc7 +0x04d:  test   %ecx,%ecx
082eabc9 +0x04f:  je     082eabd0 <+0x56>
082eabcb +0x051:  mov    %al,(%edx)
082eabcd +0x053:  add    $0x1,%edx
082eabd0 +0x056:  mov    0x10(%ebp),%eax
082eabd3 +0x059:  mov    %eax,0x4(%esp)
082eabd7 +0x05d:  mov    0x8(%ebp),%eax
082eabda +0x060:  mov    %eax,(%esp)
082eabdd +0x063:  call   082eb3ba <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi>  ; pvp_assault::CAssaultPlace::GetAnotherTeamCharacName(int)
082eabe2 +0x068:  mov    %eax,%esi
082eabe4 +0x06a:  mov    0xc(%ebp),%eax
082eabe7 +0x06d:  mov    %eax,(%esp)
082eabea +0x070:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082eabef +0x075:  mov    %eax,%ebx
082eabf1 +0x077:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082eabf6 +0x07c:  add    $0x68,%eax
082eabf9 +0x07f:  mov    %eax,(%esp)
082eabfc +0x082:  call   082f03f8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x17c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x17c
082eac01 +0x087:  mov    %esi,0xc(%esp)
082eac05 +0x08b:  mov    %ebx,0x8(%esp)
082eac09 +0x08f:  mov    %eax,0x4(%esp)
082eac0d +0x093:  lea    -0x52a(%ebp),%eax
082eac13 +0x099:  mov    %eax,(%esp)
082eac16 +0x09c:  call   0807e440 <_init+0xd38>
082eac1b +0x0a1:  lea    -0x12a(%ebp),%eax
082eac21 +0x0a7:  mov    %eax,(%esp)
082eac24 +0x0aa:  call   082f0780 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x504>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x504
082eac29 +0x0af:  movl   $0x0,-0x120(%ebp)
082eac33 +0x0b9:  lea    -0x52a(%ebp),%eax
082eac39 +0x0bf:  mov    %eax,(%esp)
082eac3c +0x0c2:  call   0807e3b0 <_init+0xca8>
082eac41 +0x0c7:  mov    %al,-0x11c(%ebp)
082eac47 +0x0cd:  movl   $0xff,0x8(%esp)
082eac4f +0x0d5:  movl   $0x0,0x4(%esp)
082eac57 +0x0dd:  lea    -0x12a(%ebp),%eax
082eac5d +0x0e3:  add    $0xf,%eax
082eac60 +0x0e6:  mov    %eax,(%esp)
082eac63 +0x0e9:  call   0807dcc0 <_init+0x5b8>
082eac68 +0x0ee:  movzbl -0x11c(%ebp),%eax
082eac6f +0x0f5:  movzbl %al,%eax
082eac72 +0x0f8:  mov    %eax,0x8(%esp)
082eac76 +0x0fc:  lea    -0x52a(%ebp),%eax
082eac7c +0x102:  mov    %eax,0x4(%esp)
082eac80 +0x106:  lea    -0x12a(%ebp),%eax
082eac86 +0x10c:  add    $0xf,%eax
082eac89 +0x10f:  mov    %eax,(%esp)
082eac8c +0x112:  call   0807d8d0 <_init+0x1c8>
082eac91 +0x117:  movzbl -0x11c(%ebp),%eax
082eac98 +0x11e:  movzbl %al,%eax
082eac9b +0x121:  add    $0xf,%eax
082eac9e +0x124:  mov    %ax,-0x128(%ebp)
082eaca5 +0x12b:  movzwl -0x128(%ebp),%eax
082eacac +0x132:  movzwl %ax,%eax
082eacaf +0x135:  mov    %eax,-0x1c(%ebp)
082eacb2 +0x138:  lea    -0x12a(%ebp),%ebx
082eacb8 +0x13e:  mov    0xc(%ebp),%eax
082eacbb +0x141:  mov    %eax,(%esp)
082eacbe +0x144:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
082eacc3 +0x149:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
082eacc9 +0x14f:  mov    %eax,0x4(%esp)
082eaccd +0x153:  mov    %edx,(%esp)
082eacd0 +0x156:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
082eacd5 +0x15b:  mov    -0x1c(%ebp),%edx
082eacd8 +0x15e:  mov    %edx,0x8(%esp)
082eacdc +0x162:  mov    %ebx,0x4(%esp)
082eace0 +0x166:  mov    %eax,(%esp)
082eace3 +0x169:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
082eace8 +0x16e:  add    $0x53c,%esp
082eacee +0x174:  pop    %ebx
082eacef +0x175:  pop    %esi
082eacf0 +0x176:  pop    %edi
082eacf1 +0x177:  pop    %ebp
082eacf2 +0x178:  ret
082eacf3 +0x179:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_BroadcastRunaway @ 0x82eab7a

/* WARNING: Removing unreachable block (ram,0x082eabcb) */
/* pvp_assault::CAssaultPlace::_BroadcastRunaway(CUser*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_BroadcastRunaway(CAssaultPlace *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  CMonitorServerProxy *this_00;
  uint uVar6;
  bool bVar7;
  char local_52e [1024];
  Packet_Broadcast_Msg local_12e [2];
  ushort local_12c;
  undefined4 local_124;
  byte local_120;
  char acStack_11f [255];
  uint local_20;
  
  pcVar4 = local_52e;
  uVar6 = 0x400;
  bVar7 = ((uint)pcVar4 & 2) != 0;
  if (bVar7) {
    local_52e[0] = '\0';
    local_52e[1] = '\0';
    pcVar4 = local_52e + 2;
    uVar6 = 0x3fe;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if (bVar7) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
  }
  uVar1 = GetAnotherTeamCharacName(this,param_2);
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  iVar3 = G_CDataManager();
  pcVar4 = (char *)ServerParameterScript::getAssaultUserRunawayNotice
                             ((ServerParameterScript *)(iVar3 + 0x68));
  sprintf(local_52e,pcVar4,uVar2,uVar1);
  Packet_Broadcast_Msg::Packet_Broadcast_Msg(local_12e);
  local_124 = 0;
  sVar5 = strlen(local_52e);
  local_120 = (byte)sVar5;
  memset(acStack_11f,0,0xff);
  strncpy(acStack_11f,local_52e,(uint)local_120);
  local_12c = local_120 + 0xf;
  local_20 = (uint)local_12c;
  uVar1 = CUser::GetServerGroup(param_1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar1);
  CMonitorServerProxy::SendPacket(this_00,(char *)local_12e,local_20);
  return;
}
```

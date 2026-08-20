# ActiveFatigueBattery_NotEndLevel

`_ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser`

`CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel(CUser*)`

| 类 | 地址 |
|---|---|
| `CFatigueBatteryHandle` | `0x084a829e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a829e  _ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser
#           CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel(CUser*)
# range [0x084a829e, 0x084a83d9]
084a829e +0x000:  push   %ebp
084a829f +0x001:  mov    %esp,%ebp
084a82a1 +0x003:  push   %ebx
084a82a2 +0x004:  sub    $0x54,%esp
084a82a5 +0x007:  movl   $0x0,-0x20(%ebp)
084a82ac +0x00e:  mov    0xc(%ebp),%eax
084a82af +0x011:  mov    %eax,(%esp)
084a82b2 +0x014:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084a82b7 +0x019:  cwtl
084a82b8 +0x01a:  mov    %eax,-0x1c(%ebp)
084a82bb +0x01d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a82c0 +0x022:  add    $0x68,%eax
084a82c3 +0x025:  mov    %eax,-0x18(%ebp)
084a82c6 +0x028:  mov    -0x18(%ebp),%eax
084a82c9 +0x02b:  movzwl 0x768(%eax),%eax
084a82d0 +0x032:  movzwl %ax,%eax
084a82d3 +0x035:  cmp    -0x1c(%ebp),%eax
084a82d6 +0x038:  jg     084a83d0 <+0x132>
084a82dc +0x03e:  mov    -0x18(%ebp),%eax
084a82df +0x041:  movzwl 0x764(%eax),%eax
084a82e6 +0x048:  test   %ax,%ax
084a82e9 +0x04b:  jne    084a82f3 <+0x55>
084a82eb +0x04d:  mov    -0x20(%ebp),%eax
084a82ee +0x050:  jmp    084a83d3 <+0x135>
084a82f3 +0x055:  mov    -0x18(%ebp),%eax
084a82f6 +0x058:  movzwl 0x766(%eax),%eax
084a82fd +0x05f:  movzwl %ax,%eax
084a8300 +0x062:  imul   -0x1c(%ebp),%eax
084a8304 +0x066:  mov    -0x18(%ebp),%edx
084a8307 +0x069:  movzwl 0x764(%edx),%edx
084a830e +0x070:  movzwl %dx,%edx
084a8311 +0x073:  mov    %edx,-0x3c(%ebp)
084a8314 +0x076:  mov    %eax,%edx
084a8316 +0x078:  sar    $0x1f,%edx
084a8319 +0x07b:  idivl  -0x3c(%ebp)
084a831c +0x07e:  mov    %eax,-0x14(%ebp)
084a831f +0x081:  mov    -0x1c(%ebp),%eax
084a8322 +0x084:  mov    %eax,-0x20(%ebp)
084a8325 +0x087:  mov    0xc(%ebp),%eax
084a8328 +0x08a:  mov    %eax,(%esp)
084a832b +0x08d:  call   084a852c <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x92>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x92
084a8330 +0x092:  movzwl %ax,%eax
084a8333 +0x095:  add    -0x14(%ebp),%eax
084a8336 +0x098:  mov    %eax,-0x10(%ebp)
084a8339 +0x09b:  mov    0xc(%ebp),%eax
084a833c +0x09e:  mov    %eax,(%esp)
084a833f +0x0a1:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084a8344 +0x0a6:  mov    -0x18(%ebp),%edx
084a8347 +0x0a9:  add    $0x5c0,%edx
084a834d +0x0af:  mov    %eax,0x4(%esp)
084a8351 +0x0b3:  mov    %edx,(%esp)
084a8354 +0x0b6:  call   084a84b6 <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x1c>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x1c
084a8359 +0x0bb:  mov    %ax,-0xa(%ebp)
084a835d +0x0bf:  movzwl -0xa(%ebp),%eax
084a8361 +0x0c3:  cmp    -0x10(%ebp),%eax
084a8364 +0x0c6:  jge    084a836d <+0xcf>
084a8366 +0x0c8:  movzwl -0xa(%ebp),%eax
084a836a +0x0cc:  mov    %eax,-0x10(%ebp)
084a836d +0x0cf:  lea    -0x31(%ebp),%eax
084a8370 +0x0d2:  mov    %eax,(%esp)
084a8373 +0x0d5:  call   084a84ee <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x54>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x54
084a8378 +0x0da:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084a837d +0x0df:  mov    %eax,(%esp)
084a8380 +0x0e2:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
084a8385 +0x0e7:  mov    %al,-0x27(%ebp)
084a8388 +0x0ea:  mov    -0x10(%ebp),%eax
084a838b +0x0ed:  mov    %ax,-0x22(%ebp)
084a838f +0x0f1:  lea    -0x31(%ebp),%ebx
084a8392 +0x0f4:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
084a8397 +0x0f9:  movl   $0x0,0x4(%esp)
084a839f +0x101:  mov    %eax,(%esp)
084a83a2 +0x104:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
084a83a7 +0x109:  movl   $0x11,0x8(%esp)
084a83af +0x111:  mov    %ebx,0x4(%esp)
084a83b3 +0x115:  mov    %eax,(%esp)
084a83b6 +0x118:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
084a83bb +0x11d:  mov    -0x10(%ebp),%eax
084a83be +0x120:  movzwl %ax,%edx
084a83c1 +0x123:  mov    0xc(%ebp),%eax
084a83c4 +0x126:  mov    %edx,0x4(%esp)
084a83c8 +0x12a:  mov    %eax,(%esp)
084a83cb +0x12d:  call   084a854c <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xb2>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xb2
084a83d0 +0x132:  mov    -0x20(%ebp),%eax
084a83d3 +0x135:  add    $0x54,%esp
084a83d6 +0x138:  pop    %ebx
084a83d7 +0x139:  pop    %ebp
084a83d8 +0x13a:  ret
084a83d9 +0x13b:  nop
```

## 反编译 C

```c
// CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel @ 0x84a829e

/* CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel(CUser*) */

int __thiscall
CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel(CFatigueBatteryHandle *this,CUser *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  CEnvironment *this_00;
  CStatisticServerProxy *this_01;
  Packet_Fatigue_Battery_Money_Statistic local_35 [10];
  undefined1 local_2b;
  undefined2 local_26;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  ushort local_e;
  
  local_24 = 0;
  sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
  local_20 = (int)sVar1;
  iVar2 = G_CDataManager();
  local_1c = iVar2 + 0x68;
  if (((int)(uint)*(ushort *)(iVar2 + 2000) <= local_20) && (*(short *)(iVar2 + 0x7cc) != 0)) {
    local_18 = (int)((uint)*(ushort *)(iVar2 + 0x7ce) * local_20) /
               (int)(uint)*(ushort *)(iVar2 + 0x7cc);
    local_24 = local_20;
    uVar3 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff((CUserCharacInfo *)param_1);
    local_14 = (uVar3 & 0xffff) + local_18;
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_e = stFatigueBatteryConstantTable_t::getLimitGrownupBuffCntFatigueBattery
                        ((stFatigueBatteryConstantTable_t *)(local_1c + 0x5c0),iVar2);
    if ((int)(uint)local_e < (int)local_14) {
      local_14 = (uint)local_e;
    }
    Packet_Fatigue_Battery_Money_Statistic::Packet_Fatigue_Battery_Money_Statistic(local_35);
    this_00 = (CEnvironment *)G_CEnvironment();
    local_2b = CEnvironment::get_server_group(this_00);
    local_26 = (undefined2)local_14;
    this_01 = (CStatisticServerProxy *)
              CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                        (GlobalData::s_statistic_proxy_mgr,0);
    CStatisticServerProxy::SendPacket(this_01,(char *)local_35,0x11);
    CUserCharacInfo::setCurCharacFatigueGrownUpBuff((CUserCharacInfo *)param_1,(ushort)local_14);
  }
  return local_24;
}
```

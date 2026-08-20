# process

`_ZN26Dispatcher_LimitNpcBuyItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_LimitNpcBuyItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LimitNpcBuyItem` | `0x081e0ff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e0ff8  _ZN26Dispatcher_LimitNpcBuyItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_LimitNpcBuyItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e0ff8, 0x081e10ff]
081e0ff8 +0x000:  push   %ebp
081e0ff9 +0x001:  mov    %esp,%ebp
081e0ffb +0x003:  push   %ebx
081e0ffc +0x004:  sub    $0x44,%esp
081e0fff +0x007:  mov    0x14(%ebp),%eax
081e1002 +0x00a:  mov    %eax,-0x10(%ebp)
081e1005 +0x00d:  mov    0x10(%ebp),%eax
081e1008 +0x010:  mov    %eax,0x8(%esp)
081e100c +0x014:  mov    0xc(%ebp),%eax
081e100f +0x017:  mov    %eax,0x4(%esp)
081e1013 +0x01b:  mov    0x8(%ebp),%eax
081e1016 +0x01e:  mov    %eax,(%esp)
081e1019 +0x021:  call   081e1172 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_LimitNpcBuyItem::check_error(CUser*, MSG_BASE&)
081e101e +0x026:  mov    -0x10(%ebp),%edx
081e1021 +0x029:  mov    %eax,0x4(%edx)
081e1024 +0x02c:  mov    -0x10(%ebp),%eax
081e1027 +0x02f:  mov    0x4(%eax),%eax
081e102a +0x032:  test   %eax,%eax
081e102c +0x034:  jle    081e1038 <+0x40>
081e102e +0x036:  mov    $0x0,%eax
081e1033 +0x03b:  jmp    081e10f9 <+0x101>
081e1038 +0x040:  mov    -0x10(%ebp),%eax
081e103b +0x043:  mov    0x4(%eax),%eax
081e103e +0x046:  test   %eax,%eax
081e1040 +0x048:  jns    081e106d <+0x75>
081e1042 +0x04a:  mov    -0x10(%ebp),%eax
081e1045 +0x04d:  mov    0x4(%eax),%eax
081e1048 +0x050:  movl   $0x0,0xc(%esp)
081e1050 +0x058:  mov    %eax,0x8(%esp)
081e1054 +0x05c:  movl   $&_ZZN26Dispatcher_LimitNpcBuyItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e105c +0x064:  movl   $0x55ae,(%esp)
081e1063 +0x06b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e1068 +0x070:  jmp    081e10f9 <+0x101>
081e106d +0x075:  mov    0x10(%ebp),%eax
081e1070 +0x078:  mov    %eax,-0xc(%ebp)
081e1073 +0x07b:  lea    -0x36(%ebp),%eax
081e1076 +0x07e:  mov    %eax,(%esp)
081e1079 +0x081:  call   0822c4d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1b7a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1b7a
081e107e +0x086:  mov    0xc(%ebp),%eax
081e1081 +0x089:  mov    %eax,(%esp)
081e1084 +0x08c:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081e1089 +0x091:  mov    %eax,-0x2c(%ebp)
081e108c +0x094:  mov    0xc(%ebp),%eax
081e108f +0x097:  mov    %eax,(%esp)
081e1092 +0x09a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e1097 +0x09f:  mov    %eax,-0x28(%ebp)
081e109a +0x0a2:  movl   $0xffffffff,0x4(%esp)
081e10a2 +0x0aa:  mov    0xc(%ebp),%eax
081e10a5 +0x0ad:  mov    %eax,(%esp)
081e10a8 +0x0b0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e10ad +0x0b5:  mov    %eax,-0x24(%ebp)
081e10b0 +0x0b8:  mov    -0xc(%ebp),%eax
081e10b3 +0x0bb:  mov    0xd(%eax),%eax
081e10b6 +0x0be:  mov    %eax,-0x20(%ebp)
081e10b9 +0x0c1:  movl   $0x1,-0x1c(%ebp)
081e10c0 +0x0c8:  lea    -0x36(%ebp),%ebx
081e10c3 +0x0cb:  mov    0xc(%ebp),%eax
081e10c6 +0x0ce:  mov    %eax,(%esp)
081e10c9 +0x0d1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081e10ce +0x0d6:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081e10d4 +0x0dc:  mov    %eax,0x4(%esp)
081e10d8 +0x0e0:  mov    %edx,(%esp)
081e10db +0x0e3:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081e10e0 +0x0e8:  movl   $0x26,0x8(%esp)
081e10e8 +0x0f0:  mov    %ebx,0x4(%esp)
081e10ec +0x0f4:  mov    %eax,(%esp)
081e10ef +0x0f7:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081e10f4 +0x0fc:  mov    $0x0,%eax
081e10f9 +0x101:  add    $0x44,%esp
081e10fc +0x104:  pop    %ebx
081e10fd +0x105:  pop    %ebp
081e10fe +0x106:  ret
081e10ff +0x107:  nop
```

## 反编译 C

```c
// Dispatcher_LimitNpcBuyItem::process @ 0x81e0ff8

/* Dispatcher_LimitNpcBuyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_LimitNpcBuyItem::process
          (Dispatcher_LimitNpcBuyItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  LimitNpcBuyItemInfo local_3a [10];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar1 = LineFunc(0x55ae,
                       "virtual int Dispatcher_LimitNpcBuyItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),0);
    }
    else {
      local_10 = param_2;
      LimitNpcBuyItemInfo::LimitNpcBuyItemInfo(local_3a);
      local_30 = CUser::GetUID(param_1);
      local_2c = CUser::get_acc_id(param_1);
      local_28 = CUser::get_charac_no(param_1,-1);
      local_24 = *(undefined4 *)(local_10 + 0xd);
      local_20 = 1;
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_3a,0x26);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

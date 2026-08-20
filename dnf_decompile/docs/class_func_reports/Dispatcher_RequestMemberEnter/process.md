# process

`_ZN29Dispatcher_RequestMemberEnter7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestMemberEnter::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestMemberEnter` | `0x081cb874` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb874  _ZN29Dispatcher_RequestMemberEnter7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestMemberEnter::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cb874, 0x081cb97f]
081cb874 +0x000:  push   %ebp
081cb875 +0x001:  mov    %esp,%ebp
081cb877 +0x003:  push   %ebx
081cb878 +0x004:  sub    $0x54,%esp
081cb87b +0x007:  mov    0x14(%ebp),%eax
081cb87e +0x00a:  mov    %eax,-0x10(%ebp)
081cb881 +0x00d:  mov    0x10(%ebp),%eax
081cb884 +0x010:  mov    %eax,0x8(%esp)
081cb888 +0x014:  mov    0xc(%ebp),%eax
081cb88b +0x017:  mov    %eax,0x4(%esp)
081cb88f +0x01b:  mov    0x8(%ebp),%eax
081cb892 +0x01e:  mov    %eax,(%esp)
081cb895 +0x021:  call   081cb82a <_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RequestMemberEnter::check_error(CUser*, MSG_BASE&)
081cb89a +0x026:  mov    %eax,%edx
081cb89c +0x028:  mov    -0x10(%ebp),%eax
081cb89f +0x02b:  mov    %edx,0x4(%eax)
081cb8a2 +0x02e:  mov    -0x10(%ebp),%eax
081cb8a5 +0x031:  mov    0x4(%eax),%eax
081cb8a8 +0x034:  test   %eax,%eax
081cb8aa +0x036:  jle    081cb8b6 <+0x42>
081cb8ac +0x038:  mov    $0x0,%eax
081cb8b1 +0x03d:  jmp    081cb97a <+0x106>
081cb8b6 +0x042:  mov    -0x10(%ebp),%eax
081cb8b9 +0x045:  mov    0x4(%eax),%eax
081cb8bc +0x048:  test   %eax,%eax
081cb8be +0x04a:  jns    081cb8f2 <+0x7e>
081cb8c0 +0x04c:  mov    0xc(%ebp),%eax
081cb8c3 +0x04f:  mov    %eax,(%esp)
081cb8c6 +0x052:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cb8cb +0x057:  mov    -0x10(%ebp),%edx
081cb8ce +0x05a:  mov    0x4(%edx),%edx
081cb8d1 +0x05d:  mov    %eax,0xc(%esp)
081cb8d5 +0x061:  mov    %edx,0x8(%esp)
081cb8d9 +0x065:  movl   $&_ZZN29Dispatcher_RequestMemberEnter7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cb8e1 +0x06d:  movl   $0x2192,(%esp)
081cb8e8 +0x074:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb8ed +0x079:  jmp    081cb97a <+0x106>
081cb8f2 +0x07e:  mov    0x10(%ebp),%eax
081cb8f5 +0x081:  mov    %eax,-0xc(%ebp)
081cb8f8 +0x084:  lea    -0x40(%ebp),%eax
081cb8fb +0x087:  mov    %eax,(%esp)
081cb8fe +0x08a:  call   0822b9ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1078>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1078
081cb903 +0x08f:  mov    0xc(%ebp),%eax
081cb906 +0x092:  mov    %eax,(%esp)
081cb909 +0x095:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cb90e +0x09a:  mov    %eax,-0x36(%ebp)
081cb911 +0x09d:  mov    0xc(%ebp),%eax
081cb914 +0x0a0:  mov    %eax,(%esp)
081cb917 +0x0a3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cb91c +0x0a8:  mov    %eax,-0x32(%ebp)
081cb91f +0x0ab:  mov    -0xc(%ebp),%eax
081cb922 +0x0ae:  mov    0x10(%eax),%eax
081cb925 +0x0b1:  mov    -0xc(%ebp),%edx
081cb928 +0x0b4:  add    $0x14,%edx
081cb92b +0x0b7:  mov    %eax,0x8(%esp)
081cb92f +0x0bb:  mov    %edx,0x4(%esp)
081cb933 +0x0bf:  lea    -0x40(%ebp),%eax
081cb936 +0x0c2:  add    $0x12,%eax
081cb939 +0x0c5:  mov    %eax,(%esp)
081cb93c +0x0c8:  call   0807d8d0 <_init+0x1c8>
081cb941 +0x0cd:  lea    -0x40(%ebp),%ebx
081cb944 +0x0d0:  mov    0xc(%ebp),%eax
081cb947 +0x0d3:  mov    %eax,(%esp)
081cb94a +0x0d6:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cb94f +0x0db:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081cb955 +0x0e1:  mov    %eax,0x4(%esp)
081cb959 +0x0e5:  mov    %edx,(%esp)
081cb95c +0x0e8:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081cb961 +0x0ed:  movl   $0x30,0x8(%esp)
081cb969 +0x0f5:  mov    %ebx,0x4(%esp)
081cb96d +0x0f9:  mov    %eax,(%esp)
081cb970 +0x0fc:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
081cb975 +0x101:  mov    $0x0,%eax
081cb97a +0x106:  add    $0x54,%esp
081cb97d +0x109:  pop    %ebx
081cb97e +0x10a:  pop    %ebp
081cb97f +0x10b:  ret
```

## 反编译 C

```c
// Dispatcher_RequestMemberEnter::process @ 0x81cb874

/* Dispatcher_RequestMemberEnter::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestMemberEnter::process
          (Dispatcher_RequestMemberEnter *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Request_Member_Enter local_44 [10];
  undefined4 local_3a;
  undefined4 local_36;
  char acStack_32 [30];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2192,
                       "virtual int Dispatcher_RequestMemberEnter::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Monitor_Request_Member_Enter::Packet_Monitor_Request_Member_Enter(local_44);
      local_3a = CUser::GetUID(param_1);
      local_36 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      strncpy(acStack_32,(char *)(local_10 + 0x14),*(size_t *)(local_10 + 0x10));
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_44,0x30);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

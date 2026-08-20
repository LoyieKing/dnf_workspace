# process

`_ZN23DisPatcher_RemoveFriend7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_RemoveFriend::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RemoveFriend` | `0x081cb618` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb618  _ZN23DisPatcher_RemoveFriend7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_RemoveFriend::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cb618, 0x081cb737]
081cb618 +0x000:  push   %ebp
081cb619 +0x001:  mov    %esp,%ebp
081cb61b +0x003:  push   %esi
081cb61c +0x004:  push   %ebx
081cb61d +0x005:  sub    $0x50,%esp
081cb620 +0x008:  mov    0x14(%ebp),%eax
081cb623 +0x00b:  mov    %eax,-0x14(%ebp)
081cb626 +0x00e:  mov    0x10(%ebp),%eax
081cb629 +0x011:  mov    %eax,0x8(%esp)
081cb62d +0x015:  mov    0xc(%ebp),%eax
081cb630 +0x018:  mov    %eax,0x4(%esp)
081cb634 +0x01c:  mov    0x8(%ebp),%eax
081cb637 +0x01f:  mov    %eax,(%esp)
081cb63a +0x022:  call   081cb5d8 <_ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_RemoveFriend::check_error(CUser*, MSG_BASE&)
081cb63f +0x027:  mov    %eax,%edx
081cb641 +0x029:  mov    -0x14(%ebp),%eax
081cb644 +0x02c:  mov    %edx,0x4(%eax)
081cb647 +0x02f:  mov    -0x14(%ebp),%eax
081cb64a +0x032:  mov    0x4(%eax),%eax
081cb64d +0x035:  test   %eax,%eax
081cb64f +0x037:  jle    081cb65b <+0x43>
081cb651 +0x039:  mov    $0x0,%eax
081cb656 +0x03e:  jmp    081cb730 <+0x118>
081cb65b +0x043:  mov    -0x14(%ebp),%eax
081cb65e +0x046:  mov    0x4(%eax),%eax
081cb661 +0x049:  test   %eax,%eax
081cb663 +0x04b:  jns    081cb697 <+0x7f>
081cb665 +0x04d:  mov    0xc(%ebp),%eax
081cb668 +0x050:  mov    %eax,(%esp)
081cb66b +0x053:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cb670 +0x058:  mov    -0x14(%ebp),%edx
081cb673 +0x05b:  mov    0x4(%edx),%edx
081cb676 +0x05e:  mov    %eax,0xc(%esp)
081cb67a +0x062:  mov    %edx,0x8(%esp)
081cb67e +0x066:  movl   $&_ZZN23DisPatcher_RemoveFriend7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cb686 +0x06e:  movl   $0x2141,(%esp)
081cb68d +0x075:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb692 +0x07a:  jmp    081cb730 <+0x118>
081cb697 +0x07f:  mov    0x10(%ebp),%eax
081cb69a +0x082:  mov    %eax,-0x10(%ebp)
081cb69d +0x085:  lea    -0x44(%ebp),%eax
081cb6a0 +0x088:  mov    %eax,(%esp)
081cb6a3 +0x08b:  call   0822bcb2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x135c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x135c
081cb6a8 +0x090:  mov    0xc(%ebp),%eax
081cb6ab +0x093:  mov    %eax,(%esp)
081cb6ae +0x096:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cb6b3 +0x09b:  mov    %eax,-0x3a(%ebp)
081cb6b6 +0x09e:  mov    0xc(%ebp),%eax
081cb6b9 +0x0a1:  mov    %eax,(%esp)
081cb6bc +0x0a4:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cb6c1 +0x0a9:  mov    %eax,-0x36(%ebp)
081cb6c4 +0x0ac:  mov    -0x10(%ebp),%eax
081cb6c7 +0x0af:  add    $0x11,%eax
081cb6ca +0x0b2:  mov    %eax,(%esp)
081cb6cd +0x0b5:  call   0807e3b0 <_init+0xca8>
081cb6d2 +0x0ba:  mov    %eax,-0xc(%ebp)
081cb6d5 +0x0bd:  mov    -0xc(%ebp),%eax
081cb6d8 +0x0c0:  mov    -0x10(%ebp),%edx
081cb6db +0x0c3:  add    $0x11,%edx
081cb6de +0x0c6:  mov    %eax,0x8(%esp)
081cb6e2 +0x0ca:  mov    %edx,0x4(%esp)
081cb6e6 +0x0ce:  lea    -0x44(%ebp),%eax
081cb6e9 +0x0d1:  add    $0x12,%eax
081cb6ec +0x0d4:  mov    %eax,(%esp)
081cb6ef +0x0d7:  call   0807d8a0 <_init+0x198>
081cb6f4 +0x0dc:  movzwl -0x42(%ebp),%eax
081cb6f8 +0x0e0:  movzwl %ax,%esi
081cb6fb +0x0e3:  lea    -0x44(%ebp),%ebx
081cb6fe +0x0e6:  mov    0xc(%ebp),%eax
081cb701 +0x0e9:  mov    %eax,(%esp)
081cb704 +0x0ec:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cb709 +0x0f1:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081cb70f +0x0f7:  mov    %eax,0x4(%esp)
081cb713 +0x0fb:  mov    %edx,(%esp)
081cb716 +0x0fe:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081cb71b +0x103:  mov    %esi,0x8(%esp)
081cb71f +0x107:  mov    %ebx,0x4(%esp)
081cb723 +0x10b:  mov    %eax,(%esp)
081cb726 +0x10e:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081cb72b +0x113:  mov    $0x0,%eax
081cb730 +0x118:  add    $0x50,%esp
081cb733 +0x11b:  pop    %ebx
081cb734 +0x11c:  pop    %esi
081cb735 +0x11d:  pop    %ebp
081cb736 +0x11e:  ret
081cb737 +0x11f:  nop
```

## 反编译 C

```c
// DisPatcher_RemoveFriend::process @ 0x81cb618

/* DisPatcher_RemoveFriend::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_RemoveFriend::process
          (DisPatcher_RemoveFriend *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Del_Buddy local_48 [2];
  ushort local_46;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined1 auStack_36 [30];
  ParamBase *local_18;
  MSG_BASE *local_14;
  size_t local_10;
  
  local_18 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar1;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2141,
                       "virtual int DisPatcher_RemoveFriend::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_18 + 4),uVar2);
    }
    else {
      local_14 = param_2;
      Packet_Monitor_Del_Buddy::Packet_Monitor_Del_Buddy(local_48);
      local_3e = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_3a = CUser::GetUID(param_1);
      local_10 = strlen((char *)(local_14 + 0x11));
      memcpy(auStack_36,local_14 + 0x11,local_10);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_48,(uint)local_46);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

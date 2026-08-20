# dispatch_sig

`_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci`

`Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CheckAddFriend` | `0x084e8a42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8a42  _ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci
#           Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)
# range [0x084e8a42, 0x084e8bb9]
084e8a42 +0x000:  push   %ebp
084e8a43 +0x001:  mov    %esp,%ebp
084e8a45 +0x003:  push   %esi
084e8a46 +0x004:  push   %ebx
084e8a47 +0x005:  sub    $0x70,%esp
084e8a4a +0x008:  cmpl   $0x0,0xc(%ebp)
084e8a4e +0x00c:  je     084e8a56 <+0x14>
084e8a50 +0x00e:  cmpl   $0x0,0x10(%ebp)
084e8a54 +0x012:  jne    084e8a9e <+0x5c>
084e8a56 +0x014:  movl   $0x5,0xc(%esp)
084e8a5e +0x01c:  movl   $0x6d7b,0x8(%esp)
084e8a66 +0x024:  movl   $&_ZZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e8a6e +0x02c:  lea    -0x30(%ebp),%eax
084e8a71 +0x02f:  mov    %eax,(%esp)
084e8a74 +0x032:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e8a79 +0x037:  movl   $&_ZZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e8a81 +0x03f:  movl   $"[%s] pUser or p is null.",0x4(%esp)
084e8a89 +0x047:  lea    -0x30(%ebp),%eax
084e8a8c +0x04a:  mov    %eax,(%esp)
084e8a8f +0x04d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e8a94 +0x052:  mov    $0x6d7c,%eax
084e8a99 +0x057:  jmp    084e8bb3 <+0x171>
084e8a9e +0x05c:  mov    0x10(%ebp),%eax
084e8aa1 +0x05f:  mov    %eax,-0x10(%ebp)
084e8aa4 +0x062:  cmpl   $0x0,-0x10(%ebp)
084e8aa8 +0x066:  jne    084e8af2 <+0xb0>
084e8aaa +0x068:  movl   $0x5,0xc(%esp)
084e8ab2 +0x070:  movl   $0x6d82,0x8(%esp)
084e8aba +0x078:  movl   $&_ZZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e8ac2 +0x080:  lea    -0x20(%ebp),%eax
084e8ac5 +0x083:  mov    %eax,(%esp)
084e8ac8 +0x086:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e8acd +0x08b:  movl   $&_ZZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e8ad5 +0x093:  movl   $"[%s] internal data is null.",0x4(%esp)
084e8add +0x09b:  lea    -0x20(%ebp),%eax
084e8ae0 +0x09e:  mov    %eax,(%esp)
084e8ae3 +0x0a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e8ae8 +0x0a6:  mov    $0x6d83,%eax
084e8aed +0x0ab:  jmp    084e8bb3 <+0x171>
084e8af2 +0x0b0:  mov    -0x10(%ebp),%eax
084e8af5 +0x0b3:  mov    (%eax),%eax
084e8af7 +0x0b5:  test   %eax,%eax
084e8af9 +0x0b7:  jne    084e8b8f <+0x14d>
084e8aff +0x0bd:  lea    -0x60(%ebp),%eax
084e8b02 +0x0c0:  mov    %eax,(%esp)
084e8b05 +0x0c3:  call   084e9360 <_GLOBAL__I__Z7getUserj+0x312>  ; global constructors keyed to getUser(unsigned int)+0x312
084e8b0a +0x0c8:  mov    0xc(%ebp),%eax
084e8b0d +0x0cb:  mov    %eax,(%esp)
084e8b10 +0x0ce:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e8b15 +0x0d3:  mov    %eax,-0x56(%ebp)
084e8b18 +0x0d6:  mov    0xc(%ebp),%eax
084e8b1b +0x0d9:  mov    %eax,(%esp)
084e8b1e +0x0dc:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084e8b23 +0x0e1:  mov    %eax,-0x52(%ebp)
084e8b26 +0x0e4:  mov    -0x10(%ebp),%eax
084e8b29 +0x0e7:  add    $0x5,%eax
084e8b2c +0x0ea:  mov    %eax,(%esp)
084e8b2f +0x0ed:  call   0807e3b0 <_init+0xca8>
084e8b34 +0x0f2:  mov    %eax,-0xc(%ebp)
084e8b37 +0x0f5:  mov    -0xc(%ebp),%eax
084e8b3a +0x0f8:  mov    -0x10(%ebp),%edx
084e8b3d +0x0fb:  add    $0x5,%edx
084e8b40 +0x0fe:  mov    %eax,0x8(%esp)
084e8b44 +0x102:  mov    %edx,0x4(%esp)
084e8b48 +0x106:  lea    -0x60(%ebp),%eax
084e8b4b +0x109:  add    $0x12,%eax
084e8b4e +0x10c:  mov    %eax,(%esp)
084e8b51 +0x10f:  call   0807d8a0 <_init+0x198>
084e8b56 +0x114:  movzwl -0x5e(%ebp),%eax
084e8b5a +0x118:  movzwl %ax,%esi
084e8b5d +0x11b:  lea    -0x60(%ebp),%ebx
084e8b60 +0x11e:  mov    0xc(%ebp),%eax
084e8b63 +0x121:  mov    %eax,(%esp)
084e8b66 +0x124:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e8b6b +0x129:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084e8b71 +0x12f:  mov    %eax,0x4(%esp)
084e8b75 +0x133:  mov    %edx,(%esp)
084e8b78 +0x136:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e8b7d +0x13b:  mov    %esi,0x8(%esp)
084e8b81 +0x13f:  mov    %ebx,0x4(%esp)
084e8b85 +0x143:  mov    %eax,(%esp)
084e8b88 +0x146:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084e8b8d +0x14b:  jmp    084e8bae <+0x16c>
084e8b8f +0x14d:  mov    -0x10(%ebp),%eax
084e8b92 +0x150:  mov    (%eax),%eax
084e8b94 +0x152:  movzbl %al,%eax
084e8b97 +0x155:  mov    %eax,0x8(%esp)
084e8b9b +0x159:  movl   $0x3f,0x4(%esp)
084e8ba3 +0x161:  mov    0xc(%ebp),%eax
084e8ba6 +0x164:  mov    %eax,(%esp)
084e8ba9 +0x167:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e8bae +0x16c:  mov    $0x0,%eax
084e8bb3 +0x171:  add    $0x70,%esp
084e8bb6 +0x174:  pop    %ebx
084e8bb7 +0x175:  pop    %esi
084e8bb8 +0x176:  pop    %ebp
084e8bb9 +0x177:  ret
```

## 反编译 C

```c
// Inter_CheckAddFriend::dispatch_sig @ 0x84e8a42

/* Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CheckAddFriend::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CMonitorServerProxy *this;
  Packet_Monitor_Add_Buddy local_64 [2];
  ushort local_62;
  undefined4 local_5a;
  undefined4 local_56;
  undefined1 auStack_52 [30];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  size_t local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_34,"virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)"
                       ,0x6d7b,5);
    cMyTrace::operator()
              (local_34,"[%s] pUser or p is null.",
               "virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)");
    uVar1 = 0x6d7c;
  }
  else {
    local_14 = param_3;
    if (param_3 == 0) {
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)",0x6d82
                         ,5);
      cMyTrace::operator()
                (local_24,"[%s] internal data is null.",
                 "virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)");
      uVar1 = 0x6d83;
    }
    else {
      if (*(int *)param_3 == 0) {
        Packet_Monitor_Add_Buddy::Packet_Monitor_Add_Buddy(local_64);
        local_5a = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        local_56 = CUser::GetUID((CUser *)param_2);
        local_10 = strlen((char *)(local_14 + 5));
        memcpy(auStack_52,(void *)(local_14 + 5),local_10);
        uVar1 = CUser::GetServerGroup((CUser *)param_2);
        this = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar1);
        CMonitorServerProxy::SendPacket(this,(char *)local_64,(uint)local_62);
      }
      else {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x3f,*(uint *)param_3 & 0xff);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

# dispatch_sig

`_ZN18Inter_UpdateLogout12dispatch_sigEP5CUserPci`

`Inter_UpdateLogout::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpdateLogout` | `0x084ce548` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce548  _ZN18Inter_UpdateLogout12dispatch_sigEP5CUserPci
#           Inter_UpdateLogout::dispatch_sig(CUser*, char*, int)
# range [0x084ce548, 0x084ce5c3]
084ce548 +0x00:  push   %ebp
084ce549 +0x01:  mov    %esp,%ebp
084ce54b +0x03:  push   %ebx
084ce54c +0x04:  sub    $0x34,%esp
084ce54f +0x07:  mov    0x10(%ebp),%eax
084ce552 +0x0a:  mov    %eax,-0xc(%ebp)
084ce555 +0x0d:  mov    -0xc(%ebp),%eax
084ce558 +0x10:  mov    (%eax),%eax
084ce55a +0x12:  test   %eax,%eax
084ce55c +0x14:  jne    084ce565 <+0x1d>
084ce55e +0x16:  mov    $0x0,%eax
084ce563 +0x1b:  jmp    084ce5bd <+0x75>
084ce565 +0x1d:  lea    -0x1b(%ebp),%eax
084ce568 +0x20:  mov    %eax,(%esp)
084ce56b +0x23:  call   084e933c <_GLOBAL__I__Z7getUserj+0x2ee>  ; global constructors keyed to getUser(unsigned int)+0x2ee
084ce570 +0x28:  mov    -0xc(%ebp),%eax
084ce573 +0x2b:  mov    (%eax),%eax
084ce575 +0x2d:  mov    %eax,-0x11(%ebp)
084ce578 +0x30:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084ce57d +0x35:  mov    %eax,(%esp)
084ce580 +0x38:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084ce585 +0x3d:  mov    %al,-0xd(%ebp)
084ce588 +0x40:  lea    -0x1b(%ebp),%ebx
084ce58b +0x43:  mov    -0xc(%ebp),%eax
084ce58e +0x46:  mov    0xe(%eax),%eax
084ce591 +0x49:  mov    %eax,%edx
084ce593 +0x4b:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084ce598 +0x50:  mov    %edx,0x4(%esp)
084ce59c +0x54:  mov    %eax,(%esp)
084ce59f +0x57:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084ce5a4 +0x5c:  movl   $0xf,0x8(%esp)
084ce5ac +0x64:  mov    %ebx,0x4(%esp)
084ce5b0 +0x68:  mov    %eax,(%esp)
084ce5b3 +0x6b:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084ce5b8 +0x70:  mov    $0x0,%eax
084ce5bd +0x75:  add    $0x34,%esp
084ce5c0 +0x78:  pop    %ebx
084ce5c1 +0x79:  pop    %ebp
084ce5c2 +0x7a:  ret
084ce5c3 +0x7b:  nop
```

## 反编译 C

```c
// Inter_UpdateLogout::dispatch_sig @ 0x84ce548

/* Inter_UpdateLogout::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateLogout::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CEnvironment *this;
  CMonitorServerProxy *this_00;
  Packet_Monitor_UDP_Logout_Complete local_1f [10];
  undefined4 local_15;
  undefined1 local_11;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)param_3;
  if (*(int *)param_3 != 0) {
    Packet_Monitor_UDP_Logout_Complete::Packet_Monitor_UDP_Logout_Complete(local_1f);
    local_15 = *local_10;
    this = (CEnvironment *)G_CEnvironment();
    local_11 = CEnvironment::get_channel_no(this);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)((int)local_10 + 0xe));
    CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_1f,0xf);
  }
  return 0;
}
```

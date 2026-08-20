# dispatch_sig

`_ZN25Inter_PvPChannelUserCount12dispatch_sigEP5CUserPci`

`Inter_PvPChannelUserCount::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PvPChannelUserCount` | `0x084d8262` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d8262  _ZN25Inter_PvPChannelUserCount12dispatch_sigEP5CUserPci
#           Inter_PvPChannelUserCount::dispatch_sig(CUser*, char*, int)
# range [0x084d8262, 0x084d82f5]
084d8262 +0x00:  push   %ebp
084d8263 +0x01:  mov    %esp,%ebp
084d8265 +0x03:  push   %ebx
084d8266 +0x04:  sub    $0x24,%esp
084d8269 +0x07:  mov    0x10(%ebp),%eax
084d826c +0x0a:  mov    %eax,-0xc(%ebp)
084d826f +0x0d:  mov    -0xc(%ebp),%eax
084d8272 +0x10:  mov    0x12(%eax),%eax
084d8275 +0x13:  mov    %eax,0x4(%esp)
084d8279 +0x17:  movl   $&g_schoolMgr,(%esp)
084d8280 +0x1e:  call   084ed394 <_GLOBAL__I__Z7getUserj+0x4346>  ; global constructors keyed to getUser(unsigned int)+0x4346
084d8285 +0x23:  mov    -0xc(%ebp),%edx
084d8288 +0x26:  mov    %eax,0x1a(%edx)
084d828b +0x29:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084d8290 +0x2e:  mov    %eax,(%esp)
084d8293 +0x31:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084d8298 +0x36:  mov    %eax,%edx
084d829a +0x38:  mov    -0xc(%ebp),%eax
084d829d +0x3b:  mov    %edx,0x16(%eax)
084d82a0 +0x3e:  call   084ed37b <_GLOBAL__I__Z7getUserj+0x432d>  ; global constructors keyed to getUser(unsigned int)+0x432d
084d82a5 +0x43:  movzbl %al,%edx
084d82a8 +0x46:  mov    -0xc(%ebp),%eax
084d82ab +0x49:  mov    %edx,0x22(%eax)
084d82ae +0x4c:  call   084ed387 <_GLOBAL__I__Z7getUserj+0x4339>  ; global constructors keyed to getUser(unsigned int)+0x4339
084d82b3 +0x51:  movzbl %al,%edx
084d82b6 +0x54:  mov    -0xc(%ebp),%eax
084d82b9 +0x57:  mov    %edx,0x26(%eax)
084d82bc +0x5a:  mov    -0xc(%ebp),%ebx
084d82bf +0x5d:  mov    -0xc(%ebp),%eax
084d82c2 +0x60:  mov    0x1e(%eax),%edx
084d82c5 +0x63:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084d82ca +0x68:  mov    %edx,0x4(%esp)
084d82ce +0x6c:  mov    %eax,(%esp)
084d82d1 +0x6f:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084d82d6 +0x74:  movl   $0x2a,0x8(%esp)
084d82de +0x7c:  mov    %ebx,0x4(%esp)
084d82e2 +0x80:  mov    %eax,(%esp)
084d82e5 +0x83:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084d82ea +0x88:  mov    $0x0,%eax
084d82ef +0x8d:  add    $0x24,%esp
084d82f2 +0x90:  pop    %ebx
084d82f3 +0x91:  pop    %ebp
084d82f4 +0x92:  ret
084d82f5 +0x93:  nop
```

## 反编译 C

```c
// Inter_PvPChannelUserCount::dispatch_sig @ 0x84d8262

/* Inter_PvPChannelUserCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PvPChannelUserCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CEnvironment *this;
  uint uVar2;
  CMonitorServerProxy *this_00;
  
  uVar1 = CSchoolMgr::GetUserCount(0x943e080);
  *(undefined4 *)(param_3 + 0x1a) = uVar1;
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_channel_no(this);
  *(undefined4 *)(param_3 + 0x16) = uVar1;
  uVar2 = CLeagueMatch::GetPlayCountPerOneTeam();
  *(uint *)(param_3 + 0x22) = uVar2 & 0xff;
  uVar2 = CLeagueMatch::GetBattleMode();
  *(uint *)(param_3 + 0x26) = uVar2 & 0xff;
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(param_3 + 0x1e));
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)param_3,0x2a);
  return 0;
}
```

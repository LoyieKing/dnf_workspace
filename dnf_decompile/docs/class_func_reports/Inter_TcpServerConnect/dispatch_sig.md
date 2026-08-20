# dispatch_sig

`_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci`

`Inter_TcpServerConnect::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_TcpServerConnect` | `0x084c8dca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c8dca  _ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci
#           Inter_TcpServerConnect::dispatch_sig(CUser*, char*, int)
# range [0x084c8dca, 0x084c8ebf]
084c8dca +0x00:  push   %ebp
084c8dcb +0x01:  mov    %esp,%ebp
084c8dcd +0x03:  sub    $0x38,%esp
084c8dd0 +0x06:  mov    0x10(%ebp),%eax
084c8dd3 +0x09:  mov    %eax,-0x14(%ebp)
084c8dd6 +0x0c:  mov    -0x14(%ebp),%eax
084c8dd9 +0x0f:  movzbl 0xa(%eax),%eax
084c8ddd +0x13:  cmp    $0xcb,%al
084c8ddf +0x15:  jne    084c8e48 <+0x7e>
084c8de1 +0x17:  movl   $0x0,-0x18(%ebp)
084c8de8 +0x1e:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084c8ded +0x23:  mov    %eax,(%esp)
084c8df0 +0x26:  call   082b3c50 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5b4b>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5b4b
084c8df5 +0x2b:  mov    %eax,-0x10(%ebp)
084c8df8 +0x2e:  jmp    084c8e2d <+0x63>
084c8dfa +0x30:  mov    -0x10(%ebp),%edx
084c8dfd +0x33:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084c8e02 +0x38:  mov    %edx,0x4(%esp)
084c8e06 +0x3c:  mov    %eax,(%esp)
084c8e09 +0x3f:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084c8e0e +0x44:  mov    %eax,(%esp)
084c8e11 +0x47:  call   0846d96c <_ZN17CGuildServerProxy7InitTcpEv>  ; CGuildServerProxy::InitTcp()
084c8e16 +0x4c:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084c8e1b +0x51:  lea    -0x18(%ebp),%edx
084c8e1e +0x54:  mov    %edx,0x4(%esp)
084c8e22 +0x58:  mov    %eax,(%esp)
084c8e25 +0x5b:  call   082b3c88 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5b83>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5b83
084c8e2a +0x60:  mov    %eax,-0x10(%ebp)
084c8e2d +0x63:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084c8e32 +0x68:  mov    %eax,(%esp)
084c8e35 +0x6b:  call   082b3c7c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5b77>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5b77
084c8e3a +0x70:  mov    -0x18(%ebp),%edx
084c8e3d +0x73:  cmp    %edx,%eax
084c8e3f +0x75:  setg   %al
084c8e42 +0x78:  test   %al,%al
084c8e44 +0x7a:  jne    084c8dfa <+0x30>
084c8e46 +0x7c:  jmp    084c8eb8 <+0xee>
084c8e48 +0x7e:  mov    -0x14(%ebp),%eax
084c8e4b +0x81:  movzbl 0xa(%eax),%eax
084c8e4f +0x85:  cmp    $0xc9,%al
084c8e51 +0x87:  jne    084c8eb8 <+0xee>
084c8e53 +0x89:  movl   $0x0,-0x1c(%ebp)
084c8e5a +0x90:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084c8e5f +0x95:  mov    %eax,(%esp)
084c8e62 +0x98:  call   082b2aaa <_GLOBAL__I__ZN4CLog5this_E+0xeed1>  ; global constructors keyed to CLog::this_+0xeed1
084c8e67 +0x9d:  mov    %eax,-0xc(%ebp)
084c8e6a +0xa0:  jmp    084c8e9f <+0xd5>
084c8e6c +0xa2:  mov    -0xc(%ebp),%edx
084c8e6f +0xa5:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084c8e74 +0xaa:  mov    %edx,0x4(%esp)
084c8e78 +0xae:  mov    %eax,(%esp)
084c8e7b +0xb1:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084c8e80 +0xb6:  mov    %eax,(%esp)
084c8e83 +0xb9:  call   08470ad6 <_ZN19CMonitorServerProxy7InitTcpEv>  ; CMonitorServerProxy::InitTcp()
084c8e88 +0xbe:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084c8e8d +0xc3:  lea    -0x1c(%ebp),%edx
084c8e90 +0xc6:  mov    %edx,0x4(%esp)
084c8e94 +0xca:  mov    %eax,(%esp)
084c8e97 +0xcd:  call   082b2ae2 <_GLOBAL__I__ZN4CLog5this_E+0xef09>  ; global constructors keyed to CLog::this_+0xef09
084c8e9c +0xd2:  mov    %eax,-0xc(%ebp)
084c8e9f +0xd5:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084c8ea4 +0xda:  mov    %eax,(%esp)
084c8ea7 +0xdd:  call   082b2ad6 <_GLOBAL__I__ZN4CLog5this_E+0xeefd>  ; global constructors keyed to CLog::this_+0xeefd
084c8eac +0xe2:  mov    -0x1c(%ebp),%edx
084c8eaf +0xe5:  cmp    %edx,%eax
084c8eb1 +0xe7:  setg   %al
084c8eb4 +0xea:  test   %al,%al
084c8eb6 +0xec:  jne    084c8e6c <+0xa2>
084c8eb8 +0xee:  mov    $0x0,%eax
084c8ebd +0xf3:  leave
084c8ebe +0xf4:  ret
084c8ebf +0xf5:  nop
```

## 反编译 C

```c
// Inter_TcpServerConnect::dispatch_sig @ 0x84c8dca

/* Inter_TcpServerConnect::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TcpServerConnect::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CGuildServerProxy *this;
  int iVar1;
  CMonitorServerProxy *this_00;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = param_3;
  if (*(char *)(param_3 + 10) == -0x35) {
    local_1c = 0;
    local_14 = CServerProxyMgr<CGuildServerProxy>::GetStartIndex(GlobalData::s_guild_proxy_mgr);
    while (iVar1 = CServerProxyMgr<CGuildServerProxy>::GetEndIndex(GlobalData::s_guild_proxy_mgr),
          local_1c < iVar1) {
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                       (GlobalData::s_guild_proxy_mgr,local_14);
      CGuildServerProxy::InitTcp(this);
      local_14 = CServerProxyMgr<CGuildServerProxy>::GetNextIndex
                           (GlobalData::s_guild_proxy_mgr,&local_1c);
    }
  }
  else if (*(char *)(param_3 + 10) == -0x37) {
    local_20 = 0;
    local_10 = CServerProxyMgr<CMonitorServerProxy>::GetStartIndex(GlobalData::s_monitor_proxy_mgr);
    while (iVar1 = CServerProxyMgr<CMonitorServerProxy>::GetEndIndex
                             (GlobalData::s_monitor_proxy_mgr), local_20 < iVar1) {
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,local_10);
      CMonitorServerProxy::InitTcp(this_00);
      local_10 = CServerProxyMgr<CMonitorServerProxy>::GetNextIndex
                           (GlobalData::s_monitor_proxy_mgr,&local_20);
    }
  }
  return 0;
}
```

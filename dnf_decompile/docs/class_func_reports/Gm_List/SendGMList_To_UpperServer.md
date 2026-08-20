# SendGMList_To_UpperServer

`_ZN7Gm_List25SendGMList_To_UpperServerEi`

`Gm_List::SendGMList_To_UpperServer(int)`

| 类 | 地址 |
|---|---|
| `Gm_List` | `0x08299d54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299d54  _ZN7Gm_List25SendGMList_To_UpperServerEi
#           Gm_List::SendGMList_To_UpperServer(int)
# range [0x08299d54, 0x08299f39]
08299d54 +0x000:  push   %ebp
08299d55 +0x001:  mov    %esp,%ebp
08299d57 +0x003:  push   %ebx
08299d58 +0x004:  sub    $0xa4,%esp
08299d5e +0x00a:  cmpl   $0x0,0xc(%ebp)
08299d62 +0x00e:  je     08299d6e <+0x1a>
08299d64 +0x010:  cmpl   $0x1,0xc(%ebp)
08299d68 +0x014:  jne    08299f33 <+0x1df>
08299d6e +0x01a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08299d73 +0x01f:  mov    %eax,(%esp)
08299d76 +0x022:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08299d7b +0x027:  mov    %eax,-0x14(%ebp)
08299d7e +0x02a:  lea    -0x8c(%ebp),%eax
08299d84 +0x030:  mov    %eax,(%esp)
08299d87 +0x033:  call   082a40ac <_GLOBAL__I__ZN4CLog5this_E+0x4d3>  ; global constructors keyed to CLog::this_+0x4d3
08299d8c +0x038:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
08299d91 +0x03d:  mov    %eax,(%esp)
08299d94 +0x040:  call   082a7388 <_GLOBAL__I__ZN4CLog5this_E+0x37af>  ; global constructors keyed to CLog::this_+0x37af
08299d99 +0x045:  mov    %eax,-0x10(%ebp)
08299d9c +0x048:  lea    -0x1c(%ebp),%eax
08299d9f +0x04b:  mov    -0x10(%ebp),%edx
08299da2 +0x04e:  mov    %edx,0x4(%esp)
08299da6 +0x052:  mov    %eax,(%esp)
08299da9 +0x055:  call   0810970c <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x119>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x119
08299dae +0x05a:  sub    $0x4,%esp
08299db1 +0x05d:  movl   $0x0,-0xc(%ebp)
08299db8 +0x064:  jmp    08299e89 <+0x135>
08299dbd +0x069:  mov    -0xc(%ebp),%ebx
08299dc0 +0x06c:  lea    -0x1c(%ebp),%eax
08299dc3 +0x06f:  mov    %eax,(%esp)
08299dc6 +0x072:  call   082b2f7c <_GLOBAL__I__ZN4CLog5this_E+0xf3a3>  ; global constructors keyed to CLog::this_+0xf3a3
08299dcb +0x077:  mov    (%eax),%eax
08299dcd +0x079:  mov    %eax,-0x80(%ebp,%ebx,4)
08299dd1 +0x07d:  mov    -0xc(%ebp),%ebx
08299dd4 +0x080:  lea    -0x1c(%ebp),%eax
08299dd7 +0x083:  mov    %eax,(%esp)
08299dda +0x086:  call   082b2f7c <_GLOBAL__I__ZN4CLog5this_E+0xf3a3>  ; global constructors keyed to CLog::this_+0xf3a3
08299ddf +0x08b:  mov    0x4(%eax),%eax
08299de2 +0x08e:  mov    %al,-0x30(%ebp,%ebx,1)
08299de6 +0x092:  addl   $0x1,-0xc(%ebp)
08299dea +0x096:  cmpl   $0x14,-0xc(%ebp)
08299dee +0x09a:  jne    08299e7e <+0x12a>
08299df4 +0x0a0:  mov    -0xc(%ebp),%eax
08299df7 +0x0a3:  mov    %al,-0x81(%ebp)
08299dfd +0x0a9:  cmpl   $0x1,0xc(%ebp)
08299e01 +0x0ad:  jne    08299e33 <+0xdf>
08299e03 +0x0af:  lea    -0x8c(%ebp),%ebx
08299e09 +0x0b5:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
08299e0e +0x0ba:  mov    -0x14(%ebp),%edx
08299e11 +0x0bd:  mov    %edx,0x4(%esp)
08299e15 +0x0c1:  mov    %eax,(%esp)
08299e18 +0x0c4:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08299e1d +0x0c9:  movl   $0x70,0x8(%esp)
08299e25 +0x0d1:  mov    %ebx,0x4(%esp)
08299e29 +0x0d5:  mov    %eax,(%esp)
08299e2c +0x0d8:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
08299e31 +0x0dd:  jmp    08299e67 <+0x113>
08299e33 +0x0df:  cmpl   $0x0,0xc(%ebp)
08299e37 +0x0e3:  jne    08299e67 <+0x113>
08299e39 +0x0e5:  lea    -0x8c(%ebp),%ebx
08299e3f +0x0eb:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08299e44 +0x0f0:  mov    -0x14(%ebp),%edx
08299e47 +0x0f3:  mov    %edx,0x4(%esp)
08299e4b +0x0f7:  mov    %eax,(%esp)
08299e4e +0x0fa:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08299e53 +0x0ff:  movl   $0x70,0x8(%esp)
08299e5b +0x107:  mov    %ebx,0x4(%esp)
08299e5f +0x10b:  mov    %eax,(%esp)
08299e62 +0x10e:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08299e67 +0x113:  movzbl -0x82(%ebp),%eax
08299e6e +0x11a:  add    $0x1,%eax
08299e71 +0x11d:  mov    %al,-0x82(%ebp)
08299e77 +0x123:  movl   $0x0,-0xc(%ebp)
08299e7e +0x12a:  lea    -0x1c(%ebp),%eax
08299e81 +0x12d:  mov    %eax,(%esp)
08299e84 +0x130:  call   08109a8c <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x499>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x499
08299e89 +0x135:  lea    -0x18(%ebp),%eax
08299e8c +0x138:  mov    -0x10(%ebp),%edx
08299e8f +0x13b:  mov    %edx,0x4(%esp)
08299e93 +0x13f:  mov    %eax,(%esp)
08299e96 +0x142:  call   08109732 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x13f>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x13f
08299e9b +0x147:  sub    $0x4,%esp
08299e9e +0x14a:  lea    -0x18(%ebp),%eax
08299ea1 +0x14d:  mov    %eax,0x4(%esp)
08299ea5 +0x151:  lea    -0x1c(%ebp),%eax
08299ea8 +0x154:  mov    %eax,(%esp)
08299eab +0x157:  call   081097aa <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x1b7>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x1b7
08299eb0 +0x15c:  test   %al,%al
08299eb2 +0x15e:  jne    08299dbd <+0x69>
08299eb8 +0x164:  cmpl   $0x0,-0xc(%ebp)
08299ebc +0x168:  je     08299f34 <+0x1e0>
08299ebe +0x16a:  mov    -0xc(%ebp),%eax
08299ec1 +0x16d:  mov    %al,-0x81(%ebp)
08299ec7 +0x173:  cmpl   $0x1,0xc(%ebp)
08299ecb +0x177:  jne    08299efd <+0x1a9>
08299ecd +0x179:  lea    -0x8c(%ebp),%ebx
08299ed3 +0x17f:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
08299ed8 +0x184:  mov    -0x14(%ebp),%edx
08299edb +0x187:  mov    %edx,0x4(%esp)
08299edf +0x18b:  mov    %eax,(%esp)
08299ee2 +0x18e:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08299ee7 +0x193:  movl   $0x70,0x8(%esp)
08299eef +0x19b:  mov    %ebx,0x4(%esp)
08299ef3 +0x19f:  mov    %eax,(%esp)
08299ef6 +0x1a2:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
08299efb +0x1a7:  jmp    08299f34 <+0x1e0>
08299efd +0x1a9:  cmpl   $0x0,0xc(%ebp)
08299f01 +0x1ad:  jne    08299f34 <+0x1e0>
08299f03 +0x1af:  lea    -0x8c(%ebp),%ebx
08299f09 +0x1b5:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08299f0e +0x1ba:  mov    -0x14(%ebp),%edx
08299f11 +0x1bd:  mov    %edx,0x4(%esp)
08299f15 +0x1c1:  mov    %eax,(%esp)
08299f18 +0x1c4:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08299f1d +0x1c9:  movl   $0x70,0x8(%esp)
08299f25 +0x1d1:  mov    %ebx,0x4(%esp)
08299f29 +0x1d5:  mov    %eax,(%esp)
08299f2c +0x1d8:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08299f31 +0x1dd:  jmp    08299f34 <+0x1e0>
08299f33 +0x1df:  nop
08299f34 +0x1e0:  mov    -0x4(%ebp),%ebx
08299f37 +0x1e3:  leave
08299f38 +0x1e4:  ret
08299f39 +0x1e5:  nop
```

## 反编译 C

```c
// Gm_List::SendGMList_To_UpperServer @ 0x8299d54

/* Gm_List::SendGMList_To_UpperServer(int) */

void __thiscall Gm_List::SendGMList_To_UpperServer(Gm_List *this,int param_1)

{
  int iVar1;
  char cVar2;
  CEnvironment *this_00;
  undefined4 *puVar3;
  int iVar4;
  CGuildServerProxy *pCVar5;
  CMonitorServerProxy *pCVar6;
  Packet_Sync_GM_List local_90 [10];
  char local_86;
  undefined1 local_85;
  undefined4 auStack_84 [20];
  undefined1 auStack_34 [20];
  _List_const_iterator<WongWork::CGMAccounts::stGMInfo_t> local_20 [4];
  _List_const_iterator local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    this_00 = (CEnvironment *)G_CEnvironment();
    local_18 = CEnvironment::get_server_group(this_00);
    Packet_Sync_GM_List::Packet_Sync_GM_List(local_90);
    local_14 = WongWork::CGMAccounts::GetGMList(GlobalData::s_pGMAccounts_);
    std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
    begin();
    local_10 = 0;
    while( true ) {
      std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
      ::end();
      cVar2 = std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=
                        (local_20,local_1c);
      iVar1 = local_10;
      if (cVar2 == '\0') break;
      puVar3 = (undefined4 *)
               std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator->(local_20);
      auStack_84[iVar1] = *puVar3;
      iVar1 = local_10;
      iVar4 = std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator->(local_20);
      auStack_34[iVar1] = (char)*(undefined4 *)(iVar4 + 4);
      local_10 = local_10 + 1;
      if (local_10 == 0x14) {
        local_85 = 0x14;
        if (param_1 == 1) {
          pCVar5 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,local_18);
          CGuildServerProxy::SendTcpPacket(pCVar5,(char *)local_90,0x70);
        }
        else if (param_1 == 0) {
          pCVar6 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                             (GlobalData::s_monitor_proxy_mgr,local_18);
          CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_90,0x70);
        }
        local_86 = local_86 + '\x01';
        local_10 = 0;
      }
      std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator++(local_20);
    }
    if (local_10 != 0) {
      local_85 = (undefined1)local_10;
      if (param_1 == 1) {
        pCVar5 = (CGuildServerProxy *)
                 CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                           (GlobalData::s_guild_proxy_mgr,local_18);
        CGuildServerProxy::SendTcpPacket(pCVar5,(char *)local_90,0x70);
      }
      else if (param_1 == 0) {
        pCVar6 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,local_18);
        CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_90,0x70);
      }
    }
  }
  return;
}
```

# dispatch

`_ZN16MonitorTcpThread8dispatchEPv`

`MonitorTcpThread::dispatch(void*)`

| 类 | 地址 |
|---|---|
| `MonitorTcpThread` | `0x0857d95a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d95a  _ZN16MonitorTcpThread8dispatchEPv
#           MonitorTcpThread::dispatch(void*)
# range [0x0857d95a, 0x0857f3a8]
0857d95a +0x0000:  push   %ebp
0857d95b +0x0001:  mov    %esp,%ebp
0857d95d +0x0003:  push   %edi
0857d95e +0x0004:  push   %esi
0857d95f +0x0005:  push   %ebx
0857d960 +0x0006:  sub    $0x21c,%esp
0857d966 +0x000c:  movl   $0x0,-0x6c(%ebp)
0857d96d +0x0013:  movl   $0x0,-0x68(%ebp)
0857d974 +0x001a:  movl   $0x0,-0x64(%ebp)
0857d97b +0x0021:  movl   $0x0,-0x60(%ebp)
0857d982 +0x0028:  movl   $0x0,-0x5c(%ebp)
0857d989 +0x002f:  jmp    0857f38c <+0x1a32>
0857d98e +0x0034:  movl   $0x1,(%esp)
0857d995 +0x003b:  call   0858c4e0 <_ZN6OS_API5SleepEi>  ; OS_API::Sleep(int)
0857d99a +0x0040:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857d99f +0x0045:  mov    %eax,(%esp)
0857d9a2 +0x0048:  call   08471e08 <_GLOBAL__I__ZN18CPCRoomServerProxyC2EPci+0x1c>  ; global constructors keyed to CPCRoomServerProxy::CPCRoomServerProxy(char*, int)+0x1c
0857d9a7 +0x004d:  mov    %eax,(%esp)
0857d9aa +0x0050:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857d9af +0x0055:  mov    %eax,-0xb8(%ebp)
0857d9b5 +0x005b:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857d9ba +0x0060:  mov    %eax,(%esp)
0857d9bd +0x0063:  call   0846d048 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x31b>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x31b
0857d9c2 +0x0068:  mov    %eax,(%esp)
0857d9c5 +0x006b:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857d9ca +0x0070:  mov    %eax,-0xbc(%ebp)
0857d9d0 +0x0076:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857d9d5 +0x007b:  mov    %eax,(%esp)
0857d9d8 +0x007e:  call   082f7ed6 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1e7>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1e7
0857d9dd +0x0083:  mov    %eax,(%esp)
0857d9e0 +0x0086:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857d9e5 +0x008b:  mov    %eax,-0xc0(%ebp)
0857d9eb +0x0091:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857d9f0 +0x0096:  mov    %eax,(%esp)
0857d9f3 +0x0099:  call   082f7ed6 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1e7>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1e7
0857d9f8 +0x009e:  mov    %eax,(%esp)
0857d9fb +0x00a1:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857da00 +0x00a6:  mov    %eax,-0xc4(%ebp)
0857da06 +0x00ac:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0857da0b +0x00b1:  mov    %eax,(%esp)
0857da0e +0x00b4:  call   082f7ed6 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1e7>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1e7
0857da13 +0x00b9:  mov    %eax,(%esp)
0857da16 +0x00bc:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857da1b +0x00c1:  mov    %eax,-0xc8(%ebp)
0857da21 +0x00c7:  lea    -0x188(%ebp),%eax
0857da27 +0x00cd:  mov    %eax,-0x50(%ebp)
0857da2a +0x00d0:  movl   $0x0,-0x54(%ebp)
0857da31 +0x00d7:  jmp    0857da44 <+0xea>
0857da33 +0x00d9:  mov    -0x54(%ebp),%edx
0857da36 +0x00dc:  mov    -0x50(%ebp),%eax
0857da39 +0x00df:  movl   $0x0,(%eax,%edx,4)
0857da40 +0x00e6:  addl   $0x1,-0x54(%ebp)
0857da44 +0x00ea:  cmpl   $0x1f,-0x54(%ebp)
0857da48 +0x00ee:  setbe  %al
0857da4b +0x00f1:  test   %al,%al
0857da4d +0x00f3:  jne    0857da33 <+0xd9>
0857da4f +0x00f5:  lea    -0x208(%ebp),%eax
0857da55 +0x00fb:  mov    %eax,-0x48(%ebp)
0857da58 +0x00fe:  movl   $0x0,-0x4c(%ebp)
0857da5f +0x0105:  jmp    0857da72 <+0x118>
0857da61 +0x0107:  mov    -0x4c(%ebp),%edx
0857da64 +0x010a:  mov    -0x48(%ebp),%eax
0857da67 +0x010d:  movl   $0x0,(%eax,%edx,4)
0857da6e +0x0114:  addl   $0x1,-0x4c(%ebp)
0857da72 +0x0118:  cmpl   $0x1f,-0x4c(%ebp)
0857da76 +0x011c:  setbe  %al
0857da79 +0x011f:  test   %al,%al
0857da7b +0x0121:  jne    0857da61 <+0x107>
0857da7d +0x0123:  movl   $0x1,-0xd4(%ebp)
0857da87 +0x012d:  movl   $0x0,-0xd0(%ebp)
0857da91 +0x0137:  movl   $0x0,-0xd8(%ebp)
0857da9b +0x0141:  movl   $0x0,-0x58(%ebp)
0857daa2 +0x0148:  movl   $0x0,-0x58(%ebp)
0857daa9 +0x014f:  jmp    0857dd5e <+0x404>
0857daae +0x0154:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857dab3 +0x0159:  mov    -0x58(%ebp),%edx
0857dab6 +0x015c:  mov    %edx,0x4(%esp)
0857daba +0x0160:  mov    %eax,(%esp)
0857dabd +0x0163:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857dac2 +0x0168:  mov    %eax,(%esp)
0857dac5 +0x016b:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857daca +0x0170:  mov    %eax,(%esp)
0857dacd +0x0173:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dad2 +0x0178:  cmp    $0xffffffff,%eax
0857dad5 +0x017b:  setne  %al
0857dad8 +0x017e:  test   %al,%al
0857dada +0x0180:  je     0857dc04 <+0x2aa>
0857dae0 +0x0186:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857dae5 +0x018b:  mov    -0x58(%ebp),%edx
0857dae8 +0x018e:  mov    %edx,0x4(%esp)
0857daec +0x0192:  mov    %eax,(%esp)
0857daef +0x0195:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857daf4 +0x019a:  mov    %eax,(%esp)
0857daf7 +0x019d:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857dafc +0x01a2:  mov    %eax,(%esp)
0857daff +0x01a5:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857db04 +0x01aa:  shr    $0x5,%eax
0857db07 +0x01ad:  mov    %eax,%ebx
0857db09 +0x01af:  mov    -0x188(%ebp,%eax,4),%esi
0857db10 +0x01b6:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857db15 +0x01bb:  mov    -0x58(%ebp),%edx
0857db18 +0x01be:  mov    %edx,0x4(%esp)
0857db1c +0x01c2:  mov    %eax,(%esp)
0857db1f +0x01c5:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857db24 +0x01ca:  mov    %eax,(%esp)
0857db27 +0x01cd:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857db2c +0x01d2:  mov    %eax,(%esp)
0857db2f +0x01d5:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857db34 +0x01da:  and    $0x1f,%eax
0857db37 +0x01dd:  mov    $0x1,%edx
0857db3c +0x01e2:  mov    %edx,%edi
0857db3e +0x01e4:  mov    %eax,%ecx
0857db40 +0x01e6:  shl    %cl,%edi
0857db42 +0x01e8:  mov    %edi,%eax
0857db44 +0x01ea:  or     %esi,%eax
0857db46 +0x01ec:  mov    %eax,-0x188(%ebp,%ebx,4)
0857db4d +0x01f3:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857db52 +0x01f8:  mov    -0x58(%ebp),%edx
0857db55 +0x01fb:  mov    %edx,0x4(%esp)
0857db59 +0x01ff:  mov    %eax,(%esp)
0857db5c +0x0202:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857db61 +0x0207:  mov    %eax,(%esp)
0857db64 +0x020a:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857db69 +0x020f:  mov    %eax,(%esp)
0857db6c +0x0212:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857db71 +0x0217:  shr    $0x5,%eax
0857db74 +0x021a:  mov    %eax,%ebx
0857db76 +0x021c:  mov    -0x208(%ebp,%eax,4),%esi
0857db7d +0x0223:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857db82 +0x0228:  mov    -0x58(%ebp),%edx
0857db85 +0x022b:  mov    %edx,0x4(%esp)
0857db89 +0x022f:  mov    %eax,(%esp)
0857db8c +0x0232:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857db91 +0x0237:  mov    %eax,(%esp)
0857db94 +0x023a:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857db99 +0x023f:  mov    %eax,(%esp)
0857db9c +0x0242:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dba1 +0x0247:  and    $0x1f,%eax
0857dba4 +0x024a:  mov    $0x1,%edx
0857dba9 +0x024f:  mov    %edx,%edi
0857dbab +0x0251:  mov    %eax,%ecx
0857dbad +0x0253:  shl    %cl,%edi
0857dbaf +0x0255:  mov    %edi,%eax
0857dbb1 +0x0257:  or     %esi,%eax
0857dbb3 +0x0259:  mov    %eax,-0x208(%ebp,%ebx,4)
0857dbba +0x0260:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857dbbf +0x0265:  mov    -0x58(%ebp),%edx
0857dbc2 +0x0268:  mov    %edx,0x4(%esp)
0857dbc6 +0x026c:  mov    %eax,(%esp)
0857dbc9 +0x026f:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857dbce +0x0274:  mov    %eax,(%esp)
0857dbd1 +0x0277:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857dbd6 +0x027c:  mov    %eax,(%esp)
0857dbd9 +0x027f:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dbde +0x0284:  mov    %eax,-0xb4(%ebp)
0857dbe4 +0x028a:  lea    -0xb4(%ebp),%eax
0857dbea +0x0290:  mov    %eax,0x4(%esp)
0857dbee +0x0294:  lea    -0xd8(%ebp),%eax
0857dbf4 +0x029a:  mov    %eax,(%esp)
0857dbf7 +0x029d:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857dbfc +0x02a2:  mov    (%eax),%eax
0857dbfe +0x02a4:  mov    %eax,-0xd8(%ebp)
0857dc04 +0x02aa:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857dc09 +0x02af:  mov    -0x58(%ebp),%edx
0857dc0c +0x02b2:  mov    %edx,0x4(%esp)
0857dc10 +0x02b6:  mov    %eax,(%esp)
0857dc13 +0x02b9:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857dc18 +0x02be:  mov    %eax,(%esp)
0857dc1b +0x02c1:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857dc20 +0x02c6:  mov    %eax,(%esp)
0857dc23 +0x02c9:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dc28 +0x02ce:  cmp    $0xffffffff,%eax
0857dc2b +0x02d1:  setne  %al
0857dc2e +0x02d4:  test   %al,%al
0857dc30 +0x02d6:  je     0857dd5a <+0x400>
0857dc36 +0x02dc:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857dc3b +0x02e1:  mov    -0x58(%ebp),%edx
0857dc3e +0x02e4:  mov    %edx,0x4(%esp)
0857dc42 +0x02e8:  mov    %eax,(%esp)
0857dc45 +0x02eb:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857dc4a +0x02f0:  mov    %eax,(%esp)
0857dc4d +0x02f3:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857dc52 +0x02f8:  mov    %eax,(%esp)
0857dc55 +0x02fb:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dc5a +0x0300:  shr    $0x5,%eax
0857dc5d +0x0303:  mov    %eax,%ebx
0857dc5f +0x0305:  mov    -0x188(%ebp,%eax,4),%esi
0857dc66 +0x030c:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857dc6b +0x0311:  mov    -0x58(%ebp),%edx
0857dc6e +0x0314:  mov    %edx,0x4(%esp)
0857dc72 +0x0318:  mov    %eax,(%esp)
0857dc75 +0x031b:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857dc7a +0x0320:  mov    %eax,(%esp)
0857dc7d +0x0323:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857dc82 +0x0328:  mov    %eax,(%esp)
0857dc85 +0x032b:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dc8a +0x0330:  and    $0x1f,%eax
0857dc8d +0x0333:  mov    $0x1,%edx
0857dc92 +0x0338:  mov    %edx,%edi
0857dc94 +0x033a:  mov    %eax,%ecx
0857dc96 +0x033c:  shl    %cl,%edi
0857dc98 +0x033e:  mov    %edi,%eax
0857dc9a +0x0340:  or     %esi,%eax
0857dc9c +0x0342:  mov    %eax,-0x188(%ebp,%ebx,4)
0857dca3 +0x0349:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857dca8 +0x034e:  mov    -0x58(%ebp),%edx
0857dcab +0x0351:  mov    %edx,0x4(%esp)
0857dcaf +0x0355:  mov    %eax,(%esp)
0857dcb2 +0x0358:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857dcb7 +0x035d:  mov    %eax,(%esp)
0857dcba +0x0360:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857dcbf +0x0365:  mov    %eax,(%esp)
0857dcc2 +0x0368:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dcc7 +0x036d:  shr    $0x5,%eax
0857dcca +0x0370:  mov    %eax,%ebx
0857dccc +0x0372:  mov    -0x208(%ebp,%eax,4),%esi
0857dcd3 +0x0379:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857dcd8 +0x037e:  mov    -0x58(%ebp),%edx
0857dcdb +0x0381:  mov    %edx,0x4(%esp)
0857dcdf +0x0385:  mov    %eax,(%esp)
0857dce2 +0x0388:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857dce7 +0x038d:  mov    %eax,(%esp)
0857dcea +0x0390:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857dcef +0x0395:  mov    %eax,(%esp)
0857dcf2 +0x0398:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dcf7 +0x039d:  and    $0x1f,%eax
0857dcfa +0x03a0:  mov    $0x1,%edx
0857dcff +0x03a5:  mov    %edx,%edi
0857dd01 +0x03a7:  mov    %eax,%ecx
0857dd03 +0x03a9:  shl    %cl,%edi
0857dd05 +0x03ab:  mov    %edi,%eax
0857dd07 +0x03ad:  or     %esi,%eax
0857dd09 +0x03af:  mov    %eax,-0x208(%ebp,%ebx,4)
0857dd10 +0x03b6:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857dd15 +0x03bb:  mov    -0x58(%ebp),%edx
0857dd18 +0x03be:  mov    %edx,0x4(%esp)
0857dd1c +0x03c2:  mov    %eax,(%esp)
0857dd1f +0x03c5:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857dd24 +0x03ca:  mov    %eax,(%esp)
0857dd27 +0x03cd:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857dd2c +0x03d2:  mov    %eax,(%esp)
0857dd2f +0x03d5:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857dd34 +0x03da:  mov    %eax,-0xb0(%ebp)
0857dd3a +0x03e0:  lea    -0xb0(%ebp),%eax
0857dd40 +0x03e6:  mov    %eax,0x4(%esp)
0857dd44 +0x03ea:  lea    -0xd8(%ebp),%eax
0857dd4a +0x03f0:  mov    %eax,(%esp)
0857dd4d +0x03f3:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857dd52 +0x03f8:  mov    (%eax),%eax
0857dd54 +0x03fa:  mov    %eax,-0xd8(%ebp)
0857dd5a +0x0400:  addl   $0x1,-0x58(%ebp)
0857dd5e +0x0404:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857dd63 +0x0409:  mov    %eax,(%esp)
0857dd66 +0x040c:  call   0857f8c2 <_GLOBAL__I_g_bUdp_TH_start+0x4d9>  ; global constructors keyed to g_bUdp_TH_start+0x4d9
0857dd6b +0x0411:  cmp    -0x58(%ebp),%eax
0857dd6e +0x0414:  setg   %al
0857dd71 +0x0417:  test   %al,%al
0857dd73 +0x0419:  jne    0857daae <+0x154>
0857dd79 +0x041f:  mov    -0xb8(%ebp),%eax
0857dd7f +0x0425:  cmp    $0xffffffff,%eax
0857dd82 +0x0428:  je     0857de02 <+0x4a8>
0857dd84 +0x042a:  mov    -0xb8(%ebp),%eax
0857dd8a +0x0430:  shr    $0x5,%eax
0857dd8d +0x0433:  mov    %eax,%edx
0857dd8f +0x0435:  mov    -0x188(%ebp,%eax,4),%eax
0857dd96 +0x043c:  mov    -0xb8(%ebp),%ecx
0857dd9c +0x0442:  and    $0x1f,%ecx
0857dd9f +0x0445:  mov    $0x1,%ebx
0857dda4 +0x044a:  mov    %ebx,%esi
0857dda6 +0x044c:  shl    %cl,%esi
0857dda8 +0x044e:  mov    %esi,%ecx
0857ddaa +0x0450:  or     %ecx,%eax
0857ddac +0x0452:  mov    %eax,-0x188(%ebp,%edx,4)
0857ddb3 +0x0459:  mov    -0xb8(%ebp),%eax
0857ddb9 +0x045f:  shr    $0x5,%eax
0857ddbc +0x0462:  mov    %eax,%edx
0857ddbe +0x0464:  mov    -0x208(%ebp,%eax,4),%eax
0857ddc5 +0x046b:  mov    -0xb8(%ebp),%ecx
0857ddcb +0x0471:  and    $0x1f,%ecx
0857ddce +0x0474:  mov    $0x1,%ebx
0857ddd3 +0x0479:  mov    %ebx,%edi
0857ddd5 +0x047b:  shl    %cl,%edi
0857ddd7 +0x047d:  mov    %edi,%ecx
0857ddd9 +0x047f:  or     %ecx,%eax
0857dddb +0x0481:  mov    %eax,-0x208(%ebp,%edx,4)
0857dde2 +0x0488:  lea    -0xb8(%ebp),%eax
0857dde8 +0x048e:  mov    %eax,0x4(%esp)
0857ddec +0x0492:  lea    -0xd8(%ebp),%eax
0857ddf2 +0x0498:  mov    %eax,(%esp)
0857ddf5 +0x049b:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857ddfa +0x04a0:  mov    (%eax),%eax
0857ddfc +0x04a2:  mov    %eax,-0xd8(%ebp)
0857de02 +0x04a8:  mov    -0xbc(%ebp),%eax
0857de08 +0x04ae:  cmp    $0xffffffff,%eax
0857de0b +0x04b1:  je     0857de8b <+0x531>
0857de0d +0x04b3:  mov    -0xbc(%ebp),%eax
0857de13 +0x04b9:  shr    $0x5,%eax
0857de16 +0x04bc:  mov    %eax,%edx
0857de18 +0x04be:  mov    -0x188(%ebp,%eax,4),%eax
0857de1f +0x04c5:  mov    -0xbc(%ebp),%ecx
0857de25 +0x04cb:  and    $0x1f,%ecx
0857de28 +0x04ce:  mov    $0x1,%ebx
0857de2d +0x04d3:  mov    %ebx,%esi
0857de2f +0x04d5:  shl    %cl,%esi
0857de31 +0x04d7:  mov    %esi,%ecx
0857de33 +0x04d9:  or     %ecx,%eax
0857de35 +0x04db:  mov    %eax,-0x188(%ebp,%edx,4)
0857de3c +0x04e2:  mov    -0xbc(%ebp),%eax
0857de42 +0x04e8:  shr    $0x5,%eax
0857de45 +0x04eb:  mov    %eax,%edx
0857de47 +0x04ed:  mov    -0x208(%ebp,%eax,4),%eax
0857de4e +0x04f4:  mov    -0xbc(%ebp),%ecx
0857de54 +0x04fa:  and    $0x1f,%ecx
0857de57 +0x04fd:  mov    $0x1,%ebx
0857de5c +0x0502:  mov    %ebx,%edi
0857de5e +0x0504:  shl    %cl,%edi
0857de60 +0x0506:  mov    %edi,%ecx
0857de62 +0x0508:  or     %ecx,%eax
0857de64 +0x050a:  mov    %eax,-0x208(%ebp,%edx,4)
0857de6b +0x0511:  lea    -0xbc(%ebp),%eax
0857de71 +0x0517:  mov    %eax,0x4(%esp)
0857de75 +0x051b:  lea    -0xd8(%ebp),%eax
0857de7b +0x0521:  mov    %eax,(%esp)
0857de7e +0x0524:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857de83 +0x0529:  mov    (%eax),%eax
0857de85 +0x052b:  mov    %eax,-0xd8(%ebp)
0857de8b +0x0531:  mov    -0xc0(%ebp),%eax
0857de91 +0x0537:  cmp    $0xffffffff,%eax
0857de94 +0x053a:  je     0857df14 <+0x5ba>
0857de96 +0x053c:  mov    -0xc0(%ebp),%eax
0857de9c +0x0542:  shr    $0x5,%eax
0857de9f +0x0545:  mov    %eax,%edx
0857dea1 +0x0547:  mov    -0x188(%ebp,%eax,4),%eax
0857dea8 +0x054e:  mov    -0xc0(%ebp),%ecx
0857deae +0x0554:  and    $0x1f,%ecx
0857deb1 +0x0557:  mov    $0x1,%ebx
0857deb6 +0x055c:  mov    %ebx,%esi
0857deb8 +0x055e:  shl    %cl,%esi
0857deba +0x0560:  mov    %esi,%ecx
0857debc +0x0562:  or     %ecx,%eax
0857debe +0x0564:  mov    %eax,-0x188(%ebp,%edx,4)
0857dec5 +0x056b:  mov    -0xc0(%ebp),%eax
0857decb +0x0571:  shr    $0x5,%eax
0857dece +0x0574:  mov    %eax,%edx
0857ded0 +0x0576:  mov    -0x208(%ebp,%eax,4),%eax
0857ded7 +0x057d:  mov    -0xc0(%ebp),%ecx
0857dedd +0x0583:  and    $0x1f,%ecx
0857dee0 +0x0586:  mov    $0x1,%ebx
0857dee5 +0x058b:  mov    %ebx,%edi
0857dee7 +0x058d:  shl    %cl,%edi
0857dee9 +0x058f:  mov    %edi,%ecx
0857deeb +0x0591:  or     %ecx,%eax
0857deed +0x0593:  mov    %eax,-0x208(%ebp,%edx,4)
0857def4 +0x059a:  lea    -0xc0(%ebp),%eax
0857defa +0x05a0:  mov    %eax,0x4(%esp)
0857defe +0x05a4:  lea    -0xd8(%ebp),%eax
0857df04 +0x05aa:  mov    %eax,(%esp)
0857df07 +0x05ad:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857df0c +0x05b2:  mov    (%eax),%eax
0857df0e +0x05b4:  mov    %eax,-0xd8(%ebp)
0857df14 +0x05ba:  mov    -0xc4(%ebp),%eax
0857df1a +0x05c0:  cmp    $0xffffffff,%eax
0857df1d +0x05c3:  je     0857df9d <+0x643>
0857df1f +0x05c5:  mov    -0xc4(%ebp),%eax
0857df25 +0x05cb:  shr    $0x5,%eax
0857df28 +0x05ce:  mov    %eax,%edx
0857df2a +0x05d0:  mov    -0x188(%ebp,%eax,4),%eax
0857df31 +0x05d7:  mov    -0xc4(%ebp),%ecx
0857df37 +0x05dd:  and    $0x1f,%ecx
0857df3a +0x05e0:  mov    $0x1,%ebx
0857df3f +0x05e5:  mov    %ebx,%esi
0857df41 +0x05e7:  shl    %cl,%esi
0857df43 +0x05e9:  mov    %esi,%ecx
0857df45 +0x05eb:  or     %ecx,%eax
0857df47 +0x05ed:  mov    %eax,-0x188(%ebp,%edx,4)
0857df4e +0x05f4:  mov    -0xc4(%ebp),%eax
0857df54 +0x05fa:  shr    $0x5,%eax
0857df57 +0x05fd:  mov    %eax,%edx
0857df59 +0x05ff:  mov    -0x208(%ebp,%eax,4),%eax
0857df60 +0x0606:  mov    -0xc4(%ebp),%ecx
0857df66 +0x060c:  and    $0x1f,%ecx
0857df69 +0x060f:  mov    $0x1,%ebx
0857df6e +0x0614:  mov    %ebx,%edi
0857df70 +0x0616:  shl    %cl,%edi
0857df72 +0x0618:  mov    %edi,%ecx
0857df74 +0x061a:  or     %ecx,%eax
0857df76 +0x061c:  mov    %eax,-0x208(%ebp,%edx,4)
0857df7d +0x0623:  lea    -0xc4(%ebp),%eax
0857df83 +0x0629:  mov    %eax,0x4(%esp)
0857df87 +0x062d:  lea    -0xd8(%ebp),%eax
0857df8d +0x0633:  mov    %eax,(%esp)
0857df90 +0x0636:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857df95 +0x063b:  mov    (%eax),%eax
0857df97 +0x063d:  mov    %eax,-0xd8(%ebp)
0857df9d +0x0643:  mov    -0xc8(%ebp),%eax
0857dfa3 +0x0649:  cmp    $0xffffffff,%eax
0857dfa6 +0x064c:  je     0857e026 <+0x6cc>
0857dfa8 +0x064e:  mov    -0xc8(%ebp),%eax
0857dfae +0x0654:  shr    $0x5,%eax
0857dfb1 +0x0657:  mov    %eax,%edx
0857dfb3 +0x0659:  mov    -0x188(%ebp,%eax,4),%eax
0857dfba +0x0660:  mov    -0xc8(%ebp),%ecx
0857dfc0 +0x0666:  and    $0x1f,%ecx
0857dfc3 +0x0669:  mov    $0x1,%ebx
0857dfc8 +0x066e:  mov    %ebx,%esi
0857dfca +0x0670:  shl    %cl,%esi
0857dfcc +0x0672:  mov    %esi,%ecx
0857dfce +0x0674:  or     %ecx,%eax
0857dfd0 +0x0676:  mov    %eax,-0x188(%ebp,%edx,4)
0857dfd7 +0x067d:  mov    -0xc8(%ebp),%eax
0857dfdd +0x0683:  shr    $0x5,%eax
0857dfe0 +0x0686:  mov    %eax,%edx
0857dfe2 +0x0688:  mov    -0x208(%ebp,%eax,4),%eax
0857dfe9 +0x068f:  mov    -0xc8(%ebp),%ecx
0857dfef +0x0695:  and    $0x1f,%ecx
0857dff2 +0x0698:  mov    $0x1,%ebx
0857dff7 +0x069d:  mov    %ebx,%edi
0857dff9 +0x069f:  shl    %cl,%edi
0857dffb +0x06a1:  mov    %edi,%ecx
0857dffd +0x06a3:  or     %ecx,%eax
0857dfff +0x06a5:  mov    %eax,-0x208(%ebp,%edx,4)
0857e006 +0x06ac:  lea    -0xc8(%ebp),%eax
0857e00c +0x06b2:  mov    %eax,0x4(%esp)
0857e010 +0x06b6:  lea    -0xd8(%ebp),%eax
0857e016 +0x06bc:  mov    %eax,(%esp)
0857e019 +0x06bf:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0857e01e +0x06c4:  mov    (%eax),%eax
0857e020 +0x06c6:  mov    %eax,-0xd8(%ebp)
0857e026 +0x06cc:  mov    -0xd8(%ebp),%eax
0857e02c +0x06d2:  add    $0x1,%eax
0857e02f +0x06d5:  mov    %eax,-0xd8(%ebp)
0857e035 +0x06db:  mov    -0xd8(%ebp),%eax
0857e03b +0x06e1:  lea    -0xd4(%ebp),%edx
0857e041 +0x06e7:  mov    %edx,0x10(%esp)
0857e045 +0x06eb:  movl   $0x0,0xc(%esp)
0857e04d +0x06f3:  lea    -0x208(%ebp),%edx
0857e053 +0x06f9:  mov    %edx,0x8(%esp)
0857e057 +0x06fd:  lea    -0x188(%ebp),%edx
0857e05d +0x0703:  mov    %edx,0x4(%esp)
0857e061 +0x0707:  mov    %eax,(%esp)
0857e064 +0x070a:  call   0807e840 <_init+0x1138>
0857e069 +0x070f:  mov    %eax,-0xcc(%ebp)
0857e06f +0x0715:  mov    -0xcc(%ebp),%eax
0857e075 +0x071b:  test   %eax,%eax
0857e077 +0x071d:  js     0857f38b <+0x1a31>
0857e07d +0x0723:  movl   $0x0,-0x58(%ebp)
0857e084 +0x072a:  jmp    0857e7cb <+0xe71>
0857e089 +0x072f:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e08e +0x0734:  mov    -0x58(%ebp),%edx
0857e091 +0x0737:  mov    %edx,0x4(%esp)
0857e095 +0x073b:  mov    %eax,(%esp)
0857e098 +0x073e:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e09d +0x0743:  mov    %eax,(%esp)
0857e0a0 +0x0746:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857e0a5 +0x074b:  mov    %eax,(%esp)
0857e0a8 +0x074e:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e0ad +0x0753:  cmp    $0xffffffff,%eax
0857e0b0 +0x0756:  setne  %al
0857e0b3 +0x0759:  test   %al,%al
0857e0b5 +0x075b:  je     0857e254 <+0x8fa>
0857e0bb +0x0761:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e0c0 +0x0766:  mov    -0x58(%ebp),%edx
0857e0c3 +0x0769:  mov    %edx,0x4(%esp)
0857e0c7 +0x076d:  mov    %eax,(%esp)
0857e0ca +0x0770:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e0cf +0x0775:  mov    %eax,(%esp)
0857e0d2 +0x0778:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857e0d7 +0x077d:  mov    %eax,(%esp)
0857e0da +0x0780:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e0df +0x0785:  shr    $0x5,%eax
0857e0e2 +0x0788:  mov    -0x188(%ebp,%eax,4),%ebx
0857e0e9 +0x078f:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e0ee +0x0794:  mov    -0x58(%ebp),%edx
0857e0f1 +0x0797:  mov    %edx,0x4(%esp)
0857e0f5 +0x079b:  mov    %eax,(%esp)
0857e0f8 +0x079e:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e0fd +0x07a3:  mov    %eax,(%esp)
0857e100 +0x07a6:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857e105 +0x07ab:  mov    %eax,(%esp)
0857e108 +0x07ae:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e10d +0x07b3:  and    $0x1f,%eax
0857e110 +0x07b6:  mov    %ebx,%esi
0857e112 +0x07b8:  mov    %eax,%ecx
0857e114 +0x07ba:  sar    %cl,%esi
0857e116 +0x07bc:  mov    %esi,%eax
0857e118 +0x07be:  and    $0x1,%eax
0857e11b +0x07c1:  test   %al,%al
0857e11d +0x07c3:  je     0857e254 <+0x8fa>
0857e123 +0x07c9:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e128 +0x07ce:  mov    -0x58(%ebp),%edx
0857e12b +0x07d1:  mov    %edx,0x4(%esp)
0857e12f +0x07d5:  mov    %eax,(%esp)
0857e132 +0x07d8:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e137 +0x07dd:  mov    %eax,(%esp)
0857e13a +0x07e0:  call   084712e0 <_ZN19CMonitorServerProxy9OnTcpRecvEv>  ; CMonitorServerProxy::OnTcpRecv()
0857e13f +0x07e5:  xor    $0x1,%eax
0857e142 +0x07e8:  test   %al,%al
0857e144 +0x07ea:  je     0857e254 <+0x8fa>
0857e14a +0x07f0:  movl   $"Monitor::OnTcpRecv == false!!!",0x10(%esp)
0857e152 +0x07f8:  movl   $0x449,0xc(%esp)
0857e15a +0x0800:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857e162 +0x0808:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e16a +0x0810:  movl   $0x1,(%esp)
0857e171 +0x0817:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857e176 +0x081c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0857e17b +0x0821:  movl   $0x44c,0x8(%esp)
0857e183 +0x0829:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e18b +0x0831:  mov    %eax,(%esp)
0857e18e +0x0834:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0857e193 +0x0839:  movl   $0x1,0x8(%esp)
0857e19b +0x0841:  mov    %eax,0x4(%esp)
0857e19f +0x0845:  lea    -0xe0(%ebp),%eax
0857e1a5 +0x084b:  mov    %eax,(%esp)
0857e1a8 +0x084e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0857e1ad +0x0853:  lea    -0xe0(%ebp),%eax
0857e1b3 +0x0859:  mov    %eax,(%esp)
0857e1b6 +0x085c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e1bb +0x0861:  movl   $0x15f,0x4(%esp)
0857e1c3 +0x0869:  mov    %eax,(%esp)
0857e1c6 +0x086c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e1cb +0x0871:  lea    -0xe0(%ebp),%eax
0857e1d1 +0x0877:  mov    %eax,(%esp)
0857e1d4 +0x087a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e1d9 +0x087f:  movl   $0xffffffff,0x4(%esp)
0857e1e1 +0x0887:  mov    %eax,(%esp)
0857e1e4 +0x088a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e1e9 +0x088f:  lea    -0xe0(%ebp),%eax
0857e1ef +0x0895:  mov    %eax,(%esp)
0857e1f2 +0x0898:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e1f7 +0x089d:  movl   $0xc9,0x4(%esp)
0857e1ff +0x08a5:  mov    %eax,(%esp)
0857e202 +0x08a8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e207 +0x08ad:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857e20c +0x08b2:  lea    -0xe0(%ebp),%edx
0857e212 +0x08b8:  mov    %edx,0x8(%esp)
0857e216 +0x08bc:  movl   $0x1,0x4(%esp)
0857e21e +0x08c4:  mov    %eax,(%esp)
0857e221 +0x08c7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0857e226 +0x08cc:  jmp    0857e246 <+0x8ec>
0857e228 +0x08ce:  mov    %edx,%ebx
0857e22a +0x08d0:  mov    %eax,%esi
0857e22c +0x08d2:  lea    -0xe0(%ebp),%eax
0857e232 +0x08d8:  mov    %eax,(%esp)
0857e235 +0x08db:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e23a +0x08e0:  mov    %esi,%eax
0857e23c +0x08e2:  mov    %ebx,%edx
0857e23e +0x08e4:  mov    %eax,(%esp)
0857e241 +0x08e7:  call   08ae3750 <_Unwind_Resume>
0857e246 +0x08ec:  lea    -0xe0(%ebp),%eax
0857e24c +0x08f2:  mov    %eax,(%esp)
0857e24f +0x08f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e254 +0x08fa:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e259 +0x08ff:  mov    -0x58(%ebp),%edx
0857e25c +0x0902:  mov    %edx,0x4(%esp)
0857e260 +0x0906:  mov    %eax,(%esp)
0857e263 +0x0909:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e268 +0x090e:  mov    %eax,(%esp)
0857e26b +0x0911:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857e270 +0x0916:  mov    %eax,(%esp)
0857e273 +0x0919:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e278 +0x091e:  cmp    $0xffffffff,%eax
0857e27b +0x0921:  setne  %al
0857e27e +0x0924:  test   %al,%al
0857e280 +0x0926:  je     0857e428 <+0xace>
0857e286 +0x092c:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e28b +0x0931:  mov    -0x58(%ebp),%edx
0857e28e +0x0934:  mov    %edx,0x4(%esp)
0857e292 +0x0938:  mov    %eax,(%esp)
0857e295 +0x093b:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e29a +0x0940:  mov    %eax,(%esp)
0857e29d +0x0943:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857e2a2 +0x0948:  mov    %eax,(%esp)
0857e2a5 +0x094b:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e2aa +0x0950:  shr    $0x5,%eax
0857e2ad +0x0953:  mov    -0x208(%ebp,%eax,4),%ebx
0857e2b4 +0x095a:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e2b9 +0x095f:  mov    -0x58(%ebp),%edx
0857e2bc +0x0962:  mov    %edx,0x4(%esp)
0857e2c0 +0x0966:  mov    %eax,(%esp)
0857e2c3 +0x0969:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e2c8 +0x096e:  mov    %eax,(%esp)
0857e2cb +0x0971:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
0857e2d0 +0x0976:  mov    %eax,(%esp)
0857e2d3 +0x0979:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e2d8 +0x097e:  and    $0x1f,%eax
0857e2db +0x0981:  mov    %ebx,%esi
0857e2dd +0x0983:  mov    %eax,%ecx
0857e2df +0x0985:  sar    %cl,%esi
0857e2e1 +0x0987:  mov    %esi,%eax
0857e2e3 +0x0989:  and    $0x1,%eax
0857e2e6 +0x098c:  test   %al,%al
0857e2e8 +0x098e:  je     0857e428 <+0xace>
0857e2ee +0x0994:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e2f3 +0x0999:  mov    -0x58(%ebp),%edx
0857e2f6 +0x099c:  mov    %edx,0x4(%esp)
0857e2fa +0x09a0:  mov    %eax,(%esp)
0857e2fd +0x09a3:  call   0857f8ce <_GLOBAL__I_g_bUdp_TH_start+0x4e5>  ; global constructors keyed to g_bUdp_TH_start+0x4e5
0857e302 +0x09a8:  mov    %eax,(%esp)
0857e305 +0x09ab:  call   0847139c <_ZN19CMonitorServerProxy9OnTcpSendEv>  ; CMonitorServerProxy::OnTcpSend()
0857e30a +0x09b0:  mov    %eax,-0x44(%ebp)
0857e30d +0x09b3:  cmpl   $0x0,-0x44(%ebp)
0857e311 +0x09b7:  jns    0857e428 <+0xace>
0857e317 +0x09bd:  mov    -0x44(%ebp),%eax
0857e31a +0x09c0:  mov    %eax,0x14(%esp)
0857e31e +0x09c4:  movl   $"Monitor::OnTcpSend == false!!!remain_size(%d)",0x10(%esp)
0857e326 +0x09cc:  movl   $0x45e,0xc(%esp)
0857e32e +0x09d4:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857e336 +0x09dc:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e33e +0x09e4:  movl   $0x1,(%esp)
0857e345 +0x09eb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857e34a +0x09f0:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0857e34f +0x09f5:  movl   $0x460,0x8(%esp)
0857e357 +0x09fd:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e35f +0x0a05:  mov    %eax,(%esp)
0857e362 +0x0a08:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0857e367 +0x0a0d:  movl   $0x1,0x8(%esp)
0857e36f +0x0a15:  mov    %eax,0x4(%esp)
0857e373 +0x0a19:  lea    -0xe8(%ebp),%eax
0857e379 +0x0a1f:  mov    %eax,(%esp)
0857e37c +0x0a22:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0857e381 +0x0a27:  lea    -0xe8(%ebp),%eax
0857e387 +0x0a2d:  mov    %eax,(%esp)
0857e38a +0x0a30:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e38f +0x0a35:  movl   $0x15f,0x4(%esp)
0857e397 +0x0a3d:  mov    %eax,(%esp)
0857e39a +0x0a40:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e39f +0x0a45:  lea    -0xe8(%ebp),%eax
0857e3a5 +0x0a4b:  mov    %eax,(%esp)
0857e3a8 +0x0a4e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e3ad +0x0a53:  movl   $0xffffffff,0x4(%esp)
0857e3b5 +0x0a5b:  mov    %eax,(%esp)
0857e3b8 +0x0a5e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e3bd +0x0a63:  lea    -0xe8(%ebp),%eax
0857e3c3 +0x0a69:  mov    %eax,(%esp)
0857e3c6 +0x0a6c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e3cb +0x0a71:  movl   $0xc9,0x4(%esp)
0857e3d3 +0x0a79:  mov    %eax,(%esp)
0857e3d6 +0x0a7c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e3db +0x0a81:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857e3e0 +0x0a86:  lea    -0xe8(%ebp),%edx
0857e3e6 +0x0a8c:  mov    %edx,0x8(%esp)
0857e3ea +0x0a90:  movl   $0x1,0x4(%esp)
0857e3f2 +0x0a98:  mov    %eax,(%esp)
0857e3f5 +0x0a9b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0857e3fa +0x0aa0:  jmp    0857e41a <+0xac0>
0857e3fc +0x0aa2:  mov    %edx,%ebx
0857e3fe +0x0aa4:  mov    %eax,%esi
0857e400 +0x0aa6:  lea    -0xe8(%ebp),%eax
0857e406 +0x0aac:  mov    %eax,(%esp)
0857e409 +0x0aaf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e40e +0x0ab4:  mov    %esi,%eax
0857e410 +0x0ab6:  mov    %ebx,%edx
0857e412 +0x0ab8:  mov    %eax,(%esp)
0857e415 +0x0abb:  call   08ae3750 <_Unwind_Resume>
0857e41a +0x0ac0:  lea    -0xe8(%ebp),%eax
0857e420 +0x0ac6:  mov    %eax,(%esp)
0857e423 +0x0ac9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e428 +0x0ace:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e42d +0x0ad3:  mov    -0x58(%ebp),%edx
0857e430 +0x0ad6:  mov    %edx,0x4(%esp)
0857e434 +0x0ada:  mov    %eax,(%esp)
0857e437 +0x0add:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e43c +0x0ae2:  mov    %eax,(%esp)
0857e43f +0x0ae5:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857e444 +0x0aea:  mov    %eax,(%esp)
0857e447 +0x0aed:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e44c +0x0af2:  cmp    $0xffffffff,%eax
0857e44f +0x0af5:  setne  %al
0857e452 +0x0af8:  test   %al,%al
0857e454 +0x0afa:  je     0857e5f3 <+0xc99>
0857e45a +0x0b00:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e45f +0x0b05:  mov    -0x58(%ebp),%edx
0857e462 +0x0b08:  mov    %edx,0x4(%esp)
0857e466 +0x0b0c:  mov    %eax,(%esp)
0857e469 +0x0b0f:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e46e +0x0b14:  mov    %eax,(%esp)
0857e471 +0x0b17:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857e476 +0x0b1c:  mov    %eax,(%esp)
0857e479 +0x0b1f:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e47e +0x0b24:  shr    $0x5,%eax
0857e481 +0x0b27:  mov    -0x188(%ebp,%eax,4),%ebx
0857e488 +0x0b2e:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e48d +0x0b33:  mov    -0x58(%ebp),%edx
0857e490 +0x0b36:  mov    %edx,0x4(%esp)
0857e494 +0x0b3a:  mov    %eax,(%esp)
0857e497 +0x0b3d:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e49c +0x0b42:  mov    %eax,(%esp)
0857e49f +0x0b45:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857e4a4 +0x0b4a:  mov    %eax,(%esp)
0857e4a7 +0x0b4d:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e4ac +0x0b52:  and    $0x1f,%eax
0857e4af +0x0b55:  mov    %ebx,%esi
0857e4b1 +0x0b57:  mov    %eax,%ecx
0857e4b3 +0x0b59:  sar    %cl,%esi
0857e4b5 +0x0b5b:  mov    %esi,%eax
0857e4b7 +0x0b5d:  and    $0x1,%eax
0857e4ba +0x0b60:  test   %al,%al
0857e4bc +0x0b62:  je     0857e5f3 <+0xc99>
0857e4c2 +0x0b68:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e4c7 +0x0b6d:  mov    -0x58(%ebp),%edx
0857e4ca +0x0b70:  mov    %edx,0x4(%esp)
0857e4ce +0x0b74:  mov    %eax,(%esp)
0857e4d1 +0x0b77:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e4d6 +0x0b7c:  mov    %eax,(%esp)
0857e4d9 +0x0b7f:  call   0846e53c <_ZN17CGuildServerProxy9OnTcpRecvEv>  ; CGuildServerProxy::OnTcpRecv()
0857e4de +0x0b84:  xor    $0x1,%eax
0857e4e1 +0x0b87:  test   %al,%al
0857e4e3 +0x0b89:  je     0857e5f3 <+0xc99>
0857e4e9 +0x0b8f:  movl   $"Guild::OnTcpRecv == false!!!",0x10(%esp)
0857e4f1 +0x0b97:  movl   $0x46f,0xc(%esp)
0857e4f9 +0x0b9f:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857e501 +0x0ba7:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e509 +0x0baf:  movl   $0x1,(%esp)
0857e510 +0x0bb6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857e515 +0x0bbb:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0857e51a +0x0bc0:  movl   $0x471,0x8(%esp)
0857e522 +0x0bc8:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e52a +0x0bd0:  mov    %eax,(%esp)
0857e52d +0x0bd3:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0857e532 +0x0bd8:  movl   $0x1,0x8(%esp)
0857e53a +0x0be0:  mov    %eax,0x4(%esp)
0857e53e +0x0be4:  lea    -0xf0(%ebp),%eax
0857e544 +0x0bea:  mov    %eax,(%esp)
0857e547 +0x0bed:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0857e54c +0x0bf2:  lea    -0xf0(%ebp),%eax
0857e552 +0x0bf8:  mov    %eax,(%esp)
0857e555 +0x0bfb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e55a +0x0c00:  movl   $0x15f,0x4(%esp)
0857e562 +0x0c08:  mov    %eax,(%esp)
0857e565 +0x0c0b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e56a +0x0c10:  lea    -0xf0(%ebp),%eax
0857e570 +0x0c16:  mov    %eax,(%esp)
0857e573 +0x0c19:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e578 +0x0c1e:  movl   $0xffffffff,0x4(%esp)
0857e580 +0x0c26:  mov    %eax,(%esp)
0857e583 +0x0c29:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e588 +0x0c2e:  lea    -0xf0(%ebp),%eax
0857e58e +0x0c34:  mov    %eax,(%esp)
0857e591 +0x0c37:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e596 +0x0c3c:  movl   $0xcb,0x4(%esp)
0857e59e +0x0c44:  mov    %eax,(%esp)
0857e5a1 +0x0c47:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e5a6 +0x0c4c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857e5ab +0x0c51:  lea    -0xf0(%ebp),%edx
0857e5b1 +0x0c57:  mov    %edx,0x8(%esp)
0857e5b5 +0x0c5b:  movl   $0x1,0x4(%esp)
0857e5bd +0x0c63:  mov    %eax,(%esp)
0857e5c0 +0x0c66:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0857e5c5 +0x0c6b:  jmp    0857e5e5 <+0xc8b>
0857e5c7 +0x0c6d:  mov    %edx,%ebx
0857e5c9 +0x0c6f:  mov    %eax,%esi
0857e5cb +0x0c71:  lea    -0xf0(%ebp),%eax
0857e5d1 +0x0c77:  mov    %eax,(%esp)
0857e5d4 +0x0c7a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e5d9 +0x0c7f:  mov    %esi,%eax
0857e5db +0x0c81:  mov    %ebx,%edx
0857e5dd +0x0c83:  mov    %eax,(%esp)
0857e5e0 +0x0c86:  call   08ae3750 <_Unwind_Resume>
0857e5e5 +0x0c8b:  lea    -0xf0(%ebp),%eax
0857e5eb +0x0c91:  mov    %eax,(%esp)
0857e5ee +0x0c94:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e5f3 +0x0c99:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e5f8 +0x0c9e:  mov    -0x58(%ebp),%edx
0857e5fb +0x0ca1:  mov    %edx,0x4(%esp)
0857e5ff +0x0ca5:  mov    %eax,(%esp)
0857e602 +0x0ca8:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e607 +0x0cad:  mov    %eax,(%esp)
0857e60a +0x0cb0:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857e60f +0x0cb5:  mov    %eax,(%esp)
0857e612 +0x0cb8:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e617 +0x0cbd:  cmp    $0xffffffff,%eax
0857e61a +0x0cc0:  setne  %al
0857e61d +0x0cc3:  test   %al,%al
0857e61f +0x0cc5:  je     0857e7c7 <+0xe6d>
0857e625 +0x0ccb:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e62a +0x0cd0:  mov    -0x58(%ebp),%edx
0857e62d +0x0cd3:  mov    %edx,0x4(%esp)
0857e631 +0x0cd7:  mov    %eax,(%esp)
0857e634 +0x0cda:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e639 +0x0cdf:  mov    %eax,(%esp)
0857e63c +0x0ce2:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857e641 +0x0ce7:  mov    %eax,(%esp)
0857e644 +0x0cea:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e649 +0x0cef:  shr    $0x5,%eax
0857e64c +0x0cf2:  mov    -0x208(%ebp,%eax,4),%ebx
0857e653 +0x0cf9:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e658 +0x0cfe:  mov    -0x58(%ebp),%edx
0857e65b +0x0d01:  mov    %edx,0x4(%esp)
0857e65f +0x0d05:  mov    %eax,(%esp)
0857e662 +0x0d08:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e667 +0x0d0d:  mov    %eax,(%esp)
0857e66a +0x0d10:  call   0846fc8e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa5e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa5e
0857e66f +0x0d15:  mov    %eax,(%esp)
0857e672 +0x0d18:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
0857e677 +0x0d1d:  and    $0x1f,%eax
0857e67a +0x0d20:  mov    %ebx,%esi
0857e67c +0x0d22:  mov    %eax,%ecx
0857e67e +0x0d24:  sar    %cl,%esi
0857e680 +0x0d26:  mov    %esi,%eax
0857e682 +0x0d28:  and    $0x1,%eax
0857e685 +0x0d2b:  test   %al,%al
0857e687 +0x0d2d:  je     0857e7c7 <+0xe6d>
0857e68d +0x0d33:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0857e692 +0x0d38:  mov    -0x58(%ebp),%edx
0857e695 +0x0d3b:  mov    %edx,0x4(%esp)
0857e699 +0x0d3f:  mov    %eax,(%esp)
0857e69c +0x0d42:  call   0857f8fe <_GLOBAL__I_g_bUdp_TH_start+0x515>  ; global constructors keyed to g_bUdp_TH_start+0x515
0857e6a1 +0x0d47:  mov    %eax,(%esp)
0857e6a4 +0x0d4a:  call   0846e5cc <_ZN17CGuildServerProxy9OnTcpSendEv>  ; CGuildServerProxy::OnTcpSend()
0857e6a9 +0x0d4f:  mov    %eax,-0x40(%ebp)
0857e6ac +0x0d52:  cmpl   $0x0,-0x40(%ebp)
0857e6b0 +0x0d56:  jns    0857e7c7 <+0xe6d>
0857e6b6 +0x0d5c:  mov    -0x40(%ebp),%eax
0857e6b9 +0x0d5f:  mov    %eax,0x14(%esp)
0857e6bd +0x0d63:  movl   $"Guild::OnTcpSend == false!!!remain_size(%d)",0x10(%esp)
0857e6c5 +0x0d6b:  movl   $0x480,0xc(%esp)
0857e6cd +0x0d73:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857e6d5 +0x0d7b:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e6dd +0x0d83:  movl   $0x1,(%esp)
0857e6e4 +0x0d8a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857e6e9 +0x0d8f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0857e6ee +0x0d94:  movl   $0x481,0x8(%esp)
0857e6f6 +0x0d9c:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e6fe +0x0da4:  mov    %eax,(%esp)
0857e701 +0x0da7:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0857e706 +0x0dac:  movl   $0x1,0x8(%esp)
0857e70e +0x0db4:  mov    %eax,0x4(%esp)
0857e712 +0x0db8:  lea    -0xf8(%ebp),%eax
0857e718 +0x0dbe:  mov    %eax,(%esp)
0857e71b +0x0dc1:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0857e720 +0x0dc6:  lea    -0xf8(%ebp),%eax
0857e726 +0x0dcc:  mov    %eax,(%esp)
0857e729 +0x0dcf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e72e +0x0dd4:  movl   $0x15f,0x4(%esp)
0857e736 +0x0ddc:  mov    %eax,(%esp)
0857e739 +0x0ddf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e73e +0x0de4:  lea    -0xf8(%ebp),%eax
0857e744 +0x0dea:  mov    %eax,(%esp)
0857e747 +0x0ded:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e74c +0x0df2:  movl   $0xffffffff,0x4(%esp)
0857e754 +0x0dfa:  mov    %eax,(%esp)
0857e757 +0x0dfd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e75c +0x0e02:  lea    -0xf8(%ebp),%eax
0857e762 +0x0e08:  mov    %eax,(%esp)
0857e765 +0x0e0b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0857e76a +0x0e10:  movl   $0xcb,0x4(%esp)
0857e772 +0x0e18:  mov    %eax,(%esp)
0857e775 +0x0e1b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0857e77a +0x0e20:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0857e77f +0x0e25:  lea    -0xf8(%ebp),%edx
0857e785 +0x0e2b:  mov    %edx,0x8(%esp)
0857e789 +0x0e2f:  movl   $0x1,0x4(%esp)
0857e791 +0x0e37:  mov    %eax,(%esp)
0857e794 +0x0e3a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0857e799 +0x0e3f:  jmp    0857e7b9 <+0xe5f>
0857e79b +0x0e41:  mov    %edx,%ebx
0857e79d +0x0e43:  mov    %eax,%esi
0857e79f +0x0e45:  lea    -0xf8(%ebp),%eax
0857e7a5 +0x0e4b:  mov    %eax,(%esp)
0857e7a8 +0x0e4e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e7ad +0x0e53:  mov    %esi,%eax
0857e7af +0x0e55:  mov    %ebx,%edx
0857e7b1 +0x0e57:  mov    %eax,(%esp)
0857e7b4 +0x0e5a:  call   08ae3750 <_Unwind_Resume>
0857e7b9 +0x0e5f:  lea    -0xf8(%ebp),%eax
0857e7bf +0x0e65:  mov    %eax,(%esp)
0857e7c2 +0x0e68:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0857e7c7 +0x0e6d:  addl   $0x1,-0x58(%ebp)
0857e7cb +0x0e71:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0857e7d0 +0x0e76:  mov    %eax,(%esp)
0857e7d3 +0x0e79:  call   0857f8c2 <_GLOBAL__I_g_bUdp_TH_start+0x4d9>  ; global constructors keyed to g_bUdp_TH_start+0x4d9
0857e7d8 +0x0e7e:  cmp    -0x58(%ebp),%eax
0857e7db +0x0e81:  setg   %al
0857e7de +0x0e84:  test   %al,%al
0857e7e0 +0x0e86:  jne    0857e089 <+0x72f>
0857e7e6 +0x0e8c:  mov    -0xc8(%ebp),%eax
0857e7ec +0x0e92:  cmp    $0xffffffff,%eax
0857e7ef +0x0e95:  je     0857e832 <+0xed8>
0857e7f1 +0x0e97:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0857e7f6 +0x0e9c:  mov    %eax,(%esp)
0857e7f9 +0x0e9f:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857e7fe +0x0ea4:  cmp    $0x2,%eax
0857e801 +0x0ea7:  jne    0857e832 <+0xed8>
0857e803 +0x0ea9:  mov    -0xc8(%ebp),%eax
0857e809 +0x0eaf:  shr    $0x5,%eax
0857e80c +0x0eb2:  mov    -0x188(%ebp,%eax,4),%edx
0857e813 +0x0eb9:  mov    -0xc8(%ebp),%eax
0857e819 +0x0ebf:  and    $0x1f,%eax
0857e81c +0x0ec2:  mov    %edx,%ebx
0857e81e +0x0ec4:  mov    %eax,%ecx
0857e820 +0x0ec6:  sar    %cl,%ebx
0857e822 +0x0ec8:  mov    %ebx,%eax
0857e824 +0x0eca:  and    $0x1,%eax
0857e827 +0x0ecd:  test   %al,%al
0857e829 +0x0ecf:  je     0857e832 <+0xed8>
0857e82b +0x0ed1:  mov    $0x1,%eax
0857e830 +0x0ed6:  jmp    0857e837 <+0xedd>
0857e832 +0x0ed8:  mov    $0x0,%eax
0857e837 +0x0edd:  test   %al,%al
0857e839 +0x0edf:  je     0857e87b <+0xf21>
0857e83b +0x0ee1:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0857e840 +0x0ee6:  mov    %eax,(%esp)
0857e843 +0x0ee9:  call   082fd90e <_ZN15BaseServerProxy9OnTcpRecvEv>  ; BaseServerProxy::OnTcpRecv()
0857e848 +0x0eee:  xor    $0x1,%eax
0857e84b +0x0ef1:  test   %al,%al
0857e84d +0x0ef3:  je     0857e87b <+0xf21>
0857e84f +0x0ef5:  movl   $"HADES::OnTcpRecv == false!!!",0x10(%esp)
0857e857 +0x0efd:  movl   $0x493,0xc(%esp)
0857e85f +0x0f05:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857e867 +0x0f0d:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e86f +0x0f15:  movl   $0x1,(%esp)
0857e876 +0x0f1c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857e87b +0x0f21:  mov    -0xc8(%ebp),%eax
0857e881 +0x0f27:  cmp    $0xffffffff,%eax
0857e884 +0x0f2a:  je     0857e8f7 <+0xf9d>
0857e886 +0x0f2c:  mov    -0xc8(%ebp),%eax
0857e88c +0x0f32:  shr    $0x5,%eax
0857e88f +0x0f35:  mov    -0x208(%ebp,%eax,4),%edx
0857e896 +0x0f3c:  mov    -0xc8(%ebp),%eax
0857e89c +0x0f42:  and    $0x1f,%eax
0857e89f +0x0f45:  mov    %edx,%ebx
0857e8a1 +0x0f47:  mov    %eax,%ecx
0857e8a3 +0x0f49:  sar    %cl,%ebx
0857e8a5 +0x0f4b:  mov    %ebx,%eax
0857e8a7 +0x0f4d:  and    $0x1,%eax
0857e8aa +0x0f50:  test   %al,%al
0857e8ac +0x0f52:  je     0857e8f7 <+0xf9d>
0857e8ae +0x0f54:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0857e8b3 +0x0f59:  mov    %eax,(%esp)
0857e8b6 +0x0f5c:  call   082fdaaa <_ZN15BaseServerProxy9OnTcpSendEv>  ; BaseServerProxy::OnTcpSend()
0857e8bb +0x0f61:  mov    %eax,-0x3c(%ebp)
0857e8be +0x0f64:  cmpl   $0x0,-0x3c(%ebp)
0857e8c2 +0x0f68:  jns    0857e8f7 <+0xf9d>
0857e8c4 +0x0f6a:  mov    -0x3c(%ebp),%eax
0857e8c7 +0x0f6d:  mov    %eax,0x14(%esp)
0857e8cb +0x0f71:  movl   $"HADES::OnTcpSend == false!!!remain_size(%d)",0x10(%esp)
0857e8d3 +0x0f79:  movl   $0x49d,0xc(%esp)
0857e8db +0x0f81:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857e8e3 +0x0f89:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e8eb +0x0f91:  movl   $0x1,(%esp)
0857e8f2 +0x0f98:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857e8f7 +0x0f9d:  mov    -0xb8(%ebp),%eax
0857e8fd +0x0fa3:  cmp    $0xffffffff,%eax
0857e900 +0x0fa6:  je     0857e943 <+0xfe9>
0857e902 +0x0fa8:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857e907 +0x0fad:  mov    %eax,(%esp)
0857e90a +0x0fb0:  call   0857f456 <_GLOBAL__I_g_bUdp_TH_start+0x6d>  ; global constructors keyed to g_bUdp_TH_start+0x6d
0857e90f +0x0fb5:  cmp    $0x2,%eax
0857e912 +0x0fb8:  jne    0857e943 <+0xfe9>
0857e914 +0x0fba:  mov    -0xb8(%ebp),%eax
0857e91a +0x0fc0:  shr    $0x5,%eax
0857e91d +0x0fc3:  mov    -0x188(%ebp,%eax,4),%edx
0857e924 +0x0fca:  mov    -0xb8(%ebp),%eax
0857e92a +0x0fd0:  and    $0x1f,%eax
0857e92d +0x0fd3:  mov    %edx,%ebx
0857e92f +0x0fd5:  mov    %eax,%ecx
0857e931 +0x0fd7:  sar    %cl,%ebx
0857e933 +0x0fd9:  mov    %ebx,%eax
0857e935 +0x0fdb:  and    $0x1,%eax
0857e938 +0x0fde:  test   %al,%al
0857e93a +0x0fe0:  je     0857e943 <+0xfe9>
0857e93c +0x0fe2:  mov    $0x1,%eax
0857e941 +0x0fe7:  jmp    0857e948 <+0xfee>
0857e943 +0x0fe9:  mov    $0x0,%eax
0857e948 +0x0fee:  test   %al,%al
0857e94a +0x0ff0:  je     0857e99b <+0x1041>
0857e94c +0x0ff2:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857e951 +0x0ff7:  mov    %eax,(%esp)
0857e954 +0x0ffa:  call   08471a9a <_ZN18CPCRoomServerProxy9OnTcpRecvEv>  ; CPCRoomServerProxy::OnTcpRecv()
0857e959 +0x0fff:  xor    $0x1,%eax
0857e95c +0x1002:  test   %al,%al
0857e95e +0x1004:  je     0857e99b <+0x1041>
0857e960 +0x1006:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857e967 +0x100d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857e96c +0x1012:  mov    %eax,-0x68(%ebp)
0857e96f +0x1015:  movl   $"PCROOM::OnTcpRecv == false!!!",0x10(%esp)
0857e977 +0x101d:  movl   $0x4e0,0xc(%esp)
0857e97f +0x1025:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857e987 +0x102d:  movl   $"NetworkThread.cpp",0x4(%esp)
0857e98f +0x1035:  movl   $0x1,(%esp)
0857e996 +0x103c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857e99b +0x1041:  mov    -0xb8(%ebp),%eax
0857e9a1 +0x1047:  cmp    $0xffffffff,%eax
0857e9a4 +0x104a:  je     0857eab0 <+0x1156>
0857e9aa +0x1050:  mov    -0xb8(%ebp),%eax
0857e9b0 +0x1056:  shr    $0x5,%eax
0857e9b3 +0x1059:  mov    -0x208(%ebp,%eax,4),%edx
0857e9ba +0x1060:  mov    -0xb8(%ebp),%eax
0857e9c0 +0x1066:  and    $0x1f,%eax
0857e9c3 +0x1069:  mov    %edx,%ebx
0857e9c5 +0x106b:  mov    %eax,%ecx
0857e9c7 +0x106d:  sar    %cl,%ebx
0857e9c9 +0x106f:  mov    %ebx,%eax
0857e9cb +0x1071:  and    $0x1,%eax
0857e9ce +0x1074:  test   %al,%al
0857e9d0 +0x1076:  je     0857eab0 <+0x1156>
0857e9d6 +0x107c:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857e9db +0x1081:  mov    %eax,(%esp)
0857e9de +0x1084:  call   0857f456 <_GLOBAL__I_g_bUdp_TH_start+0x6d>  ; global constructors keyed to g_bUdp_TH_start+0x6d
0857e9e3 +0x1089:  cmp    $0x1,%eax
0857e9e6 +0x108c:  sete   %al
0857e9e9 +0x108f:  test   %al,%al
0857e9eb +0x1091:  je     0857ea58 <+0x10fe>
0857e9ed +0x1093:  movl   $0x0,-0x34(%ebp)
0857e9f4 +0x109a:  movl   $0x4,-0xfc(%ebp)
0857e9fe +0x10a4:  lea    -0xfc(%ebp),%edx
0857ea04 +0x10aa:  mov    -0xb8(%ebp),%eax
0857ea0a +0x10b0:  mov    %edx,0x10(%esp)
0857ea0e +0x10b4:  lea    -0xcc(%ebp),%edx
0857ea14 +0x10ba:  mov    %edx,0xc(%esp)
0857ea18 +0x10be:  movl   $0x4,0x8(%esp)
0857ea20 +0x10c6:  movl   $0x1,0x4(%esp)
0857ea28 +0x10ce:  mov    %eax,(%esp)
0857ea2b +0x10d1:  call   0807e6e0 <_init+0xfd8>
0857ea30 +0x10d6:  mov    %eax,-0x34(%ebp)
0857ea33 +0x10d9:  mov    -0xcc(%ebp),%eax
0857ea39 +0x10df:  test   %eax,%eax
0857ea3b +0x10e1:  jne    0857ea58 <+0x10fe>
0857ea3d +0x10e3:  cmpl   $0x0,-0x34(%ebp)
0857ea41 +0x10e7:  jne    0857ea58 <+0x10fe>
0857ea43 +0x10e9:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857ea48 +0x10ee:  movl   $0x2,0x4(%esp)
0857ea50 +0x10f6:  mov    %eax,(%esp)
0857ea53 +0x10f9:  call   0857f444 <_GLOBAL__I_g_bUdp_TH_start+0x5b>  ; global constructors keyed to g_bUdp_TH_start+0x5b
0857ea58 +0x10fe:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857ea5d +0x1103:  mov    %eax,(%esp)
0857ea60 +0x1106:  call   08471b32 <_ZN18CPCRoomServerProxy9OnTcpSendEv>  ; CPCRoomServerProxy::OnTcpSend()
0857ea65 +0x110b:  mov    %eax,-0x38(%ebp)
0857ea68 +0x110e:  cmpl   $0x0,-0x38(%ebp)
0857ea6c +0x1112:  jns    0857eab0 <+0x1156>
0857ea6e +0x1114:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857ea75 +0x111b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857ea7a +0x1120:  mov    %eax,-0x68(%ebp)
0857ea7d +0x1123:  mov    -0x38(%ebp),%eax
0857ea80 +0x1126:  mov    %eax,0x14(%esp)
0857ea84 +0x112a:  movl   $"PCROOM::OnTcpSend == false!!!remain_size(%d)",0x10(%esp)
0857ea8c +0x1132:  movl   $0x4f9,0xc(%esp)
0857ea94 +0x113a:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ea9c +0x1142:  movl   $"NetworkThread.cpp",0x4(%esp)
0857eaa4 +0x114a:  movl   $0x1,(%esp)
0857eaab +0x1151:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857eab0 +0x1156:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857eab5 +0x115b:  mov    %eax,(%esp)
0857eab8 +0x115e:  call   0857f456 <_GLOBAL__I_g_bUdp_TH_start+0x6d>  ; global constructors keyed to g_bUdp_TH_start+0x6d
0857eabd +0x1163:  test   %eax,%eax
0857eabf +0x1165:  sete   %al
0857eac2 +0x1168:  test   %al,%al
0857eac4 +0x116a:  je     0857eb12 <+0x11b8>
0857eac6 +0x116c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857eacd +0x1173:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857ead2 +0x1178:  sub    -0x68(%ebp),%eax
0857ead5 +0x117b:  cmp    $0x3c,%eax
0857ead8 +0x117e:  setg   %al
0857eadb +0x1181:  test   %al,%al
0857eadd +0x1183:  je     0857eb5e <+0x1204>
0857eadf +0x1185:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857eae4 +0x118a:  mov    %eax,(%esp)
0857eae7 +0x118d:  call   084718e2 <_ZN18CPCRoomServerProxy7InitTcpEv>  ; CPCRoomServerProxy::InitTcp()
0857eaec +0x1192:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857eaf1 +0x1197:  movl   $0x1,0x4(%esp)
0857eaf9 +0x119f:  mov    %eax,(%esp)
0857eafc +0x11a2:  call   0857f444 <_GLOBAL__I_g_bUdp_TH_start+0x5b>  ; global constructors keyed to g_bUdp_TH_start+0x5b
0857eb01 +0x11a7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857eb08 +0x11ae:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857eb0d +0x11b3:  mov    %eax,-0x68(%ebp)
0857eb10 +0x11b6:  jmp    0857eb5e <+0x1204>
0857eb12 +0x11b8:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857eb17 +0x11bd:  mov    %eax,(%esp)
0857eb1a +0x11c0:  call   0857f456 <_GLOBAL__I_g_bUdp_TH_start+0x6d>  ; global constructors keyed to g_bUdp_TH_start+0x6d
0857eb1f +0x11c5:  cmp    $0x1,%eax
0857eb22 +0x11c8:  sete   %al
0857eb25 +0x11cb:  test   %al,%al
0857eb27 +0x11cd:  je     0857eb5e <+0x1204>
0857eb29 +0x11cf:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857eb30 +0x11d6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857eb35 +0x11db:  sub    -0x68(%ebp),%eax
0857eb38 +0x11de:  cmp    $0x3c,%eax
0857eb3b +0x11e1:  setg   %al
0857eb3e +0x11e4:  test   %al,%al
0857eb40 +0x11e6:  je     0857eb5e <+0x1204>
0857eb42 +0x11e8:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857eb49 +0x11ef:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857eb4e +0x11f4:  mov    %eax,-0x68(%ebp)
0857eb51 +0x11f7:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0857eb56 +0x11fc:  mov    %eax,(%esp)
0857eb59 +0x11ff:  call   084719de <_ZN18CPCRoomServerProxy10DisconnectEv>  ; CPCRoomServerProxy::Disconnect()
0857eb5e +0x1204:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0857eb63 +0x1209:  mov    %eax,(%esp)
0857eb66 +0x120c:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0857eb6b +0x1211:  test   %al,%al
0857eb6d +0x1213:  je     0857eda3 <+0x1449>
0857eb73 +0x1219:  mov    -0xbc(%ebp),%eax
0857eb79 +0x121f:  cmp    $0xffffffff,%eax
0857eb7c +0x1222:  je     0857ebbf <+0x1265>
0857eb7e +0x1224:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857eb83 +0x1229:  mov    %eax,(%esp)
0857eb86 +0x122c:  call   0857f476 <_GLOBAL__I_g_bUdp_TH_start+0x8d>  ; global constructors keyed to g_bUdp_TH_start+0x8d
0857eb8b +0x1231:  cmp    $0x2,%eax
0857eb8e +0x1234:  jne    0857ebbf <+0x1265>
0857eb90 +0x1236:  mov    -0xbc(%ebp),%eax
0857eb96 +0x123c:  shr    $0x5,%eax
0857eb99 +0x123f:  mov    -0x188(%ebp,%eax,4),%edx
0857eba0 +0x1246:  mov    -0xbc(%ebp),%eax
0857eba6 +0x124c:  and    $0x1f,%eax
0857eba9 +0x124f:  mov    %edx,%ebx
0857ebab +0x1251:  mov    %eax,%ecx
0857ebad +0x1253:  sar    %cl,%ebx
0857ebaf +0x1255:  mov    %ebx,%eax
0857ebb1 +0x1257:  and    $0x1,%eax
0857ebb4 +0x125a:  test   %al,%al
0857ebb6 +0x125c:  je     0857ebbf <+0x1265>
0857ebb8 +0x125e:  mov    $0x1,%eax
0857ebbd +0x1263:  jmp    0857ebc4 <+0x126a>
0857ebbf +0x1265:  mov    $0x0,%eax
0857ebc4 +0x126a:  test   %al,%al
0857ebc6 +0x126c:  je     0857ec08 <+0x12ae>
0857ebc8 +0x126e:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ebcd +0x1273:  mov    %eax,(%esp)
0857ebd0 +0x1276:  call   0846c82c <_ZN21CCommunityServerProxy9OnTcpRecvEv>  ; CCommunityServerProxy::OnTcpRecv()
0857ebd5 +0x127b:  xor    $0x1,%eax
0857ebd8 +0x127e:  test   %al,%al
0857ebda +0x1280:  je     0857ec08 <+0x12ae>
0857ebdc +0x1282:  movl   $"COMMUNITY::OnTcpRecv == false!!!",0x10(%esp)
0857ebe4 +0x128a:  movl   $0x521,0xc(%esp)
0857ebec +0x1292:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ebf4 +0x129a:  movl   $"NetworkThread.cpp",0x4(%esp)
0857ebfc +0x12a2:  movl   $0x1,(%esp)
0857ec03 +0x12a9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857ec08 +0x12ae:  mov    -0xbc(%ebp),%eax
0857ec0e +0x12b4:  cmp    $0xffffffff,%eax
0857ec11 +0x12b7:  je     0857ed0e <+0x13b4>
0857ec17 +0x12bd:  mov    -0xbc(%ebp),%eax
0857ec1d +0x12c3:  shr    $0x5,%eax
0857ec20 +0x12c6:  mov    -0x208(%ebp,%eax,4),%edx
0857ec27 +0x12cd:  mov    -0xbc(%ebp),%eax
0857ec2d +0x12d3:  and    $0x1f,%eax
0857ec30 +0x12d6:  mov    %edx,%ebx
0857ec32 +0x12d8:  mov    %eax,%ecx
0857ec34 +0x12da:  sar    %cl,%ebx
0857ec36 +0x12dc:  mov    %ebx,%eax
0857ec38 +0x12de:  and    $0x1,%eax
0857ec3b +0x12e1:  test   %al,%al
0857ec3d +0x12e3:  je     0857ed0e <+0x13b4>
0857ec43 +0x12e9:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ec48 +0x12ee:  mov    %eax,(%esp)
0857ec4b +0x12f1:  call   0857f476 <_GLOBAL__I_g_bUdp_TH_start+0x8d>  ; global constructors keyed to g_bUdp_TH_start+0x8d
0857ec50 +0x12f6:  cmp    $0x1,%eax
0857ec53 +0x12f9:  sete   %al
0857ec56 +0x12fc:  test   %al,%al
0857ec58 +0x12fe:  je     0857ecc5 <+0x136b>
0857ec5a +0x1300:  movl   $0x0,-0x2c(%ebp)
0857ec61 +0x1307:  movl   $0x4,-0x100(%ebp)
0857ec6b +0x1311:  lea    -0x100(%ebp),%edx
0857ec71 +0x1317:  mov    -0xbc(%ebp),%eax
0857ec77 +0x131d:  mov    %edx,0x10(%esp)
0857ec7b +0x1321:  lea    -0xcc(%ebp),%edx
0857ec81 +0x1327:  mov    %edx,0xc(%esp)
0857ec85 +0x132b:  movl   $0x4,0x8(%esp)
0857ec8d +0x1333:  movl   $0x1,0x4(%esp)
0857ec95 +0x133b:  mov    %eax,(%esp)
0857ec98 +0x133e:  call   0807e6e0 <_init+0xfd8>
0857ec9d +0x1343:  mov    %eax,-0x2c(%ebp)
0857eca0 +0x1346:  mov    -0xcc(%ebp),%eax
0857eca6 +0x134c:  test   %eax,%eax
0857eca8 +0x134e:  jne    0857ecc5 <+0x136b>
0857ecaa +0x1350:  cmpl   $0x0,-0x2c(%ebp)
0857ecae +0x1354:  jne    0857ecc5 <+0x136b>
0857ecb0 +0x1356:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ecb5 +0x135b:  movl   $0x2,0x4(%esp)
0857ecbd +0x1363:  mov    %eax,(%esp)
0857ecc0 +0x1366:  call   0857f464 <_GLOBAL__I_g_bUdp_TH_start+0x7b>  ; global constructors keyed to g_bUdp_TH_start+0x7b
0857ecc5 +0x136b:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ecca +0x1370:  mov    %eax,(%esp)
0857eccd +0x1373:  call   0846c8c4 <_ZN21CCommunityServerProxy9OnTcpSendEv>  ; CCommunityServerProxy::OnTcpSend()
0857ecd2 +0x1378:  mov    %eax,-0x30(%ebp)
0857ecd5 +0x137b:  cmpl   $0x0,-0x30(%ebp)
0857ecd9 +0x137f:  jns    0857ed0e <+0x13b4>
0857ecdb +0x1381:  mov    -0x30(%ebp),%eax
0857ecde +0x1384:  mov    %eax,0x14(%esp)
0857ece2 +0x1388:  movl   $"COMMUNITY::OnTcpSend == false!!!remain_size(%d)",0x10(%esp)
0857ecea +0x1390:  movl   $0x537,0xc(%esp)
0857ecf2 +0x1398:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ecfa +0x13a0:  movl   $"NetworkThread.cpp",0x4(%esp)
0857ed02 +0x13a8:  movl   $0x1,(%esp)
0857ed09 +0x13af:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857ed0e +0x13b4:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ed13 +0x13b9:  mov    %eax,(%esp)
0857ed16 +0x13bc:  call   0857f476 <_GLOBAL__I_g_bUdp_TH_start+0x8d>  ; global constructors keyed to g_bUdp_TH_start+0x8d
0857ed1b +0x13c1:  test   %eax,%eax
0857ed1d +0x13c3:  sete   %al
0857ed20 +0x13c6:  test   %al,%al
0857ed22 +0x13c8:  je     0857ed57 <+0x13fd>
0857ed24 +0x13ca:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ed29 +0x13cf:  mov    %eax,(%esp)
0857ed2c +0x13d2:  call   0846c674 <_ZN21CCommunityServerProxy7InitTcpEv>  ; CCommunityServerProxy::InitTcp()
0857ed31 +0x13d7:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ed36 +0x13dc:  movl   $0x1,0x4(%esp)
0857ed3e +0x13e4:  mov    %eax,(%esp)
0857ed41 +0x13e7:  call   0857f464 <_GLOBAL__I_g_bUdp_TH_start+0x7b>  ; global constructors keyed to g_bUdp_TH_start+0x7b
0857ed46 +0x13ec:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857ed4d +0x13f3:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857ed52 +0x13f8:  mov    %eax,-0x64(%ebp)
0857ed55 +0x13fb:  jmp    0857eda3 <+0x1449>
0857ed57 +0x13fd:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ed5c +0x1402:  mov    %eax,(%esp)
0857ed5f +0x1405:  call   0857f476 <_GLOBAL__I_g_bUdp_TH_start+0x8d>  ; global constructors keyed to g_bUdp_TH_start+0x8d
0857ed64 +0x140a:  cmp    $0x1,%eax
0857ed67 +0x140d:  sete   %al
0857ed6a +0x1410:  test   %al,%al
0857ed6c +0x1412:  je     0857eda3 <+0x1449>
0857ed6e +0x1414:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857ed75 +0x141b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857ed7a +0x1420:  sub    -0x64(%ebp),%eax
0857ed7d +0x1423:  cmp    $0x3c,%eax
0857ed80 +0x1426:  setg   %al
0857ed83 +0x1429:  test   %al,%al
0857ed85 +0x142b:  je     0857eda3 <+0x1449>
0857ed87 +0x142d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857ed8e +0x1434:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857ed93 +0x1439:  mov    %eax,-0x64(%ebp)
0857ed96 +0x143c:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0857ed9b +0x1441:  mov    %eax,(%esp)
0857ed9e +0x1444:  call   0846c770 <_ZN21CCommunityServerProxy10DisconnectEv>  ; CCommunityServerProxy::Disconnect()
0857eda3 +0x1449:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0857eda8 +0x144e:  mov    %eax,(%esp)
0857edab +0x1451:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0857edb0 +0x1456:  xor    $0x1,%eax
0857edb3 +0x1459:  test   %al,%al
0857edb5 +0x145b:  je     0857f38c <+0x1a32>
0857edbb +0x1461:  mov    -0xc0(%ebp),%eax
0857edc1 +0x1467:  cmp    $0xffffffff,%eax
0857edc4 +0x146a:  je     0857ee07 <+0x14ad>
0857edc6 +0x146c:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857edcb +0x1471:  mov    %eax,(%esp)
0857edce +0x1474:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857edd3 +0x1479:  cmp    $0x2,%eax
0857edd6 +0x147c:  jne    0857ee07 <+0x14ad>
0857edd8 +0x147e:  mov    -0xc0(%ebp),%eax
0857edde +0x1484:  shr    $0x5,%eax
0857ede1 +0x1487:  mov    -0x188(%ebp,%eax,4),%edx
0857ede8 +0x148e:  mov    -0xc0(%ebp),%eax
0857edee +0x1494:  and    $0x1f,%eax
0857edf1 +0x1497:  mov    %edx,%ebx
0857edf3 +0x1499:  mov    %eax,%ecx
0857edf5 +0x149b:  sar    %cl,%ebx
0857edf7 +0x149d:  mov    %ebx,%eax
0857edf9 +0x149f:  and    $0x1,%eax
0857edfc +0x14a2:  test   %al,%al
0857edfe +0x14a4:  je     0857ee07 <+0x14ad>
0857ee00 +0x14a6:  mov    $0x1,%eax
0857ee05 +0x14ab:  jmp    0857ee0c <+0x14b2>
0857ee07 +0x14ad:  mov    $0x0,%eax
0857ee0c +0x14b2:  test   %al,%al
0857ee0e +0x14b4:  je     0857ee50 <+0x14f6>
0857ee10 +0x14b6:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857ee15 +0x14bb:  mov    %eax,(%esp)
0857ee18 +0x14be:  call   082fd90e <_ZN15BaseServerProxy9OnTcpRecvEv>  ; BaseServerProxy::OnTcpRecv()
0857ee1d +0x14c3:  xor    $0x1,%eax
0857ee20 +0x14c6:  test   %al,%al
0857ee22 +0x14c8:  je     0857ee50 <+0x14f6>
0857ee24 +0x14ca:  movl   $"AUCTION - OnTcpRecv == false!!!",0x10(%esp)
0857ee2c +0x14d2:  movl   $0x734,0xc(%esp)
0857ee34 +0x14da:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ee3c +0x14e2:  movl   $"NetworkThread.cpp",0x4(%esp)
0857ee44 +0x14ea:  movl   $0x1,(%esp)
0857ee4b +0x14f1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857ee50 +0x14f6:  mov    -0xc0(%ebp),%eax
0857ee56 +0x14fc:  cmp    $0xffffffff,%eax
0857ee59 +0x14ff:  je     0857ef63 <+0x1609>
0857ee5f +0x1505:  mov    -0xc0(%ebp),%eax
0857ee65 +0x150b:  shr    $0x5,%eax
0857ee68 +0x150e:  mov    -0x208(%ebp,%eax,4),%edx
0857ee6f +0x1515:  mov    -0xc0(%ebp),%eax
0857ee75 +0x151b:  and    $0x1f,%eax
0857ee78 +0x151e:  mov    %edx,%ebx
0857ee7a +0x1520:  mov    %eax,%ecx
0857ee7c +0x1522:  sar    %cl,%ebx
0857ee7e +0x1524:  mov    %ebx,%eax
0857ee80 +0x1526:  and    $0x1,%eax
0857ee83 +0x1529:  test   %al,%al
0857ee85 +0x152b:  je     0857ef63 <+0x1609>
0857ee8b +0x1531:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857ee90 +0x1536:  mov    %eax,(%esp)
0857ee93 +0x1539:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857ee98 +0x153e:  cmp    $0x1,%eax
0857ee9b +0x1541:  sete   %al
0857ee9e +0x1544:  test   %al,%al
0857eea0 +0x1546:  je     0857ef1a <+0x15c0>
0857eea2 +0x1548:  movl   $0x0,-0x24(%ebp)
0857eea9 +0x154f:  movl   $0x4,-0x104(%ebp)
0857eeb3 +0x1559:  lea    -0x104(%ebp),%edx
0857eeb9 +0x155f:  mov    -0xc0(%ebp),%eax
0857eebf +0x1565:  mov    %edx,0x10(%esp)
0857eec3 +0x1569:  lea    -0xcc(%ebp),%edx
0857eec9 +0x156f:  mov    %edx,0xc(%esp)
0857eecd +0x1573:  movl   $0x4,0x8(%esp)
0857eed5 +0x157b:  movl   $0x1,0x4(%esp)
0857eedd +0x1583:  mov    %eax,(%esp)
0857eee0 +0x1586:  call   0807e6e0 <_init+0xfd8>
0857eee5 +0x158b:  mov    %eax,-0x24(%ebp)
0857eee8 +0x158e:  mov    -0xcc(%ebp),%eax
0857eeee +0x1594:  test   %eax,%eax
0857eef0 +0x1596:  jne    0857ef0d <+0x15b3>
0857eef2 +0x1598:  cmpl   $0x0,-0x24(%ebp)
0857eef6 +0x159c:  jne    0857ef0d <+0x15b3>
0857eef8 +0x159e:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857eefd +0x15a3:  movl   $0x2,0x4(%esp)
0857ef05 +0x15ab:  mov    %eax,(%esp)
0857ef08 +0x15ae:  call   0847091a <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x53>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x53
0857ef0d +0x15b3:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857ef12 +0x15b8:  mov    %eax,(%esp)
0857ef15 +0x15bb:  call   082f7b46 <_ZN19CAuctionServerProxy16SendRegistPacketEv>  ; CAuctionServerProxy::SendRegistPacket()
0857ef1a +0x15c0:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857ef1f +0x15c5:  mov    %eax,(%esp)
0857ef22 +0x15c8:  call   082fdaaa <_ZN15BaseServerProxy9OnTcpSendEv>  ; BaseServerProxy::OnTcpSend()
0857ef27 +0x15cd:  mov    %eax,-0x28(%ebp)
0857ef2a +0x15d0:  cmpl   $0x0,-0x28(%ebp)
0857ef2e +0x15d4:  jns    0857ef63 <+0x1609>
0857ef30 +0x15d6:  mov    -0x28(%ebp),%eax
0857ef33 +0x15d9:  mov    %eax,0x14(%esp)
0857ef37 +0x15dd:  movl   $"AUCTION - OnTcpSend == false!!!remain_size(%d)",0x10(%esp)
0857ef3f +0x15e5:  movl   $0x74c,0xc(%esp)
0857ef47 +0x15ed:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857ef4f +0x15f5:  movl   $"NetworkThread.cpp",0x4(%esp)
0857ef57 +0x15fd:  movl   $0x1,(%esp)
0857ef5e +0x1604:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857ef63 +0x1609:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857ef68 +0x160e:  mov    %eax,(%esp)
0857ef6b +0x1611:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857ef70 +0x1616:  test   %eax,%eax
0857ef72 +0x1618:  sete   %al
0857ef75 +0x161b:  test   %al,%al
0857ef77 +0x161d:  je     0857f014 <+0x16ba>
0857ef7d +0x1623:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857ef84 +0x162a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857ef89 +0x162f:  sub    -0x60(%ebp),%eax
0857ef8c +0x1632:  cmp    $0x3c,%eax
0857ef8f +0x1635:  setg   %al
0857ef92 +0x1638:  test   %al,%al
0857ef94 +0x163a:  je     0857f0a5 <+0x174b>
0857ef9a +0x1640:  movl   $0x0,0xc(%esp)
0857efa2 +0x1648:  movl   $0x754,0x8(%esp)
0857efaa +0x1650:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857efb2 +0x1658:  lea    -0xac(%ebp),%eax
0857efb8 +0x165e:  mov    %eax,(%esp)
0857efbb +0x1661:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857efc0 +0x1666:  movl   $"AUCTION - invoke InitTcp() by time out or disconnect",0x4(%esp)
0857efc8 +0x166e:  lea    -0xac(%ebp),%eax
0857efce +0x1674:  mov    %eax,(%esp)
0857efd1 +0x1677:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857efd6 +0x167c:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857efdb +0x1681:  movl   $0x1,0x4(%esp)
0857efe3 +0x1689:  mov    %eax,(%esp)
0857efe6 +0x168c:  call   082fd47c <_ZN15BaseServerProxy7InitTcpEb>  ; BaseServerProxy::InitTcp(bool)
0857efeb +0x1691:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857eff0 +0x1696:  movl   $0x1,0x4(%esp)
0857eff8 +0x169e:  mov    %eax,(%esp)
0857effb +0x16a1:  call   0847091a <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x53>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x53
0857f000 +0x16a6:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857f007 +0x16ad:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857f00c +0x16b2:  mov    %eax,-0x60(%ebp)
0857f00f +0x16b5:  jmp    0857f0a5 <+0x174b>
0857f014 +0x16ba:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857f019 +0x16bf:  mov    %eax,(%esp)
0857f01c +0x16c2:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857f021 +0x16c7:  cmp    $0x1,%eax
0857f024 +0x16ca:  sete   %al
0857f027 +0x16cd:  test   %al,%al
0857f029 +0x16cf:  je     0857f0a5 <+0x174b>
0857f02b +0x16d1:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857f032 +0x16d8:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857f037 +0x16dd:  sub    -0x60(%ebp),%eax
0857f03a +0x16e0:  cmp    $0x3c,%eax
0857f03d +0x16e3:  setg   %al
0857f040 +0x16e6:  test   %al,%al
0857f042 +0x16e8:  je     0857f0a5 <+0x174b>
0857f044 +0x16ea:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857f04b +0x16f1:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857f050 +0x16f6:  mov    %eax,-0x60(%ebp)
0857f053 +0x16f9:  movl   $0x0,0xc(%esp)
0857f05b +0x1701:  movl   $0x761,0x8(%esp)
0857f063 +0x1709:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857f06b +0x1711:  lea    -0x9c(%ebp),%eax
0857f071 +0x1717:  mov    %eax,(%esp)
0857f074 +0x171a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857f079 +0x171f:  movl   $"AUCTION - Disconnect to Auction Server(Timeout for connect trying)",0x4(%esp)
0857f081 +0x1727:  lea    -0x9c(%ebp),%eax
0857f087 +0x172d:  mov    %eax,(%esp)
0857f08a +0x1730:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857f08f +0x1735:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857f094 +0x173a:  mov    (%eax),%eax
0857f096 +0x173c:  add    $0x4,%eax
0857f099 +0x173f:  mov    (%eax),%edx
0857f09b +0x1741:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0857f0a0 +0x1746:  mov    %eax,(%esp)
0857f0a3 +0x1749:  call   *%edx
0857f0a5 +0x174b:  mov    -0xc4(%ebp),%eax
0857f0ab +0x1751:  cmp    $0xffffffff,%eax
0857f0ae +0x1754:  je     0857f0f1 <+0x1797>
0857f0b0 +0x1756:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f0b5 +0x175b:  mov    %eax,(%esp)
0857f0b8 +0x175e:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857f0bd +0x1763:  cmp    $0x2,%eax
0857f0c0 +0x1766:  jne    0857f0f1 <+0x1797>
0857f0c2 +0x1768:  mov    -0xc4(%ebp),%eax
0857f0c8 +0x176e:  shr    $0x5,%eax
0857f0cb +0x1771:  mov    -0x188(%ebp,%eax,4),%edx
0857f0d2 +0x1778:  mov    -0xc4(%ebp),%eax
0857f0d8 +0x177e:  and    $0x1f,%eax
0857f0db +0x1781:  mov    %edx,%ebx
0857f0dd +0x1783:  mov    %eax,%ecx
0857f0df +0x1785:  sar    %cl,%ebx
0857f0e1 +0x1787:  mov    %ebx,%eax
0857f0e3 +0x1789:  and    $0x1,%eax
0857f0e6 +0x178c:  test   %al,%al
0857f0e8 +0x178e:  je     0857f0f1 <+0x1797>
0857f0ea +0x1790:  mov    $0x1,%eax
0857f0ef +0x1795:  jmp    0857f0f6 <+0x179c>
0857f0f1 +0x1797:  mov    $0x0,%eax
0857f0f6 +0x179c:  test   %al,%al
0857f0f8 +0x179e:  je     0857f13a <+0x17e0>
0857f0fa +0x17a0:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f0ff +0x17a5:  mov    %eax,(%esp)
0857f102 +0x17a8:  call   082fd90e <_ZN15BaseServerProxy9OnTcpRecvEv>  ; BaseServerProxy::OnTcpRecv()
0857f107 +0x17ad:  xor    $0x1,%eax
0857f10a +0x17b0:  test   %al,%al
0857f10c +0x17b2:  je     0857f13a <+0x17e0>
0857f10e +0x17b4:  movl   $"Cera AUCTION - OnTcpRecv == false!!!",0x10(%esp)
0857f116 +0x17bc:  movl   $0x76c,0xc(%esp)
0857f11e +0x17c4:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857f126 +0x17cc:  movl   $"NetworkThread.cpp",0x4(%esp)
0857f12e +0x17d4:  movl   $0x1,(%esp)
0857f135 +0x17db:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857f13a +0x17e0:  mov    -0xc4(%ebp),%eax
0857f140 +0x17e6:  cmp    $0xffffffff,%eax
0857f143 +0x17e9:  je     0857f24d <+0x18f3>
0857f149 +0x17ef:  mov    -0xc4(%ebp),%eax
0857f14f +0x17f5:  shr    $0x5,%eax
0857f152 +0x17f8:  mov    -0x208(%ebp,%eax,4),%edx
0857f159 +0x17ff:  mov    -0xc4(%ebp),%eax
0857f15f +0x1805:  and    $0x1f,%eax
0857f162 +0x1808:  mov    %edx,%ebx
0857f164 +0x180a:  mov    %eax,%ecx
0857f166 +0x180c:  sar    %cl,%ebx
0857f168 +0x180e:  mov    %ebx,%eax
0857f16a +0x1810:  and    $0x1,%eax
0857f16d +0x1813:  test   %al,%al
0857f16f +0x1815:  je     0857f24d <+0x18f3>
0857f175 +0x181b:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f17a +0x1820:  mov    %eax,(%esp)
0857f17d +0x1823:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857f182 +0x1828:  cmp    $0x1,%eax
0857f185 +0x182b:  sete   %al
0857f188 +0x182e:  test   %al,%al
0857f18a +0x1830:  je     0857f204 <+0x18aa>
0857f18c +0x1832:  movl   $0x0,-0x1c(%ebp)
0857f193 +0x1839:  movl   $0x4,-0x108(%ebp)
0857f19d +0x1843:  lea    -0x108(%ebp),%edx
0857f1a3 +0x1849:  mov    -0xc4(%ebp),%eax
0857f1a9 +0x184f:  mov    %edx,0x10(%esp)
0857f1ad +0x1853:  lea    -0xcc(%ebp),%edx
0857f1b3 +0x1859:  mov    %edx,0xc(%esp)
0857f1b7 +0x185d:  movl   $0x4,0x8(%esp)
0857f1bf +0x1865:  movl   $0x1,0x4(%esp)
0857f1c7 +0x186d:  mov    %eax,(%esp)
0857f1ca +0x1870:  call   0807e6e0 <_init+0xfd8>
0857f1cf +0x1875:  mov    %eax,-0x1c(%ebp)
0857f1d2 +0x1878:  mov    -0xcc(%ebp),%eax
0857f1d8 +0x187e:  test   %eax,%eax
0857f1da +0x1880:  jne    0857f1f7 <+0x189d>
0857f1dc +0x1882:  cmpl   $0x0,-0x1c(%ebp)
0857f1e0 +0x1886:  jne    0857f1f7 <+0x189d>
0857f1e2 +0x1888:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f1e7 +0x188d:  movl   $0x2,0x4(%esp)
0857f1ef +0x1895:  mov    %eax,(%esp)
0857f1f2 +0x1898:  call   0847091a <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x53>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x53
0857f1f7 +0x189d:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f1fc +0x18a2:  mov    %eax,(%esp)
0857f1ff +0x18a5:  call   082f7c56 <_ZN23CCeraAuctionServerProxy16SendRegistPacketEv>  ; CCeraAuctionServerProxy::SendRegistPacket()
0857f204 +0x18aa:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f209 +0x18af:  mov    %eax,(%esp)
0857f20c +0x18b2:  call   082fdaaa <_ZN15BaseServerProxy9OnTcpSendEv>  ; BaseServerProxy::OnTcpSend()
0857f211 +0x18b7:  mov    %eax,-0x20(%ebp)
0857f214 +0x18ba:  cmpl   $0x0,-0x20(%ebp)
0857f218 +0x18be:  jns    0857f24d <+0x18f3>
0857f21a +0x18c0:  mov    -0x20(%ebp),%eax
0857f21d +0x18c3:  mov    %eax,0x14(%esp)
0857f221 +0x18c7:  movl   $"Cera AUCTION - OnTcpSend == false!!!remain_size(%d)",0x10(%esp)
0857f229 +0x18cf:  movl   $0x784,0xc(%esp)
0857f231 +0x18d7:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857f239 +0x18df:  movl   $"NetworkThread.cpp",0x4(%esp)
0857f241 +0x18e7:  movl   $0x1,(%esp)
0857f248 +0x18ee:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857f24d +0x18f3:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f252 +0x18f8:  mov    %eax,(%esp)
0857f255 +0x18fb:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857f25a +0x1900:  test   %eax,%eax
0857f25c +0x1902:  sete   %al
0857f25f +0x1905:  test   %al,%al
0857f261 +0x1907:  je     0857f2fe <+0x19a4>
0857f267 +0x190d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857f26e +0x1914:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857f273 +0x1919:  sub    -0x5c(%ebp),%eax
0857f276 +0x191c:  cmp    $0x3c,%eax
0857f279 +0x191f:  setg   %al
0857f27c +0x1922:  test   %al,%al
0857f27e +0x1924:  je     0857f38c <+0x1a32>
0857f284 +0x192a:  movl   $0x0,0xc(%esp)
0857f28c +0x1932:  movl   $0x78c,0x8(%esp)
0857f294 +0x193a:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857f29c +0x1942:  lea    -0x8c(%ebp),%eax
0857f2a2 +0x1948:  mov    %eax,(%esp)
0857f2a5 +0x194b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857f2aa +0x1950:  movl   $"Cera AUCTION - invoke InitTcp() by time out or disconnect",0x4(%esp)
0857f2b2 +0x1958:  lea    -0x8c(%ebp),%eax
0857f2b8 +0x195e:  mov    %eax,(%esp)
0857f2bb +0x1961:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857f2c0 +0x1966:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f2c5 +0x196b:  movl   $0x1,0x4(%esp)
0857f2cd +0x1973:  mov    %eax,(%esp)
0857f2d0 +0x1976:  call   082fd47c <_ZN15BaseServerProxy7InitTcpEb>  ; BaseServerProxy::InitTcp(bool)
0857f2d5 +0x197b:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f2da +0x1980:  movl   $0x1,0x4(%esp)
0857f2e2 +0x1988:  mov    %eax,(%esp)
0857f2e5 +0x198b:  call   0847091a <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x53>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x53
0857f2ea +0x1990:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857f2f1 +0x1997:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857f2f6 +0x199c:  mov    %eax,-0x5c(%ebp)
0857f2f9 +0x199f:  jmp    0857f38c <+0x1a32>
0857f2fe +0x19a4:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f303 +0x19a9:  mov    %eax,(%esp)
0857f306 +0x19ac:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0857f30b +0x19b1:  cmp    $0x1,%eax
0857f30e +0x19b4:  sete   %al
0857f311 +0x19b7:  test   %al,%al
0857f313 +0x19b9:  je     0857f38c <+0x1a32>
0857f315 +0x19bb:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857f31c +0x19c2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857f321 +0x19c7:  sub    -0x5c(%ebp),%eax
0857f324 +0x19ca:  cmp    $0x3c,%eax
0857f327 +0x19cd:  setg   %al
0857f32a +0x19d0:  test   %al,%al
0857f32c +0x19d2:  je     0857f38c <+0x1a32>
0857f32e +0x19d4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0857f335 +0x19db:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0857f33a +0x19e0:  mov    %eax,-0x5c(%ebp)
0857f33d +0x19e3:  movl   $0x0,0xc(%esp)
0857f345 +0x19eb:  movl   $0x799,0x8(%esp)
0857f34d +0x19f3:  movl   $&_ZZN16MonitorTcpThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857f355 +0x19fb:  lea    -0x7c(%ebp),%eax
0857f358 +0x19fe:  mov    %eax,(%esp)
0857f35b +0x1a01:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857f360 +0x1a06:  movl   $"Cera AUCTION - Disconnect to Cera Auction Server(Timeout for connect trying)",0x4(%esp)
0857f368 +0x1a0e:  lea    -0x7c(%ebp),%eax
0857f36b +0x1a11:  mov    %eax,(%esp)
0857f36e +0x1a14:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857f373 +0x1a19:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f378 +0x1a1e:  mov    (%eax),%eax
0857f37a +0x1a20:  add    $0x4,%eax
0857f37d +0x1a23:  mov    (%eax),%edx
0857f37f +0x1a25:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0857f384 +0x1a2a:  mov    %eax,(%esp)
0857f387 +0x1a2d:  call   *%edx
0857f389 +0x1a2f:  jmp    0857f38c <+0x1a32>
0857f38b +0x1a31:  nop
0857f38c +0x1a32:  movzbl &_ZN10GlobalData13s_server_stopE,%eax
0857f393 +0x1a39:  xor    $0x1,%eax
0857f396 +0x1a3c:  test   %al,%al
0857f398 +0x1a3e:  jne    0857d98e <+0x34>
0857f39e +0x1a44:  add    $0x21c,%esp
0857f3a4 +0x1a4a:  pop    %ebx
0857f3a5 +0x1a4b:  pop    %esi
0857f3a6 +0x1a4c:  pop    %edi
0857f3a7 +0x1a4d:  pop    %ebp
0857f3a8 +0x1a4e:  ret
```

## 反编译 C

```c
// MonitorTcpThread::dispatch @ 0x857d95a

/* MonitorTcpThread::dispatch(void*) */

void MonitorTcpThread::dispatch(void *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  CNetwork<100000,100000> *pCVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  CMonitorServerProxy *pCVar8;
  uint uVar9;
  Stream *pSVar10;
  CStreamGuard *pCVar11;
  CGuildServerProxy *pCVar12;
  GameWorld *pGVar13;
  fd_set local_20c;
  fd_set local_18c;
  socklen_t local_10c [4];
  CStreamGuard local_fc [8];
  CStreamGuard local_f4 [8];
  CStreamGuard local_ec [8];
  CStreamGuard local_e4 [8];
  int local_dc;
  timeval local_d8;
  int local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  cMyTrace local_b0 [16];
  cMyTrace local_a0 [16];
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  fd_set *local_54;
  uint local_50;
  fd_set *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  do {
    do {
      do {
        if (GlobalData::s_server_stop == '\x01') {
          return;
        }
        OS_API::Sleep(1);
        pCVar4 = (CNetwork<100000,100000> *)
                 CPCRoomServerProxy::GetTcpHandler(GlobalData::s_pcroom_proxy);
        local_bc = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 CCommunityServerProxy::GetTcpHandler(GlobalData::s_community_proxy);
        local_c0 = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 BaseServerProxy::GetTcpHandler(GlobalData::s_auction_proxy);
        local_c4 = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 BaseServerProxy::GetTcpHandler(GlobalData::s_cera_auction_proxy);
        local_c8 = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 BaseServerProxy::GetTcpHandler(GlobalData::s_hades_proxy);
        local_cc = CNetwork<100000,100000>::get_socket(pCVar4);
        local_54 = &local_18c;
        for (local_58 = 0; local_58 < 0x20; local_58 = local_58 + 1) {
          local_54->fds_bits[local_58] = 0;
        }
        local_4c = &local_20c;
        for (local_50 = 0; local_50 < 0x20; local_50 = local_50 + 1) {
          local_4c->fds_bits[local_50] = 0;
        }
        local_d8.tv_sec = 1;
        local_d8.tv_usec = 0;
        local_dc = 0;
        local_5c = 0;
        while( true ) {
          iVar6 = CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArraySize
                            (GlobalData::s_monitor_proxy_mgr);
          if (iVar6 <= local_5c) break;
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
          if (iVar6 != -1) {
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_18c.fds_bits[uVar5 >> 5];
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_18c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_20c.fds_bits[uVar5 >> 5];
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_20c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            local_b8 = CNetwork<100000,100000>::get_socket(pCVar4);
            piVar7 = std::max<int>(&local_dc,&local_b8);
            local_dc = *piVar7;
          }
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
          if (iVar6 != -1) {
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_18c.fds_bits[uVar5 >> 5];
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_18c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_20c.fds_bits[uVar5 >> 5];
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_20c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            local_b4 = CNetwork<100000,100000>::get_socket(pCVar4);
            piVar7 = std::max<int>(&local_dc,&local_b4);
            local_dc = *piVar7;
          }
          local_5c = local_5c + 1;
        }
        if (local_bc != 0xffffffff) {
          local_18c.fds_bits[local_bc >> 5] =
               local_18c.fds_bits[local_bc >> 5] | 1 << ((byte)local_bc & 0x1f);
          local_20c.fds_bits[local_bc >> 5] =
               local_20c.fds_bits[local_bc >> 5] | 1 << ((byte)local_bc & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_bc);
          local_dc = *piVar7;
        }
        if (local_c0 != 0xffffffff) {
          local_18c.fds_bits[local_c0 >> 5] =
               local_18c.fds_bits[local_c0 >> 5] | 1 << ((byte)local_c0 & 0x1f);
          local_20c.fds_bits[local_c0 >> 5] =
               local_20c.fds_bits[local_c0 >> 5] | 1 << ((byte)local_c0 & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_c0);
          local_dc = *piVar7;
        }
        if (local_c4 != 0xffffffff) {
          local_18c.fds_bits[local_c4 >> 5] =
               local_18c.fds_bits[local_c4 >> 5] | 1 << ((byte)local_c4 & 0x1f);
          local_20c.fds_bits[local_c4 >> 5] =
               local_20c.fds_bits[local_c4 >> 5] | 1 << ((byte)local_c4 & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_c4);
          local_dc = *piVar7;
        }
        if (local_c8 != 0xffffffff) {
          local_18c.fds_bits[local_c8 >> 5] =
               local_18c.fds_bits[local_c8 >> 5] | 1 << ((byte)local_c8 & 0x1f);
          local_20c.fds_bits[local_c8 >> 5] =
               local_20c.fds_bits[local_c8 >> 5] | 1 << ((byte)local_c8 & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_c8);
          local_dc = *piVar7;
        }
        if (local_cc != 0xffffffff) {
          local_18c.fds_bits[local_cc >> 5] =
               local_18c.fds_bits[local_cc >> 5] | 1 << ((byte)local_cc & 0x1f);
          local_20c.fds_bits[local_cc >> 5] =
               local_20c.fds_bits[local_cc >> 5] | 1 << ((byte)local_cc & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_cc);
          local_dc = *piVar7;
        }
        local_dc = local_dc + 1;
        local_d0 = select(local_dc,&local_18c,&local_20c,(fd_set *)0x0,&local_d8);
      } while (local_d0 < 0);
      local_5c = 0;
      while( true ) {
        iVar6 = CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArraySize
                          (GlobalData::s_monitor_proxy_mgr);
        if (iVar6 <= local_5c) break;
        pCVar8 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                           (GlobalData::s_monitor_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_18c.fds_bits[uVar9 >> 5];
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            cVar3 = CMonitorServerProxy::OnTcpRecv(pCVar8);
            if (cVar3 != '\x01') {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x449,"Monitor::OnTcpRecv == false!!!");
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x44c);
              CStreamGuard::CStreamGuard(local_e4,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
                    /* try { // try from 0857e1c6 to 0857e225 has its CatchHandler @ 0857e228 */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
              CStreamGuard::operator<<(pCVar11,0xc9);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e4);
              CStreamGuard::~CStreamGuard(local_e4);
            }
          }
        }
        pCVar8 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                           (GlobalData::s_monitor_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_20c.fds_bits[uVar9 >> 5];
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            local_48 = CMonitorServerProxy::OnTcpSend(pCVar8);
            if (local_48 < 0) {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x45e,"Monitor::OnTcpSend == false!!!remain_size(%d)",local_48);
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x460);
              CStreamGuard::CStreamGuard(local_ec,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
                    /* try { // try from 0857e39a to 0857e3f9 has its CatchHandler @ 0857e3fc */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
              CStreamGuard::operator<<(pCVar11,0xc9);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_ec);
              CStreamGuard::~CStreamGuard(local_ec);
            }
          }
        }
        pCVar12 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                            (GlobalData::s_guild_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_18c.fds_bits[uVar9 >> 5];
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            cVar3 = CGuildServerProxy::OnTcpRecv(pCVar12);
            if (cVar3 != '\x01') {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x46f,"Guild::OnTcpRecv == false!!!");
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x471);
              CStreamGuard::CStreamGuard(local_f4,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
                    /* try { // try from 0857e565 to 0857e5c4 has its CatchHandler @ 0857e5c7 */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
              CStreamGuard::operator<<(pCVar11,0xcb);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f4);
              CStreamGuard::~CStreamGuard(local_f4);
            }
          }
        }
        pCVar12 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                            (GlobalData::s_guild_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_20c.fds_bits[uVar9 >> 5];
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            local_44 = CGuildServerProxy::OnTcpSend(pCVar12);
            if (local_44 < 0) {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x480,"Guild::OnTcpSend == false!!!remain_size(%d)",local_44);
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x481);
              CStreamGuard::CStreamGuard(local_fc,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_fc);
                    /* try { // try from 0857e739 to 0857e798 has its CatchHandler @ 0857e79b */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_fc);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_fc);
              CStreamGuard::operator<<(pCVar11,0xcb);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_fc);
              CStreamGuard::~CStreamGuard(local_fc);
            }
          }
        }
        local_5c = local_5c + 1;
      }
      if (local_cc == 0xffffffff) {
LAB_0857e832:
        bVar1 = false;
      }
      else {
        iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_hades_proxy);
        if ((iVar6 != 2) ||
           ((local_18c.fds_bits[local_cc >> 5] >> ((byte)local_cc & 0x1f) & 1U) == 0))
        goto LAB_0857e832;
        bVar1 = true;
      }
      if (bVar1) {
        cVar3 = BaseServerProxy::OnTcpRecv(GlobalData::s_hades_proxy);
        if (cVar3 != '\x01') {
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x493,
                     "HADES::OnTcpRecv == false!!!");
        }
      }
      if ((local_cc != 0xffffffff) &&
         ((local_20c.fds_bits[local_cc >> 5] >> ((byte)local_cc & 0x1f) & 1U) != 0)) {
        local_40 = BaseServerProxy::OnTcpSend(GlobalData::s_hades_proxy);
        if (local_40 < 0) {
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x49d,
                     "HADES::OnTcpSend == false!!!remain_size(%d)",local_40);
        }
      }
      if (local_bc == 0xffffffff) {
LAB_0857e943:
        bVar1 = false;
      }
      else {
        iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
        if ((iVar6 != 2) ||
           ((local_18c.fds_bits[local_bc >> 5] >> ((byte)local_bc & 0x1f) & 1U) == 0))
        goto LAB_0857e943;
        bVar1 = true;
      }
      if (bVar1) {
        cVar3 = CPCRoomServerProxy::OnTcpRecv(GlobalData::s_pcroom_proxy);
        if (cVar3 != '\x01') {
          local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x4e0,
                     "PCROOM::OnTcpRecv == false!!!");
        }
      }
      if ((local_bc != 0xffffffff) &&
         ((local_20c.fds_bits[local_bc >> 5] >> ((byte)local_bc & 0x1f) & 1U) != 0)) {
        iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
        if (iVar6 == 1) {
          local_38 = 0;
          local_10c[3] = 4;
          local_38 = getsockopt(local_bc,1,4,&local_d0,local_10c + 3);
          if ((local_d0 == 0) && (local_38 == 0)) {
            CPCRoomServerProxy::SetSocketState(GlobalData::s_pcroom_proxy,2);
          }
        }
        local_3c = CPCRoomServerProxy::OnTcpSend(GlobalData::s_pcroom_proxy);
        if (local_3c < 0) {
          local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x4f9,
                     "PCROOM::OnTcpSend == false!!!remain_size(%d)",local_3c);
        }
      }
      iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
      if (iVar6 == 0) {
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (0x3c < iVar6 - local_6c) {
          CPCRoomServerProxy::InitTcp(GlobalData::s_pcroom_proxy);
          CPCRoomServerProxy::SetSocketState(GlobalData::s_pcroom_proxy,1);
          local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        }
      }
      else {
        iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
        if (iVar6 == 1) {
          iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          if (0x3c < iVar6 - local_6c) {
            local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            CPCRoomServerProxy::Disconnect(GlobalData::s_pcroom_proxy);
          }
        }
      }
      pGVar13 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar13);
      if (cVar3 != '\0') {
        if (local_c0 == 0xffffffff) {
LAB_0857ebbf:
          bVar1 = false;
        }
        else {
          iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
          if ((iVar6 != 2) ||
             ((local_18c.fds_bits[local_c0 >> 5] >> ((byte)local_c0 & 0x1f) & 1U) == 0))
          goto LAB_0857ebbf;
          bVar1 = true;
        }
        if (bVar1) {
          cVar3 = CCommunityServerProxy::OnTcpRecv(GlobalData::s_community_proxy);
          if (cVar3 != '\x01') {
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x521,
                       "COMMUNITY::OnTcpRecv == false!!!");
          }
        }
        if ((local_c0 != 0xffffffff) &&
           ((local_20c.fds_bits[local_c0 >> 5] >> ((byte)local_c0 & 0x1f) & 1U) != 0)) {
          iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
          if (iVar6 == 1) {
            local_30 = 0;
            local_10c[2] = 4;
            local_30 = getsockopt(local_c0,1,4,&local_d0,local_10c + 2);
            if ((local_d0 == 0) && (local_30 == 0)) {
              CCommunityServerProxy::SetSocketState(GlobalData::s_community_proxy,2);
            }
          }
          local_34 = CCommunityServerProxy::OnTcpSend(GlobalData::s_community_proxy);
          if (local_34 < 0) {
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x537,
                       "COMMUNITY::OnTcpSend == false!!!remain_size(%d)",local_34);
          }
        }
        iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
        if (iVar6 == 0) {
          CCommunityServerProxy::InitTcp(GlobalData::s_community_proxy);
          CCommunityServerProxy::SetSocketState(GlobalData::s_community_proxy,1);
          local_68 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        }
        else {
          iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
          if (iVar6 == 1) {
            iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            if (0x3c < iVar6 - local_68) {
              local_68 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              CCommunityServerProxy::Disconnect(GlobalData::s_community_proxy);
            }
          }
        }
      }
      pGVar13 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar13);
    } while (cVar3 == '\x01');
    if (local_c4 == 0xffffffff) {
LAB_0857ee07:
      bVar1 = false;
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
      if ((iVar6 != 2) || ((local_18c.fds_bits[local_c4 >> 5] >> ((byte)local_c4 & 0x1f) & 1U) == 0)
         ) goto LAB_0857ee07;
      bVar1 = true;
    }
    if (bVar1) {
      cVar3 = BaseServerProxy::OnTcpRecv(GlobalData::s_auction_proxy);
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x734,
                   "AUCTION - OnTcpRecv == false!!!");
      }
    }
    if ((local_c4 != 0xffffffff) &&
       ((local_20c.fds_bits[local_c4 >> 5] >> ((byte)local_c4 & 0x1f) & 1U) != 0)) {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
      if (iVar6 == 1) {
        local_28 = 0;
        local_10c[1] = 4;
        local_28 = getsockopt(local_c4,1,4,&local_d0,local_10c + 1);
        if ((local_d0 == 0) && (local_28 == 0)) {
          BaseServerProxy::SetSocketState(GlobalData::s_auction_proxy,2);
        }
        CAuctionServerProxy::SendRegistPacket((CAuctionServerProxy *)GlobalData::s_auction_proxy);
      }
      local_2c = BaseServerProxy::OnTcpSend(GlobalData::s_auction_proxy);
      if (local_2c < 0) {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x74c,
                   "AUCTION - OnTcpSend == false!!!remain_size(%d)",local_2c);
      }
    }
    iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
    if (iVar6 == 0) {
      iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (0x3c < iVar6 - local_64) {
        cMyTrace::cMyTrace(local_b0,"virtual void MonitorTcpThread::dispatch(void*)",0x754,0);
        cMyTrace::operator()(local_b0,"AUCTION - invoke InitTcp() by time out or disconnect");
        BaseServerProxy::InitTcp(GlobalData::s_auction_proxy,true);
        BaseServerProxy::SetSocketState(GlobalData::s_auction_proxy,1);
        local_64 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      }
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
      if (iVar6 == 1) {
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (0x3c < iVar6 - local_64) {
          local_64 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          cMyTrace::cMyTrace(local_a0,"virtual void MonitorTcpThread::dispatch(void*)",0x761,0);
          cMyTrace::operator()
                    (local_a0,"AUCTION - Disconnect to Auction Server(Timeout for connect trying)");
          (**(code **)(*(int *)GlobalData::s_auction_proxy + 4))(GlobalData::s_auction_proxy);
        }
      }
    }
    if (local_c8 == 0xffffffff) {
LAB_0857f0f1:
      bVar1 = false;
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
      if ((iVar6 != 2) || ((local_18c.fds_bits[local_c8 >> 5] >> ((byte)local_c8 & 0x1f) & 1U) == 0)
         ) goto LAB_0857f0f1;
      bVar1 = true;
    }
    if (bVar1) {
      cVar3 = BaseServerProxy::OnTcpRecv(GlobalData::s_cera_auction_proxy);
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x76c,
                   "Cera AUCTION - OnTcpRecv == false!!!");
      }
    }
    if ((local_c8 != 0xffffffff) &&
       ((local_20c.fds_bits[local_c8 >> 5] >> ((byte)local_c8 & 0x1f) & 1U) != 0)) {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
      if (iVar6 == 1) {
        local_20 = 0;
        local_10c[0] = 4;
        local_20 = getsockopt(local_c8,1,4,&local_d0,local_10c);
        if ((local_d0 == 0) && (local_20 == 0)) {
          BaseServerProxy::SetSocketState(GlobalData::s_cera_auction_proxy,2);
        }
        CCeraAuctionServerProxy::SendRegistPacket
                  ((CCeraAuctionServerProxy *)GlobalData::s_cera_auction_proxy);
      }
      local_24 = BaseServerProxy::OnTcpSend(GlobalData::s_cera_auction_proxy);
      if (local_24 < 0) {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x784,
                   "Cera AUCTION - OnTcpSend == false!!!remain_size(%d)",local_24);
      }
    }
    iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
    if (iVar6 == 0) {
      iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (0x3c < iVar6 - local_60) {
        cMyTrace::cMyTrace(local_90,"virtual void MonitorTcpThread::dispatch(void*)",0x78c,0);
        cMyTrace::operator()(local_90,"Cera AUCTION - invoke InitTcp() by time out or disconnect");
        BaseServerProxy::InitTcp(GlobalData::s_cera_auction_proxy,true);
        BaseServerProxy::SetSocketState(GlobalData::s_cera_auction_proxy,1);
        local_60 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      }
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
      if (iVar6 == 1) {
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (0x3c < iVar6 - local_60) {
          local_60 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          cMyTrace::cMyTrace(local_80,"virtual void MonitorTcpThread::dispatch(void*)",0x799,0);
          cMyTrace::operator()
                    (local_80,
                     "Cera AUCTION - Disconnect to Cera Auction Server(Timeout for connect trying)")
          ;
          (**(code **)(*(int *)GlobalData::s_cera_auction_proxy + 4))
                    (GlobalData::s_cera_auction_proxy);
        }
      }
    }
  } while( true );
}
```

# InterUpdateP2pHolePunchingState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08161952 InterUpdateP2pHolePunchingState::dispatch_sig  [0x08161952-0x8161a89] ===
 8161952:	55                   	push   %ebp
 8161953:	89 e5                	mov    %esp,%ebp
 8161955:	56                   	push   %esi
 8161956:	53                   	push   %ebx
 8161957:	83 ec 60             	sub    $0x60,%esp
 816195a:	8b 45 10             	mov    0x10(%ebp),%eax
 816195d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8161960:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8161963:	89 04 24             	mov    %eax,(%esp)
 8161966:	e8 43 04 00 00       	call   8161dae <_ZN38Packet_GameServer2Statisctics2DBServerC1Ev>
 816196b:	e8 11 a8 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8161970:	89 04 24             	mov    %eax,(%esp)
 8161973:	e8 68 53 fa ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8161978:	66 89 45 c1          	mov    %ax,-0x3f(%ebp)
 816197c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816197f:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8161983:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8161986:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161989:	8b 40 0e             	mov    0xe(%eax),%eax
 816198c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 816198f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161992:	8b 40 12             	mov    0x12(%eax),%eax
 8161995:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8161998:	8b 45 0c             	mov    0xc(%ebp),%eax
 816199b:	05 e0 00 00 00       	add    $0xe0,%eax
 81619a0:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81619a7:	00 
 81619a8:	8d 55 b7             	lea    -0x49(%ebp),%edx
 81619ab:	83 c2 25             	add    $0x25,%edx
 81619ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81619b2:	89 04 24             	mov    %eax,(%esp)
 81619b5:	e8 74 0e 00 00       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 81619ba:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81619bd:	89 04 24             	mov    %eax,(%esp)
 81619c0:	e8 0b e7 57 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81619c5:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81619c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81619cc:	8d 45 b7             	lea    -0x49(%ebp),%eax
 81619cf:	83 c0 25             	add    $0x25,%eax
 81619d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81619d6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81619d9:	89 04 24             	mov    %eax,(%esp)
 81619dc:	e8 4f 5c 5a 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81619e1:	e8 93 0c 00 00       	call   8162679 <_ZN4ARAD9SingletonI19RestrictGeolocationE3GetEv>
 81619e6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81619e9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81619ed:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81619f4:	00 
 81619f5:	8d 55 b7             	lea    -0x49(%ebp),%edx
 81619f8:	83 c2 15             	add    $0x15,%edx
 81619fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81619ff:	89 04 24             	mov    %eax,(%esp)
 8161a02:	e8 33 f5 00 00       	call   8170f3a <_ZN19RestrictGeolocation14getCountryCodeEPcjSs>
 8161a07:	eb 15                	jmp    8161a1e <_ZN31InterUpdateP2pHolePunchingState12dispatch_sigEP5CUserPci+0xcc>
 8161a09:	89 d3                	mov    %edx,%ebx
 8161a0b:	89 c6                	mov    %eax,%esi
 8161a0d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161a10:	89 04 24             	mov    %eax,(%esp)
 8161a13:	e8 c8 61 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8161a18:	89 f0                	mov    %esi,%eax
 8161a1a:	89 da                	mov    %ebx,%edx
 8161a1c:	eb 0d                	jmp    8161a2b <_ZN31InterUpdateP2pHolePunchingState12dispatch_sigEP5CUserPci+0xd9>
 8161a1e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161a21:	89 04 24             	mov    %eax,(%esp)
 8161a24:	e8 b7 61 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8161a29:	eb 1b                	jmp    8161a46 <_ZN31InterUpdateP2pHolePunchingState12dispatch_sigEP5CUserPci+0xf4>
 8161a2b:	89 d3                	mov    %edx,%ebx
 8161a2d:	89 c6                	mov    %eax,%esi
 8161a2f:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8161a32:	89 04 24             	mov    %eax,(%esp)
 8161a35:	e8 b6 e6 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8161a3a:	89 f0                	mov    %esi,%eax
 8161a3c:	89 da                	mov    %ebx,%edx
 8161a3e:	89 04 24             	mov    %eax,(%esp)
 8161a41:	e8 0a 1d 98 00       	call   8ae3750 <_Unwind_Resume>
 8161a46:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8161a49:	89 04 24             	mov    %eax,(%esp)
 8161a4c:	e8 9f e6 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8161a51:	8d 5d b7             	lea    -0x49(%ebp),%ebx
 8161a54:	a1 30 be 40 09       	mov    0x940be30,%eax
 8161a59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8161a60:	00 
 8161a61:	89 04 24             	mov    %eax,(%esp)
 8161a64:	e8 8f 02 fb ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8161a69:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 8161a70:	00 
 8161a71:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8161a75:	89 04 24             	mov    %eax,(%esp)
 8161a78:	e8 c7 05 31 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 8161a7d:	b8 00 00 00 00       	mov    $0x0,%eax
 8161a82:	83 c4 60             	add    $0x60,%esp
 8161a85:	5b                   	pop    %ebx
 8161a86:	5e                   	pop    %esi
 8161a87:	5d                   	pop    %ebp
 8161a88:	c3                   	ret
 8161a89:	90                   	nop

```

```c
// InterUpdateP2pHolePunchingState::dispatch_sig @ 0x8161952

/* InterUpdateP2pHolePunchingState::dispatch_sig(CUser*, char*, int) */

undefined4 InterUpdateP2pHolePunchingState::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CEnvironment *this;
  RestrictGeolocation *this_00;
  CStatisticServerProxy *this_01;
  Packet_GameServer2Statisctics2DBServer local_4d [10];
  undefined2 local_43;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  char acStack_38 [16];
  char acStack_28 [16];
  string local_18 [7];
  allocator<char> local_11;
  int local_10;
  
  local_10 = param_3;
  Packet_GameServer2Statisctics2DBServer::Packet_GameServer2Statisctics2DBServer(local_4d);
  this = (CEnvironment *)G_CEnvironment();
  local_43 = CEnvironment::get_server_group(this);
  local_41 = *(undefined1 *)(local_10 + 0xd);
  local_40 = *(undefined4 *)(local_10 + 0xe);
  local_3c = *(undefined4 *)(local_10 + 0x12);
  CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(param_2 + 0xe0),acStack_28,0x10);
  std::allocator<char>::allocator();
                    /* try { // try from 081619dc to 081619e0 has its CatchHandler @ 08161a2b */
  std::string::string(local_18,acStack_28,(allocator *)&local_11);
                    /* try { // try from 081619e1 to 08161a06 has its CatchHandler @ 08161a09 */
  this_00 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
  RestrictGeolocation::getCountryCode(this_00,acStack_38,0x10,(string)local_18);
                    /* try { // try from 08161a24 to 08161a28 has its CatchHandler @ 08161a2b */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
  this_01 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_01,(char *)local_4d,0x35);
  return 0;
}

```


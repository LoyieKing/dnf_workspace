# TimerLightServerNotice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08636c14 TimerLightServerNotice::RegistNextTimer  [0x08636c14-0x8636d09] ===
 8636c14:	55                   	push   %ebp
 8636c15:	89 e5                	mov    %esp,%ebp
 8636c17:	53                   	push   %ebx
 8636c18:	83 ec 64             	sub    $0x64,%esp
 8636c1b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8636c22:	e8 77 50 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8636c27:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8636c2a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8636c2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636c31:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636c34:	89 04 24             	mov    %eax,(%esp)
 8636c37:	e8 24 77 a4 ff       	call   807e360 <localtime_r@plt>
 8636c3c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8636c3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636c42:	8b 40 08             	mov    0x8(%eax),%eax
 8636c45:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8636c48:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8636c4b:	e8 4b 55 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8636c50:	05 a4 00 00 00       	add    $0xa4,%eax
 8636c55:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8636c59:	89 04 24             	mov    %eax,(%esp)
 8636c5c:	e8 31 66 00 00       	call   863d292 <_ZNSt6vectorI21stLightServerNotice_tSaIS0_EEixEj>
 8636c61:	8b 10                	mov    (%eax),%edx
 8636c63:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636c66:	89 50 08             	mov    %edx,0x8(%eax)
 8636c69:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8636c6c:	e8 2a 55 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8636c71:	05 a4 00 00 00       	add    $0xa4,%eax
 8636c76:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8636c7a:	89 04 24             	mov    %eax,(%esp)
 8636c7d:	e8 10 66 00 00       	call   863d292 <_ZNSt6vectorI21stLightServerNotice_tSaIS0_EEixEj>
 8636c82:	8b 50 04             	mov    0x4(%eax),%edx
 8636c85:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636c88:	89 50 04             	mov    %edx,0x4(%eax)
 8636c8b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636c8e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8636c94:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636c97:	89 04 24             	mov    %eax,(%esp)
 8636c9a:	e8 81 7b a4 ff       	call   807e820 <mktime@plt>
 8636c9f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8636ca2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636ca5:	8b 40 08             	mov    0x8(%eax),%eax
 8636ca8:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8636cab:	7f 07                	jg     8636cb4 <_ZN22TimerLightServerNotice15RegistNextTimerEi+0xa0>
 8636cad:	81 45 f0 80 51 01 00 	addl   $0x15180,-0x10(%ebp)
 8636cb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8636cb7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8636cba:	89 d1                	mov    %edx,%ecx
 8636cbc:	29 c1                	sub    %eax,%ecx
 8636cbe:	89 c8                	mov    %ecx,%eax
 8636cc0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8636cc3:	e8 b4 f7 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8636cc8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8636ccf:	00 
 8636cd0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8636cd3:	89 54 24 14          	mov    %edx,0x14(%esp)
 8636cd7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8636cda:	89 54 24 10          	mov    %edx,0x10(%esp)
 8636cde:	c7 44 24 0c 68 00 00 	movl   $0x68,0xc(%esp)
 8636ce5:	00 
 8636ce6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8636ced:	00 
 8636cee:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8636cf5:	00 
 8636cf6:	89 04 24             	mov    %eax,(%esp)
 8636cf9:	e8 18 a1 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8636cfe:	b8 01 00 00 00       	mov    $0x1,%eax
 8636d03:	83 c4 64             	add    $0x64,%esp
 8636d06:	5b                   	pop    %ebx
 8636d07:	5d                   	pop    %ebp
 8636d08:	c3                   	ret
 8636d09:	90                   	nop

```

```c
// TimerLightServerNotice::RegistNextTimer @ 0x8636c14

/* TimerLightServerNotice::RegistNextTimer(int) */

undefined4 __thiscall
TimerLightServerNotice::RegistNextTimer(TimerLightServerNotice *this,int param_1)

{
  int iVar1;
  int *piVar2;
  TimerQueue *pTVar3;
  tm local_4c;
  int local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_hour;
  iVar1 = G_CDataManager();
  piVar2 = (int *)std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::
                  operator[]((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                             (iVar1 + 0xa4),param_1);
  local_1c->tm_hour = *piVar2;
  iVar1 = G_CDataManager();
  iVar1 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::operator[]
                    ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                     (iVar1 + 0xa4),param_1);
  local_1c->tm_min = *(int *)(iVar1 + 4);
  local_1c->tm_sec = 0;
  local_14 = mktime(local_1c);
  if (local_1c->tm_hour <= local_18) {
    local_14 = local_14 + 0x15180;
  }
  local_10 = local_14 - local_20;
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,2,0,0x68,local_10,param_1,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08636a7c TimerLightServerNotice::dispatch_sig  [0x08636a7c-0x8636c13] ===
 8636a7c:	55                   	push   %ebp
 8636a7d:	89 e5                	mov    %esp,%ebp
 8636a7f:	56                   	push   %esi
 8636a80:	53                   	push   %ebx
 8636a81:	83 ec 30             	sub    $0x30,%esp
 8636a84:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8636a88:	78 19                	js     8636aa3 <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x27>
 8636a8a:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8636a8d:	e8 09 57 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8636a92:	05 a4 00 00 00       	add    $0xa4,%eax
 8636a97:	89 04 24             	mov    %eax,(%esp)
 8636a9a:	e8 47 d2 c7 ff       	call   82b3ce6 <_ZNKSt6vectorI21stLightServerNotice_tSaIS0_EE4sizeEv>
 8636a9f:	39 c3                	cmp    %eax,%ebx
 8636aa1:	72 07                	jb     8636aaa <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x2e>
 8636aa3:	b8 01 00 00 00       	mov    $0x1,%eax
 8636aa8:	eb 05                	jmp    8636aaf <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x33>
 8636aaa:	b8 00 00 00 00       	mov    $0x0,%eax
 8636aaf:	84 c0                	test   %al,%al
 8636ab1:	74 0a                	je     8636abd <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x41>
 8636ab3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8636ab8:	e9 4d 01 00 00       	jmp    8636c0a <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x18e>
 8636abd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636ac0:	89 04 24             	mov    %eax,(%esp)
 8636ac3:	e8 84 72 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8636ac8:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8636acf:	00 
 8636ad0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8636ad7:	00 
 8636ad8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636adb:	89 04 24             	mov    %eax,(%esp)
 8636ade:	e8 19 4e a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8636ae3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8636aea:	00 
 8636aeb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636aee:	89 04 24             	mov    %eax,(%esp)
 8636af1:	e8 2a 4e a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8636af6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8636afd:	00 
 8636afe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636b01:	89 04 24             	mov    %eax,(%esp)
 8636b04:	e8 9b 33 aa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8636b09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8636b10:	00 
 8636b11:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636b14:	89 04 24             	mov    %eax,(%esp)
 8636b17:	e8 04 4e a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8636b1c:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8636b1f:	e8 77 56 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8636b24:	05 a4 00 00 00       	add    $0xa4,%eax
 8636b29:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8636b2d:	89 04 24             	mov    %eax,(%esp)
 8636b30:	e8 5d 67 00 00       	call   863d292 <_ZNSt6vectorI21stLightServerNotice_tSaIS0_EEixEj>
 8636b35:	83 c0 08             	add    $0x8,%eax
 8636b38:	89 04 24             	mov    %eax,(%esp)
 8636b3b:	e8 20 fb 0c 00       	call   8706660 <_ZNKSs4sizeEv>
 8636b40:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8636b43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8636b46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636b4a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636b4d:	89 04 24             	mov    %eax,(%esp)
 8636b50:	e8 e7 4d a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8636b55:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8636b58:	e8 3e 56 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8636b5d:	05 a4 00 00 00       	add    $0xa4,%eax
 8636b62:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8636b66:	89 04 24             	mov    %eax,(%esp)
 8636b69:	e8 24 67 00 00       	call   863d292 <_ZNSt6vectorI21stLightServerNotice_tSaIS0_EEixEj>
 8636b6e:	83 c0 08             	add    $0x8,%eax
 8636b71:	89 04 24             	mov    %eax,(%esp)
 8636b74:	e8 77 f9 0c 00       	call   87064f0 <_ZNKSs5c_strEv>
 8636b79:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8636b7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8636b80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636b84:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636b87:	89 04 24             	mov    %eax,(%esp)
 8636b8a:	e8 e1 4b bf ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 8636b8f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8636b96:	00 
 8636b97:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636b9a:	89 04 24             	mov    %eax,(%esp)
 8636b9d:	e8 b6 4d a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8636ba2:	e8 00 38 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8636ba7:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8636baa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8636bae:	89 04 24             	mov    %eax,(%esp)
 8636bb1:	e8 5e 20 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8636bb6:	8b 45 10             	mov    0x10(%ebp),%eax
 8636bb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636bbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8636bc0:	89 04 24             	mov    %eax,(%esp)
 8636bc3:	e8 4c 00 00 00       	call   8636c14 <_ZN22TimerLightServerNotice15RegistNextTimerEi>
 8636bc8:	88 45 f7             	mov    %al,-0x9(%ebp)
 8636bcb:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8636bcf:	83 f0 01             	xor    $0x1,%eax
 8636bd2:	84 c0                	test   %al,%al
 8636bd4:	74 07                	je     8636bdd <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x161>
 8636bd6:	bb 00 00 00 00       	mov    $0x0,%ebx
 8636bdb:	eb 22                	jmp    8636bff <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x183>
 8636bdd:	bb 01 00 00 00       	mov    $0x1,%ebx
 8636be2:	eb 1b                	jmp    8636bff <_ZN22TimerLightServerNotice12dispatch_sigEiij+0x183>
 8636be4:	89 d3                	mov    %edx,%ebx
 8636be6:	89 c6                	mov    %eax,%esi
 8636be8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636beb:	89 04 24             	mov    %eax,(%esp)
 8636bee:	e8 8d 72 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8636bf3:	89 f0                	mov    %esi,%eax
 8636bf5:	89 da                	mov    %ebx,%edx
 8636bf7:	89 04 24             	mov    %eax,(%esp)
 8636bfa:	e8 51 cb 4a 00       	call   8ae3750 <_Unwind_Resume>
 8636bff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636c02:	89 04 24             	mov    %eax,(%esp)
 8636c05:	e8 76 72 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8636c0a:	89 d8                	mov    %ebx,%eax
 8636c0c:	83 c4 30             	add    $0x30,%esp
 8636c0f:	5b                   	pop    %ebx
 8636c10:	5e                   	pop    %esi
 8636c11:	5d                   	pop    %ebp
 8636c12:	c3                   	ret
 8636c13:	90                   	nop

```

```c
// TimerLightServerNotice::dispatch_sig @ 0x8636a7c

/* TimerLightServerNotice::dispatch_sig(int, int, unsigned int) */

bool TimerLightServerNotice::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  GameWorld *this;
  bool bVar4;
  PacketGuard local_20 [12];
  int local_14;
  char local_d;
  
  if (-1 < (int)param_3) {
    iVar1 = G_CDataManager();
    uVar2 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::size
                      ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                       (iVar1 + 0xa4));
    if (param_3 < uVar2) {
      bVar4 = false;
      goto LAB_08636aaf;
    }
  }
  bVar4 = true;
LAB_08636aaf:
  if (bVar4) {
    bVar4 = false;
  }
  else {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08636ade to 08636bc7 has its CatchHandler @ 08636be4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    iVar1 = G_CDataManager();
    iVar1 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::operator[]
                      ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                       (iVar1 + 0xa4),param_3);
    local_14 = std::string::size((string *)(iVar1 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_14);
    iVar1 = G_CDataManager();
    iVar1 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::operator[]
                      ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                       (iVar1 + 0xa4),param_3);
    pcVar3 = (char *)std::string::c_str((string *)(iVar1 + 8));
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,pcVar3,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_20);
    local_d = RegistNextTimer((TimerLightServerNotice *)param_1,param_3);
    bVar4 = local_d == '\x01';
    PacketGuard::~PacketGuard(local_20);
  }
  return bVar4;
}

```


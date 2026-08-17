# DB_LoadMileage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08443d2c DB_LoadMileage::dispatch  [0x08443d2c-0x8444065] ===
 8443d2c:	55                   	push   %ebp
 8443d2d:	89 e5                	mov    %esp,%ebp
 8443d2f:	56                   	push   %esi
 8443d30:	53                   	push   %ebx
 8443d31:	83 ec 70             	sub    $0x70,%esp
 8443d34:	8b 45 14             	mov    0x14(%ebp),%eax
 8443d37:	89 04 24             	mov    %eax,(%esp)
 8443d3a:	e8 1d 02 01 00       	call   8453f5c <_ZN6Stream12GetOutBufferI18SIG_MILEAGE_STRUCTEEPT_v>
 8443d3f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8443d42:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8443d46:	75 0a                	jne    8443d52 <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x26>
 8443d48:	bb 00 00 00 00       	mov    $0x0,%ebx
 8443d4d:	e9 0a 03 00 00       	jmp    844405c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x330>
 8443d52:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8443d57:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8443d5e:	00 
 8443d5f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443d66:	00 
 8443d67:	89 04 24             	mov    %eax,(%esp)
 8443d6a:	e8 cf 14 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8443d6f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8443d72:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8443d76:	75 48                	jne    8443dc0 <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x94>
 8443d78:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8443d7f:	00 
 8443d80:	c7 44 24 08 ae a7 00 	movl   $0xa7ae,0x8(%esp)
 8443d87:	00 
 8443d88:	c7 44 24 04 00 b5 c5 	movl   $0x8c5b500,0x4(%esp)
 8443d8f:	08 
 8443d90:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8443d93:	89 04 24             	mov    %eax,(%esp)
 8443d96:	e8 7d b9 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8443d9b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8443da2:	00 
 8443da3:	c7 44 24 04 58 6e c5 	movl   $0x8c56e58,0x4(%esp)
 8443daa:	08 
 8443dab:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8443dae:	89 04 24             	mov    %eax,(%esp)
 8443db1:	e8 d2 b9 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8443db6:	bb 00 00 00 00       	mov    $0x0,%ebx
 8443dbb:	e9 9c 02 00 00       	jmp    844405c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x330>
 8443dc0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443dc3:	8b 00                	mov    (%eax),%eax
 8443dc5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443dc9:	c7 44 24 04 b8 6e c5 	movl   $0x8c56eb8,0x4(%esp)
 8443dd0:	08 
 8443dd1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443dd4:	89 04 24             	mov    %eax,(%esp)
 8443dd7:	e8 e4 03 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8443ddc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443de3:	00 
 8443de4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443de7:	89 04 24             	mov    %eax,(%esp)
 8443dea:	e8 37 05 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8443def:	88 45 f3             	mov    %al,-0xd(%ebp)
 8443df2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8443df6:	83 f0 01             	xor    $0x1,%eax
 8443df9:	84 c0                	test   %al,%al
 8443dfb:	74 53                	je     8443e50 <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x124>
 8443dfd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443e00:	8b 70 04             	mov    0x4(%eax),%esi
 8443e03:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443e06:	8b 18                	mov    (%eax),%ebx
 8443e08:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8443e0f:	00 
 8443e10:	c7 44 24 08 b6 a7 00 	movl   $0xa7b6,0x8(%esp)
 8443e17:	00 
 8443e18:	c7 44 24 04 00 b5 c5 	movl   $0x8c5b500,0x4(%esp)
 8443e1f:	08 
 8443e20:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8443e23:	89 04 24             	mov    %eax,(%esp)
 8443e26:	e8 ed b8 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8443e2b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8443e2f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8443e33:	c7 44 24 04 e8 6e c5 	movl   $0x8c56ee8,0x4(%esp)
 8443e3a:	08 
 8443e3b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8443e3e:	89 04 24             	mov    %eax,(%esp)
 8443e41:	e8 42 b9 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8443e46:	bb 00 00 00 00       	mov    $0x0,%ebx
 8443e4b:	e9 0c 02 00 00       	jmp    844405c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x330>
 8443e50:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443e53:	89 04 24             	mov    %eax,(%esp)
 8443e56:	e8 11 e5 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8443e5b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8443e5e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8443e62:	75 3e                	jne    8443ea2 <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x176>
 8443e64:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443e67:	8b 00                	mov    (%eax),%eax
 8443e69:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443e6d:	c7 44 24 04 10 6f c5 	movl   $0x8c56f10,0x4(%esp)
 8443e74:	08 
 8443e75:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443e78:	89 04 24             	mov    %eax,(%esp)
 8443e7b:	e8 40 03 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8443e80:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443e87:	00 
 8443e88:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443e8b:	89 04 24             	mov    %eax,(%esp)
 8443e8e:	e8 93 04 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8443e93:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443e96:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8443e9d:	e9 ea 00 00 00       	jmp    8443f8c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x260>
 8443ea2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443ea5:	89 04 24             	mov    %eax,(%esp)
 8443ea8:	e8 0f 06 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8443ead:	88 45 f3             	mov    %al,-0xd(%ebp)
 8443eb0:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8443eb4:	83 f0 01             	xor    $0x1,%eax
 8443eb7:	84 c0                	test   %al,%al
 8443eb9:	74 53                	je     8443f0e <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x1e2>
 8443ebb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443ebe:	8b 70 04             	mov    0x4(%eax),%esi
 8443ec1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443ec4:	8b 18                	mov    (%eax),%ebx
 8443ec6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8443ecd:	00 
 8443ece:	c7 44 24 08 cb a7 00 	movl   $0xa7cb,0x8(%esp)
 8443ed5:	00 
 8443ed6:	c7 44 24 04 00 b5 c5 	movl   $0x8c5b500,0x4(%esp)
 8443edd:	08 
 8443ede:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8443ee1:	89 04 24             	mov    %eax,(%esp)
 8443ee4:	e8 2f b8 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8443ee9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8443eed:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8443ef1:	c7 44 24 04 58 6f c5 	movl   $0x8c56f58,0x4(%esp)
 8443ef8:	08 
 8443ef9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8443efc:	89 04 24             	mov    %eax,(%esp)
 8443eff:	e8 84 b8 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8443f04:	bb 00 00 00 00       	mov    $0x0,%ebx
 8443f09:	e9 4e 01 00 00       	jmp    844405c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x330>
 8443f0e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443f11:	83 c0 08             	add    $0x8,%eax
 8443f14:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443f18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8443f1f:	00 
 8443f20:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443f23:	89 04 24             	mov    %eax,(%esp)
 8443f26:	e8 01 2a cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8443f2b:	88 45 f3             	mov    %al,-0xd(%ebp)
 8443f2e:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8443f32:	83 f0 01             	xor    $0x1,%eax
 8443f35:	84 c0                	test   %al,%al
 8443f37:	74 53                	je     8443f8c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x260>
 8443f39:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443f3c:	8b 70 04             	mov    0x4(%eax),%esi
 8443f3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443f42:	8b 18                	mov    (%eax),%ebx
 8443f44:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8443f4b:	00 
 8443f4c:	c7 44 24 08 d2 a7 00 	movl   $0xa7d2,0x8(%esp)
 8443f53:	00 
 8443f54:	c7 44 24 04 00 b5 c5 	movl   $0x8c5b500,0x4(%esp)
 8443f5b:	08 
 8443f5c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8443f5f:	89 04 24             	mov    %eax,(%esp)
 8443f62:	e8 b1 b7 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8443f67:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8443f6b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8443f6f:	c7 44 24 04 80 6f c5 	movl   $0x8c56f80,0x4(%esp)
 8443f76:	08 
 8443f77:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8443f7a:	89 04 24             	mov    %eax,(%esp)
 8443f7d:	e8 06 b8 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8443f82:	bb 00 00 00 00       	mov    $0x0,%ebx
 8443f87:	e9 d0 00 00 00       	jmp    844405c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x330>
 8443f8c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8443f91:	c7 44 24 08 d8 a7 00 	movl   $0xa7d8,0x8(%esp)
 8443f98:	00 
 8443f99:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8443fa0:	08 
 8443fa1:	89 04 24             	mov    %eax,(%esp)
 8443fa4:	e8 dd ba e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8443fa9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8443fb0:	00 
 8443fb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443fb5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8443fb8:	89 04 24             	mov    %eax,(%esp)
 8443fbb:	e8 66 4c c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8443fc0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8443fc3:	89 04 24             	mov    %eax,(%esp)
 8443fc6:	e8 7b 4c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8443fcb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8443fce:	89 54 24 04          	mov    %edx,0x4(%esp)
 8443fd2:	89 04 24             	mov    %eax,(%esp)
 8443fd5:	e8 7c 4c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8443fda:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8443fdd:	89 04 24             	mov    %eax,(%esp)
 8443fe0:	e8 61 4c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8443fe5:	8b 55 10             	mov    0x10(%ebp),%edx
 8443fe8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8443fec:	89 04 24             	mov    %eax,(%esp)
 8443fef:	e8 62 4c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8443ff4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8443ff7:	89 04 24             	mov    %eax,(%esp)
 8443ffa:	e8 4f 4c c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8443fff:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8444006:	00 
 8444007:	8b 55 e8             	mov    -0x18(%ebp),%edx
 844400a:	89 54 24 04          	mov    %edx,0x4(%esp)
 844400e:	89 04 24             	mov    %eax,(%esp)
 8444011:	e8 3c a6 c9 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8444016:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844401b:	8d 55 a0             	lea    -0x60(%ebp),%edx
 844401e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8444022:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444029:	00 
 844402a:	89 04 24             	mov    %eax,(%esp)
 844402d:	e8 ac cf 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8444032:	89 c3                	mov    %eax,%ebx
 8444034:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8444037:	89 04 24             	mov    %eax,(%esp)
 844403a:	e8 93 88 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844403f:	eb 1b                	jmp    844405c <_ZN14DB_LoadMileage8dispatchEiiP6Stream+0x330>
 8444041:	89 d3                	mov    %edx,%ebx
 8444043:	89 c6                	mov    %eax,%esi
 8444045:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8444048:	89 04 24             	mov    %eax,(%esp)
 844404b:	e8 82 88 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8444050:	89 f0                	mov    %esi,%eax
 8444052:	89 da                	mov    %ebx,%edx
 8444054:	89 04 24             	mov    %eax,(%esp)
 8444057:	e8 f4 f6 69 00       	call   8ae3750 <_Unwind_Resume>
 844405c:	89 d8                	mov    %ebx,%eax
 844405e:	83 c4 70             	add    $0x70,%esp
 8444061:	5b                   	pop    %ebx
 8444062:	5e                   	pop    %esi
 8444063:	5d                   	pop    %ebp
 8444064:	c3                   	ret
 8444065:	90                   	nop

```

```c
// DB_LoadMileage::dispatch @ 0x8443d2c

/* DB_LoadMileage::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadMileage::dispatch(DB_LoadMileage *this,int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_64 [8];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  SIG_MILEAGE_STRUCT *local_1c;
  MySQL *local_18;
  char local_11;
  int local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_MILEAGE_STRUCT>(param_3);
  if (local_1c == (SIG_MILEAGE_STRUCT *)0x0) {
    uVar4 = 0;
  }
  else {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_18 == (MySQL *)0x0) {
      cMyTrace::cMyTrace(local_5c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",0xa7ae,
                         5);
      cMyTrace::operator()(local_5c,"[ERROR] Database Handle is NULL [index:%d]",1);
      uVar4 = 0;
    }
    else {
      MySQL::set_query(local_18,"seLect miles from member_miles where m_id = %u",
                       *(undefined4 *)local_1c);
      local_11 = MySQL::exec(local_18,true);
      if (local_11 == '\x01') {
        local_10 = MySQL::get_n_rows(local_18);
        if (local_10 == 0) {
          MySQL::set_query(local_18,
                           "inSert into member_miles (m_id, miles, daily_miles) values (%u, 0, 0)",
                           *(undefined4 *)local_1c);
          MySQL::exec(local_18,true);
          *(undefined4 *)(local_1c + 8) = 0;
        }
        else {
          local_11 = MySQL::fetch(local_18);
          if (local_11 != '\x01') {
            uVar4 = *(undefined4 *)(local_1c + 4);
            uVar1 = *(undefined4 *)local_1c;
            cMyTrace::cMyTrace(local_3c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",
                               0xa7cb,5);
            cMyTrace::operator()(local_3c,"[ERROR] Fetch [m_id:%u][charac_no:%u]",uVar1,uVar4);
            return 0;
          }
          local_11 = MySQL::get_int(local_18,0,(int *)(local_1c + 8));
          if (local_11 != '\x01') {
            uVar4 = *(undefined4 *)(local_1c + 4);
            uVar1 = *(undefined4 *)local_1c;
            cMyTrace::cMyTrace(local_2c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",
                               0xa7d2,5);
            cMyTrace::operator()(local_2c,"[ERROR] Mileage [m_id:%u][charac_no:%u]",uVar1,uVar4);
            return 0;
          }
        }
        pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa7d8);
        CStreamGuard::CStreamGuard(local_64,pSVar2,true);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
                    /* try { // try from 08443fd5 to 08444031 has its CatchHandler @ 08444041 */
        CStreamGuard::operator<<(pCVar3,param_1);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
        CStreamGuard::operator<<(pCVar3,param_2);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_64);
        CStreamGuard::put_binary(pCVar3,local_1c,0xc);
        uVar4 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_64);
        CStreamGuard::~CStreamGuard(local_64);
      }
      else {
        uVar4 = *(undefined4 *)(local_1c + 4);
        uVar1 = *(undefined4 *)local_1c;
        cMyTrace::cMyTrace(local_4c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",
                           0xa7b6,5);
        cMyTrace::operator()(local_4c,"[ERROR] Exec [m_id:%u][charac_no:%u]",uVar1,uVar4);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```


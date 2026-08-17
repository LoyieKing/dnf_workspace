# TaoCrypt__RSA_Private_Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Decode

```asm
// === 08755bc0 TaoCrypt::RSA_Private_Decoder::Decode  [0x08755bc0-0x8755f4f] ===
 8755bc0:	55                   	push   %ebp
 8755bc1:	89 e5                	mov    %esp,%ebp
 8755bc3:	57                   	push   %edi
 8755bc4:	56                   	push   %esi
 8755bc5:	53                   	push   %ebx
 8755bc6:	81 ec ac 00 00 00    	sub    $0xac,%esp
 8755bcc:	8b 75 08             	mov    0x8(%ebp),%esi
 8755bcf:	e8 24 d2 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8755bd4:	81 c3 c4 6f c1 00    	add    $0xc16fc4,%ebx
 8755bda:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8755bdd:	8b 06                	mov    (%esi),%eax
 8755bdf:	89 34 24             	mov    %esi,(%esp)
 8755be2:	ff 50 08             	call   *0x8(%eax)
 8755be5:	8b 46 04             	mov    0x4(%esi),%eax
 8755be8:	8b 40 10             	mov    0x10(%eax),%eax
 8755beb:	85 c0                	test   %eax,%eax
 8755bed:	0f 85 43 03 00 00    	jne    8755f36 <_ZN8TaoCrypt19RSA_Private_Decoder6DecodeERNS_14RSA_PrivateKeyE+0x376>
 8755bf3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8755bf6:	89 04 24             	mov    %eax,(%esp)
 8755bf9:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755bff:	e8 8c 99 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755c04:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755c0a:	89 34 24             	mov    %esi,(%esp)
 8755c0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755c11:	e8 8a e8 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755c16:	89 3c 24             	mov    %edi,(%esp)
 8755c19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755c1d:	e8 3e a8 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755c22:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8755c25:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8755c28:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755c2f:	00 
 8755c30:	c1 e0 02             	shl    $0x2,%eax
 8755c33:	89 14 24             	mov    %edx,(%esp)
 8755c36:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 8755c3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755c40:	e8 7b 80 92 ff       	call   807dcc0 <memset@plt>
 8755c45:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8755c4b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755c50:	89 14 24             	mov    %edx,(%esp)
 8755c53:	e8 c8 1a 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755c58:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8755c5b:	89 04 24             	mov    %eax,(%esp)
 8755c5e:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755c64:	e8 27 99 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755c69:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755c6f:	89 34 24             	mov    %esi,(%esp)
 8755c72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755c76:	e8 25 e8 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755c7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755c7f:	8d 47 10             	lea    0x10(%edi),%eax
 8755c82:	89 04 24             	mov    %eax,(%esp)
 8755c85:	e8 d6 a7 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755c8a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8755c8d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8755c90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755c97:	00 
 8755c98:	c1 e0 02             	shl    $0x2,%eax
 8755c9b:	89 14 24             	mov    %edx,(%esp)
 8755c9e:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 8755ca4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755ca8:	e8 13 80 92 ff       	call   807dcc0 <memset@plt>
 8755cad:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8755cb3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755cb8:	89 14 24             	mov    %edx,(%esp)
 8755cbb:	e8 60 1a 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755cc0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8755cc3:	89 04 24             	mov    %eax,(%esp)
 8755cc6:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755ccc:	e8 bf 98 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755cd1:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755cd7:	89 34 24             	mov    %esi,(%esp)
 8755cda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755cde:	e8 bd e7 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755ce3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755ce7:	8d 47 20             	lea    0x20(%edi),%eax
 8755cea:	89 04 24             	mov    %eax,(%esp)
 8755ced:	e8 6e a7 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755cf2:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8755cf5:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8755cf8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755cff:	00 
 8755d00:	c1 e0 02             	shl    $0x2,%eax
 8755d03:	89 14 24             	mov    %edx,(%esp)
 8755d06:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 8755d0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755d10:	e8 ab 7f 92 ff       	call   807dcc0 <memset@plt>
 8755d15:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8755d1b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755d20:	89 14 24             	mov    %edx,(%esp)
 8755d23:	e8 f8 19 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755d28:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8755d2b:	89 04 24             	mov    %eax,(%esp)
 8755d2e:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755d34:	e8 57 98 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755d39:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755d3f:	89 34 24             	mov    %esi,(%esp)
 8755d42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755d46:	e8 55 e7 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755d4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755d4f:	8d 47 30             	lea    0x30(%edi),%eax
 8755d52:	89 04 24             	mov    %eax,(%esp)
 8755d55:	e8 06 a7 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755d5a:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8755d5d:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8755d60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755d67:	00 
 8755d68:	c1 e0 02             	shl    $0x2,%eax
 8755d6b:	89 14 24             	mov    %edx,(%esp)
 8755d6e:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 8755d74:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755d78:	e8 43 7f 92 ff       	call   807dcc0 <memset@plt>
 8755d7d:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8755d83:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755d88:	89 14 24             	mov    %edx,(%esp)
 8755d8b:	e8 90 19 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755d90:	8d 45 98             	lea    -0x68(%ebp),%eax
 8755d93:	89 04 24             	mov    %eax,(%esp)
 8755d96:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755d9c:	e8 ef 97 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755da1:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755da7:	89 34 24             	mov    %esi,(%esp)
 8755daa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755dae:	e8 ed e6 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755db3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755db7:	8d 47 40             	lea    0x40(%edi),%eax
 8755dba:	89 04 24             	mov    %eax,(%esp)
 8755dbd:	e8 9e a6 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755dc2:	8b 45 98             	mov    -0x68(%ebp),%eax
 8755dc5:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8755dc8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755dcf:	00 
 8755dd0:	c1 e0 02             	shl    $0x2,%eax
 8755dd3:	89 14 24             	mov    %edx,(%esp)
 8755dd6:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 8755ddc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755de0:	e8 db 7e 92 ff       	call   807dcc0 <memset@plt>
 8755de5:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8755deb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755df0:	89 14 24             	mov    %edx,(%esp)
 8755df3:	e8 28 19 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755df8:	8d 45 88             	lea    -0x78(%ebp),%eax
 8755dfb:	89 04 24             	mov    %eax,(%esp)
 8755dfe:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755e04:	e8 87 97 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755e09:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755e0f:	89 34 24             	mov    %esi,(%esp)
 8755e12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755e16:	e8 85 e6 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755e1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755e1f:	8d 47 50             	lea    0x50(%edi),%eax
 8755e22:	89 04 24             	mov    %eax,(%esp)
 8755e25:	e8 36 a6 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755e2a:	8b 45 88             	mov    -0x78(%ebp),%eax
 8755e2d:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8755e30:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755e37:	00 
 8755e38:	c1 e0 02             	shl    $0x2,%eax
 8755e3b:	89 14 24             	mov    %edx,(%esp)
 8755e3e:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 8755e44:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755e48:	e8 73 7e 92 ff       	call   807dcc0 <memset@plt>
 8755e4d:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8755e53:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755e58:	89 14 24             	mov    %edx,(%esp)
 8755e5b:	e8 c0 18 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755e60:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8755e66:	89 04 24             	mov    %eax,(%esp)
 8755e69:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755e6f:	e8 1c 97 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755e74:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755e7a:	89 34 24             	mov    %esi,(%esp)
 8755e7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755e81:	e8 1a e6 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755e86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755e8a:	8d 47 60             	lea    0x60(%edi),%eax
 8755e8d:	83 c7 70             	add    $0x70,%edi
 8755e90:	89 04 24             	mov    %eax,(%esp)
 8755e93:	e8 c8 a5 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755e98:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8755e9e:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8755ea4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755eab:	00 
 8755eac:	c1 e0 02             	shl    $0x2,%eax
 8755eaf:	89 14 24             	mov    %edx,(%esp)
 8755eb2:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 8755eb8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755ebc:	e8 ff 7d 92 ff       	call   807dcc0 <memset@plt>
 8755ec1:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8755ec7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755ecc:	89 14 24             	mov    %edx,(%esp)
 8755ecf:	e8 4c 18 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755ed4:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8755eda:	89 04 24             	mov    %eax,(%esp)
 8755edd:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8755ee3:	e8 a8 96 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755ee8:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8755eee:	89 34 24             	mov    %esi,(%esp)
 8755ef1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755ef5:	e8 a6 e5 ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755efa:	89 3c 24             	mov    %edi,(%esp)
 8755efd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755f01:	e8 5a a5 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755f06:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8755f0c:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 8755f12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755f19:	00 
 8755f1a:	c1 e0 02             	shl    $0x2,%eax
 8755f1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755f21:	89 34 24             	mov    %esi,(%esp)
 8755f24:	e8 97 7d 92 ff       	call   807dcc0 <memset@plt>
 8755f29:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755f2e:	89 34 24             	mov    %esi,(%esp)
 8755f31:	e8 ea 17 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755f36:	81 c4 ac 00 00 00    	add    $0xac,%esp
 8755f3c:	5b                   	pop    %ebx
 8755f3d:	5e                   	pop    %esi
 8755f3e:	5f                   	pop    %edi
 8755f3f:	5d                   	pop    %ebp
 8755f40:	c3                   	ret
 8755f41:	90                   	nop
 8755f42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8755f49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RSA_Private_Decoder::Decode @ 0x8755bc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Private_Decoder::Decode(TaoCrypt::RSA_PrivateKey&) */

void __thiscall
TaoCrypt::RSA_Private_Decoder::Decode(RSA_Private_Decoder *this,RSA_PrivateKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_9c;
  void *local_98;
  int local_8c;
  void *local_88;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    Integer::Integer((Integer *)&local_2c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    Integer::operator=((Integer *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    Integer::operator=((Integer *)(param_1 + 0x10),pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_4c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_4c);
    Integer::operator=((Integer *)(param_1 + 0x20),pIVar1);
    uVar2 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_5c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_5c);
    Integer::operator=((Integer *)(param_1 + 0x30),pIVar1);
    uVar2 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_6c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_6c);
    Integer::operator=((Integer *)(param_1 + 0x40),pIVar1);
    uVar2 = 0;
    memset(local_68,0,local_6c << 2);
    operator_delete__(local_68,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_7c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_7c);
    Integer::operator=((Integer *)(param_1 + 0x50),pIVar1);
    uVar2 = 0;
    memset(local_78,0,local_7c << 2);
    operator_delete__(local_78,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_8c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_8c);
    Integer::operator=((Integer *)(param_1 + 0x60),pIVar1);
    uVar2 = 0;
    memset(local_88,0,local_8c << 2);
    operator_delete__(local_88,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_9c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_9c);
    Integer::operator=((Integer *)(param_1 + 0x70),pIVar1);
    uVar2 = 0;
    memset(local_98,0,local_9c << 2);
    operator_delete__(local_98,uVar2 & 0xffffff00);
  }
  return;
}

```

---

## ReadHeader

```asm
// === 08753920 TaoCrypt::RSA_Private_Decoder::ReadHeader  [0x08753920-0x875395f] ===
 8753920:	55                   	push   %ebp
 8753921:	89 e5                	mov    %esp,%ebp
 8753923:	83 ec 18             	sub    $0x18,%esp
 8753926:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753929:	e8 ca f4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875392e:	81 c3 6a 92 c1 00    	add    $0xc1926a,%ebx
 8753934:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753937:	8b 75 08             	mov    0x8(%ebp),%esi
 875393a:	89 34 24             	mov    %esi,(%esp)
 875393d:	e8 4e fe ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8753942:	89 34 24             	mov    %esi,(%esp)
 8753945:	e8 06 ff ff ff       	call   8753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>
 875394a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 875394d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753950:	89 ec                	mov    %ebp,%esp
 8753952:	5d                   	pop    %ebp
 8753953:	c3                   	ret
 8753954:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875395a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::RSA_Private_Decoder::ReadHeader @ 0x8753920

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Private_Decoder::ReadHeader() */

void __thiscall TaoCrypt::RSA_Private_Decoder::ReadHeader(RSA_Private_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  BER_Decoder::GetVersion((BER_Decoder *)this);
  return;
}

```


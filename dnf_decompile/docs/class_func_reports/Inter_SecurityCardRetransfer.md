# Inter_SecurityCardRetransfer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d3e78 Inter_SecurityCardRetransfer::dispatch_sig  [0x084d3e78-0x84d41a9] ===
 84d3e78:	55                   	push   %ebp
 84d3e79:	89 e5                	mov    %esp,%ebp
 84d3e7b:	57                   	push   %edi
 84d3e7c:	56                   	push   %esi
 84d3e7d:	53                   	push   %ebx
 84d3e7e:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 84d3e84:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3e87:	89 04 24             	mov    %eax,(%esp)
 84d3e8a:	e8 fd 64 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d3e8f:	83 f8 02             	cmp    $0x2,%eax
 84d3e92:	0f 9e c0             	setle  %al
 84d3e95:	84 c0                	test   %al,%al
 84d3e97:	74 0a                	je     84d3ea3 <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x2b>
 84d3e99:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3e9e:	e9 fc 02 00 00       	jmp    84d419f <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x327>
 84d3ea3:	8b 45 10             	mov    0x10(%ebp),%eax
 84d3ea6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d3ea9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3eac:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 84d3eb2:	85 c0                	test   %eax,%eax
 84d3eb4:	0f 85 bd 02 00 00    	jne    84d4177 <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x2ff>
 84d3eba:	8d 95 66 ff ff ff    	lea    -0x9a(%ebp),%edx
 84d3ec0:	bb 42 00 00 00       	mov    $0x42,%ebx
 84d3ec5:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3eca:	89 d1                	mov    %edx,%ecx
 84d3ecc:	83 e1 02             	and    $0x2,%ecx
 84d3ecf:	85 c9                	test   %ecx,%ecx
 84d3ed1:	74 09                	je     84d3edc <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x64>
 84d3ed3:	66 89 02             	mov    %ax,(%edx)
 84d3ed6:	83 c2 02             	add    $0x2,%edx
 84d3ed9:	83 eb 02             	sub    $0x2,%ebx
 84d3edc:	89 d9                	mov    %ebx,%ecx
 84d3ede:	c1 e9 02             	shr    $0x2,%ecx
 84d3ee1:	89 d7                	mov    %edx,%edi
 84d3ee3:	f3 ab                	rep stos %eax,%es:(%edi)
 84d3ee5:	89 fa                	mov    %edi,%edx
 84d3ee7:	89 d9                	mov    %ebx,%ecx
 84d3ee9:	83 e1 02             	and    $0x2,%ecx
 84d3eec:	85 c9                	test   %ecx,%ecx
 84d3eee:	74 06                	je     84d3ef6 <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x7e>
 84d3ef0:	66 89 02             	mov    %ax,(%edx)
 84d3ef3:	83 c2 02             	add    $0x2,%edx
 84d3ef6:	89 d9                	mov    %ebx,%ecx
 84d3ef8:	83 e1 01             	and    $0x1,%ecx
 84d3efb:	85 c9                	test   %ecx,%ecx
 84d3efd:	74 05                	je     84d3f04 <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x8c>
 84d3eff:	88 02                	mov    %al,(%edx)
 84d3f01:	83 c2 01             	add    $0x1,%edx
 84d3f04:	8d 5d a8             	lea    -0x58(%ebp),%ebx
 84d3f07:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3f0c:	ba 0c 00 00 00       	mov    $0xc,%edx
 84d3f11:	89 df                	mov    %ebx,%edi
 84d3f13:	89 d1                	mov    %edx,%ecx
 84d3f15:	f3 ab                	rep stos %eax,%es:(%edi)
 84d3f17:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3f1a:	89 04 24             	mov    %eax,(%esp)
 84d3f1d:	e8 4c 64 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d3f22:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d3f29:	00 
 84d3f2a:	89 04 24             	mov    %eax,(%esp)
 84d3f2d:	e8 19 51 c3 ff       	call   810904b <_Z14NumberToStringji>
 84d3f32:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d3f36:	c7 44 24 08 6f 7d c8 	movl   $0x8c87d6f,0x8(%esp)
 84d3f3d:	08 
 84d3f3e:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 84d3f45:	00 
 84d3f46:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d3f49:	89 04 24             	mov    %eax,(%esp)
 84d3f4c:	e8 cb 88 0b 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84d3f51:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3f54:	8d 48 04             	lea    0x4(%eax),%ecx
 84d3f57:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 84d3f5c:	8d 95 66 ff ff ff    	lea    -0x9a(%ebp),%edx
 84d3f62:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3f66:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84d3f6a:	89 04 24             	mov    %eax,(%esp)
 84d3f6d:	e8 70 a3 12 00       	call   85fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>
 84d3f72:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 84d3f77:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84d3f7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3f7e:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84d3f81:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d3f85:	89 04 24             	mov    %eax,(%esp)
 84d3f88:	e8 55 a3 12 00       	call   85fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>
 84d3f8d:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 84d3f94:	00 
 84d3f95:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d3f9c:	00 
 84d3f9d:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d3fa3:	89 04 24             	mov    %eax,(%esp)
 84d3fa6:	e8 15 9d ba ff       	call   807dcc0 <memset@plt>
 84d3fab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3fae:	8d 48 52             	lea    0x52(%eax),%ecx
 84d3fb1:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 84d3fb6:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 84d3fbc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3fc0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84d3fc4:	89 04 24             	mov    %eax,(%esp)
 84d3fc7:	e8 16 a3 12 00       	call   85fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>
 84d3fcc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3fcf:	89 04 24             	mov    %eax,(%esp)
 84d3fd2:	e8 75 9d 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d3fd7:	c7 44 24 08 ca 00 00 	movl   $0xca,0x8(%esp)
 84d3fde:	00 
 84d3fdf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3fe6:	00 
 84d3fe7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3fea:	89 04 24             	mov    %eax,(%esp)
 84d3fed:	e8 0a 79 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d3ff2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3ff9:	00 
 84d3ffa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d3ffd:	89 04 24             	mov    %eax,(%esp)
 84d4000:	e8 1b 79 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4005:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d4008:	89 04 24             	mov    %eax,(%esp)
 84d400b:	e8 a0 a3 ba ff       	call   807e3b0 <strlen@plt>
 84d4010:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4014:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d4017:	89 04 24             	mov    %eax,(%esp)
 84d401a:	e8 1d 79 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d401f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d4022:	89 04 24             	mov    %eax,(%esp)
 84d4025:	e8 86 a3 ba ff       	call   807e3b0 <strlen@plt>
 84d402a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d402e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84d4031:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4035:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d4038:	89 04 24             	mov    %eax,(%esp)
 84d403b:	e8 a4 33 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d4040:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 84d4046:	89 04 24             	mov    %eax,(%esp)
 84d4049:	e8 62 a3 ba ff       	call   807e3b0 <strlen@plt>
 84d404e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4052:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d4055:	89 04 24             	mov    %eax,(%esp)
 84d4058:	e8 df 78 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d405d:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 84d4063:	89 04 24             	mov    %eax,(%esp)
 84d4066:	e8 45 a3 ba ff       	call   807e3b0 <strlen@plt>
 84d406b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d406f:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 84d4075:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4079:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d407c:	89 04 24             	mov    %eax,(%esp)
 84d407f:	e8 60 33 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d4084:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d408a:	89 04 24             	mov    %eax,(%esp)
 84d408d:	e8 1e a3 ba ff       	call   807e3b0 <strlen@plt>
 84d4092:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4096:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d4099:	89 04 24             	mov    %eax,(%esp)
 84d409c:	e8 9b 78 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d40a1:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d40a7:	89 04 24             	mov    %eax,(%esp)
 84d40aa:	e8 01 a3 ba ff       	call   807e3b0 <strlen@plt>
 84d40af:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d40b3:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84d40b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d40bd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d40c0:	89 04 24             	mov    %eax,(%esp)
 84d40c3:	e8 1c 33 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d40c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d40cf:	00 
 84d40d0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d40d3:	89 04 24             	mov    %eax,(%esp)
 84d40d6:	e8 7d 78 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d40db:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d40de:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d40e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d40e5:	89 04 24             	mov    %eax,(%esp)
 84d40e8:	e8 cd 44 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d40ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d40f0:	89 04 24             	mov    %eax,(%esp)
 84d40f3:	e8 28 bc d5 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84d40f8:	89 04 24             	mov    %eax,(%esp)
 84d40fb:	e8 68 9c 12 00       	call   85fdd68 <_ZN8WongWork13CSecurityCard4initEv>
 84d4100:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d4103:	8d 58 2b             	lea    0x2b(%eax),%ebx
 84d4106:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4109:	89 04 24             	mov    %eax,(%esp)
 84d410c:	e8 0f bc d5 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84d4111:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84d4118:	00 
 84d4119:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84d4120:	00 
 84d4121:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d4128:	00 
 84d4129:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d4130:	00 
 84d4131:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4138:	00 
 84d4139:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d4140:	00 
 84d4141:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d4145:	89 04 24             	mov    %eax,(%esp)
 84d4148:	e8 4f 9d 12 00       	call   85fde9c <_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc>
 84d414d:	eb 1b                	jmp    84d416a <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x2f2>
 84d414f:	89 d3                	mov    %edx,%ebx
 84d4151:	89 c6                	mov    %eax,%esi
 84d4153:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d4156:	89 04 24             	mov    %eax,(%esp)
 84d4159:	e8 22 9d 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d415e:	89 f0                	mov    %esi,%eax
 84d4160:	89 da                	mov    %ebx,%edx
 84d4162:	89 04 24             	mov    %eax,(%esp)
 84d4165:	e8 e6 f5 60 00       	call   8ae3750 <_Unwind_Resume>
 84d416a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d416d:	89 04 24             	mov    %eax,(%esp)
 84d4170:	e8 0b 9d 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4175:	eb 23                	jmp    84d419a <_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci+0x322>
 84d4177:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d417a:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 84d4180:	0f b6 c0             	movzbl %al,%eax
 84d4183:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d4187:	c7 44 24 04 ca 00 00 	movl   $0xca,0x4(%esp)
 84d418e:	00 
 84d418f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d4192:	89 04 24             	mov    %eax,(%esp)
 84d4195:	e8 a8 7d 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d419a:	b8 00 00 00 00       	mov    $0x0,%eax
 84d419f:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 84d41a5:	5b                   	pop    %ebx
 84d41a6:	5e                   	pop    %esi
 84d41a7:	5f                   	pop    %edi
 84d41a8:	5d                   	pop    %ebp
 84d41a9:	c3                   	ret

```

```c
// Inter_SecurityCardRetransfer::dispatch_sig @ 0x84d3e78

/* WARNING: Removing unreachable block (ram,0x084d3eff) */
/* Inter_SecurityCardRetransfer::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecurityCardRetransfer::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  CSecurityCard *pCVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_e0 [66];
  char local_9e [66];
  char local_5c [48];
  PacketGuard local_2c [12];
  int local_20;
  
  bVar8 = 0;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_20 = param_3;
    if (*(int *)(param_3 + 0x88) == 0) {
      pcVar5 = local_9e;
      uVar6 = 0x42;
      bVar7 = ((uint)pcVar5 & 2) != 0;
      if (bVar7) {
        local_9e[0] = '\0';
        local_9e[1] = '\0';
        pcVar5 = local_9e + 2;
        uVar6 = 0x40;
      }
      for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      if (!bVar7) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
      }
      pcVar5 = local_5c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      uVar2 = NumberToString(uVar6,0);
      OS_API::snprintf(local_5c,0x30,"%s",uVar2);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 4),local_9e);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,local_5c,local_5c);
      memset(local_e0,0,0x42);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 0x52),local_e0);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084d3fed to 084d414c has its CatchHandler @ 084d414f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xca);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      sVar3 = strlen(local_5c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
      sVar3 = strlen(local_5c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_5c,sVar3);
      sVar3 = strlen(local_9e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
      sVar3 = strlen(local_9e);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_9e,sVar3);
      sVar3 = strlen(local_e0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
      sVar3 = strlen(local_e0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_e0,sVar3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::init(pCVar4);
      pcVar5 = (char *)(local_20 + 0x2b);
      pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setSecurityCardInfo(pCVar4,pcVar5,true,false,0,0,0,(char *)0x0);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xca,*(uint *)(param_3 + 0x88) & 0xff);
    }
  }
  return 0;
}

```


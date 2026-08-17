# expert_job

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DelMaterialOfRecipe

```asm
// === 0849b957 expert_job::DelMaterialOfRecipe  [0x0849b957-0x849bcfa] ===
 849b957:	55                   	push   %ebp
 849b958:	89 e5                	mov    %esp,%ebp
 849b95a:	56                   	push   %esi
 849b95b:	53                   	push   %ebx
 849b95c:	81 ec 90 00 00 00    	sub    $0x90,%esp
 849b962:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 849b965:	89 04 24             	mov    %eax,(%esp)
 849b968:	e8 69 90 c9 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 849b96d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 849b970:	89 04 24             	mov    %eax,(%esp)
 849b973:	e8 ca e9 cd ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 849b978:	8b 45 0c             	mov    0xc(%ebp),%eax
 849b97b:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b97f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 849b982:	89 04 24             	mov    %eax,(%esp)
 849b985:	e8 02 37 e7 ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 849b98a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 849b98d:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b991:	8b 45 08             	mov    0x8(%ebp),%eax
 849b994:	89 04 24             	mov    %eax,(%esp)
 849b997:	e8 bc 00 1f 00       	call   868ba58 <_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE>
 849b99c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 849b99f:	89 04 24             	mov    %eax,(%esp)
 849b9a2:	e8 05 28 bf ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 849b9a7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 849b9aa:	89 04 24             	mov    %eax,(%esp)
 849b9ad:	e8 fa 27 bf ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 849b9b2:	8d 45 98             	lea    -0x68(%ebp),%eax
 849b9b5:	89 04 24             	mov    %eax,(%esp)
 849b9b8:	e8 75 38 ce ff       	call   817f232 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1Ev>
 849b9bd:	8b 45 08             	mov    0x8(%ebp),%eax
 849b9c0:	89 04 24             	mov    %eax,(%esp)
 849b9c3:	e8 c6 e8 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849b9c8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 849b9cf:	00 
 849b9d0:	c7 44 24 14 08 00 00 	movl   $0x8,0x14(%esp)
 849b9d7:	00 
 849b9d8:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 849b9df:	00 
 849b9e0:	8b 55 18             	mov    0x18(%ebp),%edx
 849b9e3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849b9e7:	8d 55 a8             	lea    -0x58(%ebp),%edx
 849b9ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 849b9ee:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 849b9f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b9f5:	89 04 24             	mov    %eax,(%esp)
 849b9f8:	e8 b7 a3 06 00       	call   8505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>
 849b9fd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849ba00:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849ba04:	75 69                	jne    849ba6f <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x118>
 849ba06:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 849ba09:	89 04 24             	mov    %eax,(%esp)
 849ba0c:	e8 03 1e c4 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 849ba11:	89 c6                	mov    %eax,%esi
 849ba13:	8b 45 08             	mov    0x8(%ebp),%eax
 849ba16:	89 04 24             	mov    %eax,(%esp)
 849ba19:	e8 30 02 c3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849ba1e:	89 c3                	mov    %eax,%ebx
 849ba20:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 849ba27:	00 
 849ba28:	c7 44 24 08 c0 01 00 	movl   $0x1c0,0x8(%esp)
 849ba2f:	00 
 849ba30:	c7 44 24 04 60 ca c7 	movl   $0x8c7ca60,0x4(%esp)
 849ba37:	08 
 849ba38:	8d 45 c0             	lea    -0x40(%ebp),%eax
 849ba3b:	89 04 24             	mov    %eax,(%esp)
 849ba3e:	e8 d5 3c 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849ba43:	89 74 24 10          	mov    %esi,0x10(%esp)
 849ba47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849ba4a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849ba4e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849ba52:	c7 44 24 04 58 ba c7 	movl   $0x8c7ba58,0x4(%esp)
 849ba59:	08 
 849ba5a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 849ba5d:	89 04 24             	mov    %eax,(%esp)
 849ba60:	e8 23 3d 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849ba65:	bb 00 00 00 00       	mov    $0x0,%ebx
 849ba6a:	e9 2b 02 00 00       	jmp    849bc9a <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x343>
 849ba6f:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 849ba73:	0f 85 ef 00 00 00    	jne    849bb68 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x211>
 849ba79:	8b 45 1c             	mov    0x1c(%ebp),%eax
 849ba7c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 849ba7f:	01 c2                	add    %eax,%edx
 849ba81:	8b 45 14             	mov    0x14(%ebp),%eax
 849ba84:	89 54 24 04          	mov    %edx,0x4(%esp)
 849ba88:	89 04 24             	mov    %eax,(%esp)
 849ba8b:	e8 90 fe c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849ba90:	8b 45 08             	mov    0x8(%ebp),%eax
 849ba93:	89 04 24             	mov    %eax,(%esp)
 849ba96:	e8 f3 e7 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849ba9b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 849baa2:	00 
 849baa3:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 849baaa:	00 
 849baab:	8b 55 1c             	mov    0x1c(%ebp),%edx
 849baae:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849bab2:	8b 55 10             	mov    0x10(%ebp),%edx
 849bab5:	89 54 24 08          	mov    %edx,0x8(%esp)
 849bab9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849bac0:	00 
 849bac1:	89 04 24             	mov    %eax,(%esp)
 849bac4:	e8 43 85 06 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 849bac9:	88 45 f7             	mov    %al,-0x9(%ebp)
 849bacc:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 849bad0:	83 f0 01             	xor    $0x1,%eax
 849bad3:	84 c0                	test   %al,%al
 849bad5:	74 58                	je     849bb2f <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x1d8>
 849bad7:	8b 45 08             	mov    0x8(%ebp),%eax
 849bada:	89 04 24             	mov    %eax,(%esp)
 849badd:	e8 6c 01 c3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849bae2:	89 c3                	mov    %eax,%ebx
 849bae4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 849baeb:	00 
 849baec:	c7 44 24 08 cf 01 00 	movl   $0x1cf,0x8(%esp)
 849baf3:	00 
 849baf4:	c7 44 24 04 60 ca c7 	movl   $0x8c7ca60,0x4(%esp)
 849bafb:	08 
 849bafc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849baff:	89 04 24             	mov    %eax,(%esp)
 849bb02:	e8 11 3c 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849bb07:	8b 45 10             	mov    0x10(%ebp),%eax
 849bb0a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849bb0e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849bb12:	c7 44 24 04 cc ba c7 	movl   $0x8c7bacc,0x4(%esp)
 849bb19:	08 
 849bb1a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849bb1d:	89 04 24             	mov    %eax,(%esp)
 849bb20:	e8 63 3c 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849bb25:	bb 00 00 00 00       	mov    $0x0,%ebx
 849bb2a:	e9 6b 01 00 00       	jmp    849bc9a <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x343>
 849bb2f:	8b 45 14             	mov    0x14(%ebp),%eax
 849bb32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849bb39:	00 
 849bb3a:	89 04 24             	mov    %eax,(%esp)
 849bb3d:	e8 de fd c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849bb42:	8b 45 14             	mov    0x14(%ebp),%eax
 849bb45:	8b 55 10             	mov    0x10(%ebp),%edx
 849bb48:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bb4c:	89 04 24             	mov    %eax,(%esp)
 849bb4f:	e8 50 e3 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849bb54:	8b 45 14             	mov    0x14(%ebp),%eax
 849bb57:	8b 55 1c             	mov    0x1c(%ebp),%edx
 849bb5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bb5e:	89 04 24             	mov    %eax,(%esp)
 849bb61:	e8 d6 fd c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849bb66:	eb 12                	jmp    849bb7a <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x223>
 849bb68:	8b 45 14             	mov    0x14(%ebp),%eax
 849bb6b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 849bb6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bb72:	89 04 24             	mov    %eax,(%esp)
 849bb75:	e8 a6 fd c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849bb7a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849bb7e:	0f 8e fa 00 00 00    	jle    849bc7e <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x327>
 849bb84:	8d 45 94             	lea    -0x6c(%ebp),%eax
 849bb87:	8d 55 a8             	lea    -0x58(%ebp),%edx
 849bb8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bb8e:	89 04 24             	mov    %eax,(%esp)
 849bb91:	e8 b2 26 bf ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 849bb96:	83 ec 04             	sub    $0x4,%esp
 849bb99:	8b 45 94             	mov    -0x6c(%ebp),%eax
 849bb9c:	89 45 98             	mov    %eax,-0x68(%ebp)
 849bb9f:	e9 ab 00 00 00       	jmp    849bc4f <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x2f8>
 849bba4:	8d 45 98             	lea    -0x68(%ebp),%eax
 849bba7:	89 04 24             	mov    %eax,(%esp)
 849bbaa:	e8 1d 2c bf ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849bbaf:	8b 10                	mov    (%eax),%edx
 849bbb1:	8b 45 14             	mov    0x14(%ebp),%eax
 849bbb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bbb8:	89 04 24             	mov    %eax,(%esp)
 849bbbb:	e8 60 fd c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849bbc0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849bbc3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849bbca:	00 
 849bbcb:	8d 55 98             	lea    -0x68(%ebp),%edx
 849bbce:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bbd2:	89 04 24             	mov    %eax,(%esp)
 849bbd5:	e8 2c 5d ea ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 849bbda:	83 ec 04             	sub    $0x4,%esp
 849bbdd:	8d 45 98             	lea    -0x68(%ebp),%eax
 849bbe0:	89 04 24             	mov    %eax,(%esp)
 849bbe3:	e8 e4 2b bf ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849bbe8:	8b 10                	mov    (%eax),%edx
 849bbea:	8b 45 14             	mov    0x14(%ebp),%eax
 849bbed:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bbf1:	89 04 24             	mov    %eax,(%esp)
 849bbf4:	e8 ab e2 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849bbf9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bbfc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849bc03:	00 
 849bc04:	8d 55 98             	lea    -0x68(%ebp),%edx
 849bc07:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bc0b:	89 04 24             	mov    %eax,(%esp)
 849bc0e:	e8 f3 5c ea ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 849bc13:	83 ec 04             	sub    $0x4,%esp
 849bc16:	8d 45 98             	lea    -0x68(%ebp),%eax
 849bc19:	89 04 24             	mov    %eax,(%esp)
 849bc1c:	e8 ab 2b bf ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849bc21:	8b 10                	mov    (%eax),%edx
 849bc23:	8b 45 14             	mov    0x14(%ebp),%eax
 849bc26:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bc2a:	89 04 24             	mov    %eax,(%esp)
 849bc2d:	e8 0a fd c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849bc32:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849bc35:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849bc3c:	00 
 849bc3d:	8d 55 98             	lea    -0x68(%ebp),%edx
 849bc40:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bc44:	89 04 24             	mov    %eax,(%esp)
 849bc47:	e8 ba 5c ea ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 849bc4c:	83 ec 04             	sub    $0x4,%esp
 849bc4f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849bc52:	8d 55 a8             	lea    -0x58(%ebp),%edx
 849bc55:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bc59:	89 04 24             	mov    %eax,(%esp)
 849bc5c:	e8 0b 26 bf ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 849bc61:	83 ec 04             	sub    $0x4,%esp
 849bc64:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849bc67:	89 44 24 04          	mov    %eax,0x4(%esp)
 849bc6b:	8d 45 98             	lea    -0x68(%ebp),%eax
 849bc6e:	89 04 24             	mov    %eax,(%esp)
 849bc71:	e8 ec e7 c4 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 849bc76:	84 c0                	test   %al,%al
 849bc78:	0f 85 26 ff ff ff    	jne    849bba4 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x24d>
 849bc7e:	bb 01 00 00 00       	mov    $0x1,%ebx
 849bc83:	eb 15                	jmp    849bc9a <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x343>
 849bc85:	89 d3                	mov    %edx,%ebx
 849bc87:	89 c6                	mov    %eax,%esi
 849bc89:	8d 45 9c             	lea    -0x64(%ebp),%eax
 849bc8c:	89 04 24             	mov    %eax,(%esp)
 849bc8f:	e8 46 81 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849bc94:	89 f0                	mov    %esi,%eax
 849bc96:	89 da                	mov    %ebx,%edx
 849bc98:	eb 0d                	jmp    849bca7 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x350>
 849bc9a:	8d 45 9c             	lea    -0x64(%ebp),%eax
 849bc9d:	89 04 24             	mov    %eax,(%esp)
 849bca0:	e8 35 81 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849bca5:	eb 15                	jmp    849bcbc <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x365>
 849bca7:	89 d3                	mov    %edx,%ebx
 849bca9:	89 c6                	mov    %eax,%esi
 849bcab:	8d 45 a8             	lea    -0x58(%ebp),%eax
 849bcae:	89 04 24             	mov    %eax,(%esp)
 849bcb1:	e8 24 81 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849bcb6:	89 f0                	mov    %esi,%eax
 849bcb8:	89 da                	mov    %ebx,%edx
 849bcba:	eb 0d                	jmp    849bcc9 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x372>
 849bcbc:	8d 45 a8             	lea    -0x58(%ebp),%eax
 849bcbf:	89 04 24             	mov    %eax,(%esp)
 849bcc2:	e8 13 81 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849bcc7:	eb 1b                	jmp    849bce4 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi+0x38d>
 849bcc9:	89 d3                	mov    %edx,%ebx
 849bccb:	89 c6                	mov    %eax,%esi
 849bccd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 849bcd0:	89 04 24             	mov    %eax,(%esp)
 849bcd3:	e8 12 8d c9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 849bcd8:	89 f0                	mov    %esi,%eax
 849bcda:	89 da                	mov    %ebx,%edx
 849bcdc:	89 04 24             	mov    %eax,(%esp)
 849bcdf:	e8 6c 7a 64 00       	call   8ae3750 <_Unwind_Resume>
 849bce4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 849bce7:	89 04 24             	mov    %eax,(%esp)
 849bcea:	e8 fb 8c c9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 849bcef:	89 d8                	mov    %ebx,%eax
 849bcf1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 849bcf4:	83 c4 00             	add    $0x0,%esp
 849bcf7:	5b                   	pop    %ebx
 849bcf8:	5e                   	pop    %esi
 849bcf9:	5d                   	pop    %ebp
 849bcfa:	c3                   	ret

```

```c
// expert_job::DelMaterialOfRecipe @ 0x849b957

/* expert_job::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, int, PacketGuard*, bool&, int) */

undefined4
expert_job::DelMaterialOfRecipe
          (CUser *param_1,vector *param_2,int param_3,PacketGuard *param_4,bool *param_5,int param_6
          )

{
  bool bVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_6c [4];
  vector<int,std::allocator<int>> local_68 [12];
  vector<int,std::allocator<int>> local_5c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  __normal_iterator local_24 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  char local_d;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
                    /* try { // try from 0849b973 to 0849b9a6 has its CatchHandler @ 0849bcc9 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_50);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=(local_50,param_2);
  CUser::CalculateExpertJobMaterials(param_1,(vector *)local_50);
  std::vector<int,std::allocator<int>>::vector(local_5c);
                    /* try { // try from 0849b9ad to 0849b9b1 has its CatchHandler @ 0849bca7 */
  std::vector<int,std::allocator<int>>::vector(local_68);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            (local_6c);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0849b9f8 to 0849bc75 has its CatchHandler @ 0849bc85 */
  local_14 = CInventory::delete_event_items(pCVar2,local_50,local_5c,param_5,0xc,8,0);
  if (local_14 == 0) {
    uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_50);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_44,
                       "bool expert_job::DelMaterialOfRecipe(CUser*, IntPairVector&, int, PacketGuard*, bool&, int)"
                       ,0x1c0,5);
    cMyTrace::operator()
              (local_44,
               "ExpertJobMaterial::DelMaterialOfRecipe, getCurCharacInvenR()->delete_event_items , size does not match! %d %d!=%d"
               ,uVar4,local_14,uVar3);
    uVar3 = 0;
  }
  else {
    if (param_6 == 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_14 + 1);
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_d = CInventory::delete_item(pCVar2,1,param_3,1,8,1);
      if (local_d != '\x01') {
        uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_34,
                           "bool expert_job::DelMaterialOfRecipe(CUser*, IntPairVector&, int, PacketGuard*, bool&, int)"
                           ,0x1cf,5);
        cMyTrace::operator()
                  (local_34,"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d"
                   ,uVar3,param_3);
        uVar3 = 0;
        goto LAB_0849bc9a;
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,param_3);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_14);
    }
    if (0 < local_14) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_6c,local_24);
        if (!bVar1) break;
        piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_6c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,*piVar5);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_20,(int)local_6c);
        piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_6c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,*piVar5);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_1c,(int)local_6c);
        piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_6c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,*piVar5);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_18,(int)local_6c);
      }
    }
    uVar3 = 1;
  }
LAB_0849bc9a:
                    /* try { // try from 0849bca0 to 0849bca4 has its CatchHandler @ 0849bca7 */
  std::vector<int,std::allocator<int>>::~vector(local_68);
                    /* try { // try from 0849bcc2 to 0849bcc6 has its CatchHandler @ 0849bcc9 */
  std::vector<int,std::allocator<int>>::~vector(local_5c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
  return uVar3;
}

```

---

## FindMonsterCard

```asm
// === 0849be32 expert_job::FindMonsterCard  [0x0849be32-0x849bf07] ===
 849be32:	55                   	push   %ebp
 849be33:	89 e5                	mov    %esp,%ebp
 849be35:	53                   	push   %ebx
 849be36:	83 ec 24             	sub    $0x24,%esp
 849be39:	8b 45 08             	mov    0x8(%ebp),%eax
 849be3c:	8d 90 74 01 00 00    	lea    0x174(%eax),%edx
 849be42:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849be45:	89 54 24 04          	mov    %edx,0x4(%esp)
 849be49:	89 04 24             	mov    %eax,(%esp)
 849be4c:	e8 61 17 c4 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 849be51:	83 ec 04             	sub    $0x4,%esp
 849be54:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849be57:	89 44 24 04          	mov    %eax,0x4(%esp)
 849be5b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849be5e:	89 04 24             	mov    %eax,(%esp)
 849be61:	e8 bc ba ee ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 849be66:	eb 60                	jmp    849bec8 <_ZN10expert_job15FindMonsterCardEP5CItem+0x96>
 849be68:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849be6b:	89 04 24             	mov    %eax,(%esp)
 849be6e:	e8 47 9d d9 ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 849be73:	8b 50 04             	mov    0x4(%eax),%edx
 849be76:	8b 00                	mov    (%eax),%eax
 849be78:	89 c3                	mov    %eax,%ebx
 849be7a:	e8 1c 03 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849be7f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849be83:	89 04 24             	mov    %eax,(%esp)
 849be86:	e8 a7 3b ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849be8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849be8e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849be92:	74 29                	je     849bebd <_ZN10expert_job15FindMonsterCardEP5CItem+0x8b>
 849be94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849be97:	89 04 24             	mov    %eax,(%esp)
 849be9a:	e8 5b 54 c5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 849be9f:	84 c0                	test   %al,%al
 849bea1:	74 1a                	je     849bebd <_ZN10expert_job15FindMonsterCardEP5CItem+0x8b>
 849bea3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849bea6:	89 04 24             	mov    %eax,(%esp)
 849bea9:	e8 24 0b d9 ff       	call   822c9d2 <_ZNK14CStackableItem12get_sub_typeEv>
 849beae:	83 f8 01             	cmp    $0x1,%eax
 849beb1:	0f 94 c0             	sete   %al
 849beb4:	84 c0                	test   %al,%al
 849beb6:	74 05                	je     849bebd <_ZN10expert_job15FindMonsterCardEP5CItem+0x8b>
 849beb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849bebb:	eb 45                	jmp    849bf02 <_ZN10expert_job15FindMonsterCardEP5CItem+0xd0>
 849bebd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bec0:	89 04 24             	mov    %eax,(%esp)
 849bec3:	e8 08 1e da ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 849bec8:	8b 45 08             	mov    0x8(%ebp),%eax
 849becb:	8d 90 74 01 00 00    	lea    0x174(%eax),%edx
 849bed1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 849bed4:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bed8:	89 04 24             	mov    %eax,(%esp)
 849bedb:	e8 f6 16 c4 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 849bee0:	83 ec 04             	sub    $0x4,%esp
 849bee3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 849bee6:	89 44 24 04          	mov    %eax,0x4(%esp)
 849beea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849beed:	89 04 24             	mov    %eax,(%esp)
 849bef0:	e8 47 ba ee ff       	call   838793c <_ZN9__gnu_cxxneIPKSt4pairIiiEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 849bef5:	84 c0                	test   %al,%al
 849bef7:	0f 85 6b ff ff ff    	jne    849be68 <_ZN10expert_job15FindMonsterCardEP5CItem+0x36>
 849befd:	b8 00 00 00 00       	mov    $0x0,%eax
 849bf02:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 849bf05:	c9                   	leave
 849bf06:	c3                   	ret
 849bf07:	90                   	nop

```

```c
// expert_job::FindMonsterCard @ 0x849be32

/* expert_job::FindMonsterCard(CItem*) */

CItem * expert_job::FindMonsterCard(CItem *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this;
  int iVar4;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  CStackableItem *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_1c,local_18);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar2) {
      return (CItem *)0x0;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_1c);
    iVar4 = *piVar3;
    this = (CDataManager *)G_CDataManager();
    local_10 = (CStackableItem *)CDataManager::find_item(this,iVar4);
    if (((local_10 != (CStackableItem *)0x0) &&
        (cVar1 = CItem::is_stackable((CItem *)local_10), cVar1 != '\0')) &&
       (iVar4 = CStackableItem::get_sub_type(local_10), iVar4 == 1)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  return (CItem *)local_10;
}

```

---

## GetRecipeInputItems

```asm
// === 0849b734 expert_job::GetRecipeInputItems  [0x0849b734-0x849b81f] ===
 849b734:	55                   	push   %ebp
 849b735:	89 e5                	mov    %esp,%ebp
 849b737:	53                   	push   %ebx
 849b738:	83 ec 34             	sub    $0x34,%esp
 849b73b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 849b742:	8b 45 08             	mov    0x8(%ebp),%eax
 849b745:	8d 90 74 01 00 00    	lea    0x174(%eax),%edx
 849b74b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b74e:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b752:	89 04 24             	mov    %eax,(%esp)
 849b755:	e8 58 1e c4 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 849b75a:	83 ec 04             	sub    $0x4,%esp
 849b75d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b760:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b764:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849b767:	89 04 24             	mov    %eax,(%esp)
 849b76a:	e8 b3 c1 ee ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 849b76f:	eb 75                	jmp    849b7e6 <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE+0xb2>
 849b771:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849b774:	89 04 24             	mov    %eax,(%esp)
 849b777:	e8 3e a4 d9 ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 849b77c:	8b 50 04             	mov    0x4(%eax),%edx
 849b77f:	8b 00                	mov    (%eax),%eax
 849b781:	89 c3                	mov    %eax,%ebx
 849b783:	e8 13 0a c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849b788:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849b78c:	89 04 24             	mov    %eax,(%esp)
 849b78f:	e8 9e 42 ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849b794:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849b797:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849b79b:	74 3e                	je     849b7db <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE+0xa7>
 849b79d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849b7a0:	89 04 24             	mov    %eax,(%esp)
 849b7a3:	e8 52 5b c5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 849b7a8:	84 c0                	test   %al,%al
 849b7aa:	74 2f                	je     849b7db <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE+0xa7>
 849b7ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849b7af:	89 04 24             	mov    %eax,(%esp)
 849b7b2:	e8 1b 12 d9 ff       	call   822c9d2 <_ZNK14CStackableItem12get_sub_typeEv>
 849b7b7:	83 f8 01             	cmp    $0x1,%eax
 849b7ba:	0f 95 c0             	setne  %al
 849b7bd:	84 c0                	test   %al,%al
 849b7bf:	74 1a                	je     849b7db <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE+0xa7>
 849b7c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849b7c4:	89 04 24             	mov    %eax,(%esp)
 849b7c7:	e8 ee a3 d9 ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 849b7cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b7d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 849b7d3:	89 04 24             	mov    %eax,(%esp)
 849b7d6:	e8 95 42 e7 ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 849b7db:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849b7de:	89 04 24             	mov    %eax,(%esp)
 849b7e1:	e8 ea 24 da ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 849b7e6:	8b 45 08             	mov    0x8(%ebp),%eax
 849b7e9:	8d 90 74 01 00 00    	lea    0x174(%eax),%edx
 849b7ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849b7f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b7f6:	89 04 24             	mov    %eax,(%esp)
 849b7f9:	e8 d8 1d c4 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 849b7fe:	83 ec 04             	sub    $0x4,%esp
 849b801:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849b804:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b808:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849b80b:	89 04 24             	mov    %eax,(%esp)
 849b80e:	e8 29 c1 ee ff       	call   838793c <_ZN9__gnu_cxxneIPKSt4pairIiiEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 849b813:	84 c0                	test   %al,%al
 849b815:	0f 85 56 ff ff ff    	jne    849b771 <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE+0x3d>
 849b81b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 849b81e:	c9                   	leave
 849b81f:	c3                   	ret

```

```c
// expert_job::GetRecipeInputItems @ 0x849b734

/* expert_job::GetRecipeInputItems(CItem*, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

void expert_job::GetRecipeInputItems(CItem *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this;
  int iVar4;
  pair *ppVar5;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  undefined4 local_14;
  CStackableItem *local_10;
  
  local_14 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_20,local_1c);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_20,local_18);
    if (!bVar2) break;
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_20);
    iVar4 = *piVar3;
    this = (CDataManager *)G_CDataManager();
    local_10 = (CStackableItem *)CDataManager::find_item(this,iVar4);
    if (local_10 != (CStackableItem *)0x0) {
      cVar1 = CItem::is_stackable((CItem *)local_10);
      if (cVar1 != '\0') {
        iVar4 = CStackableItem::get_sub_type(local_10);
        if (iVar4 != 1) {
          ppVar5 = (pair *)__gnu_cxx::
                           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                           ::operator*(local_20);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,ppVar5
                    );
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_20);
  }
  return;
}

```

---

## IsExistRecipeItem

```asm
// === 0849b820 expert_job::IsExistRecipeItem  [0x0849b820-0x849b956] ===
 849b820:	55                   	push   %ebp
 849b821:	89 e5                	mov    %esp,%ebp
 849b823:	56                   	push   %esi
 849b824:	53                   	push   %ebx
 849b825:	83 ec 30             	sub    $0x30,%esp
 849b828:	8b 45 10             	mov    0x10(%ebp),%eax
 849b82b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 849b82e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b831:	89 04 24             	mov    %eax,(%esp)
 849b834:	e8 9d 91 c9 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 849b839:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 849b83d:	74 73                	je     849b8b2 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x92>
 849b83f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b842:	89 04 24             	mov    %eax,(%esp)
 849b845:	e8 f8 ea cd ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 849b84a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b84d:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b851:	8b 45 0c             	mov    0xc(%ebp),%eax
 849b854:	89 04 24             	mov    %eax,(%esp)
 849b857:	e8 d8 fe ff ff       	call   849b734 <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE>
 849b85c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b85f:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b863:	8b 45 08             	mov    0x8(%ebp),%eax
 849b866:	89 04 24             	mov    %eax,(%esp)
 849b869:	e8 ea 01 1f 00       	call   868ba58 <_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE>
 849b86e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b871:	89 04 24             	mov    %eax,(%esp)
 849b874:	e8 21 59 c7 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 849b879:	84 c0                	test   %al,%al
 849b87b:	74 0a                	je     849b887 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x67>
 849b87d:	bb 00 00 00 00       	mov    $0x0,%ebx
 849b882:	e9 bc 00 00 00       	jmp    849b943 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x123>
 849b887:	8b 45 08             	mov    0x8(%ebp),%eax
 849b88a:	89 04 24             	mov    %eax,(%esp)
 849b88d:	e8 ec e9 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849b892:	8d 55 e8             	lea    -0x18(%ebp),%edx
 849b895:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b899:	89 04 24             	mov    %eax,(%esp)
 849b89c:	e8 2b c2 06 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 849b8a1:	83 f0 01             	xor    $0x1,%eax
 849b8a4:	84 c0                	test   %al,%al
 849b8a6:	74 79                	je     849b921 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x101>
 849b8a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 849b8ad:	e9 91 00 00 00       	jmp    849b943 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x123>
 849b8b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b8b5:	89 04 24             	mov    %eax,(%esp)
 849b8b8:	e8 85 ea cd ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 849b8bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 849b8c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849b8c3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849b8c7:	75 07                	jne    849b8d0 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0xb0>
 849b8c9:	bb 00 00 00 00       	mov    $0x0,%ebx
 849b8ce:	eb 73                	jmp    849b943 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x123>
 849b8d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849b8d3:	05 74 01 00 00       	add    $0x174,%eax
 849b8d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b8dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b8df:	89 04 24             	mov    %eax,(%esp)
 849b8e2:	e8 a5 37 e7 ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 849b8e7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b8ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b8ee:	8b 45 08             	mov    0x8(%ebp),%eax
 849b8f1:	89 04 24             	mov    %eax,(%esp)
 849b8f4:	e8 5f 01 1f 00       	call   868ba58 <_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE>
 849b8f9:	8b 45 08             	mov    0x8(%ebp),%eax
 849b8fc:	89 04 24             	mov    %eax,(%esp)
 849b8ff:	e8 7a e9 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849b904:	8d 55 e8             	lea    -0x18(%ebp),%edx
 849b907:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b90b:	89 04 24             	mov    %eax,(%esp)
 849b90e:	e8 b9 c1 06 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 849b913:	83 f0 01             	xor    $0x1,%eax
 849b916:	84 c0                	test   %al,%al
 849b918:	74 07                	je     849b921 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x101>
 849b91a:	bb 00 00 00 00       	mov    $0x0,%ebx
 849b91f:	eb 22                	jmp    849b943 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x123>
 849b921:	bb 01 00 00 00       	mov    $0x1,%ebx
 849b926:	eb 1b                	jmp    849b943 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb+0x123>
 849b928:	89 d3                	mov    %edx,%ebx
 849b92a:	89 c6                	mov    %eax,%esi
 849b92c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b92f:	89 04 24             	mov    %eax,(%esp)
 849b932:	e8 b3 90 c9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 849b937:	89 f0                	mov    %esi,%eax
 849b939:	89 da                	mov    %ebx,%edx
 849b93b:	89 04 24             	mov    %eax,(%esp)
 849b93e:	e8 0d 7e 64 00       	call   8ae3750 <_Unwind_Resume>
 849b943:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849b946:	89 04 24             	mov    %eax,(%esp)
 849b949:	e8 9c 90 c9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 849b94e:	89 d8                	mov    %ebx,%eax
 849b950:	83 c4 30             	add    $0x30,%esp
 849b953:	5b                   	pop    %ebx
 849b954:	5e                   	pop    %esi
 849b955:	5d                   	pop    %ebp
 849b956:	c3                   	ret

```

```c
// expert_job::IsExistRecipeItem @ 0x849b820

/* expert_job::IsExistRecipeItem(CUser*, CItem*, bool) */

undefined4 expert_job::IsExistRecipeItem(CUser *param_1,CItem *param_2,bool param_3)

{
  char cVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_1c [12];
  CItem *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_1c);
  if (param_3) {
                    /* try { // try from 0849b845 to 0849b912 has its CatchHandler @ 0849b928 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_1c);
    GetRecipeInputItems(param_2,(vector *)local_1c);
    CUser::CalculateExpertJobMaterials(param_1,(vector *)local_1c);
    cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar1 != '\0') {
      uVar3 = 0;
      goto LAB_0849b943;
    }
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar1 = CInventory::CheckNeedItemList(pCVar2,(vector *)local_1c);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0849b943;
    }
  }
  else {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_1c);
    local_10 = param_2;
    if (param_2 == (CItem *)0x0) {
      uVar3 = 0;
      goto LAB_0849b943;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              (local_1c,(vector *)(param_2 + 0x174));
    CUser::CalculateExpertJobMaterials(param_1,(vector *)local_1c);
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar1 = CInventory::CheckNeedItemList(pCVar2,(vector *)local_1c);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0849b943;
    }
  }
  uVar3 = 1;
LAB_0849b943:
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_1c);
  return uVar3;
}

```

---

## UseMaterialOfRecipe

```asm
// === 0849bcfb expert_job::UseMaterialOfRecipe  [0x0849bcfb-0x849be31] ===
 849bcfb:	55                   	push   %ebp
 849bcfc:	89 e5                	mov    %esp,%ebp
 849bcfe:	56                   	push   %esi
 849bcff:	53                   	push   %ebx
 849bd00:	83 ec 40             	sub    $0x40,%esp
 849bd03:	8b 45 14             	mov    0x14(%ebp),%eax
 849bd06:	88 45 e4             	mov    %al,-0x1c(%ebp)
 849bd09:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 849bd0d:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 849bd11:	0f 84 ae 00 00 00    	je     849bdc5 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0xca>
 849bd17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bd1a:	89 04 24             	mov    %eax,(%esp)
 849bd1d:	e8 b4 8c c9 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 849bd22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bd25:	89 44 24 04          	mov    %eax,0x4(%esp)
 849bd29:	8b 45 0c             	mov    0xc(%ebp),%eax
 849bd2c:	89 04 24             	mov    %eax,(%esp)
 849bd2f:	e8 00 fa ff ff       	call   849b734 <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE>
 849bd34:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bd37:	89 04 24             	mov    %eax,(%esp)
 849bd3a:	e8 5b 54 c7 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 849bd3f:	84 c0                	test   %al,%al
 849bd41:	74 0c                	je     849bd4f <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0x54>
 849bd43:	bb 11 00 00 00       	mov    $0x11,%ebx
 849bd48:	be 00 00 00 00       	mov    $0x0,%esi
 849bd4d:	eb 65                	jmp    849bdb4 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0xb9>
 849bd4f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 849bd56:	00 
 849bd57:	8d 45 f7             	lea    -0x9(%ebp),%eax
 849bd5a:	89 44 24 10          	mov    %eax,0x10(%esp)
 849bd5e:	8b 45 10             	mov    0x10(%ebp),%eax
 849bd61:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849bd65:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849bd6c:	00 
 849bd6d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bd70:	89 44 24 04          	mov    %eax,0x4(%esp)
 849bd74:	8b 45 08             	mov    0x8(%ebp),%eax
 849bd77:	89 04 24             	mov    %eax,(%esp)
 849bd7a:	e8 d8 fb ff ff       	call   849b957 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi>
 849bd7f:	83 f0 01             	xor    $0x1,%eax
 849bd82:	84 c0                	test   %al,%al
 849bd84:	74 0c                	je     849bd92 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0x97>
 849bd86:	bb 11 00 00 00       	mov    $0x11,%ebx
 849bd8b:	be 00 00 00 00       	mov    $0x0,%esi
 849bd90:	eb 22                	jmp    849bdb4 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0xb9>
 849bd92:	be 01 00 00 00       	mov    $0x1,%esi
 849bd97:	eb 1b                	jmp    849bdb4 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0xb9>
 849bd99:	89 d3                	mov    %edx,%ebx
 849bd9b:	89 c6                	mov    %eax,%esi
 849bd9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bda0:	89 04 24             	mov    %eax,(%esp)
 849bda3:	e8 42 8c c9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 849bda8:	89 f0                	mov    %esi,%eax
 849bdaa:	89 da                	mov    %ebx,%edx
 849bdac:	89 04 24             	mov    %eax,(%esp)
 849bdaf:	e8 9c 79 64 00       	call   8ae3750 <_Unwind_Resume>
 849bdb4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849bdb7:	89 04 24             	mov    %eax,(%esp)
 849bdba:	e8 2b 8c c9 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 849bdbf:	85 f6                	test   %esi,%esi
 849bdc1:	74 66                	je     849be29 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0x12e>
 849bdc3:	eb 44                	jmp    849be09 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0x10e>
 849bdc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 849bdc8:	8d 90 74 01 00 00    	lea    0x174(%eax),%edx
 849bdce:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 849bdd5:	00 
 849bdd6:	8d 45 f7             	lea    -0x9(%ebp),%eax
 849bdd9:	89 44 24 10          	mov    %eax,0x10(%esp)
 849bddd:	8b 45 10             	mov    0x10(%ebp),%eax
 849bde0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849bde4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849bdeb:	00 
 849bdec:	89 54 24 04          	mov    %edx,0x4(%esp)
 849bdf0:	8b 45 08             	mov    0x8(%ebp),%eax
 849bdf3:	89 04 24             	mov    %eax,(%esp)
 849bdf6:	e8 5c fb ff ff       	call   849b957 <_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi>
 849bdfb:	83 f0 01             	xor    $0x1,%eax
 849bdfe:	84 c0                	test   %al,%al
 849be00:	74 07                	je     849be09 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0x10e>
 849be02:	bb 11 00 00 00       	mov    $0x11,%ebx
 849be07:	eb 20                	jmp    849be29 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0x12e>
 849be09:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 849be0d:	84 c0                	test   %al,%al
 849be0f:	74 13                	je     849be24 <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb+0x129>
 849be11:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 849be18:	00 
 849be19:	8b 45 08             	mov    0x8(%ebp),%eax
 849be1c:	89 04 24             	mov    %eax,(%esp)
 849be1f:	e8 f0 1e 1c 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 849be24:	bb 00 00 00 00       	mov    $0x0,%ebx
 849be29:	89 d8                	mov    %ebx,%eax
 849be2b:	83 c4 40             	add    $0x40,%esp
 849be2e:	5b                   	pop    %ebx
 849be2f:	5e                   	pop    %esi
 849be30:	5d                   	pop    %ebp
 849be31:	c3                   	ret

```

```c
// expert_job::UseMaterialOfRecipe @ 0x849bcfb

/* expert_job::UseMaterialOfRecipe(CUser*, CItem*, PacketGuard*, bool) */

undefined4
expert_job::UseMaterialOfRecipe(CUser *param_1,CItem *param_2,PacketGuard *param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 unaff_EBX;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_1c [15];
  bool local_d;
  
  local_d = false;
  if (param_4) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_1c);
                    /* try { // try from 0849bd2f to 0849bd7e has its CatchHandler @ 0849bd99 */
    GetRecipeInputItems(param_2,(vector *)local_1c);
    cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar2 == '\0') {
      cVar2 = DelMaterialOfRecipe(param_1,(vector *)local_1c,0,param_3,&local_d,0);
      if (cVar2 == '\x01') {
        bVar1 = true;
      }
      else {
        unaff_EBX = 0x11;
        bVar1 = false;
      }
    }
    else {
      unaff_EBX = 0x11;
      bVar1 = false;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_1c);
    if (!bVar1) {
      return unaff_EBX;
    }
  }
  else {
    cVar2 = DelMaterialOfRecipe(param_1,(vector *)(param_2 + 0x174),0,param_3,&local_d,0);
    if (cVar2 != '\x01') {
      return 0x11;
    }
  }
  if (local_d != false) {
    CUser::send_equip(param_1,0x16);
  }
  return 0;
}

```

---

## get_additional_item

```asm
// === 0896d6ab expert_job::get_additional_item  [0x0896d6ab-0x896d75c] ===
 896d6ab:	55                   	push   %ebp
 896d6ac:	89 e5                	mov    %esp,%ebp
 896d6ae:	83 ec 28             	sub    $0x28,%esp
 896d6b1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 896d6b4:	8b 55 08             	mov    0x8(%ebp),%edx
 896d6b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d6bb:	89 04 24             	mov    %eax,(%esp)
 896d6be:	e8 f3 24 00 00       	call   896fbb6 <_ZNKSt6vectorI16stItemSelectRateSaIS0_EE5beginEv>
 896d6c3:	83 ec 04             	sub    $0x4,%esp
 896d6c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896d6c9:	8b 55 08             	mov    0x8(%ebp),%edx
 896d6cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d6d0:	89 04 24             	mov    %eax,(%esp)
 896d6d3:	e8 0a 25 00 00       	call   896fbe2 <_ZNKSt6vectorI16stItemSelectRateSaIS0_EE3endEv>
 896d6d8:	83 ec 04             	sub    $0x4,%esp
 896d6db:	eb 65                	jmp    896d742 <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0x97>
 896d6dd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 896d6e0:	89 04 24             	mov    %eax,(%esp)
 896d6e3:	e8 68 25 00 00       	call   896fc50 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stItemSelectRateSt6vectorIS1_SaIS1_EEEdeEv>
 896d6e8:	8b 55 10             	mov    0x10(%ebp),%edx
 896d6eb:	8b 08                	mov    (%eax),%ecx
 896d6ed:	89 0a                	mov    %ecx,(%edx)
 896d6ef:	8b 48 04             	mov    0x4(%eax),%ecx
 896d6f2:	89 4a 04             	mov    %ecx,0x4(%edx)
 896d6f5:	8b 48 08             	mov    0x8(%eax),%ecx
 896d6f8:	89 4a 08             	mov    %ecx,0x8(%edx)
 896d6fb:	8b 48 0c             	mov    0xc(%eax),%ecx
 896d6fe:	89 4a 0c             	mov    %ecx,0xc(%edx)
 896d701:	8b 40 10             	mov    0x10(%eax),%eax
 896d704:	89 42 10             	mov    %eax,0x10(%edx)
 896d707:	8b 45 10             	mov    0x10(%ebp),%eax
 896d70a:	8b 40 0c             	mov    0xc(%eax),%eax
 896d70d:	3b 45 14             	cmp    0x14(%ebp),%eax
 896d710:	7f 21                	jg     896d733 <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0x88>
 896d712:	8b 45 10             	mov    0x10(%ebp),%eax
 896d715:	8b 40 10             	mov    0x10(%eax),%eax
 896d718:	3b 45 14             	cmp    0x14(%ebp),%eax
 896d71b:	7c 19                	jl     896d736 <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0x8b>
 896d71d:	8b 45 10             	mov    0x10(%ebp),%eax
 896d720:	8b 40 04             	mov    0x4(%eax),%eax
 896d723:	3b 45 0c             	cmp    0xc(%ebp),%eax
 896d726:	7d 32                	jge    896d75a <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0xaf>
 896d728:	8b 45 10             	mov    0x10(%ebp),%eax
 896d72b:	8b 40 04             	mov    0x4(%eax),%eax
 896d72e:	29 45 0c             	sub    %eax,0xc(%ebp)
 896d731:	eb 04                	jmp    896d737 <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0x8c>
 896d733:	90                   	nop
 896d734:	eb 01                	jmp    896d737 <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0x8c>
 896d736:	90                   	nop
 896d737:	8d 45 f4             	lea    -0xc(%ebp),%eax
 896d73a:	89 04 24             	mov    %eax,(%esp)
 896d73d:	e8 f8 24 00 00       	call   896fc3a <_ZN9__gnu_cxx17__normal_iteratorIPK16stItemSelectRateSt6vectorIS1_SaIS1_EEEppEv>
 896d742:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896d745:	89 44 24 04          	mov    %eax,0x4(%esp)
 896d749:	8d 45 f4             	lea    -0xc(%ebp),%eax
 896d74c:	89 04 24             	mov    %eax,(%esp)
 896d74f:	e8 ba 24 00 00       	call   896fc0e <_ZN9__gnu_cxxneIPK16stItemSelectRateSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 896d754:	84 c0                	test   %al,%al
 896d756:	75 85                	jne    896d6dd <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0x32>
 896d758:	eb 01                	jmp    896d75b <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i+0xb0>
 896d75a:	90                   	nop
 896d75b:	c9                   	leave
 896d75c:	c3                   	ret

```

```c
// expert_job::get_additional_item @ 0x896d6ab

/* expert_job::get_additional_item(std::vector<stItemSelectRate, std::allocator<stItemSelectRate> >
   const&, int, stItemSelectRate&, int) */

void expert_job::get_additional_item
               (vector *param_1,int param_2,stItemSelectRate *param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator local_14 [4];
  __normal_iterator<stItemSelectRate_const*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
  local_10 [12];
  
  std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::begin();
  std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::end();
  do {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return;
    }
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<stItemSelectRate_const*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
             ::operator*(local_10);
    *(undefined4 *)param_3 = *puVar2;
    *(undefined4 *)(param_3 + 4) = puVar2[1];
    *(undefined4 *)(param_3 + 8) = puVar2[2];
    *(undefined4 *)(param_3 + 0xc) = puVar2[3];
    *(undefined4 *)(param_3 + 0x10) = puVar2[4];
    if ((*(int *)(param_3 + 0xc) <= param_4) && (param_4 <= *(int *)(param_3 + 0x10))) {
      if (param_2 <= *(int *)(param_3 + 4)) {
        return;
      }
      param_2 = param_2 - *(int *)(param_3 + 4);
    }
    __gnu_cxx::
    __normal_iterator<stItemSelectRate_const*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
    ::operator++(local_10);
  } while( true );
}

```

---

## get_disjoint_additional_items

```asm
// === 0896d75d expert_job::get_disjoint_additional_items  [0x0896d75d-0x896d82f] ===
 896d75d:	55                   	push   %ebp
 896d75e:	89 e5                	mov    %esp,%ebp
 896d760:	83 ec 28             	sub    $0x28,%esp
 896d763:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896d766:	8d 55 0c             	lea    0xc(%ebp),%edx
 896d769:	89 54 24 08          	mov    %edx,0x8(%esp)
 896d76d:	8b 55 08             	mov    0x8(%ebp),%edx
 896d770:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d774:	89 04 24             	mov    %eax,(%esp)
 896d777:	e8 de 24 00 00       	call   896fc5a <_ZNSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 896d77c:	83 ec 04             	sub    $0x4,%esp
 896d77f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 896d782:	8b 55 08             	mov    0x8(%ebp),%edx
 896d785:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d789:	89 04 24             	mov    %eax,(%esp)
 896d78c:	e8 f5 24 00 00       	call   896fc86 <_ZNSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 896d791:	83 ec 04             	sub    $0x4,%esp
 896d794:	8d 45 f4             	lea    -0xc(%ebp),%eax
 896d797:	89 44 24 04          	mov    %eax,0x4(%esp)
 896d79b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 896d79e:	89 04 24             	mov    %eax,(%esp)
 896d7a1:	e8 06 25 00 00       	call   896fcac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16stItemSelectRateEEneERKS4_>
 896d7a6:	84 c0                	test   %al,%al
 896d7a8:	74 7f                	je     896d829 <_ZN10expert_job29get_disjoint_additional_itemsERSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS1_EEEiRSt6vectorIS1_SaIS1_EE+0xcc>
 896d7aa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 896d7ad:	8d 55 0c             	lea    0xc(%ebp),%edx
 896d7b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 896d7b4:	8b 55 08             	mov    0x8(%ebp),%edx
 896d7b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d7bb:	89 04 24             	mov    %eax,(%esp)
 896d7be:	e8 fd 24 00 00       	call   896fcc0 <_ZNSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS0_EEE11lower_boundERS4_>
 896d7c3:	83 ec 04             	sub    $0x4,%esp
 896d7c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 896d7c9:	8d 55 0c             	lea    0xc(%ebp),%edx
 896d7cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 896d7d0:	8b 55 08             	mov    0x8(%ebp),%edx
 896d7d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 896d7d7:	89 04 24             	mov    %eax,(%esp)
 896d7da:	e8 0d 25 00 00       	call   896fcec <_ZNSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS0_EEE11upper_boundERS4_>
 896d7df:	83 ec 04             	sub    $0x4,%esp
 896d7e2:	eb 28                	jmp    896d80c <_ZN10expert_job29get_disjoint_additional_itemsERSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS1_EEEiRSt6vectorIS1_SaIS1_EE+0xaf>
 896d7e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 896d7e7:	89 04 24             	mov    %eax,(%esp)
 896d7ea:	e8 47 25 00 00       	call   896fd36 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16stItemSelectRateEEptEv>
 896d7ef:	83 c0 04             	add    $0x4,%eax
 896d7f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 896d7f6:	8b 45 10             	mov    0x10(%ebp),%eax
 896d7f9:	89 04 24             	mov    %eax,(%esp)
 896d7fc:	e8 43 25 00 00       	call   896fd44 <_ZNSt6vectorI16stItemSelectRateSaIS0_EE9push_backERKS0_>
 896d801:	8d 45 ec             	lea    -0x14(%ebp),%eax
 896d804:	89 04 24             	mov    %eax,(%esp)
 896d807:	e8 0c 25 00 00       	call   896fd18 <_ZNSt17_Rb_tree_iteratorISt4pairIKi16stItemSelectRateEEppEv>
 896d80c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 896d80f:	89 44 24 04          	mov    %eax,0x4(%esp)
 896d813:	8d 45 ec             	lea    -0x14(%ebp),%eax
 896d816:	89 04 24             	mov    %eax,(%esp)
 896d819:	e8 8e 24 00 00       	call   896fcac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16stItemSelectRateEEneERKS4_>
 896d81e:	84 c0                	test   %al,%al
 896d820:	75 c2                	jne    896d7e4 <_ZN10expert_job29get_disjoint_additional_itemsERSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS1_EEEiRSt6vectorIS1_SaIS1_EE+0x87>
 896d822:	b8 01 00 00 00       	mov    $0x1,%eax
 896d827:	eb 05                	jmp    896d82e <_ZN10expert_job29get_disjoint_additional_itemsERSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS1_EEEiRSt6vectorIS1_SaIS1_EE+0xd1>
 896d829:	b8 00 00 00 00       	mov    $0x0,%eax
 896d82e:	c9                   	leave
 896d82f:	c3                   	ret

```

```c
// expert_job::get_disjoint_additional_items @ 0x896d75d

/* expert_job::get_disjoint_additional_items(std::multimap<int, stItemSelectRate, std::less<int>,
   std::allocator<std::pair<int const, stItemSelectRate> > >&, int, std::vector<stItemSelectRate,
   std::allocator<stItemSelectRate> >&) */

undefined4 expert_job::get_disjoint_additional_items(multimap *param_1,int param_2,vector *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  local_1c [4];
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> local_14 [4];
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  local_10 [12];
  
  std::
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  ::find((int *)local_14);
  std::
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    std::
    multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
    ::lower_bound(local_18,(int *)param_1);
    std::
    multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
    ::upper_bound(local_1c,(int *)param_1);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> *)local_18,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> *)local_18);
      std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::push_back
                ((vector<stItemSelectRate,std::allocator<stItemSelectRate>> *)param_3,
                 (stItemSelectRate *)(iVar2 + 4));
      std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> *)local_18);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```


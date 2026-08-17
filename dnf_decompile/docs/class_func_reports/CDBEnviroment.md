# CDBEnviroment

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## parse

```asm
// === 0829d8e8 CDBEnviroment::parse  [0x0829d8e8-0x829dd81] ===
 829d8e8:	55                   	push   %ebp
 829d8e9:	89 e5                	mov    %esp,%ebp
 829d8eb:	56                   	push   %esi
 829d8ec:	53                   	push   %ebx
 829d8ed:	83 ec 70             	sub    $0x70,%esp
 829d8f0:	c7 45 f0 22 63 c1 08 	movl   $0x8c16322,-0x10(%ebp)
 829d8f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 829d8fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 829d8fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 829d901:	89 04 24             	mov    %eax,(%esp)
 829d904:	e8 e7 ff dd ff       	call   807d8f0 <strtok@plt>
 829d909:	89 45 b8             	mov    %eax,-0x48(%ebp)
 829d90c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 829d90f:	89 44 24 04          	mov    %eax,0x4(%esp)
 829d913:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 829d91a:	e8 d1 ff dd ff       	call   807d8f0 <strtok@plt>
 829d91f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 829d922:	8b 45 b8             	mov    -0x48(%ebp),%eax
 829d925:	89 04 24             	mov    %eax,(%esp)
 829d928:	e8 c2 17 00 00       	call   829f0ef <_Z4trimPc>
 829d92d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829d930:	89 04 24             	mov    %eax,(%esp)
 829d933:	e8 b7 17 00 00       	call   829f0ef <_Z4trimPc>
 829d938:	8b 45 b8             	mov    -0x48(%ebp),%eax
 829d93b:	c7 44 24 04 28 80 c1 	movl   $0x8c18028,0x4(%esp)
 829d942:	08 
 829d943:	89 04 24             	mov    %eax,(%esp)
 829d946:	e8 95 0b de ff       	call   807e4e0 <strcmp@plt>
 829d94b:	85 c0                	test   %eax,%eax
 829d94d:	0f 85 3b 03 00 00    	jne    829dc8e <_ZN13CDBEnviroment5parseEPc+0x3a6>
 829d953:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829d956:	c7 44 24 04 35 80 c1 	movl   $0x8c18035,0x4(%esp)
 829d95d:	08 
 829d95e:	89 04 24             	mov    %eax,(%esp)
 829d961:	e8 7a 0b de ff       	call   807e4e0 <strcmp@plt>
 829d966:	85 c0                	test   %eax,%eax
 829d968:	75 12                	jne    829d97c <_ZN13CDBEnviroment5parseEPc+0x94>
 829d96a:	8b 45 08             	mov    0x8(%ebp),%eax
 829d96d:	c7 80 e0 03 00 00 01 	movl   $0x1,0x3e0(%eax)
 829d974:	00 00 00 
 829d977:	e9 a8 02 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829d97c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829d97f:	c7 44 24 04 3a 80 c1 	movl   $0x8c1803a,0x4(%esp)
 829d986:	08 
 829d987:	89 04 24             	mov    %eax,(%esp)
 829d98a:	e8 51 0b de ff       	call   807e4e0 <strcmp@plt>
 829d98f:	85 c0                	test   %eax,%eax
 829d991:	75 12                	jne    829d9a5 <_ZN13CDBEnviroment5parseEPc+0xbd>
 829d993:	8b 45 08             	mov    0x8(%ebp),%eax
 829d996:	c7 80 e0 03 00 00 02 	movl   $0x2,0x3e0(%eax)
 829d99d:	00 00 00 
 829d9a0:	e9 7f 02 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829d9a5:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829d9a8:	c7 44 24 04 42 80 c1 	movl   $0x8c18042,0x4(%esp)
 829d9af:	08 
 829d9b0:	89 04 24             	mov    %eax,(%esp)
 829d9b3:	e8 28 0b de ff       	call   807e4e0 <strcmp@plt>
 829d9b8:	85 c0                	test   %eax,%eax
 829d9ba:	75 12                	jne    829d9ce <_ZN13CDBEnviroment5parseEPc+0xe6>
 829d9bc:	8b 45 08             	mov    0x8(%ebp),%eax
 829d9bf:	c7 80 e0 03 00 00 03 	movl   $0x3,0x3e0(%eax)
 829d9c6:	00 00 00 
 829d9c9:	e9 56 02 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829d9ce:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829d9d1:	c7 44 24 04 49 80 c1 	movl   $0x8c18049,0x4(%esp)
 829d9d8:	08 
 829d9d9:	89 04 24             	mov    %eax,(%esp)
 829d9dc:	e8 ff 0a de ff       	call   807e4e0 <strcmp@plt>
 829d9e1:	85 c0                	test   %eax,%eax
 829d9e3:	75 12                	jne    829d9f7 <_ZN13CDBEnviroment5parseEPc+0x10f>
 829d9e5:	8b 45 08             	mov    0x8(%ebp),%eax
 829d9e8:	c7 80 e0 03 00 00 04 	movl   $0x4,0x3e0(%eax)
 829d9ef:	00 00 00 
 829d9f2:	e9 2d 02 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829d9f7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829d9fa:	c7 44 24 04 4e 80 c1 	movl   $0x8c1804e,0x4(%esp)
 829da01:	08 
 829da02:	89 04 24             	mov    %eax,(%esp)
 829da05:	e8 d6 0a de ff       	call   807e4e0 <strcmp@plt>
 829da0a:	85 c0                	test   %eax,%eax
 829da0c:	75 12                	jne    829da20 <_ZN13CDBEnviroment5parseEPc+0x138>
 829da0e:	8b 45 08             	mov    0x8(%ebp),%eax
 829da11:	c7 80 e0 03 00 00 05 	movl   $0x5,0x3e0(%eax)
 829da18:	00 00 00 
 829da1b:	e9 04 02 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829da20:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829da23:	c7 44 24 04 57 80 c1 	movl   $0x8c18057,0x4(%esp)
 829da2a:	08 
 829da2b:	89 04 24             	mov    %eax,(%esp)
 829da2e:	e8 ad 0a de ff       	call   807e4e0 <strcmp@plt>
 829da33:	85 c0                	test   %eax,%eax
 829da35:	75 12                	jne    829da49 <_ZN13CDBEnviroment5parseEPc+0x161>
 829da37:	8b 45 08             	mov    0x8(%ebp),%eax
 829da3a:	c7 80 e0 03 00 00 06 	movl   $0x6,0x3e0(%eax)
 829da41:	00 00 00 
 829da44:	e9 db 01 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829da49:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829da4c:	c7 44 24 04 5e 80 c1 	movl   $0x8c1805e,0x4(%esp)
 829da53:	08 
 829da54:	89 04 24             	mov    %eax,(%esp)
 829da57:	e8 84 0a de ff       	call   807e4e0 <strcmp@plt>
 829da5c:	85 c0                	test   %eax,%eax
 829da5e:	75 12                	jne    829da72 <_ZN13CDBEnviroment5parseEPc+0x18a>
 829da60:	8b 45 08             	mov    0x8(%ebp),%eax
 829da63:	c7 80 e0 03 00 00 07 	movl   $0x7,0x3e0(%eax)
 829da6a:	00 00 00 
 829da6d:	e9 b2 01 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829da72:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829da75:	c7 44 24 04 63 80 c1 	movl   $0x8c18063,0x4(%esp)
 829da7c:	08 
 829da7d:	89 04 24             	mov    %eax,(%esp)
 829da80:	e8 5b 0a de ff       	call   807e4e0 <strcmp@plt>
 829da85:	85 c0                	test   %eax,%eax
 829da87:	75 12                	jne    829da9b <_ZN13CDBEnviroment5parseEPc+0x1b3>
 829da89:	8b 45 08             	mov    0x8(%ebp),%eax
 829da8c:	c7 80 e0 03 00 00 08 	movl   $0x8,0x3e0(%eax)
 829da93:	00 00 00 
 829da96:	e9 89 01 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829da9b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829da9e:	c7 44 24 04 69 80 c1 	movl   $0x8c18069,0x4(%esp)
 829daa5:	08 
 829daa6:	89 04 24             	mov    %eax,(%esp)
 829daa9:	e8 32 0a de ff       	call   807e4e0 <strcmp@plt>
 829daae:	85 c0                	test   %eax,%eax
 829dab0:	75 12                	jne    829dac4 <_ZN13CDBEnviroment5parseEPc+0x1dc>
 829dab2:	8b 45 08             	mov    0x8(%ebp),%eax
 829dab5:	c7 80 e0 03 00 00 09 	movl   $0x9,0x3e0(%eax)
 829dabc:	00 00 00 
 829dabf:	e9 60 01 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829dac4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829dac7:	c7 44 24 04 6f 80 c1 	movl   $0x8c1806f,0x4(%esp)
 829dace:	08 
 829dacf:	89 04 24             	mov    %eax,(%esp)
 829dad2:	e8 09 0a de ff       	call   807e4e0 <strcmp@plt>
 829dad7:	85 c0                	test   %eax,%eax
 829dad9:	75 12                	jne    829daed <_ZN13CDBEnviroment5parseEPc+0x205>
 829dadb:	8b 45 08             	mov    0x8(%ebp),%eax
 829dade:	c7 80 e0 03 00 00 0a 	movl   $0xa,0x3e0(%eax)
 829dae5:	00 00 00 
 829dae8:	e9 37 01 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829daed:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829daf0:	c7 44 24 04 74 80 c1 	movl   $0x8c18074,0x4(%esp)
 829daf7:	08 
 829daf8:	89 04 24             	mov    %eax,(%esp)
 829dafb:	e8 e0 09 de ff       	call   807e4e0 <strcmp@plt>
 829db00:	85 c0                	test   %eax,%eax
 829db02:	75 12                	jne    829db16 <_ZN13CDBEnviroment5parseEPc+0x22e>
 829db04:	8b 45 08             	mov    0x8(%ebp),%eax
 829db07:	c7 80 e0 03 00 00 0b 	movl   $0xb,0x3e0(%eax)
 829db0e:	00 00 00 
 829db11:	e9 0e 01 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829db16:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829db19:	c7 44 24 04 7a 80 c1 	movl   $0x8c1807a,0x4(%esp)
 829db20:	08 
 829db21:	89 04 24             	mov    %eax,(%esp)
 829db24:	e8 b7 09 de ff       	call   807e4e0 <strcmp@plt>
 829db29:	85 c0                	test   %eax,%eax
 829db2b:	75 12                	jne    829db3f <_ZN13CDBEnviroment5parseEPc+0x257>
 829db2d:	8b 45 08             	mov    0x8(%ebp),%eax
 829db30:	c7 80 e0 03 00 00 0c 	movl   $0xc,0x3e0(%eax)
 829db37:	00 00 00 
 829db3a:	e9 e5 00 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829db3f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829db42:	c7 44 24 04 7f 80 c1 	movl   $0x8c1807f,0x4(%esp)
 829db49:	08 
 829db4a:	89 04 24             	mov    %eax,(%esp)
 829db4d:	e8 8e 09 de ff       	call   807e4e0 <strcmp@plt>
 829db52:	85 c0                	test   %eax,%eax
 829db54:	75 12                	jne    829db68 <_ZN13CDBEnviroment5parseEPc+0x280>
 829db56:	8b 45 08             	mov    0x8(%ebp),%eax
 829db59:	c7 80 e0 03 00 00 0d 	movl   $0xd,0x3e0(%eax)
 829db60:	00 00 00 
 829db63:	e9 bc 00 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829db68:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829db6b:	c7 44 24 04 86 80 c1 	movl   $0x8c18086,0x4(%esp)
 829db72:	08 
 829db73:	89 04 24             	mov    %eax,(%esp)
 829db76:	e8 65 09 de ff       	call   807e4e0 <strcmp@plt>
 829db7b:	85 c0                	test   %eax,%eax
 829db7d:	75 12                	jne    829db91 <_ZN13CDBEnviroment5parseEPc+0x2a9>
 829db7f:	8b 45 08             	mov    0x8(%ebp),%eax
 829db82:	c7 80 e0 03 00 00 63 	movl   $0x63,0x3e0(%eax)
 829db89:	00 00 00 
 829db8c:	e9 93 00 00 00       	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829db91:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829db94:	c7 44 24 04 8d 80 c1 	movl   $0x8c1808d,0x4(%esp)
 829db9b:	08 
 829db9c:	89 04 24             	mov    %eax,(%esp)
 829db9f:	e8 3c 09 de ff       	call   807e4e0 <strcmp@plt>
 829dba4:	85 c0                	test   %eax,%eax
 829dba6:	75 0f                	jne    829dbb7 <_ZN13CDBEnviroment5parseEPc+0x2cf>
 829dba8:	8b 45 08             	mov    0x8(%ebp),%eax
 829dbab:	c7 80 e0 03 00 00 64 	movl   $0x64,0x3e0(%eax)
 829dbb2:	00 00 00 
 829dbb5:	eb 6d                	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829dbb7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 829dbba:	c7 44 24 04 94 80 c1 	movl   $0x8c18094,0x4(%esp)
 829dbc1:	08 
 829dbc2:	89 04 24             	mov    %eax,(%esp)
 829dbc5:	e8 16 09 de ff       	call   807e4e0 <strcmp@plt>
 829dbca:	85 c0                	test   %eax,%eax
 829dbcc:	75 0f                	jne    829dbdd <_ZN13CDBEnviroment5parseEPc+0x2f5>
 829dbce:	8b 45 08             	mov    0x8(%ebp),%eax
 829dbd1:	c7 80 e0 03 00 00 11 	movl   $0x11,0x3e0(%eax)
 829dbd8:	00 00 00 
 829dbdb:	eb 47                	jmp    829dc24 <_ZN13CDBEnviroment5parseEPc+0x33c>
 829dbdd:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 829dbe0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 829dbe7:	00 
 829dbe8:	c7 44 24 08 32 20 00 	movl   $0x2032,0x8(%esp)
 829dbef:	00 
 829dbf0:	c7 44 24 04 40 b1 c1 	movl   $0x8c1b140,0x4(%esp)
 829dbf7:	08 
 829dbf8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 829dbfb:	89 04 24             	mov    %eax,(%esp)
 829dbfe:	e8 15 1b 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 829dc03:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 829dc07:	c7 44 24 04 a3 80 c1 	movl   $0x8c180a3,0x4(%esp)
 829dc0e:	08 
 829dc0f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 829dc12:	89 04 24             	mov    %eax,(%esp)
 829dc15:	e8 6e 1b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829dc1a:	b8 00 00 00 00       	mov    $0x0,%eax
 829dc1f:	e9 53 01 00 00       	jmp    829dd77 <_ZN13CDBEnviroment5parseEPc+0x48f>
 829dc24:	8d 45 9c             	lea    -0x64(%ebp),%eax
 829dc27:	89 04 24             	mov    %eax,(%esp)
 829dc2a:	e8 0f 59 01 00       	call   82b353e <_ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEEC1Ev>
 829dc2f:	8b 45 08             	mov    0x8(%ebp),%eax
 829dc32:	8b 80 e0 03 00 00    	mov    0x3e0(%eax),%eax
 829dc38:	89 45 cc             	mov    %eax,-0x34(%ebp)
 829dc3b:	e8 41 e5 e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829dc40:	8d 50 50             	lea    0x50(%eax),%edx
 829dc43:	8d 45 cc             	lea    -0x34(%ebp),%eax
 829dc46:	89 44 24 04          	mov    %eax,0x4(%esp)
 829dc4a:	89 14 24             	mov    %edx,(%esp)
 829dc4d:	e8 00 59 01 00       	call   82b3552 <_ZNSt3mapI17ENUM_SERVER_GROUPS_ISsSsSt4lessISsESaISt4pairIKSsSsEEES1_IS0_ESaIS3_IKS0_S7_EEEixERS9_>
 829dc52:	8d 55 9c             	lea    -0x64(%ebp),%edx
 829dc55:	89 54 24 04          	mov    %edx,0x4(%esp)
 829dc59:	89 04 24             	mov    %eax,(%esp)
 829dc5c:	e8 3d 5a 01 00       	call   82b369e <_ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEEaSERKS6_>
 829dc61:	eb 1b                	jmp    829dc7e <_ZN13CDBEnviroment5parseEPc+0x396>
 829dc63:	89 d3                	mov    %edx,%ebx
 829dc65:	89 c6                	mov    %eax,%esi
 829dc67:	8d 45 9c             	lea    -0x64(%ebp),%eax
 829dc6a:	89 04 24             	mov    %eax,(%esp)
 829dc6d:	e8 a2 4a e3 ff       	call   80d2714 <_ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEED1Ev>
 829dc72:	89 f0                	mov    %esi,%eax
 829dc74:	89 da                	mov    %ebx,%edx
 829dc76:	89 04 24             	mov    %eax,(%esp)
 829dc79:	e8 d2 5a 84 00       	call   8ae3750 <_Unwind_Resume>
 829dc7e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 829dc81:	89 04 24             	mov    %eax,(%esp)
 829dc84:	e8 8b 4a e3 ff       	call   80d2714 <_ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEED1Ev>
 829dc89:	e9 e4 00 00 00       	jmp    829dd72 <_ZN13CDBEnviroment5parseEPc+0x48a>
 829dc8e:	8b 45 08             	mov    0x8(%ebp),%eax
 829dc91:	8b 80 e0 03 00 00    	mov    0x3e0(%eax),%eax
 829dc97:	89 45 d0             	mov    %eax,-0x30(%ebp)
 829dc9a:	e8 e2 e4 e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829dc9f:	8d 48 50             	lea    0x50(%eax),%ecx
 829dca2:	8d 45 98             	lea    -0x68(%ebp),%eax
 829dca5:	8d 55 d0             	lea    -0x30(%ebp),%edx
 829dca8:	89 54 24 08          	mov    %edx,0x8(%esp)
 829dcac:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 829dcb0:	89 04 24             	mov    %eax,(%esp)
 829dcb3:	e8 04 5a 01 00       	call   82b36bc <_ZNSt3mapI17ENUM_SERVER_GROUPS_ISsSsSt4lessISsESaISt4pairIKSsSsEEES1_IS0_ESaIS3_IKS0_S7_EEE4findERS9_>
 829dcb8:	83 ec 04             	sub    $0x4,%esp
 829dcbb:	e8 c1 e4 e2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 829dcc0:	8d 50 50             	lea    0x50(%eax),%edx
 829dcc3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 829dcc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 829dcca:	89 04 24             	mov    %eax,(%esp)
 829dccd:	e8 16 5a 01 00       	call   82b36e8 <_ZNSt3mapI17ENUM_SERVER_GROUPS_ISsSsSt4lessISsESaISt4pairIKSsSsEEES1_IS0_ESaIS3_IKS0_S7_EEE3endEv>
 829dcd2:	83 ec 04             	sub    $0x4,%esp
 829dcd5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 829dcd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 829dcdc:	8d 45 98             	lea    -0x68(%ebp),%eax
 829dcdf:	89 04 24             	mov    %eax,(%esp)
 829dce2:	e8 27 5a 01 00       	call   82b370e <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapISsSsSt4lessISsESaIS0_IKSsSsEEEEEneERKSB_>
 829dce7:	84 c0                	test   %al,%al
 829dce9:	0f 84 83 00 00 00    	je     829dd72 <_ZN13CDBEnviroment5parseEPc+0x48a>
 829dcef:	8d 45 98             	lea    -0x68(%ebp),%eax
 829dcf2:	89 04 24             	mov    %eax,(%esp)
 829dcf5:	e8 28 5a 01 00       	call   82b3722 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPSt3mapISsSsSt4lessISsESaIS0_IKSsSsEEEEEptEv>
 829dcfa:	83 c0 04             	add    $0x4,%eax
 829dcfd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 829dd00:	8d 45 e8             	lea    -0x18(%ebp),%eax
 829dd03:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 829dd06:	89 54 24 08          	mov    %edx,0x8(%esp)
 829dd0a:	8d 55 b8             	lea    -0x48(%ebp),%edx
 829dd0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 829dd11:	89 04 24             	mov    %eax,(%esp)
 829dd14:	e8 16 5a 01 00       	call   82b372f <_ZSt9make_pairIRPcS1_ESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 829dd19:	83 ec 04             	sub    $0x4,%esp
 829dd1c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 829dd1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 829dd23:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829dd26:	89 04 24             	mov    %eax,(%esp)
 829dd29:	e8 40 5a 01 00       	call   82b376e <_ZNSt4pairIKSsSsEC1IPcS3_EEOS_IT_T0_E>
 829dd2e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 829dd31:	8d 55 e0             	lea    -0x20(%ebp),%edx
 829dd34:	89 54 24 08          	mov    %edx,0x8(%esp)
 829dd38:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829dd3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 829dd3f:	89 04 24             	mov    %eax,(%esp)
 829dd42:	e8 fb 5a 01 00       	call   82b3842 <_ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEE6insertERKS4_>
 829dd47:	83 ec 04             	sub    $0x4,%esp
 829dd4a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829dd4d:	89 04 24             	mov    %eax,(%esp)
 829dd50:	e8 43 86 e3 ff       	call   80d6398 <_ZNSt4pairIKSsSsED1Ev>
 829dd55:	eb 1b                	jmp    829dd72 <_ZN13CDBEnviroment5parseEPc+0x48a>
 829dd57:	89 d3                	mov    %edx,%ebx
 829dd59:	89 c6                	mov    %eax,%esi
 829dd5b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 829dd5e:	89 04 24             	mov    %eax,(%esp)
 829dd61:	e8 32 86 e3 ff       	call   80d6398 <_ZNSt4pairIKSsSsED1Ev>
 829dd66:	89 f0                	mov    %esi,%eax
 829dd68:	89 da                	mov    %ebx,%edx
 829dd6a:	89 04 24             	mov    %eax,(%esp)
 829dd6d:	e8 de 59 84 00       	call   8ae3750 <_Unwind_Resume>
 829dd72:	b8 01 00 00 00       	mov    $0x1,%eax
 829dd77:	8d 65 f8             	lea    -0x8(%ebp),%esp
 829dd7a:	83 c4 00             	add    $0x0,%esp
 829dd7d:	5b                   	pop    %ebx
 829dd7e:	5e                   	pop    %esi
 829dd7f:	5d                   	pop    %ebp
 829dd80:	c3                   	ret
 829dd81:	90                   	nop

```

```c
// CDBEnviroment::parse @ 0x829d8e8

/* CDBEnviroment::parse(char*) */

undefined4 __thiscall CDBEnviroment::parse(CDBEnviroment *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *this_00;
  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
  local_6c [4];
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  local_68 [24];
  char *local_50;
  char *local_4c;
  cMyTrace local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
  local_30 [4];
  pair local_2c [8];
  pair<std::string_const,std::string> local_24 [8];
  char *local_1c [2];
  char *local_14;
  int local_10;
  
  local_14 = "=";
  local_4c = strtok(param_1,"=");
  local_50 = strtok((char *)0x0,local_14);
  trim(local_4c);
  trim(local_50);
  iVar3 = strcmp(local_4c,"game_db_type");
  if (iVar3 == 0) {
    iVar3 = strcmp(local_50,"cain");
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0x3e0) = 1;
    }
    else {
      iVar3 = strcmp(local_50,"diregie");
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x3e0) = 2;
      }
      else {
        iVar3 = strcmp(local_50,"siroco");
        if (iVar3 == 0) {
          *(undefined4 *)(this + 0x3e0) = 3;
        }
        else {
          iVar3 = strcmp(local_50,"prey");
          if (iVar3 == 0) {
            *(undefined4 *)(this + 0x3e0) = 4;
          }
          else {
            iVar3 = strcmp(local_50,"casillas");
            if (iVar3 == 0) {
              *(undefined4 *)(this + 0x3e0) = 5;
            }
            else {
              iVar3 = strcmp(local_50,"hilder");
              if (iVar3 == 0) {
                *(undefined4 *)(this + 0x3e0) = 6;
              }
              else {
                iVar3 = strcmp(local_50,"ruke");
                if (iVar3 == 0) {
                  *(undefined4 *)(this + 0x3e0) = 7;
                }
                else {
                  iVar3 = strcmp(local_50,"seria");
                  if (iVar3 == 0) {
                    *(undefined4 *)(this + 0x3e0) = 8;
                  }
                  else {
                    iVar3 = strcmp(local_50,"anton");
                    if (iVar3 == 0) {
                      *(undefined4 *)(this + 0x3e0) = 9;
                    }
                    else {
                      iVar3 = strcmp(local_50,"roxy");
                      if (iVar3 == 0) {
                        *(undefined4 *)(this + 0x3e0) = 10;
                      }
                      else {
                        iVar3 = strcmp(local_50,"bakal");
                        if (iVar3 == 0) {
                          *(undefined4 *)(this + 0x3e0) = 0xb;
                        }
                        else {
                          iVar3 = strcmp(local_50,"ozma");
                          if (iVar3 == 0) {
                            *(undefined4 *)(this + 0x3e0) = 0xc;
                          }
                          else {
                            iVar3 = strcmp(local_50,"khazan");
                            if (iVar3 == 0) {
                              *(undefined4 *)(this + 0x3e0) = 0xd;
                            }
                            else {
                              iVar3 = strcmp(local_50,"first1");
                              if (iVar3 == 0) {
                                *(undefined4 *)(this + 0x3e0) = 99;
                              }
                              else {
                                iVar3 = strcmp(local_50,"first2");
                                if (iVar3 == 0) {
                                  *(undefined4 *)(this + 0x3e0) = 100;
                                }
                                else {
                                  iVar3 = strcmp(local_50,"starter_server");
                                  pcVar1 = local_50;
                                  if (iVar3 != 0) {
                                    cMyTrace::cMyTrace(local_48,
                                                  "virtual bool CDBEnviroment::parse(char*)",0x2032,
                                                  5);
                                    cMyTrace::operator()(local_48,"Unknown value (%s)",pcVar1);
                                    return 0;
                                  }
                                  *(undefined4 *)(this + 0x3e0) = 0x11;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::map(local_68);
    local_38 = *(undefined4 *)(this + 0x3e0);
                    /* try { // try from 0829dc3b to 0829dc60 has its CatchHandler @ 0829dc63 */
    iVar3 = G_CEnvironment();
    this_00 = (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               *)std::
                 map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
                 ::operator[]((map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
                               *)(iVar3 + 0x50),(ENUM_SERVER_GROUP *)&local_38);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::operator=(this_00,(map *)local_68);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map(local_68);
  }
  else {
    local_34 = *(undefined4 *)(this + 0x3e0);
    G_CEnvironment();
    std::
    map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
    ::find(local_6c);
    G_CEnvironment();
    std::
    map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
    ::end(local_30);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
            ::operator!=(local_6c,(_Rb_tree_iterator *)local_30);
    if (cVar2 != '\0') {
      local_10 = std::
                 _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                 ::operator->(local_6c);
      local_10 = local_10 + 4;
      std::make_pair<char*&,char*&>(local_1c,&local_4c);
      std::pair<std::string_const,std::string>::pair<char*,char*>(local_24,(pair *)local_1c);
                    /* try { // try from 0829dd42 to 0829dd46 has its CatchHandler @ 0829dd57 */
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::insert(local_2c);
      std::pair<std::string_const,std::string>::~pair(local_24);
    }
  }
  return 1;
}

```


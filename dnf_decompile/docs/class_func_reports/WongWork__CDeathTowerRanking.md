# WongWork__CDeathTowerRanking

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## _makeRecordPacket

```asm
// === 08468cb6 WongWork::CDeathTowerRanking::_makeRecordPacket  [0x08468cb6-0x8468ddf] ===
 8468cb6:	55                   	push   %ebp
 8468cb7:	89 e5                	mov    %esp,%ebp
 8468cb9:	83 ec 28             	sub    $0x28,%esp
 8468cbc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8468cc3:	e9 b8 00 00 00       	jmp    8468d80 <_ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard+0xca>
 8468cc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468ccb:	01 c0                	add    %eax,%eax
 8468ccd:	89 c2                	mov    %eax,%edx
 8468ccf:	c1 e2 04             	shl    $0x4,%edx
 8468cd2:	29 c2                	sub    %eax,%edx
 8468cd4:	89 d0                	mov    %edx,%eax
 8468cd6:	03 45 0c             	add    0xc(%ebp),%eax
 8468cd9:	83 c0 04             	add    $0x4,%eax
 8468cdc:	89 04 24             	mov    %eax,(%esp)
 8468cdf:	e8 cc 56 c1 ff       	call   807e3b0 <strlen@plt>
 8468ce4:	89 c2                	mov    %eax,%edx
 8468ce6:	8b 45 10             	mov    0x10(%ebp),%eax
 8468ce9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468ced:	89 04 24             	mov    %eax,(%esp)
 8468cf0:	e8 47 2c c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8468cf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468cf8:	01 c0                	add    %eax,%eax
 8468cfa:	89 c2                	mov    %eax,%edx
 8468cfc:	c1 e2 04             	shl    $0x4,%edx
 8468cff:	29 c2                	sub    %eax,%edx
 8468d01:	89 d0                	mov    %edx,%eax
 8468d03:	03 45 0c             	add    0xc(%ebp),%eax
 8468d06:	83 c0 04             	add    $0x4,%eax
 8468d09:	89 04 24             	mov    %eax,(%esp)
 8468d0c:	e8 9f 56 c1 ff       	call   807e3b0 <strlen@plt>
 8468d11:	89 c1                	mov    %eax,%ecx
 8468d13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468d16:	01 c0                	add    %eax,%eax
 8468d18:	89 c2                	mov    %eax,%edx
 8468d1a:	c1 e2 04             	shl    $0x4,%edx
 8468d1d:	29 c2                	sub    %eax,%edx
 8468d1f:	89 d0                	mov    %edx,%eax
 8468d21:	03 45 0c             	add    0xc(%ebp),%eax
 8468d24:	83 c0 04             	add    $0x4,%eax
 8468d27:	89 c2                	mov    %eax,%edx
 8468d29:	8b 45 10             	mov    0x10(%ebp),%eax
 8468d2c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8468d30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468d34:	89 04 24             	mov    %eax,(%esp)
 8468d37:	e8 34 2a dc ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 8468d3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468d3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8468d42:	0f b6 84 02 80 00 00 	movzbl 0x80(%edx,%eax,1),%eax
 8468d49:	00 
 8468d4a:	0f b6 d0             	movzbl %al,%edx
 8468d4d:	8b 45 10             	mov    0x10(%ebp),%eax
 8468d50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468d54:	89 04 24             	mov    %eax,(%esp)
 8468d57:	e8 c4 2b c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8468d5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468d5f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8468d62:	0f b6 84 02 84 00 00 	movzbl 0x84(%edx,%eax,1),%eax
 8468d69:	00 
 8468d6a:	0f b6 d0             	movzbl %al,%edx
 8468d6d:	8b 45 10             	mov    0x10(%ebp),%eax
 8468d70:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468d74:	89 04 24             	mov    %eax,(%esp)
 8468d77:	e8 a4 2b c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8468d7c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8468d80:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8468d84:	0f 9e c0             	setle  %al
 8468d87:	84 c0                	test   %al,%al
 8468d89:	0f 85 39 ff ff ff    	jne    8468cc8 <_ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard+0x12>
 8468d8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468d92:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8468d98:	89 c2                	mov    %eax,%edx
 8468d9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8468d9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468da1:	89 04 24             	mov    %eax,(%esp)
 8468da4:	e8 fb 10 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8468da9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468dac:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8468db2:	89 c2                	mov    %eax,%edx
 8468db4:	8b 45 10             	mov    0x10(%ebp),%eax
 8468db7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468dbb:	89 04 24             	mov    %eax,(%esp)
 8468dbe:	e8 79 2b c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8468dc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468dc6:	8b 80 94 00 00 00    	mov    0x94(%eax),%eax
 8468dcc:	89 c2                	mov    %eax,%edx
 8468dce:	8b 45 10             	mov    0x10(%ebp),%eax
 8468dd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468dd5:	89 04 24             	mov    %eax,(%esp)
 8468dd8:	e8 5f 2b c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8468ddd:	c9                   	leave
 8468dde:	c3                   	ret
 8468ddf:	90                   	nop

```

```c
// WongWork::CDeathTowerRanking::_makeRecordPacket @ 0x8468cb6

/* WongWork::CDeathTowerRanking::_makeRecordPacket(WongWork::CDeathTowerRanking::stBestRecord_t
   const&, PacketGuard&) */

void __thiscall
WongWork::CDeathTowerRanking::_makeRecordPacket
          (CDeathTowerRanking *this,stBestRecord_t *param_1,PacketGuard *param_2)

{
  size_t sVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    sVar1 = strlen((char *)(param_1 + local_10 * 0x1e + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,sVar1);
    sVar1 = strlen((char *)(param_1 + local_10 * 0x1e + 4));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)param_2,(char *)(param_1 + local_10 * 0x1e + 4),sVar1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,(uint)(byte)param_1[local_10 + 0x80])
    ;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,(uint)(byte)param_1[local_10 + 0x84])
    ;
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,*(int *)(param_1 + 0x88));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*(int *)(param_1 + 0x8c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*(int *)(param_1 + 0x94));
  return;
}

```

---

## checkRenewMyRecord

```asm
// === 084682fe WongWork::CDeathTowerRanking::checkRenewMyRecord  [0x084682fe-0x84683d9] ===
 84682fe:	55                   	push   %ebp
 84682ff:	89 e5                	mov    %esp,%ebp
 8468301:	81 ec d8 00 00 00    	sub    $0xd8,%esp
 8468307:	8b 45 0c             	mov    0xc(%ebp),%eax
 846830a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846830e:	8b 45 08             	mov    0x8(%ebp),%eax
 8468311:	89 04 24             	mov    %eax,(%esp)
 8468314:	e8 95 1a 00 00       	call   8469dae <_ZN8WongWork18CDeathTowerRanking19_getBestRecordTableEj>
 8468319:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846831c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846831f:	8d 55 10             	lea    0x10(%ebp),%edx
 8468322:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468326:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8468329:	89 54 24 04          	mov    %edx,0x4(%esp)
 846832d:	89 04 24             	mov    %eax,(%esp)
 8468330:	e8 f9 1b 00 00       	call   8469f2e <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE4findERKj>
 8468335:	83 ec 04             	sub    $0x4,%esp
 8468338:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846833b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846833f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8468342:	89 04 24             	mov    %eax,(%esp)
 8468345:	e8 10 1c 00 00       	call   8469f5a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEC1ERKNS_19_Hashtable_iteratorIS6_jS8_SA_SC_SD_EE>
 846834a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846834d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8468350:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468354:	89 04 24             	mov    %eax,(%esp)
 8468357:	e8 1a 1c 00 00       	call   8469f76 <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE3endEv>
 846835c:	83 ec 04             	sub    $0x4,%esp
 846835f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8468362:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468366:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8468369:	89 04 24             	mov    %eax,(%esp)
 846836c:	e8 e9 1b 00 00       	call   8469f5a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEC1ERKNS_19_Hashtable_iteratorIS6_jS8_SA_SC_SD_EE>
 8468371:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8468374:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468378:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 846837b:	89 04 24             	mov    %eax,(%esp)
 846837e:	e8 19 1c 00 00       	call   8469f9c <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEeqERKSE_>
 8468383:	84 c0                	test   %al,%al
 8468385:	74 07                	je     846838e <_ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj+0x90>
 8468387:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 846838c:	eb 4a                	jmp    84683d8 <_ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj+0xda>
 846838e:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8468394:	89 04 24             	mov    %eax,(%esp)
 8468397:	e8 24 f3 e3 ff       	call   82a76c0 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tC1Ev>
 846839c:	8b 45 18             	mov    0x18(%ebp),%eax
 846839f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84683a2:	8b 45 14             	mov    0x14(%ebp),%eax
 84683a5:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84683a8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84683ab:	89 04 24             	mov    %eax,(%esp)
 84683ae:	e8 fd 1b 00 00       	call   8469fb0 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEptEv>
 84683b3:	83 c0 04             	add    $0x4,%eax
 84683b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84683ba:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84683c0:	89 04 24             	mov    %eax,(%esp)
 84683c3:	e8 1c 19 00 00       	call   8469ce4 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tgtERKS1_>
 84683c8:	84 c0                	test   %al,%al
 84683ca:	74 07                	je     84683d3 <_ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj+0xd5>
 84683cc:	b8 01 00 00 00       	mov    $0x1,%eax
 84683d1:	eb 05                	jmp    84683d8 <_ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj+0xda>
 84683d3:	b8 00 00 00 00       	mov    $0x0,%eax
 84683d8:	c9                   	leave
 84683d9:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::checkRenewMyRecord @ 0x84682fe

/* WongWork::CDeathTowerRanking::checkRenewMyRecord(unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined4 __thiscall
WongWork::CDeathTowerRanking::checkRenewMyRecord
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  stBestRecord_t local_c8 [136];
  uint local_40;
  uint local_3c;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_30 [8];
  _Hashtable_iterator local_28 [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_20 [8];
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_18 [8];
  undefined4 local_10;
  
  local_10 = _getBestRecordTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::find((uint *)local_28);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_30,local_28);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::end(local_18);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_20,(_Hashtable_iterator *)local_18);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
          ::operator==(local_30,(_Hashtable_const_iterator *)local_20);
  if (cVar1 == '\0') {
    stBestRecord_t::stBestRecord_t(local_c8);
    local_3c = param_4;
    local_40 = param_3;
    iVar3 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            ::operator->(local_30);
    cVar1 = stBestRecord_t::operator>(local_c8,(stBestRecord_t *)(iVar3 + 4));
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## checkRenewTopRecord

```asm
// === 08468290 WongWork::CDeathTowerRanking::checkRenewTopRecord  [0x08468290-0x84682fd] ===
 8468290:	55                   	push   %ebp
 8468291:	89 e5                	mov    %esp,%ebp
 8468293:	81 ec b8 00 00 00    	sub    $0xb8,%esp
 8468299:	8b 45 0c             	mov    0xc(%ebp),%eax
 846829c:	8b 55 08             	mov    0x8(%ebp),%edx
 846829f:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 84682a5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84682a8:	05 28 01 00 00       	add    $0x128,%eax
 84682ad:	0f b6 00             	movzbl (%eax),%eax
 84682b0:	83 f0 01             	xor    $0x1,%eax
 84682b3:	84 c0                	test   %al,%al
 84682b5:	74 07                	je     84682be <_ZN8WongWork18CDeathTowerRanking19checkRenewTopRecordEjjj+0x2e>
 84682b7:	b8 00 00 00 00       	mov    $0x0,%eax
 84682bc:	eb 3d                	jmp    84682fb <_ZN8WongWork18CDeathTowerRanking19checkRenewTopRecordEjjj+0x6b>
 84682be:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84682c4:	89 04 24             	mov    %eax,(%esp)
 84682c7:	e8 f4 f3 e3 ff       	call   82a76c0 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tC1Ev>
 84682cc:	8b 45 14             	mov    0x14(%ebp),%eax
 84682cf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84682d2:	8b 45 10             	mov    0x10(%ebp),%eax
 84682d5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84682d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84682db:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 84682e1:	05 98 00 00 00       	add    $0x98,%eax
 84682e6:	03 45 08             	add    0x8(%ebp),%eax
 84682e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84682ed:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84682f3:	89 04 24             	mov    %eax,(%esp)
 84682f6:	e8 e9 19 00 00       	call   8469ce4 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tgtERKS1_>
 84682fb:	c9                   	leave
 84682fc:	c3                   	ret
 84682fd:	90                   	nop

```

```c
// WongWork::CDeathTowerRanking::checkRenewTopRecord @ 0x8468290

/* WongWork::CDeathTowerRanking::checkRenewTopRecord(unsigned int, unsigned int, unsigned int) */

undefined4 __thiscall
WongWork::CDeathTowerRanking::checkRenewTopRecord
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  stBestRecord_t local_a4 [136];
  uint local_1c;
  uint local_18;
  
  if (this[param_1 * 0x390 + 0x128] == (CDeathTowerRanking)0x1) {
    stBestRecord_t::stBestRecord_t(local_a4);
    local_18 = param_3;
    local_1c = param_2;
    uVar1 = stBestRecord_t::operator>(local_a4,(stBestRecord_t *)(this + param_1 * 0x390 + 0x98));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## getVirtualRank

```asm
// === 08468de0 WongWork::CDeathTowerRanking::getVirtualRank  [0x08468de0-0x846966b] ===
 8468de0:	55                   	push   %ebp
 8468de1:	89 e5                	mov    %esp,%ebp
 8468de3:	53                   	push   %ebx
 8468de4:	81 ec 44 01 00 00    	sub    $0x144,%esp
 8468dea:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8468df0:	89 04 24             	mov    %eax,(%esp)
 8468df3:	e8 c8 e8 e3 ff       	call   82a76c0 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tC1Ev>
 8468df8:	8b 45 10             	mov    0x10(%ebp),%eax
 8468dfb:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8468e01:	8b 45 14             	mov    0x14(%ebp),%eax
 8468e04:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8468e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8468e0d:	8d 90 58 70 00 00    	lea    0x7058(%eax),%edx
 8468e13:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8468e19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468e1d:	89 14 24             	mov    %edx,(%esp)
 8468e20:	e8 bf 0e 00 00       	call   8469ce4 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tgtERKS1_>
 8468e25:	84 c0                	test   %al,%al
 8468e27:	74 0a                	je     8468e33 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x53>
 8468e29:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8468e2e:	e9 34 08 00 00       	jmp    8469667 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x887>
 8468e33:	8b 45 08             	mov    0x8(%ebp),%eax
 8468e36:	05 58 70 00 00       	add    $0x7058,%eax
 8468e3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468e3f:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8468e45:	89 04 24             	mov    %eax,(%esp)
 8468e48:	e8 e3 0e 00 00       	call   8469d30 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_teqERKS1_>
 8468e4d:	84 c0                	test   %al,%al
 8468e4f:	74 0e                	je     8468e5f <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x7f>
 8468e51:	8b 45 08             	mov    0x8(%ebp),%eax
 8468e54:	8b 80 ec 70 00 00    	mov    0x70ec(%eax),%eax
 8468e5a:	e9 08 08 00 00       	jmp    8469667 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x887>
 8468e5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468e62:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 8468e68:	05 98 00 00 00       	add    $0x98,%eax
 8468e6d:	03 45 08             	add    0x8(%ebp),%eax
 8468e70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468e74:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8468e7a:	89 04 24             	mov    %eax,(%esp)
 8468e7d:	e8 62 0e 00 00       	call   8469ce4 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tgtERKS1_>
 8468e82:	84 c0                	test   %al,%al
 8468e84:	74 0a                	je     8468e90 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0xb0>
 8468e86:	b8 01 00 00 00       	mov    $0x1,%eax
 8468e8b:	e9 d7 07 00 00       	jmp    8469667 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x887>
 8468e90:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8468e97:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8468e9e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8468ea5:	8d 45 80             	lea    -0x80(%ebp),%eax
 8468ea8:	89 04 24             	mov    %eax,(%esp)
 8468eab:	e8 22 cc f2 ff       	call   8395ad2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1Ev>
 8468eb0:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8468eb6:	89 04 24             	mov    %eax,(%esp)
 8468eb9:	e8 14 cc f2 ff       	call   8395ad2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1Ev>
 8468ebe:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 8468ec5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8468ec8:	8b 55 10             	mov    0x10(%ebp),%edx
 8468ecb:	89 d0                	mov    %edx,%eax
 8468ecd:	01 c0                	add    %eax,%eax
 8468ecf:	01 d0                	add    %edx,%eax
 8468ed1:	c1 e0 03             	shl    $0x3,%eax
 8468ed4:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8468eda:	01 d0                	add    %edx,%eax
 8468edc:	05 90 12 00 00       	add    $0x1290,%eax
 8468ee1:	03 45 08             	add    0x8(%ebp),%eax
 8468ee4:	83 c0 08             	add    $0x8,%eax
 8468ee7:	89 04 24             	mov    %eax,(%esp)
 8468eea:	e8 35 13 00 00       	call   846a224 <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4sizeEv>
 8468eef:	83 f8 01             	cmp    $0x1,%eax
 8468ef2:	0f 97 c0             	seta   %al
 8468ef5:	84 c0                	test   %al,%al
 8468ef7:	0f 84 77 03 00 00    	je     8469274 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x494>
 8468efd:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8468f00:	8b 55 10             	mov    0x10(%ebp),%edx
 8468f03:	89 d0                	mov    %edx,%eax
 8468f05:	01 c0                	add    %eax,%eax
 8468f07:	01 d0                	add    %edx,%eax
 8468f09:	c1 e0 03             	shl    $0x3,%eax
 8468f0c:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8468f12:	01 d0                	add    %edx,%eax
 8468f14:	05 90 12 00 00       	add    $0x1290,%eax
 8468f19:	03 45 08             	add    0x8(%ebp),%eax
 8468f1c:	8d 50 08             	lea    0x8(%eax),%edx
 8468f1f:	8d 45 88             	lea    -0x78(%ebp),%eax
 8468f22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468f26:	89 04 24             	mov    %eax,(%esp)
 8468f29:	e8 0a 13 00 00       	call   846a238 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5beginEv>
 8468f2e:	83 ec 04             	sub    $0x4,%esp
 8468f31:	8d 45 88             	lea    -0x78(%ebp),%eax
 8468f34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468f38:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8468f3b:	89 04 24             	mov    %eax,(%esp)
 8468f3e:	e8 1b 13 00 00       	call   846a25e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 8468f43:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8468f46:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8468f4c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8468f4f:	8b 55 10             	mov    0x10(%ebp),%edx
 8468f52:	89 d0                	mov    %edx,%eax
 8468f54:	01 c0                	add    %eax,%eax
 8468f56:	01 d0                	add    %edx,%eax
 8468f58:	c1 e0 03             	shl    $0x3,%eax
 8468f5b:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8468f61:	01 d0                	add    %edx,%eax
 8468f63:	05 90 12 00 00       	add    $0x1290,%eax
 8468f68:	03 45 08             	add    0x8(%ebp),%eax
 8468f6b:	8d 50 08             	lea    0x8(%eax),%edx
 8468f6e:	8d 45 90             	lea    -0x70(%ebp),%eax
 8468f71:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468f75:	89 04 24             	mov    %eax,(%esp)
 8468f78:	e8 a5 96 c7 ff       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 8468f7d:	83 ec 04             	sub    $0x4,%esp
 8468f80:	8d 45 90             	lea    -0x70(%ebp),%eax
 8468f83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468f87:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8468f8a:	89 04 24             	mov    %eax,(%esp)
 8468f8d:	e8 cc 12 00 00       	call   846a25e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 8468f92:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8468f95:	89 45 80             	mov    %eax,-0x80(%ebp)
 8468f98:	8d 45 80             	lea    -0x80(%ebp),%eax
 8468f9b:	89 04 24             	mov    %eax,(%esp)
 8468f9e:	e8 cb 12 00 00       	call   846a26e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEmmEv>
 8468fa3:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8468fa9:	89 04 24             	mov    %eax,(%esp)
 8468fac:	e8 95 cb f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8468fb1:	8b 10                	mov    (%eax),%edx
 8468fb3:	8b 45 14             	mov    0x14(%ebp),%eax
 8468fb6:	39 c2                	cmp    %eax,%edx
 8468fb8:	77 1b                	ja     8468fd5 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x1f5>
 8468fba:	8d 45 80             	lea    -0x80(%ebp),%eax
 8468fbd:	89 04 24             	mov    %eax,(%esp)
 8468fc0:	e8 81 cb f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8468fc5:	8b 10                	mov    (%eax),%edx
 8468fc7:	8b 45 14             	mov    0x14(%ebp),%eax
 8468fca:	39 c2                	cmp    %eax,%edx
 8468fcc:	72 07                	jb     8468fd5 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x1f5>
 8468fce:	b8 01 00 00 00       	mov    $0x1,%eax
 8468fd3:	eb 05                	jmp    8468fda <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x1fa>
 8468fd5:	b8 00 00 00 00       	mov    $0x0,%eax
 8468fda:	84 c0                	test   %al,%al
 8468fdc:	0f 84 92 02 00 00    	je     8469274 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x494>
 8468fe2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8468fe5:	8b 55 10             	mov    0x10(%ebp),%edx
 8468fe8:	89 d0                	mov    %edx,%eax
 8468fea:	01 c0                	add    %eax,%eax
 8468fec:	01 d0                	add    %edx,%eax
 8468fee:	c1 e0 03             	shl    $0x3,%eax
 8468ff1:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8468ff7:	01 d0                	add    %edx,%eax
 8468ff9:	05 90 12 00 00       	add    $0x1290,%eax
 8468ffe:	03 45 08             	add    0x8(%ebp),%eax
 8469001:	8d 48 08             	lea    0x8(%eax),%ecx
 8469004:	8d 45 98             	lea    -0x68(%ebp),%eax
 8469007:	8d 55 14             	lea    0x14(%ebp),%edx
 846900a:	89 54 24 08          	mov    %edx,0x8(%esp)
 846900e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8469012:	89 04 24             	mov    %eax,(%esp)
 8469015:	e8 72 12 00 00       	call   846a28c <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE11lower_boundERS3_>
 846901a:	83 ec 04             	sub    $0x4,%esp
 846901d:	8d 45 98             	lea    -0x68(%ebp),%eax
 8469020:	89 44 24 04          	mov    %eax,0x4(%esp)
 8469024:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8469027:	89 04 24             	mov    %eax,(%esp)
 846902a:	e8 2f 12 00 00       	call   846a25e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 846902f:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8469032:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8469038:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 846903e:	89 04 24             	mov    %eax,(%esp)
 8469041:	e8 00 cb f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469046:	8b 10                	mov    (%eax),%edx
 8469048:	8b 45 14             	mov    0x14(%ebp),%eax
 846904b:	39 c2                	cmp    %eax,%edx
 846904d:	76 66                	jbe    84690b5 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x2d5>
 846904f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8469052:	8b 55 10             	mov    0x10(%ebp),%edx
 8469055:	89 d0                	mov    %edx,%eax
 8469057:	01 c0                	add    %eax,%eax
 8469059:	01 d0                	add    %edx,%eax
 846905b:	c1 e0 03             	shl    $0x3,%eax
 846905e:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8469064:	01 d0                	add    %edx,%eax
 8469066:	05 90 12 00 00       	add    $0x1290,%eax
 846906b:	03 45 08             	add    0x8(%ebp),%eax
 846906e:	8d 50 08             	lea    0x8(%eax),%edx
 8469071:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8469074:	89 54 24 04          	mov    %edx,0x4(%esp)
 8469078:	89 04 24             	mov    %eax,(%esp)
 846907b:	e8 b8 11 00 00       	call   846a238 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5beginEv>
 8469080:	83 ec 04             	sub    $0x4,%esp
 8469083:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8469086:	89 44 24 04          	mov    %eax,0x4(%esp)
 846908a:	8d 45 9c             	lea    -0x64(%ebp),%eax
 846908d:	89 04 24             	mov    %eax,(%esp)
 8469090:	e8 c9 11 00 00       	call   846a25e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 8469095:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8469098:	89 44 24 04          	mov    %eax,0x4(%esp)
 846909c:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84690a2:	89 04 24             	mov    %eax,(%esp)
 84690a5:	e8 88 ca f2 ff       	call   8395b32 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEneERKS3_>
 84690aa:	84 c0                	test   %al,%al
 84690ac:	74 07                	je     84690b5 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x2d5>
 84690ae:	b8 01 00 00 00       	mov    $0x1,%eax
 84690b3:	eb 05                	jmp    84690ba <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x2da>
 84690b5:	b8 00 00 00 00       	mov    $0x0,%eax
 84690ba:	84 c0                	test   %al,%al
 84690bc:	74 0e                	je     84690cc <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x2ec>
 84690be:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84690c4:	89 04 24             	mov    %eax,(%esp)
 84690c7:	e8 a2 11 00 00       	call   846a26e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEmmEv>
 84690cc:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 84690d2:	89 45 80             	mov    %eax,-0x80(%ebp)
 84690d5:	8d 45 80             	lea    -0x80(%ebp),%eax
 84690d8:	89 04 24             	mov    %eax,(%esp)
 84690db:	e8 d8 11 00 00       	call   846a2b8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEppEv>
 84690e0:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84690e6:	89 04 24             	mov    %eax,(%esp)
 84690e9:	e8 58 ca f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 84690ee:	8b 10                	mov    (%eax),%edx
 84690f0:	8b 45 14             	mov    0x14(%ebp),%eax
 84690f3:	39 c2                	cmp    %eax,%edx
 84690f5:	0f 94 c0             	sete   %al
 84690f8:	84 c0                	test   %al,%al
 84690fa:	74 16                	je     8469112 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x332>
 84690fc:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8469102:	89 04 24             	mov    %eax,(%esp)
 8469105:	e8 3c ca f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 846910a:	8b 40 04             	mov    0x4(%eax),%eax
 846910d:	e9 55 05 00 00       	jmp    8469667 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x887>
 8469112:	8d 45 80             	lea    -0x80(%ebp),%eax
 8469115:	89 04 24             	mov    %eax,(%esp)
 8469118:	e8 29 ca f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 846911d:	8b 10                	mov    (%eax),%edx
 846911f:	8b 45 14             	mov    0x14(%ebp),%eax
 8469122:	39 c2                	cmp    %eax,%edx
 8469124:	0f 94 c0             	sete   %al
 8469127:	84 c0                	test   %al,%al
 8469129:	74 13                	je     846913e <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x35e>
 846912b:	8d 45 80             	lea    -0x80(%ebp),%eax
 846912e:	89 04 24             	mov    %eax,(%esp)
 8469131:	e8 10 ca f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469136:	8b 40 04             	mov    0x4(%eax),%eax
 8469139:	e9 29 05 00 00       	jmp    8469667 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x887>
 846913e:	8d 45 80             	lea    -0x80(%ebp),%eax
 8469141:	89 04 24             	mov    %eax,(%esp)
 8469144:	e8 fd c9 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469149:	8b 18                	mov    (%eax),%ebx
 846914b:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8469151:	89 04 24             	mov    %eax,(%esp)
 8469154:	e8 ed c9 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469159:	8b 00                	mov    (%eax),%eax
 846915b:	89 da                	mov    %ebx,%edx
 846915d:	29 c2                	sub    %eax,%edx
 846915f:	89 d0                	mov    %edx,%eax
 8469161:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8469164:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
 846916b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 846916e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8469172:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8469175:	89 04 24             	mov    %eax,(%esp)
 8469178:	e8 b4 63 c1 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 846917d:	8b 00                	mov    (%eax),%eax
 846917f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8469182:	8d 45 80             	lea    -0x80(%ebp),%eax
 8469185:	89 04 24             	mov    %eax,(%esp)
 8469188:	e8 b9 c9 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 846918d:	8b 58 04             	mov    0x4(%eax),%ebx
 8469190:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8469196:	89 04 24             	mov    %eax,(%esp)
 8469199:	e8 a8 c9 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 846919e:	8b 40 04             	mov    0x4(%eax),%eax
 84691a1:	89 d9                	mov    %ebx,%ecx
 84691a3:	29 c1                	sub    %eax,%ecx
 84691a5:	89 c8                	mov    %ecx,%eax
 84691a7:	89 c2                	mov    %eax,%edx
 84691a9:	c1 fa 1f             	sar    $0x1f,%edx
 84691ac:	31 d0                	xor    %edx,%eax
 84691ae:	29 d0                	sub    %edx,%eax
 84691b0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84691b3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84691b6:	ba 00 00 00 00       	mov    $0x0,%edx
 84691bb:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 84691c1:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 84691c7:	df ad d0 fe ff ff    	fildll -0x130(%ebp)
 84691cd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84691d0:	ba 00 00 00 00       	mov    $0x0,%edx
 84691d5:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 84691db:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 84691e1:	df ad d0 fe ff ff    	fildll -0x130(%ebp)
 84691e7:	de f9                	fdivrp %st,%st(1)
 84691e9:	d9 5d e8             	fstps  -0x18(%ebp)
 84691ec:	8b 5d 14             	mov    0x14(%ebp),%ebx
 84691ef:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84691f5:	89 04 24             	mov    %eax,(%esp)
 84691f8:	e8 49 c9 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 84691fd:	8b 00                	mov    (%eax),%eax
 84691ff:	89 da                	mov    %ebx,%edx
 8469201:	29 c2                	sub    %eax,%edx
 8469203:	89 d0                	mov    %edx,%eax
 8469205:	ba 00 00 00 00       	mov    $0x0,%edx
 846920a:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8469210:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 8469216:	df ad d0 fe ff ff    	fildll -0x130(%ebp)
 846921c:	d8 4d e8             	fmuls  -0x18(%ebp)
 846921f:	d9 bd ce fe ff ff    	fnstcw -0x132(%ebp)
 8469225:	0f b7 85 ce fe ff ff 	movzwl -0x132(%ebp),%eax
 846922c:	b4 0c                	mov    $0xc,%ah
 846922e:	66 89 85 cc fe ff ff 	mov    %ax,-0x134(%ebp)
 8469235:	d9 ad cc fe ff ff    	fldcw  -0x134(%ebp)
 846923b:	df bd d0 fe ff ff    	fistpll -0x130(%ebp)
 8469241:	d9 ad ce fe ff ff    	fldcw  -0x132(%ebp)
 8469247:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 846924d:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 8469253:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8469256:	c7 45 b0 01 00 00 00 	movl   $0x1,-0x50(%ebp)
 846925d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8469260:	89 44 24 04          	mov    %eax,0x4(%esp)
 8469264:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8469267:	89 04 24             	mov    %eax,(%esp)
 846926a:	e8 c2 62 c1 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 846926f:	8b 00                	mov    (%eax),%eax
 8469271:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8469274:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8469278:	0f 85 d2 03 00 00    	jne    8469650 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x870>
 846927e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8469285:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 846928c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 846928f:	8b 55 10             	mov    0x10(%ebp),%edx
 8469292:	89 d0                	mov    %edx,%eax
 8469294:	01 c0                	add    %eax,%eax
 8469296:	01 d0                	add    %edx,%eax
 8469298:	c1 e0 03             	shl    $0x3,%eax
 846929b:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 84692a1:	01 d0                	add    %edx,%eax
 84692a3:	05 90 12 00 00       	add    $0x1290,%eax
 84692a8:	03 45 08             	add    0x8(%ebp),%eax
 84692ab:	83 c0 08             	add    $0x8,%eax
 84692ae:	89 04 24             	mov    %eax,(%esp)
 84692b1:	e8 20 10 00 00       	call   846a2d6 <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5emptyEv>
 84692b6:	83 f0 01             	xor    $0x1,%eax
 84692b9:	84 c0                	test   %al,%al
 84692bb:	0f 84 b3 00 00 00    	je     8469374 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x594>
 84692c1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84692c4:	8b 55 10             	mov    0x10(%ebp),%edx
 84692c7:	89 d0                	mov    %edx,%eax
 84692c9:	01 c0                	add    %eax,%eax
 84692cb:	01 d0                	add    %edx,%eax
 84692cd:	c1 e0 03             	shl    $0x3,%eax
 84692d0:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 84692d6:	01 d0                	add    %edx,%eax
 84692d8:	05 90 12 00 00       	add    $0x1290,%eax
 84692dd:	03 45 08             	add    0x8(%ebp),%eax
 84692e0:	8d 50 08             	lea    0x8(%eax),%edx
 84692e3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84692e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84692ea:	89 04 24             	mov    %eax,(%esp)
 84692ed:	e8 30 93 c7 ff       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 84692f2:	83 ec 04             	sub    $0x4,%esp
 84692f5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84692f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84692fc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8469302:	89 04 24             	mov    %eax,(%esp)
 8469305:	e8 54 0f 00 00       	call   846a25e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 846930a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8469310:	89 04 24             	mov    %eax,(%esp)
 8469313:	e8 56 0f 00 00       	call   846a26e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEmmEv>
 8469318:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 846931e:	89 04 24             	mov    %eax,(%esp)
 8469321:	e8 20 c8 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469326:	8b 10                	mov    (%eax),%edx
 8469328:	8b 45 14             	mov    0x14(%ebp),%eax
 846932b:	39 c2                	cmp    %eax,%edx
 846932d:	0f 94 c0             	sete   %al
 8469330:	84 c0                	test   %al,%al
 8469332:	74 16                	je     846934a <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x56a>
 8469334:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 846933a:	89 04 24             	mov    %eax,(%esp)
 846933d:	e8 04 c8 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469342:	8b 40 04             	mov    0x4(%eax),%eax
 8469345:	e9 1d 03 00 00       	jmp    8469667 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x887>
 846934a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8469350:	89 04 24             	mov    %eax,(%esp)
 8469353:	e8 ee c7 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469358:	8b 10                	mov    (%eax),%edx
 846935a:	8b 45 14             	mov    0x14(%ebp),%eax
 846935d:	39 c2                	cmp    %eax,%edx
 846935f:	0f 92 c0             	setb   %al
 8469362:	84 c0                	test   %al,%al
 8469364:	74 08                	je     846936e <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x58e>
 8469366:	8b 45 10             	mov    0x10(%ebp),%eax
 8469369:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846936c:	eb 06                	jmp    8469374 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x594>
 846936e:	8b 45 10             	mov    0x10(%ebp),%eax
 8469371:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8469374:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8469378:	75 4e                	jne    84693c8 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x5e8>
 846937a:	8b 45 10             	mov    0x10(%ebp),%eax
 846937d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8469380:	83 6d ec 01          	subl   $0x1,-0x14(%ebp)
 8469384:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 8469388:	76 35                	jbe    84693bf <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x5df>
 846938a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 846938d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8469390:	89 d0                	mov    %edx,%eax
 8469392:	01 c0                	add    %eax,%eax
 8469394:	01 d0                	add    %edx,%eax
 8469396:	c1 e0 03             	shl    $0x3,%eax
 8469399:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 846939f:	01 d0                	add    %edx,%eax
 84693a1:	05 90 12 00 00       	add    $0x1290,%eax
 84693a6:	03 45 08             	add    0x8(%ebp),%eax
 84693a9:	83 c0 08             	add    $0x8,%eax
 84693ac:	89 04 24             	mov    %eax,(%esp)
 84693af:	e8 22 0f 00 00       	call   846a2d6 <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5emptyEv>
 84693b4:	84 c0                	test   %al,%al
 84693b6:	74 07                	je     84693bf <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x5df>
 84693b8:	b8 01 00 00 00       	mov    $0x1,%eax
 84693bd:	eb 05                	jmp    84693c4 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x5e4>
 84693bf:	b8 00 00 00 00       	mov    $0x0,%eax
 84693c4:	84 c0                	test   %al,%al
 84693c6:	75 b8                	jne    8469380 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x5a0>
 84693c8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84693cc:	75 51                	jne    846941f <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x63f>
 84693ce:	8b 45 10             	mov    0x10(%ebp),%eax
 84693d1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84693d4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84693d8:	81 7d f0 c7 00 00 00 	cmpl   $0xc7,-0x10(%ebp)
 84693df:	77 35                	ja     8469416 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x636>
 84693e1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84693e4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84693e7:	89 d0                	mov    %edx,%eax
 84693e9:	01 c0                	add    %eax,%eax
 84693eb:	01 d0                	add    %edx,%eax
 84693ed:	c1 e0 03             	shl    $0x3,%eax
 84693f0:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 84693f6:	01 d0                	add    %edx,%eax
 84693f8:	05 90 12 00 00       	add    $0x1290,%eax
 84693fd:	03 45 08             	add    0x8(%ebp),%eax
 8469400:	83 c0 08             	add    $0x8,%eax
 8469403:	89 04 24             	mov    %eax,(%esp)
 8469406:	e8 cb 0e 00 00       	call   846a2d6 <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5emptyEv>
 846940b:	84 c0                	test   %al,%al
 846940d:	74 07                	je     8469416 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x636>
 846940f:	b8 01 00 00 00       	mov    $0x1,%eax
 8469414:	eb 05                	jmp    846941b <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x63b>
 8469416:	b8 00 00 00 00       	mov    $0x0,%eax
 846941b:	84 c0                	test   %al,%al
 846941d:	75 b5                	jne    84693d4 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x5f4>
 846941f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8469422:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8469425:	89 d0                	mov    %edx,%eax
 8469427:	01 c0                	add    %eax,%eax
 8469429:	01 d0                	add    %edx,%eax
 846942b:	c1 e0 03             	shl    $0x3,%eax
 846942e:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8469434:	01 d0                	add    %edx,%eax
 8469436:	05 90 12 00 00       	add    $0x1290,%eax
 846943b:	03 45 08             	add    0x8(%ebp),%eax
 846943e:	83 c0 08             	add    $0x8,%eax
 8469441:	89 04 24             	mov    %eax,(%esp)
 8469444:	e8 8d 0e 00 00       	call   846a2d6 <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5emptyEv>
 8469449:	84 c0                	test   %al,%al
 846944b:	75 2e                	jne    846947b <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x69b>
 846944d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8469450:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8469453:	89 d0                	mov    %edx,%eax
 8469455:	01 c0                	add    %eax,%eax
 8469457:	01 d0                	add    %edx,%eax
 8469459:	c1 e0 03             	shl    $0x3,%eax
 846945c:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8469462:	01 d0                	add    %edx,%eax
 8469464:	05 90 12 00 00       	add    $0x1290,%eax
 8469469:	03 45 08             	add    0x8(%ebp),%eax
 846946c:	83 c0 08             	add    $0x8,%eax
 846946f:	89 04 24             	mov    %eax,(%esp)
 8469472:	e8 5f 0e 00 00       	call   846a2d6 <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5emptyEv>
 8469477:	84 c0                	test   %al,%al
 8469479:	74 07                	je     8469482 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x6a2>
 846947b:	b8 01 00 00 00       	mov    $0x1,%eax
 8469480:	eb 05                	jmp    8469487 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x6a7>
 8469482:	b8 00 00 00 00       	mov    $0x0,%eax
 8469487:	84 c0                	test   %al,%al
 8469489:	74 0a                	je     8469495 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x6b5>
 846948b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8469490:	e9 d2 01 00 00       	jmp    8469667 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj+0x887>
 8469495:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8469498:	8b 55 ec             	mov    -0x14(%ebp),%edx
 846949b:	89 d0                	mov    %edx,%eax
 846949d:	01 c0                	add    %eax,%eax
 846949f:	01 d0                	add    %edx,%eax
 84694a1:	c1 e0 03             	shl    $0x3,%eax
 84694a4:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 84694aa:	01 d0                	add    %edx,%eax
 84694ac:	05 90 12 00 00       	add    $0x1290,%eax
 84694b1:	03 45 08             	add    0x8(%ebp),%eax
 84694b4:	8d 50 08             	lea    0x8(%eax),%edx
 84694b7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84694ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 84694be:	89 04 24             	mov    %eax,(%esp)
 84694c1:	e8 72 0d 00 00       	call   846a238 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5beginEv>
 84694c6:	83 ec 04             	sub    $0x4,%esp
 84694c9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84694cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84694d0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84694d3:	89 04 24             	mov    %eax,(%esp)
 84694d6:	e8 83 0d 00 00       	call   846a25e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 84694db:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84694de:	89 45 80             	mov    %eax,-0x80(%ebp)
 84694e1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84694e4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84694e7:	89 d0                	mov    %edx,%eax
 84694e9:	01 c0                	add    %eax,%eax
 84694eb:	01 d0                	add    %edx,%eax
 84694ed:	c1 e0 03             	shl    $0x3,%eax
 84694f0:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 84694f6:	01 d0                	add    %edx,%eax
 84694f8:	05 90 12 00 00       	add    $0x1290,%eax
 84694fd:	03 45 08             	add    0x8(%ebp),%eax
 8469500:	8d 50 08             	lea    0x8(%eax),%edx
 8469503:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8469506:	89 54 24 04          	mov    %edx,0x4(%esp)
 846950a:	89 04 24             	mov    %eax,(%esp)
 846950d:	e8 10 91 c7 ff       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 8469512:	83 ec 04             	sub    $0x4,%esp
 8469515:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8469518:	89 44 24 04          	mov    %eax,0x4(%esp)
 846951c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 846951f:	89 04 24             	mov    %eax,(%esp)
 8469522:	e8 37 0d 00 00       	call   846a25e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 8469527:	8b 45 c0             	mov    -0x40(%ebp),%eax
 846952a:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8469530:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8469536:	89 04 24             	mov    %eax,(%esp)
 8469539:	e8 30 0d 00 00       	call   846a26e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEmmEv>
 846953e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8469541:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8469544:	89 d1                	mov    %edx,%ecx
 8469546:	29 c1                	sub    %eax,%ecx
 8469548:	89 c8                	mov    %ecx,%eax
 846954a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 846954d:	c7 45 cc 01 00 00 00 	movl   $0x1,-0x34(%ebp)
 8469554:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8469557:	89 44 24 04          	mov    %eax,0x4(%esp)
 846955b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 846955e:	89 04 24             	mov    %eax,(%esp)
 8469561:	e8 cb 5f c1 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 8469566:	8b 00                	mov    (%eax),%eax
 8469568:	89 45 d8             	mov    %eax,-0x28(%ebp)
 846956b:	8d 45 80             	lea    -0x80(%ebp),%eax
 846956e:	89 04 24             	mov    %eax,(%esp)
 8469571:	e8 d0 c5 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469576:	8b 58 04             	mov    0x4(%eax),%ebx
 8469579:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 846957f:	89 04 24             	mov    %eax,(%esp)
 8469582:	e8 bf c5 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 8469587:	8b 40 04             	mov    0x4(%eax),%eax
 846958a:	89 da                	mov    %ebx,%edx
 846958c:	29 c2                	sub    %eax,%edx
 846958e:	89 d0                	mov    %edx,%eax
 8469590:	89 c2                	mov    %eax,%edx
 8469592:	c1 fa 1f             	sar    $0x1f,%edx
 8469595:	31 d0                	xor    %edx,%eax
 8469597:	29 d0                	sub    %edx,%eax
 8469599:	89 45 e0             	mov    %eax,-0x20(%ebp)
 846959c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 846959f:	ba 00 00 00 00       	mov    $0x0,%edx
 84695a4:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 84695aa:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 84695b0:	df ad d0 fe ff ff    	fildll -0x130(%ebp)
 84695b6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84695b9:	ba 00 00 00 00       	mov    $0x0,%edx
 84695be:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 84695c4:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 84695ca:	df ad d0 fe ff ff    	fildll -0x130(%ebp)
 84695d0:	de f9                	fdivrp %st,%st(1)
 84695d2:	d9 5d f4             	fstps  -0xc(%ebp)
 84695d5:	8b 45 10             	mov    0x10(%ebp),%eax
 84695d8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84695db:	89 d1                	mov    %edx,%ecx
 84695dd:	29 c1                	sub    %eax,%ecx
 84695df:	89 c8                	mov    %ecx,%eax
 84695e1:	ba 00 00 00 00       	mov    $0x0,%edx
 84695e6:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 84695ec:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 84695f2:	df ad d0 fe ff ff    	fildll -0x130(%ebp)
 84695f8:	d8 4d f4             	fmuls  -0xc(%ebp)
 84695fb:	d9 bd ce fe ff ff    	fnstcw -0x132(%ebp)
 8469601:	0f b7 85 ce fe ff ff 	movzwl -0x132(%ebp),%eax
 8469608:	b4 0c                	mov    $0xc,%ah
 846960a:	66 89 85 cc fe ff ff 	mov    %ax,-0x134(%ebp)
 8469611:	d9 ad cc fe ff ff    	fldcw  -0x134(%ebp)
 8469617:	df bd d0 fe ff ff    	fistpll -0x130(%ebp)
 846961d:	d9 ad ce fe ff ff    	fldcw  -0x132(%ebp)
 8469623:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8469629:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 846962f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8469632:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 8469639:	8d 45 d0             	lea    -0x30(%ebp),%eax
 846963c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8469640:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8469643:	89 04 24             	mov    %eax,(%esp)
 8469646:	e8 e6 5e c1 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 846964b:	8b 00                	mov    (%eax),%eax
 846964d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8469650:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8469656:	89 04 24             	mov    %eax,(%esp)
 8469659:	e8 e8 c4 f2 ff       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 846965e:	8b 40 04             	mov    0x4(%eax),%eax
 8469661:	01 45 e4             	add    %eax,-0x1c(%ebp)
 8469664:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8469667:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 846966a:	c9                   	leave
 846966b:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::getVirtualRank @ 0x8468de0

/* WongWork::CDeathTowerRanking::getVirtualRank(unsigned int, unsigned int, unsigned int) */

int __thiscall
WongWork::CDeathTowerRanking::getVirtualRank
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  size_t *psVar7;
  int iVar8;
  longdouble lVar9;
  ulonglong local_134;
  stBestRecord_t local_124 [136];
  uint local_9c;
  uint local_98;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_7c [4];
  undefined4 local_78;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_74 [4];
  undefined4 local_70;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_6c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> local_68 [4];
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_64 [4];
  size_t local_60 [3];
  size_t local_54;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_50 [4];
  undefined4 local_4c;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_48 [4];
  undefined4 local_44;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_40 [4];
  size_t local_3c [3];
  size_t local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  size_t local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  float local_10;
  
  stBestRecord_t::stBestRecord_t(local_124);
  local_9c = param_2;
  local_98 = param_3;
  cVar2 = stBestRecord_t::operator>((stBestRecord_t *)(this + 0x7058),local_124);
  if (cVar2 != '\0') {
    return -1;
  }
  cVar2 = stBestRecord_t::operator==(local_124,(stBestRecord_t *)(this + 0x7058));
  if (cVar2 != '\0') {
    return *(int *)(this + 0x70ec);
  }
  cVar2 = stBestRecord_t::operator>(local_124,(stBestRecord_t *)(this + param_1 * 0x390 + 0x98));
  if (cVar2 != '\0') {
    return 1;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_84);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_88);
  local_20 = 0xffffffff;
  uVar3 = std::
          map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
          ::size((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                  *)(this + param_2 * 0x18 + param_1 * 0x12c0 + 0x1298));
  if (uVar3 < 2) goto LAB_08469274;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::begin(local_7c);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_80,
             (_Rb_tree_iterator *)local_7c);
  local_88 = local_80;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_74);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_78,
             (_Rb_tree_iterator *)local_74);
  local_84 = local_78;
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_84);
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_88);
  if ((param_3 < *puVar4) ||
     (puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                       operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>
                                   *)&local_84), *puVar4 < param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_08469274;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::lower_bound(local_6c,(uint *)(this + param_2 * 0x18 + param_1 * 0x12c0 + 0x1298));
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_70,
             (_Rb_tree_iterator *)local_6c);
  local_88 = local_70;
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_88);
  if (param_3 < *puVar4) {
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::begin(local_64);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
    _Rb_tree_const_iterator(local_68,(_Rb_tree_iterator *)local_64);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_88,(_Rb_tree_const_iterator *)local_68);
    if (cVar2 == '\0') goto LAB_084690b5;
    bVar1 = true;
  }
  else {
LAB_084690b5:
    bVar1 = false;
  }
  if (bVar1) {
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_88);
  }
  local_84 = local_88;
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator++
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_84);
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_88);
  if (*puVar4 == param_3) {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_88);
    return *(int *)(iVar5 + 4);
  }
  puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                   operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *
                              )&local_84);
  if (*puVar4 == param_3) {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_84);
    return *(int *)(iVar5 + 4);
  }
  piVar6 = (int *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                  operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                             &local_84);
  iVar5 = *piVar6;
  piVar6 = (int *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                  operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                             &local_88);
  local_60[0] = iVar5 - *piVar6;
  local_60[1] = 1;
  psVar7 = std::max<size_t>(local_60 + 1,local_60);
  local_28 = *psVar7;
  iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &local_84);
  iVar5 = *(int *)(iVar5 + 4);
  iVar8 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &local_88);
  uVar3 = iVar5 - *(int *)(iVar8 + 4);
  local_24 = (int)uVar3 >> 0x1f;
  local_24 = (uVar3 ^ local_24) - local_24;
  local_134 = (ulonglong)local_24;
  lVar9 = (longdouble)local_134;
  local_134 = (ulonglong)local_28;
  local_1c = (float)(lVar9 / (longdouble)local_134);
  piVar6 = (int *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                  operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                             &local_88);
  local_134 = (ulonglong)(param_3 - *piVar6);
  local_134._0_4_ = (undefined4)(longlong)ROUND((float)local_134 * local_1c);
  local_60[2] = (undefined4)local_134;
  local_54 = 1;
  psVar7 = std::max<size_t>(&local_54,local_60 + 2);
  local_20 = *psVar7;
LAB_08469274:
  if (local_28 == 0) {
    local_18 = 0;
    local_14 = 0;
    cVar2 = std::
            map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
            ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                     *)(this + param_2 * 0x18 + param_1 * 0x12c0 + 0x1298));
    if (cVar2 != '\x01') {
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::end(local_50);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
      _Rb_tree_const_iterator(local_8c,(_Rb_tree_iterator *)local_50);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--(local_8c)
      ;
      puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                       operator->(local_8c);
      if (*puVar4 == param_3) {
        iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                          (local_8c);
        return *(int *)(iVar5 + 4);
      }
      puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
                       operator->(local_8c);
      if (*puVar4 < param_3) {
        local_14 = param_2;
      }
      else {
        local_18 = param_2;
      }
    }
    if (local_18 == 0) {
      local_18 = param_2;
      do {
        local_18 = local_18 - 1;
        if ((local_18 < 2) ||
           (cVar2 = std::
                    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                    ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                             *)(this + local_18 * 0x18 + param_1 * 0x12c0 + 0x1298)), cVar2 == '\0')
           ) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      } while (bVar1);
    }
    if (local_14 == 0) {
      local_14 = param_2;
      do {
        local_14 = local_14 + 1;
        if ((local_14 < 200) &&
           (cVar2 = std::
                    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                    ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                             *)(this + local_14 * 0x18 + param_1 * 0x12c0 + 0x1298)), cVar2 != '\0')
           ) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      } while (bVar1);
    }
    cVar2 = std::
            map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
            ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                     *)(this + local_18 * 0x18 + param_1 * 0x12c0 + 0x1298));
    if ((cVar2 == '\0') &&
       (cVar2 = std::
                map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                ::empty((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                         *)(this + local_14 * 0x18 + param_1 * 0x12c0 + 0x1298)), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return -1;
    }
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::begin(local_48);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
    _Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_4c,
               (_Rb_tree_iterator *)local_48);
    local_84 = local_4c;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::end(local_40);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
    _Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_44,
               (_Rb_tree_iterator *)local_40);
    local_88 = local_44;
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator--
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_88);
    local_3c[0] = local_14 - local_18;
    local_3c[1] = 1;
    psVar7 = std::max<size_t>(local_3c + 1,local_3c);
    local_2c = *psVar7;
    iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_84);
    iVar5 = *(int *)(iVar5 + 4);
    iVar8 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &local_88);
    uVar3 = iVar5 - *(int *)(iVar8 + 4);
    local_24 = (int)uVar3 >> 0x1f;
    local_24 = (uVar3 ^ local_24) - local_24;
    local_134 = (ulonglong)local_24;
    lVar9 = (longdouble)local_134;
    local_134 = (ulonglong)local_2c;
    local_10 = (float)(lVar9 / (longdouble)local_134);
    local_134 = (ulonglong)(local_14 - param_2);
    local_134._0_4_ = (undefined4)(longlong)ROUND((float)local_134 * local_10);
    local_3c[2] = (undefined4)local_134;
    local_30 = 1;
    psVar7 = std::max<size_t>(&local_30,local_3c + 2);
    local_20 = *psVar7;
  }
  iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &local_88);
  return local_20 + *(int *)(iVar5 + 4);
}

```

---

## init

```asm
// === 084680a4 WongWork::CDeathTowerRanking::init  [0x084680a4-0x846828f] ===
 84680a4:	55                   	push   %ebp
 84680a5:	89 e5                	mov    %esp,%ebp
 84680a7:	53                   	push   %ebx
 84680a8:	83 ec 24             	sub    $0x24,%esp
 84680ab:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84680b2:	e9 ab 01 00 00       	jmp    8468262 <_ZN8WongWork18CDeathTowerRanking4initEj+0x1be>
 84680b7:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 84680be:	eb 26                	jmp    84680e6 <_ZN8WongWork18CDeathTowerRanking4initEj+0x42>
 84680c0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84680c3:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84680c6:	8b 45 08             	mov    0x8(%ebp),%eax
 84680c9:	69 c9 98 00 00 00    	imul   $0x98,%ecx,%ecx
 84680cf:	69 d2 90 03 00 00    	imul   $0x390,%edx,%edx
 84680d5:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84680d8:	01 d0                	add    %edx,%eax
 84680da:	05 90 00 00 00       	add    $0x90,%eax
 84680df:	c6 00 00             	movb   $0x0,(%eax)
 84680e2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84680e6:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 84680ea:	0f 9e c0             	setle  %al
 84680ed:	84 c0                	test   %al,%al
 84680ef:	75 cf                	jne    84680c0 <_ZN8WongWork18CDeathTowerRanking4initEj+0x1c>
 84680f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84680f4:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 84680fa:	05 98 00 00 00       	add    $0x98,%eax
 84680ff:	03 45 08             	add    0x8(%ebp),%eax
 8468102:	83 c0 04             	add    $0x4,%eax
 8468105:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 846810c:	00 
 846810d:	c7 44 24 04 70 33 c6 	movl   $0x8c63370,0x4(%esp)
 8468114:	08 
 8468115:	89 04 24             	mov    %eax,(%esp)
 8468118:	e8 83 57 c1 ff       	call   807d8a0 <memcpy@plt>
 846811d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8468120:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 8468126:	05 30 01 00 00       	add    $0x130,%eax
 846812b:	03 45 08             	add    0x8(%ebp),%eax
 846812e:	83 c0 04             	add    $0x4,%eax
 8468131:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8468138:	00 
 8468139:	c7 44 24 04 77 33 c6 	movl   $0x8c63377,0x4(%esp)
 8468140:	08 
 8468141:	89 04 24             	mov    %eax,(%esp)
 8468144:	e8 57 57 c1 ff       	call   807d8a0 <memcpy@plt>
 8468149:	8b 45 ec             	mov    -0x14(%ebp),%eax
 846814c:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 8468152:	05 c8 01 00 00       	add    $0x1c8,%eax
 8468157:	03 45 08             	add    0x8(%ebp),%eax
 846815a:	83 c0 04             	add    $0x4,%eax
 846815d:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8468164:	00 
 8468165:	c7 44 24 04 7e 33 c6 	movl   $0x8c6337e,0x4(%esp)
 846816c:	08 
 846816d:	89 04 24             	mov    %eax,(%esp)
 8468170:	e8 2b 57 c1 ff       	call   807d8a0 <memcpy@plt>
 8468175:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8468178:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 846817e:	05 60 02 00 00       	add    $0x260,%eax
 8468183:	03 45 08             	add    0x8(%ebp),%eax
 8468186:	83 c0 04             	add    $0x4,%eax
 8468189:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8468190:	00 
 8468191:	c7 44 24 04 85 33 c6 	movl   $0x8c63385,0x4(%esp)
 8468198:	08 
 8468199:	89 04 24             	mov    %eax,(%esp)
 846819c:	e8 ff 56 c1 ff       	call   807d8a0 <memcpy@plt>
 84681a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84681a4:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 84681aa:	05 f8 02 00 00       	add    $0x2f8,%eax
 84681af:	03 45 08             	add    0x8(%ebp),%eax
 84681b2:	83 c0 04             	add    $0x4,%eax
 84681b5:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 84681bc:	00 
 84681bd:	c7 44 24 04 8c 33 c6 	movl   $0x8c6338c,0x4(%esp)
 84681c4:	08 
 84681c5:	89 04 24             	mov    %eax,(%esp)
 84681c8:	e8 d3 56 c1 ff       	call   807d8a0 <memcpy@plt>
 84681cd:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 84681d4:	eb 79                	jmp    846824f <_ZN8WongWork18CDeathTowerRanking4initEj+0x1ab>
 84681d6:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84681d9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84681dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84681df:	8b 55 08             	mov    0x8(%ebp),%edx
 84681e2:	69 db 98 00 00 00    	imul   $0x98,%ebx,%ebx
 84681e8:	69 c9 90 03 00 00    	imul   $0x390,%ecx,%ecx
 84681ee:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 84681f1:	01 ca                	add    %ecx,%edx
 84681f3:	81 c2 94 00 00 00    	add    $0x94,%edx
 84681f9:	89 02                	mov    %eax,(%edx)
 84681fb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84681fe:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8468201:	8b 45 08             	mov    0x8(%ebp),%eax
 8468204:	69 c9 98 00 00 00    	imul   $0x98,%ecx,%ecx
 846820a:	69 d2 90 03 00 00    	imul   $0x390,%edx,%edx
 8468210:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8468213:	01 d0                	add    %edx,%eax
 8468215:	05 8c 00 00 00       	add    $0x8c,%eax
 846821a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8468220:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8468223:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8468226:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468229:	ba c8 00 00 00       	mov    $0xc8,%edx
 846822e:	29 c2                	sub    %eax,%edx
 8468230:	8b 45 08             	mov    0x8(%ebp),%eax
 8468233:	69 db 98 00 00 00    	imul   $0x98,%ebx,%ebx
 8468239:	69 c9 90 03 00 00    	imul   $0x390,%ecx,%ecx
 846823f:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 8468242:	01 c8                	add    %ecx,%eax
 8468244:	05 88 00 00 00       	add    $0x88,%eax
 8468249:	89 10                	mov    %edx,(%eax)
 846824b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 846824f:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8468253:	0f 9e c0             	setle  %al
 8468256:	84 c0                	test   %al,%al
 8468258:	0f 85 78 ff ff ff    	jne    84681d6 <_ZN8WongWork18CDeathTowerRanking4initEj+0x132>
 846825e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8468262:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 8468266:	0f 9e c0             	setle  %al
 8468269:	84 c0                	test   %al,%al
 846826b:	0f 85 46 fe ff ff    	jne    84680b7 <_ZN8WongWork18CDeathTowerRanking4initEj+0x13>
 8468271:	8b 45 08             	mov    0x8(%ebp),%eax
 8468274:	8b 55 0c             	mov    0xc(%ebp),%edx
 8468277:	89 90 f0 70 00 00    	mov    %edx,0x70f0(%eax)
 846827d:	8b 45 08             	mov    0x8(%ebp),%eax
 8468280:	c7 80 e0 70 00 00 c8 	movl   $0xc8,0x70e0(%eax)
 8468287:	00 00 00 
 846828a:	83 c4 24             	add    $0x24,%esp
 846828d:	5b                   	pop    %ebx
 846828e:	5d                   	pop    %ebp
 846828f:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::init @ 0x84680a4

/* WongWork::CDeathTowerRanking::init(unsigned int) */

void __thiscall WongWork::CDeathTowerRanking::init(CDeathTowerRanking *this,uint param_1)

{
  int local_18;
  int local_14;
  int local_10;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    for (local_14 = 1; local_14 < 6; local_14 = local_14 + 1) {
      this[local_14 * 0x98 + local_18 * 0x390 + 0x90] = (CDeathTowerRanking)0x0;
    }
    memcpy(this + local_18 * 0x390 + 0x9c,"AAAAAA",7);
    memcpy(this + local_18 * 0x390 + 0x134,"BBBBBB",7);
    memcpy(this + local_18 * 0x390 + 0x1cc,"CCCCCC",7);
    memcpy(this + local_18 * 0x390 + 0x264,"DDDDDD",7);
    memcpy(this + local_18 * 0x390 + 0x2fc,"EEEEEE",7);
    for (local_10 = 1; local_10 < 6; local_10 = local_10 + 1) {
      *(int *)(this + local_10 * 0x98 + local_18 * 0x390 + 0x94) = local_10;
      *(undefined4 *)(this + local_10 * 0x98 + local_18 * 0x390 + 0x8c) = 0;
      *(int *)(this + local_10 * 0x98 + local_18 * 0x390 + 0x88) = 200 - local_10;
    }
  }
  *(uint *)(this + 0x70f0) = param_1;
  *(undefined4 *)(this + 0x70e0) = 200;
  return;
}

```

---

## makeMyBestRecordPacket

```asm
// === 08468b8e WongWork::CDeathTowerRanking::makeMyBestRecordPacket  [0x08468b8e-0x8468c67] ===
 8468b8e:	55                   	push   %ebp
 8468b8f:	89 e5                	mov    %esp,%ebp
 8468b91:	83 ec 48             	sub    $0x48,%esp
 8468b94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468b97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468b9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8468b9e:	89 04 24             	mov    %eax,(%esp)
 8468ba1:	e8 08 12 00 00       	call   8469dae <_ZN8WongWork18CDeathTowerRanking19_getBestRecordTableEj>
 8468ba6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8468ba9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8468bac:	8d 55 10             	lea    0x10(%ebp),%edx
 8468baf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468bb3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8468bb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468bba:	89 04 24             	mov    %eax,(%esp)
 8468bbd:	e8 6c 13 00 00       	call   8469f2e <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE4findERKj>
 8468bc2:	83 ec 04             	sub    $0x4,%esp
 8468bc5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8468bc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468bcc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8468bcf:	89 04 24             	mov    %eax,(%esp)
 8468bd2:	e8 83 13 00 00       	call   8469f5a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEC1ERKNS_19_Hashtable_iteratorIS6_jS8_SA_SC_SD_EE>
 8468bd7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8468bda:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8468bdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468be1:	89 04 24             	mov    %eax,(%esp)
 8468be4:	e8 8d 13 00 00       	call   8469f76 <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE3endEv>
 8468be9:	83 ec 04             	sub    $0x4,%esp
 8468bec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8468bef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468bf3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8468bf6:	89 04 24             	mov    %eax,(%esp)
 8468bf9:	e8 5c 13 00 00       	call   8469f5a <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEC1ERKNS_19_Hashtable_iteratorIS6_jS8_SA_SC_SD_EE>
 8468bfe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8468c01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468c05:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8468c08:	89 04 24             	mov    %eax,(%esp)
 8468c0b:	e8 8c 13 00 00       	call   8469f9c <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEeqERKSE_>
 8468c10:	84 c0                	test   %al,%al
 8468c12:	74 15                	je     8468c29 <_ZN8WongWork18CDeathTowerRanking22makeMyBestRecordPacketEjjR11PacketGuard+0x9b>
 8468c14:	8b 45 14             	mov    0x14(%ebp),%eax
 8468c17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8468c1e:	00 
 8468c1f:	89 04 24             	mov    %eax,(%esp)
 8468c22:	e8 f9 2c c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8468c27:	eb 3d                	jmp    8468c66 <_ZN8WongWork18CDeathTowerRanking22makeMyBestRecordPacketEjjR11PacketGuard+0xd8>
 8468c29:	8b 45 14             	mov    0x14(%ebp),%eax
 8468c2c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8468c33:	00 
 8468c34:	89 04 24             	mov    %eax,(%esp)
 8468c37:	e8 e4 2c c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8468c3c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8468c3f:	89 04 24             	mov    %eax,(%esp)
 8468c42:	e8 69 13 00 00       	call   8469fb0 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEptEv>
 8468c47:	83 c0 04             	add    $0x4,%eax
 8468c4a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8468c4d:	8b 45 14             	mov    0x14(%ebp),%eax
 8468c50:	89 44 24 08          	mov    %eax,0x8(%esp)
 8468c54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468c57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8468c5e:	89 04 24             	mov    %eax,(%esp)
 8468c61:	e8 50 00 00 00       	call   8468cb6 <_ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard>
 8468c66:	c9                   	leave
 8468c67:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::makeMyBestRecordPacket @ 0x8468b8e

/* WongWork::CDeathTowerRanking::makeMyBestRecordPacket(unsigned int, unsigned int, PacketGuard&) */

void __thiscall
WongWork::CDeathTowerRanking::makeMyBestRecordPacket
          (CDeathTowerRanking *this,uint param_1,uint param_2,PacketGuard *param_3)

{
  char cVar1;
  int iVar2;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_34 [8];
  _Hashtable_iterator local_2c [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_24 [8];
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_1c [8];
  undefined4 local_14;
  stBestRecord_t *local_10;
  
  local_14 = _getBestRecordTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::find((uint *)local_2c);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_34,local_2c);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::end(local_1c);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_24,(_Hashtable_iterator *)local_1c);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
          ::operator==(local_34,(_Hashtable_const_iterator *)local_24);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            ::operator->(local_34);
    local_10 = (stBestRecord_t *)(iVar2 + 4);
    _makeRecordPacket(this,local_10,param_3);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
  }
  return;
}

```

---

## makeTopRankerRecordPacket

```asm
// === 08468c68 WongWork::CDeathTowerRanking::makeTopRankerRecordPacket  [0x08468c68-0x8468cb5] ===
 8468c68:	55                   	push   %ebp
 8468c69:	89 e5                	mov    %esp,%ebp
 8468c6b:	83 ec 28             	sub    $0x28,%esp
 8468c6e:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8468c75:	eb 32                	jmp    8468ca9 <_ZN8WongWork18CDeathTowerRanking25makeTopRankerRecordPacketEjR11PacketGuard+0x41>
 8468c77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468c7a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8468c7d:	69 d2 98 00 00 00    	imul   $0x98,%edx,%edx
 8468c83:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 8468c89:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8468c8c:	03 45 08             	add    0x8(%ebp),%eax
 8468c8f:	8b 55 10             	mov    0x10(%ebp),%edx
 8468c92:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468c96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468c9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8468c9d:	89 04 24             	mov    %eax,(%esp)
 8468ca0:	e8 11 00 00 00       	call   8468cb6 <_ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard>
 8468ca5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8468ca9:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8468cad:	0f 9e c0             	setle  %al
 8468cb0:	84 c0                	test   %al,%al
 8468cb2:	75 c3                	jne    8468c77 <_ZN8WongWork18CDeathTowerRanking25makeTopRankerRecordPacketEjR11PacketGuard+0xf>
 8468cb4:	c9                   	leave
 8468cb5:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::makeTopRankerRecordPacket @ 0x8468c68

/* WongWork::CDeathTowerRanking::makeTopRankerRecordPacket(unsigned int, PacketGuard&) */

void __thiscall
WongWork::CDeathTowerRanking::makeTopRankerRecordPacket
          (CDeathTowerRanking *this,uint param_1,PacketGuard *param_2)

{
  int local_10;
  
  for (local_10 = 1; local_10 < 6; local_10 = local_10 + 1) {
    _makeRecordPacket(this,(stBestRecord_t *)(this + local_10 * 0x98 + param_1 * 0x390),param_2);
  }
  return;
}

```

---

## registBestRecord

```asm
// === 08468914 WongWork::CDeathTowerRanking::registBestRecord  [0x08468914-0x8468b4b] ===
 8468914:	55                   	push   %ebp
 8468915:	89 e5                	mov    %esp,%ebp
 8468917:	57                   	push   %edi
 8468918:	56                   	push   %esi
 8468919:	53                   	push   %ebx
 846891a:	81 ec 2c 02 00 00    	sub    $0x22c,%esp
 8468920:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 8468926:	89 04 24             	mov    %eax,(%esp)
 8468929:	e8 92 ed e3 ff       	call   82a76c0 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tC1Ev>
 846892e:	8b 45 10             	mov    0x10(%ebp),%eax
 8468931:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
 8468937:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 846893e:	e9 80 00 00 00       	jmp    84689c3 <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj+0xaf>
 8468943:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8468946:	6b c0 17             	imul   $0x17,%eax,%eax
 8468949:	03 45 14             	add    0x14(%ebp),%eax
 846894c:	89 c1                	mov    %eax,%ecx
 846894e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8468951:	8d 9d e0 fd ff ff    	lea    -0x220(%ebp),%ebx
 8468957:	01 c0                	add    %eax,%eax
 8468959:	89 c2                	mov    %eax,%edx
 846895b:	c1 e2 04             	shl    $0x4,%edx
 846895e:	29 c2                	sub    %eax,%edx
 8468960:	8d 04 13             	lea    (%ebx,%edx,1),%eax
 8468963:	83 c0 04             	add    $0x4,%eax
 8468966:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 846896d:	00 
 846896e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8468972:	89 04 24             	mov    %eax,(%esp)
 8468975:	e8 56 4f c1 ff       	call   807d8d0 <strncpy@plt>
 846897a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 846897d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8468980:	6b d2 17             	imul   $0x17,%edx,%edx
 8468983:	03 55 14             	add    0x14(%ebp),%edx
 8468986:	0f b6 52 14          	movzbl 0x14(%edx),%edx
 846898a:	88 94 05 5c fe ff ff 	mov    %dl,-0x1a4(%ebp,%eax,1)
 8468991:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8468994:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8468997:	6b d2 17             	imul   $0x17,%edx,%edx
 846899a:	03 55 14             	add    0x14(%ebp),%edx
 846899d:	0f b6 52 15          	movzbl 0x15(%edx),%edx
 84689a1:	88 94 05 60 fe ff ff 	mov    %dl,-0x1a0(%ebp,%eax,1)
 84689a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84689ab:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84689ae:	6b d2 17             	imul   $0x17,%edx,%edx
 84689b1:	03 55 14             	add    0x14(%ebp),%edx
 84689b4:	0f b6 52 16          	movzbl 0x16(%edx),%edx
 84689b8:	88 94 05 64 fe ff ff 	mov    %dl,-0x19c(%ebp,%eax,1)
 84689bf:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84689c3:	8b 45 08             	mov    0x8(%ebp),%eax
 84689c6:	8b 80 f0 70 00 00    	mov    0x70f0(%eax),%eax
 84689cc:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84689cf:	0f 97 c0             	seta   %al
 84689d2:	84 c0                	test   %al,%al
 84689d4:	0f 85 69 ff ff ff    	jne    8468943 <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj+0x2f>
 84689da:	8b 45 18             	mov    0x18(%ebp),%eax
 84689dd:	89 85 68 fe ff ff    	mov    %eax,-0x198(%ebp)
 84689e3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84689e6:	89 85 6c fe ff ff    	mov    %eax,-0x194(%ebp)
 84689ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84689ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84689f3:	8b 45 08             	mov    0x8(%ebp),%eax
 84689f6:	89 04 24             	mov    %eax,(%esp)
 84689f9:	e8 92 13 00 00       	call   8469d90 <_ZN8WongWork18CDeathTowerRanking16_getRankingTableEj>
 84689fe:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8468a01:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 8468a07:	8d 55 10             	lea    0x10(%ebp),%edx
 8468a0a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468a0e:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8468a11:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468a15:	89 04 24             	mov    %eax,(%esp)
 8468a18:	e8 57 16 00 00       	call   846a074 <_ZN9__gnu_cxx8hash_mapIjjNS_4hashIjEESt8equal_toIjESaIjEE4findERKj>
 8468a1d:	83 ec 04             	sub    $0x4,%esp
 8468a20:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 8468a26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468a2a:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 8468a30:	89 04 24             	mov    %eax,(%esp)
 8468a33:	e8 68 16 00 00       	call   846a0a0 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjjEjNS_4hashIjEESt10_Select1stIS3_ESt8equal_toIjESaIjEEC1ERKNS_19_Hashtable_iteratorIS3_jS5_S7_S9_SA_EE>
 8468a38:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8468a3e:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8468a41:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468a45:	89 04 24             	mov    %eax,(%esp)
 8468a48:	e8 6f 16 00 00       	call   846a0bc <_ZN9__gnu_cxx8hash_mapIjjNS_4hashIjEESt8equal_toIjESaIjEE3endEv>
 8468a4d:	83 ec 04             	sub    $0x4,%esp
 8468a50:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8468a56:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468a5a:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 8468a60:	89 04 24             	mov    %eax,(%esp)
 8468a63:	e8 38 16 00 00       	call   846a0a0 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjjEjNS_4hashIjEESt10_Select1stIS3_ESt8equal_toIjESaIjEEC1ERKNS_19_Hashtable_iteratorIS3_jS5_S7_S9_SA_EE>
 8468a68:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 8468a6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468a72:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 8468a78:	89 04 24             	mov    %eax,(%esp)
 8468a7b:	e8 62 16 00 00       	call   846a0e2 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjjEjNS_4hashIjEESt10_Select1stIS3_ESt8equal_toIjESaIjEEneERKSB_>
 8468a80:	84 c0                	test   %al,%al
 8468a82:	74 17                	je     8468a9b <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj+0x187>
 8468a84:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 8468a8a:	89 04 24             	mov    %eax,(%esp)
 8468a8d:	e8 64 16 00 00       	call   846a0f6 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjjEjNS_4hashIjEESt10_Select1stIS3_ESt8equal_toIjESaIjEEptEv>
 8468a92:	8b 40 04             	mov    0x4(%eax),%eax
 8468a95:	89 85 74 fe ff ff    	mov    %eax,-0x18c(%ebp)
 8468a9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468a9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468aa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8468aa5:	89 04 24             	mov    %eax,(%esp)
 8468aa8:	e8 01 13 00 00       	call   8469dae <_ZN8WongWork18CDeathTowerRanking19_getBestRecordTableEj>
 8468aad:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8468ab0:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8468ab6:	8d 95 e0 fd ff ff    	lea    -0x220(%ebp),%edx
 8468abc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468ac0:	8d 55 10             	lea    0x10(%ebp),%edx
 8468ac3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468ac7:	89 04 24             	mov    %eax,(%esp)
 8468aca:	e8 3a 16 00 00       	call   846a109 <_ZSt9make_pairIRjRN8WongWork18CDeathTowerRanking14stBestRecord_tEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 8468acf:	83 ec 04             	sub    $0x4,%esp
 8468ad2:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8468ad8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468adc:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 8468ae2:	89 04 24             	mov    %eax,(%esp)
 8468ae5:	e8 5e 16 00 00       	call   846a148 <_ZNSt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEC1IjS3_EEOS_IT_T0_E>
 8468aea:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 8468af0:	8d 95 a4 fe ff ff    	lea    -0x15c(%ebp),%edx
 8468af6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468afa:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8468afd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468b01:	89 04 24             	mov    %eax,(%esp)
 8468b04:	e8 85 16 00 00       	call   846a18e <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE6insertERKSt4pairIKjS3_E>
 8468b09:	83 ec 04             	sub    $0x4,%esp
 8468b0c:	0f b6 85 80 fe ff ff 	movzbl -0x180(%ebp),%eax
 8468b13:	83 f0 01             	xor    $0x1,%eax
 8468b16:	84 c0                	test   %al,%al
 8468b18:	74 27                	je     8468b41 <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj+0x22d>
 8468b1a:	8d 45 10             	lea    0x10(%ebp),%eax
 8468b1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468b21:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8468b24:	89 04 24             	mov    %eax,(%esp)
 8468b27:	e8 8e 16 00 00       	call   846a1ba <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EEixERKj>
 8468b2c:	89 c2                	mov    %eax,%edx
 8468b2e:	8d 9d e0 fd ff ff    	lea    -0x220(%ebp),%ebx
 8468b34:	b8 26 00 00 00       	mov    $0x26,%eax
 8468b39:	89 d7                	mov    %edx,%edi
 8468b3b:	89 de                	mov    %ebx,%esi
 8468b3d:	89 c1                	mov    %eax,%ecx
 8468b3f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8468b41:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8468b44:	83 c4 00             	add    $0x0,%esp
 8468b47:	5b                   	pop    %ebx
 8468b48:	5e                   	pop    %esi
 8468b49:	5f                   	pop    %edi
 8468b4a:	5d                   	pop    %ebp
 8468b4b:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::registBestRecord @ 0x8468914

/* WongWork::CDeathTowerRanking::registBestRecord(unsigned int, unsigned int,
   stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::registBestRecord
          (CDeathTowerRanking *this,uint param_1,uint param_2,
          stDeathTowerRecordMemberInfo_t *param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_224;
  char acStack_220 [120];
  stDeathTowerRecordMemberInfo_t asStack_1a8 [4];
  stDeathTowerRecordMemberInfo_t asStack_1a4 [4];
  stDeathTowerRecordMemberInfo_t asStack_1a0 [4];
  uint local_19c;
  uint local_198;
  undefined4 local_190;
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_18c [8];
  char local_184;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_180 [8];
  _Hashtable_iterator local_178 [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_170 [8];
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_168 [8];
  pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t> local_160 [156];
  uint local_c4 [39];
  undefined4 local_28;
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  *local_24;
  uint local_20;
  
  bVar5 = 0;
  stBestRecord_t::stBestRecord_t((stBestRecord_t *)&local_224);
  local_224 = param_2;
  for (local_20 = 0; local_20 < *(uint *)(this + 0x70f0); local_20 = local_20 + 1) {
    strncpy(acStack_220 + local_20 * 0x1e,(char *)(param_3 + local_20 * 0x17),0x1e);
    asStack_1a8[local_20] = param_3[local_20 * 0x17 + 0x14];
    asStack_1a4[local_20] = param_3[local_20 * 0x17 + 0x15];
    asStack_1a0[local_20] = param_3[local_20 * 0x17 + 0x16];
  }
  local_19c = param_4;
  local_198 = param_5;
  local_28 = _getRankingTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::find((uint *)local_178);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::_Hashtable_const_iterator(local_180,local_178);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::end(local_168);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::_Hashtable_const_iterator(local_170,(_Hashtable_iterator *)local_168);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
          ::operator!=(local_180,(_Hashtable_const_iterator *)local_170);
  if (cVar1 != '\0') {
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            ::operator->(local_180);
    local_190 = *(undefined4 *)(iVar2 + 4);
  }
  local_24 = (hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
              *)_getBestRecordTable(this,param_1);
  std::make_pair<unsigned_int&,WongWork::CDeathTowerRanking::stBestRecord_t&>
            (local_c4,(stBestRecord_t *)&param_2);
  std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>::
  pair<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t>(local_160,(pair *)local_c4);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::insert(local_18c,local_24);
  if (local_184 != '\x01') {
    puVar3 = (uint *)__gnu_cxx::
                     hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
                     ::operator[](local_24,&param_2);
    puVar4 = &local_224;
    for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    }
  }
  return;
}

```

---

## registRanker

```asm
// === 08468614 WongWork::CDeathTowerRanking::registRanker  [0x08468614-0x8468913] ===
 8468614:	55                   	push   %ebp
 8468615:	89 e5                	mov    %esp,%ebp
 8468617:	57                   	push   %edi
 8468618:	56                   	push   %esi
 8468619:	53                   	push   %ebx
 846861a:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 8468620:	8b 45 10             	mov    0x10(%ebp),%eax
 8468623:	83 f8 05             	cmp    $0x5,%eax
 8468626:	0f 87 03 02 00 00    	ja     846882f <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj+0x21b>
 846862c:	8b 55 0c             	mov    0xc(%ebp),%edx
 846862f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8468632:	8b 45 08             	mov    0x8(%ebp),%eax
 8468635:	69 c9 98 00 00 00    	imul   $0x98,%ecx,%ecx
 846863b:	69 d2 90 03 00 00    	imul   $0x390,%edx,%edx
 8468641:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8468644:	01 d0                	add    %edx,%eax
 8468646:	05 90 00 00 00       	add    $0x90,%eax
 846864b:	0f b6 00             	movzbl (%eax),%eax
 846864e:	84 c0                	test   %al,%al
 8468650:	74 6a                	je     84686bc <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj+0xa8>
 8468652:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468655:	8b 55 10             	mov    0x10(%ebp),%edx
 8468658:	69 d2 98 00 00 00    	imul   $0x98,%edx,%edx
 846865e:	69 c0 90 03 00 00    	imul   $0x390,%eax,%eax
 8468664:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8468667:	83 e8 80             	sub    $0xffffff80,%eax
 846866a:	03 45 08             	add    0x8(%ebp),%eax
 846866d:	8d 48 0c             	lea    0xc(%eax),%ecx
 8468670:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8468673:	8b 55 0c             	mov    0xc(%ebp),%edx
 8468676:	8b 75 10             	mov    0x10(%ebp),%esi
 8468679:	8b 45 08             	mov    0x8(%ebp),%eax
 846867c:	69 f6 98 00 00 00    	imul   $0x98,%esi,%esi
 8468682:	69 d2 90 03 00 00    	imul   $0x390,%edx,%edx
 8468688:	8d 14 16             	lea    (%esi,%edx,1),%edx
 846868b:	01 d0                	add    %edx,%eax
 846868d:	05 88 00 00 00       	add    $0x88,%eax
 8468692:	8b 10                	mov    (%eax),%edx
 8468694:	89 d0                	mov    %edx,%eax
 8468696:	01 c0                	add    %eax,%eax
 8468698:	01 d0                	add    %edx,%eax
 846869a:	c1 e0 03             	shl    $0x3,%eax
 846869d:	69 d3 c0 12 00 00    	imul   $0x12c0,%ebx,%edx
 84686a3:	01 d0                	add    %edx,%eax
 84686a5:	05 90 12 00 00       	add    $0x1290,%eax
 84686aa:	03 45 08             	add    0x8(%ebp),%eax
 84686ad:	83 c0 08             	add    $0x8,%eax
 84686b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84686b4:	89 04 24             	mov    %eax,(%esp)
 84686b7:	e8 9e 19 00 00       	call   846a05a <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5eraseERS3_>
 84686bc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84686c3:	e9 e4 00 00 00       	jmp    84687ac <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj+0x198>
 84686c8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84686cb:	6b c0 17             	imul   $0x17,%eax,%eax
 84686ce:	03 45 14             	add    0x14(%ebp),%eax
 84686d1:	89 c1                	mov    %eax,%ecx
 84686d3:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 84686d6:	8b 75 10             	mov    0x10(%ebp),%esi
 84686d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84686dc:	01 c0                	add    %eax,%eax
 84686de:	89 c2                	mov    %eax,%edx
 84686e0:	c1 e2 04             	shl    $0x4,%edx
 84686e3:	29 c2                	sub    %eax,%edx
 84686e5:	69 c6 98 00 00 00    	imul   $0x98,%esi,%eax
 84686eb:	01 c2                	add    %eax,%edx
 84686ed:	69 c3 90 03 00 00    	imul   $0x390,%ebx,%eax
 84686f3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84686f6:	03 45 08             	add    0x8(%ebp),%eax
 84686f9:	83 c0 04             	add    $0x4,%eax
 84686fc:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8468703:	00 
 8468704:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8468708:	89 04 24             	mov    %eax,(%esp)
 846870b:	e8 c0 51 c1 ff       	call   807d8d0 <strncpy@plt>
 8468710:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8468713:	8b 75 10             	mov    0x10(%ebp),%esi
 8468716:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8468719:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 846871c:	6b c0 17             	imul   $0x17,%eax,%eax
 846871f:	03 45 14             	add    0x14(%ebp),%eax
 8468722:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 8468726:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8468729:	69 f6 98 00 00 00    	imul   $0x98,%esi,%esi
 846872f:	69 db 90 03 00 00    	imul   $0x390,%ebx,%ebx
 8468735:	8d 1c 1e             	lea    (%esi,%ebx,1),%ebx
 8468738:	01 d9                	add    %ebx,%ecx
 846873a:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 846873d:	83 c2 70             	add    $0x70,%edx
 8468740:	88 42 0c             	mov    %al,0xc(%edx)
 8468743:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8468746:	8b 75 10             	mov    0x10(%ebp),%esi
 8468749:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 846874c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 846874f:	6b c0 17             	imul   $0x17,%eax,%eax
 8468752:	03 45 14             	add    0x14(%ebp),%eax
 8468755:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 8468759:	8b 4d 08             	mov    0x8(%ebp),%ecx
 846875c:	69 f6 98 00 00 00    	imul   $0x98,%esi,%esi
 8468762:	69 db 90 03 00 00    	imul   $0x390,%ebx,%ebx
 8468768:	8d 1c 1e             	lea    (%esi,%ebx,1),%ebx
 846876b:	01 d9                	add    %ebx,%ecx
 846876d:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8468770:	83 ea 80             	sub    $0xffffff80,%edx
 8468773:	88 02                	mov    %al,(%edx)
 8468775:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8468778:	8b 75 10             	mov    0x10(%ebp),%esi
 846877b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 846877e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8468781:	6b c0 17             	imul   $0x17,%eax,%eax
 8468784:	03 45 14             	add    0x14(%ebp),%eax
 8468787:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 846878b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 846878e:	69 f6 98 00 00 00    	imul   $0x98,%esi,%esi
 8468794:	69 db 90 03 00 00    	imul   $0x390,%ebx,%ebx
 846879a:	8d 1c 1e             	lea    (%esi,%ebx,1),%ebx
 846879d:	01 d9                	add    %ebx,%ecx
 846879f:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84687a2:	83 ea 80             	sub    $0xffffff80,%edx
 84687a5:	88 42 04             	mov    %al,0x4(%edx)
 84687a8:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84687ac:	8b 45 08             	mov    0x8(%ebp),%eax
 84687af:	8b 80 f0 70 00 00    	mov    0x70f0(%eax),%eax
 84687b5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84687b8:	0f 97 c0             	seta   %al
 84687bb:	84 c0                	test   %al,%al
 84687bd:	0f 85 05 ff ff ff    	jne    84686c8 <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj+0xb4>
 84687c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84687c6:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84687c9:	8b 45 08             	mov    0x8(%ebp),%eax
 84687cc:	69 c9 98 00 00 00    	imul   $0x98,%ecx,%ecx
 84687d2:	69 d2 90 03 00 00    	imul   $0x390,%edx,%edx
 84687d8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84687db:	01 d0                	add    %edx,%eax
 84687dd:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 84687e3:	8b 45 18             	mov    0x18(%ebp),%eax
 84687e6:	89 02                	mov    %eax,(%edx)
 84687e8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84687eb:	8b 5d 10             	mov    0x10(%ebp),%ebx
 84687ee:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84687f1:	8b 55 08             	mov    0x8(%ebp),%edx
 84687f4:	69 db 98 00 00 00    	imul   $0x98,%ebx,%ebx
 84687fa:	69 c9 90 03 00 00    	imul   $0x390,%ecx,%ecx
 8468800:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 8468803:	01 ca                	add    %ecx,%edx
 8468805:	81 c2 8c 00 00 00    	add    $0x8c,%edx
 846880b:	89 02                	mov    %eax,(%edx)
 846880d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8468810:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8468813:	8b 45 08             	mov    0x8(%ebp),%eax
 8468816:	69 c9 98 00 00 00    	imul   $0x98,%ecx,%ecx
 846881c:	69 d2 90 03 00 00    	imul   $0x390,%edx,%edx
 8468822:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8468825:	01 d0                	add    %edx,%eax
 8468827:	05 90 00 00 00       	add    $0x90,%eax
 846882c:	c6 00 01             	movb   $0x1,(%eax)
 846882f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8468832:	8d 55 10             	lea    0x10(%ebp),%edx
 8468835:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468839:	8d 55 1c             	lea    0x1c(%ebp),%edx
 846883c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468840:	89 04 24             	mov    %eax,(%esp)
 8468843:	e8 1c d2 f2 ff       	call   8395a64 <_ZSt9make_pairIRjS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8468848:	83 ec 04             	sub    $0x4,%esp
 846884b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846884e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468852:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8468855:	89 04 24             	mov    %eax,(%esp)
 8468858:	e8 45 d2 f2 ff       	call   8395aa2 <_ZNSt4pairIKjjEC1IjjEEOS_IT_T0_E>
 846885d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8468860:	8b 55 18             	mov    0x18(%ebp),%edx
 8468863:	89 d0                	mov    %edx,%eax
 8468865:	01 c0                	add    %eax,%eax
 8468867:	01 d0                	add    %edx,%eax
 8468869:	c1 e0 03             	shl    $0x3,%eax
 846886c:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 8468872:	01 d0                	add    %edx,%eax
 8468874:	05 90 12 00 00       	add    $0x1290,%eax
 8468879:	03 45 08             	add    0x8(%ebp),%eax
 846887c:	8d 48 08             	lea    0x8(%eax),%ecx
 846887f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8468882:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8468885:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468889:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 846888d:	89 04 24             	mov    %eax,(%esp)
 8468890:	e8 f7 9d c7 ff       	call   80e268c <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE6insertERKS4_>
 8468895:	83 ec 04             	sub    $0x4,%esp
 8468898:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 846889c:	83 f0 01             	xor    $0x1,%eax
 846889f:	84 c0                	test   %al,%al
 84688a1:	74 11                	je     84688b4 <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj+0x2a0>
 84688a3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84688a6:	89 04 24             	mov    %eax,(%esp)
 84688a9:	e8 0a 9e c7 ff       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 84688ae:	8b 55 10             	mov    0x10(%ebp),%edx
 84688b1:	89 50 04             	mov    %edx,0x4(%eax)
 84688b4:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84688ba:	89 04 24             	mov    %eax,(%esp)
 84688bd:	e8 fe ed e3 ff       	call   82a76c0 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tC1Ev>
 84688c2:	8b 45 18             	mov    0x18(%ebp),%eax
 84688c5:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84688c8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84688cb:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84688ce:	8b 45 08             	mov    0x8(%ebp),%eax
 84688d1:	8d 90 58 70 00 00    	lea    0x7058(%eax),%edx
 84688d7:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84688dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84688e1:	89 14 24             	mov    %edx,(%esp)
 84688e4:	e8 fb 13 00 00       	call   8469ce4 <_ZN8WongWork18CDeathTowerRanking14stBestRecord_tgtERKS1_>
 84688e9:	84 c0                	test   %al,%al
 84688eb:	74 1c                	je     8468909 <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj+0x2f5>
 84688ed:	8b 45 08             	mov    0x8(%ebp),%eax
 84688f0:	8d 98 58 70 00 00    	lea    0x7058(%eax),%ebx
 84688f6:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 84688fc:	b8 26 00 00 00       	mov    $0x26,%eax
 8468901:	89 df                	mov    %ebx,%edi
 8468903:	89 d6                	mov    %edx,%esi
 8468905:	89 c1                	mov    %eax,%ecx
 8468907:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8468909:	8d 65 f4             	lea    -0xc(%ebp),%esp
 846890c:	83 c4 00             	add    $0x0,%esp
 846890f:	5b                   	pop    %ebx
 8468910:	5e                   	pop    %esi
 8468911:	5f                   	pop    %edi
 8468912:	5d                   	pop    %ebp
 8468913:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::registRanker @ 0x8468614

/* WongWork::CDeathTowerRanking::registRanker(unsigned int, unsigned int,
   stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::registRanker
          (CDeathTowerRanking *this,uint param_1,uint param_2,
          stDeathTowerRecordMemberInfo_t *param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  stBestRecord_t *psVar3;
  CDeathTowerRanking *pCVar4;
  byte bVar5;
  stBestRecord_t local_d0 [136];
  uint local_48;
  uint local_44;
  _Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> local_38 [4];
  char local_34;
  pair<unsigned_int_const,unsigned_int> local_30 [8];
  uint local_28 [2];
  uint local_20;
  
  bVar5 = 0;
  if (param_2 < 6) {
    if (this[param_2 * 0x98 + param_1 * 0x390 + 0x90] != (CDeathTowerRanking)0x0) {
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::erase((uint *)(this + *(int *)(this + param_2 * 0x98 + param_1 * 0x390 + 0x88) * 0x18 +
                              param_1 * 0x12c0 + 0x1298));
    }
    for (local_20 = 0; local_20 < *(uint *)(this + 0x70f0); local_20 = local_20 + 1) {
      strncpy((char *)(this + local_20 * 0x1e + param_2 * 0x98 + param_1 * 0x390 + 4),
              (char *)(param_3 + local_20 * 0x17),0x1e);
      this[local_20 + param_2 * 0x98 + param_1 * 0x390 + 0x7c] =
           *(CDeathTowerRanking *)(param_3 + local_20 * 0x17 + 0x14);
      this[local_20 + param_2 * 0x98 + param_1 * 0x390 + 0x80] =
           *(CDeathTowerRanking *)(param_3 + local_20 * 0x17 + 0x15);
      this[local_20 + param_2 * 0x98 + param_1 * 0x390 + 0x84] =
           *(CDeathTowerRanking *)(param_3 + local_20 * 0x17 + 0x16);
    }
    *(uint *)(this + param_2 * 0x98 + param_1 * 0x390 + 0x88) = param_4;
    *(uint *)(this + param_2 * 0x98 + param_1 * 0x390 + 0x8c) = param_5;
    this[param_2 * 0x98 + param_1 * 0x390 + 0x90] = (CDeathTowerRanking)0x1;
  }
  std::make_pair<unsigned_int&,unsigned_int&>(local_28,&param_5);
  std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
            (local_30,(pair *)local_28);
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::insert(local_38);
  if (local_34 != '\x01') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->(local_38)
    ;
    *(uint *)(iVar2 + 4) = param_2;
  }
  stBestRecord_t::stBestRecord_t(local_d0);
  local_48 = param_4;
  local_44 = param_5;
  cVar1 = stBestRecord_t::operator>((stBestRecord_t *)(this + 0x7058),local_d0);
  if (cVar1 != '\0') {
    psVar3 = local_d0;
    pCVar4 = this + 0x7058;
    for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar4 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + ((uint)bVar5 * -2 + 1) * 4;
      pCVar4 = pCVar4 + (uint)bVar5 * -8 + 4;
    }
  }
  return;
}

```

---

## registRanking

```asm
// === 084683da WongWork::CDeathTowerRanking::registRanking  [0x084683da-0x84684cd] ===
 84683da:	55                   	push   %ebp
 84683db:	89 e5                	mov    %esp,%ebp
 84683dd:	83 ec 58             	sub    $0x58,%esp
 84683e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84683e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84683e7:	8b 45 08             	mov    0x8(%ebp),%eax
 84683ea:	89 04 24             	mov    %eax,(%esp)
 84683ed:	e8 9e 19 00 00       	call   8469d90 <_ZN8WongWork18CDeathTowerRanking16_getRankingTableEj>
 84683f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84683f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84683f8:	8d 55 14             	lea    0x14(%ebp),%edx
 84683fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84683ff:	8d 55 10             	lea    0x10(%ebp),%edx
 8468402:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468406:	89 04 24             	mov    %eax,(%esp)
 8468409:	e8 56 d6 f2 ff       	call   8395a64 <_ZSt9make_pairIRjS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 846840e:	83 ec 04             	sub    $0x4,%esp
 8468411:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8468414:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468418:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846841b:	89 04 24             	mov    %eax,(%esp)
 846841e:	e8 7f d6 f2 ff       	call   8395aa2 <_ZNSt4pairIKjjEC1IjjEEOS_IT_T0_E>
 8468423:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8468426:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8468429:	89 54 24 08          	mov    %edx,0x8(%esp)
 846842d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8468430:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468434:	89 04 24             	mov    %eax,(%esp)
 8468437:	e8 88 1b 00 00       	call   8469fc4 <_ZN9__gnu_cxx8hash_mapIjjNS_4hashIjEESt8equal_toIjESaIjEE6insertERKSt4pairIKjjE>
 846843c:	83 ec 04             	sub    $0x4,%esp
 846843f:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8468443:	83 f0 01             	xor    $0x1,%eax
 8468446:	84 c0                	test   %al,%al
 8468448:	74 11                	je     846845b <_ZN8WongWork18CDeathTowerRanking13registRankingEjjj+0x81>
 846844a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 846844d:	89 04 24             	mov    %eax,(%esp)
 8468450:	e8 9b 1b 00 00       	call   8469ff0 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKjjEjNS_4hashIjEESt10_Select1stIS3_ESt8equal_toIjESaIjEEptEv>
 8468455:	8b 55 14             	mov    0x14(%ebp),%edx
 8468458:	89 50 04             	mov    %edx,0x4(%eax)
 846845b:	8b 45 0c             	mov    0xc(%ebp),%eax
 846845e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468462:	8b 45 08             	mov    0x8(%ebp),%eax
 8468465:	89 04 24             	mov    %eax,(%esp)
 8468468:	e8 41 19 00 00       	call   8469dae <_ZN8WongWork18CDeathTowerRanking19_getBestRecordTableEj>
 846846d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8468470:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8468473:	8d 55 10             	lea    0x10(%ebp),%edx
 8468476:	89 54 24 08          	mov    %edx,0x8(%esp)
 846847a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 846847d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468481:	89 04 24             	mov    %eax,(%esp)
 8468484:	e8 a5 1a 00 00       	call   8469f2e <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE4findERKj>
 8468489:	83 ec 04             	sub    $0x4,%esp
 846848c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846848f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8468492:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468496:	89 04 24             	mov    %eax,(%esp)
 8468499:	e8 d8 1a 00 00       	call   8469f76 <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE3endEv>
 846849e:	83 ec 04             	sub    $0x4,%esp
 84684a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84684a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84684a8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84684ab:	89 04 24             	mov    %eax,(%esp)
 84684ae:	e8 51 1b 00 00       	call   846a004 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEneERKSE_>
 84684b3:	84 c0                	test   %al,%al
 84684b5:	74 14                	je     84684cb <_ZN8WongWork18CDeathTowerRanking13registRankingEjjj+0xf1>
 84684b7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84684ba:	89 04 24             	mov    %eax,(%esp)
 84684bd:	e8 56 1b 00 00       	call   846a018 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKjN8WongWork18CDeathTowerRanking14stBestRecord_tEEjNS_4hashIjEESt10_Select1stIS6_ESt8equal_toIjESaIS5_EEptEv>
 84684c2:	8b 55 14             	mov    0x14(%ebp),%edx
 84684c5:	89 90 98 00 00 00    	mov    %edx,0x98(%eax)
 84684cb:	c9                   	leave
 84684cc:	c3                   	ret
 84684cd:	90                   	nop

```

```c
// WongWork::CDeathTowerRanking::registRanking @ 0x84683da

/* WongWork::CDeathTowerRanking::registRanking(unsigned int, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::registRanking
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  _Hashtable_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_40 [8];
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_38 [8];
  char local_30;
  pair<unsigned_int_const,unsigned_int> local_2c [8];
  uint local_24 [2];
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_1c [8];
  pair *local_14;
  undefined4 local_10;
  
  local_14 = (pair *)_getRankingTable(this,param_1);
  std::make_pair<unsigned_int&,unsigned_int&>(local_24,&param_2);
  std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
            (local_2c,(pair *)local_24);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::insert(local_38,local_14);
  if (local_30 != '\x01') {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            ::operator->((_Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
                          *)local_38);
    *(uint *)(iVar2 + 4) = param_3;
  }
  local_10 = _getBestRecordTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::find((uint *)local_40);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::end(local_1c);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
          ::operator!=(local_40,(_Hashtable_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            ::operator->(local_40);
    *(uint *)(iVar2 + 0x98) = param_3;
  }
  return;
}

```

---

## resetRanking

```asm
// === 08468594 WongWork::CDeathTowerRanking::resetRanking  [0x08468594-0x8468613] ===
 8468594:	55                   	push   %ebp
 8468595:	89 e5                	mov    %esp,%ebp
 8468597:	83 ec 28             	sub    $0x28,%esp
 846859a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84685a1:	eb 64                	jmp    8468607 <_ZN8WongWork18CDeathTowerRanking12resetRankingEv+0x73>
 84685a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84685a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84685aa:	8b 45 08             	mov    0x8(%ebp),%eax
 84685ad:	89 04 24             	mov    %eax,(%esp)
 84685b0:	e8 db 17 00 00       	call   8469d90 <_ZN8WongWork18CDeathTowerRanking16_getRankingTableEj>
 84685b5:	89 04 24             	mov    %eax,(%esp)
 84685b8:	e8 89 1a 00 00       	call   846a046 <_ZN9__gnu_cxx8hash_mapIjjNS_4hashIjEESt8equal_toIjESaIjEE5clearEv>
 84685bd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84685c4:	eb 2e                	jmp    84685f4 <_ZN8WongWork18CDeathTowerRanking12resetRankingEv+0x60>
 84685c6:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84685c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84685cc:	89 d0                	mov    %edx,%eax
 84685ce:	01 c0                	add    %eax,%eax
 84685d0:	01 d0                	add    %edx,%eax
 84685d2:	c1 e0 03             	shl    $0x3,%eax
 84685d5:	69 d1 c0 12 00 00    	imul   $0x12c0,%ecx,%edx
 84685db:	01 d0                	add    %edx,%eax
 84685dd:	05 90 12 00 00       	add    $0x1290,%eax
 84685e2:	03 45 08             	add    0x8(%ebp),%eax
 84685e5:	83 c0 08             	add    $0x8,%eax
 84685e8:	89 04 24             	mov    %eax,(%esp)
 84685eb:	e8 4a a1 c7 ff       	call   80e273a <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5clearEv>
 84685f0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84685f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84685f7:	3d c7 00 00 00       	cmp    $0xc7,%eax
 84685fc:	0f 96 c0             	setbe  %al
 84685ff:	84 c0                	test   %al,%al
 8468601:	75 c3                	jne    84685c6 <_ZN8WongWork18CDeathTowerRanking12resetRankingEv+0x32>
 8468603:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8468607:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 846860b:	0f 9e c0             	setle  %al
 846860e:	84 c0                	test   %al,%al
 8468610:	75 91                	jne    84685a3 <_ZN8WongWork18CDeathTowerRanking12resetRankingEv+0xf>
 8468612:	c9                   	leave
 8468613:	c3                   	ret

```

```c
// WongWork::CDeathTowerRanking::resetRanking @ 0x8468594

/* WongWork::CDeathTowerRanking::resetRanking() */

void __thiscall WongWork::CDeathTowerRanking::resetRanking(CDeathTowerRanking *this)

{
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  *this_00;
  uint local_14;
  uint local_10;
  
  for (local_14 = 0; (int)local_14 < 5; local_14 = local_14 + 1) {
    this_00 = (hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
               *)_getRankingTable(this,local_14);
    __gnu_cxx::
    hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
    ::clear(this_00);
    for (local_10 = 0; local_10 < 200; local_10 = local_10 + 1) {
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
               *)(this + local_10 * 0x18 + local_14 * 0x12c0 + 0x1298));
    }
  }
  return;
}

```

---

## unregistBestRecord

```asm
// === 08468b4c WongWork::CDeathTowerRanking::unregistBestRecord  [0x08468b4c-0x8468b8d] ===
 8468b4c:	55                   	push   %ebp
 8468b4d:	89 e5                	mov    %esp,%ebp
 8468b4f:	83 ec 28             	sub    $0x28,%esp
 8468b52:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8468b59:	eb 25                	jmp    8468b80 <_ZN8WongWork18CDeathTowerRanking18unregistBestRecordEj+0x34>
 8468b5b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468b5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468b62:	8b 45 08             	mov    0x8(%ebp),%eax
 8468b65:	89 04 24             	mov    %eax,(%esp)
 8468b68:	e8 41 12 00 00       	call   8469dae <_ZN8WongWork18CDeathTowerRanking19_getBestRecordTableEj>
 8468b6d:	8d 55 0c             	lea    0xc(%ebp),%edx
 8468b70:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468b74:	89 04 24             	mov    %eax,(%esp)
 8468b77:	e8 8e 16 00 00       	call   846a20a <_ZN9__gnu_cxx8hash_mapIjN8WongWork18CDeathTowerRanking14stBestRecord_tENS_4hashIjEESt8equal_toIjESaIS3_EE5eraseERKj>
 8468b7c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8468b80:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8468b84:	0f 9e c0             	setle  %al
 8468b87:	84 c0                	test   %al,%al
 8468b89:	75 d0                	jne    8468b5b <_ZN8WongWork18CDeathTowerRanking18unregistBestRecordEj+0xf>
 8468b8b:	c9                   	leave
 8468b8c:	c3                   	ret
 8468b8d:	90                   	nop

```

```c
// WongWork::CDeathTowerRanking::unregistBestRecord @ 0x8468b4c

/* WongWork::CDeathTowerRanking::unregistBestRecord(unsigned int) */

void WongWork::CDeathTowerRanking::unregistBestRecord(uint param_1)

{
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  *this;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < 5; local_10 = local_10 + 1) {
    this = (hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            *)_getBestRecordTable((CDeathTowerRanking *)param_1,local_10);
    __gnu_cxx::
    hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
    ::erase(this,(uint *)&stack0x00000008);
  }
  return;
}

```

---

## unregistRanking

```asm
// === 08468552 WongWork::CDeathTowerRanking::unregistRanking  [0x08468552-0x8468593] ===
 8468552:	55                   	push   %ebp
 8468553:	89 e5                	mov    %esp,%ebp
 8468555:	83 ec 28             	sub    $0x28,%esp
 8468558:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 846855f:	eb 25                	jmp    8468586 <_ZN8WongWork18CDeathTowerRanking15unregistRankingEj+0x34>
 8468561:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8468564:	89 44 24 04          	mov    %eax,0x4(%esp)
 8468568:	8b 45 08             	mov    0x8(%ebp),%eax
 846856b:	89 04 24             	mov    %eax,(%esp)
 846856e:	e8 1d 18 00 00       	call   8469d90 <_ZN8WongWork18CDeathTowerRanking16_getRankingTableEj>
 8468573:	8d 55 0c             	lea    0xc(%ebp),%edx
 8468576:	89 54 24 04          	mov    %edx,0x4(%esp)
 846857a:	89 04 24             	mov    %eax,(%esp)
 846857d:	e8 aa 1a 00 00       	call   846a02c <_ZN9__gnu_cxx8hash_mapIjjNS_4hashIjEESt8equal_toIjESaIjEE5eraseERKj>
 8468582:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8468586:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 846858a:	0f 9e c0             	setle  %al
 846858d:	84 c0                	test   %al,%al
 846858f:	75 d0                	jne    8468561 <_ZN8WongWork18CDeathTowerRanking15unregistRankingEj+0xf>
 8468591:	c9                   	leave
 8468592:	c3                   	ret
 8468593:	90                   	nop

```

```c
// WongWork::CDeathTowerRanking::unregistRanking @ 0x8468552

/* WongWork::CDeathTowerRanking::unregistRanking(unsigned int) */

void WongWork::CDeathTowerRanking::unregistRanking(uint param_1)

{
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  *this;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < 5; local_10 = local_10 + 1) {
    this = (hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            *)_getRankingTable((CDeathTowerRanking *)param_1,local_10);
    __gnu_cxx::
    hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
    ::erase(this,(uint *)&stack0x00000008);
  }
  return;
}

```

---

## updateRanking

```asm
// === 084684ce WongWork::CDeathTowerRanking::updateRanking  [0x084684ce-0x8468551] ===
 84684ce:	55                   	push   %ebp
 84684cf:	89 e5                	mov    %esp,%ebp
 84684d1:	83 ec 38             	sub    $0x38,%esp
 84684d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84684d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84684db:	8b 45 08             	mov    0x8(%ebp),%eax
 84684de:	89 04 24             	mov    %eax,(%esp)
 84684e1:	e8 aa 18 00 00       	call   8469d90 <_ZN8WongWork18CDeathTowerRanking16_getRankingTableEj>
 84684e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84684e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84684ec:	8d 55 14             	lea    0x14(%ebp),%edx
 84684ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 84684f3:	8d 55 10             	lea    0x10(%ebp),%edx
 84684f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84684fa:	89 04 24             	mov    %eax,(%esp)
 84684fd:	e8 62 d5 f2 ff       	call   8395a64 <_ZSt9make_pairIRjS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8468502:	83 ec 04             	sub    $0x4,%esp
 8468505:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8468508:	89 44 24 04          	mov    %eax,0x4(%esp)
 846850c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 846850f:	89 04 24             	mov    %eax,(%esp)
 8468512:	e8 8b d5 f2 ff       	call   8395aa2 <_ZNSt4pairIKjjEC1IjjEEOS_IT_T0_E>
 8468517:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846851a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 846851d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468521:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8468524:	89 54 24 04          	mov    %edx,0x4(%esp)
 8468528:	89 04 24             	mov    %eax,(%esp)
 846852b:	e8 94 1a 00 00       	call   8469fc4 <_ZN9__gnu_cxx8hash_mapIjjNS_4hashIjEESt8equal_toIjESaIjEE6insertERKSt4pairIKjjE>
 8468530:	83 ec 04             	sub    $0x4,%esp
 8468533:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 8468537:	83 f0 01             	xor    $0x1,%eax
 846853a:	84 c0                	test   %al,%al
 846853c:	74 11                	je     846854f <_ZN8WongWork18CDeathTowerRanking13updateRankingEjjj+0x81>
 846853e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8468541:	89 04 24             	mov    %eax,(%esp)
 8468544:	e8 a7 1a 00 00       	call   8469ff0 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKjjEjNS_4hashIjEESt10_Select1stIS3_ESt8equal_toIjESaIjEEptEv>
 8468549:	8b 55 14             	mov    0x14(%ebp),%edx
 846854c:	89 50 04             	mov    %edx,0x4(%eax)
 846854f:	c9                   	leave
 8468550:	c3                   	ret
 8468551:	90                   	nop

```

```c
// WongWork::CDeathTowerRanking::updateRanking @ 0x84684ce

/* WongWork::CDeathTowerRanking::updateRanking(unsigned int, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::updateRanking
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_2c [8];
  char local_24;
  pair<unsigned_int_const,unsigned_int> local_20 [8];
  uint local_18 [2];
  pair *local_10;
  
  local_10 = (pair *)_getRankingTable(this,param_1);
  std::make_pair<unsigned_int&,unsigned_int&>(local_18,&param_2);
  std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
            (local_20,(pair *)local_18);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::insert(local_2c,local_10);
  if (local_24 != '\x01') {
    iVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            ::operator->((_Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
                          *)local_2c);
    *(uint *)(iVar1 + 4) = param_3;
  }
  return;
}

```


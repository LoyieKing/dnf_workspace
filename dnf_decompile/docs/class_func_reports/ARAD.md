# ARAD

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CheckAccountItem

```asm
// === 08196ac8 ARAD::CheckAccountItem  [0x08196ac8-0x8196b02] ===
 8196ac8:	55                   	push   %ebp
 8196ac9:	89 e5                	mov    %esp,%ebp
 8196acb:	83 ec 18             	sub    $0x18,%esp
 8196ace:	e8 27 14 00 00       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 8196ad3:	89 04 24             	mov    %eax,(%esp)
 8196ad6:	e8 db 13 00 00       	call   8197eb6 <_ZN4ARAD16Arad_DataManager20getPurchaseLimitItemEv>
 8196adb:	8b 55 10             	mov    0x10(%ebp),%edx
 8196ade:	89 54 24 08          	mov    %edx,0x8(%esp)
 8196ae2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8196ae5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8196ae9:	89 04 24             	mov    %eax,(%esp)
 8196aec:	e8 1f b8 00 00       	call   81a2310 <_ZN17PurchaseLimitItem4findEjRNS_4InfoE>
 8196af1:	84 c0                	test   %al,%al
 8196af3:	74 07                	je     8196afc <_ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x34>
 8196af5:	b8 00 00 00 00       	mov    $0x0,%eax
 8196afa:	eb 05                	jmp    8196b01 <_ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x39>
 8196afc:	b8 01 00 00 00       	mov    $0x1,%eax
 8196b01:	c9                   	leave
 8196b02:	c3                   	ret

```

```c
// ARAD::CheckAccountItem @ 0x8196ac8

/* ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&) */

bool ARAD::CheckAccountItem(CUser *param_1,uint param_2,Info *param_3)

{
  char cVar1;
  Arad_DataManager *this;
  PurchaseLimitItem *this_00;
  
  this = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
  this_00 = (PurchaseLimitItem *)Arad_DataManager::getPurchaseLimitItem(this);
  cVar1 = PurchaseLimitItem::find(this_00,param_2,param_3);
  return cVar1 == '\0';
}

```

---

## GetQuarterOfYear

```asm
// === 0819e8d0 ARAD::GetQuarterOfYear  [0x0819e8d0-0x819e996] ===
 819e8d0:	55                   	push   %ebp
 819e8d1:	89 e5                	mov    %esp,%ebp
 819e8d3:	56                   	push   %esi
 819e8d4:	53                   	push   %ebx
 819e8d5:	83 ec 40             	sub    $0x40,%esp
 819e8d8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 819e8db:	89 04 24             	mov    %eax,(%esp)
 819e8de:	e8 6d ee ed ff       	call   807d750 <time@plt>
 819e8e3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 819e8e6:	89 04 24             	mov    %eax,(%esp)
 819e8e9:	e8 42 fa ed ff       	call   807e330 <localtime@plt>
 819e8ee:	8b 10                	mov    (%eax),%edx
 819e8f0:	89 55 c8             	mov    %edx,-0x38(%ebp)
 819e8f3:	8b 50 04             	mov    0x4(%eax),%edx
 819e8f6:	89 55 cc             	mov    %edx,-0x34(%ebp)
 819e8f9:	8b 50 08             	mov    0x8(%eax),%edx
 819e8fc:	89 55 d0             	mov    %edx,-0x30(%ebp)
 819e8ff:	8b 50 0c             	mov    0xc(%eax),%edx
 819e902:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 819e905:	8b 50 10             	mov    0x10(%eax),%edx
 819e908:	89 55 d8             	mov    %edx,-0x28(%ebp)
 819e90b:	8b 50 14             	mov    0x14(%eax),%edx
 819e90e:	89 55 dc             	mov    %edx,-0x24(%ebp)
 819e911:	8b 50 18             	mov    0x18(%eax),%edx
 819e914:	89 55 e0             	mov    %edx,-0x20(%ebp)
 819e917:	8b 50 1c             	mov    0x1c(%eax),%edx
 819e91a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 819e91d:	8b 50 20             	mov    0x20(%eax),%edx
 819e920:	89 55 e8             	mov    %edx,-0x18(%ebp)
 819e923:	8b 50 24             	mov    0x24(%eax),%edx
 819e926:	89 55 ec             	mov    %edx,-0x14(%ebp)
 819e929:	8b 40 28             	mov    0x28(%eax),%eax
 819e92c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819e92f:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 819e932:	ba 56 55 55 55       	mov    $0x55555556,%edx
 819e937:	89 c8                	mov    %ecx,%eax
 819e939:	f7 ea                	imul   %edx
 819e93b:	89 c8                	mov    %ecx,%eax
 819e93d:	c1 f8 1f             	sar    $0x1f,%eax
 819e940:	89 d1                	mov    %edx,%ecx
 819e942:	29 c1                	sub    %eax,%ecx
 819e944:	89 c8                	mov    %ecx,%eax
 819e946:	8d 58 01             	lea    0x1(%eax),%ebx
 819e949:	8b 45 dc             	mov    -0x24(%ebp),%eax
 819e94c:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 819e952:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 819e957:	89 c8                	mov    %ecx,%eax
 819e959:	f7 ea                	imul   %edx
 819e95b:	c1 fa 07             	sar    $0x7,%edx
 819e95e:	89 c8                	mov    %ecx,%eax
 819e960:	c1 f8 1f             	sar    $0x1f,%eax
 819e963:	89 d6                	mov    %edx,%esi
 819e965:	29 c6                	sub    %eax,%esi
 819e967:	89 f0                	mov    %esi,%eax
 819e969:	69 c0 d0 07 00 00    	imul   $0x7d0,%eax,%eax
 819e96f:	89 ca                	mov    %ecx,%edx
 819e971:	29 c2                	sub    %eax,%edx
 819e973:	89 d0                	mov    %edx,%eax
 819e975:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 819e979:	89 44 24 08          	mov    %eax,0x8(%esp)
 819e97d:	c7 44 24 04 60 8c ba 	movl   $0x8ba8c60,0x4(%esp)
 819e984:	08 
 819e985:	8b 45 08             	mov    0x8(%ebp),%eax
 819e988:	89 04 24             	mov    %eax,(%esp)
 819e98b:	e8 b0 fa ed ff       	call   807e440 <sprintf@plt>
 819e990:	83 c4 40             	add    $0x40,%esp
 819e993:	5b                   	pop    %ebx
 819e994:	5e                   	pop    %esi
 819e995:	5d                   	pop    %ebp
 819e996:	c3                   	ret

```

```c
// ARAD::GetQuarterOfYear @ 0x819e8d0

/* ARAD::GetQuarterOfYear(char*) */

void ARAD::GetQuarterOfYear(char *param_1)

{
  tm *ptVar1;
  time_t local_10;
  
  time(&local_10);
  ptVar1 = localtime(&local_10);
  sprintf(param_1,"%02d%d",(ptVar1->tm_year + 0x76c) % 2000,ptVar1->tm_mon / 3 + 1,ptVar1->tm_sec,
          ptVar1->tm_min,ptVar1->tm_hour,ptVar1->tm_mday,ptVar1->tm_mon,ptVar1->tm_year,
          ptVar1->tm_wday,ptVar1->tm_yday,ptVar1->tm_isdst,ptVar1->tm_gmtoff,ptVar1->tm_zone);
  return;
}

```

---

## arad_equipment_verify

```asm
// === 0819eaee ARAD::arad_equipment_verify  [0x0819eaee-0x819eaf7] ===
 819eaee:	55                   	push   %ebp
 819eaef:	89 e5                	mov    %esp,%ebp
 819eaf1:	b8 00 00 00 00       	mov    $0x0,%eax
 819eaf6:	5d                   	pop    %ebp
 819eaf7:	c3                   	ret

```

```c
// ARAD::arad_equipment_verify @ 0x819eaee

/* ARAD::arad_equipment_verify(Inven_Item*, CItem const*, ARAD_TYPE::INVENTORY_TYPE) */

undefined4 ARAD::arad_equipment_verify(void)

{
  return 0;
}

```

---

## arad_stackable_verify

```asm
// === 0819eae4 ARAD::arad_stackable_verify  [0x0819eae4-0x819eaed] ===
 819eae4:	55                   	push   %ebp
 819eae5:	89 e5                	mov    %esp,%ebp
 819eae7:	b8 b0 00 00 00       	mov    $0xb0,%eax
 819eaec:	5d                   	pop    %ebp
 819eaed:	c3                   	ret

```

```c
// ARAD::arad_stackable_verify @ 0x819eae4

/* ARAD::arad_stackable_verify(Inven_Item*, CItem const*) */

undefined4 ARAD::arad_stackable_verify(Inven_Item *param_1,CItem *param_2)

{
  return 0xb0;
}

```

---

## encryptAES

```asm
// === 0819e997 ARAD::encryptAES  [0x0819e997-0x819eae3] ===
 819e997:	55                   	push   %ebp
 819e998:	89 e5                	mov    %esp,%ebp
 819e99a:	81 ec c8 00 00 00    	sub    $0xc8,%esp
 819e9a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e9a3:	89 04 24             	mov    %eax,(%esp)
 819e9a6:	e8 05 fa ed ff       	call   807e3b0 <strlen@plt>
 819e9ab:	89 45 e8             	mov    %eax,-0x18(%ebp)
 819e9ae:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 819e9b5:	8b 45 08             	mov    0x8(%ebp),%eax
 819e9b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819e9bf:	00 
 819e9c0:	89 04 24             	mov    %eax,(%esp)
 819e9c3:	e8 4e 5a f1 ff       	call   80b4416 <_ZN7IMethod12GetBlockSizeEPj>
 819e9c8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819e9cb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 819e9cf:	78 30                	js     819ea01 <_ZN4ARAD10encryptAESEP9CRijndaelPcS2_+0x6a>
 819e9d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819e9d4:	89 c2                	mov    %eax,%edx
 819e9d6:	c1 fa 1f             	sar    $0x1f,%edx
 819e9d9:	f7 7d f0             	idivl  -0x10(%ebp)
 819e9dc:	89 d0                	mov    %edx,%eax
 819e9de:	85 c0                	test   %eax,%eax
 819e9e0:	74 17                	je     819e9f9 <_ZN4ARAD10encryptAESEP9CRijndaelPcS2_+0x62>
 819e9e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819e9e5:	89 c2                	mov    %eax,%edx
 819e9e7:	c1 fa 1f             	sar    $0x1f,%edx
 819e9ea:	f7 7d f0             	idivl  -0x10(%ebp)
 819e9ed:	83 c0 01             	add    $0x1,%eax
 819e9f0:	0f af 45 f0          	imul   -0x10(%ebp),%eax
 819e9f4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819e9f7:	eb 0e                	jmp    819ea07 <_ZN4ARAD10encryptAESEP9CRijndaelPcS2_+0x70>
 819e9f9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819e9fc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819e9ff:	eb 06                	jmp    819ea07 <_ZN4ARAD10encryptAESEP9CRijndaelPcS2_+0x70>
 819ea01:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819ea04:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819ea07:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 819ea0b:	78 21                	js     819ea2e <_ZN4ARAD10encryptAESEP9CRijndaelPcS2_+0x97>
 819ea0d:	8b 45 08             	mov    0x8(%ebp),%eax
 819ea10:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819ea17:	00 
 819ea18:	8b 55 e8             	mov    -0x18(%ebp),%edx
 819ea1b:	89 54 24 08          	mov    %edx,0x8(%esp)
 819ea1f:	8b 55 0c             	mov    0xc(%ebp),%edx
 819ea22:	89 54 24 04          	mov    %edx,0x4(%esp)
 819ea26:	89 04 24             	mov    %eax,(%esp)
 819ea29:	e8 78 5a f1 ff       	call   80b44a6 <_ZN7IMethod3PadEPciPj>
 819ea2e:	8b 45 08             	mov    0x8(%ebp),%eax
 819ea31:	8b 00                	mov    (%eax),%eax
 819ea33:	83 c0 0c             	add    $0xc,%eax
 819ea36:	8b 10                	mov    (%eax),%edx
 819ea38:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819ea3b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819ea3f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 819ea45:	89 44 24 08          	mov    %eax,0x8(%esp)
 819ea49:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ea4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ea50:	8b 45 08             	mov    0x8(%ebp),%eax
 819ea53:	89 04 24             	mov    %eax,(%esp)
 819ea56:	ff d2                	call   *%edx
 819ea58:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819ea5b:	81 7d f4 ff ff ff 6f 	cmpl   $0x6fffffff,-0xc(%ebp)
 819ea62:	74 4b                	je     819eaaf <_ZN4ARAD10encryptAESEP9CRijndaelPcS2_+0x118>
 819ea64:	c7 44 24 1c 67 8c ba 	movl   $0x8ba8c67,0x1c(%esp)
 819ea6b:	08 
 819ea6c:	c7 44 24 18 52 00 00 	movl   $0x52,0x18(%esp)
 819ea73:	00 
 819ea74:	c7 44 24 14 20 9a ba 	movl   $0x8ba9a20,0x14(%esp)
 819ea7b:	08 
 819ea7c:	c7 44 24 10 75 8c ba 	movl   $0x8ba8c75,0x10(%esp)
 819ea83:	08 
 819ea84:	c7 44 24 0c 52 00 00 	movl   $0x52,0xc(%esp)
 819ea8b:	00 
 819ea8c:	c7 44 24 08 20 9a ba 	movl   $0x8ba9a20,0x8(%esp)
 819ea93:	08 
 819ea94:	c7 44 24 04 82 8c ba 	movl   $0x8ba8c82,0x4(%esp)
 819ea9b:	08 
 819ea9c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 819eaa3:	e8 62 51 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819eaa8:	b8 00 00 00 00       	mov    $0x0,%eax
 819eaad:	eb 33                	jmp    819eae2 <_ZN4ARAD10encryptAESEP9CRijndaelPcS2_+0x14b>
 819eaaf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819eab2:	01 c0                	add    %eax,%eax
 819eab4:	83 c0 01             	add    $0x1,%eax
 819eab7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 819eaba:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 819eac0:	8b 55 10             	mov    0x10(%ebp),%edx
 819eac3:	89 54 24 08          	mov    %edx,0x8(%esp)
 819eac7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 819eaca:	89 54 24 04          	mov    %edx,0x4(%esp)
 819eace:	89 04 24             	mov    %eax,(%esp)
 819ead1:	e8 9d 9d f6 ff       	call   8108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>
 819ead6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819ead9:	03 45 10             	add    0x10(%ebp),%eax
 819eadc:	c6 00 00             	movb   $0x0,(%eax)
 819eadf:	8b 45 10             	mov    0x10(%ebp),%eax
 819eae2:	c9                   	leave
 819eae3:	c3                   	ret

```

```c
// ARAD::encryptAES @ 0x819e997

/* ARAD::encryptAES(CRijndael*, char*, char*) */

char * ARAD::encryptAES(CRijndael *param_1,char *param_2,char *param_3)

{
  uchar local_a0 [132];
  size_t local_1c;
  size_t local_18;
  int local_14;
  int local_10;
  
  local_1c = strlen(param_2);
  local_18 = 0;
  local_14 = IMethod::GetBlockSize((IMethod *)param_1,(uint *)0x0);
  if (local_14 < 0) {
    local_18 = local_1c;
  }
  else if ((int)local_1c % local_14 == 0) {
    local_18 = local_1c;
  }
  else {
    local_18 = ((int)local_1c / local_14 + 1) * local_14;
  }
  if (-1 < local_14) {
    IMethod::Pad((IMethod *)param_1,param_2,local_1c,(uint *)0x0);
  }
  local_10 = (**(code **)(*(int *)param_1 + 0xc))(param_1,param_2,local_a0,local_18);
  if (local_10 == 0x6fffffff) {
    local_1c = local_18 * 2 + 1;
    DNFFLib::Binary2Hex(local_a0,local_18,param_3);
    param_3[local_1c] = '\0';
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_OS.cpp","char* ARAD::encryptAES(CRijndael*, char*, char*)",0x52,
               "[%s][%d][%s]","char* ARAD::encryptAES(CRijndael*, char*, char*)",0x52,
               "Encrypt Error");
    param_3 = (char *)0x0;
  }
  return param_3;
}

```

---

## importCashShopPurcahseBonusItemList

```asm
// === 088b62ec ARAD::importCashShopPurcahseBonusItemList  [0x088b62ec-0x88b6670] ===
 88b62ec:	55                   	push   %ebp
 88b62ed:	89 e5                	mov    %esp,%ebp
 88b62ef:	56                   	push   %esi
 88b62f0:	53                   	push   %ebx
 88b62f1:	81 ec 90 00 00 00    	sub    $0x90,%esp
 88b62f7:	8b 45 08             	mov    0x8(%ebp),%eax
 88b62fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b62fe:	c7 04 24 a0 7a e0 08 	movl   $0x8e07aa0,(%esp)
 88b6305:	e8 1f 5a 00 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88b630a:	83 f0 01             	xor    $0x1,%eax
 88b630d:	84 c0                	test   %al,%al
 88b630f:	74 0a                	je     88b631b <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x2f>
 88b6311:	bb 0a 00 00 00       	mov    $0xa,%ebx
 88b6316:	e9 4a 03 00 00       	jmp    88b6665 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x379>
 88b631b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88b631e:	89 04 24             	mov    %eax,(%esp)
 88b6321:	e8 aa 02 e5 ff       	call   87065d0 <_ZNSsC1Ev>
 88b6326:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 88b632a:	eb 01                	jmp    88b632d <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x41>
 88b632c:	90                   	nop
 88b632d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88b6334:	00 
 88b6335:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88b6338:	89 04 24             	mov    %eax,(%esp)
 88b633b:	e8 1f 65 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88b6340:	83 f0 01             	xor    $0x1,%eax
 88b6343:	84 c0                	test   %al,%al
 88b6345:	0f 85 ec 02 00 00    	jne    88b6637 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x34b>
 88b634b:	c7 44 24 04 a1 7a e0 	movl   $0x8e07aa1,0x4(%esp)
 88b6352:	08 
 88b6353:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88b6356:	89 04 24             	mov    %eax,(%esp)
 88b6359:	e8 43 a6 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b635e:	84 c0                	test   %al,%al
 88b6360:	74 ca                	je     88b632c <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x40>
 88b6362:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 88b6369:	8d 45 a8             	lea    -0x58(%ebp),%eax
 88b636c:	89 04 24             	mov    %eax,(%esp)
 88b636f:	e8 9c 63 8f ff       	call   81ac710 <_ZN4ARAD13PurcahseBonusC1Ev>
 88b6374:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88b6377:	89 04 24             	mov    %eax,(%esp)
 88b637a:	e8 7b 03 00 00       	call   88b66fa <_ZNSt6vectorIN4ARAD13PurcahseBonusESaIS1_EEC1Ev>
 88b637f:	8d 45 bb             	lea    -0x45(%ebp),%eax
 88b6382:	89 04 24             	mov    %eax,(%esp)
 88b6385:	e8 f1 5f 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b638a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 88b638d:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 88b6391:	83 f0 01             	xor    $0x1,%eax
 88b6394:	84 c0                	test   %al,%al
 88b6396:	74 0f                	je     88b63a7 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0xbb>
 88b6398:	bb 1b 00 00 00       	mov    $0x1b,%ebx
 88b639d:	be 00 00 00 00       	mov    $0x0,%esi
 88b63a2:	e9 7c 02 00 00       	jmp    88b6623 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x337>
 88b63a7:	8d 45 bb             	lea    -0x45(%ebp),%eax
 88b63aa:	89 04 24             	mov    %eax,(%esp)
 88b63ad:	e8 c9 5f 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b63b2:	88 45 a8             	mov    %al,-0x58(%ebp)
 88b63b5:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 88b63b9:	83 f0 01             	xor    $0x1,%eax
 88b63bc:	84 c0                	test   %al,%al
 88b63be:	0f 85 2d 01 00 00    	jne    88b64f1 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x205>
 88b63c4:	8d 45 bb             	lea    -0x45(%ebp),%eax
 88b63c7:	89 04 24             	mov    %eax,(%esp)
 88b63ca:	e8 ac 5f 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b63cf:	89 45 ac             	mov    %eax,-0x54(%ebp)
 88b63d2:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 88b63d6:	83 f0 01             	xor    $0x1,%eax
 88b63d9:	84 c0                	test   %al,%al
 88b63db:	74 0f                	je     88b63ec <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x100>
 88b63dd:	bb 23 00 00 00       	mov    $0x23,%ebx
 88b63e2:	be 00 00 00 00       	mov    $0x0,%esi
 88b63e7:	e9 37 02 00 00       	jmp    88b6623 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x337>
 88b63ec:	8d 45 bb             	lea    -0x45(%ebp),%eax
 88b63ef:	89 04 24             	mov    %eax,(%esp)
 88b63f2:	e8 84 5f 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b63f7:	66 89 45 b0          	mov    %ax,-0x50(%ebp)
 88b63fb:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 88b63ff:	83 f0 01             	xor    $0x1,%eax
 88b6402:	84 c0                	test   %al,%al
 88b6404:	74 0f                	je     88b6415 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x129>
 88b6406:	bb 26 00 00 00       	mov    $0x26,%ebx
 88b640b:	be 00 00 00 00       	mov    $0x0,%esi
 88b6410:	e9 0e 02 00 00       	jmp    88b6623 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x337>
 88b6415:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88b6418:	8d 55 9c             	lea    -0x64(%ebp),%edx
 88b641b:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b641f:	89 04 24             	mov    %eax,(%esp)
 88b6422:	e8 0b 03 00 00       	call   88b6732 <_ZNSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE3endEv>
 88b6427:	83 ec 04             	sub    $0x4,%esp
 88b642a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 88b642d:	8d 55 9c             	lea    -0x64(%ebp),%edx
 88b6430:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b6434:	89 04 24             	mov    %eax,(%esp)
 88b6437:	e8 d2 02 00 00       	call   88b670e <_ZNSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE5beginEv>
 88b643c:	83 ec 04             	sub    $0x4,%esp
 88b643f:	8d 45 94             	lea    -0x6c(%ebp),%eax
 88b6442:	8d 55 a8             	lea    -0x58(%ebp),%edx
 88b6445:	89 54 24 0c          	mov    %edx,0xc(%esp)
 88b6449:	8b 55 c0             	mov    -0x40(%ebp),%edx
 88b644c:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b6450:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 88b6453:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b6457:	89 04 24             	mov    %eax,(%esp)
 88b645a:	e8 f9 02 00 00       	call   88b6758 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN4ARAD13PurcahseBonusESt6vectorIS3_SaIS3_EEEES3_ET_S9_S9_RKT0_>
 88b645f:	83 ec 04             	sub    $0x4,%esp
 88b6462:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b6465:	8d 55 9c             	lea    -0x64(%ebp),%edx
 88b6468:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b646c:	89 04 24             	mov    %eax,(%esp)
 88b646f:	e8 be 02 00 00       	call   88b6732 <_ZNSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE3endEv>
 88b6474:	83 ec 04             	sub    $0x4,%esp
 88b6477:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b647a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b647e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 88b6481:	89 04 24             	mov    %eax,(%esp)
 88b6484:	e8 23 03 00 00       	call   88b67ac <_ZN9__gnu_cxxneIPN4ARAD13PurcahseBonusESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 88b6489:	84 c0                	test   %al,%al
 88b648b:	74 4d                	je     88b64da <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x1ee>
 88b648d:	0f b6 45 a8          	movzbl -0x58(%ebp),%eax
 88b6491:	0f b6 d0             	movzbl %al,%edx
 88b6494:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 88b6497:	89 54 24 18          	mov    %edx,0x18(%esp)
 88b649b:	89 44 24 14          	mov    %eax,0x14(%esp)
 88b649f:	c7 44 24 10 ac 7a e0 	movl   $0x8e07aac,0x10(%esp)
 88b64a6:	08 
 88b64a7:	c7 44 24 0c 2b 00 00 	movl   $0x2b,0xc(%esp)
 88b64ae:	00 
 88b64af:	c7 44 24 08 40 7f e0 	movl   $0x8e07f40,0x8(%esp)
 88b64b6:	08 
 88b64b7:	c7 44 24 04 ec 7a e0 	movl   $0x8e07aec,0x4(%esp)
 88b64be:	08 
 88b64bf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 88b64c6:	e8 3f d7 21 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 88b64cb:	bb 2c 00 00 00       	mov    $0x2c,%ebx
 88b64d0:	be 00 00 00 00       	mov    $0x0,%esi
 88b64d5:	e9 49 01 00 00       	jmp    88b6623 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x337>
 88b64da:	8d 45 a8             	lea    -0x58(%ebp),%eax
 88b64dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b64e1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88b64e4:	89 04 24             	mov    %eax,(%esp)
 88b64e7:	e8 ec 02 00 00       	call   88b67d8 <_ZNSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE9push_backERKS1_>
 88b64ec:	e9 b6 fe ff ff       	jmp    88b63a7 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0xbb>
 88b64f1:	90                   	nop
 88b64f2:	8d 45 98             	lea    -0x68(%ebp),%eax
 88b64f5:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 88b64f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b64fc:	8b 55 0c             	mov    0xc(%ebp),%edx
 88b64ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b6503:	89 04 24             	mov    %eax,(%esp)
 88b6506:	e8 3d 62 8f ff       	call   81ac748 <_ZNSt3mapIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 88b650b:	83 ec 04             	sub    $0x4,%esp
 88b650e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88b6511:	8b 55 0c             	mov    0xc(%ebp),%edx
 88b6514:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b6518:	89 04 24             	mov    %eax,(%esp)
 88b651b:	e8 62 62 8f ff       	call   81ac782 <_ZNSt3mapIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b6520:	83 ec 04             	sub    $0x4,%esp
 88b6523:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88b6526:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b652a:	8d 45 98             	lea    -0x68(%ebp),%eax
 88b652d:	89 04 24             	mov    %eax,(%esp)
 88b6530:	e8 17 03 00 00       	call   88b684c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIN4ARAD13PurcahseBonusESaIS4_EEEEneERKS8_>
 88b6535:	84 c0                	test   %al,%al
 88b6537:	74 42                	je     88b657b <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x28f>
 88b6539:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 88b653c:	89 44 24 14          	mov    %eax,0x14(%esp)
 88b6540:	c7 44 24 10 14 7b e0 	movl   $0x8e07b14,0x10(%esp)
 88b6547:	08 
 88b6548:	c7 44 24 0c 36 00 00 	movl   $0x36,0xc(%esp)
 88b654f:	00 
 88b6550:	c7 44 24 08 40 7f e0 	movl   $0x8e07f40,0x8(%esp)
 88b6557:	08 
 88b6558:	c7 44 24 04 ec 7a e0 	movl   $0x8e07aec,0x4(%esp)
 88b655f:	08 
 88b6560:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 88b6567:	e8 9e d6 21 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 88b656c:	bb 37 00 00 00       	mov    $0x37,%ebx
 88b6571:	be 00 00 00 00       	mov    $0x0,%esi
 88b6576:	e9 a8 00 00 00       	jmp    88b6623 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x337>
 88b657b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88b657e:	8d 55 9c             	lea    -0x64(%ebp),%edx
 88b6581:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b6585:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 88b6588:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b658c:	89 04 24             	mov    %eax,(%esp)
 88b658f:	e8 cc 02 00 00       	call   88b6860 <_ZSt9make_pairIRiRSt6vectorIN4ARAD13PurcahseBonusESaIS3_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS8_IT0_E6__typeEEOS9_OSC_>
 88b6594:	83 ec 04             	sub    $0x4,%esp
 88b6597:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88b659a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b659e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88b65a1:	89 04 24             	mov    %eax,(%esp)
 88b65a4:	e8 fb 02 00 00       	call   88b68a4 <_ZNSt4pairIKiSt6vectorIN4ARAD13PurcahseBonusESaIS3_EEEC1IiS5_EEOS_IT_T0_E>
 88b65a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88b65ac:	8d 55 d8             	lea    -0x28(%ebp),%edx
 88b65af:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b65b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 88b65b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b65ba:	89 04 24             	mov    %eax,(%esp)
 88b65bd:	e8 1c 03 00 00       	call   88b68de <_ZNSt3mapIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EESt4lessIiESaISt4pairIKiS4_EEE6insertERKS9_>
 88b65c2:	83 ec 04             	sub    $0x4,%esp
 88b65c5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88b65c8:	89 04 24             	mov    %eax,(%esp)
 88b65cb:	e8 de 61 c9 ff       	call   854c7ae <_ZNSt4pairIKiSt6vectorIN4ARAD13PurcahseBonusESaIS3_EEED1Ev>
 88b65d0:	eb 2a                	jmp    88b65fc <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x310>
 88b65d2:	89 d3                	mov    %edx,%ebx
 88b65d4:	89 c6                	mov    %eax,%esi
 88b65d6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88b65d9:	89 04 24             	mov    %eax,(%esp)
 88b65dc:	e8 cd 61 c9 ff       	call   854c7ae <_ZNSt4pairIKiSt6vectorIN4ARAD13PurcahseBonusESaIS3_EEED1Ev>
 88b65e1:	89 f0                	mov    %esi,%eax
 88b65e3:	89 da                	mov    %ebx,%edx
 88b65e5:	eb 00                	jmp    88b65e7 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x2fb>
 88b65e7:	89 d3                	mov    %edx,%ebx
 88b65e9:	89 c6                	mov    %eax,%esi
 88b65eb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88b65ee:	89 04 24             	mov    %eax,(%esp)
 88b65f1:	e8 ee 00 00 00       	call   88b66e4 <_ZNSt4pairIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EEED1Ev>
 88b65f6:	89 f0                	mov    %esi,%eax
 88b65f8:	89 da                	mov    %ebx,%edx
 88b65fa:	eb 12                	jmp    88b660e <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x322>
 88b65fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88b65ff:	89 04 24             	mov    %eax,(%esp)
 88b6602:	e8 dd 00 00 00       	call   88b66e4 <_ZNSt4pairIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EEED1Ev>
 88b6607:	be 01 00 00 00       	mov    $0x1,%esi
 88b660c:	eb 15                	jmp    88b6623 <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x337>
 88b660e:	89 d3                	mov    %edx,%ebx
 88b6610:	89 c6                	mov    %eax,%esi
 88b6612:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88b6615:	89 04 24             	mov    %eax,(%esp)
 88b6618:	e8 f9 61 c9 ff       	call   854c816 <_ZNSt6vectorIN4ARAD13PurcahseBonusESaIS1_EED1Ev>
 88b661d:	89 f0                	mov    %esi,%eax
 88b661f:	89 da                	mov    %ebx,%edx
 88b6621:	eb 1c                	jmp    88b663f <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x353>
 88b6623:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88b6626:	89 04 24             	mov    %eax,(%esp)
 88b6629:	e8 e8 61 c9 ff       	call   854c816 <_ZNSt6vectorIN4ARAD13PurcahseBonusESaIS1_EED1Ev>
 88b662e:	85 f6                	test   %esi,%esi
 88b6630:	74 28                	je     88b665a <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x36e>
 88b6632:	e9 f6 fc ff ff       	jmp    88b632d <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x41>
 88b6637:	90                   	nop
 88b6638:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b663d:	eb 1b                	jmp    88b665a <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x36e>
 88b663f:	89 d3                	mov    %edx,%ebx
 88b6641:	89 c6                	mov    %eax,%esi
 88b6643:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88b6646:	89 04 24             	mov    %eax,(%esp)
 88b6649:	e8 92 15 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b664e:	89 f0                	mov    %esi,%eax
 88b6650:	89 da                	mov    %ebx,%edx
 88b6652:	89 04 24             	mov    %eax,(%esp)
 88b6655:	e8 f6 d0 22 00       	call   8ae3750 <_Unwind_Resume>
 88b665a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88b665d:	89 04 24             	mov    %eax,(%esp)
 88b6660:	e8 7b 15 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b6665:	89 d8                	mov    %ebx,%eax
 88b6667:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88b666a:	83 c4 00             	add    $0x0,%esp
 88b666d:	5b                   	pop    %ebx
 88b666e:	5e                   	pop    %esi
 88b666f:	5d                   	pop    %ebp
 88b6670:	c3                   	ret

```

```c
// ARAD::importCashShopPurcahseBonusItemList @ 0x88b62ec

/* ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus,
   std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const,
   std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&) */

undefined4 ARAD::importCashShopPurcahseBonusItemList(char *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  int *piVar3;
  int local_a4 [2];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [12];
  byte local_5c [4];
  undefined4 local_58;
  undefined2 local_54;
  int local_50;
  char local_49;
  string local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [8];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  
  piVar3 = (int *)&stack0xffffff64;
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string(local_48);
    local_49 = '\0';
    do {
      do {
        piVar3[1] = 1;
        *piVar3 = (int)local_48;
                    /* try { // try from 088b633b to 088b637e has its CatchHandler @ 088b663f */
        piVar3[-1] = 0x88b6340;
        cVar1 = ScanType((string *)*piVar3,SUB41(piVar3[1],0));
        if (cVar1 != '\x01') {
          unaff_EBX = 0;
          goto LAB_088b665a;
        }
        piVar3[1] = (int)"[bonus]";
        *piVar3 = (int)local_48;
        piVar3[-1] = 0x88b635e;
        bVar2 = std::operator==((string *)*piVar3,(char *)piVar3[1]);
      } while (!bVar2);
      local_50 = 0;
      *piVar3 = (int)local_5c;
      piVar3[-1] = 0x88b6374;
      PurcahseBonus::PurcahseBonus((PurcahseBonus *)*piVar3);
      *piVar3 = (int)local_68;
      piVar3[-1] = 0x88b637f;
      std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::vector
                ((vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>> *)*piVar3);
      *piVar3 = (int)&local_49;
                    /* try { // try from 088b6385 to 088b6593 has its CatchHandler @ 088b660e */
      piVar3[-1] = 0x88b638a;
      local_50 = ScanInt((bool *)*piVar3);
      if (local_49 == '\x01') {
        while( true ) {
          *piVar3 = (int)&local_49;
          piVar3[-1] = 0x88b63b2;
          local_5c[0] = ScanInt((bool *)*piVar3);
          if (local_49 != '\x01') break;
          *piVar3 = (int)&local_49;
          piVar3[-1] = 0x88b63cf;
          local_58 = ScanInt((bool *)*piVar3);
          if (local_49 != '\x01') {
            unaff_EBX = 0x23;
            bVar2 = false;
            goto LAB_088b6623;
          }
          *piVar3 = (int)&local_49;
          piVar3[-1] = 0x88b63f7;
          local_54 = ScanInt((bool *)*piVar3);
          if (local_49 != '\x01') {
            unaff_EBX = 0x26;
            bVar2 = false;
            goto LAB_088b6623;
          }
          piVar3[1] = (int)local_68;
          *piVar3 = (int)&local_44;
          piVar3[-1] = 0x88b6427;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
          piVar3[1] = (int)local_68;
          *piVar3 = (int)&local_40;
          piVar3[-1] = 0x88b643c;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::begin();
          piVar3[3] = (int)local_5c;
          piVar3[2] = local_44;
          piVar3[1] = local_40;
          *piVar3 = (int)local_70;
          piVar3[-1] = 0x88b645f;
          std::
          find<__gnu_cxx::__normal_iterator<ARAD::PurcahseBonus*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>,ARAD::PurcahseBonus>
                    ();
          *piVar3 = (int)local_68;
          piVar3[-1] = (int)local_3c;
          piVar3[-2] = 0x88b6474;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
          *piVar3 = (int)local_3c;
          piVar3[-1] = (int)local_70;
          piVar3[-2] = 0x88b6489;
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)piVar3[-1],(__normal_iterator *)*piVar3);
          if (bVar2) {
            piVar3[5] = (uint)local_5c[0];
            piVar3[4] = local_50;
            piVar3[3] = (int)"[PURCAHSE BONUS] invalid purcahse count (goods:%u, count:%d)";
            piVar3[2] = 0x2b;
            piVar3[1] = (int)"importCashShopPurcahseBonusItemList";
            *piVar3 = (int)"../localjapan/RDARScriptCeraShop.cpp";
            piVar3[-1] = 1;
            piVar3[-2] = 0x88b64cb;
            LogManager::logFormat
                      (piVar3[-1],(char *)*piVar3,(char *)piVar3[1],piVar3[2],(char *)piVar3[3]);
            unaff_EBX = 0x2c;
            bVar2 = false;
            piVar3 = piVar3 + -1;
            goto LAB_088b6623;
          }
          *piVar3 = (int)local_5c;
          piVar3[-1] = (int)local_68;
          piVar3[-2] = 0x88b64ec;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::push_back
                    ((vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>> *)piVar3[-1],
                     (PurcahseBonus *)*piVar3);
          piVar3 = piVar3 + -1;
        }
        piVar3[2] = (int)&local_50;
        piVar3[1] = (int)param_2;
        *piVar3 = (int)local_6c;
        piVar3[-1] = 0x88b650b;
        std::
        map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
        ::find((int *)*piVar3);
        piVar3[1] = (int)param_2;
        *piVar3 = (int)local_38;
        piVar3[-1] = 0x88b6520;
        std::
        map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
        ::end((map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
               *)*piVar3);
        piVar3[1] = (int)local_38;
        *piVar3 = (int)local_6c;
        piVar3[-1] = 0x88b6535;
        cVar1 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
                              *)*piVar3,(_Rb_tree_iterator *)piVar3[1]);
        if (cVar1 == '\0') {
          piVar3[2] = (int)local_68;
          piVar3[1] = (int)&local_50;
          *piVar3 = (int)local_1c;
          piVar3[-1] = 0x88b6594;
          std::make_pair<int&,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>&>
                    ((int *)*piVar3,(vector *)piVar3[1]);
          piVar3[1] = (int)local_1c;
          *piVar3 = (int)local_2c;
                    /* try { // try from 088b65a4 to 088b65a8 has its CatchHandler @ 088b65e7 */
          piVar3[-1] = 0x88b65a9;
          std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
          ::pair<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                    ((pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                      *)*piVar3,(pair *)piVar3[1]);
          piVar3[2] = (int)local_2c;
          piVar3[1] = (int)param_2;
          *piVar3 = (int)local_34;
                    /* try { // try from 088b65bd to 088b65c1 has its CatchHandler @ 088b65d2 */
          piVar3[-1] = 0x88b65c2;
          std::
          map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
          ::insert((pair *)*piVar3);
          *piVar3 = (int)local_2c;
                    /* try { // try from 088b65cb to 088b65cf has its CatchHandler @ 088b65e7 */
          piVar3[-1] = 0x88b65d0;
          std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
          ::~pair((pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                   *)*piVar3);
          *piVar3 = (int)local_1c;
                    /* try { // try from 088b6602 to 088b6606 has its CatchHandler @ 088b660e */
          piVar3[-1] = 0x88b6607;
          std::pair<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>::~pair
                    ((pair<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                      *)*piVar3);
          bVar2 = true;
        }
        else {
          piVar3[5] = local_50;
          piVar3[4] = (int)"[PURCAHSE BONUS] duplicate purcahse item (goods:%d)";
          piVar3[3] = 0x36;
          piVar3[2] = (int)"importCashShopPurcahseBonusItemList";
          piVar3[1] = (int)"../localjapan/RDARScriptCeraShop.cpp";
          *piVar3 = 1;
          piVar3[-1] = 0x88b656c;
          LogManager::logFormat
                    (*piVar3,(char *)piVar3[1],(char *)piVar3[2],piVar3[3],(char *)piVar3[4]);
          unaff_EBX = 0x37;
          bVar2 = false;
        }
      }
      else {
        unaff_EBX = 0x1b;
        bVar2 = false;
      }
LAB_088b6623:
      *piVar3 = (int)local_68;
                    /* try { // try from 088b6629 to 088b662d has its CatchHandler @ 088b663f */
      piVar3[-1] = 0x88b662e;
      std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::~vector
                ((vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>> *)*piVar3);
    } while (bVar2);
LAB_088b665a:
    *piVar3 = (int)local_48;
    piVar3[-1] = 0x88b6665;
    std::string::~string((string *)*piVar3);
  }
  else {
    unaff_EBX = 10;
  }
  return unaff_EBX;
}

```

---

## inet_a2n

```asm
// === 08197b71 ARAD::inet_a2n  [0x08197b71-0x8197ba3] ===
 8197b71:	55                   	push   %ebp
 8197b72:	89 e5                	mov    %esp,%ebp
 8197b74:	83 ec 28             	sub    $0x28,%esp
 8197b77:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8197b7b:	75 07                	jne    8197b84 <_ZN4ARAD8inet_a2nEPKc+0x13>
 8197b7d:	b8 00 00 00 00       	mov    $0x0,%eax
 8197b82:	eb 1e                	jmp    8197ba2 <_ZN4ARAD8inet_a2nEPKc+0x31>
 8197b84:	8b 45 08             	mov    0x8(%ebp),%eax
 8197b87:	89 04 24             	mov    %eax,(%esp)
 8197b8a:	e8 a1 69 ee ff       	call   807e530 <inet_addr@plt>
 8197b8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8197b92:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8197b96:	75 07                	jne    8197b9f <_ZN4ARAD8inet_a2nEPKc+0x2e>
 8197b98:	b8 00 00 00 00       	mov    $0x0,%eax
 8197b9d:	eb 03                	jmp    8197ba2 <_ZN4ARAD8inet_a2nEPKc+0x31>
 8197b9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197ba2:	c9                   	leave
 8197ba3:	c3                   	ret

```

```c
// ARAD::inet_a2n @ 0x8197b71

/* ARAD::inet_a2n(char const*) */

in_addr_t ARAD::inet_a2n(char *param_1)

{
  in_addr_t iVar1;
  
  if (param_1 == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = inet_addr(param_1);
    if (iVar1 == 0xffffffff) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

```

---

## inet_n2a

```asm
// === 08197a4d ARAD::inet_n2a  [0x08197a4d-0x8197b70] ===
 8197a4d:	55                   	push   %ebp
 8197a4e:	89 e5                	mov    %esp,%ebp
 8197a50:	56                   	push   %esi
 8197a51:	53                   	push   %ebx
 8197a52:	83 ec 40             	sub    $0x40,%esp
 8197a55:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8197a58:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8197a5f:	00 
 8197a60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8197a67:	00 
 8197a68:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8197a6b:	89 04 24             	mov    %eax,(%esp)
 8197a6e:	e8 4d 62 ee ff       	call   807dcc0 <memset@plt>
 8197a73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197a76:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8197a79:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8197a80:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8197a87:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8197a8e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8197a95:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8197a98:	89 04 24             	mov    %eax,(%esp)
 8197a9b:	e8 20 63 ee ff       	call   807ddc0 <inet_ntoa@plt>
 8197aa0:	85 c0                	test   %eax,%eax
 8197aa2:	0f 94 c0             	sete   %al
 8197aa5:	84 c0                	test   %al,%al
 8197aa7:	74 4e                	je     8197af7 <_ZN4ARAD8inet_n2aE7in_addr+0xaa>
 8197aa9:	89 de                	mov    %ebx,%esi
 8197aab:	8d 45 f6             	lea    -0xa(%ebp),%eax
 8197aae:	89 04 24             	mov    %eax,(%esp)
 8197ab1:	e8 1a 86 54 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8197ab6:	8d 45 f6             	lea    -0xa(%ebp),%eax
 8197ab9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8197abd:	c7 44 24 04 ca cb b9 	movl   $0x8b9cbca,0x4(%esp)
 8197ac4:	08 
 8197ac5:	89 34 24             	mov    %esi,(%esp)
 8197ac8:	e8 63 fb 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8197acd:	eb 1b                	jmp    8197aea <_ZN4ARAD8inet_n2aE7in_addr+0x9d>
 8197acf:	89 d3                	mov    %edx,%ebx
 8197ad1:	89 c6                	mov    %eax,%esi
 8197ad3:	8d 45 f6             	lea    -0xa(%ebp),%eax
 8197ad6:	89 04 24             	mov    %eax,(%esp)
 8197ad9:	e8 12 86 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8197ade:	89 f0                	mov    %esi,%eax
 8197ae0:	89 da                	mov    %ebx,%edx
 8197ae2:	89 04 24             	mov    %eax,(%esp)
 8197ae5:	e8 66 bc 94 00       	call   8ae3750 <_Unwind_Resume>
 8197aea:	8d 45 f6             	lea    -0xa(%ebp),%eax
 8197aed:	89 04 24             	mov    %eax,(%esp)
 8197af0:	e8 fb 85 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8197af5:	eb 6d                	jmp    8197b64 <_ZN4ARAD8inet_n2aE7in_addr+0x117>
 8197af7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8197afa:	89 04 24             	mov    %eax,(%esp)
 8197afd:	e8 be 62 ee ff       	call   807ddc0 <inet_ntoa@plt>
 8197b02:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8197b09:	00 
 8197b0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197b0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8197b11:	89 04 24             	mov    %eax,(%esp)
 8197b14:	e8 b7 5d ee ff       	call   807d8d0 <strncpy@plt>
 8197b19:	89 de                	mov    %ebx,%esi
 8197b1b:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8197b1e:	89 04 24             	mov    %eax,(%esp)
 8197b21:	e8 aa 85 54 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8197b26:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8197b29:	89 44 24 08          	mov    %eax,0x8(%esp)
 8197b2d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8197b30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197b34:	89 34 24             	mov    %esi,(%esp)
 8197b37:	e8 f4 fa 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8197b3c:	eb 1b                	jmp    8197b59 <_ZN4ARAD8inet_n2aE7in_addr+0x10c>
 8197b3e:	89 d3                	mov    %edx,%ebx
 8197b40:	89 c6                	mov    %eax,%esi
 8197b42:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8197b45:	89 04 24             	mov    %eax,(%esp)
 8197b48:	e8 a3 85 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8197b4d:	89 f0                	mov    %esi,%eax
 8197b4f:	89 da                	mov    %ebx,%edx
 8197b51:	89 04 24             	mov    %eax,(%esp)
 8197b54:	e8 f7 bb 94 00       	call   8ae3750 <_Unwind_Resume>
 8197b59:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8197b5c:	89 04 24             	mov    %eax,(%esp)
 8197b5f:	e8 8c 85 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8197b64:	89 d8                	mov    %ebx,%eax
 8197b66:	89 d8                	mov    %ebx,%eax
 8197b68:	83 c4 40             	add    $0x40,%esp
 8197b6b:	5b                   	pop    %ebx
 8197b6c:	5e                   	pop    %esi
 8197b6d:	5d                   	pop    %ebp
 8197b6e:	c2 04 00             	ret    $0x4

```

```c
// ARAD::inet_n2a @ 0x8197a4d

/* ARAD::inet_n2a(in_addr) */

ARAD * __thiscall ARAD::inet_n2a(ARAD *this,in_addr param_1)

{
  char *pcVar1;
  char local_30 [20];
  in_addr local_1c;
  allocator<char> local_e;
  allocator<char> local_d;
  
  memset(local_30 + 0x10,0,0x10);
  local_1c.s_addr = param_1.s_addr;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  pcVar1 = inet_ntoa(param_1);
  if (pcVar1 == (char *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08197ac8 to 08197acc has its CatchHandler @ 08197acf */
    std::string::string((string *)this,"",(allocator *)&local_e);
    std::allocator<char>::~allocator(&local_e);
  }
  else {
    pcVar1 = inet_ntoa(local_1c);
    strncpy(local_30,pcVar1,0x10);
    std::allocator<char>::allocator();
                    /* try { // try from 08197b37 to 08197b3b has its CatchHandler @ 08197b3e */
    std::string::string((string *)this,local_30,(allocator *)&local_d);
    std::allocator<char>::~allocator(&local_d);
  }
  return this;
}

```

---

## limitValue

```asm
// === 081978b2 ARAD::limitValue  [0x081978b2-0x81978dc] ===
 81978b2:	55                   	push   %ebp
 81978b3:	89 e5                	mov    %esp,%ebp
 81978b5:	83 ec 18             	sub    $0x18,%esp
 81978b8:	8d 45 0c             	lea    0xc(%ebp),%eax
 81978bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81978bf:	8d 45 08             	lea    0x8(%ebp),%eax
 81978c2:	89 04 24             	mov    %eax,(%esp)
 81978c5:	e8 4e 69 ef ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 81978ca:	8d 55 10             	lea    0x10(%ebp),%edx
 81978cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81978d1:	89 04 24             	mov    %eax,(%esp)
 81978d4:	e8 35 80 f4 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 81978d9:	8b 00                	mov    (%eax),%eax
 81978db:	c9                   	leave
 81978dc:	c3                   	ret

```

```c
// ARAD::limitValue @ 0x81978b2

/* ARAD::limitValue(int, int, int) */

int ARAD::limitValue(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = std::max<int>(&param_1,&param_2);
  piVar1 = std::min<int>(piVar1,&param_3);
  return *piVar1;
}

```

---

## notifyOpenMessageDialog

```asm
// === 081978dd ARAD::notifyOpenMessageDialog  [0x081978dd-0x81979bf] ===
 81978dd:	55                   	push   %ebp
 81978de:	89 e5                	mov    %esp,%ebp
 81978e0:	56                   	push   %esi
 81978e1:	53                   	push   %ebx
 81978e2:	83 ec 20             	sub    $0x20,%esp
 81978e5:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81978e9:	75 0a                	jne    81978f5 <_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage+0x18>
 81978eb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81978f0:	e9 c2 00 00 00       	jmp    81979b7 <_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage+0xda>
 81978f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81978f8:	89 04 24             	mov    %eax,(%esp)
 81978fb:	e8 4c 64 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8197900:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8197907:	e8 92 43 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 819790c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819790f:	c7 44 24 08 1a 02 00 	movl   $0x21a,0x8(%esp)
 8197916:	00 
 8197917:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819791e:	00 
 819791f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197922:	89 04 24             	mov    %eax,(%esp)
 8197925:	e8 d2 3f f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819792a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819792d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197931:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197934:	89 04 24             	mov    %eax,(%esp)
 8197937:	e8 00 40 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819793c:	8b 45 10             	mov    0x10(%ebp),%eax
 819793f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197943:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197946:	89 04 24             	mov    %eax,(%esp)
 8197949:	e8 ee 3f f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819794e:	8b 45 14             	mov    0x14(%ebp),%eax
 8197951:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8197958:	00 
 8197959:	89 44 24 04          	mov    %eax,0x4(%esp)
 819795d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197960:	89 04 24             	mov    %eax,(%esp)
 8197963:	e8 a0 65 f8 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8197968:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819796f:	00 
 8197970:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197973:	89 04 24             	mov    %eax,(%esp)
 8197976:	e8 dd 3f f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 819797b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819797e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197982:	8b 45 08             	mov    0x8(%ebp),%eax
 8197985:	89 04 24             	mov    %eax,(%esp)
 8197988:	e8 2d 0c 4b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 819798d:	89 c3                	mov    %eax,%ebx
 819798f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197992:	89 04 24             	mov    %eax,(%esp)
 8197995:	e8 e6 64 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819799a:	eb 1b                	jmp    81979b7 <_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage+0xda>
 819799c:	89 d3                	mov    %edx,%ebx
 819799e:	89 c6                	mov    %eax,%esi
 81979a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81979a3:	89 04 24             	mov    %eax,(%esp)
 81979a6:	e8 d5 64 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81979ab:	89 f0                	mov    %esi,%eax
 81979ad:	89 da                	mov    %ebx,%edx
 81979af:	89 04 24             	mov    %eax,(%esp)
 81979b2:	e8 99 bd 94 00       	call   8ae3750 <_Unwind_Resume>
 81979b7:	89 d8                	mov    %ebx,%eax
 81979b9:	83 c4 20             	add    $0x20,%esp
 81979bc:	5b                   	pop    %ebx
 81979bd:	5e                   	pop    %esi
 81979be:	5d                   	pop    %ebp
 81979bf:	c3                   	ret

```

```c
// ARAD::notifyOpenMessageDialog @ 0x81978dd

/* ARAD::notifyOpenMessageDialog(CUser*, int, int, AradServerStateMessage const&) */

undefined4
ARAD::notifyOpenMessageDialog
          (CUser *param_1,int param_2,int param_3,AradServerStateMessage *param_4)

{
  undefined4 uVar1;
  PacketGuard local_1c [12];
  undefined4 local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    PacketGuard::PacketGuard(local_1c);
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 08197925 to 0819798c has its CatchHandler @ 0819799c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x21a);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_3);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)param_4,0xc);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    uVar1 = CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return uVar1;
}

```

---

## notifySystemMessage

```asm
// === 08197d00 ARAD::notifySystemMessage  [0x08197d00-0x8197db4] ===
 8197d00:	55                   	push   %ebp
 8197d01:	89 e5                	mov    %esp,%ebp
 8197d03:	56                   	push   %esi
 8197d04:	53                   	push   %ebx
 8197d05:	83 ec 30             	sub    $0x30,%esp
 8197d08:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8197d0c:	0f 84 98 00 00 00    	je     8197daa <_ZN4ARAD19notifySystemMessageEP5CUserPc+0xaa>
 8197d12:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8197d16:	0f 84 91 00 00 00    	je     8197dad <_ZN4ARAD19notifySystemMessageEP5CUserPc+0xad>
 8197d1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197d1f:	89 04 24             	mov    %eax,(%esp)
 8197d22:	e8 89 66 ee ff       	call   807e3b0 <strlen@plt>
 8197d27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8197d2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197d2d:	89 04 24             	mov    %eax,(%esp)
 8197d30:	e8 17 60 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8197d35:	e8 6d 26 f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8197d3a:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 8197d41:	00 
 8197d42:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8197d49:	00 
 8197d4a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8197d4d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8197d51:	8b 55 0c             	mov    0xc(%ebp),%edx
 8197d54:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8197d58:	8b 55 08             	mov    0x8(%ebp),%edx
 8197d5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8197d5f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8197d62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8197d66:	89 04 24             	mov    %eax,(%esp)
 8197d69:	e8 de 17 53 00       	call   86c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>
 8197d6e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197d71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197d75:	8b 45 08             	mov    0x8(%ebp),%eax
 8197d78:	89 04 24             	mov    %eax,(%esp)
 8197d7b:	e8 3a 08 4b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8197d80:	eb 1b                	jmp    8197d9d <_ZN4ARAD19notifySystemMessageEP5CUserPc+0x9d>
 8197d82:	89 d3                	mov    %edx,%ebx
 8197d84:	89 c6                	mov    %eax,%esi
 8197d86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197d89:	89 04 24             	mov    %eax,(%esp)
 8197d8c:	e8 ef 60 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8197d91:	89 f0                	mov    %esi,%eax
 8197d93:	89 da                	mov    %ebx,%edx
 8197d95:	89 04 24             	mov    %eax,(%esp)
 8197d98:	e8 b3 b9 94 00       	call   8ae3750 <_Unwind_Resume>
 8197d9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8197da0:	89 04 24             	mov    %eax,(%esp)
 8197da3:	e8 d8 60 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8197da8:	eb 04                	jmp    8197dae <_ZN4ARAD19notifySystemMessageEP5CUserPc+0xae>
 8197daa:	90                   	nop
 8197dab:	eb 01                	jmp    8197dae <_ZN4ARAD19notifySystemMessageEP5CUserPc+0xae>
 8197dad:	90                   	nop
 8197dae:	83 c4 30             	add    $0x30,%esp
 8197db1:	5b                   	pop    %ebx
 8197db2:	5e                   	pop    %esi
 8197db3:	5d                   	pop    %ebp
 8197db4:	c3                   	ret

```

```c
// ARAD::notifySystemMessage @ 0x8197d00

/* ARAD::notifySystemMessage(CUser*, char*) */

void ARAD::notifySystemMessage(CUser *param_1,char *param_2)

{
  GameWorld *pGVar1;
  PacketGuard local_1c [12];
  size_t local_10;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (char *)0x0)) {
    local_10 = strlen(param_2);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08197d35 to 08197d7f has its CatchHandler @ 08197d82 */
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::make_packet_chat_msg(pGVar1,local_1c,param_1,param_2,local_10,0,0xc);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

---

## pvp_grade_check

```asm
// === 0819ebde ARAD::pvp_grade_check  [0x0819ebde-0x819ed83] ===
 819ebde:	55                   	push   %ebp
 819ebdf:	89 e5                	mov    %esp,%ebp
 819ebe1:	57                   	push   %edi
 819ebe2:	56                   	push   %esi
 819ebe3:	53                   	push   %ebx
 819ebe4:	83 ec 5c             	sub    $0x5c,%esp
 819ebe7:	e8 bb b7 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819ebec:	89 04 24             	mov    %eax,(%esp)
 819ebef:	e8 2c 7f f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 819ebf4:	83 f8 08             	cmp    $0x8,%eax
 819ebf7:	74 12                	je     819ec0b <_ZN4ARAD15pvp_grade_checkEP5CUser+0x2d>
 819ebf9:	e8 a9 b7 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819ebfe:	89 04 24             	mov    %eax,(%esp)
 819ec01:	e8 1a 7f f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 819ec06:	83 f8 0d             	cmp    $0xd,%eax
 819ec09:	75 07                	jne    819ec12 <_ZN4ARAD15pvp_grade_checkEP5CUser+0x34>
 819ec0b:	b8 01 00 00 00       	mov    $0x1,%eax
 819ec10:	eb 05                	jmp    819ec17 <_ZN4ARAD15pvp_grade_checkEP5CUser+0x39>
 819ec12:	b8 00 00 00 00       	mov    $0x0,%eax
 819ec17:	84 c0                	test   %al,%al
 819ec19:	0f 84 58 01 00 00    	je     819ed77 <_ZN4ARAD15pvp_grade_checkEP5CUser+0x199>
 819ec1f:	8b 45 08             	mov    0x8(%ebp),%eax
 819ec22:	89 04 24             	mov    %eax,(%esp)
 819ec25:	e8 8e b6 f3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 819ec2a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 819ec2d:	e8 69 d5 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819ec32:	89 04 24             	mov    %eax,(%esp)
 819ec35:	e8 f4 01 00 00       	call   819ee2e <_ZN12CDataManager21GetMinLevelPvPChannelEv>
 819ec3a:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 819ec3d:	7f 12                	jg     819ec51 <_ZN4ARAD15pvp_grade_checkEP5CUser+0x73>
 819ec3f:	e8 57 d5 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819ec44:	89 04 24             	mov    %eax,(%esp)
 819ec47:	e8 f0 01 00 00       	call   819ee3c <_ZN12CDataManager21GetMaxLevelPvPChannelEv>
 819ec4c:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 819ec4f:	7d 07                	jge    819ec58 <_ZN4ARAD15pvp_grade_checkEP5CUser+0x7a>
 819ec51:	b8 01 00 00 00       	mov    $0x1,%eax
 819ec56:	eb 05                	jmp    819ec5d <_ZN4ARAD15pvp_grade_checkEP5CUser+0x7f>
 819ec58:	b8 00 00 00 00       	mov    $0x0,%eax
 819ec5d:	84 c0                	test   %al,%al
 819ec5f:	0f 84 86 00 00 00    	je     819eceb <_ZN4ARAD15pvp_grade_checkEP5CUser+0x10d>
 819ec65:	e8 31 d5 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819ec6a:	89 04 24             	mov    %eax,(%esp)
 819ec6d:	e8 ca 01 00 00       	call   819ee3c <_ZN12CDataManager21GetMaxLevelPvPChannelEv>
 819ec72:	89 c7                	mov    %eax,%edi
 819ec74:	e8 22 d5 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819ec79:	89 04 24             	mov    %eax,(%esp)
 819ec7c:	e8 ad 01 00 00       	call   819ee2e <_ZN12CDataManager21GetMinLevelPvPChannelEv>
 819ec81:	89 c6                	mov    %eax,%esi
 819ec83:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 819ec8a:	ff 
 819ec8b:	8b 45 08             	mov    0x8(%ebp),%eax
 819ec8e:	89 04 24             	mov    %eax,(%esp)
 819ec91:	e8 0a f3 4a 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 819ec96:	89 c3                	mov    %eax,%ebx
 819ec98:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 819ec9f:	00 
 819eca0:	c7 44 24 08 2b 01 00 	movl   $0x12b,0x8(%esp)
 819eca7:	00 
 819eca8:	c7 44 24 04 80 99 ba 	movl   $0x8ba9980,0x4(%esp)
 819ecaf:	08 
 819ecb0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 819ecb3:	89 04 24             	mov    %eax,(%esp)
 819ecb6:	e8 5d 0a 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 819ecbb:	89 7c 24 14          	mov    %edi,0x14(%esp)
 819ecbf:	89 74 24 10          	mov    %esi,0x10(%esp)
 819ecc3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819ecc6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819ecca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819ecce:	c7 44 24 04 3c 8d ba 	movl   $0x8ba8d3c,0x4(%esp)
 819ecd5:	08 
 819ecd6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 819ecd9:	89 04 24             	mov    %eax,(%esp)
 819ecdc:	e8 a7 0a 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 819ece1:	b8 00 00 00 00       	mov    $0x0,%eax
 819ece6:	e9 91 00 00 00       	jmp    819ed7c <_ZN4ARAD15pvp_grade_checkEP5CUser+0x19e>
 819eceb:	8b 45 08             	mov    0x8(%ebp),%eax
 819ecee:	89 04 24             	mov    %eax,(%esp)
 819ecf1:	e8 54 01 00 00       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 819ecf6:	89 c3                	mov    %eax,%ebx
 819ecf8:	e8 9e d4 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819ecfd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819ed01:	89 04 24             	mov    %eax,(%esp)
 819ed04:	e8 d7 00 00 00       	call   819ede0 <_ZN12CDataManager21IsAvailablePvPChannelEi>
 819ed09:	83 f0 01             	xor    $0x1,%eax
 819ed0c:	84 c0                	test   %al,%al
 819ed0e:	74 67                	je     819ed77 <_ZN4ARAD15pvp_grade_checkEP5CUser+0x199>
 819ed10:	8b 45 08             	mov    0x8(%ebp),%eax
 819ed13:	89 04 24             	mov    %eax,(%esp)
 819ed16:	e8 2f 01 00 00       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 819ed1b:	89 c6                	mov    %eax,%esi
 819ed1d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 819ed24:	ff 
 819ed25:	8b 45 08             	mov    0x8(%ebp),%eax
 819ed28:	89 04 24             	mov    %eax,(%esp)
 819ed2b:	e8 70 f2 4a 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 819ed30:	89 c3                	mov    %eax,%ebx
 819ed32:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 819ed39:	00 
 819ed3a:	c7 44 24 08 35 01 00 	movl   $0x135,0x8(%esp)
 819ed41:	00 
 819ed42:	c7 44 24 04 80 99 ba 	movl   $0x8ba9980,0x4(%esp)
 819ed49:	08 
 819ed4a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819ed4d:	89 04 24             	mov    %eax,(%esp)
 819ed50:	e8 c3 09 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 819ed55:	89 74 24 0c          	mov    %esi,0xc(%esp)
 819ed59:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819ed5d:	c7 44 24 04 7c 8d ba 	movl   $0x8ba8d7c,0x4(%esp)
 819ed64:	08 
 819ed65:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819ed68:	89 04 24             	mov    %eax,(%esp)
 819ed6b:	e8 18 0a 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 819ed70:	b8 00 00 00 00       	mov    $0x0,%eax
 819ed75:	eb 05                	jmp    819ed7c <_ZN4ARAD15pvp_grade_checkEP5CUser+0x19e>
 819ed77:	b8 01 00 00 00       	mov    $0x1,%eax
 819ed7c:	83 c4 5c             	add    $0x5c,%esp
 819ed7f:	5b                   	pop    %ebx
 819ed80:	5e                   	pop    %esi
 819ed81:	5f                   	pop    %edi
 819ed82:	5d                   	pop    %ebp
 819ed83:	c3                   	ret

```

```c
// ARAD::pvp_grade_check @ 0x819ebde

/* ARAD::pvp_grade_check(CUser*) */

undefined4 ARAD::pvp_grade_check(CUser *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 == 8) {
LAB_0819ec0b:
    bVar1 = true;
  }
  else {
    pGVar3 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(pGVar3);
    if (iVar4 == 0xd) goto LAB_0819ec0b;
    bVar1 = false;
  }
  if (!bVar1) {
    return 1;
  }
  local_20 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar4 = CDataManager::GetMinLevelPvPChannel(pCVar5);
  if (iVar4 <= local_20) {
    pCVar5 = (CDataManager *)G_CDataManager();
    iVar4 = CDataManager::GetMaxLevelPvPChannel(pCVar5);
    if (local_20 <= iVar4) {
      bVar1 = false;
      goto LAB_0819ec5d;
    }
  }
  bVar1 = true;
LAB_0819ec5d:
  if (bVar1) {
    pCVar5 = (CDataManager *)G_CDataManager();
    uVar6 = CDataManager::GetMaxLevelPvPChannel(pCVar5);
    pCVar5 = (CDataManager *)G_CDataManager();
    uVar7 = CDataManager::GetMinLevelPvPChannel(pCVar5);
    uVar8 = CUser::get_charac_no(param_1,-1);
    cMyTrace::cMyTrace(local_40,"bool ARAD::pvp_grade_check(CUser*)",299,5);
    cMyTrace::operator()
              (local_40,"User Level charac_no[%d] charac_level[%d] pvpchannelLev[%d][%d]",uVar8,
               local_20,uVar7,uVar6);
    return 0;
  }
  iVar4 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  pCVar5 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::IsAvailablePvPChannel(pCVar5,iVar4);
  if (cVar2 == '\x01') {
    return 1;
  }
  uVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  uVar7 = CUser::get_charac_no(param_1,-1);
  cMyTrace::cMyTrace(local_30,"bool ARAD::pvp_grade_check(CUser*)",0x135,5);
  cMyTrace::operator()(local_30,"User grade Error charac_no[%d] charac_pvp_grade[%d]",uVar7,uVar6);
  return 0;
}

```

---

## send_mail

```asm
// === 08196b03 ARAD::send_mail  [0x08196b03-0x8196d19] ===
 8196b03:	55                   	push   %ebp
 8196b04:	89 e5                	mov    %esp,%ebp
 8196b06:	56                   	push   %esi
 8196b07:	53                   	push   %ebx
 8196b08:	83 ec 30             	sub    $0x30,%esp
 8196b0b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8196b10:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 8196b17:	00 
 8196b18:	c7 44 24 04 60 cb b9 	movl   $0x8b9cb60,0x4(%esp)
 8196b1f:	08 
 8196b20:	89 04 24             	mov    %eax,(%esp)
 8196b23:	e8 5e 8f 0f 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8196b28:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8196b2f:	00 
 8196b30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8196b34:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8196b37:	89 04 24             	mov    %eax,(%esp)
 8196b3a:	e8 e7 20 f3 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8196b3f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8196b42:	89 04 24             	mov    %eax,(%esp)
 8196b45:	e8 fc 20 f3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8196b4a:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 8196b51:	00 
 8196b52:	89 04 24             	mov    %eax,(%esp)
 8196b55:	e8 fc 20 f3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8196b5a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8196b5d:	89 04 24             	mov    %eax,(%esp)
 8196b60:	e8 e1 20 f3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8196b65:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8196b6c:	ff 
 8196b6d:	89 04 24             	mov    %eax,(%esp)
 8196b70:	e8 e1 20 f3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8196b75:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8196b78:	89 04 24             	mov    %eax,(%esp)
 8196b7b:	e8 ce 20 f3 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8196b80:	89 04 24             	mov    %eax,(%esp)
 8196b83:	e8 06 14 00 00       	call   8197f8e <_ZN12CStreamGuard11GetInBufferI25SIG_MAILBOX_SEND_NEW_MAILEEPT_v>
 8196b88:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8196b8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8196b8e:	8b 50 0c             	mov    0xc(%eax),%edx
 8196b91:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196b94:	89 50 22             	mov    %edx,0x22(%eax)
 8196b97:	8b 45 08             	mov    0x8(%ebp),%eax
 8196b9a:	8b 50 10             	mov    0x10(%eax),%edx
 8196b9d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196ba0:	89 50 1e             	mov    %edx,0x1e(%eax)
 8196ba3:	8b 45 08             	mov    0x8(%ebp),%eax
 8196ba6:	0f b6 00             	movzbl (%eax),%eax
 8196ba9:	0f b6 d0             	movzbl %al,%edx
 8196bac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196baf:	89 90 5f 01 00 00    	mov    %edx,0x15f(%eax)
 8196bb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8196bb8:	8b 50 08             	mov    0x8(%eax),%edx
 8196bbb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196bbe:	89 90 5b 01 00 00    	mov    %edx,0x15b(%eax)
 8196bc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8196bc7:	8b 50 04             	mov    0x4(%eax),%edx
 8196bca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196bcd:	89 50 26             	mov    %edx,0x26(%eax)
 8196bd0:	8b 45 08             	mov    0x8(%ebp),%eax
 8196bd3:	8b 40 14             	mov    0x14(%eax),%eax
 8196bd6:	89 c2                	mov    %eax,%edx
 8196bd8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196bdb:	66 89 50 59          	mov    %dx,0x59(%eax)
 8196bdf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196be2:	83 c0 5b             	add    $0x5b,%eax
 8196be5:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8196bec:	00 
 8196bed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8196bf4:	00 
 8196bf5:	89 04 24             	mov    %eax,(%esp)
 8196bf8:	e8 c3 70 ee ff       	call   807dcc0 <memset@plt>
 8196bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 8196c00:	8b 50 1c             	mov    0x1c(%eax),%edx
 8196c03:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196c06:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8196c0d:	00 
 8196c0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8196c12:	89 04 24             	mov    %eax,(%esp)
 8196c15:	e8 b6 6c ee ff       	call   807d8d0 <strncpy@plt>
 8196c1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8196c1d:	8b 40 18             	mov    0x18(%eax),%eax
 8196c20:	85 c0                	test   %eax,%eax
 8196c22:	74 30                	je     8196c54 <_ZN4ARAD9send_mailERN10ARAD_DATAS12AradMailInfoE+0x151>
 8196c24:	8b 45 08             	mov    0x8(%ebp),%eax
 8196c27:	8b 40 18             	mov    0x18(%eax),%eax
 8196c2a:	89 04 24             	mov    %eax,(%esp)
 8196c2d:	e8 7e 77 ee ff       	call   807e3b0 <strlen@plt>
 8196c32:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8196c35:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8196c38:	8b 45 08             	mov    0x8(%ebp),%eax
 8196c3b:	8b 40 18             	mov    0x18(%eax),%eax
 8196c3e:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8196c41:	83 c1 5b             	add    $0x5b,%ecx
 8196c44:	89 54 24 08          	mov    %edx,0x8(%esp)
 8196c48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8196c4c:	89 0c 24             	mov    %ecx,(%esp)
 8196c4f:	e8 7c 6c ee ff       	call   807d8d0 <strncpy@plt>
 8196c54:	8b 45 08             	mov    0x8(%ebp),%eax
 8196c57:	83 c0 20             	add    $0x20,%eax
 8196c5a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8196c5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8196c60:	0f b6 10             	movzbl (%eax),%edx
 8196c63:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196c66:	88 50 2a             	mov    %dl,0x2a(%eax)
 8196c69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8196c6c:	8b 50 0c             	mov    0xc(%eax),%edx
 8196c6f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196c72:	89 50 2b             	mov    %edx,0x2b(%eax)
 8196c75:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8196c78:	8b 50 04             	mov    0x4(%eax),%edx
 8196c7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196c7e:	89 50 2f             	mov    %edx,0x2f(%eax)
 8196c81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8196c84:	0f b7 50 0a          	movzwl 0xa(%eax),%edx
 8196c88:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196c8b:	66 89 50 34          	mov    %dx,0x34(%eax)
 8196c8f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8196c92:	89 04 24             	mov    %eax,(%esp)
 8196c95:	e8 78 11 00 00       	call   8197e12 <_ZNK10ARAD_DATAS16AradMailItemInfo11GetItemAttrEv>
 8196c9a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8196c9d:	88 42 33             	mov    %al,0x33(%edx)
 8196ca0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8196ca3:	8b 50 10             	mov    0x10(%eax),%edx
 8196ca6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196ca9:	89 50 36             	mov    %edx,0x36(%eax)
 8196cac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196caf:	c6 40 44 00          	movb   $0x0,0x44(%eax)
 8196cb3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196cb6:	66 c7 40 45 00 00    	movw   $0x0,0x45(%eax)
 8196cbc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196cbf:	c6 40 58 00          	movb   $0x0,0x58(%eax)
 8196cc3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8196cc6:	c6 40 56 00          	movb   $0x0,0x56(%eax)
 8196cca:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8196ccf:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8196cd2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8196cd6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8196cdd:	00 
 8196cde:	89 04 24             	mov    %eax,(%esp)
 8196ce1:	e8 f8 a2 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8196ce6:	bb 01 00 00 00       	mov    $0x1,%ebx
 8196ceb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8196cee:	89 04 24             	mov    %eax,(%esp)
 8196cf1:	e8 dc 5b 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8196cf6:	89 d8                	mov    %ebx,%eax
 8196cf8:	83 c4 30             	add    $0x30,%esp
 8196cfb:	5b                   	pop    %ebx
 8196cfc:	5e                   	pop    %esi
 8196cfd:	5d                   	pop    %ebp
 8196cfe:	c3                   	ret
 8196cff:	89 d3                	mov    %edx,%ebx
 8196d01:	89 c6                	mov    %eax,%esi
 8196d03:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8196d06:	89 04 24             	mov    %eax,(%esp)
 8196d09:	e8 c4 5b 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8196d0e:	89 f0                	mov    %esi,%eax
 8196d10:	89 da                	mov    %ebx,%edx
 8196d12:	89 04 24             	mov    %eax,(%esp)
 8196d15:	e8 36 ca 94 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ARAD::send_mail @ 0x8196b03

/* ARAD::send_mail(ARAD_DATAS::AradMailInfo&) */

undefined4 ARAD::send_mail(AradMailInfo *param_1)

{
  SIG_MAILBOX_SEND_NEW_MAIL SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_20 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_18;
  AradMailItemInfo *local_14;
  size_t local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_Function_Set.cpp",0x3a);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08196b55 to 08196ce5 has its CatchHandler @ 08196cff */
  CStreamGuard::operator<<(pCVar3,0x80);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_18 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar3);
  *(undefined4 *)(local_18 + 0x22) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(local_18 + 0x1e) = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(local_18 + 0x15f) = (uint)(byte)*param_1;
  *(undefined4 *)(local_18 + 0x15b) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(local_18 + 0x26) = *(undefined4 *)(param_1 + 4);
  *(short *)(local_18 + 0x59) = (short)*(undefined4 *)(param_1 + 0x14);
  memset(local_18 + 0x5b,0,0x100);
  strncpy((char *)local_18,*(char **)(param_1 + 0x1c),0x1d);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_10 = strlen(*(char **)(param_1 + 0x18));
    strncpy((char *)(local_18 + 0x5b),*(char **)(param_1 + 0x18),local_10);
  }
  local_14 = (AradMailItemInfo *)(param_1 + 0x20);
  local_18[0x2a] = *(SIG_MAILBOX_SEND_NEW_MAIL *)local_14;
  *(undefined4 *)(local_18 + 0x2b) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(local_18 + 0x2f) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(local_18 + 0x34) = *(undefined2 *)(param_1 + 0x2a);
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)ARAD_DATAS::AradMailItemInfo::GetItemAttr(local_14);
  local_18[0x33] = SVar1;
  *(undefined4 *)(local_18 + 0x36) = *(undefined4 *)(local_14 + 0x10);
  local_18[0x44] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  *(undefined2 *)(local_18 + 0x45) = 0;
  local_18[0x58] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  local_18[0x56] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}

```

---

## uint32Time

```asm
// === 081979c0 ARAD::uint32Time  [0x081979c0-0x8197a4c] ===
 81979c0:	55                   	push   %ebp
 81979c1:	89 e5                	mov    %esp,%ebp
 81979c3:	83 ec 28             	sub    $0x28,%esp
 81979c6:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81979cd:	e8 7e 5d ee ff       	call   807d750 <time@plt>
 81979d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81979d5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81979d8:	89 04 24             	mov    %eax,(%esp)
 81979db:	e8 50 69 ee ff       	call   807e330 <localtime@plt>
 81979e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81979e3:	8b 45 08             	mov    0x8(%ebp),%eax
 81979e6:	0f b7 00             	movzwl (%eax),%eax
 81979e9:	98                   	cwtl
 81979ea:	8d 90 94 f8 ff ff    	lea    -0x76c(%eax),%edx
 81979f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81979f3:	89 50 14             	mov    %edx,0x14(%eax)
 81979f6:	8b 45 08             	mov    0x8(%ebp),%eax
 81979f9:	83 c0 02             	add    $0x2,%eax
 81979fc:	0f b7 00             	movzwl (%eax),%eax
 81979ff:	98                   	cwtl
 8197a00:	8d 50 ff             	lea    -0x1(%eax),%edx
 8197a03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197a06:	89 50 10             	mov    %edx,0x10(%eax)
 8197a09:	8b 45 08             	mov    0x8(%ebp),%eax
 8197a0c:	83 c0 04             	add    $0x4,%eax
 8197a0f:	0f b7 00             	movzwl (%eax),%eax
 8197a12:	0f bf d0             	movswl %ax,%edx
 8197a15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197a18:	89 50 0c             	mov    %edx,0xc(%eax)
 8197a1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8197a1e:	83 c0 06             	add    $0x6,%eax
 8197a21:	0f b7 00             	movzwl (%eax),%eax
 8197a24:	0f bf d0             	movswl %ax,%edx
 8197a27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197a2a:	89 50 08             	mov    %edx,0x8(%eax)
 8197a2d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197a30:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8197a37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197a3a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8197a40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197a43:	89 04 24             	mov    %eax,(%esp)
 8197a46:	e8 d5 6d ee ff       	call   807e820 <mktime@plt>
 8197a4b:	c9                   	leave
 8197a4c:	c3                   	ret

```

```c
// ARAD::uint32Time @ 0x81979c0

/* ARAD::uint32Time(short*) */

void ARAD::uint32Time(short *param_1)

{
  time_t local_14;
  tm *local_10;
  
  local_14 = time((time_t *)0x0);
  local_10 = localtime(&local_14);
  local_10->tm_year = *param_1 + -0x76c;
  local_10->tm_mon = param_1[1] + -1;
  local_10->tm_mday = (int)param_1[2];
  local_10->tm_hour = (int)param_1[3];
  local_10->tm_min = 0;
  local_10->tm_sec = 0;
  mktime(local_10);
  return;
}

```

---

## write_incorrect_item_info

```asm
// === 0819eaf8 ARAD::write_incorrect_item_info  [0x0819eaf8-0x819ebdd] ===
 819eaf8:	55                   	push   %ebp
 819eaf9:	89 e5                	mov    %esp,%ebp
 819eafb:	57                   	push   %edi
 819eafc:	56                   	push   %esi
 819eafd:	53                   	push   %ebx
 819eafe:	83 ec 7c             	sub    $0x7c,%esp
 819eb01:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb04:	83 c0 11             	add    $0x11,%eax
 819eb07:	8b 38                	mov    (%eax),%edi
 819eb09:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb0c:	8b 40 0d             	mov    0xd(%eax),%eax
 819eb0f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 819eb12:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb15:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 819eb19:	0f b7 c0             	movzwl %ax,%eax
 819eb1c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 819eb1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb22:	8b 40 07             	mov    0x7(%eax),%eax
 819eb25:	89 45 cc             	mov    %eax,-0x34(%ebp)
 819eb28:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb2b:	89 04 24             	mov    %eax,(%esp)
 819eb2e:	e8 a9 1c fb ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 819eb33:	0f b6 c0             	movzbl %al,%eax
 819eb36:	89 45 d0             	mov    %eax,-0x30(%ebp)
 819eb39:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb3c:	8b 40 02             	mov    0x2(%eax),%eax
 819eb3f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 819eb42:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb45:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 819eb49:	0f b6 f0             	movzbl %al,%esi
 819eb4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eb4f:	0f b6 00             	movzbl (%eax),%eax
 819eb52:	0f b6 d8             	movzbl %al,%ebx
 819eb55:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 819eb5c:	00 
 819eb5d:	c7 44 24 08 06 01 00 	movl   $0x106,0x8(%esp)
 819eb64:	00 
 819eb65:	c7 44 24 04 c0 99 ba 	movl   $0x8ba99c0,0x4(%esp)
 819eb6c:	08 
 819eb6d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819eb70:	89 04 24             	mov    %eax,(%esp)
 819eb73:	e8 a0 0b 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 819eb78:	8b 45 14             	mov    0x14(%ebp),%eax
 819eb7b:	89 44 24 34          	mov    %eax,0x34(%esp)
 819eb7f:	8b 45 18             	mov    0x18(%ebp),%eax
 819eb82:	89 44 24 30          	mov    %eax,0x30(%esp)
 819eb86:	8b 45 10             	mov    0x10(%ebp),%eax
 819eb89:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 819eb8d:	89 7c 24 28          	mov    %edi,0x28(%esp)
 819eb91:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 819eb94:	89 44 24 24          	mov    %eax,0x24(%esp)
 819eb98:	8b 45 c8             	mov    -0x38(%ebp),%eax
 819eb9b:	89 44 24 20          	mov    %eax,0x20(%esp)
 819eb9f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 819eba2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 819eba6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 819eba9:	89 44 24 18          	mov    %eax,0x18(%esp)
 819ebad:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 819ebb0:	89 44 24 14          	mov    %eax,0x14(%esp)
 819ebb4:	89 74 24 10          	mov    %esi,0x10(%esp)
 819ebb8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 819ebbc:	8b 45 08             	mov    0x8(%ebp),%eax
 819ebbf:	89 44 24 08          	mov    %eax,0x8(%esp)
 819ebc3:	c7 44 24 04 9c 8c ba 	movl   $0x8ba8c9c,0x4(%esp)
 819ebca:	08 
 819ebcb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819ebce:	89 04 24             	mov    %eax,(%esp)
 819ebd1:	e8 b2 0b 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 819ebd6:	83 c4 7c             	add    $0x7c,%esp
 819ebd9:	5b                   	pop    %ebx
 819ebda:	5e                   	pop    %esi
 819ebdb:	5f                   	pop    %edi
 819ebdc:	5d                   	pop    %ebp
 819ebdd:	c3                   	ret

```

```c
// ARAD::write_incorrect_item_info @ 0x819eaf8

/* ARAD::write_incorrect_item_info(unsigned int, Inven_Item const&, char const*, int, int) */

void ARAD::write_incorrect_item_info
               (uint param_1,Inven_Item *param_2,char *param_3,int param_4,int param_5)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  cMyTrace local_2c [28];
  
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)(param_2 + 0xd);
  uVar3 = *(ushort *)(param_2 + 0xb);
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar8 = Inven_Item::GetItemAttr(param_2);
  uVar7 = *(undefined4 *)(param_2 + 2);
  IVar1 = param_2[1];
  IVar2 = *param_2;
  cMyTrace::cMyTrace(local_2c,
                     "void ARAD::write_incorrect_item_info(unsigned int, const Inven_Item&, const char*, int, int)"
                     ,0x106,5);
  cMyTrace::operator()
            (local_2c,
             "charac_no[%u],Seal[%d],ItemType[%d],ItemID[%u],ItemAt[%d],add_info[%d],endurance[%d],extend_info[%u],amp_opt[%d] - inven_type[%s] slot_no(%d), error_line(%d) \n"
             ,param_1,(uint)(byte)IVar2,(uint)(byte)IVar1,uVar7,uVar8 & 0xff,uVar6,(uint)uVar3,uVar5
             ,uVar4,param_3,param_5,param_4);
  return;
}

```


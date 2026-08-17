# yaSSL__SSL

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 55

---

## CompressionOn

```asm
// === 0874e9d0 yaSSL::SSL::CompressionOn  [0x0874e9d0-0x874e9ff] ===
 874e9d0:	55                   	push   %ebp
 874e9d1:	89 e5                	mov    %esp,%ebp
 874e9d3:	53                   	push   %ebx
 874e9d4:	e8 1f 44 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e9d9:	81 c3 bf e1 c1 00    	add    $0xc1e1bf,%ebx
 874e9df:	83 ec 14             	sub    $0x14,%esp
 874e9e2:	8b 45 08             	mov    0x8(%ebp),%eax
 874e9e5:	83 c0 68             	add    $0x68,%eax
 874e9e8:	89 04 24             	mov    %eax,(%esp)
 874e9eb:	e8 70 ff ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874e9f0:	0f b6 80 2d 01 00 00 	movzbl 0x12d(%eax),%eax
 874e9f7:	83 c4 14             	add    $0x14,%esp
 874e9fa:	5b                   	pop    %ebx
 874e9fb:	5d                   	pop    %ebp
 874e9fc:	c3                   	ret
 874e9fd:	90                   	nop
 874e9fe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::CompressionOn @ 0x874e9d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::CompressionOn() const */

undefined1 __thiscall yaSSL::SSL::CompressionOn(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::get_connection((Security *)(this + 0x68));
  return *(undefined1 *)(iVar1 + 0x12d);
}

```

---

## GetError

```asm
// === 0874e0b0 yaSSL::SSL::GetError  [0x0874e0b0-0x874e0df] ===
 874e0b0:	55                   	push   %ebp
 874e0b1:	89 e5                	mov    %esp,%ebp
 874e0b3:	53                   	push   %ebx
 874e0b4:	e8 3f 4d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e0b9:	81 c3 df ea c1 00    	add    $0xc1eadf,%ebx
 874e0bf:	83 ec 14             	sub    $0x14,%esp
 874e0c2:	8b 45 08             	mov    0x8(%ebp),%eax
 874e0c5:	05 ec 08 00 00       	add    $0x8ec,%eax
 874e0ca:	89 04 24             	mov    %eax,(%esp)
 874e0cd:	e8 1e fe ff ff       	call   874def0 <_ZNK5yaSSL6States4WhatEv>
 874e0d2:	83 c4 14             	add    $0x14,%esp
 874e0d5:	5b                   	pop    %ebx
 874e0d6:	5d                   	pop    %ebp
 874e0d7:	c3                   	ret
 874e0d8:	90                   	nop
 874e0d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::GetError @ 0x874e0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::GetError() const */

void __thiscall yaSSL::SSL::GetError(SSL *this)

{
  States::What((States *)(this + 0x8ec));
  return;
}

```

---

## GetMultiProtocol

```asm
// === 0874ea10 yaSSL::SSL::GetMultiProtocol  [0x0874ea10-0x874ea4f] ===
 874ea10:	55                   	push   %ebp
 874ea11:	89 e5                	mov    %esp,%ebp
 874ea13:	53                   	push   %ebx
 874ea14:	e8 df 43 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ea19:	81 c3 7f e1 c1 00    	add    $0xc1e17f,%ebx
 874ea1f:	83 ec 14             	sub    $0x14,%esp
 874ea22:	8b 45 08             	mov    0x8(%ebp),%eax
 874ea25:	83 c0 68             	add    $0x68,%eax
 874ea28:	89 04 24             	mov    %eax,(%esp)
 874ea2b:	e8 d0 ff ff ff       	call   874ea00 <_ZNK5yaSSL8Security10GetContextEv>
 874ea30:	89 04 24             	mov    %eax,(%esp)
 874ea33:	e8 68 fa ff ff       	call   874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>
 874ea38:	89 04 24             	mov    %eax,(%esp)
 874ea3b:	e8 10 fa ff ff       	call   874e450 <_ZNK5yaSSL10SSL_METHOD16multipleProtocolEv>
 874ea40:	83 c4 14             	add    $0x14,%esp
 874ea43:	5b                   	pop    %ebx
 874ea44:	5d                   	pop    %ebp
 874ea45:	c3                   	ret
 874ea46:	8d 76 00             	lea    0x0(%esi),%esi
 874ea49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::GetMultiProtocol @ 0x874ea10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::GetMultiProtocol() const */

void __thiscall yaSSL::SSL::GetMultiProtocol(SSL *this)

{
  SSL_CTX *this_00;
  SSL_METHOD *this_01;
  
  this_00 = (SSL_CTX *)Security::GetContext((Security *)(this + 0x68));
  this_01 = (SSL_METHOD *)SSL_CTX::getMethod(this_00);
  SSL_METHOD::multipleProtocol(this_01);
  return;
}

```

---

## GetQuietShutdown

```asm
// === 0874e2a0 yaSSL::SSL::GetQuietShutdown  [0x0874e2a0-0x874e2af] ===
 874e2a0:	55                   	push   %ebp
 874e2a1:	89 e5                	mov    %esp,%ebp
 874e2a3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e2a6:	5d                   	pop    %ebp
 874e2a7:	0f b6 80 dd 09 00 00 	movzbl 0x9dd(%eax),%eax
 874e2ae:	c3                   	ret
 874e2af:	90                   	nop

```

```c
// yaSSL::SSL::GetQuietShutdown @ 0x874e2a0

/* yaSSL::SSL::GetQuietShutdown() const */

SSL __thiscall yaSSL::SSL::GetQuietShutdown(SSL *this)

{
  return this[0x9dd];
}

```

---

## HasData

```asm
// === 0874e310 yaSSL::SSL::HasData  [0x0874e310-0x874e31f] ===
 874e310:	55                   	push   %ebp
 874e311:	89 e5                	mov    %esp,%ebp
 874e313:	8b 45 08             	mov    0x8(%ebp),%eax
 874e316:	5d                   	pop    %ebp
 874e317:	0f b6 80 de 09 00 00 	movzbl 0x9de(%eax),%eax
 874e31e:	c3                   	ret
 874e31f:	90                   	nop

```

```c
// yaSSL::SSL::HasData @ 0x874e310

/* yaSSL::SSL::HasData() const */

SSL __thiscall yaSSL::SSL::HasData(SSL *this)

{
  return this[0x9de];
}

```

---

## PeekData

```asm
// === 0874fa70 yaSSL::SSL::PeekData  [0x0874fa70-0x874fbbf] ===
 874fa70:	55                   	push   %ebp
 874fa71:	89 e5                	mov    %esp,%ebp
 874fa73:	57                   	push   %edi
 874fa74:	56                   	push   %esi
 874fa75:	53                   	push   %ebx
 874fa76:	e8 7d 33 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874fa7b:	81 c3 1d d1 c1 00    	add    $0xc1d11d,%ebx
 874fa81:	83 ec 3c             	sub    $0x3c,%esp
 874fa84:	8b 7d 08             	mov    0x8(%ebp),%edi
 874fa87:	8b 75 0c             	mov    0xc(%ebp),%esi
 874fa8a:	89 3c 24             	mov    %edi,(%esp)
 874fa8d:	e8 1e e6 ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874fa92:	85 c0                	test   %eax,%eax
 874fa94:	74 0a                	je     874faa0 <_ZN5yaSSL3SSL8PeekDataERNS_4DataE+0x30>
 874fa96:	83 c4 3c             	add    $0x3c,%esp
 874fa99:	5b                   	pop    %ebx
 874fa9a:	5e                   	pop    %esi
 874fa9b:	5f                   	pop    %edi
 874fa9c:	5d                   	pop    %ebp
 874fa9d:	c3                   	ret
 874fa9e:	66 90                	xchg   %ax,%ax
 874faa0:	8b 06                	mov    (%esi),%eax
 874faa2:	89 34 24             	mov    %esi,(%esp)
 874faa5:	ff 50 10             	call   *0x10(%eax)
 874faa8:	8d 97 c0 09 00 00    	lea    0x9c0(%edi),%edx
 874faae:	89 14 24             	mov    %edx,(%esp)
 874fab1:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 874fab4:	0f b7 c8             	movzwl %ax,%ecx
 874fab7:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 874faba:	e8 61 ee ff ff       	call   874e920 <_ZNK5yaSSL7Buffers7getDataEv>
 874fabf:	8b 40 08             	mov    0x8(%eax),%eax
 874fac2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 874fac9:	00 
 874faca:	89 34 24             	mov    %esi,(%esp)
 874facd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874fad0:	e8 db 71 ff ff       	call   8746cb0 <_ZN5yaSSL4Data10set_lengthEt>
 874fad5:	89 3c 24             	mov    %edi,(%esp)
 874fad8:	e8 33 ff ff ff       	call   874fa10 <_ZN5yaSSL3SSL12bufferedDataEv>
 874fadd:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 874fae0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 874fae3:	89 14 24             	mov    %edx,(%esp)
 874fae6:	39 c1                	cmp    %eax,%ecx
 874fae8:	0f 46 c1             	cmovbe %ecx,%eax
 874faeb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 874faee:	e8 4d ee ff ff       	call   874e940 <_ZN5yaSSL7Buffers7useDataEv>
 874faf3:	8b 38                	mov    (%eax),%edi
 874faf5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 874faf8:	85 c0                	test   %eax,%eax
 874fafa:	75 0d                	jne    874fb09 <_ZN5yaSSL3SSL8PeekDataERNS_4DataE+0x99>
 874fafc:	eb 98                	jmp    874fa96 <_ZN5yaSSL3SSL8PeekDataERNS_4DataE+0x26>
 874fafe:	66 90                	xchg   %ax,%ax
 874fb00:	83 6d e4 01          	subl   $0x1,-0x1c(%ebp)
 874fb04:	8b 7f 04             	mov    0x4(%edi),%edi
 874fb07:	74 8d                	je     874fa96 <_ZN5yaSSL3SSL8PeekDataERNS_4DataE+0x26>
 874fb09:	8b 47 08             	mov    0x8(%edi),%eax
 874fb0c:	89 04 24             	mov    %eax,(%esp)
 874fb0f:	e8 ac 72 04 00       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 874fb14:	89 c2                	mov    %eax,%edx
 874fb16:	8b 06                	mov    (%esi),%eax
 874fb18:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 874fb1b:	89 34 24             	mov    %esi,(%esp)
 874fb1e:	ff 50 10             	call   *0x10(%eax)
 874fb21:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 874fb24:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 874fb27:	0f b7 c0             	movzwl %ax,%eax
 874fb2a:	29 c1                	sub    %eax,%ecx
 874fb2c:	8b 47 08             	mov    0x8(%edi),%eax
 874fb2f:	39 d1                	cmp    %edx,%ecx
 874fb31:	0f 46 d1             	cmovbe %ecx,%edx
 874fb34:	89 55 e0             	mov    %edx,-0x20(%ebp)
 874fb37:	89 04 24             	mov    %eax,(%esp)
 874fb3a:	e8 61 72 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 874fb3f:	89 34 24             	mov    %esi,(%esp)
 874fb42:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 874fb45:	e8 76 71 ff ff       	call   8746cc0 <_ZN5yaSSL4Data10set_bufferEv>
 874fb4a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 874fb4d:	8b 06                	mov    (%esi),%eax
 874fb4f:	89 34 24             	mov    %esi,(%esp)
 874fb52:	ff 50 10             	call   *0x10(%eax)
 874fb55:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 874fb58:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874fb5c:	0f b7 c0             	movzwl %ax,%eax
 874fb5f:	03 45 d8             	add    -0x28(%ebp),%eax
 874fb62:	89 44 24 04          	mov    %eax,0x4(%esp)
 874fb66:	8b 47 08             	mov    0x8(%edi),%eax
 874fb69:	89 04 24             	mov    %eax,(%esp)
 874fb6c:	e8 cf 74 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874fb71:	8b 06                	mov    (%esi),%eax
 874fb73:	89 34 24             	mov    %esi,(%esp)
 874fb76:	ff 50 10             	call   *0x10(%eax)
 874fb79:	89 34 24             	mov    %esi,(%esp)
 874fb7c:	66 03 45 e0          	add    -0x20(%ebp),%ax
 874fb80:	0f b7 c0             	movzwl %ax,%eax
 874fb83:	89 44 24 04          	mov    %eax,0x4(%esp)
 874fb87:	e8 24 71 ff ff       	call   8746cb0 <_ZN5yaSSL4Data10set_lengthEt>
 874fb8c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 874fb8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 874fb93:	8b 47 08             	mov    0x8(%edi),%eax
 874fb96:	89 04 24             	mov    %eax,(%esp)
 874fb99:	e8 32 72 04 00       	call   8796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>
 874fb9e:	8b 06                	mov    (%esi),%eax
 874fba0:	89 34 24             	mov    %esi,(%esp)
 874fba3:	ff 50 10             	call   *0x10(%eax)
 874fba6:	0f b7 c0             	movzwl %ax,%eax
 874fba9:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 874fbac:	0f 85 4e ff ff ff    	jne    874fb00 <_ZN5yaSSL3SSL8PeekDataERNS_4DataE+0x90>
 874fbb2:	83 c4 3c             	add    $0x3c,%esp
 874fbb5:	5b                   	pop    %ebx
 874fbb6:	5e                   	pop    %esi
 874fbb7:	5f                   	pop    %edi
 874fbb8:	5d                   	pop    %ebp
 874fbb9:	c3                   	ret
 874fbba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::PeekData @ 0x874fa70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::PeekData(yaSSL::Data&) */

void __thiscall yaSSL::SSL::PeekData(SSL *this,Data *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short local_24;
  
  iVar3 = GetError(this);
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
    iVar3 = Buffers::getData((Buffers *)(this + 0x9c0));
    iVar3 = *(int *)(iVar3 + 8);
    yaSSL::Data::set_length(param_1,0);
    uVar5 = bufferedData(this);
    if ((uVar4 & 0xffff) <= uVar5) {
      uVar5 = uVar4 & 0xffff;
    }
    piVar6 = (int *)Buffers::useData((Buffers *)(this + 0x9c0));
    iVar1 = *piVar6;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar4 = input_buffer::get_remaining(*(input_buffer **)(iVar1 + 8));
      uVar7 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      uVar7 = uVar5 - (uVar7 & 0xffff);
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      uVar7 = input_buffer::get_current(*(input_buffer **)(iVar1 + 8));
      iVar8 = yaSSL::Data::set_buffer(param_1);
      uVar9 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      input_buffer::read(*(input_buffer **)(iVar1 + 8),(uchar *)((uVar9 & 0xffff) + iVar8),uVar4);
      sVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      local_24 = (short)uVar4;
      yaSSL::Data::set_length(param_1,sVar2 + local_24);
      input_buffer::set_current(*(input_buffer **)(iVar1 + 8),uVar7);
      uVar4 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      if ((uVar4 & 0xffff) == uVar5) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

```

---

## SSL

```asm
// === 08750d50 yaSSL::SSL::SSL  [0x08750d50-0x87510bf] ===
 8750d50:	55                   	push   %ebp
 8750d51:	89 e5                	mov    %esp,%ebp
 8750d53:	57                   	push   %edi
 8750d54:	56                   	push   %esi
 8750d55:	53                   	push   %ebx
 8750d56:	e8 9d 20 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8750d5b:	81 c3 3d be c1 00    	add    $0xc1be3d,%ebx
 8750d61:	83 ec 4c             	sub    $0x4c,%esp
 8750d64:	8b 75 08             	mov    0x8(%ebp),%esi
 8750d67:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8750d6a:	89 34 24             	mov    %esi,(%esp)
 8750d6d:	e8 de e6 ff ff       	call   874f450 <_ZN5yaSSL6CryptoC1Ev>
 8750d72:	89 3c 24             	mov    %edi,(%esp)
 8750d75:	e8 46 d7 ff ff       	call   874e4c0 <_ZNK5yaSSL7SSL_CTX11GetDH_ParmsEv>
 8750d7a:	0f b6 50 08          	movzbl 0x8(%eax),%edx
 8750d7e:	89 3c 24             	mov    %edi,(%esp)
 8750d81:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8750d84:	e8 27 d7 ff ff       	call   874e4b0 <_ZNK5yaSSL7SSL_CTX10GetCiphersEv>
 8750d89:	89 3c 24             	mov    %edi,(%esp)
 8750d8c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8750d8f:	e8 0c d7 ff ff       	call   874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>
 8750d94:	89 04 24             	mov    %eax,(%esp)
 8750d97:	e8 44 d6 ff ff       	call   874e3e0 <_ZNK5yaSSL10SSL_METHOD7getSideEv>
 8750d9c:	89 34 24             	mov    %esi,(%esp)
 8750d9f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8750da2:	e8 29 da ff ff       	call   874e7d0 <_ZN5yaSSL6Crypto10use_randomEv>
 8750da7:	89 3c 24             	mov    %edi,(%esp)
 8750daa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8750dad:	e8 ee d6 ff ff       	call   874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>
 8750db2:	8d 4d e6             	lea    -0x1a(%ebp),%ecx
 8750db5:	89 0c 24             	mov    %ecx,(%esp)
 8750db8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750dbc:	e8 ff d5 ff ff       	call   874e3c0 <_ZNK5yaSSL10SSL_METHOD10getVersionEv>
 8750dc1:	8d 46 68             	lea    0x68(%esi),%eax
 8750dc4:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8750dc7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8750dca:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8750dcd:	83 ec 04             	sub    $0x4,%esp
 8750dd0:	89 44 24 10          	mov    %eax,0x10(%esp)
 8750dd4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8750dd7:	89 54 24 18          	mov    %edx,0x18(%esp)
 8750ddb:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8750ddf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8750de3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8750de6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8750dea:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 8750dee:	66 89 44 24 04       	mov    %ax,0x4(%esp)
 8750df3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8750df6:	89 04 24             	mov    %eax,(%esp)
 8750df9:	e8 32 ea ff ff       	call   874f830 <_ZN5yaSSL8SecurityC1ENS_15ProtocolVersionERNS_10RandomPoolENS_13ConnectionEndERKNS_7CiphersEPNS_7SSL_CTXEb>
 8750dfe:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 8750e04:	89 04 24             	mov    %eax,(%esp)
 8750e07:	e8 34 d0 ff ff       	call   874de40 <_ZN5yaSSL6StatesC1Ev>
 8750e0c:	8d 86 58 09 00 00    	lea    0x958(%esi),%eax
 8750e12:	89 04 24             	mov    %eax,(%esp)
 8750e15:	e8 f6 92 04 00       	call   879a110 <_ZN5yaSSL3MD5C1Ev>
 8750e1a:	8d 86 60 09 00 00    	lea    0x960(%esi),%eax
 8750e20:	89 04 24             	mov    %eax,(%esp)
 8750e23:	e8 68 93 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8750e28:	8d 86 68 09 00 00    	lea    0x968(%esi),%eax
 8750e2e:	89 04 24             	mov    %eax,(%esp)
 8750e31:	e8 6a 63 ff ff       	call   87471a0 <_ZN5yaSSL8FinishedC1Ev>
 8750e36:	8d 86 b8 09 00 00    	lea    0x9b8(%esi),%eax
 8750e3c:	89 04 24             	mov    %eax,(%esp)
 8750e3f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8750e46:	ff 
 8750e47:	e8 54 06 05 00       	call   87a14a0 <_ZN5yaSSL6SocketC1Ei>
 8750e4c:	8d 86 c0 09 00 00    	lea    0x9c0(%esi),%eax
 8750e52:	89 04 24             	mov    %eax,(%esp)
 8750e55:	e8 56 da ff ff       	call   874e8b0 <_ZN5yaSSL7BuffersC1Ev>
 8750e5a:	8d 83 34 86 99 ff    	lea    -0x6679cc(%ebx),%eax
 8750e60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750e64:	8d 86 dc 09 00 00    	lea    0x9dc(%esi),%eax
 8750e6a:	89 04 24             	mov    %eax,(%esp)
 8750e6d:	e8 ce 05 05 00       	call   87a1440 <_ZN5yaSSL3LogC1EPKc>
 8750e72:	c6 86 dd 09 00 00 00 	movb   $0x0,0x9dd(%esi)
 8750e79:	c6 86 de 09 00 00 00 	movb   $0x0,0x9de(%esi)
 8750e80:	89 34 24             	mov    %esi,(%esp)
 8750e83:	e8 f8 d8 ff ff       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 8750e88:	89 04 24             	mov    %eax,(%esp)
 8750e8b:	e8 20 77 04 00       	call   87985b0 <_ZNK5yaSSL10RandomPool8GetErrorEv>
 8750e90:	85 c0                	test   %eax,%eax
 8750e92:	0f 85 0d 01 00 00    	jne    8750fa5 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x255>
 8750e98:	89 34 24             	mov    %esi,(%esp)
 8750e9b:	e8 40 d9 ff ff       	call   874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>
 8750ea0:	89 3c 24             	mov    %edi,(%esp)
 8750ea3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8750ea6:	e8 d5 d5 ff ff       	call   874e480 <_ZNK5yaSSL7SSL_CTX7getCertEv>
 8750eab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750eaf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8750eb2:	89 04 24             	mov    %eax,(%esp)
 8750eb5:	e8 f6 67 04 00       	call   87976b0 <_ZN5yaSSL11CertManager12CopySelfCertEPKNS_4x509E>
 8750eba:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8750ebd:	89 04 24             	mov    %eax,(%esp)
 8750ec0:	e8 db df ff ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 8750ec5:	8b 00                	mov    (%eax),%eax
 8750ec7:	89 3c 24             	mov    %edi,(%esp)
 8750eca:	85 c0                	test   %eax,%eax
 8750ecc:	0f 94 45 dc          	sete   -0x24(%ebp)
 8750ed0:	e8 bb d5 ff ff       	call   874e490 <_ZNK5yaSSL7SSL_CTX6getKeyEv>
 8750ed5:	85 c0                	test   %eax,%eax
 8750ed7:	0f 84 e3 00 00 00    	je     8750fc0 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x270>
 8750edd:	89 3c 24             	mov    %edi,(%esp)
 8750ee0:	e8 ab d5 ff ff       	call   874e490 <_ZNK5yaSSL7SSL_CTX6getKeyEv>
 8750ee5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750ee9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8750eec:	89 04 24             	mov    %eax,(%esp)
 8750eef:	e8 cc 6d 04 00       	call   8797cc0 <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E>
 8750ef4:	85 c0                	test   %eax,%eax
 8750ef6:	0f 85 a9 00 00 00    	jne    8750fa5 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x255>
 8750efc:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
 8750f00:	0f 85 2a 01 00 00    	jne    8751030 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x2e0>
 8750f06:	89 3c 24             	mov    %edi,(%esp)
 8750f09:	e8 92 d5 ff ff       	call   874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>
 8750f0e:	89 04 24             	mov    %eax,(%esp)
 8750f11:	e8 0a d5 ff ff       	call   874e420 <_ZNK5yaSSL10SSL_METHOD10verifyPeerEv>
 8750f16:	84 c0                	test   %al,%al
 8750f18:	0f 85 02 01 00 00    	jne    8751020 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x2d0>
 8750f1e:	89 3c 24             	mov    %edi,(%esp)
 8750f21:	e8 7a d5 ff ff       	call   874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>
 8750f26:	89 04 24             	mov    %eax,(%esp)
 8750f29:	e8 02 d5 ff ff       	call   874e430 <_ZNK5yaSSL10SSL_METHOD10verifyNoneEv>
 8750f2e:	84 c0                	test   %al,%al
 8750f30:	0f 85 da 00 00 00    	jne    8751010 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x2c0>
 8750f36:	89 3c 24             	mov    %edi,(%esp)
 8750f39:	e8 62 d5 ff ff       	call   874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>
 8750f3e:	89 04 24             	mov    %eax,(%esp)
 8750f41:	e8 fa d4 ff ff       	call   874e440 <_ZNK5yaSSL10SSL_METHOD10failNoCertEv>
 8750f46:	84 c0                	test   %al,%al
 8750f48:	0f 85 b2 00 00 00    	jne    8751000 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x2b0>
 8750f4e:	89 3c 24             	mov    %edi,(%esp)
 8750f51:	e8 1a d5 ff ff       	call   874e470 <_ZNK5yaSSL7SSL_CTX17getVerifyCallbackEv>
 8750f56:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750f5a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8750f5d:	89 04 24             	mov    %eax,(%esp)
 8750f60:	e8 1b 65 04 00       	call   8797480 <_ZN5yaSSL11CertManager17setVerifyCallbackEPFiiPNS_14X509_STORE_CTXEE>
 8750f65:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
 8750f69:	75 75                	jne    8750fe0 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x290>
 8750f6b:	89 3c 24             	mov    %edi,(%esp)
 8750f6e:	e8 ed d4 ff ff       	call   874e460 <_ZNK5yaSSL7SSL_CTX10GetCA_ListEv>
 8750f73:	8b 38                	mov    (%eax),%edi
 8750f75:	85 ff                	test   %edi,%edi
 8750f77:	74 38                	je     8750fb1 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x261>
 8750f79:	89 75 d8             	mov    %esi,-0x28(%ebp)
 8750f7c:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8750f7f:	eb 0e                	jmp    8750f8f <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x23f>
 8750f81:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8750f88:	8b 7f 04             	mov    0x4(%edi),%edi
 8750f8b:	85 ff                	test   %edi,%edi
 8750f8d:	74 22                	je     8750fb1 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x261>
 8750f8f:	8b 47 08             	mov    0x8(%edi),%eax
 8750f92:	89 34 24             	mov    %esi,(%esp)
 8750f95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750f99:	e8 62 6b 04 00       	call   8797b00 <_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E>
 8750f9e:	85 c0                	test   %eax,%eax
 8750fa0:	74 e6                	je     8750f88 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x238>
 8750fa2:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8750fa5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750fa9:	89 34 24             	mov    %esi,(%esp)
 8750fac:	e8 1f d0 ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8750fb1:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8750fb4:	5b                   	pop    %ebx
 8750fb5:	5e                   	pop    %esi
 8750fb6:	5f                   	pop    %edi
 8750fb7:	5d                   	pop    %ebp
 8750fb8:	c3                   	ret
 8750fb9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8750fc0:	80 7d dc 00          	cmpb   $0x0,-0x24(%ebp)
 8750fc4:	0f 84 3c ff ff ff    	je     8750f06 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x1b6>
 8750fca:	c7 44 24 04 6f 00 00 	movl   $0x6f,0x4(%esp)
 8750fd1:	00 
 8750fd2:	89 34 24             	mov    %esi,(%esp)
 8750fd5:	e8 f6 cf ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8750fda:	eb d5                	jmp    8750fb1 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x261>
 8750fdc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8750fe0:	89 3c 24             	mov    %edi,(%esp)
 8750fe3:	e8 d8 d4 ff ff       	call   874e4c0 <_ZNK5yaSSL7SSL_CTX11GetDH_ParmsEv>
 8750fe8:	89 34 24             	mov    %esi,(%esp)
 8750feb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750fef:	e8 ec fc ff ff       	call   8750ce0 <_ZN5yaSSL6Crypto5SetDHERKNS_8DH_ParmsE>
 8750ff4:	e9 72 ff ff ff       	jmp    8750f6b <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x21b>
 8750ff9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8751000:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751003:	89 04 24             	mov    %eax,(%esp)
 8751006:	e8 55 64 04 00       	call   8797460 <_ZN5yaSSL11CertManager13setFailNoCertEv>
 875100b:	e9 3e ff ff ff       	jmp    8750f4e <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x1fe>
 8751010:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751013:	89 04 24             	mov    %eax,(%esp)
 8751016:	e8 35 64 04 00       	call   8797450 <_ZN5yaSSL11CertManager13setVerifyNoneEv>
 875101b:	e9 16 ff ff ff       	jmp    8750f36 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x1e6>
 8751020:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751023:	89 04 24             	mov    %eax,(%esp)
 8751026:	e8 15 64 04 00       	call   8797440 <_ZN5yaSSL11CertManager13setVerifyPeerEv>
 875102b:	e9 ee fe ff ff       	jmp    8750f1e <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x1ce>
 8751030:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8751033:	89 04 24             	mov    %eax,(%esp)
 8751036:	e8 25 d9 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 875103b:	0f b7 80 2e 01 00 00 	movzwl 0x12e(%eax),%eax
 8751042:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 8751046:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8751049:	89 04 24             	mov    %eax,(%esp)
 875104c:	e8 4f de ff ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 8751051:	0f b6 80 df 06 00 00 	movzbl 0x6df(%eax),%eax
 8751058:	88 45 d3             	mov    %al,-0x2d(%ebp)
 875105b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875105e:	89 04 24             	mov    %eax,(%esp)
 8751061:	e8 6a 64 04 00       	call   87974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>
 8751066:	31 d2                	xor    %edx,%edx
 8751068:	83 f8 01             	cmp    $0x1,%eax
 875106b:	0f 95 c2             	setne  %dl
 875106e:	31 c9                	xor    %ecx,%ecx
 8751070:	83 f8 01             	cmp    $0x1,%eax
 8751073:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8751076:	0f 94 c1             	sete   %cl
 8751079:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 875107c:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 875107f:	89 04 24             	mov    %eax,(%esp)
 8751082:	e8 19 de ff ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 8751087:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 875108a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875108e:	89 c2                	mov    %eax,%edx
 8751090:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8751093:	89 14 24             	mov    %edx,(%esp)
 8751096:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875109a:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 875109e:	89 44 24 08          	mov    %eax,0x8(%esp)
 87510a2:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 87510a6:	66 89 44 24 04       	mov    %ax,0x4(%esp)
 87510ab:	e8 80 91 ff ff       	call   874a230 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb>
 87510b0:	e9 51 fe ff ff       	jmp    8750f06 <_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE+0x1b6>
 87510b5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87510b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::SSL @ 0x8750d50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::SSL(yaSSL::SSL_CTX*) */

void __thiscall yaSSL::SSL::SSL(SSL *this,SSL_CTX *param_1)

{
  Security *this_00;
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  SSL_METHOD *pSVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 extraout_var;
  RandomPool *this_01;
  CertManager *this_02;
  x509 *pxVar10;
  int *piVar11;
  _func_int_int_X509_STORE_CTX_ptr *p_Var12;
  DH_Parms *pDVar13;
  Parameters *pPVar14;
  bool bVar15;
  undefined2 uVar16;
  undefined2 local_1e;
  
  Crypto::Crypto((Crypto *)this);
  iVar5 = SSL_CTX::GetDH_Parms(param_1);
  uVar1 = *(undefined1 *)(iVar5 + 8);
  uVar6 = SSL_CTX::GetCiphers(param_1);
  pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
  uVar8 = SSL_METHOD::getSide(pSVar7);
  uVar9 = Crypto::use_random((Crypto *)this);
  SSL_CTX::getMethod(param_1);
  uVar16 = extraout_var;
  SSL_METHOD::getVersion();
  this_00 = (Security *)(this + 0x68);
  Security::Security(this_00,CONCAT22(uVar16,local_1e),uVar9,uVar8,uVar6,param_1,uVar1);
  States::States((States *)(this + 0x8ec));
  MD5::MD5((MD5 *)(this + 0x958));
  SHA::SHA((SHA *)(this + 0x960));
  Finished::Finished((Finished *)(this + 0x968));
  Socket::Socket((Socket *)(this + 0x9b8),-1);
  Buffers::Buffers((Buffers *)(this + 0x9c0));
  Log::Log((Log *)(this + 0x9dc),"yaSSL.log");
  this[0x9dd] = (SSL)0x0;
  this[0x9de] = (SSL)0x0;
  this_01 = (RandomPool *)Crypto::get_random((Crypto *)this);
  iVar5 = RandomPool::GetError(this_01);
  if (iVar5 == 0) {
    this_02 = (CertManager *)Crypto::use_certManager((Crypto *)this);
    pxVar10 = (x509 *)SSL_CTX::getCert(param_1);
    CertManager::CopySelfCert(this_02,pxVar10);
    piVar11 = (int *)Security::use_parms(this_00);
    bVar15 = *piVar11 == 0;
    iVar5 = SSL_CTX::getKey(param_1);
    if (iVar5 == 0) {
      if (bVar15) {
        SetError(this,0x6f);
        return;
      }
    }
    else {
      pxVar10 = (x509 *)SSL_CTX::getKey(param_1);
      iVar5 = CertManager::SetPrivateKey(this_02,pxVar10);
      uVar16 = (undefined2)((uint)pxVar10 >> 0x10);
      if (iVar5 != 0) goto LAB_08750fa5;
      if (bVar15) {
        iVar5 = Security::get_connection(this_00);
        uVar2 = *(undefined2 *)(iVar5 + 0x12e);
        iVar5 = Security::use_parms(this_00);
        uVar1 = *(undefined1 *)(iVar5 + 0x6df);
        iVar5 = CertManager::get_keyType(this_02);
        pPVar14 = (Parameters *)Security::use_parms(this_00);
        Parameters::SetSuites(pPVar14,CONCAT22(uVar16,uVar2),uVar1,iVar5 != 1,iVar5 == 1);
      }
    }
    pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
    cVar4 = SSL_METHOD::verifyPeer(pSVar7);
    if (cVar4 != '\0') {
      CertManager::setVerifyPeer(this_02);
    }
    pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
    cVar4 = SSL_METHOD::verifyNone(pSVar7);
    if (cVar4 != '\0') {
      CertManager::setVerifyNone(this_02);
    }
    pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
    cVar4 = SSL_METHOD::failNoCert(pSVar7);
    if (cVar4 != '\0') {
      CertManager::setFailNoCert(this_02);
    }
    p_Var12 = (_func_int_int_X509_STORE_CTX_ptr *)SSL_CTX::getVerifyCallback(param_1);
    CertManager::setVerifyCallback(this_02,p_Var12);
    if (bVar15) {
      pDVar13 = (DH_Parms *)SSL_CTX::GetDH_Parms(param_1);
      Crypto::SetDH((Crypto *)this,pDVar13);
    }
    piVar11 = (int *)SSL_CTX::GetCA_List(param_1);
    for (iVar3 = *piVar11; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar5 = CertManager::CopyCaCert(this_02,*(x509 **)(iVar3 + 8));
      if (iVar5 != 0) goto LAB_08750fa5;
    }
  }
  else {
LAB_08750fa5:
    SetError(this,iVar5);
  }
  return;
}

```

---

## Send

```asm
// === 0874f9a0 yaSSL::SSL::Send  [0x0874f9a0-0x874fa0f] ===
 874f9a0:	55                   	push   %ebp
 874f9a1:	89 e5                	mov    %esp,%ebp
 874f9a3:	83 ec 28             	sub    $0x28,%esp
 874f9a6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874f9a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 874f9ac:	e8 47 34 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f9b1:	81 c3 e7 d1 c1 00    	add    $0xc1d1e7,%ebx
 874f9b7:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874f9ba:	8b 7d 08             	mov    0x8(%ebp),%edi
 874f9bd:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874f9c0:	8b 75 10             	mov    0x10(%ebp),%esi
 874f9c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f9c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 874f9ce:	00 
 874f9cf:	8d 87 b8 09 00 00    	lea    0x9b8(%edi),%eax
 874f9d5:	89 74 24 08          	mov    %esi,0x8(%esp)
 874f9d9:	89 04 24             	mov    %eax,(%esp)
 874f9dc:	e8 6f 1c 05 00       	call   87a1650 <_ZNK5yaSSL6Socket4sendEPKhji>
 874f9e1:	39 c6                	cmp    %eax,%esi
 874f9e3:	74 10                	je     874f9f5 <_ZN5yaSSL3SSL4SendEPKhj+0x55>
 874f9e5:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 874f9ec:	00 
 874f9ed:	89 3c 24             	mov    %edi,(%esp)
 874f9f0:	e8 db e5 ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874f9f5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874f9f8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874f9fb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874f9fe:	89 ec                	mov    %ebp,%esp
 874fa00:	5d                   	pop    %ebp
 874fa01:	c3                   	ret
 874fa02:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874fa09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::Send @ 0x874f9a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::Send(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SSL::Send(SSL *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = Socket::send((Socket *)(this + 0x9b8),param_1,param_2,0);
  if (param_2 != uVar1) {
    SetError(this,0x71);
  }
  return;
}

```

---

## SetCompression

```asm
// === 0874dfc0 yaSSL::SSL::SetCompression  [0x0874dfc0-0x874dfcf] ===
 874dfc0:	55                   	push   %ebp
 874dfc1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 874dfc6:	89 e5                	mov    %esp,%ebp
 874dfc8:	5d                   	pop    %ebp
 874dfc9:	c3                   	ret
 874dfca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::SetCompression @ 0x874dfc0

/* yaSSL::SSL::SetCompression() */

undefined4 yaSSL::SSL::SetCompression(void)

{
  return 0xffffffff;
}

```

---

## SetError

```asm
// === 0874dfd0 yaSSL::SSL::SetError  [0x0874dfd0-0x874dfff] ===
 874dfd0:	55                   	push   %ebp
 874dfd1:	89 e5                	mov    %esp,%ebp
 874dfd3:	53                   	push   %ebx
 874dfd4:	83 ec 14             	sub    $0x14,%esp
 874dfd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 874dfda:	e8 19 4e fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874dfdf:	81 c3 b9 eb c1 00    	add    $0xc1ebb9,%ebx
 874dfe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 874dfe9:	8b 45 08             	mov    0x8(%ebp),%eax
 874dfec:	05 ec 08 00 00       	add    $0x8ec,%eax
 874dff1:	89 04 24             	mov    %eax,(%esp)
 874dff4:	e8 77 ff ff ff       	call   874df70 <_ZN5yaSSL6States8SetErrorENS_10YasslErrorE>
 874dff9:	83 c4 14             	add    $0x14,%esp
 874dffc:	5b                   	pop    %ebx
 874dffd:	5d                   	pop    %ebp
 874dffe:	c3                   	ret
 874dfff:	90                   	nop

```

```c
// yaSSL::SSL::SetError @ 0x874dfd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::SetError(yaSSL::YasslError) */

void __thiscall yaSSL::SSL::SetError(SSL *this,undefined4 param_2)

{
  States::SetError((States *)(this + 0x8ec),param_2);
  return;
}

```

---

## SetQuietShutdown

```asm
// === 0874e000 yaSSL::SSL::SetQuietShutdown  [0x0874e000-0x874e01f] ===
 874e000:	55                   	push   %ebp
 874e001:	89 e5                	mov    %esp,%ebp
 874e003:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e006:	8b 45 08             	mov    0x8(%ebp),%eax
 874e009:	88 90 dd 09 00 00    	mov    %dl,0x9dd(%eax)
 874e00f:	5d                   	pop    %ebp
 874e010:	c3                   	ret
 874e011:	90                   	nop
 874e012:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874e019:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::SetQuietShutdown @ 0x874e000

/* yaSSL::SSL::SetQuietShutdown(bool) */

void __thiscall yaSSL::SSL::SetQuietShutdown(SSL *this,bool param_1)

{
  this[0x9dd] = (SSL)param_1;
  return;
}

```

---

## UnSetCompression

```asm
// === 0874ee70 yaSSL::SSL::UnSetCompression  [0x0874ee70-0x874ee9f] ===
 874ee70:	55                   	push   %ebp
 874ee71:	89 e5                	mov    %esp,%ebp
 874ee73:	53                   	push   %ebx
 874ee74:	e8 7f 3f fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ee79:	81 c3 1f dd c1 00    	add    $0xc1dd1f,%ebx
 874ee7f:	83 ec 14             	sub    $0x14,%esp
 874ee82:	8b 45 08             	mov    0x8(%ebp),%eax
 874ee85:	83 c0 68             	add    $0x68,%eax
 874ee88:	89 04 24             	mov    %eax,(%esp)
 874ee8b:	e8 70 fe ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874ee90:	c6 80 2d 01 00 00 00 	movb   $0x0,0x12d(%eax)
 874ee97:	83 c4 14             	add    $0x14,%esp
 874ee9a:	5b                   	pop    %ebx
 874ee9b:	5d                   	pop    %ebp
 874ee9c:	c3                   	ret
 874ee9d:	90                   	nop
 874ee9e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::UnSetCompression @ 0x874ee70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::UnSetCompression() */

void __thiscall yaSSL::SSL::UnSetCompression(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined1 *)(iVar1 + 0x12d) = 0;
  return;
}

```

---

## addBuffer

```asm
// === 08752610 yaSSL::SSL::addBuffer  [0x08752610-0x875268f] ===
 8752610:	55                   	push   %ebp
 8752611:	89 e5                	mov    %esp,%ebp
 8752613:	56                   	push   %esi
 8752614:	53                   	push   %ebx
 8752615:	e8 de 07 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875261a:	81 c3 7e a5 c1 00    	add    $0xc1a57e,%ebx
 8752620:	83 ec 10             	sub    $0x10,%esp
 8752623:	8b 45 08             	mov    0x8(%ebp),%eax
 8752626:	05 c0 09 00 00       	add    $0x9c0,%eax
 875262b:	89 04 24             	mov    %eax,(%esp)
 875262e:	e8 1d c3 ff ff       	call   874e950 <_ZN5yaSSL7Buffers12useHandShakeEv>
 8752633:	89 c6                	mov    %eax,%esi
 8752635:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875263a:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8752641:	e8 0a fd ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8752646:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 875264c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8752653:	8b 55 0c             	mov    0xc(%ebp),%edx
 8752656:	89 50 08             	mov    %edx,0x8(%eax)
 8752659:	8b 56 04             	mov    0x4(%esi),%edx
 875265c:	85 d2                	test   %edx,%edx
 875265e:	74 18                	je     8752678 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE+0x68>
 8752660:	89 42 04             	mov    %eax,0x4(%edx)
 8752663:	8b 56 04             	mov    0x4(%esi),%edx
 8752666:	89 10                	mov    %edx,(%eax)
 8752668:	83 46 08 01          	addl   $0x1,0x8(%esi)
 875266c:	89 46 04             	mov    %eax,0x4(%esi)
 875266f:	83 c4 10             	add    $0x10,%esp
 8752672:	5b                   	pop    %ebx
 8752673:	5e                   	pop    %esi
 8752674:	5d                   	pop    %ebp
 8752675:	c3                   	ret
 8752676:	66 90                	xchg   %ax,%ax
 8752678:	83 46 08 01          	addl   $0x1,0x8(%esi)
 875267c:	89 06                	mov    %eax,(%esi)
 875267e:	89 46 04             	mov    %eax,0x4(%esi)
 8752681:	83 c4 10             	add    $0x10,%esp
 8752684:	5b                   	pop    %ebx
 8752685:	5e                   	pop    %esi
 8752686:	5d                   	pop    %ebp
 8752687:	c3                   	ret
 8752688:	90                   	nop
 8752689:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::addBuffer @ 0x8752610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::addBuffer(yaSSL::output_buffer*) */

void __thiscall yaSSL::SSL::addBuffer(SSL *this,output_buffer *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)Buffers::useHandShake((Buffers *)(this + 0x9c0));
  puVar2 = operator_new__(0xc,0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = param_1;
  if (puVar1[1] != 0) {
    *(undefined4 **)(puVar1[1] + 4) = puVar2;
    *puVar2 = puVar1[1];
    puVar1[2] = puVar1[2] + 1;
    puVar1[1] = puVar2;
    return;
  }
  puVar1[2] = puVar1[2] + 1;
  *puVar1 = puVar2;
  puVar1[1] = puVar2;
  return;
}

```

---

## addData

```asm
// === 08752690 yaSSL::SSL::addData  [0x08752690-0x875271f] ===
 8752690:	55                   	push   %ebp
 8752691:	89 e5                	mov    %esp,%ebp
 8752693:	83 ec 28             	sub    $0x28,%esp
 8752696:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8752699:	e8 5a 07 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875269e:	81 c3 fa a4 c1 00    	add    $0xc1a4fa,%ebx
 87526a4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87526a7:	8b 7d 08             	mov    0x8(%ebp),%edi
 87526aa:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87526ad:	8d 87 c0 09 00 00    	lea    0x9c0(%edi),%eax
 87526b3:	89 04 24             	mov    %eax,(%esp)
 87526b6:	e8 85 c2 ff ff       	call   874e940 <_ZN5yaSSL7Buffers7useDataEv>
 87526bb:	89 c6                	mov    %eax,%esi
 87526bd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87526c2:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87526c9:	e8 82 fc ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87526ce:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87526d4:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87526db:	8b 55 0c             	mov    0xc(%ebp),%edx
 87526de:	89 50 08             	mov    %edx,0x8(%eax)
 87526e1:	8b 56 04             	mov    0x4(%esi),%edx
 87526e4:	85 d2                	test   %edx,%edx
 87526e6:	74 30                	je     8752718 <_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE+0x88>
 87526e8:	89 42 04             	mov    %eax,0x4(%edx)
 87526eb:	8b 56 04             	mov    0x4(%esi),%edx
 87526ee:	89 10                	mov    %edx,(%eax)
 87526f0:	83 46 08 01          	addl   $0x1,0x8(%esi)
 87526f4:	89 46 04             	mov    %eax,0x4(%esi)
 87526f7:	80 bf de 09 00 00 00 	cmpb   $0x0,0x9de(%edi)
 87526fe:	75 07                	jne    8752707 <_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE+0x77>
 8752700:	c6 87 de 09 00 00 01 	movb   $0x1,0x9de(%edi)
 8752707:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875270a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875270d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8752710:	89 ec                	mov    %ebp,%esp
 8752712:	5d                   	pop    %ebp
 8752713:	c3                   	ret
 8752714:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8752718:	89 06                	mov    %eax,(%esi)
 875271a:	eb d4                	jmp    87526f0 <_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE+0x60>
 875271c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::addData @ 0x8752690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::addData(yaSSL::input_buffer*) */

void __thiscall yaSSL::SSL::addData(SSL *this,input_buffer *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)Buffers::useData((Buffers *)(this + 0x9c0));
  puVar2 = operator_new__(0xc,0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = param_1;
  if (puVar1[1] == 0) {
    *puVar1 = puVar2;
  }
  else {
    *(undefined4 **)(puVar1[1] + 4) = puVar2;
    *puVar2 = puVar1[1];
  }
  puVar1[2] = puVar1[2] + 1;
  puVar1[1] = puVar2;
  if (this[0x9de] == (SSL)0x0) {
    this[0x9de] = (SSL)0x1;
  }
  return;
}

```

---

## bufferedData

```asm
// === 0874fa10 yaSSL::SSL::bufferedData  [0x0874fa10-0x874fa6f] ===
 874fa10:	55                   	push   %ebp
 874fa11:	89 e5                	mov    %esp,%ebp
 874fa13:	57                   	push   %edi
 874fa14:	31 ff                	xor    %edi,%edi
 874fa16:	56                   	push   %esi
 874fa17:	53                   	push   %ebx
 874fa18:	e8 db 33 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874fa1d:	81 c3 7b d1 c1 00    	add    $0xc1d17b,%ebx
 874fa23:	83 ec 1c             	sub    $0x1c,%esp
 874fa26:	8b 75 08             	mov    0x8(%ebp),%esi
 874fa29:	81 c6 c0 09 00 00    	add    $0x9c0,%esi
 874fa2f:	89 34 24             	mov    %esi,(%esp)
 874fa32:	e8 e9 ee ff ff       	call   874e920 <_ZNK5yaSSL7Buffers7getDataEv>
 874fa37:	89 34 24             	mov    %esi,(%esp)
 874fa3a:	e8 e1 ee ff ff       	call   874e920 <_ZNK5yaSSL7Buffers7getDataEv>
 874fa3f:	8b 30                	mov    (%eax),%esi
 874fa41:	85 f6                	test   %esi,%esi
 874fa43:	74 17                	je     874fa5c <_ZN5yaSSL3SSL12bufferedDataEv+0x4c>
 874fa45:	8d 76 00             	lea    0x0(%esi),%esi
 874fa48:	8b 46 08             	mov    0x8(%esi),%eax
 874fa4b:	89 04 24             	mov    %eax,(%esp)
 874fa4e:	e8 6d 73 04 00       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 874fa53:	8b 76 04             	mov    0x4(%esi),%esi
 874fa56:	01 c7                	add    %eax,%edi
 874fa58:	85 f6                	test   %esi,%esi
 874fa5a:	75 ec                	jne    874fa48 <_ZN5yaSSL3SSL12bufferedDataEv+0x38>
 874fa5c:	83 c4 1c             	add    $0x1c,%esp
 874fa5f:	89 f8                	mov    %edi,%eax
 874fa61:	5b                   	pop    %ebx
 874fa62:	5e                   	pop    %esi
 874fa63:	5f                   	pop    %edi
 874fa64:	5d                   	pop    %ebp
 874fa65:	c3                   	ret
 874fa66:	8d 76 00             	lea    0x0(%esi),%esi
 874fa69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::bufferedData @ 0x874fa10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::bufferedData() */

int __thiscall yaSSL::SSL::bufferedData(SSL *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  Buffers::getData((Buffers *)(this + 0x9c0));
  piVar2 = (int *)Buffers::getData((Buffers *)(this + 0x9c0));
  for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = input_buffer::get_remaining(*(input_buffer **)(iVar1 + 8));
    iVar4 = iVar4 + iVar3;
  }
  return iVar4;
}

```

---

## deriveKeys

```asm
// === 0874fe30 yaSSL::SSL::deriveKeys  [0x0874fe30-0x87501bf] ===
 874fe30:	55                   	push   %ebp
 874fe31:	89 e5                	mov    %esp,%ebp
 874fe33:	57                   	push   %edi
 874fe34:	56                   	push   %esi
 874fe35:	53                   	push   %ebx
 874fe36:	e8 bd 2f fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874fe3b:	81 c3 5d cd c1 00    	add    $0xc1cd5d,%ebx
 874fe41:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 874fe47:	8b 45 08             	mov    0x8(%ebp),%eax
 874fe4a:	83 c0 68             	add    $0x68,%eax
 874fe4d:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 874fe53:	89 04 24             	mov    %eax,(%esp)
 874fe56:	e8 f5 eb ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874fe5b:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 874fe61:	0f b6 70 14          	movzbl 0x14(%eax),%esi
 874fe65:	89 0c 24             	mov    %ecx,(%esp)
 874fe68:	e8 e3 eb ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874fe6d:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 874fe71:	8d 34 30             	lea    (%eax,%esi,1),%esi
 874fe74:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 874fe7a:	89 04 24             	mov    %eax,(%esp)
 874fe7d:	e8 ce eb ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874fe82:	8d 4d c8             	lea    -0x38(%ebp),%ecx
 874fe85:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 874fe89:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 874fe8f:	89 0c 24             	mov    %ecx,(%esp)
 874fe92:	01 c6                	add    %eax,%esi
 874fe94:	8d 74 36 0f          	lea    0xf(%esi,%esi,1),%esi
 874fe98:	89 b5 e4 fe ff ff    	mov    %esi,-0x11c(%ebp)
 874fe9e:	c1 bd e4 fe ff ff 04 	sarl   $0x4,-0x11c(%ebp)
 874fea5:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 874feab:	c1 e0 04             	shl    $0x4,%eax
 874feae:	89 44 24 04          	mov    %eax,0x4(%esp)
 874feb2:	e8 29 74 04 00       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 874feb7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 874feba:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 874fec0:	89 04 24             	mov    %eax,(%esp)
 874fec3:	e8 48 a2 04 00       	call   879a110 <_ZN5yaSSL3MD5C1Ev>
 874fec8:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 874fecb:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 874fed1:	89 0c 24             	mov    %ecx,(%esp)
 874fed4:	e8 b7 a2 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 874fed9:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 874fedf:	89 04 24             	mov    %eax,(%esp)
 874fee2:	e8 79 ea ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fee7:	8d 50 04             	lea    0x4(%eax),%edx
 874feea:	8b 40 04             	mov    0x4(%eax),%eax
 874feed:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 874fef3:	8b 42 04             	mov    0x4(%edx),%eax
 874fef6:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 874fefc:	8b 42 08             	mov    0x8(%edx),%eax
 874feff:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 874ff05:	8b 42 0c             	mov    0xc(%edx),%eax
 874ff08:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 874ff0e:	8b 42 10             	mov    0x10(%edx),%eax
 874ff11:	89 45 80             	mov    %eax,-0x80(%ebp)
 874ff14:	8b 42 14             	mov    0x14(%edx),%eax
 874ff17:	89 45 84             	mov    %eax,-0x7c(%ebp)
 874ff1a:	8b 42 18             	mov    0x18(%edx),%eax
 874ff1d:	89 45 88             	mov    %eax,-0x78(%ebp)
 874ff20:	8b 42 1c             	mov    0x1c(%edx),%eax
 874ff23:	89 45 8c             	mov    %eax,-0x74(%ebp)
 874ff26:	8b 42 20             	mov    0x20(%edx),%eax
 874ff29:	89 45 90             	mov    %eax,-0x70(%ebp)
 874ff2c:	8b 42 24             	mov    0x24(%edx),%eax
 874ff2f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 874ff32:	8b 42 28             	mov    0x28(%edx),%eax
 874ff35:	89 45 98             	mov    %eax,-0x68(%ebp)
 874ff38:	8b 42 2c             	mov    0x2c(%edx),%eax
 874ff3b:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 874ff41:	89 45 9c             	mov    %eax,-0x64(%ebp)
 874ff44:	85 d2                	test   %edx,%edx
 874ff46:	0f 84 1c 02 00 00    	je     8750168 <_ZN5yaSSL3SSL10deriveKeysEv+0x338>
 874ff4c:	8d 8d f9 fe ff ff    	lea    -0x107(%ebp),%ecx
 874ff52:	31 f6                	xor    %esi,%esi
 874ff54:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 874ff57:	c7 85 ec fe ff ff 00 	movl   $0x0,-0x114(%ebp)
 874ff5e:	00 00 00 
 874ff61:	8d bd 70 ff ff ff    	lea    -0x90(%ebp),%edi
 874ff67:	89 8d f4 fe ff ff    	mov    %ecx,-0x10c(%ebp)
 874ff6d:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 874ff73:	e9 8f 01 00 00       	jmp    8750107 <_ZN5yaSSL3SSL10deriveKeysEv+0x2d7>
 874ff78:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 874ff7e:	8d 4e 01             	lea    0x1(%esi),%ecx
 874ff81:	89 8d e8 fe ff ff    	mov    %ecx,-0x118(%ebp)
 874ff87:	89 04 24             	mov    %eax,(%esp)
 874ff8a:	e8 d1 e9 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874ff8f:	8b 95 f4 fe ff ff    	mov    -0x10c(%ebp),%edx
 874ff95:	03 95 e8 fe ff ff    	add    -0x118(%ebp),%edx
 874ff9b:	8d 48 04             	lea    0x4(%eax),%ecx
 874ff9e:	8b 40 04             	mov    0x4(%eax),%eax
 874ffa1:	89 02                	mov    %eax,(%edx)
 874ffa3:	8b 41 04             	mov    0x4(%ecx),%eax
 874ffa6:	89 42 04             	mov    %eax,0x4(%edx)
 874ffa9:	8b 41 08             	mov    0x8(%ecx),%eax
 874ffac:	89 42 08             	mov    %eax,0x8(%edx)
 874ffaf:	8b 41 0c             	mov    0xc(%ecx),%eax
 874ffb2:	89 42 0c             	mov    %eax,0xc(%edx)
 874ffb5:	8b 41 10             	mov    0x10(%ecx),%eax
 874ffb8:	89 42 10             	mov    %eax,0x10(%edx)
 874ffbb:	8b 41 14             	mov    0x14(%ecx),%eax
 874ffbe:	89 42 14             	mov    %eax,0x14(%edx)
 874ffc1:	8b 41 18             	mov    0x18(%ecx),%eax
 874ffc4:	89 42 18             	mov    %eax,0x18(%edx)
 874ffc7:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874ffca:	89 42 1c             	mov    %eax,0x1c(%edx)
 874ffcd:	8b 41 20             	mov    0x20(%ecx),%eax
 874ffd0:	89 42 20             	mov    %eax,0x20(%edx)
 874ffd3:	8b 41 24             	mov    0x24(%ecx),%eax
 874ffd6:	89 42 24             	mov    %eax,0x24(%edx)
 874ffd9:	8b 41 28             	mov    0x28(%ecx),%eax
 874ffdc:	89 42 28             	mov    %eax,0x28(%edx)
 874ffdf:	8b 41 2c             	mov    0x2c(%ecx),%eax
 874ffe2:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 874ffe8:	89 42 2c             	mov    %eax,0x2c(%edx)
 874ffeb:	89 0c 24             	mov    %ecx,(%esp)
 874ffee:	e8 6d e9 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fff3:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 874fff9:	8d 54 31 31          	lea    0x31(%ecx,%esi,1),%edx
 874fffd:	8d 48 54             	lea    0x54(%eax),%ecx
 8750000:	8b 40 54             	mov    0x54(%eax),%eax
 8750003:	89 02                	mov    %eax,(%edx)
 8750005:	8b 41 04             	mov    0x4(%ecx),%eax
 8750008:	89 42 04             	mov    %eax,0x4(%edx)
 875000b:	8b 41 08             	mov    0x8(%ecx),%eax
 875000e:	89 42 08             	mov    %eax,0x8(%edx)
 8750011:	8b 41 0c             	mov    0xc(%ecx),%eax
 8750014:	89 42 0c             	mov    %eax,0xc(%edx)
 8750017:	8b 41 10             	mov    0x10(%ecx),%eax
 875001a:	89 42 10             	mov    %eax,0x10(%edx)
 875001d:	8b 41 14             	mov    0x14(%ecx),%eax
 8750020:	89 42 14             	mov    %eax,0x14(%edx)
 8750023:	8b 41 18             	mov    0x18(%ecx),%eax
 8750026:	89 42 18             	mov    %eax,0x18(%edx)
 8750029:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875002c:	89 42 1c             	mov    %eax,0x1c(%edx)
 875002f:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 8750035:	89 04 24             	mov    %eax,(%esp)
 8750038:	e8 23 e9 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 875003d:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 8750043:	8d 54 31 51          	lea    0x51(%ecx,%esi,1),%edx
 8750047:	83 c6 71             	add    $0x71,%esi
 875004a:	8d 48 34             	lea    0x34(%eax),%ecx
 875004d:	8b 40 34             	mov    0x34(%eax),%eax
 8750050:	89 02                	mov    %eax,(%edx)
 8750052:	8b 41 04             	mov    0x4(%ecx),%eax
 8750055:	89 42 04             	mov    %eax,0x4(%edx)
 8750058:	8b 41 08             	mov    0x8(%ecx),%eax
 875005b:	89 42 08             	mov    %eax,0x8(%edx)
 875005e:	8b 41 0c             	mov    0xc(%ecx),%eax
 8750061:	89 42 0c             	mov    %eax,0xc(%edx)
 8750064:	8b 41 10             	mov    0x10(%ecx),%eax
 8750067:	89 42 10             	mov    %eax,0x10(%edx)
 875006a:	8b 41 14             	mov    0x14(%ecx),%eax
 875006d:	89 42 14             	mov    %eax,0x14(%edx)
 8750070:	8b 41 18             	mov    0x18(%ecx),%eax
 8750073:	89 42 18             	mov    %eax,0x18(%edx)
 8750076:	8b 41 1c             	mov    0x1c(%ecx),%eax
 8750079:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 875007f:	89 42 1c             	mov    %eax,0x1c(%edx)
 8750082:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 8750088:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875008c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8750090:	89 44 24 08          	mov    %eax,0x8(%esp)
 8750094:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 875009a:	89 04 24             	mov    %eax,(%esp)
 875009d:	e8 1e 99 04 00       	call   87999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>
 87500a2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87500a5:	89 47 30             	mov    %eax,0x30(%edi)
 87500a8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87500ab:	89 47 34             	mov    %eax,0x34(%edi)
 87500ae:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87500b1:	89 47 38             	mov    %eax,0x38(%edi)
 87500b4:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87500b7:	89 47 3c             	mov    %eax,0x3c(%edi)
 87500ba:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87500bd:	89 47 40             	mov    %eax,0x40(%edi)
 87500c0:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 87500c6:	89 0c 24             	mov    %ecx,(%esp)
 87500c9:	e8 62 6c 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 87500ce:	c7 44 24 0c 44 00 00 	movl   $0x44,0xc(%esp)
 87500d5:	00 
 87500d6:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87500da:	03 85 ec fe ff ff    	add    -0x114(%ebp),%eax
 87500e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87500e4:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 87500ea:	89 04 24             	mov    %eax,(%esp)
 87500ed:	e8 9e 9b 04 00       	call   8799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>
 87500f2:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 87500f8:	83 85 ec fe ff ff 10 	addl   $0x10,-0x114(%ebp)
 87500ff:	39 b5 e4 fe ff ff    	cmp    %esi,-0x11c(%ebp)
 8750105:	7e 61                	jle    8750168 <_ZN5yaSSL3SSL10deriveKeysEv+0x338>
 8750107:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 875010d:	89 f2                	mov    %esi,%edx
 875010f:	e8 fc f0 ff ff       	call   874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>
 8750114:	84 c0                	test   %al,%al
 8750116:	0f 85 5c fe ff ff    	jne    874ff78 <_ZN5yaSSL3SSL10deriveKeysEv+0x148>
 875011c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875011f:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 8750126:	00 
 8750127:	89 0c 24             	mov    %ecx,(%esp)
 875012a:	e8 a1 de ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 875012f:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 8750135:	89 04 24             	mov    %eax,(%esp)
 8750138:	e8 73 8b 04 00       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 875013d:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 8750143:	89 0c 24             	mov    %ecx,(%esp)
 8750146:	e8 f5 8b 04 00       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 875014b:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 8750151:	89 04 24             	mov    %eax,(%esp)
 8750154:	e8 07 72 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8750159:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 875015f:	5b                   	pop    %ebx
 8750160:	5e                   	pop    %esi
 8750161:	5f                   	pop    %edi
 8750162:	5d                   	pop    %ebp
 8750163:	c3                   	ret
 8750164:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8750168:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 875016e:	89 0c 24             	mov    %ecx,(%esp)
 8750171:	e8 ba 6b 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8750176:	89 44 24 04          	mov    %eax,0x4(%esp)
 875017a:	8b 45 08             	mov    0x8(%ebp),%eax
 875017d:	89 04 24             	mov    %eax,(%esp)
 8750180:	e8 2b ef ff ff       	call   874f0b0 <_ZN5yaSSL3SSL9storeKeysEPKh>
 8750185:	8b 8d dc fe ff ff    	mov    -0x124(%ebp),%ecx
 875018b:	89 0c 24             	mov    %ecx,(%esp)
 875018e:	e8 1d 8b 04 00       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 8750193:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 8750199:	89 04 24             	mov    %eax,(%esp)
 875019c:	e8 9f 8b 04 00       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 87501a1:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 87501a7:	89 0c 24             	mov    %ecx,(%esp)
 87501aa:	e8 b1 71 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 87501af:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 87501b5:	5b                   	pop    %ebx
 87501b6:	5e                   	pop    %esi
 87501b7:	5f                   	pop    %edi
 87501b8:	5d                   	pop    %ebp
 87501b9:	c3                   	ret
 87501ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::deriveKeys @ 0x874fe30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::deriveKeys() */

void __thiscall yaSSL::SSL::deriveKeys(SSL *this)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  Security *this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  int local_118;
  uchar local_10b [5];
  undefined4 local_106 [28];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  input_buffer local_3c [16];
  SHA local_2c [8];
  MD5 local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x874fe3b;
  this_00 = (Security *)(this + 0x68);
  iVar5 = Security::get_parms(this_00);
  bVar2 = *(byte *)(iVar5 + 0x14);
  iVar5 = Security::get_parms(this_00);
  bVar3 = *(byte *)(iVar5 + 0xc);
  iVar5 = Security::get_parms(this_00);
  iVar5 = (int)(((uint)bVar3 + (uint)bVar2 + (uint)*(byte *)(iVar5 + 0xd)) * 2 + 0xf) >> 4;
  input_buffer::input_buffer(local_3c,iVar5 << 4);
  MD5::MD5(local_24);
  SHA::SHA(local_2c);
  iVar6 = Security::get_connection(this_00);
  local_94 = *(undefined4 *)(iVar6 + 4);
  local_90 = *(undefined4 *)(iVar6 + 8);
  local_8c = *(undefined4 *)(iVar6 + 0xc);
  local_88 = *(undefined4 *)(iVar6 + 0x10);
  local_84 = *(undefined4 *)(iVar6 + 0x14);
  local_80 = *(undefined4 *)(iVar6 + 0x18);
  local_7c = *(undefined4 *)(iVar6 + 0x1c);
  local_78 = *(undefined4 *)(iVar6 + 0x20);
  local_74 = *(undefined4 *)(iVar6 + 0x24);
  local_70 = *(undefined4 *)(iVar6 + 0x28);
  local_6c = *(undefined4 *)(iVar6 + 0x2c);
  local_68 = *(undefined4 *)(iVar6 + 0x30);
  if (iVar5 != 0) {
    local_118 = 0;
    iVar6 = 0;
    do {
      cVar4 = (anonymous_namespace)::setPrefix(local_10b,iVar6);
      if (cVar4 == '\0') {
        SetError(this,0x69);
        SHA::~SHA(local_2c);
        MD5::~MD5(local_24);
        input_buffer::~input_buffer(local_3c);
        return;
      }
      iVar1 = iVar6 + 1;
      iVar7 = Security::get_connection(this_00);
      *(undefined4 *)(local_10b + iVar1) = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)((int)local_106 + iVar6) = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)((int)local_106 + iVar6 + 4) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)((int)local_106 + iVar6 + 8) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)local_106 + iVar6 + 0xc) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)((int)local_106 + iVar6 + 0x10) = *(undefined4 *)(iVar7 + 0x18);
      *(undefined4 *)((int)local_106 + iVar6 + 0x14) = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x18) = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)((int)local_106 + iVar6 + 0x1c) = *(undefined4 *)(iVar7 + 0x24);
      *(undefined4 *)((int)local_106 + iVar6 + 0x20) = *(undefined4 *)(iVar7 + 0x28);
      *(undefined4 *)((int)local_106 + iVar6 + 0x24) = *(undefined4 *)(iVar7 + 0x2c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x28) = *(undefined4 *)(iVar7 + 0x30);
      iVar7 = Security::get_connection(this_00);
      *(undefined4 *)((int)local_106 + iVar6 + 0x2c) = *(undefined4 *)(iVar7 + 0x54);
      *(undefined4 *)((int)local_106 + iVar6 + 0x30) = *(undefined4 *)(iVar7 + 0x58);
      *(undefined4 *)((int)local_106 + iVar6 + 0x34) = *(undefined4 *)(iVar7 + 0x5c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x38) = *(undefined4 *)(iVar7 + 0x60);
      *(undefined4 *)((int)local_106 + iVar6 + 0x3c) = *(undefined4 *)(iVar7 + 100);
      *(undefined4 *)((int)local_106 + iVar6 + 0x40) = *(undefined4 *)(iVar7 + 0x68);
      *(undefined4 *)((int)local_106 + iVar6 + 0x44) = *(undefined4 *)(iVar7 + 0x6c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x48) = *(undefined4 *)(iVar7 + 0x70);
      iVar7 = Security::get_connection(this_00);
      *(undefined4 *)((int)local_106 + iVar6 + 0x4c) = *(undefined4 *)(iVar7 + 0x34);
      *(undefined4 *)((int)local_106 + iVar6 + 0x50) = *(undefined4 *)(iVar7 + 0x38);
      *(undefined4 *)((int)local_106 + iVar6 + 0x54) = *(undefined4 *)(iVar7 + 0x3c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x58) = *(undefined4 *)(iVar7 + 0x40);
      *(undefined4 *)((int)local_106 + iVar6 + 0x5c) = *(undefined4 *)(iVar7 + 0x44);
      *(undefined4 *)((int)local_106 + iVar6 + 0x60) = *(undefined4 *)(iVar7 + 0x48);
      *(undefined4 *)((int)local_106 + iVar6 + 100) = *(undefined4 *)(iVar7 + 0x4c);
      *(undefined4 *)((int)local_106 + iVar6 + 0x68) = *(undefined4 *)(iVar7 + 0x50);
      SHA::get_digest(local_2c,(uchar *)&local_50,local_10b,iVar6 + 0x71);
      local_64 = local_50;
      local_60 = local_4c;
      local_5c = local_48;
      local_58 = local_44;
      local_54 = local_40;
      iVar6 = input_buffer::get_buffer(local_3c);
      MD5::get_digest(local_24,(uchar *)(iVar6 + local_118),(uchar *)&local_94,0x44);
      local_118 = local_118 + 0x10;
      iVar6 = iVar1;
    } while (iVar1 < iVar5);
  }
  puVar8 = (uchar *)input_buffer::get_buffer(local_3c);
  storeKeys(this,puVar8);
  SHA::~SHA(local_2c);
  MD5::~MD5(local_24);
  input_buffer::~input_buffer(local_3c);
  return;
}

```

---

## deriveTLSKeys

```asm
// === 0874fbc0 yaSSL::SSL::deriveTLSKeys  [0x0874fbc0-0x874fd1f] ===
 874fbc0:	55                   	push   %ebp
 874fbc1:	89 e5                	mov    %esp,%ebp
 874fbc3:	57                   	push   %edi
 874fbc4:	56                   	push   %esi
 874fbc5:	53                   	push   %ebx
 874fbc6:	e8 2d 32 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874fbcb:	81 c3 cd cf c1 00    	add    $0xc1cfcd,%ebx
 874fbd1:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 874fbd7:	8b 75 08             	mov    0x8(%ebp),%esi
 874fbda:	83 c6 68             	add    $0x68,%esi
 874fbdd:	89 34 24             	mov    %esi,(%esp)
 874fbe0:	e8 6b ee ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874fbe5:	0f b6 78 14          	movzbl 0x14(%eax),%edi
 874fbe9:	89 34 24             	mov    %esi,(%esp)
 874fbec:	e8 5f ee ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874fbf1:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 874fbf5:	89 34 24             	mov    %esi,(%esp)
 874fbf8:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 874fbfb:	e8 50 ee ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874fc00:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 874fc04:	8d 14 17             	lea    (%edi,%edx,1),%edx
 874fc07:	01 d2                	add    %edx,%edx
 874fc09:	8d 7d d8             	lea    -0x28(%ebp),%edi
 874fc0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 874fc10:	89 55 90             	mov    %edx,-0x70(%ebp)
 874fc13:	89 3c 24             	mov    %edi,(%esp)
 874fc16:	e8 c5 76 04 00       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 874fc1b:	89 34 24             	mov    %esi,(%esp)
 874fc1e:	e8 3d ed ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fc23:	8d 4d 98             	lea    -0x68(%ebp),%ecx
 874fc26:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 874fc29:	8d 48 54             	lea    0x54(%eax),%ecx
 874fc2c:	8b 40 54             	mov    0x54(%eax),%eax
 874fc2f:	89 45 98             	mov    %eax,-0x68(%ebp)
 874fc32:	8b 41 04             	mov    0x4(%ecx),%eax
 874fc35:	89 45 9c             	mov    %eax,-0x64(%ebp)
 874fc38:	8b 41 08             	mov    0x8(%ecx),%eax
 874fc3b:	89 45 a0             	mov    %eax,-0x60(%ebp)
 874fc3e:	8b 41 0c             	mov    0xc(%ecx),%eax
 874fc41:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 874fc44:	8b 41 10             	mov    0x10(%ecx),%eax
 874fc47:	89 45 a8             	mov    %eax,-0x58(%ebp)
 874fc4a:	8b 41 14             	mov    0x14(%ecx),%eax
 874fc4d:	89 45 ac             	mov    %eax,-0x54(%ebp)
 874fc50:	8b 41 18             	mov    0x18(%ecx),%eax
 874fc53:	89 45 b0             	mov    %eax,-0x50(%ebp)
 874fc56:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874fc59:	89 34 24             	mov    %esi,(%esp)
 874fc5c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 874fc5f:	e8 fc ec ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fc64:	8d 48 34             	lea    0x34(%eax),%ecx
 874fc67:	8b 40 34             	mov    0x34(%eax),%eax
 874fc6a:	89 45 b8             	mov    %eax,-0x48(%ebp)
 874fc6d:	8b 41 04             	mov    0x4(%ecx),%eax
 874fc70:	89 45 bc             	mov    %eax,-0x44(%ebp)
 874fc73:	8b 41 08             	mov    0x8(%ecx),%eax
 874fc76:	89 45 c0             	mov    %eax,-0x40(%ebp)
 874fc79:	8b 41 0c             	mov    0xc(%ecx),%eax
 874fc7c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 874fc7f:	8b 41 10             	mov    0x10(%ecx),%eax
 874fc82:	89 45 c8             	mov    %eax,-0x38(%ebp)
 874fc85:	8b 41 14             	mov    0x14(%ecx),%eax
 874fc88:	89 45 cc             	mov    %eax,-0x34(%ebp)
 874fc8b:	8b 41 18             	mov    0x18(%ecx),%eax
 874fc8e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 874fc91:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874fc94:	89 34 24             	mov    %esi,(%esp)
 874fc97:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 874fc9a:	e8 c1 ec ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fc9f:	89 3c 24             	mov    %edi,(%esp)
 874fca2:	89 c6                	mov    %eax,%esi
 874fca4:	e8 87 70 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 874fca9:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 874fcac:	83 c6 04             	add    $0x4,%esi
 874fcaf:	8b 55 90             	mov    -0x70(%ebp),%edx
 874fcb2:	89 74 24 08          	mov    %esi,0x8(%esp)
 874fcb6:	c7 44 24 1c 40 00 00 	movl   $0x40,0x1c(%esp)
 874fcbd:	00 
 874fcbe:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 874fcc2:	8d 8b 18 86 99 ff    	lea    -0x6679e8(%ebx),%ecx
 874fcc8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 874fccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 874fcd0:	89 04 24             	mov    %eax,(%esp)
 874fcd3:	c7 44 24 14 0d 00 00 	movl   $0xd,0x14(%esp)
 874fcda:	00 
 874fcdb:	c7 44 24 0c 30 00 00 	movl   $0x30,0xc(%esp)
 874fce2:	00 
 874fce3:	e8 98 ec 04 00       	call   879e980 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j>
 874fce8:	89 3c 24             	mov    %edi,(%esp)
 874fceb:	e8 40 70 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 874fcf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 874fcf4:	8b 45 08             	mov    0x8(%ebp),%eax
 874fcf7:	89 04 24             	mov    %eax,(%esp)
 874fcfa:	e8 b1 f3 ff ff       	call   874f0b0 <_ZN5yaSSL3SSL9storeKeysEPKh>
 874fcff:	89 3c 24             	mov    %edi,(%esp)
 874fd02:	e8 59 76 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 874fd07:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 874fd0d:	5b                   	pop    %ebx
 874fd0e:	5e                   	pop    %esi
 874fd0f:	5f                   	pop    %edi
 874fd10:	5d                   	pop    %ebp
 874fd11:	c3                   	ret
 874fd12:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874fd19:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::deriveTLSKeys @ 0x874fbc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::deriveTLSKeys() */

void __thiscall yaSSL::SSL::deriveTLSKeys(SSL *this)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  Security *this_00;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  input_buffer local_2c [24];
  undefined4 uStack_14;
  
  uStack_14 = 0x874fbcb;
  this_00 = (Security *)(this + 0x68);
  iVar4 = Security::get_parms(this_00);
  bVar1 = *(byte *)(iVar4 + 0x14);
  iVar4 = Security::get_parms(this_00);
  bVar2 = *(byte *)(iVar4 + 0xc);
  iVar4 = Security::get_parms(this_00);
  uVar3 = ((uint)bVar2 + (uint)bVar1 + (uint)*(byte *)(iVar4 + 0xd)) * 2;
  input_buffer::input_buffer(local_2c,uVar3);
  iVar4 = Security::get_connection(this_00);
  local_6c = *(undefined4 *)(iVar4 + 0x54);
  local_68 = *(undefined4 *)(iVar4 + 0x58);
  local_64 = *(undefined4 *)(iVar4 + 0x5c);
  local_60 = *(undefined4 *)(iVar4 + 0x60);
  local_5c = *(undefined4 *)(iVar4 + 100);
  local_58 = *(undefined4 *)(iVar4 + 0x68);
  local_54 = *(undefined4 *)(iVar4 + 0x6c);
  local_50 = *(undefined4 *)(iVar4 + 0x70);
  iVar4 = Security::get_connection(this_00);
  local_4c = *(undefined4 *)(iVar4 + 0x34);
  local_48 = *(undefined4 *)(iVar4 + 0x38);
  local_44 = *(undefined4 *)(iVar4 + 0x3c);
  local_40 = *(undefined4 *)(iVar4 + 0x40);
  local_3c = *(undefined4 *)(iVar4 + 0x44);
  local_38 = *(undefined4 *)(iVar4 + 0x48);
  local_34 = *(undefined4 *)(iVar4 + 0x4c);
  local_30 = *(undefined4 *)(iVar4 + 0x50);
  iVar4 = Security::get_connection(this_00);
  puVar5 = (uchar *)input_buffer::get_buffer(local_2c);
  PRF(puVar5,uVar3,(uchar *)(iVar4 + 4),0x30,(uchar *)"key expansion",0xd,(uchar *)&local_6c,0x40);
  puVar5 = (uchar *)input_buffer::get_buffer(local_2c);
  storeKeys(this,puVar5);
  input_buffer::~input_buffer(local_2c);
  return;
}

```

---

## fillData

```asm
// === 08750a30 yaSSL::SSL::fillData  [0x08750a30-0x8750c1f] ===
 8750a30:	55                   	push   %ebp
 8750a31:	89 e5                	mov    %esp,%ebp
 8750a33:	57                   	push   %edi
 8750a34:	56                   	push   %esi
 8750a35:	53                   	push   %ebx
 8750a36:	e8 bd 23 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8750a3b:	81 c3 5d c1 c1 00    	add    $0xc1c15d,%ebx
 8750a41:	83 ec 3c             	sub    $0x3c,%esp
 8750a44:	8b 45 08             	mov    0x8(%ebp),%eax
 8750a47:	8b 75 0c             	mov    0xc(%ebp),%esi
 8750a4a:	89 04 24             	mov    %eax,(%esp)
 8750a4d:	e8 5e d6 ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 8750a52:	85 c0                	test   %eax,%eax
 8750a54:	74 0a                	je     8750a60 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x30>
 8750a56:	83 c4 3c             	add    $0x3c,%esp
 8750a59:	5b                   	pop    %ebx
 8750a5a:	5e                   	pop    %esi
 8750a5b:	5f                   	pop    %edi
 8750a5c:	5d                   	pop    %ebp
 8750a5d:	c3                   	ret
 8750a5e:	66 90                	xchg   %ax,%ax
 8750a60:	8b 06                	mov    (%esi),%eax
 8750a62:	89 34 24             	mov    %esi,(%esp)
 8750a65:	ff 50 10             	call   *0x10(%eax)
 8750a68:	8b 55 08             	mov    0x8(%ebp),%edx
 8750a6b:	81 c2 c0 09 00 00    	add    $0x9c0,%edx
 8750a71:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8750a74:	0f b7 f8             	movzwl %ax,%edi
 8750a77:	89 14 24             	mov    %edx,(%esp)
 8750a7a:	e8 a1 de ff ff       	call   874e920 <_ZNK5yaSSL7Buffers7getDataEv>
 8750a7f:	8b 40 08             	mov    0x8(%eax),%eax
 8750a82:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8750a89:	00 
 8750a8a:	89 34 24             	mov    %esi,(%esp)
 8750a8d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8750a90:	e8 1b 62 ff ff       	call   8746cb0 <_ZN5yaSSL4Data10set_lengthEt>
 8750a95:	8b 45 08             	mov    0x8(%ebp),%eax
 8750a98:	89 04 24             	mov    %eax,(%esp)
 8750a9b:	e8 70 ef ff ff       	call   874fa10 <_ZN5yaSSL3SSL12bufferedDataEv>
 8750aa0:	39 c7                	cmp    %eax,%edi
 8750aa2:	0f 46 c7             	cmovbe %edi,%eax
 8750aa5:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8750aa8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8750aab:	85 ff                	test   %edi,%edi
 8750aad:	0f 84 2d 01 00 00    	je     8750be0 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x1b0>
 8750ab3:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8750aba:	eb 28                	jmp    8750ae4 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0xb4>
 8750abc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8750ac0:	8b 06                	mov    (%esi),%eax
 8750ac2:	89 34 24             	mov    %esi,(%esp)
 8750ac5:	ff 50 10             	call   *0x10(%eax)
 8750ac8:	0f b7 c0             	movzwl %ax,%eax
 8750acb:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8750ace:	0f 84 0c 01 00 00    	je     8750be0 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x1b0>
 8750ad4:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8750ad8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8750adb:	39 45 dc             	cmp    %eax,-0x24(%ebp)
 8750ade:	0f 83 fc 00 00 00    	jae    8750be0 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x1b0>
 8750ae4:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8750ae7:	31 ff                	xor    %edi,%edi
 8750ae9:	89 14 24             	mov    %edx,(%esp)
 8750aec:	e8 2f de ff ff       	call   874e920 <_ZNK5yaSSL7Buffers7getDataEv>
 8750af1:	8b 00                	mov    (%eax),%eax
 8750af3:	85 c0                	test   %eax,%eax
 8750af5:	74 03                	je     8750afa <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0xca>
 8750af7:	8b 78 08             	mov    0x8(%eax),%edi
 8750afa:	89 3c 24             	mov    %edi,(%esp)
 8750afd:	e8 be 62 04 00       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 8750b02:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8750b05:	8b 06                	mov    (%esi),%eax
 8750b07:	89 34 24             	mov    %esi,(%esp)
 8750b0a:	ff 50 10             	call   *0x10(%eax)
 8750b0d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8750b10:	89 34 24             	mov    %esi,(%esp)
 8750b13:	0f b7 c0             	movzwl %ax,%eax
 8750b16:	29 c2                	sub    %eax,%edx
 8750b18:	89 d0                	mov    %edx,%eax
 8750b1a:	3b 55 e0             	cmp    -0x20(%ebp),%edx
 8750b1d:	0f 47 45 e0          	cmova  -0x20(%ebp),%eax
 8750b21:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8750b24:	e8 97 61 ff ff       	call   8746cc0 <_ZN5yaSSL4Data10set_bufferEv>
 8750b29:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8750b2c:	8b 06                	mov    (%esi),%eax
 8750b2e:	89 34 24             	mov    %esi,(%esp)
 8750b31:	ff 50 10             	call   *0x10(%eax)
 8750b34:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8750b37:	89 3c 24             	mov    %edi,(%esp)
 8750b3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8750b3e:	0f b7 c0             	movzwl %ax,%eax
 8750b41:	03 45 d4             	add    -0x2c(%ebp),%eax
 8750b44:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750b48:	e8 f3 64 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8750b4d:	8b 06                	mov    (%esi),%eax
 8750b4f:	89 34 24             	mov    %esi,(%esp)
 8750b52:	ff 50 10             	call   *0x10(%eax)
 8750b55:	89 34 24             	mov    %esi,(%esp)
 8750b58:	66 03 45 e4          	add    -0x1c(%ebp),%ax
 8750b5c:	0f b7 c0             	movzwl %ax,%eax
 8750b5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750b63:	e8 48 61 ff ff       	call   8746cb0 <_ZN5yaSSL4Data10set_lengthEt>
 8750b68:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8750b6b:	39 45 e0             	cmp    %eax,-0x20(%ebp)
 8750b6e:	0f 85 4c ff ff ff    	jne    8750ac0 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x90>
 8750b74:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8750b77:	89 14 24             	mov    %edx,(%esp)
 8750b7a:	e8 c1 dd ff ff       	call   874e940 <_ZN5yaSSL7Buffers7useDataEv>
 8750b7f:	8b 08                	mov    (%eax),%ecx
 8750b81:	85 c9                	test   %ecx,%ecx
 8750b83:	74 27                	je     8750bac <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x17c>
 8750b85:	3b 48 04             	cmp    0x4(%eax),%ecx
 8750b88:	74 7e                	je     8750c08 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x1d8>
 8750b8a:	8b 51 04             	mov    0x4(%ecx),%edx
 8750b8d:	89 10                	mov    %edx,(%eax)
 8750b8f:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 8750b95:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8750b98:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8750b9d:	89 0c 24             	mov    %ecx,(%esp)
 8750ba0:	e8 4b fd ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8750ba5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8750ba8:	83 68 08 01          	subl   $0x1,0x8(%eax)
 8750bac:	85 ff                	test   %edi,%edi
 8750bae:	74 08                	je     8750bb8 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x188>
 8750bb0:	89 3c 24             	mov    %edi,(%esp)
 8750bb3:	e8 a8 67 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8750bb8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8750bbd:	89 3c 24             	mov    %edi,(%esp)
 8750bc0:	e8 5b fc ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8750bc5:	8b 06                	mov    (%esi),%eax
 8750bc7:	89 34 24             	mov    %esi,(%esp)
 8750bca:	ff 50 10             	call   *0x10(%eax)
 8750bcd:	0f b7 c0             	movzwl %ax,%eax
 8750bd0:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8750bd3:	0f 85 fb fe ff ff    	jne    8750ad4 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0xa4>
 8750bd9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8750be0:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8750be3:	89 14 24             	mov    %edx,(%esp)
 8750be6:	e8 35 dd ff ff       	call   874e920 <_ZNK5yaSSL7Buffers7getDataEv>
 8750beb:	8b 48 08             	mov    0x8(%eax),%ecx
 8750bee:	85 c9                	test   %ecx,%ecx
 8750bf0:	0f 85 60 fe ff ff    	jne    8750a56 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x26>
 8750bf6:	8b 45 08             	mov    0x8(%ebp),%eax
 8750bf9:	c6 80 de 09 00 00 00 	movb   $0x0,0x9de(%eax)
 8750c00:	83 c4 3c             	add    $0x3c,%esp
 8750c03:	5b                   	pop    %ebx
 8750c04:	5e                   	pop    %esi
 8750c05:	5f                   	pop    %edi
 8750c06:	5d                   	pop    %ebp
 8750c07:	c3                   	ret
 8750c08:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8750c0f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8750c15:	e9 7b ff ff ff       	jmp    8750b95 <_ZN5yaSSL3SSL8fillDataERNS_4DataE+0x165>
 8750c1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::fillData @ 0x8750a30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::fillData(yaSSL::Data&) */

void __thiscall yaSSL::SSL::fillData(SSL *this,Data *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  Buffers *this_00;
  input_buffer *this_01;
  uint local_28;
  short local_20;
  
  iVar4 = GetError(this);
  if (iVar4 == 0) {
    uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
    this_00 = (Buffers *)(this + 0x9c0);
    iVar4 = Buffers::getData(this_00);
    uVar1 = *(uint *)(iVar4 + 8);
    yaSSL::Data::set_length(param_1,0);
    uVar6 = bufferedData(this);
    if ((uVar5 & 0xffff) <= uVar6) {
      uVar6 = uVar5 & 0xffff;
    }
    if (uVar1 != 0) {
      local_28 = 0;
      do {
        this_01 = (input_buffer *)0x0;
        piVar7 = (int *)Buffers::getData(this_00);
        if (*piVar7 != 0) {
          this_01 = *(input_buffer **)(*piVar7 + 8);
        }
        uVar8 = input_buffer::get_remaining(this_01);
        uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        uVar5 = uVar6 - (uVar5 & 0xffff);
        if (uVar8 < uVar5) {
          uVar5 = uVar8;
        }
        iVar4 = yaSSL::Data::set_buffer(param_1);
        uVar9 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        input_buffer::read(this_01,(uchar *)((uVar9 & 0xffff) + iVar4),uVar5);
        sVar3 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        local_20 = (short)uVar5;
        uVar9 = (uint)(ushort)(sVar3 + local_20);
        yaSSL::Data::set_length(param_1,sVar3 + local_20);
        if (uVar8 == uVar5) {
          piVar7 = (int *)Buffers::useData(this_00);
          iVar4 = *piVar7;
          if (iVar4 != 0) {
            if (iVar4 == piVar7[1]) {
              piVar7[1] = 0;
              *piVar7 = 0;
            }
            else {
              puVar2 = *(undefined4 **)(iVar4 + 4);
              *piVar7 = (int)puVar2;
              *puVar2 = 0;
            }
            uVar9 = uVar9 & 0xffffff00;
            operator_delete__(iVar4,uVar9);
            piVar7[2] = piVar7[2] + -1;
          }
          if (this_01 != (input_buffer *)0x0) {
            input_buffer::~input_buffer(this_01);
          }
          operator_delete(this_01,uVar9 & 0xffffff00);
          uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        }
        else {
          uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        }
      } while (((uVar5 & 0xffff) != uVar6) && (local_28 = local_28 + 1, local_28 < uVar1));
    }
    iVar4 = Buffers::getData(this_00);
    if (*(int *)(iVar4 + 8) == 0) {
      this[0x9de] = (SSL)0x0;
      return;
    }
  }
  return;
}

```

---

## flushBuffer

```asm
// === 08752a50 yaSSL::SSL::flushBuffer  [0x08752a50-0x8752bef] ===
 8752a50:	55                   	push   %ebp
 8752a51:	89 e5                	mov    %esp,%ebp
 8752a53:	57                   	push   %edi
 8752a54:	56                   	push   %esi
 8752a55:	53                   	push   %ebx
 8752a56:	e8 9d 03 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752a5b:	81 c3 3d a1 c1 00    	add    $0xc1a13d,%ebx
 8752a61:	83 ec 3c             	sub    $0x3c,%esp
 8752a64:	8b 45 08             	mov    0x8(%ebp),%eax
 8752a67:	89 04 24             	mov    %eax,(%esp)
 8752a6a:	e8 41 b6 ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 8752a6f:	85 c0                	test   %eax,%eax
 8752a71:	74 0d                	je     8752a80 <_ZN5yaSSL3SSL11flushBufferEv+0x30>
 8752a73:	83 c4 3c             	add    $0x3c,%esp
 8752a76:	5b                   	pop    %ebx
 8752a77:	5e                   	pop    %esi
 8752a78:	5f                   	pop    %edi
 8752a79:	5d                   	pop    %ebp
 8752a7a:	c3                   	ret
 8752a7b:	90                   	nop
 8752a7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8752a80:	8b 7d 08             	mov    0x8(%ebp),%edi
 8752a83:	81 c7 c0 09 00 00    	add    $0x9c0,%edi
 8752a89:	89 3c 24             	mov    %edi,(%esp)
 8752a8c:	e8 9f be ff ff       	call   874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>
 8752a91:	89 3c 24             	mov    %edi,(%esp)
 8752a94:	e8 97 be ff ff       	call   874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>
 8752a99:	8b 30                	mov    (%eax),%esi
 8752a9b:	31 c0                	xor    %eax,%eax
 8752a9d:	85 f6                	test   %esi,%esi
 8752a9f:	74 20                	je     8752ac1 <_ZN5yaSSL3SSL11flushBufferEv+0x71>
 8752aa1:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8752aa4:	89 c7                	mov    %eax,%edi
 8752aa6:	66 90                	xchg   %ax,%ax
 8752aa8:	8b 46 08             	mov    0x8(%esi),%eax
 8752aab:	89 04 24             	mov    %eax,(%esp)
 8752aae:	e8 0d 44 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 8752ab3:	8b 76 04             	mov    0x4(%esi),%esi
 8752ab6:	01 c7                	add    %eax,%edi
 8752ab8:	85 f6                	test   %esi,%esi
 8752aba:	75 ec                	jne    8752aa8 <_ZN5yaSSL3SSL11flushBufferEv+0x58>
 8752abc:	89 f8                	mov    %edi,%eax
 8752abe:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8752ac1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752ac5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8752ac8:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8752acb:	89 04 24             	mov    %eax,(%esp)
 8752ace:	e8 fd 46 04 00       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 8752ad3:	89 3c 24             	mov    %edi,(%esp)
 8752ad6:	e8 55 be ff ff       	call   874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>
 8752adb:	8b 40 08             	mov    0x8(%eax),%eax
 8752ade:	85 c0                	test   %eax,%eax
 8752ae0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8752ae3:	0f 84 bf 00 00 00    	je     8752ba8 <_ZN5yaSSL3SSL11flushBufferEv+0x158>
 8752ae9:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8752af0:	eb 4d                	jmp    8752b3f <_ZN5yaSSL3SSL11flushBufferEv+0xef>
 8752af2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8752af8:	8b 4a 04             	mov    0x4(%edx),%ecx
 8752afb:	89 08                	mov    %ecx,(%eax)
 8752afd:	c7 01 00 00 00 00    	movl   $0x0,(%ecx)
 8752b03:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8752b06:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752b0b:	89 14 24             	mov    %edx,(%esp)
 8752b0e:	e8 dd dd ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752b13:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8752b16:	83 68 08 01          	subl   $0x1,0x8(%eax)
 8752b1a:	85 f6                	test   %esi,%esi
 8752b1c:	74 08                	je     8752b26 <_ZN5yaSSL3SSL11flushBufferEv+0xd6>
 8752b1e:	89 34 24             	mov    %esi,(%esp)
 8752b21:	e8 0a 48 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 8752b26:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752b2b:	89 34 24             	mov    %esi,(%esp)
 8752b2e:	e8 ed dc ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752b33:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8752b36:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8752b3a:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 8752b3d:	73 69                	jae    8752ba8 <_ZN5yaSSL3SSL11flushBufferEv+0x158>
 8752b3f:	89 3c 24             	mov    %edi,(%esp)
 8752b42:	31 f6                	xor    %esi,%esi
 8752b44:	e8 e7 bd ff ff       	call   874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>
 8752b49:	8b 00                	mov    (%eax),%eax
 8752b4b:	85 c0                	test   %eax,%eax
 8752b4d:	74 03                	je     8752b52 <_ZN5yaSSL3SSL11flushBufferEv+0x102>
 8752b4f:	8b 70 08             	mov    0x8(%eax),%esi
 8752b52:	89 34 24             	mov    %esi,(%esp)
 8752b55:	e8 66 43 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 8752b5a:	89 34 24             	mov    %esi,(%esp)
 8752b5d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8752b60:	e8 cb 43 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 8752b65:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8752b68:	89 54 24 08          	mov    %edx,0x8(%esp)
 8752b6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752b70:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8752b73:	89 04 24             	mov    %eax,(%esp)
 8752b76:	e8 55 44 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8752b7b:	89 3c 24             	mov    %edi,(%esp)
 8752b7e:	e8 cd bd ff ff       	call   874e950 <_ZN5yaSSL7Buffers12useHandShakeEv>
 8752b83:	8b 10                	mov    (%eax),%edx
 8752b85:	85 d2                	test   %edx,%edx
 8752b87:	74 91                	je     8752b1a <_ZN5yaSSL3SSL11flushBufferEv+0xca>
 8752b89:	3b 50 04             	cmp    0x4(%eax),%edx
 8752b8c:	0f 85 66 ff ff ff    	jne    8752af8 <_ZN5yaSSL3SSL11flushBufferEv+0xa8>
 8752b92:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8752b99:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8752b9f:	e9 5f ff ff ff       	jmp    8752b03 <_ZN5yaSSL3SSL11flushBufferEv+0xb3>
 8752ba4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8752ba8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8752bab:	89 04 24             	mov    %eax,(%esp)
 8752bae:	e8 0d 43 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 8752bb3:	89 c6                	mov    %eax,%esi
 8752bb5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8752bb8:	89 04 24             	mov    %eax,(%esp)
 8752bbb:	e8 70 43 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 8752bc0:	89 74 24 08          	mov    %esi,0x8(%esp)
 8752bc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752bc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8752bcb:	89 04 24             	mov    %eax,(%esp)
 8752bce:	e8 cd cd ff ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 8752bd3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8752bd6:	89 04 24             	mov    %eax,(%esp)
 8752bd9:	e8 52 47 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 8752bde:	83 c4 3c             	add    $0x3c,%esp
 8752be1:	5b                   	pop    %ebx
 8752be2:	5e                   	pop    %esi
 8752be3:	5f                   	pop    %edi
 8752be4:	5d                   	pop    %ebp
 8752be5:	c3                   	ret
 8752be6:	8d 76 00             	lea    0x0(%esi),%esi
 8752be9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::flushBuffer @ 0x8752a50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::flushBuffer() */

void __thiscall yaSSL::SSL::flushBuffer(SSL *this)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  output_buffer *this_00;
  Buffers *this_01;
  uint local_30;
  output_buffer local_28 [20];
  undefined4 uStack_14;
  
  uStack_14 = 0x8752a5b;
  iVar2 = GetError(this);
  if (iVar2 == 0) {
    this_01 = (Buffers *)(this + 0x9c0);
    Buffers::getHandShake(this_01);
    piVar3 = (int *)Buffers::getHandShake(this_01);
    iVar2 = *piVar3;
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = 0;
      do {
        iVar5 = output_buffer::get_size(*(output_buffer **)(iVar2 + 8));
        iVar2 = *(int *)(iVar2 + 4);
        uVar4 = uVar4 + iVar5;
      } while (iVar2 != 0);
    }
    output_buffer::output_buffer(local_28,uVar4);
    iVar2 = Buffers::getHandShake(this_01);
    uVar4 = *(uint *)(iVar2 + 8);
    if (uVar4 != 0) {
      local_30 = 0;
      do {
        this_00 = (output_buffer *)0x0;
        piVar3 = (int *)Buffers::getHandShake(this_01);
        if (*piVar3 != 0) {
          this_00 = *(output_buffer **)(*piVar3 + 8);
        }
        uVar6 = output_buffer::get_size(this_00);
        puVar7 = (uchar *)output_buffer::get_buffer(this_00);
        output_buffer::write(local_28,puVar7,uVar6);
        piVar3 = (int *)Buffers::useHandShake(this_01);
        iVar2 = *piVar3;
        if (iVar2 != 0) {
          if (iVar2 == piVar3[1]) {
            piVar3[1] = 0;
            *piVar3 = 0;
          }
          else {
            puVar1 = *(undefined4 **)(iVar2 + 4);
            *piVar3 = (int)puVar1;
            *puVar1 = 0;
          }
          puVar7 = (uchar *)((uint)puVar7 & 0xffffff00);
          operator_delete__(iVar2,puVar7);
          piVar3[2] = piVar3[2] + -1;
        }
        if (this_00 != (output_buffer *)0x0) {
          output_buffer::~output_buffer(this_00);
        }
        operator_delete(this_00,(uint)puVar7 & 0xffffff00);
        local_30 = local_30 + 1;
      } while (local_30 < uVar4);
    }
    uVar4 = output_buffer::get_size(local_28);
    puVar7 = (uchar *)output_buffer::get_buffer(local_28);
    Send(this,puVar7,uVar4);
    output_buffer::~output_buffer(local_28);
    return;
  }
  return;
}

```

---

## getCrypto

```asm
// === 0874e060 yaSSL::SSL::getCrypto  [0x0874e060-0x874e06f] ===
 874e060:	55                   	push   %ebp
 874e061:	89 e5                	mov    %esp,%ebp
 874e063:	8b 45 08             	mov    0x8(%ebp),%eax
 874e066:	5d                   	pop    %ebp
 874e067:	c3                   	ret
 874e068:	90                   	nop
 874e069:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::getCrypto @ 0x874e060

/* yaSSL::SSL::getCrypto() const */

SSL * __thiscall yaSSL::SSL::getCrypto(SSL *this)

{
  return this;
}

```

---

## getFactory

```asm
// === 08751180 yaSSL::SSL::getFactory  [0x08751180-0x875119f] ===
 8751180:	55                   	push   %ebp
 8751181:	89 e5                	mov    %esp,%ebp
 8751183:	53                   	push   %ebx
 8751184:	e8 6f 1c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8751189:	81 c3 0f ba c1 00    	add    $0xc1ba0f,%ebx
 875118f:	83 ec 04             	sub    $0x4,%esp
 8751192:	e8 89 ff ff ff       	call   8751120 <_ZN5yaSSL14GetSSL_FactoryEv>
 8751197:	83 c4 04             	add    $0x4,%esp
 875119a:	5b                   	pop    %ebx
 875119b:	5d                   	pop    %ebp
 875119c:	c3                   	ret
 875119d:	8d 76 00             	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::getFactory @ 0x8751180

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::getFactory() const */

void yaSSL::SSL::getFactory(void)

{
  GetSSL_Factory();
  return;
}

```

---

## getHashes

```asm
// === 0874e090 yaSSL::SSL::getHashes  [0x0874e090-0x874e09f] ===
 874e090:	55                   	push   %ebp
 874e091:	89 e5                	mov    %esp,%ebp
 874e093:	8b 45 08             	mov    0x8(%ebp),%eax
 874e096:	5d                   	pop    %ebp
 874e097:	05 58 09 00 00       	add    $0x958,%eax
 874e09c:	c3                   	ret
 874e09d:	90                   	nop
 874e09e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::getHashes @ 0x874e090

/* yaSSL::SSL::getHashes() const */

SSL * __thiscall yaSSL::SSL::getHashes(SSL *this)

{
  return this + 0x958;
}

```

---

## getSecurity

```asm
// === 0874e070 yaSSL::SSL::getSecurity  [0x0874e070-0x874e07f] ===
 874e070:	55                   	push   %ebp
 874e071:	89 e5                	mov    %esp,%ebp
 874e073:	8b 45 08             	mov    0x8(%ebp),%eax
 874e076:	5d                   	pop    %ebp
 874e077:	83 c0 68             	add    $0x68,%eax
 874e07a:	c3                   	ret
 874e07b:	90                   	nop
 874e07c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::getSecurity @ 0x874e070

/* yaSSL::SSL::getSecurity() const */

SSL * __thiscall yaSSL::SSL::getSecurity(SSL *this)

{
  return this + 0x68;
}

```

---

## getSocket

```asm
// === 0874e0a0 yaSSL::SSL::getSocket  [0x0874e0a0-0x874e0af] ===
 874e0a0:	55                   	push   %ebp
 874e0a1:	89 e5                	mov    %esp,%ebp
 874e0a3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e0a6:	5d                   	pop    %ebp
 874e0a7:	05 b8 09 00 00       	add    $0x9b8,%eax
 874e0ac:	c3                   	ret
 874e0ad:	90                   	nop
 874e0ae:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::getSocket @ 0x874e0a0

/* yaSSL::SSL::getSocket() const */

SSL * __thiscall yaSSL::SSL::getSocket(SSL *this)

{
  return this + 0x9b8;
}

```

---

## getStates

```asm
// === 0874e080 yaSSL::SSL::getStates  [0x0874e080-0x874e08f] ===
 874e080:	55                   	push   %ebp
 874e081:	89 e5                	mov    %esp,%ebp
 874e083:	8b 45 08             	mov    0x8(%ebp),%eax
 874e086:	5d                   	pop    %ebp
 874e087:	05 ec 08 00 00       	add    $0x8ec,%eax
 874e08c:	c3                   	ret
 874e08d:	90                   	nop
 874e08e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::getStates @ 0x874e080

/* yaSSL::SSL::getStates() const */

SSL * __thiscall yaSSL::SSL::getStates(SSL *this)

{
  return this + 0x8ec;
}

```

---

## get_SEQIncrement

```asm
// === 0874ed10 yaSSL::SSL::get_SEQIncrement  [0x0874ed10-0x874ed7f] ===
 874ed10:	55                   	push   %ebp
 874ed11:	89 e5                	mov    %esp,%ebp
 874ed13:	53                   	push   %ebx
 874ed14:	83 ec 14             	sub    $0x14,%esp
 874ed17:	8b 45 08             	mov    0x8(%ebp),%eax
 874ed1a:	e8 d9 40 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ed1f:	81 c3 79 de c1 00    	add    $0xc1de79,%ebx
 874ed25:	80 7d 0c 00          	cmpb   $0x0,0xc(%ebp)
 874ed29:	75 25                	jne    874ed50 <_ZN5yaSSL3SSL16get_SEQIncrementEb+0x40>
 874ed2b:	83 c0 68             	add    $0x68,%eax
 874ed2e:	89 04 24             	mov    %eax,(%esp)
 874ed31:	e8 ca ff ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874ed36:	89 c2                	mov    %eax,%edx
 874ed38:	8b 80 1c 01 00 00    	mov    0x11c(%eax),%eax
 874ed3e:	8d 48 01             	lea    0x1(%eax),%ecx
 874ed41:	89 8a 1c 01 00 00    	mov    %ecx,0x11c(%edx)
 874ed47:	83 c4 14             	add    $0x14,%esp
 874ed4a:	5b                   	pop    %ebx
 874ed4b:	5d                   	pop    %ebp
 874ed4c:	c3                   	ret
 874ed4d:	8d 76 00             	lea    0x0(%esi),%esi
 874ed50:	83 c0 68             	add    $0x68,%eax
 874ed53:	89 04 24             	mov    %eax,(%esp)
 874ed56:	e8 a5 ff ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874ed5b:	89 c2                	mov    %eax,%edx
 874ed5d:	8b 80 20 01 00 00    	mov    0x120(%eax),%eax
 874ed63:	8d 48 01             	lea    0x1(%eax),%ecx
 874ed66:	89 8a 20 01 00 00    	mov    %ecx,0x120(%edx)
 874ed6c:	83 c4 14             	add    $0x14,%esp
 874ed6f:	5b                   	pop    %ebx
 874ed70:	5d                   	pop    %ebp
 874ed71:	c3                   	ret
 874ed72:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874ed79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::get_SEQIncrement @ 0x874ed10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::get_SEQIncrement(bool) */

void __thiscall yaSSL::SSL::get_SEQIncrement(SSL *this,bool param_1)

{
  int iVar1;
  
  if (!param_1) {
    iVar1 = Security::use_connection((Security *)(this + 0x68));
    *(int *)(iVar1 + 0x11c) = *(int *)(iVar1 + 0x11c) + 1;
    return;
  }
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(int *)(iVar1 + 0x120) = *(int *)(iVar1 + 0x120) + 1;
  return;
}

```

---

## get_macSecret

```asm
// === 0874ec50 yaSSL::SSL::get_macSecret  [0x0874ec50-0x874ecdf] ===
 874ec50:	55                   	push   %ebp
 874ec51:	89 e5                	mov    %esp,%ebp
 874ec53:	83 ec 28             	sub    $0x28,%esp
 874ec56:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874ec59:	e8 9a 41 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ec5e:	81 c3 3a df c1 00    	add    $0xc1df3a,%ebx
 874ec64:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874ec67:	8b 75 08             	mov    0x8(%ebp),%esi
 874ec6a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874ec6d:	0f b6 7d 0c          	movzbl 0xc(%ebp),%edi
 874ec71:	83 c6 68             	add    $0x68,%esi
 874ec74:	89 34 24             	mov    %esi,(%esp)
 874ec77:	e8 d4 fd ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874ec7c:	83 38 01             	cmpl   $0x1,(%eax)
 874ec7f:	74 37                	je     874ecb8 <_ZN5yaSSL3SSL13get_macSecretEb+0x68>
 874ec81:	89 34 24             	mov    %esi,(%esp)
 874ec84:	e8 c7 fd ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874ec89:	8b 00                	mov    (%eax),%eax
 874ec8b:	85 c0                	test   %eax,%eax
 874ec8d:	74 21                	je     874ecb0 <_ZN5yaSSL3SSL13get_macSecretEb+0x60>
 874ec8f:	89 34 24             	mov    %esi,(%esp)
 874ec92:	e8 c9 fc ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874ec97:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874ec9a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874ec9d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874eca0:	89 ec                	mov    %ebp,%esp
 874eca2:	5d                   	pop    %ebp
 874eca3:	05 a8 00 00 00       	add    $0xa8,%eax
 874eca8:	c3                   	ret
 874eca9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874ecb0:	89 f8                	mov    %edi,%eax
 874ecb2:	84 c0                	test   %al,%al
 874ecb4:	74 d9                	je     874ec8f <_ZN5yaSSL3SSL13get_macSecretEb+0x3f>
 874ecb6:	eb 06                	jmp    874ecbe <_ZN5yaSSL3SSL13get_macSecretEb+0x6e>
 874ecb8:	89 f8                	mov    %edi,%eax
 874ecba:	84 c0                	test   %al,%al
 874ecbc:	75 c3                	jne    874ec81 <_ZN5yaSSL3SSL13get_macSecretEb+0x31>
 874ecbe:	89 34 24             	mov    %esi,(%esp)
 874ecc1:	e8 9a fc ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874ecc6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874ecc9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874eccc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874eccf:	89 ec                	mov    %ebp,%esp
 874ecd1:	5d                   	pop    %ebp
 874ecd2:	05 94 00 00 00       	add    $0x94,%eax
 874ecd7:	c3                   	ret
 874ecd8:	90                   	nop
 874ecd9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::get_macSecret @ 0x874ec50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::get_macSecret(bool) */

int __thiscall yaSSL::SSL::get_macSecret(SSL *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  Security *this_00;
  
  this_00 = (Security *)(this + 0x68);
  piVar1 = (int *)Security::get_parms(this_00);
  if (((*piVar1 != 1) || (param_1)) &&
     ((piVar1 = (int *)Security::get_parms(this_00), *piVar1 != 0 || (!param_1)))) {
    iVar2 = Security::get_connection(this_00);
    return iVar2 + 0xa8;
  }
  iVar2 = Security::get_connection(this_00);
  return iVar2 + 0x94;
}

```

---

## isTLS

```asm
// === 0874e9a0 yaSSL::SSL::isTLS  [0x0874e9a0-0x874e9cf] ===
 874e9a0:	55                   	push   %ebp
 874e9a1:	89 e5                	mov    %esp,%ebp
 874e9a3:	53                   	push   %ebx
 874e9a4:	e8 4f 44 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e9a9:	81 c3 ef e1 c1 00    	add    $0xc1e1ef,%ebx
 874e9af:	83 ec 14             	sub    $0x14,%esp
 874e9b2:	8b 45 08             	mov    0x8(%ebp),%eax
 874e9b5:	83 c0 68             	add    $0x68,%eax
 874e9b8:	89 04 24             	mov    %eax,(%esp)
 874e9bb:	e8 a0 ff ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874e9c0:	0f b6 80 2a 01 00 00 	movzbl 0x12a(%eax),%eax
 874e9c7:	83 c4 14             	add    $0x14,%esp
 874e9ca:	5b                   	pop    %ebx
 874e9cb:	5d                   	pop    %ebp
 874e9cc:	c3                   	ret
 874e9cd:	90                   	nop
 874e9ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::isTLS @ 0x874e9a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::isTLS() const */

undefined1 __thiscall yaSSL::SSL::isTLS(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::get_connection((Security *)(this + 0x68));
  return *(undefined1 *)(iVar1 + 0x12a);
}

```

---

## isTLSv1_1

```asm
// === 0874e970 yaSSL::SSL::isTLSv1_1  [0x0874e970-0x874e99f] ===
 874e970:	55                   	push   %ebp
 874e971:	89 e5                	mov    %esp,%ebp
 874e973:	53                   	push   %ebx
 874e974:	e8 7f 44 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e979:	81 c3 1f e2 c1 00    	add    $0xc1e21f,%ebx
 874e97f:	83 ec 14             	sub    $0x14,%esp
 874e982:	8b 45 08             	mov    0x8(%ebp),%eax
 874e985:	83 c0 68             	add    $0x68,%eax
 874e988:	89 04 24             	mov    %eax,(%esp)
 874e98b:	e8 d0 ff ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874e990:	0f b6 80 2b 01 00 00 	movzbl 0x12b(%eax),%eax
 874e997:	83 c4 14             	add    $0x14,%esp
 874e99a:	5b                   	pop    %ebx
 874e99b:	5d                   	pop    %ebp
 874e99c:	c3                   	ret
 874e99d:	90                   	nop
 874e99e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::isTLSv1_1 @ 0x874e970

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::isTLSv1_1() const */

undefined1 __thiscall yaSSL::SSL::isTLSv1_1(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::get_connection((Security *)(this + 0x68));
  return *(undefined1 *)(iVar1 + 299);
}

```

---

## makeMasterSecret

```asm
// === 087501c0 yaSSL::SSL::makeMasterSecret  [0x087501c0-0x875070f] ===
 87501c0:	55                   	push   %ebp
 87501c1:	89 e5                	mov    %esp,%ebp
 87501c3:	57                   	push   %edi
 87501c4:	56                   	push   %esi
 87501c5:	53                   	push   %ebx
 87501c6:	e8 2d 2c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87501cb:	81 c3 cd c9 c1 00    	add    $0xc1c9cd,%ebx
 87501d1:	83 ec 7c             	sub    $0x7c,%esp
 87501d4:	8b 45 08             	mov    0x8(%ebp),%eax
 87501d7:	89 04 24             	mov    %eax,(%esp)
 87501da:	e8 c1 e7 ff ff       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 87501df:	84 c0                	test   %al,%al
 87501e1:	74 2d                	je     8750210 <_ZN5yaSSL3SSL16makeMasterSecretEv+0x50>
 87501e3:	8b 55 08             	mov    0x8(%ebp),%edx
 87501e6:	89 14 24             	mov    %edx,(%esp)
 87501e9:	e8 32 fb ff ff       	call   874fd20 <_ZN5yaSSL3SSL19makeTLSMasterSecretEv>
 87501ee:	8b 45 08             	mov    0x8(%ebp),%eax
 87501f1:	8d 78 68             	lea    0x68(%eax),%edi
 87501f4:	89 3c 24             	mov    %edi,(%esp)
 87501f7:	e8 04 eb ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 87501fc:	89 04 24             	mov    %eax,(%esp)
 87501ff:	e8 3c b9 ff ff       	call   874bb40 <_ZN5yaSSL10Connection14CleanPreMasterEv>
 8750204:	83 c4 7c             	add    $0x7c,%esp
 8750207:	5b                   	pop    %ebx
 8750208:	5e                   	pop    %esi
 8750209:	5f                   	pop    %edi
 875020a:	5d                   	pop    %ebp
 875020b:	c3                   	ret
 875020c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8750210:	8b 7d 08             	mov    0x8(%ebp),%edi
 8750213:	8d 75 bc             	lea    -0x44(%ebp),%esi
 8750216:	83 c7 68             	add    $0x68,%edi
 8750219:	89 3c 24             	mov    %edi,(%esp)
 875021c:	e8 3f e7 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 8750221:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8750224:	8b 80 24 01 00 00    	mov    0x124(%eax),%eax
 875022a:	83 c0 14             	add    $0x14,%eax
 875022d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750231:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8750234:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8750237:	89 04 24             	mov    %eax,(%esp)
 875023a:	e8 91 6f 04 00       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 875023f:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8750242:	8b 82 24 01 00 00    	mov    0x124(%edx),%eax
 8750248:	89 34 24             	mov    %esi,(%esp)
 875024b:	83 c0 43             	add    $0x43,%eax
 875024e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750252:	e8 79 6f 04 00       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 8750257:	8d 45 dc             	lea    -0x24(%ebp),%eax
 875025a:	89 45 94             	mov    %eax,-0x6c(%ebp)
 875025d:	89 04 24             	mov    %eax,(%esp)
 8750260:	e8 ab 9e 04 00       	call   879a110 <_ZN5yaSSL3MD5C1Ev>
 8750265:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8750268:	89 55 90             	mov    %edx,-0x70(%ebp)
 875026b:	89 14 24             	mov    %edx,(%esp)
 875026e:	e8 1d 9f 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8750273:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8750276:	8b 90 24 01 00 00    	mov    0x124(%eax),%edx
 875027c:	89 3c 24             	mov    %edi,(%esp)
 875027f:	89 55 8c             	mov    %edx,-0x74(%ebp)
 8750282:	e8 d9 e6 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 8750287:	8b 55 8c             	mov    -0x74(%ebp),%edx
 875028a:	89 54 24 08          	mov    %edx,0x8(%esp)
 875028e:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8750291:	8b 00                	mov    (%eax),%eax
 8750293:	89 14 24             	mov    %edx,(%esp)
 8750296:	89 44 24 04          	mov    %eax,0x4(%esp)
 875029a:	e8 31 6d 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 875029f:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 87502a2:	31 d2                	xor    %edx,%edx
 87502a4:	89 45 9c             	mov    %eax,-0x64(%ebp)
 87502a7:	e8 64 ef ff ff       	call   874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>
 87502ac:	84 c0                	test   %al,%al
 87502ae:	0f 84 0c 04 00 00    	je     87506c0 <_ZN5yaSSL3SSL16makeMasterSecretEv+0x500>
 87502b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87502bb:	00 
 87502bc:	89 34 24             	mov    %esi,(%esp)
 87502bf:	e8 1c 6c 04 00       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 87502c4:	8b 55 9c             	mov    -0x64(%ebp),%edx
 87502c7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87502ce:	00 
 87502cf:	89 34 24             	mov    %esi,(%esp)
 87502d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 87502d6:	e8 f5 6c 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87502db:	8b 45 a0             	mov    -0x60(%ebp),%eax
 87502de:	8b 90 24 01 00 00    	mov    0x124(%eax),%edx
 87502e4:	89 3c 24             	mov    %edi,(%esp)
 87502e7:	89 55 8c             	mov    %edx,-0x74(%ebp)
 87502ea:	e8 71 e6 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87502ef:	8b 55 8c             	mov    -0x74(%ebp),%edx
 87502f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 87502f6:	8b 00                	mov    (%eax),%eax
 87502f8:	89 34 24             	mov    %esi,(%esp)
 87502fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87502ff:	e8 cc 6c 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750304:	89 3c 24             	mov    %edi,(%esp)
 8750307:	e8 54 e6 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 875030c:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8750313:	00 
 8750314:	89 34 24             	mov    %esi,(%esp)
 8750317:	83 c0 34             	add    $0x34,%eax
 875031a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875031e:	e8 ad 6c 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750323:	89 3c 24             	mov    %edi,(%esp)
 8750326:	e8 35 e6 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 875032b:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8750332:	00 
 8750333:	89 34 24             	mov    %esi,(%esp)
 8750336:	83 c0 54             	add    $0x54,%eax
 8750339:	89 44 24 04          	mov    %eax,0x4(%esp)
 875033d:	e8 8e 6c 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750342:	89 34 24             	mov    %esi,(%esp)
 8750345:	e8 76 6b 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 875034a:	89 34 24             	mov    %esi,(%esp)
 875034d:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8750350:	e8 db 6b 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 8750355:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8750358:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875035c:	8d 55 a8             	lea    -0x58(%ebp),%edx
 875035f:	89 55 98             	mov    %edx,-0x68(%ebp)
 8750362:	89 44 24 08          	mov    %eax,0x8(%esp)
 8750366:	8b 45 90             	mov    -0x70(%ebp),%eax
 8750369:	89 54 24 04          	mov    %edx,0x4(%esp)
 875036d:	89 04 24             	mov    %eax,(%esp)
 8750370:	e8 4b 96 04 00       	call   87999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>
 8750375:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8750378:	8b 82 24 01 00 00    	mov    0x124(%edx),%eax
 875037e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750382:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8750385:	89 04 24             	mov    %eax,(%esp)
 8750388:	e8 53 6b 04 00       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 875038d:	8b 55 98             	mov    -0x68(%ebp),%edx
 8750390:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8750393:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 875039a:	00 
 875039b:	89 54 24 04          	mov    %edx,0x4(%esp)
 875039f:	89 04 24             	mov    %eax,(%esp)
 87503a2:	e8 29 6c 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87503a7:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87503aa:	89 14 24             	mov    %edx,(%esp)
 87503ad:	e8 0e 6b 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87503b2:	89 c2                	mov    %eax,%edx
 87503b4:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87503b7:	89 55 8c             	mov    %edx,-0x74(%ebp)
 87503ba:	89 04 24             	mov    %eax,(%esp)
 87503bd:	e8 6e 6b 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87503c2:	89 3c 24             	mov    %edi,(%esp)
 87503c5:	89 45 88             	mov    %eax,-0x78(%ebp)
 87503c8:	e8 33 e9 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 87503cd:	8b 55 8c             	mov    -0x74(%ebp),%edx
 87503d0:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 87503d3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87503d7:	8b 55 94             	mov    -0x6c(%ebp),%edx
 87503da:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87503de:	83 c0 04             	add    $0x4,%eax
 87503e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87503e5:	89 14 24             	mov    %edx,(%esp)
 87503e8:	e8 a3 98 04 00       	call   8799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>
 87503ed:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87503f0:	ba 01 00 00 00       	mov    $0x1,%edx
 87503f5:	e8 16 ee ff ff       	call   874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>
 87503fa:	84 c0                	test   %al,%al
 87503fc:	0f 84 be 02 00 00    	je     87506c0 <_ZN5yaSSL3SSL16makeMasterSecretEv+0x500>
 8750402:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8750409:	00 
 875040a:	89 34 24             	mov    %esi,(%esp)
 875040d:	e8 ce 6a 04 00       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 8750412:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8750415:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 875041c:	00 
 875041d:	89 34 24             	mov    %esi,(%esp)
 8750420:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750424:	e8 a7 6b 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750429:	8b 45 a0             	mov    -0x60(%ebp),%eax
 875042c:	8b 90 24 01 00 00    	mov    0x124(%eax),%edx
 8750432:	89 3c 24             	mov    %edi,(%esp)
 8750435:	89 55 8c             	mov    %edx,-0x74(%ebp)
 8750438:	e8 23 e5 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 875043d:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8750440:	89 54 24 08          	mov    %edx,0x8(%esp)
 8750444:	8b 00                	mov    (%eax),%eax
 8750446:	89 34 24             	mov    %esi,(%esp)
 8750449:	89 44 24 04          	mov    %eax,0x4(%esp)
 875044d:	e8 7e 6b 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750452:	89 3c 24             	mov    %edi,(%esp)
 8750455:	e8 06 e5 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 875045a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8750461:	00 
 8750462:	89 34 24             	mov    %esi,(%esp)
 8750465:	83 c0 34             	add    $0x34,%eax
 8750468:	89 44 24 04          	mov    %eax,0x4(%esp)
 875046c:	e8 5f 6b 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750471:	89 3c 24             	mov    %edi,(%esp)
 8750474:	e8 e7 e4 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 8750479:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8750480:	00 
 8750481:	89 34 24             	mov    %esi,(%esp)
 8750484:	83 c0 54             	add    $0x54,%eax
 8750487:	89 44 24 04          	mov    %eax,0x4(%esp)
 875048b:	e8 40 6b 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750490:	89 34 24             	mov    %esi,(%esp)
 8750493:	e8 28 6a 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 8750498:	89 34 24             	mov    %esi,(%esp)
 875049b:	89 45 8c             	mov    %eax,-0x74(%ebp)
 875049e:	e8 8d 6a 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87504a3:	8b 55 8c             	mov    -0x74(%ebp),%edx
 87504a6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87504aa:	8b 55 98             	mov    -0x68(%ebp),%edx
 87504ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 87504b1:	8b 45 90             	mov    -0x70(%ebp),%eax
 87504b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 87504b8:	89 04 24             	mov    %eax,(%esp)
 87504bb:	e8 00 95 04 00       	call   87999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>
 87504c0:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87504c3:	8b 82 24 01 00 00    	mov    0x124(%edx),%eax
 87504c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87504cd:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87504d0:	89 04 24             	mov    %eax,(%esp)
 87504d3:	e8 08 6a 04 00       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 87504d8:	8b 55 98             	mov    -0x68(%ebp),%edx
 87504db:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87504de:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 87504e5:	00 
 87504e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 87504ea:	89 04 24             	mov    %eax,(%esp)
 87504ed:	e8 de 6a 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87504f2:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87504f5:	89 14 24             	mov    %edx,(%esp)
 87504f8:	e8 c3 69 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87504fd:	89 c2                	mov    %eax,%edx
 87504ff:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8750502:	89 55 8c             	mov    %edx,-0x74(%ebp)
 8750505:	89 04 24             	mov    %eax,(%esp)
 8750508:	e8 23 6a 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 875050d:	89 3c 24             	mov    %edi,(%esp)
 8750510:	89 45 88             	mov    %eax,-0x78(%ebp)
 8750513:	e8 e8 e7 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8750518:	8b 55 8c             	mov    -0x74(%ebp),%edx
 875051b:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 875051e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8750522:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8750525:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8750529:	83 c0 14             	add    $0x14,%eax
 875052c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750530:	89 14 24             	mov    %edx,(%esp)
 8750533:	e8 58 97 04 00       	call   8799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>
 8750538:	8b 45 9c             	mov    -0x64(%ebp),%eax
 875053b:	ba 02 00 00 00       	mov    $0x2,%edx
 8750540:	e8 cb ec ff ff       	call   874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>
 8750545:	84 c0                	test   %al,%al
 8750547:	0f 84 73 01 00 00    	je     87506c0 <_ZN5yaSSL3SSL16makeMasterSecretEv+0x500>
 875054d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8750554:	00 
 8750555:	89 34 24             	mov    %esi,(%esp)
 8750558:	e8 83 69 04 00       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 875055d:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8750560:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8750567:	00 
 8750568:	89 34 24             	mov    %esi,(%esp)
 875056b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875056f:	e8 5c 6a 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8750574:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8750577:	8b 90 24 01 00 00    	mov    0x124(%eax),%edx
 875057d:	89 3c 24             	mov    %edi,(%esp)
 8750580:	89 55 8c             	mov    %edx,-0x74(%ebp)
 8750583:	e8 d8 e3 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 8750588:	8b 55 8c             	mov    -0x74(%ebp),%edx
 875058b:	89 54 24 08          	mov    %edx,0x8(%esp)
 875058f:	8b 00                	mov    (%eax),%eax
 8750591:	89 34 24             	mov    %esi,(%esp)
 8750594:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750598:	e8 33 6a 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 875059d:	89 3c 24             	mov    %edi,(%esp)
 87505a0:	e8 bb e3 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87505a5:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 87505ac:	00 
 87505ad:	89 34 24             	mov    %esi,(%esp)
 87505b0:	83 c0 34             	add    $0x34,%eax
 87505b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87505b7:	e8 14 6a 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87505bc:	89 3c 24             	mov    %edi,(%esp)
 87505bf:	e8 9c e3 ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87505c4:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 87505cb:	00 
 87505cc:	89 34 24             	mov    %esi,(%esp)
 87505cf:	83 c0 54             	add    $0x54,%eax
 87505d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87505d6:	e8 f5 69 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87505db:	89 34 24             	mov    %esi,(%esp)
 87505de:	e8 dd 68 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87505e3:	89 34 24             	mov    %esi,(%esp)
 87505e6:	89 45 8c             	mov    %eax,-0x74(%ebp)
 87505e9:	e8 42 69 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87505ee:	8b 55 8c             	mov    -0x74(%ebp),%edx
 87505f1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87505f5:	8b 55 98             	mov    -0x68(%ebp),%edx
 87505f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 87505fc:	8b 45 90             	mov    -0x70(%ebp),%eax
 87505ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8750603:	89 04 24             	mov    %eax,(%esp)
 8750606:	e8 b5 93 04 00       	call   87999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>
 875060b:	8b 55 a0             	mov    -0x60(%ebp),%edx
 875060e:	8b 82 24 01 00 00    	mov    0x124(%edx),%eax
 8750614:	89 44 24 04          	mov    %eax,0x4(%esp)
 8750618:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 875061b:	89 04 24             	mov    %eax,(%esp)
 875061e:	e8 bd 68 04 00       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 8750623:	8b 55 98             	mov    -0x68(%ebp),%edx
 8750626:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8750629:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8750630:	00 
 8750631:	89 54 24 04          	mov    %edx,0x4(%esp)
 8750635:	89 04 24             	mov    %eax,(%esp)
 8750638:	e8 93 69 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 875063d:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8750640:	89 14 24             	mov    %edx,(%esp)
 8750643:	e8 78 68 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 8750648:	89 c2                	mov    %eax,%edx
 875064a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 875064d:	89 55 8c             	mov    %edx,-0x74(%ebp)
 8750650:	89 04 24             	mov    %eax,(%esp)
 8750653:	e8 d8 68 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 8750658:	89 3c 24             	mov    %edi,(%esp)
 875065b:	89 45 88             	mov    %eax,-0x78(%ebp)
 875065e:	e8 9d e6 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8750663:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8750666:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 8750669:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875066d:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8750670:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8750674:	83 c0 24             	add    $0x24,%eax
 8750677:	89 44 24 04          	mov    %eax,0x4(%esp)
 875067b:	89 14 24             	mov    %edx,(%esp)
 875067e:	e8 0d 96 04 00       	call   8799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>
 8750683:	8b 45 08             	mov    0x8(%ebp),%eax
 8750686:	89 04 24             	mov    %eax,(%esp)
 8750689:	e8 a2 f7 ff ff       	call   874fe30 <_ZN5yaSSL3SSL10deriveKeysEv>
 875068e:	8b 55 90             	mov    -0x70(%ebp),%edx
 8750691:	89 14 24             	mov    %edx,(%esp)
 8750694:	e8 17 86 04 00       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 8750699:	8b 45 94             	mov    -0x6c(%ebp),%eax
 875069c:	89 04 24             	mov    %eax,(%esp)
 875069f:	e8 9c 86 04 00       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 87506a4:	89 34 24             	mov    %esi,(%esp)
 87506a7:	e8 84 6c 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87506ac:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87506af:	89 14 24             	mov    %edx,(%esp)
 87506b2:	e8 79 6c 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87506b7:	e9 38 fb ff ff       	jmp    87501f4 <_ZN5yaSSL3SSL16makeMasterSecretEv+0x34>
 87506bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87506c0:	8b 45 08             	mov    0x8(%ebp),%eax
 87506c3:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 87506ca:	00 
 87506cb:	89 04 24             	mov    %eax,(%esp)
 87506ce:	e8 fd d8 ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 87506d3:	8b 55 90             	mov    -0x70(%ebp),%edx
 87506d6:	89 14 24             	mov    %edx,(%esp)
 87506d9:	e8 d2 85 04 00       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 87506de:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87506e1:	89 04 24             	mov    %eax,(%esp)
 87506e4:	e8 57 86 04 00       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 87506e9:	89 34 24             	mov    %esi,(%esp)
 87506ec:	e8 3f 6c 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87506f1:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87506f4:	89 14 24             	mov    %edx,(%esp)
 87506f7:	e8 34 6c 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87506fc:	e9 03 fb ff ff       	jmp    8750204 <_ZN5yaSSL3SSL16makeMasterSecretEv+0x44>
 8750701:	90                   	nop
 8750702:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8750709:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::makeMasterSecret @ 0x87501c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::makeMasterSecret() */

void __thiscall yaSSL::SSL::makeMasterSecret(SSL *this)

{
  char cVar1;
  Connection *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  Security *this_01;
  uchar local_5c [20];
  output_buffer local_48 [12];
  output_buffer local_3c [12];
  SHA local_30 [8];
  MD5 local_28 [9];
  uchar local_1f [11];
  undefined4 uStack_14;
  
  uStack_14 = 0x87501cb;
  cVar1 = isTLS(this);
  if (cVar1 == '\0') {
    this_01 = (Security *)(this + 0x68);
    iVar2 = Security::get_connection(this_01);
    output_buffer::output_buffer(local_3c,*(int *)(iVar2 + 0x124) + 0x14);
    output_buffer::output_buffer(local_48,*(int *)(iVar2 + 0x124) + 0x43);
    MD5::MD5(local_28);
    SHA::SHA(local_30);
    uVar5 = *(uint *)(iVar2 + 0x124);
    puVar3 = (undefined4 *)Security::get_connection(this_01);
    output_buffer::write(local_3c,(uchar *)*puVar3,uVar5);
    cVar1 = (anonymous_namespace)::setPrefix(local_1f,0);
    if (cVar1 != '\0') {
      output_buffer::set_current(local_48,0);
      output_buffer::write(local_48,local_1f,1);
      uVar5 = *(uint *)(iVar2 + 0x124);
      puVar3 = (undefined4 *)Security::get_connection(this_01);
      output_buffer::write(local_48,(uchar *)*puVar3,uVar5);
      iVar4 = Security::get_connection(this_01);
      output_buffer::write(local_48,(uchar *)(iVar4 + 0x34),0x20);
      iVar4 = Security::get_connection(this_01);
      output_buffer::write(local_48,(uchar *)(iVar4 + 0x54),0x20);
      uVar5 = output_buffer::get_size(local_48);
      puVar6 = (uchar *)output_buffer::get_buffer(local_48);
      SHA::get_digest(local_30,local_5c,puVar6,uVar5);
      output_buffer::set_current(local_3c,*(uint *)(iVar2 + 0x124));
      output_buffer::write(local_3c,local_5c,0x14);
      uVar5 = output_buffer::get_size(local_3c);
      puVar6 = (uchar *)output_buffer::get_buffer(local_3c);
      iVar4 = Security::use_connection(this_01);
      MD5::get_digest(local_28,(uchar *)(iVar4 + 4),puVar6,uVar5);
      cVar1 = (anonymous_namespace)::setPrefix(local_1f,1);
      if (cVar1 != '\0') {
        output_buffer::set_current(local_48,0);
        output_buffer::write(local_48,local_1f,2);
        uVar5 = *(uint *)(iVar2 + 0x124);
        puVar3 = (undefined4 *)Security::get_connection(this_01);
        output_buffer::write(local_48,(uchar *)*puVar3,uVar5);
        iVar4 = Security::get_connection(this_01);
        output_buffer::write(local_48,(uchar *)(iVar4 + 0x34),0x20);
        iVar4 = Security::get_connection(this_01);
        output_buffer::write(local_48,(uchar *)(iVar4 + 0x54),0x20);
        uVar5 = output_buffer::get_size(local_48);
        puVar6 = (uchar *)output_buffer::get_buffer(local_48);
        SHA::get_digest(local_30,local_5c,puVar6,uVar5);
        output_buffer::set_current(local_3c,*(uint *)(iVar2 + 0x124));
        output_buffer::write(local_3c,local_5c,0x14);
        uVar5 = output_buffer::get_size(local_3c);
        puVar6 = (uchar *)output_buffer::get_buffer(local_3c);
        iVar4 = Security::use_connection(this_01);
        MD5::get_digest(local_28,(uchar *)(iVar4 + 0x14),puVar6,uVar5);
        cVar1 = (anonymous_namespace)::setPrefix(local_1f,2);
        if (cVar1 != '\0') {
          output_buffer::set_current(local_48,0);
          output_buffer::write(local_48,local_1f,3);
          uVar5 = *(uint *)(iVar2 + 0x124);
          puVar3 = (undefined4 *)Security::get_connection(this_01);
          output_buffer::write(local_48,(uchar *)*puVar3,uVar5);
          iVar4 = Security::get_connection(this_01);
          output_buffer::write(local_48,(uchar *)(iVar4 + 0x34),0x20);
          iVar4 = Security::get_connection(this_01);
          output_buffer::write(local_48,(uchar *)(iVar4 + 0x54),0x20);
          uVar5 = output_buffer::get_size(local_48);
          puVar6 = (uchar *)output_buffer::get_buffer(local_48);
          SHA::get_digest(local_30,local_5c,puVar6,uVar5);
          output_buffer::set_current(local_3c,*(uint *)(iVar2 + 0x124));
          output_buffer::write(local_3c,local_5c,0x14);
          uVar5 = output_buffer::get_size(local_3c);
          puVar6 = (uchar *)output_buffer::get_buffer(local_3c);
          iVar2 = Security::use_connection(this_01);
          MD5::get_digest(local_28,(uchar *)(iVar2 + 0x24),puVar6,uVar5);
          deriveKeys(this);
          SHA::~SHA(local_30);
          MD5::~MD5(local_28);
          output_buffer::~output_buffer(local_48);
          output_buffer::~output_buffer(local_3c);
          goto LAB_087501f4;
        }
      }
    }
    SetError(this,0x69);
    SHA::~SHA(local_30);
    MD5::~MD5(local_28);
    output_buffer::~output_buffer(local_48);
    output_buffer::~output_buffer(local_3c);
  }
  else {
    makeTLSMasterSecret(this);
LAB_087501f4:
    this_00 = (Connection *)Security::use_connection((Security *)(this + 0x68));
    Connection::CleanPreMaster(this_00);
  }
  return;
}

```

---

## makeTLSMasterSecret

```asm
// === 0874fd20 yaSSL::SSL::makeTLSMasterSecret  [0x0874fd20-0x874fe2f] ===
 874fd20:	55                   	push   %ebp
 874fd21:	89 e5                	mov    %esp,%ebp
 874fd23:	57                   	push   %edi
 874fd24:	56                   	push   %esi
 874fd25:	53                   	push   %ebx
 874fd26:	e8 cd 30 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874fd2b:	81 c3 6d ce c1 00    	add    $0xc1ce6d,%ebx
 874fd31:	83 ec 7c             	sub    $0x7c,%esp
 874fd34:	8b 75 08             	mov    0x8(%ebp),%esi
 874fd37:	83 c6 68             	add    $0x68,%esi
 874fd3a:	89 34 24             	mov    %esi,(%esp)
 874fd3d:	e8 1e ec ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fd42:	8d 55 a8             	lea    -0x58(%ebp),%edx
 874fd45:	8d 48 34             	lea    0x34(%eax),%ecx
 874fd48:	8b 40 34             	mov    0x34(%eax),%eax
 874fd4b:	89 45 a8             	mov    %eax,-0x58(%ebp)
 874fd4e:	8b 41 04             	mov    0x4(%ecx),%eax
 874fd51:	89 45 ac             	mov    %eax,-0x54(%ebp)
 874fd54:	8b 41 08             	mov    0x8(%ecx),%eax
 874fd57:	89 45 b0             	mov    %eax,-0x50(%ebp)
 874fd5a:	8b 41 0c             	mov    0xc(%ecx),%eax
 874fd5d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 874fd60:	8b 41 10             	mov    0x10(%ecx),%eax
 874fd63:	89 45 b8             	mov    %eax,-0x48(%ebp)
 874fd66:	8b 41 14             	mov    0x14(%ecx),%eax
 874fd69:	89 45 bc             	mov    %eax,-0x44(%ebp)
 874fd6c:	8b 41 18             	mov    0x18(%ecx),%eax
 874fd6f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 874fd72:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874fd75:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 874fd78:	89 34 24             	mov    %esi,(%esp)
 874fd7b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 874fd7e:	e8 dd eb ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fd83:	8d 48 54             	lea    0x54(%eax),%ecx
 874fd86:	8b 40 54             	mov    0x54(%eax),%eax
 874fd89:	89 45 c8             	mov    %eax,-0x38(%ebp)
 874fd8c:	8b 41 04             	mov    0x4(%ecx),%eax
 874fd8f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 874fd92:	8b 41 08             	mov    0x8(%ecx),%eax
 874fd95:	89 45 d0             	mov    %eax,-0x30(%ebp)
 874fd98:	8b 41 0c             	mov    0xc(%ecx),%eax
 874fd9b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 874fd9e:	8b 41 10             	mov    0x10(%ecx),%eax
 874fda1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 874fda4:	8b 41 14             	mov    0x14(%ecx),%eax
 874fda7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 874fdaa:	8b 41 18             	mov    0x18(%ecx),%eax
 874fdad:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874fdb0:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874fdb3:	89 34 24             	mov    %esi,(%esp)
 874fdb6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874fdb9:	e8 a2 eb ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fdbe:	8b b8 24 01 00 00    	mov    0x124(%eax),%edi
 874fdc4:	89 34 24             	mov    %esi,(%esp)
 874fdc7:	e8 94 eb ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874fdcc:	8b 08                	mov    (%eax),%ecx
 874fdce:	89 34 24             	mov    %esi,(%esp)
 874fdd1:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 874fdd4:	e8 27 ef ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874fdd9:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 874fddc:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 874fddf:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 874fde3:	c7 44 24 1c 40 00 00 	movl   $0x40,0x1c(%esp)
 874fdea:	00 
 874fdeb:	89 54 24 18          	mov    %edx,0x18(%esp)
 874fdef:	8d 93 26 86 99 ff    	lea    -0x6679da(%ebx),%edx
 874fdf5:	89 54 24 10          	mov    %edx,0x10(%esp)
 874fdf9:	83 c0 04             	add    $0x4,%eax
 874fdfc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874fe00:	89 04 24             	mov    %eax,(%esp)
 874fe03:	c7 44 24 14 0d 00 00 	movl   $0xd,0x14(%esp)
 874fe0a:	00 
 874fe0b:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 874fe12:	00 
 874fe13:	e8 68 eb 04 00       	call   879e980 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j>
 874fe18:	8b 45 08             	mov    0x8(%ebp),%eax
 874fe1b:	89 04 24             	mov    %eax,(%esp)
 874fe1e:	e8 9d fd ff ff       	call   874fbc0 <_ZN5yaSSL3SSL13deriveTLSKeysEv>
 874fe23:	83 c4 7c             	add    $0x7c,%esp
 874fe26:	5b                   	pop    %ebx
 874fe27:	5e                   	pop    %esi
 874fe28:	5f                   	pop    %edi
 874fe29:	5d                   	pop    %ebp
 874fe2a:	c3                   	ret
 874fe2b:	90                   	nop
 874fe2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::makeTLSMasterSecret @ 0x874fd20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::makeTLSMasterSecret() */

void __thiscall yaSSL::SSL::makeTLSMasterSecret(SSL *this)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  undefined4 *puVar4;
  Security *this_00;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x874fd2b;
  this_00 = (Security *)(this + 0x68);
  iVar3 = Security::get_connection(this_00);
  local_5c = *(undefined4 *)(iVar3 + 0x34);
  local_58 = *(undefined4 *)(iVar3 + 0x38);
  local_54 = *(undefined4 *)(iVar3 + 0x3c);
  local_50 = *(undefined4 *)(iVar3 + 0x40);
  local_4c = *(undefined4 *)(iVar3 + 0x44);
  local_48 = *(undefined4 *)(iVar3 + 0x48);
  local_44 = *(undefined4 *)(iVar3 + 0x4c);
  local_40 = *(undefined4 *)(iVar3 + 0x50);
  iVar3 = Security::get_connection(this_00);
  local_3c = *(undefined4 *)(iVar3 + 0x54);
  local_38 = *(undefined4 *)(iVar3 + 0x58);
  local_34 = *(undefined4 *)(iVar3 + 0x5c);
  local_30 = *(undefined4 *)(iVar3 + 0x60);
  local_2c = *(undefined4 *)(iVar3 + 100);
  local_28 = *(undefined4 *)(iVar3 + 0x68);
  local_24 = *(undefined4 *)(iVar3 + 0x6c);
  local_20 = *(undefined4 *)(iVar3 + 0x70);
  iVar3 = Security::get_connection(this_00);
  uVar1 = *(uint *)(iVar3 + 0x124);
  puVar4 = (undefined4 *)Security::get_connection(this_00);
  puVar2 = (uchar *)*puVar4;
  iVar3 = Security::use_connection(this_00);
  PRF((uchar *)(iVar3 + 4),0x30,puVar2,uVar1,(uchar *)"master secret",0xd,(uchar *)&local_5c,0x40);
  deriveTLSKeys(this);
  return;
}

```

---

## matchSuite

```asm
// === 0874eeb0 yaSSL::SSL::matchSuite  [0x0874eeb0-0x874efaf] ===
 874eeb0:	55                   	push   %ebp
 874eeb1:	89 e5                	mov    %esp,%ebp
 874eeb3:	57                   	push   %edi
 874eeb4:	56                   	push   %esi
 874eeb5:	53                   	push   %ebx
 874eeb6:	83 ec 2c             	sub    $0x2c,%esp
 874eeb9:	8b 55 10             	mov    0x10(%ebp),%edx
 874eebc:	e8 37 3f fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874eec1:	81 c3 d7 dc c1 00    	add    $0xc1dcd7,%ebx
 874eec7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874eeca:	85 d2                	test   %edx,%edx
 874eecc:	0f 84 96 00 00 00    	je     874ef68 <_ZN5yaSSL3SSL10matchSuiteEPKhj+0xb8>
 874eed2:	f6 45 10 01          	testb  $0x1,0x10(%ebp)
 874eed6:	0f 85 8c 00 00 00    	jne    874ef68 <_ZN5yaSSL3SSL10matchSuiteEPKhj+0xb8>
 874eedc:	8b 45 08             	mov    0x8(%ebp),%eax
 874eedf:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 874eee6:	83 c0 68             	add    $0x68,%eax
 874eee9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874eeec:	89 04 24             	mov    %eax,(%esp)
 874eeef:	e8 5c fb ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874eef4:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 874eef8:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 874eefb:	0f 83 93 00 00 00    	jae    874ef94 <_ZN5yaSSL3SSL10matchSuiteEPKhj+0xe4>
 874ef01:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 874ef05:	be 01 00 00 00       	mov    $0x1,%esi
 874ef0a:	77 0c                	ja     874ef18 <_ZN5yaSSL3SSL10matchSuiteEPKhj+0x68>
 874ef0c:	eb 7a                	jmp    874ef88 <_ZN5yaSSL3SSL10matchSuiteEPKhj+0xd8>
 874ef0e:	66 90                	xchg   %ax,%ax
 874ef10:	83 c6 02             	add    $0x2,%esi
 874ef13:	39 75 10             	cmp    %esi,0x10(%ebp)
 874ef16:	76 70                	jbe    874ef88 <_ZN5yaSSL3SSL10matchSuiteEPKhj+0xd8>
 874ef18:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874ef1b:	89 04 24             	mov    %eax,(%esp)
 874ef1e:	e8 7d ff ff ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 874ef23:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 874ef26:	8d 14 37             	lea    (%edi,%esi,1),%edx
 874ef29:	0f b6 44 08 2f       	movzbl 0x2f(%eax,%ecx,1),%eax
 874ef2e:	3a 04 37             	cmp    (%edi,%esi,1),%al
 874ef31:	75 dd                	jne    874ef10 <_ZN5yaSSL3SSL10matchSuiteEPKhj+0x60>
 874ef33:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874ef36:	89 55 dc             	mov    %edx,-0x24(%ebp)
 874ef39:	89 04 24             	mov    %eax,(%esp)
 874ef3c:	e8 5f ff ff ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 874ef41:	c6 40 2c 00          	movb   $0x0,0x2c(%eax)
 874ef45:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 874ef48:	89 0c 24             	mov    %ecx,(%esp)
 874ef4b:	e8 50 ff ff ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 874ef50:	8b 55 dc             	mov    -0x24(%ebp),%edx
 874ef53:	0f b6 12             	movzbl (%edx),%edx
 874ef56:	88 50 2d             	mov    %dl,0x2d(%eax)
 874ef59:	83 c4 2c             	add    $0x2c,%esp
 874ef5c:	5b                   	pop    %ebx
 874ef5d:	5e                   	pop    %esi
 874ef5e:	5f                   	pop    %edi
 874ef5f:	5d                   	pop    %ebp
 874ef60:	c3                   	ret
 874ef61:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874ef68:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874ef6b:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 874ef72:	00 
 874ef73:	89 0c 24             	mov    %ecx,(%esp)
 874ef76:	e8 55 f0 ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874ef7b:	83 c4 2c             	add    $0x2c,%esp
 874ef7e:	5b                   	pop    %ebx
 874ef7f:	5e                   	pop    %esi
 874ef80:	5f                   	pop    %edi
 874ef81:	5d                   	pop    %ebp
 874ef82:	c3                   	ret
 874ef83:	90                   	nop
 874ef84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874ef88:	83 45 e4 02          	addl   $0x2,-0x1c(%ebp)
 874ef8c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874ef8f:	e9 58 ff ff ff       	jmp    874eeec <_ZN5yaSSL3SSL10matchSuiteEPKhj+0x3c>
 874ef94:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874ef97:	c7 44 24 04 6e 00 00 	movl   $0x6e,0x4(%esp)
 874ef9e:	00 
 874ef9f:	89 0c 24             	mov    %ecx,(%esp)
 874efa2:	e8 29 f0 ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874efa7:	eb d2                	jmp    874ef7b <_ZN5yaSSL3SSL10matchSuiteEPKhj+0xcb>
 874efa9:	90                   	nop
 874efaa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::matchSuite @ 0x874eeb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::matchSuite(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SSL::matchSuite(SSL *this,uchar *param_1,uint param_2)

{
  Security *this_00;
  int iVar1;
  uint uVar2;
  uint local_20;
  
  if ((param_2 == 0) || ((param_2 & 1) != 0)) {
    SetError(this,0x6d);
  }
  else {
    this_00 = (Security *)(this + 0x68);
    for (local_20 = 1; iVar1 = Security::get_parms(this_00), local_20 < *(byte *)(iVar1 + 0x2e);
        local_20 = local_20 + 2) {
      uVar2 = 1;
      if (1 < param_2) {
        do {
          iVar1 = Security::use_parms(this_00);
          if (*(uchar *)(iVar1 + 0x2f + local_20) == param_1[uVar2]) {
            iVar1 = Security::use_parms(this_00);
            *(undefined1 *)(iVar1 + 0x2c) = 0;
            iVar1 = Security::use_parms(this_00);
            *(uchar *)(iVar1 + 0x2d) = param_1[uVar2];
            return;
          }
          uVar2 = uVar2 + 2;
        } while (uVar2 < param_2);
      }
    }
    SetError(this,0x6e);
  }
  return;
}

```

---

## order_error

```asm
// === 0874e030 yaSSL::SSL::order_error  [0x0874e030-0x874e05f] ===
 874e030:	55                   	push   %ebp
 874e031:	89 e5                	mov    %esp,%ebp
 874e033:	53                   	push   %ebx
 874e034:	e8 bf 4d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e039:	81 c3 5f eb c1 00    	add    $0xc1eb5f,%ebx
 874e03f:	83 ec 14             	sub    $0x14,%esp
 874e042:	8b 45 08             	mov    0x8(%ebp),%eax
 874e045:	c7 44 24 04 6c 00 00 	movl   $0x6c,0x4(%esp)
 874e04c:	00 
 874e04d:	89 04 24             	mov    %eax,(%esp)
 874e050:	e8 7b ff ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874e055:	83 c4 14             	add    $0x14,%esp
 874e058:	5b                   	pop    %ebx
 874e059:	5d                   	pop    %ebp
 874e05a:	c3                   	ret
 874e05b:	90                   	nop
 874e05c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::order_error @ 0x874e030

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::order_error() */

void __thiscall yaSSL::SSL::order_error(SSL *this)

{
  SetError(this,0x6c);
  return;
}

```

---

## setKeys

```asm
// === 0874ed80 yaSSL::SSL::setKeys  [0x0874ed80-0x874ee6f] ===
 874ed80:	55                   	push   %ebp
 874ed81:	89 e5                	mov    %esp,%ebp
 874ed83:	83 ec 38             	sub    $0x38,%esp
 874ed86:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874ed89:	e8 6a 40 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ed8e:	81 c3 0a de c1 00    	add    $0xc1de0a,%ebx
 874ed94:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874ed97:	8b 7d 08             	mov    0x8(%ebp),%edi
 874ed9a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874ed9d:	8d 57 68             	lea    0x68(%edi),%edx
 874eda0:	89 14 24             	mov    %edx,(%esp)
 874eda3:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 874eda6:	e8 55 ff ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874edab:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874edae:	89 14 24             	mov    %edx,(%esp)
 874edb1:	89 c6                	mov    %eax,%esi
 874edb3:	e8 98 fc ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874edb8:	83 38 01             	cmpl   $0x1,(%eax)
 874edbb:	74 5b                	je     874ee18 <_ZN5yaSSL3SSL7setKeysEv+0x98>
 874edbd:	89 3c 24             	mov    %edi,(%esp)
 874edc0:	e8 eb f9 ff ff       	call   874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>
 874edc5:	8d 8e 0c 01 00 00    	lea    0x10c(%esi),%ecx
 874edcb:	8b 10                	mov    (%eax),%edx
 874edcd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874edd1:	8d 8e dc 00 00 00    	lea    0xdc(%esi),%ecx
 874edd7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874eddb:	89 04 24             	mov    %eax,(%esp)
 874edde:	ff 52 08             	call   *0x8(%edx)
 874ede1:	89 3c 24             	mov    %edi,(%esp)
 874ede4:	e8 c7 f9 ff ff       	call   874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>
 874ede9:	8d 8e fc 00 00 00    	lea    0xfc(%esi),%ecx
 874edef:	81 c6 bc 00 00 00    	add    $0xbc,%esi
 874edf5:	8b 10                	mov    (%eax),%edx
 874edf7:	89 74 24 04          	mov    %esi,0x4(%esp)
 874edfb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874edff:	89 04 24             	mov    %eax,(%esp)
 874ee02:	ff 52 0c             	call   *0xc(%edx)
 874ee05:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874ee08:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874ee0b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874ee0e:	89 ec                	mov    %ebp,%esp
 874ee10:	5d                   	pop    %ebp
 874ee11:	c3                   	ret
 874ee12:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874ee18:	89 3c 24             	mov    %edi,(%esp)
 874ee1b:	e8 90 f9 ff ff       	call   874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>
 874ee20:	8d 8e fc 00 00 00    	lea    0xfc(%esi),%ecx
 874ee26:	8b 10                	mov    (%eax),%edx
 874ee28:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874ee2c:	8d 8e bc 00 00 00    	lea    0xbc(%esi),%ecx
 874ee32:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874ee36:	89 04 24             	mov    %eax,(%esp)
 874ee39:	ff 52 08             	call   *0x8(%edx)
 874ee3c:	89 3c 24             	mov    %edi,(%esp)
 874ee3f:	e8 6c f9 ff ff       	call   874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>
 874ee44:	8d 8e 0c 01 00 00    	lea    0x10c(%esi),%ecx
 874ee4a:	81 c6 dc 00 00 00    	add    $0xdc,%esi
 874ee50:	8b 10                	mov    (%eax),%edx
 874ee52:	89 74 24 04          	mov    %esi,0x4(%esp)
 874ee56:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874ee5a:	89 04 24             	mov    %eax,(%esp)
 874ee5d:	ff 52 0c             	call   *0xc(%edx)
 874ee60:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874ee63:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874ee66:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874ee69:	89 ec                	mov    %ebp,%esp
 874ee6b:	5d                   	pop    %ebp
 874ee6c:	c3                   	ret
 874ee6d:	90                   	nop
 874ee6e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::setKeys @ 0x874ed80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::setKeys() */

void __thiscall yaSSL::SSL::setKeys(SSL *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  piVar2 = (int *)Security::get_parms((Security *)(this + 0x68));
  if (*piVar2 != 1) {
    piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
    (**(code **)(*piVar2 + 8))(piVar2,iVar1 + 0xdc,iVar1 + 0x10c);
    piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
    (**(code **)(*piVar2 + 0xc))(piVar2,iVar1 + 0xbc,iVar1 + 0xfc);
    return;
  }
  piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
  (**(code **)(*piVar2 + 8))(piVar2,iVar1 + 0xbc,iVar1 + 0xfc);
  piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
  (**(code **)(*piVar2 + 0xc))(piVar2,iVar1 + 0xdc,iVar1 + 0x10c);
  return;
}

```

---

## set_masterSecret

```asm
// === 0874f350 yaSSL::SSL::set_masterSecret  [0x0874f350-0x874f3cf] ===
 874f350:	55                   	push   %ebp
 874f351:	89 e5                	mov    %esp,%ebp
 874f353:	56                   	push   %esi
 874f354:	53                   	push   %ebx
 874f355:	e8 9e 3a fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f35a:	81 c3 3e d8 c1 00    	add    $0xc1d83e,%ebx
 874f360:	83 ec 10             	sub    $0x10,%esp
 874f363:	8b 45 08             	mov    0x8(%ebp),%eax
 874f366:	8b 75 0c             	mov    0xc(%ebp),%esi
 874f369:	83 c0 68             	add    $0x68,%eax
 874f36c:	89 04 24             	mov    %eax,(%esp)
 874f36f:	e8 8c f9 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f374:	8b 0e                	mov    (%esi),%ecx
 874f376:	8d 50 04             	lea    0x4(%eax),%edx
 874f379:	89 48 04             	mov    %ecx,0x4(%eax)
 874f37c:	8b 46 04             	mov    0x4(%esi),%eax
 874f37f:	89 42 04             	mov    %eax,0x4(%edx)
 874f382:	8b 46 08             	mov    0x8(%esi),%eax
 874f385:	89 42 08             	mov    %eax,0x8(%edx)
 874f388:	8b 46 0c             	mov    0xc(%esi),%eax
 874f38b:	89 42 0c             	mov    %eax,0xc(%edx)
 874f38e:	8b 46 10             	mov    0x10(%esi),%eax
 874f391:	89 42 10             	mov    %eax,0x10(%edx)
 874f394:	8b 46 14             	mov    0x14(%esi),%eax
 874f397:	89 42 14             	mov    %eax,0x14(%edx)
 874f39a:	8b 46 18             	mov    0x18(%esi),%eax
 874f39d:	89 42 18             	mov    %eax,0x18(%edx)
 874f3a0:	8b 46 1c             	mov    0x1c(%esi),%eax
 874f3a3:	89 42 1c             	mov    %eax,0x1c(%edx)
 874f3a6:	8b 46 20             	mov    0x20(%esi),%eax
 874f3a9:	89 42 20             	mov    %eax,0x20(%edx)
 874f3ac:	8b 46 24             	mov    0x24(%esi),%eax
 874f3af:	89 42 24             	mov    %eax,0x24(%edx)
 874f3b2:	8b 46 28             	mov    0x28(%esi),%eax
 874f3b5:	89 42 28             	mov    %eax,0x28(%edx)
 874f3b8:	8b 46 2c             	mov    0x2c(%esi),%eax
 874f3bb:	89 42 2c             	mov    %eax,0x2c(%edx)
 874f3be:	83 c4 10             	add    $0x10,%esp
 874f3c1:	5b                   	pop    %ebx
 874f3c2:	5e                   	pop    %esi
 874f3c3:	5d                   	pop    %ebp
 874f3c4:	c3                   	ret
 874f3c5:	90                   	nop
 874f3c6:	8d 76 00             	lea    0x0(%esi),%esi
 874f3c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::set_masterSecret @ 0x874f350

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_masterSecret(unsigned char const*) */

void __thiscall yaSSL::SSL::set_masterSecret(SSL *this,uchar *param_1)

{
  int iVar1;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
  return;
}

```

---

## set_pending

```asm
// === 08751220 yaSSL::SSL::set_pending  [0x08751220-0x875234f] ===
 8751220:	55                   	push   %ebp
 8751221:	89 e5                	mov    %esp,%ebp
 8751223:	57                   	push   %edi
 8751224:	56                   	push   %esi
 8751225:	53                   	push   %ebx
 8751226:	e8 cd 1b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875122b:	81 c3 6d b9 c1 00    	add    $0xc1b96d,%ebx
 8751231:	83 ec 2c             	sub    $0x2c,%esp
 8751234:	8b 7d 08             	mov    0x8(%ebp),%edi
 8751237:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
 875123b:	8d 57 68             	lea    0x68(%edi),%edx
 875123e:	89 14 24             	mov    %edx,(%esp)
 8751241:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8751244:	88 45 e7             	mov    %al,-0x19(%ebp)
 8751247:	e8 54 dc ff ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 875124c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875124f:	89 c6                	mov    %eax,%esi
 8751251:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8751255:	83 e8 04             	sub    $0x4,%eax
 8751258:	3c 7a                	cmp    $0x7a,%al
 875125a:	76 1c                	jbe    8751278 <.L584+0x1c>

0875125c <.L584>:
 875125c:	c7 44 24 04 68 00 00 	movl   $0x68,0x4(%esp)
 8751263:	00 
 8751264:	89 3c 24             	mov    %edi,(%esp)
 8751267:	e8 64 cd ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 875126c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8751270:	83 c4 2c             	add    $0x2c,%esp
 8751273:	5b                   	pop    %ebx
 8751274:	5e                   	pop    %esi
 8751275:	5f                   	pop    %edi
 8751276:	5d                   	pop    %ebp
 8751277:	c3                   	ret
 8751278:	0f b6 c0             	movzbl %al,%eax
 875127b:	8b 84 83 2c 84 99 ff 	mov    -0x667bd4(%ebx,%eax,4),%eax
 8751282:	01 d8                	add    %ebx,%eax
 8751284:	ff e0                	jmp    *%eax
 8751286:	66 90                	xchg   %ax,%ax

08751288 <.L607>:
 8751288:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 875128f:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 8751296:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 875129d:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 87512a1:	c6 46 0c 20          	movb   $0x20,0xc(%esi)
 87512a5:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 87512a9:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 87512b0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87512b5:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87512bc:	e8 df f9 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87512c1:	89 04 24             	mov    %eax,(%esp)
 87512c4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87512c7:	e8 44 8f 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 87512cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87512cf:	89 3c 24             	mov    %edi,(%esp)
 87512d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87512d6:	e8 35 d5 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 87512db:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87512e0:	81 c6 af 00 00 00    	add    $0xaf,%esi
 87512e6:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87512ed:	e8 ae f9 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87512f2:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 87512f9:	00 
 87512fa:	89 04 24             	mov    %eax,(%esp)
 87512fd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751300:	e8 db 72 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751305:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751308:	89 3c 24             	mov    %edi,(%esp)
 875130b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875130f:	e8 0c d5 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751314:	8d 83 18 83 99 ff    	lea    -0x667ce8(%ebx),%eax
 875131a:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751321:	00 
 8751322:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751326:	89 34 24             	mov    %esi,(%esp)
 8751329:	e8 a2 c5 92 ff       	call   807d8d0 <strncpy@plt>
 875132e:	e9 3d ff ff ff       	jmp    8751270 <.L584+0x14>
 8751333:	90                   	nop
 8751334:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08751338 <.L606>:
 8751338:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 875133f:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 8751346:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 875134d:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751351:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 8751355:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751359:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751360:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751365:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875136c:	e8 2f f9 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751371:	89 04 24             	mov    %eax,(%esp)
 8751374:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751377:	e8 94 8e 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 875137c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875137f:	89 3c 24             	mov    %edi,(%esp)
 8751382:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751386:	e8 85 d4 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 875138b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751390:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751396:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875139d:	e8 fe f8 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87513a2:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 87513a9:	00 
 87513aa:	89 04 24             	mov    %eax,(%esp)
 87513ad:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87513b0:	e8 2b 72 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 87513b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87513b8:	89 3c 24             	mov    %edi,(%esp)
 87513bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87513bf:	e8 5c d4 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 87513c4:	8d 83 05 83 99 ff    	lea    -0x667cfb(%ebx),%eax
 87513ca:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 87513d1:	00 
 87513d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87513d6:	89 34 24             	mov    %esi,(%esp)
 87513d9:	e8 f2 c4 92 ff       	call   807d8d0 <strncpy@plt>
 87513de:	e9 8d fe ff ff       	jmp    8751270 <.L584+0x14>
 87513e3:	90                   	nop
 87513e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

087513e8 <.L605>:
 87513e8:	c7 46 04 04 00 00 00 	movl   $0x4,0x4(%esi)
 87513ef:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 87513f6:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 87513fd:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751401:	c6 46 0c 18          	movb   $0x18,0xc(%esi)
 8751405:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8751409:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751410:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751415:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875141c:	e8 7f f8 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751421:	89 04 24             	mov    %eax,(%esp)
 8751424:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751427:	e8 e4 8d 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 875142c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875142f:	89 3c 24             	mov    %edi,(%esp)
 8751432:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751436:	e8 d5 d3 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 875143b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751440:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751446:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875144d:	e8 4e f8 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751452:	89 04 24             	mov    %eax,(%esp)
 8751455:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751458:	e8 83 72 04 00       	call   87986e0 <_ZN5yaSSL7DES_EDEC1Ev>
 875145d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751460:	89 3c 24             	mov    %edi,(%esp)
 8751463:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751467:	e8 b4 d3 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 875146c:	8d 83 f0 82 99 ff    	lea    -0x667d10(%ebx),%eax
 8751472:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751479:	00 
 875147a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875147e:	89 34 24             	mov    %esi,(%esp)
 8751481:	e8 4a c4 92 ff       	call   807d8d0 <strncpy@plt>
 8751486:	e9 e5 fd ff ff       	jmp    8751270 <.L584+0x14>
 875148b:	90                   	nop
 875148c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08751490 <.L604>:
 8751490:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 8751497:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 875149e:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 87514a5:	c7 46 20 01 00 00 00 	movl   $0x1,0x20(%esi)
 87514ac:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 87514b0:	c6 46 0c 20          	movb   $0x20,0xc(%esi)
 87514b4:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 87514b8:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 87514bf:	89 14 24             	mov    %edx,(%esp)
 87514c2:	e8 39 d8 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 87514c7:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 87514ce:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87514d3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87514da:	e8 c1 f7 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87514df:	89 04 24             	mov    %eax,(%esp)
 87514e2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87514e5:	e8 26 8d 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 87514ea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87514ed:	89 3c 24             	mov    %edi,(%esp)
 87514f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87514f4:	e8 17 d3 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 87514f9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87514fe:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751504:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875150b:	e8 90 f7 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751510:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8751517:	00 
 8751518:	89 04 24             	mov    %eax,(%esp)
 875151b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875151e:	e8 bd 70 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751523:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751526:	89 3c 24             	mov    %edi,(%esp)
 8751529:	89 44 24 04          	mov    %eax,0x4(%esp)
 875152d:	e8 ee d2 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751532:	8d 83 10 83 99 ff    	lea    -0x667cf0(%ebx),%eax
 8751538:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 875153f:	00 
 8751540:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751544:	89 34 24             	mov    %esi,(%esp)
 8751547:	e8 84 c3 92 ff       	call   807d8d0 <strncpy@plt>
 875154c:	e9 1f fd ff ff       	jmp    8751270 <.L584+0x14>
 8751551:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751558 <.L603>:
 8751558:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 875155f:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 8751566:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 875156d:	c7 46 20 01 00 00 00 	movl   $0x1,0x20(%esi)
 8751574:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751578:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 875157c:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751580:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751587:	89 14 24             	mov    %edx,(%esp)
 875158a:	e8 71 d7 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 875158f:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 8751596:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875159b:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87515a2:	e8 f9 f6 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87515a7:	89 04 24             	mov    %eax,(%esp)
 87515aa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87515ad:	e8 5e 8c 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 87515b2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87515b5:	89 3c 24             	mov    %edi,(%esp)
 87515b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87515bc:	e8 4f d2 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 87515c1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87515c6:	81 c6 af 00 00 00    	add    $0xaf,%esi
 87515cc:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87515d3:	e8 c8 f6 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87515d8:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 87515df:	00 
 87515e0:	89 04 24             	mov    %eax,(%esp)
 87515e3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87515e6:	e8 f5 6f 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 87515eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87515ee:	89 3c 24             	mov    %edi,(%esp)
 87515f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87515f5:	e8 26 d2 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 87515fa:	8d 83 fd 82 99 ff    	lea    -0x667d03(%ebx),%eax
 8751600:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751607:	00 
 8751608:	89 44 24 04          	mov    %eax,0x4(%esp)
 875160c:	89 34 24             	mov    %esi,(%esp)
 875160f:	e8 bc c2 92 ff       	call   807d8d0 <strncpy@plt>
 8751614:	e9 57 fc ff ff       	jmp    8751270 <.L584+0x14>
 8751619:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751620 <.L602>:
 8751620:	c7 46 04 04 00 00 00 	movl   $0x4,0x4(%esi)
 8751627:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 875162e:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751635:	c7 46 20 01 00 00 00 	movl   $0x1,0x20(%esi)
 875163c:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751640:	c6 46 0c 18          	movb   $0x18,0xc(%esi)
 8751644:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8751648:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 875164f:	89 14 24             	mov    %edx,(%esp)
 8751652:	e8 a9 d6 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751657:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 875165e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751663:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875166a:	e8 31 f6 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 875166f:	89 04 24             	mov    %eax,(%esp)
 8751672:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751675:	e8 96 8b 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 875167a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875167d:	89 3c 24             	mov    %edi,(%esp)
 8751680:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751684:	e8 87 d1 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751689:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875168e:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751694:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875169b:	e8 00 f6 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87516a0:	89 04 24             	mov    %eax,(%esp)
 87516a3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87516a6:	e8 35 70 04 00       	call   87986e0 <_ZN5yaSSL7DES_EDEC1Ev>
 87516ab:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87516ae:	89 3c 24             	mov    %edi,(%esp)
 87516b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87516b5:	e8 66 d1 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 87516ba:	8d 83 e8 82 99 ff    	lea    -0x667d18(%ebx),%eax
 87516c0:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 87516c7:	00 
 87516c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87516cc:	89 34 24             	mov    %esi,(%esp)
 87516cf:	e8 fc c1 92 ff       	call   807d8d0 <strncpy@plt>
 87516d4:	e9 97 fb ff ff       	jmp    8751270 <.L584+0x14>
 87516d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

087516e0 <.L601>:
 87516e0:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 87516e7:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 87516ee:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 87516f5:	c7 46 20 02 00 00 00 	movl   $0x2,0x20(%esi)
 87516fc:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751700:	c6 46 0c 20          	movb   $0x20,0xc(%esi)
 8751704:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751708:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 875170f:	89 14 24             	mov    %edx,(%esp)
 8751712:	e8 e9 d5 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751717:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 875171e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751723:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875172a:	e8 71 f5 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 875172f:	89 04 24             	mov    %eax,(%esp)
 8751732:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751735:	e8 d6 8a 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 875173a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875173d:	89 3c 24             	mov    %edi,(%esp)
 8751740:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751744:	e8 c7 d0 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751749:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875174e:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751754:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875175b:	e8 40 f5 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751760:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8751767:	00 
 8751768:	89 04 24             	mov    %eax,(%esp)
 875176b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875176e:	e8 6d 6e 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751773:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751776:	89 3c 24             	mov    %edi,(%esp)
 8751779:	89 44 24 04          	mov    %eax,0x4(%esp)
 875177d:	e8 9e d0 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751782:	8d 83 d5 82 99 ff    	lea    -0x667d2b(%ebx),%eax
 8751788:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 875178f:	00 
 8751790:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751794:	89 34 24             	mov    %esi,(%esp)
 8751797:	e8 34 c1 92 ff       	call   807d8d0 <strncpy@plt>
 875179c:	e9 cf fa ff ff       	jmp    8751270 <.L584+0x14>
 87517a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

087517a8 <.L600>:
 87517a8:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 87517af:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 87517b6:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 87517bd:	c7 46 20 02 00 00 00 	movl   $0x2,0x20(%esi)
 87517c4:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 87517c8:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 87517cc:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 87517d0:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 87517d7:	89 14 24             	mov    %edx,(%esp)
 87517da:	e8 21 d5 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 87517df:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 87517e6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87517eb:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87517f2:	e8 a9 f4 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87517f7:	89 04 24             	mov    %eax,(%esp)
 87517fa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87517fd:	e8 0e 8a 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 8751802:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751805:	89 3c 24             	mov    %edi,(%esp)
 8751808:	89 44 24 04          	mov    %eax,0x4(%esp)
 875180c:	e8 ff cf ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751811:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751816:	81 c6 af 00 00 00    	add    $0xaf,%esi
 875181c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751823:	e8 78 f4 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751828:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 875182f:	00 
 8751830:	89 04 24             	mov    %eax,(%esp)
 8751833:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751836:	e8 a5 6d 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 875183b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875183e:	89 3c 24             	mov    %edi,(%esp)
 8751841:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751845:	e8 d6 cf ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 875184a:	8d 83 c2 82 99 ff    	lea    -0x667d3e(%ebx),%eax
 8751850:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751857:	00 
 8751858:	89 44 24 04          	mov    %eax,0x4(%esp)
 875185c:	89 34 24             	mov    %esi,(%esp)
 875185f:	e8 6c c0 92 ff       	call   807d8d0 <strncpy@plt>
 8751864:	e9 07 fa ff ff       	jmp    8751270 <.L584+0x14>
 8751869:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751870 <.L599>:
 8751870:	c7 46 04 04 00 00 00 	movl   $0x4,0x4(%esi)
 8751877:	c7 46 10 03 00 00 00 	movl   $0x3,0x10(%esi)
 875187e:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751885:	c7 46 20 02 00 00 00 	movl   $0x2,0x20(%esi)
 875188c:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751890:	c6 46 0c 18          	movb   $0x18,0xc(%esi)
 8751894:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8751898:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 875189f:	89 14 24             	mov    %edx,(%esp)
 87518a2:	e8 59 d4 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 87518a7:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 87518ae:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87518b3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87518ba:	e8 e1 f3 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87518bf:	89 04 24             	mov    %eax,(%esp)
 87518c2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87518c5:	e8 46 89 04 00       	call   879a210 <_ZN5yaSSL3RMDC1Ev>
 87518ca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87518cd:	89 3c 24             	mov    %edi,(%esp)
 87518d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87518d4:	e8 37 cf ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 87518d9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87518de:	81 c6 af 00 00 00    	add    $0xaf,%esi
 87518e4:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87518eb:	e8 b0 f3 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87518f0:	89 04 24             	mov    %eax,(%esp)
 87518f3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87518f6:	e8 e5 6d 04 00       	call   87986e0 <_ZN5yaSSL7DES_EDEC1Ev>
 87518fb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87518fe:	89 3c 24             	mov    %edi,(%esp)
 8751901:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751905:	e8 16 cf ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 875190a:	8d 83 ad 82 99 ff    	lea    -0x667d53(%ebx),%eax
 8751910:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751917:	00 
 8751918:	89 44 24 04          	mov    %eax,0x4(%esp)
 875191c:	89 34 24             	mov    %esi,(%esp)
 875191f:	e8 ac bf 92 ff       	call   807d8d0 <strncpy@plt>
 8751924:	e9 47 f9 ff ff       	jmp    8751270 <.L584+0x14>
 8751929:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751930 <.L598>:
 8751930:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 8751937:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 875193e:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751945:	c7 46 20 01 00 00 00 	movl   $0x1,0x20(%esi)
 875194c:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751950:	c6 46 0c 20          	movb   $0x20,0xc(%esi)
 8751954:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751958:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 875195f:	89 14 24             	mov    %edx,(%esp)
 8751962:	e8 99 d3 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751967:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 875196e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751973:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875197a:	e8 21 f3 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 875197f:	89 04 24             	mov    %eax,(%esp)
 8751982:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751985:	e8 06 88 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 875198a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875198d:	89 3c 24             	mov    %edi,(%esp)
 8751990:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751994:	e8 77 ce ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751999:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875199e:	81 c6 af 00 00 00    	add    $0xaf,%esi
 87519a4:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87519ab:	e8 f0 f2 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87519b0:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 87519b7:	00 
 87519b8:	89 04 24             	mov    %eax,(%esp)
 87519bb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87519be:	e8 1d 6c 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 87519c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87519c6:	89 3c 24             	mov    %edi,(%esp)
 87519c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87519cd:	e8 4e ce ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 87519d2:	8d 83 9a 82 99 ff    	lea    -0x667d66(%ebx),%eax
 87519d8:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 87519df:	00 
 87519e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87519e4:	89 34 24             	mov    %esi,(%esp)
 87519e7:	e8 e4 be 92 ff       	call   807d8d0 <strncpy@plt>
 87519ec:	e9 7f f8 ff ff       	jmp    8751270 <.L584+0x14>
 87519f1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

087519f8 <.L597>:
 87519f8:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 87519ff:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751a06:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751a0d:	c7 46 20 02 00 00 00 	movl   $0x2,0x20(%esi)
 8751a14:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751a18:	c6 46 0c 20          	movb   $0x20,0xc(%esi)
 8751a1c:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751a20:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751a27:	89 14 24             	mov    %edx,(%esp)
 8751a2a:	e8 d1 d2 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751a2f:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 8751a36:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751a3b:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751a42:	e8 59 f2 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751a47:	89 04 24             	mov    %eax,(%esp)
 8751a4a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751a4d:	e8 3e 87 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751a52:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751a55:	89 3c 24             	mov    %edi,(%esp)
 8751a58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751a5c:	e8 af cd ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751a61:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751a66:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751a6c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751a73:	e8 28 f2 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751a78:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8751a7f:	00 
 8751a80:	89 04 24             	mov    %eax,(%esp)
 8751a83:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751a86:	e8 55 6b 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751a8b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751a8e:	89 3c 24             	mov    %edi,(%esp)
 8751a91:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751a95:	e8 86 cd ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751a9a:	8d 83 87 82 99 ff    	lea    -0x667d79(%ebx),%eax
 8751aa0:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751aa7:	00 
 8751aa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751aac:	89 34 24             	mov    %esi,(%esp)
 8751aaf:	e8 1c be 92 ff       	call   807d8d0 <strncpy@plt>
 8751ab4:	e9 b7 f7 ff ff       	jmp    8751270 <.L584+0x14>
 8751ab9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751ac0 <.L596>:
 8751ac0:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 8751ac7:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751ace:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 8751ad5:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751ad9:	c6 46 0c 20          	movb   $0x20,0xc(%esi)
 8751add:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751ae1:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751ae8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751aed:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751af4:	e8 a7 f1 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751af9:	89 04 24             	mov    %eax,(%esp)
 8751afc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751aff:	e8 8c 86 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751b04:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751b07:	89 3c 24             	mov    %edi,(%esp)
 8751b0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751b0e:	e8 fd cc ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751b13:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751b18:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751b1e:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751b25:	e8 76 f1 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751b2a:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8751b31:	00 
 8751b32:	89 04 24             	mov    %eax,(%esp)
 8751b35:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751b38:	e8 a3 6a 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751b3d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751b40:	89 3c 24             	mov    %edi,(%esp)
 8751b43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751b47:	e8 d4 cc ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751b4c:	8d 83 a2 82 99 ff    	lea    -0x667d5e(%ebx),%eax
 8751b52:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751b59:	00 
 8751b5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751b5e:	89 34 24             	mov    %esi,(%esp)
 8751b61:	e8 6a bd 92 ff       	call   807d8d0 <strncpy@plt>
 8751b66:	e9 05 f7 ff ff       	jmp    8751270 <.L584+0x14>
 8751b6b:	90                   	nop
 8751b6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08751b70 <.L595>:
 8751b70:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 8751b77:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751b7e:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751b85:	c7 46 20 01 00 00 00 	movl   $0x1,0x20(%esi)
 8751b8c:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751b90:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 8751b94:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751b98:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751b9f:	89 14 24             	mov    %edx,(%esp)
 8751ba2:	e8 59 d1 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751ba7:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 8751bae:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751bb3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751bba:	e8 e1 f0 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751bbf:	89 04 24             	mov    %eax,(%esp)
 8751bc2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751bc5:	e8 c6 85 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751bca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751bcd:	89 3c 24             	mov    %edi,(%esp)
 8751bd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751bd4:	e8 37 cc ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751bd9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751bde:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751be4:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751beb:	e8 b0 f0 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751bf0:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8751bf7:	00 
 8751bf8:	89 04 24             	mov    %eax,(%esp)
 8751bfb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751bfe:	e8 dd 69 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751c03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751c06:	89 3c 24             	mov    %edi,(%esp)
 8751c09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751c0d:	e8 0e cc ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751c12:	8d 83 74 82 99 ff    	lea    -0x667d8c(%ebx),%eax
 8751c18:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751c1f:	00 
 8751c20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751c24:	89 34 24             	mov    %esi,(%esp)
 8751c27:	e8 a4 bc 92 ff       	call   807d8d0 <strncpy@plt>
 8751c2c:	e9 3f f6 ff ff       	jmp    8751270 <.L584+0x14>
 8751c31:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751c38 <.L594>:
 8751c38:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 8751c3f:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751c46:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751c4d:	c7 46 20 02 00 00 00 	movl   $0x2,0x20(%esi)
 8751c54:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751c58:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 8751c5c:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751c60:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751c67:	89 14 24             	mov    %edx,(%esp)
 8751c6a:	e8 91 d0 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751c6f:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 8751c76:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751c7b:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751c82:	e8 19 f0 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751c87:	89 04 24             	mov    %eax,(%esp)
 8751c8a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751c8d:	e8 fe 84 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751c92:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751c95:	89 3c 24             	mov    %edi,(%esp)
 8751c98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751c9c:	e8 6f cb ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751ca1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751ca6:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751cac:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751cb3:	e8 e8 ef ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751cb8:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8751cbf:	00 
 8751cc0:	89 04 24             	mov    %eax,(%esp)
 8751cc3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751cc6:	e8 15 69 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751ccb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751cce:	89 3c 24             	mov    %edi,(%esp)
 8751cd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751cd5:	e8 46 cb ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751cda:	8d 83 61 82 99 ff    	lea    -0x667d9f(%ebx),%eax
 8751ce0:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751ce7:	00 
 8751ce8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751cec:	89 34 24             	mov    %esi,(%esp)
 8751cef:	e8 dc bb 92 ff       	call   807d8d0 <strncpy@plt>
 8751cf4:	e9 77 f5 ff ff       	jmp    8751270 <.L584+0x14>
 8751cf9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751d00 <.L593>:
 8751d00:	c7 46 04 07 00 00 00 	movl   $0x7,0x4(%esi)
 8751d07:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751d0e:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 8751d15:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751d19:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 8751d1d:	c6 46 0d 10          	movb   $0x10,0xd(%esi)
 8751d21:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751d28:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751d2d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751d34:	e8 67 ef ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751d39:	89 04 24             	mov    %eax,(%esp)
 8751d3c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751d3f:	e8 4c 84 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751d44:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751d47:	89 3c 24             	mov    %edi,(%esp)
 8751d4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751d4e:	e8 bd ca ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751d53:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751d58:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751d5e:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751d65:	e8 36 ef ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751d6a:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8751d71:	00 
 8751d72:	89 04 24             	mov    %eax,(%esp)
 8751d75:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751d78:	e8 63 68 04 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8751d7d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751d80:	89 3c 24             	mov    %edi,(%esp)
 8751d83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751d87:	e8 94 ca ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751d8c:	8d 83 7c 82 99 ff    	lea    -0x667d84(%ebx),%eax
 8751d92:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751d99:	00 
 8751d9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751d9e:	89 34 24             	mov    %esi,(%esp)
 8751da1:	e8 2a bb 92 ff       	call   807d8d0 <strncpy@plt>
 8751da6:	e9 c5 f4 ff ff       	jmp    8751270 <.L584+0x14>
 8751dab:	90                   	nop
 8751dac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08751db0 <.L592>:
 8751db0:	c7 46 04 04 00 00 00 	movl   $0x4,0x4(%esi)
 8751db7:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751dbe:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751dc5:	c7 46 20 01 00 00 00 	movl   $0x1,0x20(%esi)
 8751dcc:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751dd0:	c6 46 0c 18          	movb   $0x18,0xc(%esi)
 8751dd4:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8751dd8:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751ddf:	89 14 24             	mov    %edx,(%esp)
 8751de2:	e8 19 cf ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751de7:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 8751dee:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751df3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751dfa:	e8 a1 ee ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751dff:	89 04 24             	mov    %eax,(%esp)
 8751e02:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751e05:	e8 86 83 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751e0a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751e0d:	89 3c 24             	mov    %edi,(%esp)
 8751e10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751e14:	e8 f7 c9 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751e19:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751e1e:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751e24:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751e2b:	e8 70 ee ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751e30:	89 04 24             	mov    %eax,(%esp)
 8751e33:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751e36:	e8 a5 68 04 00       	call   87986e0 <_ZN5yaSSL7DES_EDEC1Ev>
 8751e3b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751e3e:	89 3c 24             	mov    %edi,(%esp)
 8751e41:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751e45:	e8 d6 c9 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751e4a:	8d 83 4c 82 99 ff    	lea    -0x667db4(%ebx),%eax
 8751e50:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751e57:	00 
 8751e58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751e5c:	89 34 24             	mov    %esi,(%esp)
 8751e5f:	e8 6c ba 92 ff       	call   807d8d0 <strncpy@plt>
 8751e64:	e9 07 f4 ff ff       	jmp    8751270 <.L584+0x14>
 8751e69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751e70 <.L591>:
 8751e70:	c7 46 04 03 00 00 00 	movl   $0x3,0x4(%esi)
 8751e77:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751e7e:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751e85:	c7 46 20 01 00 00 00 	movl   $0x1,0x20(%esi)
 8751e8c:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751e90:	c6 46 0c 08          	movb   $0x8,0xc(%esi)
 8751e94:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8751e98:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751e9f:	89 14 24             	mov    %edx,(%esp)
 8751ea2:	e8 59 ce ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751ea7:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 8751eae:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751eb3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751eba:	e8 e1 ed ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751ebf:	89 04 24             	mov    %eax,(%esp)
 8751ec2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751ec5:	e8 c6 82 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751eca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751ecd:	89 3c 24             	mov    %edi,(%esp)
 8751ed0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751ed4:	e8 37 c9 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751ed9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751ede:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751ee4:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751eeb:	e8 b0 ed ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751ef0:	89 04 24             	mov    %eax,(%esp)
 8751ef3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751ef6:	e8 95 68 04 00       	call   8798790 <_ZN5yaSSL3DESC1Ev>
 8751efb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751efe:	89 3c 24             	mov    %edi,(%esp)
 8751f01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751f05:	e8 16 c9 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751f0a:	8d 83 38 82 99 ff    	lea    -0x667dc8(%ebx),%eax
 8751f10:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751f17:	00 
 8751f18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751f1c:	89 34 24             	mov    %esi,(%esp)
 8751f1f:	e8 ac b9 92 ff       	call   807d8d0 <strncpy@plt>
 8751f24:	e9 47 f3 ff ff       	jmp    8751270 <.L584+0x14>
 8751f29:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751f30 <.L590>:
 8751f30:	c7 46 04 04 00 00 00 	movl   $0x4,0x4(%esi)
 8751f37:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751f3e:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8751f45:	c7 46 20 02 00 00 00 	movl   $0x2,0x20(%esi)
 8751f4c:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8751f50:	c6 46 0c 18          	movb   $0x18,0xc(%esi)
 8751f54:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8751f58:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8751f5f:	89 14 24             	mov    %edx,(%esp)
 8751f62:	e8 99 cd ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8751f67:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 8751f6e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751f73:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751f7a:	e8 21 ed ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751f7f:	89 04 24             	mov    %eax,(%esp)
 8751f82:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751f85:	e8 06 82 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8751f8a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751f8d:	89 3c 24             	mov    %edi,(%esp)
 8751f90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751f94:	e8 77 c8 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8751f99:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8751f9e:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8751fa4:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8751fab:	e8 f0 ec ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751fb0:	89 04 24             	mov    %eax,(%esp)
 8751fb3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8751fb6:	e8 25 67 04 00       	call   87986e0 <_ZN5yaSSL7DES_EDEC1Ev>
 8751fbb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8751fbe:	89 3c 24             	mov    %edi,(%esp)
 8751fc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751fc5:	e8 56 c8 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8751fca:	8d 83 23 82 99 ff    	lea    -0x667ddd(%ebx),%eax
 8751fd0:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8751fd7:	00 
 8751fd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8751fdc:	89 34 24             	mov    %esi,(%esp)
 8751fdf:	e8 ec b8 92 ff       	call   807d8d0 <strncpy@plt>
 8751fe4:	e9 87 f2 ff ff       	jmp    8751270 <.L584+0x14>
 8751fe9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

08751ff0 <.L589>:
 8751ff0:	c7 46 04 03 00 00 00 	movl   $0x3,0x4(%esi)
 8751ff7:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8751ffe:	c7 46 1c 02 00 00 00 	movl   $0x2,0x1c(%esi)
 8752005:	c7 46 20 02 00 00 00 	movl   $0x2,0x20(%esi)
 875200c:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8752010:	c6 46 0c 08          	movb   $0x8,0xc(%esi)
 8752014:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8752018:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 875201f:	89 14 24             	mov    %edx,(%esp)
 8752022:	e8 d9 cc ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8752027:	c6 80 28 01 00 00 01 	movb   $0x1,0x128(%eax)
 875202e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752033:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875203a:	e8 61 ec ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 875203f:	89 04 24             	mov    %eax,(%esp)
 8752042:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752045:	e8 46 81 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 875204a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875204d:	89 3c 24             	mov    %edi,(%esp)
 8752050:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752054:	e8 b7 c7 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8752059:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875205e:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8752064:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875206b:	e8 30 ec ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8752070:	89 04 24             	mov    %eax,(%esp)
 8752073:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752076:	e8 15 67 04 00       	call   8798790 <_ZN5yaSSL3DESC1Ev>
 875207b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875207e:	89 3c 24             	mov    %edi,(%esp)
 8752081:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752085:	e8 96 c7 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 875208a:	8d 83 0f 82 99 ff    	lea    -0x667df1(%ebx),%eax
 8752090:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8752097:	00 
 8752098:	89 44 24 04          	mov    %eax,0x4(%esp)
 875209c:	89 34 24             	mov    %esi,(%esp)
 875209f:	e8 2c b8 92 ff       	call   807d8d0 <strncpy@plt>
 87520a4:	e9 c7 f1 ff ff       	jmp    8751270 <.L584+0x14>
 87520a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

087520b0 <.L588>:
 87520b0:	c7 46 04 04 00 00 00 	movl   $0x4,0x4(%esi)
 87520b7:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 87520be:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 87520c5:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 87520c9:	c6 46 0c 18          	movb   $0x18,0xc(%esi)
 87520cd:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 87520d1:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 87520d8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87520dd:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87520e4:	e8 b7 eb ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87520e9:	89 04 24             	mov    %eax,(%esp)
 87520ec:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87520ef:	e8 9c 80 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 87520f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87520f7:	89 3c 24             	mov    %edi,(%esp)
 87520fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 87520fe:	e8 0d c7 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8752103:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752108:	81 c6 af 00 00 00    	add    $0xaf,%esi
 875210e:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8752115:	e8 86 eb ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 875211a:	89 04 24             	mov    %eax,(%esp)
 875211d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752120:	e8 bb 65 04 00       	call   87986e0 <_ZN5yaSSL7DES_EDEC1Ev>
 8752125:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8752128:	89 3c 24             	mov    %edi,(%esp)
 875212b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875212f:	e8 ec c6 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8752134:	8d 83 54 82 99 ff    	lea    -0x667dac(%ebx),%eax
 875213a:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8752141:	00 
 8752142:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752146:	89 34 24             	mov    %esi,(%esp)
 8752149:	e8 82 b7 92 ff       	call   807d8d0 <strncpy@plt>
 875214e:	e9 1d f1 ff ff       	jmp    8751270 <.L584+0x14>
 8752153:	90                   	nop
 8752154:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08752158 <.L587>:
 8752158:	c7 46 04 03 00 00 00 	movl   $0x3,0x4(%esi)
 875215f:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 8752166:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 875216d:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8752171:	c6 46 0c 08          	movb   $0x8,0xc(%esi)
 8752175:	c6 46 0d 08          	movb   $0x8,0xd(%esi)
 8752179:	c7 46 08 01 00 00 00 	movl   $0x1,0x8(%esi)
 8752180:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752185:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875218c:	e8 0f eb ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8752191:	89 04 24             	mov    %eax,(%esp)
 8752194:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752197:	e8 f4 7f 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 875219c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875219f:	89 3c 24             	mov    %edi,(%esp)
 87521a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87521a6:	e8 65 c6 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 87521ab:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87521b0:	81 c6 af 00 00 00    	add    $0xaf,%esi
 87521b6:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87521bd:	e8 de ea ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87521c2:	89 04 24             	mov    %eax,(%esp)
 87521c5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87521c8:	e8 c3 65 04 00       	call   8798790 <_ZN5yaSSL3DESC1Ev>
 87521cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87521d0:	89 3c 24             	mov    %edi,(%esp)
 87521d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87521d7:	e8 44 c6 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 87521dc:	8d 83 40 82 99 ff    	lea    -0x667dc0(%ebx),%eax
 87521e2:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 87521e9:	00 
 87521ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 87521ee:	89 34 24             	mov    %esi,(%esp)
 87521f1:	e8 da b6 92 ff       	call   807d8d0 <strncpy@plt>
 87521f6:	e9 75 f0 ff ff       	jmp    8751270 <.L584+0x14>
 87521fb:	90                   	nop
 87521fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08752200 <.L586>:
 8752200:	c7 46 04 01 00 00 00 	movl   $0x1,0x4(%esi)
 8752207:	c7 46 10 02 00 00 00 	movl   $0x2,0x10(%esi)
 875220e:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 8752215:	c6 46 14 14          	movb   $0x14,0x14(%esi)
 8752219:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 875221d:	c6 46 0d 00          	movb   $0x0,0xd(%esi)
 8752221:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8752228:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875222d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8752234:	e8 67 ea ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8752239:	89 04 24             	mov    %eax,(%esp)
 875223c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875223f:	e8 4c 7f 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 8752244:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8752247:	89 3c 24             	mov    %edi,(%esp)
 875224a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875224e:	e8 bd c5 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 8752253:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752258:	81 c6 af 00 00 00    	add    $0xaf,%esi
 875225e:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8752265:	e8 36 ea ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 875226a:	89 04 24             	mov    %eax,(%esp)
 875226d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752270:	e8 1b 64 04 00       	call   8798690 <_ZN5yaSSL3RC4C1Ev>
 8752275:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8752278:	89 3c 24             	mov    %edi,(%esp)
 875227b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875227f:	e8 9c c5 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 8752284:	8d 83 07 82 99 ff    	lea    -0x667df9(%ebx),%eax
 875228a:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8752291:	00 
 8752292:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752296:	89 34 24             	mov    %esi,(%esp)
 8752299:	e8 32 b6 92 ff       	call   807d8d0 <strncpy@plt>
 875229e:	e9 cd ef ff ff       	jmp    8751270 <.L584+0x14>
 87522a3:	90                   	nop
 87522a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

087522a8 <.L585>:
 87522a8:	c7 46 04 01 00 00 00 	movl   $0x1,0x4(%esi)
 87522af:	c7 46 10 01 00 00 00 	movl   $0x1,0x10(%esi)
 87522b6:	c7 46 1c 01 00 00 00 	movl   $0x1,0x1c(%esi)
 87522bd:	c6 46 14 10          	movb   $0x10,0x14(%esi)
 87522c1:	c6 46 0c 10          	movb   $0x10,0xc(%esi)
 87522c5:	c6 46 0d 00          	movb   $0x0,0xd(%esi)
 87522c9:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 87522d0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87522d5:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87522dc:	e8 bf e9 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87522e1:	89 04 24             	mov    %eax,(%esp)
 87522e4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87522e7:	e8 24 7e 04 00       	call   879a110 <_ZN5yaSSL3MD5C1Ev>
 87522ec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87522ef:	89 3c 24             	mov    %edi,(%esp)
 87522f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87522f6:	e8 15 c5 ff ff       	call   874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>
 87522fb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752300:	81 c6 af 00 00 00    	add    $0xaf,%esi
 8752306:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 875230d:	e8 8e e9 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8752312:	89 04 24             	mov    %eax,(%esp)
 8752315:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752318:	e8 73 63 04 00       	call   8798690 <_ZN5yaSSL3RC4C1Ev>
 875231d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8752320:	89 3c 24             	mov    %edi,(%esp)
 8752323:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752327:	e8 f4 c4 ff ff       	call   874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>
 875232c:	8d 83 ff 81 99 ff    	lea    -0x667e01(%ebx),%eax
 8752332:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8752339:	00 
 875233a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875233e:	89 34 24             	mov    %esi,(%esp)
 8752341:	e8 8a b5 92 ff       	call   807d8d0 <strncpy@plt>
 8752346:	e9 25 ef ff ff       	jmp    8751270 <.L584+0x14>
 875234b:	90                   	nop
 875234c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::set_pending @ 0x8751220

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_pending(unsigned char) */

void __thiscall yaSSL::SSL::set_pending(SSL *this,uchar param_1)

{
  Security *this_00;
  int iVar1;
  RMD *pRVar2;
  AES *pAVar3;
  DES_EDE *pDVar4;
  int iVar5;
  SHA *pSVar6;
  DES *pDVar7;
  RC4 *pRVar8;
  MD5 *this_01;
  uint in_stack_ffffffc8;
  uint3 uVar9;
  
  this_00 = (Security *)(this + 0x68);
  iVar1 = Security::use_parms(this_00);
  uVar9 = (uint3)(in_stack_ffffffc8 >> 8);
  switch(param_1) {
  case '\x04':
    *(undefined4 *)(iVar1 + 4) = 1;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x10;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    this_01 = operator_new(8,(uint)uVar9 << 8);
    MD5::MD5(this_01);
    Crypto::setDigest((Crypto *)this,(Digest *)this_01);
    pRVar8 = operator_new(8,(uint)this_01 & 0xffffff00);
    RC4::RC4(pRVar8);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pRVar8);
    strncpy((char *)(iVar1 + 0xaf),"RC4-MD5",0x30);
    break;
  case '\x05':
    *(undefined4 *)(iVar1 + 4) = 1;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pRVar8 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    RC4::RC4(pRVar8);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pRVar8);
    strncpy((char *)(iVar1 + 0xaf),"RC4-SHA",0x30);
    break;
  default:
    SetError(this,0x68);
    break;
  case '\t':
    *(undefined4 *)(iVar1 + 4) = 3;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 8;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar7 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES::DES(pDVar7);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar7);
    strncpy((char *)(iVar1 + 0xaf),"DES-CBC-SHA",0x30);
    break;
  case '\n':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar4 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DES-CBC3-SHA",0x30);
    break;
  case '\x12':
    *(undefined4 *)(iVar1 + 4) = 3;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 8;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar7 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES::DES(pDVar7);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar7);
    strncpy((char *)(iVar1 + 0xaf),"EDH-DSS-DES-CBC-SHA",0x30);
    break;
  case '\x13':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar4 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"EDH-DSS-DES-CBC3-SHA",0x30);
    break;
  case '\x15':
    *(undefined4 *)(iVar1 + 4) = 3;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 8;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar7 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES::DES(pDVar7);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar7);
    strncpy((char *)(iVar1 + 0xaf),"EDH-RSA-DES-CBC-SHA",0x30);
    break;
  case '\x16':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar4 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"EDH-RSA-DES-CBC3-SHA",0x30);
    break;
  case '/':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES128-SHA",0x30);
    break;
  case '2':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES128-SHA",0x30);
    break;
  case '3':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES128-SHA",0x30);
    break;
  case '5':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES256-SHA",0x30);
    break;
  case '8':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES256-SHA",0x30);
    break;
  case '9':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES256-SHA",0x30);
    break;
  case 'r':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pDVar4 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-DES-CBC3-RMD",0x30);
    break;
  case 's':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES128-RMD",0x30);
    break;
  case 't':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES256-RMD",0x30);
    break;
  case 'w':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pDVar4 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-DES-CBC3-RMD",0x30);
    break;
  case 'x':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES128-RMD",0x30);
    break;
  case 'y':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES256-RMD",0x30);
    break;
  case '|':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    pRVar2 = operator_new(8,(uint)uVar9 << 8);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pDVar4 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DES-CBC3-RMD",0x30);
    break;
  case '}':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pRVar2 = operator_new(8,(uint)uVar9 << 8);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES128-RMD",0x30);
    break;
  case '~':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pRVar2 = operator_new(8,(uint)uVar9 << 8);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES256-RMD",0x30);
  }
  return;
}

```

---

## set_preMaster

```asm
// === 08750710 yaSSL::SSL::set_preMaster  [0x08750710-0x875077f] ===
 8750710:	55                   	push   %ebp
 8750711:	89 e5                	mov    %esp,%ebp
 8750713:	83 ec 28             	sub    $0x28,%esp
 8750716:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8750719:	e8 da 26 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875071e:	81 c3 7a c4 c1 00    	add    $0xc1c47a,%ebx
 8750724:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8750727:	8b 7d 08             	mov    0x8(%ebp),%edi
 875072a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875072d:	8b 75 10             	mov    0x10(%ebp),%esi
 8750730:	83 c7 68             	add    $0x68,%edi
 8750733:	89 3c 24             	mov    %edi,(%esp)
 8750736:	e8 c5 e5 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 875073b:	89 74 24 04          	mov    %esi,0x4(%esp)
 875073f:	89 04 24             	mov    %eax,(%esp)
 8750742:	e8 39 6b ff ff       	call   8747280 <_ZN5yaSSL10Connection14AllocPreSecretEj>
 8750747:	89 3c 24             	mov    %edi,(%esp)
 875074a:	e8 b1 e5 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 875074f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8750752:	8b 00                	mov    (%eax),%eax
 8750754:	89 74 24 08          	mov    %esi,0x8(%esp)
 8750758:	89 54 24 04          	mov    %edx,0x4(%esp)
 875075c:	89 04 24             	mov    %eax,(%esp)
 875075f:	e8 3c d1 92 ff       	call   807d8a0 <memcpy@plt>
 8750764:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8750767:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875076a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875076d:	89 ec                	mov    %ebp,%esp
 875076f:	5d                   	pop    %ebp
 8750770:	c3                   	ret
 8750771:	90                   	nop
 8750772:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8750779:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::set_preMaster @ 0x8750710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SSL::set_preMaster(SSL *this,uchar *param_1,uint param_2)

{
  Connection *this_00;
  undefined4 *puVar1;
  
  this_00 = (Connection *)Security::use_connection((Security *)(this + 0x68));
  Connection::AllocPreSecret(this_00,param_2);
  puVar1 = (undefined4 *)Security::use_connection((Security *)(this + 0x68));
  memcpy((void *)*puVar1,param_1,param_2);
  return;
}

```

---

## set_random

```asm
// === 0874f3d0 yaSSL::SSL::set_random  [0x0874f3d0-0x874f44f] ===
 874f3d0:	55                   	push   %ebp
 874f3d1:	89 e5                	mov    %esp,%ebp
 874f3d3:	56                   	push   %esi
 874f3d4:	53                   	push   %ebx
 874f3d5:	83 ec 10             	sub    $0x10,%esp
 874f3d8:	8b 45 08             	mov    0x8(%ebp),%eax
 874f3db:	e8 18 3a fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f3e0:	81 c3 b8 d7 c1 00    	add    $0xc1d7b8,%ebx
 874f3e6:	8b 75 0c             	mov    0xc(%ebp),%esi
 874f3e9:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 874f3ed:	74 49                	je     874f438 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE+0x68>
 874f3ef:	83 c0 68             	add    $0x68,%eax
 874f3f2:	89 04 24             	mov    %eax,(%esp)
 874f3f5:	e8 06 f9 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f3fa:	8b 0e                	mov    (%esi),%ecx
 874f3fc:	8d 50 54             	lea    0x54(%eax),%edx
 874f3ff:	89 48 54             	mov    %ecx,0x54(%eax)
 874f402:	8b 46 04             	mov    0x4(%esi),%eax
 874f405:	89 42 04             	mov    %eax,0x4(%edx)
 874f408:	8b 46 08             	mov    0x8(%esi),%eax
 874f40b:	89 42 08             	mov    %eax,0x8(%edx)
 874f40e:	8b 46 0c             	mov    0xc(%esi),%eax
 874f411:	89 42 0c             	mov    %eax,0xc(%edx)
 874f414:	8b 46 10             	mov    0x10(%esi),%eax
 874f417:	89 42 10             	mov    %eax,0x10(%edx)
 874f41a:	8b 46 14             	mov    0x14(%esi),%eax
 874f41d:	89 42 14             	mov    %eax,0x14(%edx)
 874f420:	8b 46 18             	mov    0x18(%esi),%eax
 874f423:	89 42 18             	mov    %eax,0x18(%edx)
 874f426:	8b 46 1c             	mov    0x1c(%esi),%eax
 874f429:	89 42 1c             	mov    %eax,0x1c(%edx)
 874f42c:	83 c4 10             	add    $0x10,%esp
 874f42f:	5b                   	pop    %ebx
 874f430:	5e                   	pop    %esi
 874f431:	5d                   	pop    %ebp
 874f432:	c3                   	ret
 874f433:	90                   	nop
 874f434:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874f438:	83 c0 68             	add    $0x68,%eax
 874f43b:	89 04 24             	mov    %eax,(%esp)
 874f43e:	e8 bd f8 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f443:	8b 0e                	mov    (%esi),%ecx
 874f445:	8d 50 34             	lea    0x34(%eax),%edx
 874f448:	89 48 34             	mov    %ecx,0x34(%eax)
 874f44b:	eb b5                	jmp    874f402 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE+0x32>
 874f44d:	90                   	nop
 874f44e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::set_random @ 0x874f3d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd) */

void __thiscall yaSSL::SSL::set_random(SSL *this,undefined4 *param_1,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 1) {
    iVar1 = Security::use_connection((Security *)(this + 0x68));
    iVar2 = iVar1 + 0x34;
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
  }
  else {
    iVar1 = Security::use_connection((Security *)(this + 0x68));
    iVar2 = iVar1 + 0x54;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
  }
  *(undefined4 *)(iVar2 + 4) = param_1[1];
  *(undefined4 *)(iVar2 + 8) = param_1[2];
  *(undefined4 *)(iVar2 + 0xc) = param_1[3];
  *(undefined4 *)(iVar2 + 0x10) = param_1[4];
  *(undefined4 *)(iVar2 + 0x14) = param_1[5];
  *(undefined4 *)(iVar2 + 0x18) = param_1[6];
  *(undefined4 *)(iVar2 + 0x1c) = param_1[7];
  return;
}

```

---

## set_session

```asm
// === 08752fe0 yaSSL::SSL::set_session  [0x08752fe0-0x875309f] ===
 8752fe0:	55                   	push   %ebp
 8752fe1:	89 e5                	mov    %esp,%ebp
 8752fe3:	83 ec 38             	sub    $0x38,%esp
 8752fe6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8752fe9:	e8 0a fe fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752fee:	81 c3 aa 9b c1 00    	add    $0xc19baa,%ebx
 8752ff4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8752ff7:	8b 75 08             	mov    0x8(%ebp),%esi
 8752ffa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8752ffd:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8753000:	89 34 24             	mov    %esi,(%esp)
 8753003:	e8 68 b0 ff ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8753008:	89 04 24             	mov    %eax,(%esp)
 875300b:	e8 f0 b9 ff ff       	call   874ea00 <_ZNK5yaSSL8Security10GetContextEv>
 8753010:	89 04 24             	mov    %eax,(%esp)
 8753013:	e8 08 b5 ff ff       	call   874e520 <_ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv>
 8753018:	84 c0                	test   %al,%al
 875301a:	75 70                	jne    875308c <_ZN5yaSSL3SSL11set_sessionEPNS_11SSL_SESSIONE+0xac>
 875301c:	85 ff                	test   %edi,%edi
 875301e:	74 6c                	je     875308c <_ZN5yaSSL3SSL11set_sessionEPNS_11SSL_SESSIONE+0xac>
 8753020:	8d 56 68             	lea    0x68(%esi),%edx
 8753023:	89 14 24             	mov    %edx,(%esp)
 8753026:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8753029:	e8 82 bf ff ff       	call   874efb0 <_ZN5yaSSL8Security10use_resumeEv>
 875302e:	89 3c 24             	mov    %edi,(%esp)
 8753031:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8753034:	e8 e7 b2 ff ff       	call   874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>
 8753039:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875303c:	e8 5f e1 ff ff       	call   87511a0 <_ZN5yaSSL11GetSessionsEv>
 8753041:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8753044:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8753048:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875304b:	89 04 24             	mov    %eax,(%esp)
 875304e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8753052:	e8 09 fe ff ff       	call   8752e60 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE>
 8753057:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875305a:	85 c0                	test   %eax,%eax
 875305c:	74 2e                	je     875308c <_ZN5yaSSL3SSL11set_sessionEPNS_11SSL_SESSIONE+0xac>
 875305e:	89 14 24             	mov    %edx,(%esp)
 8753061:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8753068:	00 
 8753069:	e8 52 bf ff ff       	call   874efc0 <_ZN5yaSSL8Security12set_resumingEb>
 875306e:	89 3c 24             	mov    %edi,(%esp)
 8753071:	e8 da b2 ff ff       	call   874e350 <_ZNK5yaSSL11SSL_SESSION11GetPeerX509Ev>
 8753076:	89 34 24             	mov    %esi,(%esp)
 8753079:	89 c7                	mov    %eax,%edi
 875307b:	e8 60 b7 ff ff       	call   874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>
 8753080:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8753084:	89 04 24             	mov    %eax,(%esp)
 8753087:	e8 54 44 04 00       	call   87974e0 <_ZN5yaSSL11CertManager11setPeerX509EPNS_4X509E>
 875308c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875308f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8753092:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8753095:	89 ec                	mov    %ebp,%esp
 8753097:	5d                   	pop    %ebp
 8753098:	c3                   	ret
 8753099:	90                   	nop
 875309a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::set_session @ 0x8752fe0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_session(yaSSL::SSL_SESSION*) */

void __thiscall yaSSL::SSL::set_session(SSL *this,SSL_SESSION *param_1)

{
  char cVar1;
  Security *this_00;
  SSL_CTX *this_01;
  SSL_SESSION *pSVar2;
  uchar *puVar3;
  Sessions *this_02;
  int iVar4;
  X509 *pXVar5;
  CertManager *this_03;
  
  this_00 = (Security *)getSecurity(this);
  this_01 = (SSL_CTX *)Security::GetContext(this_00);
  cVar1 = SSL_CTX::GetSessionCacheOff(this_01);
  if ((cVar1 == '\0') && (param_1 != (SSL_SESSION *)0x0)) {
    pSVar2 = (SSL_SESSION *)Security::use_resume((Security *)(this + 0x68));
    puVar3 = (uchar *)SSL_SESSION::GetID(param_1);
    this_02 = (Sessions *)GetSessions();
    iVar4 = Sessions::lookup(this_02,puVar3,pSVar2);
    if (iVar4 != 0) {
      Security::set_resuming((Security *)(this + 0x68),true);
      pXVar5 = (X509 *)SSL_SESSION::GetPeerX509(param_1);
      this_03 = (CertManager *)Crypto::use_certManager((Crypto *)this);
      CertManager::setPeerX509(this_03,pXVar5);
    }
  }
  return;
}

```

---

## set_sessionID

```asm
// === 0874f2d0 yaSSL::SSL::set_sessionID  [0x0874f2d0-0x874f34f] ===
 874f2d0:	55                   	push   %ebp
 874f2d1:	89 e5                	mov    %esp,%ebp
 874f2d3:	83 ec 28             	sub    $0x28,%esp
 874f2d6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874f2d9:	e8 1a 3b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f2de:	81 c3 ba d8 c1 00    	add    $0xc1d8ba,%ebx
 874f2e4:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874f2e7:	8b 7d 08             	mov    0x8(%ebp),%edi
 874f2ea:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874f2ed:	8b 75 0c             	mov    0xc(%ebp),%esi
 874f2f0:	83 c7 68             	add    $0x68,%edi
 874f2f3:	89 3c 24             	mov    %edi,(%esp)
 874f2f6:	e8 05 fa ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f2fb:	8b 0e                	mov    (%esi),%ecx
 874f2fd:	8d 50 74             	lea    0x74(%eax),%edx
 874f300:	89 48 74             	mov    %ecx,0x74(%eax)
 874f303:	8b 46 04             	mov    0x4(%esi),%eax
 874f306:	89 42 04             	mov    %eax,0x4(%edx)
 874f309:	8b 46 08             	mov    0x8(%esi),%eax
 874f30c:	89 42 08             	mov    %eax,0x8(%edx)
 874f30f:	8b 46 0c             	mov    0xc(%esi),%eax
 874f312:	89 42 0c             	mov    %eax,0xc(%edx)
 874f315:	8b 46 10             	mov    0x10(%esi),%eax
 874f318:	89 42 10             	mov    %eax,0x10(%edx)
 874f31b:	8b 46 14             	mov    0x14(%esi),%eax
 874f31e:	89 42 14             	mov    %eax,0x14(%edx)
 874f321:	8b 46 18             	mov    0x18(%esi),%eax
 874f324:	89 42 18             	mov    %eax,0x18(%edx)
 874f327:	8b 46 1c             	mov    0x1c(%esi),%eax
 874f32a:	89 42 1c             	mov    %eax,0x1c(%edx)
 874f32d:	89 3c 24             	mov    %edi,(%esp)
 874f330:	e8 cb f9 ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f335:	c6 80 2c 01 00 00 01 	movb   $0x1,0x12c(%eax)
 874f33c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874f33f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874f342:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874f345:	89 ec                	mov    %ebp,%esp
 874f347:	5d                   	pop    %ebp
 874f348:	c3                   	ret
 874f349:	90                   	nop
 874f34a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::set_sessionID @ 0x874f2d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_sessionID(unsigned char const*) */

void __thiscall yaSSL::SSL::set_sessionID(SSL *this,uchar *param_1)

{
  int iVar1;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x1c);
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined1 *)(iVar1 + 300) = 1;
  return;
}

```

---

## storeKeys

```asm
// === 0874f0b0 yaSSL::SSL::storeKeys  [0x0874f0b0-0x874f20f] ===
 874f0b0:	55                   	push   %ebp
 874f0b1:	89 e5                	mov    %esp,%ebp
 874f0b3:	57                   	push   %edi
 874f0b4:	56                   	push   %esi
 874f0b5:	53                   	push   %ebx
 874f0b6:	e8 3d 3d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f0bb:	81 c3 dd da c1 00    	add    $0xc1dadd,%ebx
 874f0c1:	83 ec 2c             	sub    $0x2c,%esp
 874f0c4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874f0c7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874f0ca:	8d 71 68             	lea    0x68(%ecx),%esi
 874f0cd:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 874f0d0:	89 34 24             	mov    %esi,(%esp)
 874f0d3:	e8 78 f9 ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874f0d8:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 874f0dc:	89 34 24             	mov    %esi,(%esp)
 874f0df:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874f0e2:	e8 19 fc ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f0e7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874f0ea:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874f0ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 874f0f2:	05 94 00 00 00       	add    $0x94,%eax
 874f0f7:	89 04 24             	mov    %eax,(%esp)
 874f0fa:	e8 a1 e7 92 ff       	call   807d8a0 <memcpy@plt>
 874f0ff:	89 34 24             	mov    %esi,(%esp)
 874f102:	e8 f9 fb ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f107:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874f10a:	8d 14 17             	lea    (%edi,%edx,1),%edx
 874f10d:	89 54 24 04          	mov    %edx,0x4(%esp)
 874f111:	05 a8 00 00 00       	add    $0xa8,%eax
 874f116:	89 04 24             	mov    %eax,(%esp)
 874f119:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 874f11c:	89 44 24 08          	mov    %eax,0x8(%esp)
 874f120:	e8 7b e7 92 ff       	call   807d8a0 <memcpy@plt>
 874f125:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874f128:	89 34 24             	mov    %esi,(%esp)
 874f12b:	01 d2                	add    %edx,%edx
 874f12d:	89 55 e0             	mov    %edx,-0x20(%ebp)
 874f130:	e8 1b f9 ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874f135:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 874f139:	89 34 24             	mov    %esi,(%esp)
 874f13c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874f13f:	e8 bc fb ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f144:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874f147:	89 54 24 08          	mov    %edx,0x8(%esp)
 874f14b:	05 bc 00 00 00       	add    $0xbc,%eax
 874f150:	89 04 24             	mov    %eax,(%esp)
 874f153:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874f156:	8d 04 07             	lea    (%edi,%eax,1),%eax
 874f159:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f15d:	e8 3e e7 92 ff       	call   807d8a0 <memcpy@plt>
 874f162:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874f165:	03 45 e4             	add    -0x1c(%ebp),%eax
 874f168:	89 34 24             	mov    %esi,(%esp)
 874f16b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874f16e:	e8 8d fb ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f173:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874f176:	89 54 24 08          	mov    %edx,0x8(%esp)
 874f17a:	05 dc 00 00 00       	add    $0xdc,%eax
 874f17f:	89 04 24             	mov    %eax,(%esp)
 874f182:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874f185:	8d 04 07             	lea    (%edi,%eax,1),%eax
 874f188:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f18c:	e8 0f e7 92 ff       	call   807d8a0 <memcpy@plt>
 874f191:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874f194:	03 45 e4             	add    -0x1c(%ebp),%eax
 874f197:	89 34 24             	mov    %esi,(%esp)
 874f19a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874f19d:	e8 ae f8 ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874f1a2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 874f1a6:	89 34 24             	mov    %esi,(%esp)
 874f1a9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874f1ac:	e8 4f fb ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f1b1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874f1b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 874f1b8:	05 fc 00 00 00       	add    $0xfc,%eax
 874f1bd:	89 04 24             	mov    %eax,(%esp)
 874f1c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874f1c3:	8d 04 07             	lea    (%edi,%eax,1),%eax
 874f1c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f1ca:	e8 d1 e6 92 ff       	call   807d8a0 <memcpy@plt>
 874f1cf:	89 34 24             	mov    %esi,(%esp)
 874f1d2:	e8 29 fb ff ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874f1d7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 874f1da:	03 55 e4             	add    -0x1c(%ebp),%edx
 874f1dd:	01 d7                	add    %edx,%edi
 874f1df:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874f1e2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874f1e6:	05 0c 01 00 00       	add    $0x10c,%eax
 874f1eb:	89 04 24             	mov    %eax,(%esp)
 874f1ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 874f1f2:	e8 a9 e6 92 ff       	call   807d8a0 <memcpy@plt>
 874f1f7:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 874f1fa:	89 0c 24             	mov    %ecx,(%esp)
 874f1fd:	e8 7e fb ff ff       	call   874ed80 <_ZN5yaSSL3SSL7setKeysEv>
 874f202:	83 c4 2c             	add    $0x2c,%esp
 874f205:	5b                   	pop    %ebx
 874f206:	5e                   	pop    %esi
 874f207:	5f                   	pop    %edi
 874f208:	5d                   	pop    %ebp
 874f209:	c3                   	ret
 874f20a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL::storeKeys @ 0x874f0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::storeKeys(unsigned char const*) */

void __thiscall yaSSL::SSL::storeKeys(SSL *this,uchar *param_1)

{
  Security *this_00;
  int iVar1;
  uint uVar2;
  uint __n;
  int iVar3;
  
  this_00 = (Security *)(this + 0x68);
  iVar1 = Security::get_parms(this_00);
  uVar2 = (uint)*(byte *)(iVar1 + 0x14);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0x94),param_1,uVar2);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xa8),param_1 + uVar2,uVar2);
  iVar1 = Security::get_parms(this_00);
  __n = (uint)*(byte *)(iVar1 + 0xc);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xbc),param_1 + uVar2 * 2,__n);
  iVar3 = uVar2 * 2 + __n;
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xdc),param_1 + iVar3,__n);
  iVar3 = iVar3 + __n;
  iVar1 = Security::get_parms(this_00);
  uVar2 = (uint)*(byte *)(iVar1 + 0xd);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xfc),param_1 + iVar3,uVar2);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0x10c),param_1 + iVar3 + uVar2,uVar2);
  setKeys(this);
  return;
}

```

---

## useBuffers

```asm
// === 0874e020 yaSSL::SSL::useBuffers  [0x0874e020-0x874e02f] ===
 874e020:	55                   	push   %ebp
 874e021:	89 e5                	mov    %esp,%ebp
 874e023:	8b 45 08             	mov    0x8(%ebp),%eax
 874e026:	5d                   	pop    %ebp
 874e027:	05 c0 09 00 00       	add    $0x9c0,%eax
 874e02c:	c3                   	ret
 874e02d:	90                   	nop
 874e02e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::useBuffers @ 0x874e020

/* yaSSL::SSL::useBuffers() */

SSL * __thiscall yaSSL::SSL::useBuffers(SSL *this)

{
  return this + 0x9c0;
}

```

---

## useCrypto

```asm
// === 0874e2b0 yaSSL::SSL::useCrypto  [0x0874e2b0-0x874e2bf] ===
 874e2b0:	55                   	push   %ebp
 874e2b1:	89 e5                	mov    %esp,%ebp
 874e2b3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e2b6:	5d                   	pop    %ebp
 874e2b7:	c3                   	ret
 874e2b8:	90                   	nop
 874e2b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::useCrypto @ 0x874e2b0

/* yaSSL::SSL::useCrypto() */

SSL * __thiscall yaSSL::SSL::useCrypto(SSL *this)

{
  return this;
}

```

---

## useHashes

```asm
// === 0874e2e0 yaSSL::SSL::useHashes  [0x0874e2e0-0x874e2ef] ===
 874e2e0:	55                   	push   %ebp
 874e2e1:	89 e5                	mov    %esp,%ebp
 874e2e3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e2e6:	5d                   	pop    %ebp
 874e2e7:	05 58 09 00 00       	add    $0x958,%eax
 874e2ec:	c3                   	ret
 874e2ed:	90                   	nop
 874e2ee:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::useHashes @ 0x874e2e0

/* yaSSL::SSL::useHashes() */

SSL * __thiscall yaSSL::SSL::useHashes(SSL *this)

{
  return this + 0x958;
}

```

---

## useLog

```asm
// === 0874e300 yaSSL::SSL::useLog  [0x0874e300-0x874e30f] ===
 874e300:	55                   	push   %ebp
 874e301:	89 e5                	mov    %esp,%ebp
 874e303:	8b 45 08             	mov    0x8(%ebp),%eax
 874e306:	5d                   	pop    %ebp
 874e307:	05 dc 09 00 00       	add    $0x9dc,%eax
 874e30c:	c3                   	ret
 874e30d:	90                   	nop
 874e30e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::useLog @ 0x874e300

/* yaSSL::SSL::useLog() */

SSL * __thiscall yaSSL::SSL::useLog(SSL *this)

{
  return this + 0x9dc;
}

```

---

## useSecurity

```asm
// === 0874e2c0 yaSSL::SSL::useSecurity  [0x0874e2c0-0x874e2cf] ===
 874e2c0:	55                   	push   %ebp
 874e2c1:	89 e5                	mov    %esp,%ebp
 874e2c3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e2c6:	5d                   	pop    %ebp
 874e2c7:	83 c0 68             	add    $0x68,%eax
 874e2ca:	c3                   	ret
 874e2cb:	90                   	nop
 874e2cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::useSecurity @ 0x874e2c0

/* yaSSL::SSL::useSecurity() */

SSL * __thiscall yaSSL::SSL::useSecurity(SSL *this)

{
  return this + 0x68;
}

```

---

## useSocket

```asm
// === 0874e2f0 yaSSL::SSL::useSocket  [0x0874e2f0-0x874e2ff] ===
 874e2f0:	55                   	push   %ebp
 874e2f1:	89 e5                	mov    %esp,%ebp
 874e2f3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e2f6:	5d                   	pop    %ebp
 874e2f7:	05 b8 09 00 00       	add    $0x9b8,%eax
 874e2fc:	c3                   	ret
 874e2fd:	90                   	nop
 874e2fe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::useSocket @ 0x874e2f0

/* yaSSL::SSL::useSocket() */

SSL * __thiscall yaSSL::SSL::useSocket(SSL *this)

{
  return this + 0x9b8;
}

```

---

## useStates

```asm
// === 0874e2d0 yaSSL::SSL::useStates  [0x0874e2d0-0x874e2df] ===
 874e2d0:	55                   	push   %ebp
 874e2d1:	89 e5                	mov    %esp,%ebp
 874e2d3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e2d6:	5d                   	pop    %ebp
 874e2d7:	05 ec 08 00 00       	add    $0x8ec,%eax
 874e2dc:	c3                   	ret
 874e2dd:	90                   	nop
 874e2de:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::useStates @ 0x874e2d0

/* yaSSL::SSL::useStates() */

SSL * __thiscall yaSSL::SSL::useStates(SSL *this)

{
  return this + 0x8ec;
}

```

---

## verfiyHandShakeComplete

```asm
// === 0874e0e0 yaSSL::SSL::verfiyHandShakeComplete  [0x0874e0e0-0x874e13f] ===
 874e0e0:	55                   	push   %ebp
 874e0e1:	89 e5                	mov    %esp,%ebp
 874e0e3:	83 ec 18             	sub    $0x18,%esp
 874e0e6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874e0e9:	e8 0a 4d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e0ee:	81 c3 aa ea c1 00    	add    $0xc1eaaa,%ebx
 874e0f4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874e0f7:	8b 75 08             	mov    0x8(%ebp),%esi
 874e0fa:	89 34 24             	mov    %esi,(%esp)
 874e0fd:	e8 ae ff ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874e102:	85 c0                	test   %eax,%eax
 874e104:	74 0a                	je     874e110 <_ZN5yaSSL3SSL23verfiyHandShakeCompleteEv+0x30>
 874e106:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874e109:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874e10c:	89 ec                	mov    %ebp,%esp
 874e10e:	5d                   	pop    %ebp
 874e10f:	c3                   	ret
 874e110:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874e116:	89 04 24             	mov    %eax,(%esp)
 874e119:	e8 72 fd ff ff       	call   874de90 <_ZNK5yaSSL6States12getHandShakeEv>
 874e11e:	83 38 03             	cmpl   $0x3,(%eax)
 874e121:	74 e3                	je     874e106 <_ZN5yaSSL3SSL23verfiyHandShakeCompleteEv+0x26>
 874e123:	89 34 24             	mov    %esi,(%esp)
 874e126:	e8 05 ff ff ff       	call   874e030 <_ZN5yaSSL3SSL11order_errorEv>
 874e12b:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874e12e:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874e131:	89 ec                	mov    %ebp,%esp
 874e133:	5d                   	pop    %ebp
 874e134:	c3                   	ret
 874e135:	90                   	nop
 874e136:	8d 76 00             	lea    0x0(%esi),%esi
 874e139:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::verfiyHandShakeComplete @ 0x874e0e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verfiyHandShakeComplete() */

void __thiscall yaSSL::SSL::verfiyHandShakeComplete(SSL *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    piVar2 = (int *)States::getHandShake((States *)(this + 0x8ec));
    if (*piVar2 != 3) {
      order_error(this);
      return;
    }
  }
  return;
}

```

---

## verifyClientState

```asm
// === 0874eb40 yaSSL::SSL::verifyClientState  [0x0874eb40-0x874ec4f] ===
 874eb40:	55                   	push   %ebp
 874eb41:	89 e5                	mov    %esp,%ebp
 874eb43:	83 ec 28             	sub    $0x28,%esp
 874eb46:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874eb49:	e8 aa 42 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874eb4e:	81 c3 4a e0 c1 00    	add    $0xc1e04a,%ebx
 874eb54:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874eb57:	8b 75 08             	mov    0x8(%ebp),%esi
 874eb5a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874eb5d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874eb60:	89 34 24             	mov    %esi,(%esp)
 874eb63:	e8 48 f5 ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874eb68:	85 c0                	test   %eax,%eax
 874eb6a:	75 0d                	jne    874eb79 <.L299+0x8>
 874eb6c:	83 ff 14             	cmp    $0x14,%edi
 874eb6f:	76 17                	jbe    874eb88 <.L299+0x17>

0874eb71 <.L299>:
 874eb71:	89 34 24             	mov    %esi,(%esp)
 874eb74:	e8 b7 f4 ff ff       	call   874e030 <_ZN5yaSSL3SSL11order_errorEv>
 874eb79:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874eb7c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874eb7f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874eb82:	89 ec                	mov    %ebp,%esp
 874eb84:	5d                   	pop    %ebp
 874eb85:	c3                   	ret
 874eb86:	66 90                	xchg   %ax,%ax
 874eb88:	8b 84 bb bc 83 99 ff 	mov    -0x667c44(%ebx,%edi,4),%eax
 874eb8f:	01 d8                	add    %ebx,%eax
 874eb91:	ff e0                	jmp    *%eax
 874eb93:	90                   	nop
 874eb94:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

0874eb98 <.L304>:
 874eb98:	8d be ec 08 00 00    	lea    0x8ec(%esi),%edi
 874eb9e:	89 3c 24             	mov    %edi,(%esp)
 874eba1:	e8 fa f2 ff ff       	call   874dea0 <_ZNK5yaSSL6States9getClientEv>
 874eba6:	83 38 02             	cmpl   $0x2,(%eax)
 874eba9:	74 ce                	je     874eb79 <.L299+0x8>
 874ebab:	89 3c 24             	mov    %edi,(%esp)
 874ebae:	e8 ed f2 ff ff       	call   874dea0 <_ZNK5yaSSL6States9getClientEv>
 874ebb3:	83 38 03             	cmpl   $0x3,(%eax)
 874ebb6:	75 b9                	jne    874eb71 <.L299>
 874ebb8:	eb bf                	jmp    874eb79 <.L299+0x8>
 874ebba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

0874ebc0 <.L305>:
 874ebc0:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874ebc6:	89 04 24             	mov    %eax,(%esp)
 874ebc9:	e8 d2 f2 ff ff       	call   874dea0 <_ZNK5yaSSL6States9getClientEv>
 874ebce:	83 38 04             	cmpl   $0x4,(%eax)
 874ebd1:	75 9e                	jne    874eb71 <.L299>
 874ebd3:	8d 46 68             	lea    0x68(%esi),%eax
 874ebd6:	89 04 24             	mov    %eax,(%esp)
 874ebd9:	e8 72 fe ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874ebde:	80 78 28 00          	cmpb   $0x0,0x28(%eax)
 874ebe2:	74 95                	je     874eb79 <.L299+0x8>
 874ebe4:	eb 8b                	jmp    874eb71 <.L299>
 874ebe6:	66 90                	xchg   %ax,%ax

0874ebe8 <.L302>:
 874ebe8:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874ebee:	89 04 24             	mov    %eax,(%esp)
 874ebf1:	e8 aa f2 ff ff       	call   874dea0 <_ZNK5yaSSL6States9getClientEv>
 874ebf6:	83 38 02             	cmpl   $0x2,(%eax)
 874ebf9:	0f 85 72 ff ff ff    	jne    874eb71 <.L299>
 874ebff:	e9 75 ff ff ff       	jmp    874eb79 <.L299+0x8>
 874ec04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

0874ec08 <.L301>:
 874ec08:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874ec0e:	89 04 24             	mov    %eax,(%esp)
 874ec11:	e8 8a f2 ff ff       	call   874dea0 <_ZNK5yaSSL6States9getClientEv>
 874ec16:	83 38 01             	cmpl   $0x1,(%eax)
 874ec19:	0f 85 52 ff ff ff    	jne    874eb71 <.L299>
 874ec1f:	e9 55 ff ff ff       	jmp    874eb79 <.L299+0x8>
 874ec24:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

0874ec28 <.L300>:
 874ec28:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874ec2e:	89 04 24             	mov    %eax,(%esp)
 874ec31:	e8 6a f2 ff ff       	call   874dea0 <_ZNK5yaSSL6States9getClientEv>
 874ec36:	8b 38                	mov    (%eax),%edi
 874ec38:	85 ff                	test   %edi,%edi
 874ec3a:	0f 84 39 ff ff ff    	je     874eb79 <.L299+0x8>
 874ec40:	e9 2c ff ff ff       	jmp    874eb71 <.L299>
 874ec45:	90                   	nop
 874ec46:	8d 76 00             	lea    0x0(%esi),%esi
 874ec49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::verifyClientState @ 0x874eb40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyClientState(yaSSL::HandShakeType) */

void __thiscall yaSSL::SSL::verifyClientState(SSL *this,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    switch(param_2) {
    case 2:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 0) {
        return;
      }
      break;
    case 0xb:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 1) {
        return;
      }
      break;
    case 0xc:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 2) {
        return;
      }
      break;
    case 0xd:
    case 0xe:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 2) {
        return;
      }
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 3) {
        return;
      }
      break;
    case 0x14:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if ((*piVar2 == 4) &&
         (iVar1 = Security::get_parms((Security *)(this + 0x68)), *(char *)(iVar1 + 0x28) == '\0'))
      {
        return;
      }
    }
    order_error(this);
  }
  return;
}

```

---

## verifyServerState

```asm
// === 0874ea60 yaSSL::SSL::verifyServerState  [0x0874ea60-0x874eb3f] ===
 874ea60:	55                   	push   %ebp
 874ea61:	89 e5                	mov    %esp,%ebp
 874ea63:	83 ec 28             	sub    $0x28,%esp
 874ea66:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874ea69:	e8 8a 43 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ea6e:	81 c3 2a e1 c1 00    	add    $0xc1e12a,%ebx
 874ea74:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874ea77:	8b 75 08             	mov    0x8(%ebp),%esi
 874ea7a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874ea7d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874ea80:	89 34 24             	mov    %esi,(%esp)
 874ea83:	e8 28 f6 ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874ea88:	85 c0                	test   %eax,%eax
 874ea8a:	75 0d                	jne    874ea99 <.L286+0x8>
 874ea8c:	83 ff 14             	cmp    $0x14,%edi
 874ea8f:	76 17                	jbe    874eaa8 <.L286+0x17>

0874ea91 <.L286>:
 874ea91:	89 34 24             	mov    %esi,(%esp)
 874ea94:	e8 97 f5 ff ff       	call   874e030 <_ZN5yaSSL3SSL11order_errorEv>
 874ea99:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874ea9c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874ea9f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874eaa2:	89 ec                	mov    %ebp,%esp
 874eaa4:	5d                   	pop    %ebp
 874eaa5:	c3                   	ret
 874eaa6:	66 90                	xchg   %ax,%ax
 874eaa8:	8b 84 bb 68 83 99 ff 	mov    -0x667c98(%ebx,%edi,4),%eax
 874eaaf:	01 d8                	add    %ebx,%eax
 874eab1:	ff e0                	jmp    *%eax
 874eab3:	90                   	nop
 874eab4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

0874eab8 <.L290>:
 874eab8:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874eabe:	89 04 24             	mov    %eax,(%esp)
 874eac1:	e8 ea f3 ff ff       	call   874deb0 <_ZNK5yaSSL6States9getServerEv>
 874eac6:	83 38 01             	cmpl   $0x1,(%eax)
 874eac9:	74 ce                	je     874ea99 <.L286+0x8>
 874eacb:	89 34 24             	mov    %esi,(%esp)
 874eace:	e8 5d f5 ff ff       	call   874e030 <_ZN5yaSSL3SSL11order_errorEv>
 874ead3:	eb c4                	jmp    874ea99 <.L286+0x8>
 874ead5:	8d 76 00             	lea    0x0(%esi),%esi

0874ead8 <.L289>:
 874ead8:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874eade:	89 04 24             	mov    %eax,(%esp)
 874eae1:	e8 ca f3 ff ff       	call   874deb0 <_ZNK5yaSSL6States9getServerEv>
 874eae6:	83 38 02             	cmpl   $0x2,(%eax)
 874eae9:	75 a6                	jne    874ea91 <.L286>
 874eaeb:	eb ac                	jmp    874ea99 <.L286+0x8>
 874eaed:	8d 76 00             	lea    0x0(%esi),%esi

0874eaf0 <.L291>:
 874eaf0:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874eaf6:	89 04 24             	mov    %eax,(%esp)
 874eaf9:	e8 b2 f3 ff ff       	call   874deb0 <_ZNK5yaSSL6States9getServerEv>
 874eafe:	83 38 02             	cmpl   $0x2,(%eax)
 874eb01:	75 8e                	jne    874ea91 <.L286>
 874eb03:	8d 46 68             	lea    0x68(%esi),%eax
 874eb06:	89 04 24             	mov    %eax,(%esp)
 874eb09:	e8 42 ff ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874eb0e:	80 78 28 00          	cmpb   $0x0,0x28(%eax)
 874eb12:	74 85                	je     874ea99 <.L286+0x8>
 874eb14:	e9 78 ff ff ff       	jmp    874ea91 <.L286>
 874eb19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874eb20 <.L287>:
 874eb20:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874eb26:	89 04 24             	mov    %eax,(%esp)
 874eb29:	e8 82 f3 ff ff       	call   874deb0 <_ZNK5yaSSL6States9getServerEv>
 874eb2e:	8b 08                	mov    (%eax),%ecx
 874eb30:	85 c9                	test   %ecx,%ecx
 874eb32:	0f 84 61 ff ff ff    	je     874ea99 <.L286+0x8>
 874eb38:	e9 54 ff ff ff       	jmp    874ea91 <.L286>
 874eb3d:	90                   	nop
 874eb3e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL::verifyServerState @ 0x874ea60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyServerState(yaSSL::HandShakeType) */

void __thiscall yaSSL::SSL::verifyServerState(SSL *this,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    switch(param_2) {
    case 1:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if (*piVar2 == 0) {
        return;
      }
      break;
    case 0xb:
    case 0x10:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if (*piVar2 == 1) {
        return;
      }
      order_error(this);
      return;
    case 0xf:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if (*piVar2 == 2) {
        return;
      }
      break;
    case 0x14:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if ((*piVar2 == 2) &&
         (iVar1 = Security::get_parms((Security *)(this + 0x68)), *(char *)(iVar1 + 0x28) == '\0'))
      {
        return;
      }
    }
    order_error(this);
  }
  return;
}

```

---

## verifyState

```asm
// === 0874e140 yaSSL::SSL::verifyState  [0x0874e140-0x874e19f] ===
 874e140:	55                   	push   %ebp
 874e141:	89 e5                	mov    %esp,%ebp
 874e143:	83 ec 18             	sub    $0x18,%esp
 874e146:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874e149:	e8 aa 4c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e14e:	81 c3 4a ea c1 00    	add    $0xc1ea4a,%ebx
 874e154:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874e157:	8b 75 08             	mov    0x8(%ebp),%esi
 874e15a:	89 34 24             	mov    %esi,(%esp)
 874e15d:	e8 4e ff ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874e162:	85 c0                	test   %eax,%eax
 874e164:	74 0a                	je     874e170 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE+0x30>
 874e166:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874e169:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874e16c:	89 ec                	mov    %ebp,%esp
 874e16e:	5d                   	pop    %ebp
 874e16f:	c3                   	ret
 874e170:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874e176:	89 04 24             	mov    %eax,(%esp)
 874e179:	e8 32 fd ff ff       	call   874deb0 <_ZNK5yaSSL6States9getServerEv>
 874e17e:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e181:	39 10                	cmp    %edx,(%eax)
 874e183:	74 e1                	je     874e166 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE+0x26>
 874e185:	89 34 24             	mov    %esi,(%esp)
 874e188:	e8 a3 fe ff ff       	call   874e030 <_ZN5yaSSL3SSL11order_errorEv>
 874e18d:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874e190:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874e193:	89 ec                	mov    %ebp,%esp
 874e195:	5d                   	pop    %ebp
 874e196:	c3                   	ret
 874e197:	90                   	nop
 874e198:	90                   	nop
 874e199:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::verifyState @ 0x874e140

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyState(yaSSL::ServerState) */

void __thiscall yaSSL::SSL::verifyState(SSL *this,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
    if (*piVar2 != param_2) {
      order_error(this);
      return;
    }
  }
  return;
}

```

---

## verifyState_0874e1a0

```asm
// === 0874e1a0 yaSSL::SSL::verifyState  [0x0874e1a0-0x874e1ff] ===
 874e1a0:	55                   	push   %ebp
 874e1a1:	89 e5                	mov    %esp,%ebp
 874e1a3:	83 ec 18             	sub    $0x18,%esp
 874e1a6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874e1a9:	e8 4a 4c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e1ae:	81 c3 ea e9 c1 00    	add    $0xc1e9ea,%ebx
 874e1b4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874e1b7:	8b 75 08             	mov    0x8(%ebp),%esi
 874e1ba:	89 34 24             	mov    %esi,(%esp)
 874e1bd:	e8 ee fe ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874e1c2:	85 c0                	test   %eax,%eax
 874e1c4:	74 0a                	je     874e1d0 <_ZN5yaSSL3SSL11verifyStateENS_11ClientStateE+0x30>
 874e1c6:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874e1c9:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874e1cc:	89 ec                	mov    %ebp,%esp
 874e1ce:	5d                   	pop    %ebp
 874e1cf:	c3                   	ret
 874e1d0:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874e1d6:	89 04 24             	mov    %eax,(%esp)
 874e1d9:	e8 c2 fc ff ff       	call   874dea0 <_ZNK5yaSSL6States9getClientEv>
 874e1de:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e1e1:	39 10                	cmp    %edx,(%eax)
 874e1e3:	74 e1                	je     874e1c6 <_ZN5yaSSL3SSL11verifyStateENS_11ClientStateE+0x26>
 874e1e5:	89 34 24             	mov    %esi,(%esp)
 874e1e8:	e8 43 fe ff ff       	call   874e030 <_ZN5yaSSL3SSL11order_errorEv>
 874e1ed:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874e1f0:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874e1f3:	89 ec                	mov    %ebp,%esp
 874e1f5:	5d                   	pop    %ebp
 874e1f6:	c3                   	ret
 874e1f7:	90                   	nop
 874e1f8:	90                   	nop
 874e1f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::verifyState @ 0x874e1a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyState(yaSSL::ClientState) */

void __thiscall yaSSL::SSL::verifyState(SSL *this,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
    if (*piVar2 != param_2) {
      order_error(this);
      return;
    }
  }
  return;
}

```

---

## verifyState_0874e200

```asm
// === 0874e200 yaSSL::SSL::verifyState  [0x0874e200-0x874e29f] ===
 874e200:	55                   	push   %ebp
 874e201:	89 e5                	mov    %esp,%ebp
 874e203:	83 ec 38             	sub    $0x38,%esp
 874e206:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874e209:	e8 ea 4b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e20e:	81 c3 8a e9 c1 00    	add    $0xc1e98a,%ebx
 874e214:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874e217:	8b 75 08             	mov    0x8(%ebp),%esi
 874e21a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874e21d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874e220:	89 34 24             	mov    %esi,(%esp)
 874e223:	e8 88 fe ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874e228:	85 c0                	test   %eax,%eax
 874e22a:	75 1c                	jne    874e248 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x48>
 874e22c:	80 7f 04 03          	cmpb   $0x3,0x4(%edi)
 874e230:	75 06                	jne    874e238 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x38>
 874e232:	80 7f 05 02          	cmpb   $0x2,0x5(%edi)
 874e236:	76 20                	jbe    874e258 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x58>
 874e238:	c7 44 24 04 75 00 00 	movl   $0x75,0x4(%esp)
 874e23f:	00 
 874e240:	89 34 24             	mov    %esi,(%esp)
 874e243:	e8 88 fd ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874e248:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874e24b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874e24e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874e251:	89 ec                	mov    %ebp,%esp
 874e253:	5d                   	pop    %ebp
 874e254:	c3                   	ret
 874e255:	8d 76 00             	lea    0x0(%esi),%esi
 874e258:	8d 96 ec 08 00 00    	lea    0x8ec(%esi),%edx
 874e25e:	89 14 24             	mov    %edx,(%esp)
 874e261:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 874e264:	e8 17 fc ff ff       	call   874de80 <_ZNK5yaSSL6States9getRecordEv>
 874e269:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874e26c:	8b 00                	mov    (%eax),%eax
 874e26e:	85 c0                	test   %eax,%eax
 874e270:	75 16                	jne    874e288 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x88>
 874e272:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 874e279:	00 
 874e27a:	89 34 24             	mov    %esi,(%esp)
 874e27d:	e8 4e fd ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874e282:	eb c4                	jmp    874e248 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x48>
 874e284:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874e288:	83 3f 17             	cmpl   $0x17,(%edi)
 874e28b:	75 bb                	jne    874e248 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x48>
 874e28d:	89 14 24             	mov    %edx,(%esp)
 874e290:	e8 fb fb ff ff       	call   874de90 <_ZNK5yaSSL6States12getHandShakeEv>
 874e295:	83 38 03             	cmpl   $0x3,(%eax)
 874e298:	75 d8                	jne    874e272 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x72>
 874e29a:	eb ac                	jmp    874e248 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE+0x48>
 874e29c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL::verifyState @ 0x874e200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyState(yaSSL::RecordLayerHeader const&) */

void __thiscall yaSSL::SSL::verifyState(SSL *this,RecordLayerHeader *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    if ((param_1[4] == (RecordLayerHeader)0x3) && ((byte)param_1[5] < 3)) {
      piVar2 = (int *)States::getRecord((States *)(this + 0x8ec));
      if ((*piVar2 == 0) ||
         ((*(int *)param_1 == 0x17 &&
          (piVar2 = (int *)States::getHandShake((States *)(this + 0x8ec)), *piVar2 != 3)))) {
        SetError(this,0x6a);
      }
    }
    else {
      SetError(this,0x75);
    }
  }
  return;
}

```

---

## verifyState_0874f8d0

```asm
// === 0874f8d0 yaSSL::SSL::verifyState  [0x0874f8d0-0x874f99f] ===
 874f8d0:	55                   	push   %ebp
 874f8d1:	89 e5                	mov    %esp,%ebp
 874f8d3:	83 ec 28             	sub    $0x28,%esp
 874f8d6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874f8d9:	e8 1a 35 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f8de:	81 c3 ba d2 c1 00    	add    $0xc1d2ba,%ebx
 874f8e4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874f8e7:	8b 75 08             	mov    0x8(%ebp),%esi
 874f8ea:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874f8ed:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874f8f0:	89 34 24             	mov    %esi,(%esp)
 874f8f3:	e8 b8 e7 ff ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874f8f8:	85 c0                	test   %eax,%eax
 874f8fa:	74 14                	je     874f910 <_ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE+0x40>
 874f8fc:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874f8ff:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874f902:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874f905:	89 ec                	mov    %ebp,%esp
 874f907:	5d                   	pop    %ebp
 874f908:	c3                   	ret
 874f909:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874f910:	8d 86 ec 08 00 00    	lea    0x8ec(%esi),%eax
 874f916:	89 04 24             	mov    %eax,(%esp)
 874f919:	e8 72 e5 ff ff       	call   874de90 <_ZNK5yaSSL6States12getHandShakeEv>
 874f91e:	8b 08                	mov    (%eax),%ecx
 874f920:	85 c9                	test   %ecx,%ecx
 874f922:	74 34                	je     874f958 <_ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE+0x88>
 874f924:	8d 46 68             	lea    0x68(%esi),%eax
 874f927:	89 04 24             	mov    %eax,(%esp)
 874f92a:	e8 21 f1 ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874f92f:	83 38 01             	cmpl   $0x1,(%eax)
 874f932:	74 44                	je     874f978 <_ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE+0xa8>
 874f934:	89 3c 24             	mov    %edi,(%esp)
 874f937:	e8 44 71 ff ff       	call   8746a80 <_ZNK5yaSSL15HandShakeHeader17get_handshakeTypeEv>
 874f93c:	89 34 24             	mov    %esi,(%esp)
 874f93f:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f943:	e8 18 f1 ff ff       	call   874ea60 <_ZN5yaSSL3SSL17verifyServerStateENS_13HandShakeTypeE>
 874f948:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874f94b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874f94e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874f951:	89 ec                	mov    %ebp,%esp
 874f953:	5d                   	pop    %ebp
 874f954:	c3                   	ret
 874f955:	8d 76 00             	lea    0x0(%esi),%esi
 874f958:	89 34 24             	mov    %esi,(%esp)
 874f95b:	c7 44 24 04 6b 00 00 	movl   $0x6b,0x4(%esp)
 874f962:	00 
 874f963:	e8 68 e6 ff ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874f968:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874f96b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874f96e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874f971:	89 ec                	mov    %ebp,%esp
 874f973:	5d                   	pop    %ebp
 874f974:	c3                   	ret
 874f975:	8d 76 00             	lea    0x0(%esi),%esi
 874f978:	89 3c 24             	mov    %edi,(%esp)
 874f97b:	e8 00 71 ff ff       	call   8746a80 <_ZNK5yaSSL15HandShakeHeader17get_handshakeTypeEv>
 874f980:	89 34 24             	mov    %esi,(%esp)
 874f983:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f987:	e8 b4 f1 ff ff       	call   874eb40 <_ZN5yaSSL3SSL17verifyClientStateENS_13HandShakeTypeE>
 874f98c:	e9 6b ff ff ff       	jmp    874f8fc <_ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE+0x2c>
 874f991:	90                   	nop
 874f992:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874f999:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL::verifyState @ 0x874f8d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyState(yaSSL::HandShakeHeader const&) */

void __thiscall yaSSL::SSL::verifyState(SSL *this,HandShakeHeader *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    piVar2 = (int *)States::getHandShake((States *)(this + 0x8ec));
    if (*piVar2 == 0) {
      SetError(this,0x6b);
      return;
    }
    piVar2 = (int *)Security::get_parms((Security *)(this + 0x68));
    if (*piVar2 != 1) {
      uVar3 = HandShakeHeader::get_handshakeType(param_1);
      verifyServerState(this,uVar3);
      return;
    }
    uVar3 = HandShakeHeader::get_handshakeType(param_1);
    verifyClientState(this,uVar3);
  }
  return;
}

```


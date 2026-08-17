# yaSSL__HandShakeHeader

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Process

```asm
// === 0874beb0 yaSSL::HandShakeHeader::Process  [0x0874beb0-0x874c01f] ===
 874beb0:	55                   	push   %ebp
 874beb1:	89 e5                	mov    %esp,%ebp
 874beb3:	57                   	push   %edi
 874beb4:	56                   	push   %esi
 874beb5:	53                   	push   %ebx
 874beb6:	e8 3d 6f fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874bebb:	81 c3 dd 0c c2 00    	add    $0xc20cdd,%ebx
 874bec1:	83 ec 2c             	sub    $0x2c,%esp
 874bec4:	8b 75 10             	mov    0x10(%ebp),%esi
 874bec7:	8b 7d 08             	mov    0x8(%ebp),%edi
 874beca:	89 34 24             	mov    %esi,(%esp)
 874becd:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874bed1:	e8 fa 39 00 00       	call   874f8d0 <_ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE>
 874bed6:	89 34 24             	mov    %esi,(%esp)
 874bed9:	e8 d2 21 00 00       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874bede:	85 c0                	test   %eax,%eax
 874bee0:	74 0e                	je     874bef0 <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0x40>
 874bee2:	83 c4 2c             	add    $0x2c,%esp
 874bee5:	5b                   	pop    %ebx
 874bee6:	5e                   	pop    %esi
 874bee7:	5f                   	pop    %edi
 874bee8:	5d                   	pop    %ebp
 874bee9:	c3                   	ret
 874beea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874bef0:	89 34 24             	mov    %esi,(%esp)
 874bef3:	e8 88 52 00 00       	call   8751180 <_ZNK5yaSSL3SSL10getFactoryEv>
 874bef8:	89 04 24             	mov    %eax,(%esp)
 874befb:	e8 90 20 00 00       	call   874df90 <_ZNK5yaSSL10sslFactory12getHandShakeEv>
 874bf00:	8b 4f 04             	mov    0x4(%edi),%ecx
 874bf03:	8b 10                	mov    (%eax),%edx
 874bf05:	8b 40 04             	mov    0x4(%eax),%eax
 874bf08:	39 c2                	cmp    %eax,%edx
 874bf0a:	75 17                	jne    874bf23 <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0x73>
 874bf0c:	e9 e7 00 00 00       	jmp    874bff8 <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0x148>
 874bf11:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874bf18:	83 c2 08             	add    $0x8,%edx
 874bf1b:	39 d0                	cmp    %edx,%eax
 874bf1d:	0f 84 d5 00 00 00    	je     874bff8 <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0x148>
 874bf23:	3b 0a                	cmp    (%edx),%ecx
 874bf25:	75 f1                	jne    874bf18 <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0x68>
 874bf27:	ff 52 04             	call   *0x4(%edx)
 874bf2a:	85 c0                	test   %eax,%eax
 874bf2c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874bf2f:	90                   	nop
 874bf30:	0f 84 c2 00 00 00    	je     874bff8 <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0x148>
 874bf36:	83 c7 08             	add    $0x8,%edi
 874bf39:	89 3c 24             	mov    %edi,(%esp)
 874bf3c:	e8 1f 1e 00 00       	call   874dd60 <_ZN5yaSSL7c24to32EPKh>
 874bf41:	89 c7                	mov    %eax,%edi
 874bf43:	8b 45 0c             	mov    0xc(%ebp),%eax
 874bf46:	89 04 24             	mov    %eax,(%esp)
 874bf49:	e8 72 ae 04 00       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 874bf4e:	39 c7                	cmp    %eax,%edi
 874bf50:	76 36                	jbe    874bf88 <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0xd8>
 874bf52:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 874bf59:	00 
 874bf5a:	89 34 24             	mov    %esi,(%esp)
 874bf5d:	e8 6e 20 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874bf62:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874bf65:	8b 02                	mov    (%edx),%eax
 874bf67:	89 14 24             	mov    %edx,(%esp)
 874bf6a:	ff 50 10             	call   *0x10(%eax)
 874bf6d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874bf70:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bf75:	89 14 24             	mov    %edx,(%esp)
 874bf78:	e8 a3 48 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 874bf7d:	83 c4 2c             	add    $0x2c,%esp
 874bf80:	5b                   	pop    %ebx
 874bf81:	5e                   	pop    %esi
 874bf82:	5f                   	pop    %edi
 874bf83:	5d                   	pop    %ebp
 874bf84:	c3                   	ret
 874bf85:	8d 76 00             	lea    0x0(%esi),%esi
 874bf88:	8b 45 0c             	mov    0xc(%ebp),%eax
 874bf8b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874bf8f:	89 34 24             	mov    %esi,(%esp)
 874bf92:	89 44 24 04          	mov    %eax,0x4(%esp)
 874bf96:	e8 75 0e 05 00       	call   879ce10 <_ZN5yaSSL13hashHandShakeERNS_3SSLERKNS_12input_bufferEj>
 874bf9b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874bf9e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874bfa2:	89 14 24             	mov    %edx,(%esp)
 874bfa5:	e8 06 ab ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 874bfaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 874bfad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 874bfb0:	89 14 24             	mov    %edx,(%esp)
 874bfb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 874bfb7:	e8 14 ad ff ff       	call   8746cd0 <_ZN5yaSSLrsERNS_12input_bufferERNS_13HandShakeBaseE>
 874bfbc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874bfbf:	8b 02                	mov    (%edx),%eax
 874bfc1:	8b 55 0c             	mov    0xc(%ebp),%edx
 874bfc4:	89 74 24 08          	mov    %esi,0x8(%esp)
 874bfc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 874bfcc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874bfcf:	89 14 24             	mov    %edx,(%esp)
 874bfd2:	ff 50 0c             	call   *0xc(%eax)
 874bfd5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 874bfd8:	8b 02                	mov    (%edx),%eax
 874bfda:	89 14 24             	mov    %edx,(%esp)
 874bfdd:	ff 50 10             	call   *0x10(%eax)
 874bfe0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 874bfe3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bfe8:	89 04 24             	mov    %eax,(%esp)
 874bfeb:	e8 30 48 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 874bff0:	83 c4 2c             	add    $0x2c,%esp
 874bff3:	5b                   	pop    %ebx
 874bff4:	5e                   	pop    %esi
 874bff5:	5f                   	pop    %edi
 874bff6:	5d                   	pop    %ebp
 874bff7:	c3                   	ret
 874bff8:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 874bfff:	00 
 874c000:	89 34 24             	mov    %esi,(%esp)
 874c003:	e8 c8 1f 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874c008:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 874c00f:	e9 59 ff ff ff       	jmp    874bf6d <_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE+0xbd>
 874c014:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c01a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::HandShakeHeader::Process @ 0x874beb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::HandShakeHeader::Process(HandShakeHeader *this,input_buffer *param_1,SSL *param_2)

{
  int iVar1;
  sslFactory *this_00;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  HandShakeBase *local_20;
  
  SSL::verifyState(param_2,this);
  iVar1 = SSL::GetError(param_2);
  if (iVar1 != 0) {
    return;
  }
  this_00 = (sslFactory *)SSL::getFactory();
  puVar2 = (undefined4 *)sslFactory::getHandShake(this_00);
  piVar5 = (int *)*puVar2;
  do {
    if (piVar5 == (int *)puVar2[1]) {
LAB_0874bff8:
      uVar3 = 0;
      SSL::SetError(param_2,0x67);
      local_20 = (HandShakeBase *)0x0;
LAB_0874bf6d:
      operator_delete(local_20,uVar3 & 0xffffff00);
      return;
    }
    if (*(int *)(this + 4) == *piVar5) {
      local_20 = (HandShakeBase *)(*(code *)piVar5[1])();
      if (local_20 != (HandShakeBase *)0x0) {
        uVar3 = c24to32((uchar *)(this + 8));
        uVar4 = input_buffer::get_remaining(param_1);
        if (uVar3 <= uVar4) {
          hashHandShake(param_2,param_1,uVar3);
          HandShakeBase::set_length(local_20,uVar3);
          yaSSL::operator>>(param_1,local_20);
          (**(code **)(*(int *)local_20 + 0xc))(local_20,param_1,param_2);
          (**(code **)(*(int *)local_20 + 0x10))(local_20);
          operator_delete(local_20,(uint)param_1 & 0xffffff00);
          return;
        }
        uVar3 = 0;
        SSL::SetError(param_2,0x6d);
        (**(code **)(*(int *)local_20 + 0x10))(local_20);
        goto LAB_0874bf6d;
      }
      goto LAB_0874bff8;
    }
    piVar5 = piVar5 + 2;
  } while( true );
}

```

---

## get

```asm
// === 08749130 yaSSL::HandShakeHeader::get  [0x08749130-0x874915f] ===
 8749130:	55                   	push   %ebp
 8749131:	89 e5                	mov    %esp,%ebp
 8749133:	53                   	push   %ebx
 8749134:	83 ec 14             	sub    $0x14,%esp
 8749137:	8b 45 08             	mov    0x8(%ebp),%eax
 874913a:	e8 b9 9c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874913f:	81 c3 59 3a c2 00    	add    $0xc23a59,%ebx
 8749145:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749149:	8b 45 0c             	mov    0xc(%ebp),%eax
 874914c:	89 04 24             	mov    %eax,(%esp)
 874914f:	e8 7c ff ff ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 8749154:	83 c4 14             	add    $0x14,%esp
 8749157:	5b                   	pop    %ebx
 8749158:	5d                   	pop    %ebp
 8749159:	c3                   	ret
 874915a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HandShakeHeader::get @ 0x8749130

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::HandShakeHeader::get(HandShakeHeader *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_handshakeType

```asm
// === 08746a80 yaSSL::HandShakeHeader::get_handshakeType  [0x08746a80-0x8746a8f] ===
 8746a80:	55                   	push   %ebp
 8746a81:	89 e5                	mov    %esp,%ebp
 8746a83:	8b 45 08             	mov    0x8(%ebp),%eax
 8746a86:	5d                   	pop    %ebp
 8746a87:	8b 40 04             	mov    0x4(%eax),%eax
 8746a8a:	c3                   	ret
 8746a8b:	90                   	nop
 8746a8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::HandShakeHeader::get_handshakeType @ 0x8746a80

/* yaSSL::HandShakeHeader::get_handshakeType() const */

undefined4 __thiscall yaSSL::HandShakeHeader::get_handshakeType(HandShakeHeader *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_length

```asm
// === 0874a170 yaSSL::HandShakeHeader::get_length  [0x0874a170-0x874a19f] ===
 874a170:	55                   	push   %ebp
 874a171:	89 e5                	mov    %esp,%ebp
 874a173:	53                   	push   %ebx
 874a174:	e8 7f 8c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874a179:	81 c3 1f 2a c2 00    	add    $0xc22a1f,%ebx
 874a17f:	83 ec 14             	sub    $0x14,%esp
 874a182:	8b 45 08             	mov    0x8(%ebp),%eax
 874a185:	83 c0 08             	add    $0x8,%eax
 874a188:	89 04 24             	mov    %eax,(%esp)
 874a18b:	e8 d0 3b 00 00       	call   874dd60 <_ZN5yaSSL7c24to32EPKh>
 874a190:	83 c4 14             	add    $0x14,%esp
 874a193:	5b                   	pop    %ebx
 874a194:	5d                   	pop    %ebp
 874a195:	c3                   	ret
 874a196:	8d 76 00             	lea    0x0(%esi),%esi
 874a199:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HandShakeHeader::get_length @ 0x874a170

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::get_length() const */

void __thiscall yaSSL::HandShakeHeader::get_length(HandShakeHeader *this)

{
  c24to32((uchar *)(this + 8));
  return;
}

```

---

## get_type

```asm
// === 08746a70 yaSSL::HandShakeHeader::get_type  [0x08746a70-0x8746a7f] ===
 8746a70:	55                   	push   %ebp
 8746a71:	b8 16 00 00 00       	mov    $0x16,%eax
 8746a76:	89 e5                	mov    %esp,%ebp
 8746a78:	5d                   	pop    %ebp
 8746a79:	c3                   	ret
 8746a7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HandShakeHeader::get_type @ 0x8746a70

/* yaSSL::HandShakeHeader::get_type() const */

undefined4 yaSSL::HandShakeHeader::get_type(void)

{
  return 0x16;
}

```

---

## set

```asm
// === 08747fb0 yaSSL::HandShakeHeader::set  [0x08747fb0-0x8747fdf] ===
 8747fb0:	55                   	push   %ebp
 8747fb1:	89 e5                	mov    %esp,%ebp
 8747fb3:	53                   	push   %ebx
 8747fb4:	83 ec 14             	sub    $0x14,%esp
 8747fb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8747fba:	e8 39 ae fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747fbf:	81 c3 d9 4b c2 00    	add    $0xc24bd9,%ebx
 8747fc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8747fc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8747fcc:	89 04 24             	mov    %eax,(%esp)
 8747fcf:	e8 4c ff ff ff       	call   8747f20 <_ZN5yaSSLrsERNS_12input_bufferERNS_15HandShakeHeaderE>
 8747fd4:	83 c4 14             	add    $0x14,%esp
 8747fd7:	5b                   	pop    %ebx
 8747fd8:	5d                   	pop    %ebp
 8747fd9:	c3                   	ret
 8747fda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HandShakeHeader::set @ 0x8747fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::HandShakeHeader::set(HandShakeHeader *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

---

## set_length

```asm
// === 08749950 yaSSL::HandShakeHeader::set_length  [0x08749950-0x874997f] ===
 8749950:	55                   	push   %ebp
 8749951:	89 e5                	mov    %esp,%ebp
 8749953:	53                   	push   %ebx
 8749954:	83 ec 14             	sub    $0x14,%esp
 8749957:	8b 45 08             	mov    0x8(%ebp),%eax
 874995a:	e8 99 94 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874995f:	81 c3 39 32 c2 00    	add    $0xc23239,%ebx
 8749965:	83 c0 08             	add    $0x8,%eax
 8749968:	89 44 24 04          	mov    %eax,0x4(%esp)
 874996c:	8b 45 0c             	mov    0xc(%ebp),%eax
 874996f:	89 04 24             	mov    %eax,(%esp)
 8749972:	e8 99 43 00 00       	call   874dd10 <_ZN5yaSSL7c32to24EjRA3_h>
 8749977:	83 c4 14             	add    $0x14,%esp
 874997a:	5b                   	pop    %ebx
 874997b:	5d                   	pop    %ebp
 874997c:	c3                   	ret
 874997d:	90                   	nop
 874997e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::HandShakeHeader::set_length @ 0x8749950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::set_length(unsigned int) */

void __thiscall yaSSL::HandShakeHeader::set_length(HandShakeHeader *this,uint param_1)

{
  c32to24(param_1,(unsigned_char *)(this + 8));
  return;
}

```

---

## set_type

```asm
// === 08746a90 yaSSL::HandShakeHeader::set_type  [0x08746a90-0x8746a9f] ===
 8746a90:	55                   	push   %ebp
 8746a91:	89 e5                	mov    %esp,%ebp
 8746a93:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746a96:	8b 45 08             	mov    0x8(%ebp),%eax
 8746a99:	89 50 04             	mov    %edx,0x4(%eax)
 8746a9c:	5d                   	pop    %ebp
 8746a9d:	c3                   	ret
 8746a9e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::HandShakeHeader::set_type @ 0x8746a90

/* yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType) */

void __thiscall yaSSL::HandShakeHeader::set_type(HandShakeHeader *this,undefined4 param_2)

{
  *(undefined4 *)(this + 4) = param_2;
  return;
}

```


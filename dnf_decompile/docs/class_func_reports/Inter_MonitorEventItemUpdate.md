# Inter_MonitorEventItemUpdate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cefd2 Inter_MonitorEventItemUpdate::dispatch_sig  [0x084cefd2-0x84cf0c3] ===
 84cefd2:	55                   	push   %ebp
 84cefd3:	89 e5                	mov    %esp,%ebp
 84cefd5:	57                   	push   %edi
 84cefd6:	56                   	push   %esi
 84cefd7:	53                   	push   %ebx
 84cefd8:	83 ec 6c             	sub    $0x6c,%esp
 84cefdb:	8b 45 10             	mov    0x10(%ebp),%eax
 84cefde:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cefe1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cefe4:	8b 40 1a             	mov    0x1a(%eax),%eax
 84cefe7:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84cefea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cefed:	8b 40 16             	mov    0x16(%eax),%eax
 84ceff0:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84ceff3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ceff6:	8b 78 0e             	mov    0xe(%eax),%edi
 84ceff9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ceffc:	8b 70 12             	mov    0x12(%eax),%esi
 84cefff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf002:	8b 40 0a             	mov    0xa(%eax),%eax
 84cf005:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cf00c:	00 
 84cf00d:	89 04 24             	mov    %eax,(%esp)
 84cf010:	e8 36 a0 c3 ff       	call   810904b <_Z14NumberToStringji>
 84cf015:	89 c3                	mov    %eax,%ebx
 84cf017:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84cf01e:	00 
 84cf01f:	c7 44 24 08 ff 2b 00 	movl   $0x2bff,0x8(%esp)
 84cf026:	00 
 84cf027:	c7 44 24 04 40 cf c8 	movl   $0x8c8cf40,0x4(%esp)
 84cf02e:	08 
 84cf02f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cf032:	89 04 24             	mov    %eax,(%esp)
 84cf035:	e8 de 06 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84cf03a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84cf03d:	89 44 24 20          	mov    %eax,0x20(%esp)
 84cf041:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84cf044:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84cf048:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84cf04c:	89 74 24 14          	mov    %esi,0x14(%esp)
 84cf050:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84cf054:	c7 44 24 0c ff 2b 00 	movl   $0x2bff,0xc(%esp)
 84cf05b:	00 
 84cf05c:	c7 44 24 08 40 cf c8 	movl   $0x8c8cf40,0x8(%esp)
 84cf063:	08 
 84cf064:	c7 44 24 04 64 8a c8 	movl   $0x8c88a64,0x4(%esp)
 84cf06b:	08 
 84cf06c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cf06f:	89 04 24             	mov    %eax,(%esp)
 84cf072:	e8 11 07 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84cf077:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf07a:	8b 78 1e             	mov    0x1e(%eax),%edi
 84cf07d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf080:	8b 70 12             	mov    0x12(%eax),%esi
 84cf083:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf086:	8b 58 1a             	mov    0x1a(%eax),%ebx
 84cf089:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf08c:	8b 48 16             	mov    0x16(%eax),%ecx
 84cf08f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf092:	8b 50 0e             	mov    0xe(%eax),%edx
 84cf095:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf098:	8b 40 0a             	mov    0xa(%eax),%eax
 84cf09b:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84cf09f:	89 74 24 10          	mov    %esi,0x10(%esp)
 84cf0a3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84cf0a7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84cf0ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cf0af:	89 04 24             	mov    %eax,(%esp)
 84cf0b2:	e8 19 21 1f 00       	call   86c11d0 <_ZN8WongWork9CWebEvent15RecvInfoFromWebEjjjjjj>
 84cf0b7:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf0bc:	83 c4 6c             	add    $0x6c,%esp
 84cf0bf:	5b                   	pop    %ebx
 84cf0c0:	5e                   	pop    %esi
 84cf0c1:	5f                   	pop    %edi
 84cf0c2:	5d                   	pop    %ebp
 84cf0c3:	c3                   	ret

```

```c
// Inter_MonitorEventItemUpdate::dispatch_sig @ 0x84cefd2

/* Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorEventItemUpdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0x1a);
  uVar2 = *(undefined4 *)(param_3 + 0x16);
  uVar3 = *(undefined4 *)(param_3 + 0xe);
  uVar4 = *(undefined4 *)(param_3 + 0x12);
  uVar5 = NumberToString(*(uint *)(param_3 + 10),0);
  cMyTrace::cMyTrace(local_30,
                     "virtual int Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int)",
                     0x2bff,0);
  cMyTrace::operator()
            (local_30,&DAT_08c88a64,
             "virtual int Inter_MonitorEventItemUpdate::dispatch_sig(CUser*, char*, int)",0x2bff,
             uVar5,uVar4,uVar3,uVar2,uVar1);
  WongWork::CWebEvent::RecvInfoFromWeb
            (*(uint *)(local_20 + 10),*(uint *)(local_20 + 0xe),*(uint *)(local_20 + 0x16),
             *(uint *)(local_20 + 0x1a),*(uint *)(local_20 + 0x12),*(uint *)(local_20 + 0x1e));
  return 0;
}

```


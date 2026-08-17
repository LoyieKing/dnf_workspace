# AcceptThread

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AcceptThread

```asm
// === 0857cbe8 AcceptThread::AcceptThread  [0x0857cbe8-0x857cc0b] ===
 857cbe8:	55                   	push   %ebp
 857cbe9:	89 e5                	mov    %esp,%ebp
 857cbeb:	83 ec 18             	sub    $0x18,%esp
 857cbee:	8b 45 08             	mov    0x8(%ebp),%eax
 857cbf1:	89 04 24             	mov    %eax,(%esp)
 857cbf4:	e8 3f 3f 0b 00       	call   8630b38 <_ZN15ThreadInterfaceC1Ev>
 857cbf9:	8b 45 08             	mov    0x8(%ebp),%eax
 857cbfc:	c7 00 b0 90 ca 08    	movl   $0x8ca90b0,(%eax)
 857cc02:	8b 45 08             	mov    0x8(%ebp),%eax
 857cc05:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 857cc09:	c9                   	leave
 857cc0a:	c3                   	ret
 857cc0b:	90                   	nop

```

```c
// AcceptThread::AcceptThread @ 0x857cbe8

/* AcceptThread::AcceptThread() */

void __thiscall AcceptThread::AcceptThread(AcceptThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca90b0;
  this[0xc] = (AcceptThread)0x0;
  return;
}

```

---

## dispatch

```asm
// === 0857cc5a AcceptThread::dispatch  [0x0857cc5a-0x857d553] ===
 857cc5a:	55                   	push   %ebp
 857cc5b:	89 e5                	mov    %esp,%ebp
 857cc5d:	56                   	push   %esi
 857cc5e:	53                   	push   %ebx
 857cc5f:	81 ec 80 74 01 00    	sub    $0x17480,%esp
 857cc65:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 857cc6c:	c7 45 9c 60 ea 00 00 	movl   $0xea60,-0x64(%ebp)
 857cc73:	e8 09 f5 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857cc78:	89 04 24             	mov    %eax,(%esp)
 857cc7b:	e8 a8 27 00 00       	call   857f428 <_ZN12CEnvironment12get_tcp_portEv>
 857cc80:	66 89 45 e2          	mov    %ax,-0x1e(%ebp)
 857cc84:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 857cc8b:	00 
 857cc8c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857cc93:	00 
 857cc94:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 857cc9b:	e8 10 0e b0 ff       	call   807dab0 <socket@plt>
 857cca0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 857cca3:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 857cca7:	79 31                	jns    857ccda <_ZN12AcceptThread8dispatchEPv+0x80>
 857cca9:	c7 44 24 10 78 7d ca 	movl   $0x8ca7d78,0x10(%esp)
 857ccb0:	08 
 857ccb1:	c7 44 24 0c 8e 01 00 	movl   $0x18e,0xc(%esp)
 857ccb8:	00 
 857ccb9:	c7 44 24 08 c0 8f ca 	movl   $0x8ca8fc0,0x8(%esp)
 857ccc0:	08 
 857ccc1:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857ccc8:	08 
 857ccc9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857ccd0:	e8 35 6f 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857ccd5:	e9 6f 08 00 00       	jmp    857d549 <_ZN12AcceptThread8dispatchEPv+0x8ef>
 857ccda:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 857cce1:	00 
 857cce2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857cce9:	00 
 857ccea:	8d 45 8c             	lea    -0x74(%ebp),%eax
 857cced:	89 04 24             	mov    %eax,(%esp)
 857ccf0:	e8 cb 0f b0 ff       	call   807dcc0 <memset@plt>
 857ccf5:	66 c7 45 8c 02 00    	movw   $0x2,-0x74(%ebp)
 857ccfb:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 857cd02:	e8 09 0e b0 ff       	call   807db10 <htonl@plt>
 857cd07:	89 45 90             	mov    %eax,-0x70(%ebp)
 857cd0a:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 857cd0e:	89 04 24             	mov    %eax,(%esp)
 857cd11:	e8 6a 19 b0 ff       	call   807e680 <htons@plt>
 857cd16:	66 89 45 8e          	mov    %ax,-0x72(%ebp)
 857cd1a:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 857cd21:	00 
 857cd22:	8d 45 9c             	lea    -0x64(%ebp),%eax
 857cd25:	89 44 24 0c          	mov    %eax,0xc(%esp)
 857cd29:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 857cd30:	00 
 857cd31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857cd38:	00 
 857cd39:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857cd3c:	89 04 24             	mov    %eax,(%esp)
 857cd3f:	e8 5c 15 b0 ff       	call   807e2a0 <setsockopt@plt>
 857cd44:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857cd47:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 857cd4b:	79 31                	jns    857cd7e <_ZN12AcceptThread8dispatchEPv+0x124>
 857cd4d:	c7 44 24 10 b0 7d ca 	movl   $0x8ca7db0,0x10(%esp)
 857cd54:	08 
 857cd55:	c7 44 24 0c 9b 01 00 	movl   $0x19b,0xc(%esp)
 857cd5c:	00 
 857cd5d:	c7 44 24 08 c0 8f ca 	movl   $0x8ca8fc0,0x8(%esp)
 857cd64:	08 
 857cd65:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857cd6c:	08 
 857cd6d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857cd74:	e8 91 6e 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857cd79:	e9 c0 07 00 00       	jmp    857d53e <_ZN12AcceptThread8dispatchEPv+0x8e4>
 857cd7e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 857cd81:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 857cd88:	00 
 857cd89:	89 44 24 04          	mov    %eax,0x4(%esp)
 857cd8d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857cd90:	89 04 24             	mov    %eax,(%esp)
 857cd93:	e8 b8 19 b0 ff       	call   807e750 <bind@plt>
 857cd98:	c1 e8 1f             	shr    $0x1f,%eax
 857cd9b:	84 c0                	test   %al,%al
 857cd9d:	74 44                	je     857cde3 <_ZN12AcceptThread8dispatchEPv+0x189>
 857cd9f:	e8 cc 0f b0 ff       	call   807dd70 <__errno_location@plt>
 857cda4:	8b 00                	mov    (%eax),%eax
 857cda6:	89 04 24             	mov    %eax,(%esp)
 857cda9:	e8 82 09 b0 ff       	call   807d730 <strerror@plt>
 857cdae:	89 44 24 14          	mov    %eax,0x14(%esp)
 857cdb2:	c7 44 24 10 d7 7d ca 	movl   $0x8ca7dd7,0x10(%esp)
 857cdb9:	08 
 857cdba:	c7 44 24 0c a1 01 00 	movl   $0x1a1,0xc(%esp)
 857cdc1:	00 
 857cdc2:	c7 44 24 08 c0 8f ca 	movl   $0x8ca8fc0,0x8(%esp)
 857cdc9:	08 
 857cdca:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857cdd1:	08 
 857cdd2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857cdd9:	e8 2c 6e 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857cdde:	e9 5b 07 00 00       	jmp    857d53e <_ZN12AcceptThread8dispatchEPv+0x8e4>
 857cde3:	c7 44 24 04 00 04 00 	movl   $0x400,0x4(%esp)
 857cdea:	00 
 857cdeb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857cdee:	89 04 24             	mov    %eax,(%esp)
 857cdf1:	e8 7a 09 b0 ff       	call   807d770 <listen@plt>
 857cdf6:	c1 e8 1f             	shr    $0x1f,%eax
 857cdf9:	84 c0                	test   %al,%al
 857cdfb:	74 31                	je     857ce2e <_ZN12AcceptThread8dispatchEPv+0x1d4>
 857cdfd:	c7 44 24 10 f0 7d ca 	movl   $0x8ca7df0,0x10(%esp)
 857ce04:	08 
 857ce05:	c7 44 24 0c a7 01 00 	movl   $0x1a7,0xc(%esp)
 857ce0c:	00 
 857ce0d:	c7 44 24 08 c0 8f ca 	movl   $0x8ca8fc0,0x8(%esp)
 857ce14:	08 
 857ce15:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857ce1c:	08 
 857ce1d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857ce24:	e8 e1 6d 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857ce29:	e9 10 07 00 00       	jmp    857d53e <_ZN12AcceptThread8dispatchEPv+0x8e4>
 857ce2e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857ce31:	89 04 24             	mov    %eax,(%esp)
 857ce34:	e8 4b 26 00 00       	call   857f484 <_ZN8CNetworkILi4096ELi450000EE11SetNonBlockEi>
 857ce39:	83 f0 01             	xor    $0x1,%eax
 857ce3c:	84 c0                	test   %al,%al
 857ce3e:	0f 84 e2 06 00 00    	je     857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857ce44:	c7 44 24 10 10 7e ca 	movl   $0x8ca7e10,0x10(%esp)
 857ce4b:	08 
 857ce4c:	c7 44 24 0c ae 01 00 	movl   $0x1ae,0xc(%esp)
 857ce53:	00 
 857ce54:	c7 44 24 08 c0 8f ca 	movl   $0x8ca8fc0,0x8(%esp)
 857ce5b:	08 
 857ce5c:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857ce63:	08 
 857ce64:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857ce6b:	e8 9a 6d 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857ce70:	e9 c9 06 00 00       	jmp    857d53e <_ZN12AcceptThread8dispatchEPv+0x8e4>
 857ce75:	c7 85 70 ff ff ff 10 	movl   $0x10,-0x90(%ebp)
 857ce7c:	00 00 00 
 857ce7f:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 857ce85:	89 45 f0             	mov    %eax,-0x10(%ebp)
 857ce88:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 857ce8f:	eb 11                	jmp    857cea2 <_ZN12AcceptThread8dispatchEPv+0x248>
 857ce91:	8b 55 ec             	mov    -0x14(%ebp),%edx
 857ce94:	8b 45 f0             	mov    -0x10(%ebp),%eax
 857ce97:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 857ce9e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 857cea2:	83 7d ec 1f          	cmpl   $0x1f,-0x14(%ebp)
 857cea6:	0f 96 c0             	setbe  %al
 857cea9:	84 c0                	test   %al,%al
 857ceab:	75 e4                	jne    857ce91 <_ZN12AcceptThread8dispatchEPv+0x237>
 857cead:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857ceb0:	c1 e8 05             	shr    $0x5,%eax
 857ceb3:	89 c2                	mov    %eax,%edx
 857ceb5:	8b 84 85 d8 fe ff ff 	mov    -0x128(%ebp,%eax,4),%eax
 857cebc:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 857cebf:	83 e1 1f             	and    $0x1f,%ecx
 857cec2:	bb 01 00 00 00       	mov    $0x1,%ebx
 857cec7:	89 de                	mov    %ebx,%esi
 857cec9:	d3 e6                	shl    %cl,%esi
 857cecb:	89 f1                	mov    %esi,%ecx
 857cecd:	09 c8                	or     %ecx,%eax
 857cecf:	89 84 95 d8 fe ff ff 	mov    %eax,-0x128(%ebp,%edx,4)
 857ced6:	c7 45 84 01 00 00 00 	movl   $0x1,-0x7c(%ebp)
 857cedd:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 857cee4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857cee7:	8d 50 01             	lea    0x1(%eax),%edx
 857ceea:	8d 45 84             	lea    -0x7c(%ebp),%eax
 857ceed:	89 44 24 10          	mov    %eax,0x10(%esp)
 857cef1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857cef8:	00 
 857cef9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 857cf00:	00 
 857cf01:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 857cf07:	89 44 24 04          	mov    %eax,0x4(%esp)
 857cf0b:	89 14 24             	mov    %edx,(%esp)
 857cf0e:	e8 2d 19 b0 ff       	call   807e840 <select@plt>
 857cf13:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 857cf16:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 857cf1a:	0f 88 02 06 00 00    	js     857d522 <_ZN12AcceptThread8dispatchEPv+0x8c8>
 857cf20:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857cf23:	c1 e8 05             	shr    $0x5,%eax
 857cf26:	8b 94 85 d8 fe ff ff 	mov    -0x128(%ebp,%eax,4),%edx
 857cf2d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857cf30:	83 e0 1f             	and    $0x1f,%eax
 857cf33:	89 d3                	mov    %edx,%ebx
 857cf35:	89 c1                	mov    %eax,%ecx
 857cf37:	d3 fb                	sar    %cl,%ebx
 857cf39:	89 d8                	mov    %ebx,%eax
 857cf3b:	83 e0 01             	and    $0x1,%eax
 857cf3e:	83 f0 01             	xor    $0x1,%eax
 857cf41:	84 c0                	test   %al,%al
 857cf43:	0f 85 dc 05 00 00    	jne    857d525 <_ZN12AcceptThread8dispatchEPv+0x8cb>
 857cf49:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 857cf4f:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 857cf55:	89 54 24 08          	mov    %edx,0x8(%esp)
 857cf59:	89 44 24 04          	mov    %eax,0x4(%esp)
 857cf5d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857cf60:	89 04 24             	mov    %eax,(%esp)
 857cf63:	e8 48 0f b0 ff       	call   807deb0 <accept@plt>
 857cf68:	89 45 d8             	mov    %eax,-0x28(%ebp)
 857cf6b:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 857cf6f:	79 4b                	jns    857cfbc <_ZN12AcceptThread8dispatchEPv+0x362>
 857cf71:	e8 fa 0d b0 ff       	call   807dd70 <__errno_location@plt>
 857cf76:	8b 00                	mov    (%eax),%eax
 857cf78:	89 04 24             	mov    %eax,(%esp)
 857cf7b:	e8 b0 07 b0 ff       	call   807d730 <strerror@plt>
 857cf80:	89 44 24 18          	mov    %eax,0x18(%esp)
 857cf84:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857cf87:	89 44 24 14          	mov    %eax,0x14(%esp)
 857cf8b:	c7 44 24 10 32 7e ca 	movl   $0x8ca7e32,0x10(%esp)
 857cf92:	08 
 857cf93:	c7 44 24 0c d4 01 00 	movl   $0x1d4,0xc(%esp)
 857cf9a:	00 
 857cf9b:	c7 44 24 08 c0 8f ca 	movl   $0x8ca8fc0,0x8(%esp)
 857cfa2:	08 
 857cfa3:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857cfaa:	08 
 857cfab:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857cfb2:	e8 53 6c 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857cfb7:	e9 6a 05 00 00       	jmp    857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857cfbc:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 857cfc2:	89 04 24             	mov    %eax,(%esp)
 857cfc5:	e8 f6 0d b0 ff       	call   807ddc0 <inet_ntoa@plt>
 857cfca:	89 c3                	mov    %eax,%ebx
 857cfcc:	e8 b0 f1 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857cfd1:	89 04 24             	mov    %eax,(%esp)
 857cfd4:	e8 5d 24 00 00       	call   857f436 <_ZN12CEnvironment24get_system_monitoring_ipEv>
 857cfd9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 857cfdd:	89 04 24             	mov    %eax,(%esp)
 857cfe0:	e8 fb 14 b0 ff       	call   807e4e0 <strcmp@plt>
 857cfe5:	85 c0                	test   %eax,%eax
 857cfe7:	0f 94 c0             	sete   %al
 857cfea:	84 c0                	test   %al,%al
 857cfec:	74 10                	je     857cffe <_ZN12AcceptThread8dispatchEPv+0x3a4>
 857cfee:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857cff1:	89 04 24             	mov    %eax,(%esp)
 857cff4:	e8 67 08 b0 ff       	call   807d860 <close@plt>
 857cff9:	e9 28 05 00 00       	jmp    857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857cffe:	e8 7e f1 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857d003:	8b 80 f0 02 00 00    	mov    0x2f0(%eax),%eax
 857d009:	85 c0                	test   %eax,%eax
 857d00b:	0f 95 c0             	setne  %al
 857d00e:	84 c0                	test   %al,%al
 857d010:	0f 84 88 00 00 00    	je     857d09e <_ZN12AcceptThread8dispatchEPv+0x444>
 857d016:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 857d01d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857d022:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 857d029:	00 
 857d02a:	89 04 24             	mov    %eax,(%esp)
 857d02d:	e8 b2 41 ff ff       	call   85711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>
 857d032:	89 45 f4             	mov    %eax,-0xc(%ebp)
 857d035:	8b 45 08             	mov    0x8(%ebp),%eax
 857d038:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 857d03c:	83 f0 01             	xor    $0x1,%eax
 857d03f:	84 c0                	test   %al,%al
 857d041:	74 17                	je     857d05a <_ZN12AcceptThread8dispatchEPv+0x400>
 857d043:	e8 39 f1 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857d048:	8b 80 f0 02 00 00    	mov    0x2f0(%eax),%eax
 857d04e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 857d051:	7f 07                	jg     857d05a <_ZN12AcceptThread8dispatchEPv+0x400>
 857d053:	b8 01 00 00 00       	mov    $0x1,%eax
 857d058:	eb 05                	jmp    857d05f <_ZN12AcceptThread8dispatchEPv+0x405>
 857d05a:	b8 00 00 00 00       	mov    $0x0,%eax
 857d05f:	84 c0                	test   %al,%al
 857d061:	74 09                	je     857d06c <_ZN12AcceptThread8dispatchEPv+0x412>
 857d063:	8b 45 08             	mov    0x8(%ebp),%eax
 857d066:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 857d06a:	eb 32                	jmp    857d09e <_ZN12AcceptThread8dispatchEPv+0x444>
 857d06c:	8b 45 08             	mov    0x8(%ebp),%eax
 857d06f:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 857d073:	84 c0                	test   %al,%al
 857d075:	74 17                	je     857d08e <_ZN12AcceptThread8dispatchEPv+0x434>
 857d077:	e8 05 f1 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857d07c:	8b 80 f4 02 00 00    	mov    0x2f4(%eax),%eax
 857d082:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 857d085:	7e 07                	jle    857d08e <_ZN12AcceptThread8dispatchEPv+0x434>
 857d087:	b8 01 00 00 00       	mov    $0x1,%eax
 857d08c:	eb 05                	jmp    857d093 <_ZN12AcceptThread8dispatchEPv+0x439>
 857d08e:	b8 00 00 00 00       	mov    $0x0,%eax
 857d093:	84 c0                	test   %al,%al
 857d095:	74 07                	je     857d09e <_ZN12AcceptThread8dispatchEPv+0x444>
 857d097:	8b 45 08             	mov    0x8(%ebp),%eax
 857d09a:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 857d09e:	e8 eb f0 b4 ff       	call   80cc18e <_Z14G_CGameManagerv>
 857d0a3:	83 c0 4c             	add    $0x4c,%eax
 857d0a6:	89 04 24             	mov    %eax,(%esp)
 857d0a9:	e8 52 13 b7 ff       	call   80ee400 <_ZN10StaticPoolI5CUserLi600EE4SizeEv>
 857d0ae:	89 c3                	mov    %eax,%ebx
 857d0b0:	e8 d9 f0 b4 ff       	call   80cc18e <_Z14G_CGameManagerv>
 857d0b5:	83 c0 4c             	add    $0x4c,%eax
 857d0b8:	89 04 24             	mov    %eax,(%esp)
 857d0bb:	e8 4a 13 b7 ff       	call   80ee40a <_ZN10StaticPoolI5CUserLi600EE6RemainEv>
 857d0c0:	89 de                	mov    %ebx,%esi
 857d0c2:	29 c6                	sub    %eax,%esi
 857d0c4:	89 f0                	mov    %esi,%eax
 857d0c6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 857d0c9:	8b 45 08             	mov    0x8(%ebp),%eax
 857d0cc:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 857d0d0:	84 c0                	test   %al,%al
 857d0d2:	75 10                	jne    857d0e4 <_ZN12AcceptThread8dispatchEPv+0x48a>
 857d0d4:	e8 a8 f0 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857d0d9:	8b 80 c0 03 00 00    	mov    0x3c0(%eax),%eax
 857d0df:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 857d0e2:	7f 07                	jg     857d0eb <_ZN12AcceptThread8dispatchEPv+0x491>
 857d0e4:	b8 01 00 00 00       	mov    $0x1,%eax
 857d0e9:	eb 05                	jmp    857d0f0 <_ZN12AcceptThread8dispatchEPv+0x496>
 857d0eb:	b8 00 00 00 00       	mov    $0x0,%eax
 857d0f0:	84 c0                	test   %al,%al
 857d0f2:	0f 84 67 01 00 00    	je     857d25f <_ZN12AcceptThread8dispatchEPv+0x605>
 857d0f8:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 857d0fe:	89 04 24             	mov    %eax,(%esp)
 857d101:	e8 ba 0c b0 ff       	call   807ddc0 <inet_ntoa@plt>
 857d106:	89 44 24 04          	mov    %eax,0x4(%esp)
 857d10a:	c7 04 24 4e 7e ca 08 	movl   $0x8ca7e4e,(%esp)
 857d111:	e8 ca 13 b0 ff       	call   807e4e0 <strcmp@plt>
 857d116:	85 c0                	test   %eax,%eax
 857d118:	0f 95 c0             	setne  %al
 857d11b:	84 c0                	test   %al,%al
 857d11d:	0f 84 3c 01 00 00    	je     857d25f <_ZN12AcceptThread8dispatchEPv+0x605>
 857d123:	e8 59 f0 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857d128:	8b 80 c0 03 00 00    	mov    0x3c0(%eax),%eax
 857d12e:	83 c0 05             	add    $0x5,%eax
 857d131:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 857d134:	0f 9e c0             	setle  %al
 857d137:	84 c0                	test   %al,%al
 857d139:	0f 84 20 01 00 00    	je     857d25f <_ZN12AcceptThread8dispatchEPv+0x605>
 857d13f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d145:	89 04 24             	mov    %eax,(%esp)
 857d148:	e8 ff 0b 01 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 857d14d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857d154:	00 
 857d155:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857d15c:	00 
 857d15d:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d163:	89 04 24             	mov    %eax,(%esp)
 857d166:	e8 91 e7 b4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 857d16b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857d172:	00 
 857d173:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d179:	89 04 24             	mov    %eax,(%esp)
 857d17c:	e8 9f e7 b4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 857d181:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 857d188:	00 
 857d189:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d18f:	89 04 24             	mov    %eax,(%esp)
 857d192:	e8 89 e7 b4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 857d197:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857d19e:	00 
 857d19f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d1a5:	89 04 24             	mov    %eax,(%esp)
 857d1a8:	e8 ab e7 b4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 857d1ad:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d1b3:	89 04 24             	mov    %eax,(%esp)
 857d1b6:	e8 7d 22 f1 ff       	call   848f438 <_ZNK18InterfacePacketBuf7get_lenEv>
 857d1bb:	89 c3                	mov    %eax,%ebx
 857d1bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857d1c4:	00 
 857d1c5:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d1cb:	89 04 24             	mov    %eax,(%esp)
 857d1ce:	e8 49 22 f1 ff       	call   848f41c <_ZN18InterfacePacketBuf10get_packetEi>
 857d1d3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 857d1d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 857d1db:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857d1de:	89 04 24             	mov    %eax,(%esp)
 857d1e1:	e8 4a 16 b0 ff       	call   807e830 <write@plt>
 857d1e6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857d1e9:	89 04 24             	mov    %eax,(%esp)
 857d1ec:	e8 6f 06 b0 ff       	call   807d860 <close@plt>
 857d1f1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857d1f8:	00 
 857d1f9:	c7 44 24 08 11 02 00 	movl   $0x211,0x8(%esp)
 857d200:	00 
 857d201:	c7 44 24 04 c0 8f ca 	movl   $0x8ca8fc0,0x4(%esp)
 857d208:	08 
 857d209:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 857d20c:	89 04 24             	mov    %eax,(%esp)
 857d20f:	e8 04 25 fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857d214:	8b 45 e8             	mov    -0x18(%ebp),%eax
 857d217:	89 44 24 08          	mov    %eax,0x8(%esp)
 857d21b:	c7 44 24 04 60 7e ca 	movl   $0x8ca7e60,0x4(%esp)
 857d222:	08 
 857d223:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 857d226:	89 04 24             	mov    %eax,(%esp)
 857d229:	e8 5a 25 fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857d22e:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d234:	89 04 24             	mov    %eax,(%esp)
 857d237:	e8 44 0c 01 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 857d23c:	e9 e5 02 00 00       	jmp    857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857d241:	89 d3                	mov    %edx,%ebx
 857d243:	89 c6                	mov    %eax,%esi
 857d245:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857d24b:	89 04 24             	mov    %eax,(%esp)
 857d24e:	e8 2d 0c 01 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 857d253:	89 f0                	mov    %esi,%eax
 857d255:	89 da                	mov    %ebx,%edx
 857d257:	89 04 24             	mov    %eax,(%esp)
 857d25a:	e8 f1 64 56 00       	call   8ae3750 <_Unwind_Resume>
 857d25f:	e8 54 8f b7 ff       	call   80f61b8 <_Z30GameserverDemonManagerInstancev>
 857d264:	89 04 24             	mov    %eax,(%esp)
 857d267:	e8 98 01 f7 ff       	call   84ed404 <_ZN22GameServerDemonManager22IsProhibitConnectStateEv>
 857d26c:	84 c0                	test   %al,%al
 857d26e:	0f 84 20 01 00 00    	je     857d394 <_ZN12AcceptThread8dispatchEPv+0x73a>
 857d274:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d27a:	89 04 24             	mov    %eax,(%esp)
 857d27d:	e8 3e f6 00 00       	call   858c8c0 <_ZN9PacketBufC1Ev>
 857d282:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857d289:	00 
 857d28a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857d291:	00 
 857d292:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d298:	89 04 24             	mov    %eax,(%esp)
 857d29b:	e8 aa f6 00 00       	call   858c94a <_ZN9PacketBuf10put_headerEii>
 857d2a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857d2a7:	00 
 857d2a8:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d2ae:	89 04 24             	mov    %eax,(%esp)
 857d2b1:	e8 e8 e5 b4 ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 857d2b6:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 857d2bd:	00 
 857d2be:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d2c4:	89 04 24             	mov    %eax,(%esp)
 857d2c7:	e8 d2 e5 b4 ff       	call   80cb89e <_ZN9PacketBuf8put_byteEi>
 857d2cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857d2d3:	00 
 857d2d4:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d2da:	89 04 24             	mov    %eax,(%esp)
 857d2dd:	e8 66 02 01 00       	call   858d548 <_ZN9PacketBuf8finalizeEb>
 857d2e2:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d2e8:	89 04 24             	mov    %eax,(%esp)
 857d2eb:	e8 62 07 01 00       	call   858da52 <_ZNK9PacketBuf7get_lenEv>
 857d2f0:	89 c3                	mov    %eax,%ebx
 857d2f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857d2f9:	00 
 857d2fa:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d300:	89 04 24             	mov    %eax,(%esp)
 857d303:	e8 fa e3 ca ff       	call   822b702 <_ZN9PacketBuf10get_packetEi>
 857d308:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 857d30c:	89 44 24 04          	mov    %eax,0x4(%esp)
 857d310:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857d313:	89 04 24             	mov    %eax,(%esp)
 857d316:	e8 15 15 b0 ff       	call   807e830 <write@plt>
 857d31b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857d31e:	89 04 24             	mov    %eax,(%esp)
 857d321:	e8 3a 05 b0 ff       	call   807d860 <close@plt>
 857d326:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857d32d:	00 
 857d32e:	c7 44 24 08 30 02 00 	movl   $0x230,0x8(%esp)
 857d335:	00 
 857d336:	c7 44 24 04 c0 8f ca 	movl   $0x8ca8fc0,0x4(%esp)
 857d33d:	08 
 857d33e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 857d341:	89 04 24             	mov    %eax,(%esp)
 857d344:	e8 cf 23 fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857d349:	8b 45 e8             	mov    -0x18(%ebp),%eax
 857d34c:	89 44 24 08          	mov    %eax,0x8(%esp)
 857d350:	c7 44 24 04 88 7e ca 	movl   $0x8ca7e88,0x4(%esp)
 857d357:	08 
 857d358:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 857d35b:	89 04 24             	mov    %eax,(%esp)
 857d35e:	e8 25 24 fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857d363:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d369:	89 04 24             	mov    %eax,(%esp)
 857d36c:	e8 6b f5 00 00       	call   858c8dc <_ZN9PacketBufD1Ev>
 857d371:	e9 b0 01 00 00       	jmp    857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857d376:	89 d3                	mov    %edx,%ebx
 857d378:	89 c6                	mov    %eax,%esi
 857d37a:	8d 85 a4 8b fe ff    	lea    -0x1745c(%ebp),%eax
 857d380:	89 04 24             	mov    %eax,(%esp)
 857d383:	e8 54 f5 00 00       	call   858c8dc <_ZN9PacketBufD1Ev>
 857d388:	89 f0                	mov    %esi,%eax
 857d38a:	89 da                	mov    %ebx,%edx
 857d38c:	89 04 24             	mov    %eax,(%esp)
 857d38f:	e8 bc 63 56 00       	call   8ae3750 <_Unwind_Resume>
 857d394:	e8 f5 ed b4 ff       	call   80cc18e <_Z14G_CGameManagerv>
 857d399:	89 04 24             	mov    %eax,(%esp)
 857d39c:	e8 f5 6e d1 ff       	call   8294296 <_ZN12CGameManager10createUserEv>
 857d3a1:	89 45 a0             	mov    %eax,-0x60(%ebp)
 857d3a4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 857d3a7:	85 c0                	test   %eax,%eax
 857d3a9:	0f 85 1d 01 00 00    	jne    857d4cc <_ZN12AcceptThread8dispatchEPv+0x872>
 857d3af:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d3b5:	89 04 24             	mov    %eax,(%esp)
 857d3b8:	e8 8f 09 01 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 857d3bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857d3c4:	00 
 857d3c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857d3cc:	00 
 857d3cd:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d3d3:	89 04 24             	mov    %eax,(%esp)
 857d3d6:	e8 21 e5 b4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 857d3db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857d3e2:	00 
 857d3e3:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d3e9:	89 04 24             	mov    %eax,(%esp)
 857d3ec:	e8 2f e5 b4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 857d3f1:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 857d3f8:	00 
 857d3f9:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d3ff:	89 04 24             	mov    %eax,(%esp)
 857d402:	e8 19 e5 b4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 857d407:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857d40e:	00 
 857d40f:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d415:	89 04 24             	mov    %eax,(%esp)
 857d418:	e8 3b e5 b4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 857d41d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d423:	89 04 24             	mov    %eax,(%esp)
 857d426:	e8 0d 20 f1 ff       	call   848f438 <_ZNK18InterfacePacketBuf7get_lenEv>
 857d42b:	89 c3                	mov    %eax,%ebx
 857d42d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857d434:	00 
 857d435:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d43b:	89 04 24             	mov    %eax,(%esp)
 857d43e:	e8 d9 1f f1 ff       	call   848f41c <_ZN18InterfacePacketBuf10get_packetEi>
 857d443:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 857d447:	89 44 24 04          	mov    %eax,0x4(%esp)
 857d44b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857d44e:	89 04 24             	mov    %eax,(%esp)
 857d451:	e8 da 13 b0 ff       	call   807e830 <write@plt>
 857d456:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857d459:	89 04 24             	mov    %eax,(%esp)
 857d45c:	e8 ff 03 b0 ff       	call   807d860 <close@plt>
 857d461:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857d468:	00 
 857d469:	c7 44 24 08 77 02 00 	movl   $0x277,0x8(%esp)
 857d470:	00 
 857d471:	c7 44 24 04 c0 8f ca 	movl   $0x8ca8fc0,0x4(%esp)
 857d478:	08 
 857d479:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 857d47c:	89 04 24             	mov    %eax,(%esp)
 857d47f:	e8 94 22 fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857d484:	8b 45 e8             	mov    -0x18(%ebp),%eax
 857d487:	89 44 24 08          	mov    %eax,0x8(%esp)
 857d48b:	c7 44 24 04 cc 7e ca 	movl   $0x8ca7ecc,0x4(%esp)
 857d492:	08 
 857d493:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 857d496:	89 04 24             	mov    %eax,(%esp)
 857d499:	e8 ea 22 fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857d49e:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d4a4:	89 04 24             	mov    %eax,(%esp)
 857d4a7:	e8 d4 09 01 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 857d4ac:	eb 78                	jmp    857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857d4ae:	89 d3                	mov    %edx,%ebx
 857d4b0:	89 c6                	mov    %eax,%esi
 857d4b2:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 857d4b8:	89 04 24             	mov    %eax,(%esp)
 857d4bb:	e8 c0 09 01 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 857d4c0:	89 f0                	mov    %esi,%eax
 857d4c2:	89 da                	mov    %ebx,%edx
 857d4c4:	89 04 24             	mov    %eax,(%esp)
 857d4c7:	e8 84 62 56 00       	call   8ae3750 <_Unwind_Resume>
 857d4cc:	8b 45 a0             	mov    -0x60(%ebp),%eax
 857d4cf:	8b 55 d8             	mov    -0x28(%ebp),%edx
 857d4d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 857d4d6:	89 04 24             	mov    %eax,(%esp)
 857d4d9:	e8 ea be 0c 00       	call   86493c8 <_ZN5CUser12InitOnAcceptEi>
 857d4de:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 857d4e4:	89 c2                	mov    %eax,%edx
 857d4e6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 857d4e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 857d4ed:	89 04 24             	mov    %eax,(%esp)
 857d4f0:	e8 11 1f 00 00       	call   857f406 <_ZN5CUser21set_public_ip_addressEi>
 857d4f5:	c7 04 24 cc bd 40 09 	movl   $0x940bdcc,(%esp)
 857d4fc:	e8 9d 7e b8 ff       	call   810539e <_ZN5Mutex4lockEv>
 857d501:	8d 45 a0             	lea    -0x60(%ebp),%eax
 857d504:	89 44 24 04          	mov    %eax,0x4(%esp)
 857d508:	c7 04 24 00 be 40 09 	movl   $0x940be00,(%esp)
 857d50f:	e8 ac 20 00 00       	call   857f5c0 <_ZNSt5queueIP5CUserSt5dequeIS1_SaIS1_EEE4pushERKS1_>
 857d514:	c7 04 24 cc bd 40 09 	movl   $0x940bdcc,(%esp)
 857d51b:	e8 92 7e b8 ff       	call   81053b2 <_ZN5Mutex6unlockEv>
 857d520:	eb 04                	jmp    857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857d522:	90                   	nop
 857d523:	eb 01                	jmp    857d526 <_ZN12AcceptThread8dispatchEPv+0x8cc>
 857d525:	90                   	nop
 857d526:	e8 56 ec b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857d52b:	89 04 24             	mov    %eax,(%esp)
 857d52e:	e8 e5 1e 00 00       	call   857f418 <_ZN12CEnvironment17get_suspend_stateEv>
 857d533:	83 f0 01             	xor    $0x1,%eax
 857d536:	84 c0                	test   %al,%al
 857d538:	0f 85 37 f9 ff ff    	jne    857ce75 <_ZN12AcceptThread8dispatchEPv+0x21b>
 857d53e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857d541:	89 04 24             	mov    %eax,(%esp)
 857d544:	e8 17 03 b0 ff       	call   807d860 <close@plt>
 857d549:	81 c4 80 74 01 00    	add    $0x17480,%esp
 857d54f:	5b                   	pop    %ebx
 857d550:	5e                   	pop    %esi
 857d551:	5d                   	pop    %ebp
 857d552:	c3                   	ret
 857d553:	90                   	nop

```

```c
// AcceptThread::dispatch @ 0x857cc5a

/* AcceptThread::dispatch(void*) */

void AcceptThread::dispatch(void *param_1)

{
  bool bVar1;
  char cVar2;
  CEnvironment *pCVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *__s1;
  int iVar7;
  size_t sVar8;
  void *pvVar9;
  GameServerDemonManager *this;
  CGameManager *this_00;
  PacketBuf aPStack_17460 [95028];
  fd_set local_12c;
  PacketGuard local_ac [12];
  PacketGuard local_a0 [12];
  socklen_t local_94;
  undefined1 local_90 [16];
  timeval local_80;
  sockaddr local_78;
  undefined4 local_68;
  CUser *local_64;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  uint local_30;
  int local_2c;
  int local_28;
  uint16_t local_22;
  int local_20;
  int local_1c;
  uint local_18;
  fd_set *local_14;
  int local_10;
  
  local_64 = (CUser *)0x0;
  local_68 = 60000;
  pCVar3 = (CEnvironment *)G_CEnvironment();
  local_22 = CEnvironment::get_tcp_port(pCVar3);
  local_30 = socket(2,1,0);
  if ((int)local_30 < 0) {
    LogManager::logFormat
              (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x18e,
               "[AcceptThread::dispatch] Fail to Create ListenSocket.");
  }
  else {
    memset(&local_78,0,0x10);
    local_78.sa_family = 2;
    local_78.sa_data._2_4_ = htonl(0);
    local_78.sa_data._0_2_ = htons(local_22);
    local_28 = setsockopt(local_30,1,2,&local_68,4);
    if (local_28 < 0) {
      LogManager::logFormat
                (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x19b,
                 "[Error] listen socket setsockopt error");
    }
    else {
      iVar4 = bind(local_30,&local_78,0x10);
      if (iVar4 < 0) {
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x1a1,
                   "Fail to bind Listen - %s",pcVar6);
      }
      else {
        iVar4 = listen(local_30,0x400);
        if (iVar4 < 0) {
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x1a7,
                     "Fail to Create AcceptThread.");
        }
        else {
          cVar2 = CNetwork<4096,450000>::SetNonBlock(local_30);
          if (cVar2 == '\x01') {
LAB_0857d526:
            pCVar3 = (CEnvironment *)G_CEnvironment();
            cVar2 = CEnvironment::get_suspend_state(pCVar3);
            if (cVar2 != '\x01') {
              local_94 = 0x10;
              local_14 = &local_12c;
              for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
                local_12c.fds_bits[local_18] = 0;
              }
              local_12c.fds_bits[local_30 >> 5] =
                   local_12c.fds_bits[local_30 >> 5] | 1 << ((byte)local_30 & 0x1f);
              local_80.tv_sec = 1;
              local_80.tv_usec = 0;
              local_20 = select(local_30 + 1,&local_12c,(fd_set *)0x0,(fd_set *)0x0,&local_80);
              if ((-1 < local_20) &&
                 (((byte)(local_12c.fds_bits[local_30 >> 5] >> ((byte)local_30 & 0x1f)) & 1) == 1))
              {
                local_2c = accept(local_30,(sockaddr *)local_90,&local_94);
                if (local_2c < 0) {
                  piVar5 = __errno_location();
                  pcVar6 = strerror(*piVar5);
                  LogManager::logFormat
                            (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",
                             0x1d4,"Accept Socket[%d] Error(%s)",local_2c,pcVar6);
                }
                else {
                  pcVar6 = inet_ntoa((in_addr)local_90._4_4_);
                  pCVar3 = (CEnvironment *)G_CEnvironment();
                  __s1 = (char *)CEnvironment::get_system_monitoring_ip(pCVar3);
                  iVar4 = strcmp(__s1,pcVar6);
                  if (iVar4 != 0) {
                    iVar4 = G_CEnvironment();
                    if (*(int *)(iVar4 + 0x2f0) != 0) {
                      local_10 = 0;
                      local_10 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,2);
                      if ((*(char *)((int)param_1 + 0xc) == '\x01') ||
                         (iVar4 = G_CEnvironment(), local_10 < *(int *)(iVar4 + 0x2f0))) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if (bVar1) {
                        *(undefined1 *)((int)param_1 + 0xc) = 1;
                      }
                      else {
                        if ((*(char *)((int)param_1 + 0xc) == '\0') ||
                           (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x2f4) <= local_10)) {
                          bVar1 = false;
                        }
                        else {
                          bVar1 = true;
                        }
                        if (bVar1) {
                          *(undefined1 *)((int)param_1 + 0xc) = 0;
                        }
                      }
                    }
                    G_CGameManager();
                    iVar4 = StaticPool<CUser,600>::Size();
                    iVar7 = G_CGameManager();
                    local_1c = StaticPool<CUser,600>::Remain
                                         ((StaticPool<CUser,600> *)(iVar7 + 0x4c));
                    local_1c = iVar4 - local_1c;
                    if ((*(char *)((int)param_1 + 0xc) == '\0') &&
                       (iVar4 = G_CEnvironment(), local_1c < *(int *)(iVar4 + 0x3c0))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      pcVar6 = inet_ntoa((in_addr)local_90._4_4_);
                      iVar4 = strcmp("192.168.30.146",pcVar6);
                      if ((iVar4 != 0) &&
                         (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x3c0) + 5 <= local_1c)) {
                        PacketGuard::PacketGuard(local_a0);
                    /* try { // try from 0857d166 to 0857d22d has its CatchHandler @ 0857d241 */
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,1,1);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,4);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
                        sVar8 = InterfacePacketBuf::get_len((InterfacePacketBuf *)local_a0);
                        pvVar9 = (void *)InterfacePacketBuf::get_packet
                                                   ((InterfacePacketBuf *)local_a0,0);
                        write(local_2c,pvVar9,sVar8);
                        close(local_2c);
                        cMyTrace::cMyTrace(local_60,"virtual void AcceptThread::dispatch(void*)",
                                           0x211,0);
                        cMyTrace::operator()
                                  (local_60,"[ACCEPT] LOCK STATE(Curr Session : %d)",local_1c);
                        PacketGuard::~PacketGuard(local_a0);
                        goto LAB_0857d526;
                      }
                    }
                    this = (GameServerDemonManager *)GameserverDemonManagerInstance();
                    cVar2 = GameServerDemonManager::IsProhibitConnectState(this);
                    if (cVar2 == '\0') {
                      this_00 = (CGameManager *)G_CGameManager();
                      local_64 = (CUser *)CGameManager::createUser(this_00);
                      if (local_64 == (CUser *)0x0) {
                        PacketGuard::PacketGuard(local_ac);
                    /* try { // try from 0857d3d6 to 0857d49d has its CatchHandler @ 0857d4ae */
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_ac,1,1);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,4);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_ac,true);
                        sVar8 = InterfacePacketBuf::get_len((InterfacePacketBuf *)local_ac);
                        pvVar9 = (void *)InterfacePacketBuf::get_packet
                                                   ((InterfacePacketBuf *)local_ac,0);
                        write(local_2c,pvVar9,sVar8);
                        close(local_2c);
                        cMyTrace::cMyTrace(local_40,"virtual void AcceptThread::dispatch(void*)",
                                           0x277,0);
                        cMyTrace::operator()
                                  (local_40,"[ACCEPT] fail create user(Curr Session : %d)",local_1c)
                        ;
                        PacketGuard::~PacketGuard(local_ac);
                      }
                      else {
                        CUser::InitOnAccept(local_64,local_2c);
                        CUser::set_public_ip_address(local_64,local_90._4_4_);
                        Mutex::lock((Mutex *)GlobalData::s_accept_lock);
                        std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::push
                                  ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                                   GlobalData::s_accept_que,&local_64);
                        Mutex::unlock((Mutex *)GlobalData::s_accept_lock);
                      }
                    }
                    else {
                      PacketBuf::PacketBuf(aPStack_17460);
                    /* try { // try from 0857d29b to 0857d362 has its CatchHandler @ 0857d376 */
                      PacketBuf::put_header(aPStack_17460,1,1);
                      PacketBuf::put_byte(aPStack_17460,0);
                      PacketBuf::put_byte(aPStack_17460,4);
                      PacketBuf::finalize(aPStack_17460,true);
                      sVar8 = PacketBuf::get_len(aPStack_17460);
                      pvVar9 = (void *)PacketBuf::get_packet(aPStack_17460,0);
                      write(local_2c,pvVar9,sVar8);
                      close(local_2c);
                      cMyTrace::cMyTrace(local_50,"virtual void AcceptThread::dispatch(void*)",0x230
                                         ,0);
                      cMyTrace::operator()
                                (local_50,
                                 "[ACCEPT DENY] ProhibitUserConnect Signal STATE(Curr Session : %d)"
                                 ,local_1c);
                      PacketBuf::~PacketBuf(aPStack_17460);
                    }
                    goto LAB_0857d526;
                  }
                  close(local_2c);
                }
              }
              goto LAB_0857d526;
            }
          }
          else {
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void AcceptThread::dispatch(void*)",0x1ae,
                       "Fail to SetNonBlock AcceptThread.");
          }
        }
      }
    }
    close(local_30);
  }
  return;
}

```

---

## ~AcceptThread

```asm
// === 0857cc0c AcceptThread::~AcceptThread  [0x0857cc0c-0x857cc3b] ===
 857cc0c:	55                   	push   %ebp
 857cc0d:	89 e5                	mov    %esp,%ebp
 857cc0f:	83 ec 18             	sub    $0x18,%esp
 857cc12:	8b 45 08             	mov    0x8(%ebp),%eax
 857cc15:	c7 00 b0 90 ca 08    	movl   $0x8ca90b0,(%eax)
 857cc1b:	8b 45 08             	mov    0x8(%ebp),%eax
 857cc1e:	89 04 24             	mov    %eax,(%esp)
 857cc21:	e8 20 3f 0b 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 857cc26:	b8 00 00 00 00       	mov    $0x0,%eax
 857cc2b:	84 c0                	test   %al,%al
 857cc2d:	74 0b                	je     857cc3a <_ZN12AcceptThreadD1Ev+0x2e>
 857cc2f:	8b 45 08             	mov    0x8(%ebp),%eax
 857cc32:	89 04 24             	mov    %eax,(%esp)
 857cc35:	e8 b6 78 1a 00       	call   87244f0 <_ZdlPv>
 857cc3a:	c9                   	leave
 857cc3b:	c3                   	ret

```

```c
// AcceptThread::~AcceptThread @ 0x857cc0c

/* WARNING: Removing unreachable block (ram,0x0857cc2f) */
/* AcceptThread::~AcceptThread() */

void __thiscall AcceptThread::~AcceptThread(AcceptThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca90b0;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}

```

---

## ~AcceptThread_0857cc3c

```asm
// === 0857cc3c AcceptThread::~AcceptThread  [0x0857cc3c-0x857cc59] ===
 857cc3c:	55                   	push   %ebp
 857cc3d:	89 e5                	mov    %esp,%ebp
 857cc3f:	83 ec 18             	sub    $0x18,%esp
 857cc42:	8b 45 08             	mov    0x8(%ebp),%eax
 857cc45:	89 04 24             	mov    %eax,(%esp)
 857cc48:	e8 bf ff ff ff       	call   857cc0c <_ZN12AcceptThreadD1Ev>
 857cc4d:	8b 45 08             	mov    0x8(%ebp),%eax
 857cc50:	89 04 24             	mov    %eax,(%esp)
 857cc53:	e8 98 78 1a 00       	call   87244f0 <_ZdlPv>
 857cc58:	c9                   	leave
 857cc59:	c3                   	ret

```

```c
// AcceptThread::~AcceptThread @ 0x857cc3c

/* AcceptThread::~AcceptThread() */

void __thiscall AcceptThread::~AcceptThread(AcceptThread *this)

{
  ~AcceptThread(this);
  operator_delete(this);
  return;
}

```


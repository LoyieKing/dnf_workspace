# Inter_DisconnectMonitorServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d9c8e Inter_DisconnectMonitorServer::dispatch_sig  [0x084d9c8e-0x84d9cbd] ===
 84d9c8e:	55                   	push   %ebp
 84d9c8f:	89 e5                	mov    %esp,%ebp
 84d9c91:	83 ec 28             	sub    $0x28,%esp
 84d9c94:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9c97:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d9c9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9c9d:	8b 00                	mov    (%eax),%eax
 84d9c9f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d9ca3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9caa:	00 
 84d9cab:	c7 04 24 1e 00 00 00 	movl   $0x1e,(%esp)
 84d9cb2:	e8 e9 e4 15 00       	call   86381a0 <_ZN25TimerConnectMonitorServer15registNextTimerElii>
 84d9cb7:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9cbc:	c9                   	leave
 84d9cbd:	c3                   	ret

```

```c
// Inter_DisconnectMonitorServer::dispatch_sig @ 0x84d9c8e

/* Inter_DisconnectMonitorServer::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DisconnectMonitorServer::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  TimerConnectMonitorServer::registNextTimer(0x1e,0,*(int *)param_3);
  return 0;
}

```


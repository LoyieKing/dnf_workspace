# DisPatcher_Cera

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081fd360 DisPatcher_Cera::dispatch_sig  [0x081fd360-0x81fd395] ===
 81fd360:	55                   	push   %ebp
 81fd361:	89 e5                	mov    %esp,%ebp
 81fd363:	83 ec 18             	sub    $0x18,%esp
 81fd366:	a1 34 f7 41 09       	mov    0x941f734,%eax
 81fd36b:	8b 00                	mov    (%eax),%eax
 81fd36d:	83 c0 2c             	add    $0x2c,%eax
 81fd370:	8b 08                	mov    (%eax),%ecx
 81fd372:	a1 34 f7 41 09       	mov    0x941f734,%eax
 81fd377:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fd37a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fd37e:	89 04 24             	mov    %eax,(%esp)
 81fd381:	ff d1                	call   *%ecx
 81fd383:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd386:	89 04 24             	mov    %eax,(%esp)
 81fd389:	e8 94 33 45 00       	call   8650722 <_ZN5CUser11LoadMileageEv>
 81fd38e:	b8 00 00 00 00       	mov    $0x0,%eax
 81fd393:	c9                   	leave
 81fd394:	c3                   	ret
 81fd395:	90                   	nop

```

```c
// DisPatcher_Cera::dispatch_sig @ 0x81fd360

/* DisPatcher_Cera::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_Cera::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_2);
  CUser::LoadMileage((CUser *)param_2);
  return 0;
}

```


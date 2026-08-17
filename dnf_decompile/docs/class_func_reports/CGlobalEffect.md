# CGlobalEffect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## makeNotifyInfo

```asm
// === 084b7880 CGlobalEffect::makeNotifyInfo  [0x084b7880-0x84b7931] ===
 84b7880:	55                   	push   %ebp
 84b7881:	89 e5                	mov    %esp,%ebp
 84b7883:	83 ec 28             	sub    $0x28,%esp
 84b7886:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7889:	8b 00                	mov    (%eax),%eax
 84b788b:	89 c2                	mov    %eax,%edx
 84b788d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7890:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7894:	89 04 24             	mov    %eax,(%esp)
 84b7897:	e8 a0 40 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b789c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b789f:	d9 40 04             	flds   0x4(%eax)
 84b78a2:	d9 05 b0 54 c8 08    	flds   0x8c854b0
 84b78a8:	de c9                	fmulp  %st,%st(1)
 84b78aa:	d9 7d f6             	fnstcw -0xa(%ebp)
 84b78ad:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 84b78b1:	b4 0c                	mov    $0xc,%ah
 84b78b3:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 84b78b7:	d9 6d f4             	fldcw  -0xc(%ebp)
 84b78ba:	db 5d f0             	fistpl -0x10(%ebp)
 84b78bd:	d9 6d f6             	fldcw  -0xa(%ebp)
 84b78c0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84b78c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b78c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b78ca:	89 04 24             	mov    %eax,(%esp)
 84b78cd:	e8 6a 40 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b78d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b78d5:	83 c0 08             	add    $0x8,%eax
 84b78d8:	89 04 24             	mov    %eax,(%esp)
 84b78db:	e8 d0 6a bc ff       	call   807e3b0 <strlen@plt>
 84b78e0:	89 c2                	mov    %eax,%edx
 84b78e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b78e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b78e9:	89 04 24             	mov    %eax,(%esp)
 84b78ec:	e8 4b 40 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b78f1:	8b 45 08             	mov    0x8(%ebp),%eax
 84b78f4:	83 c0 08             	add    $0x8,%eax
 84b78f7:	89 04 24             	mov    %eax,(%esp)
 84b78fa:	e8 b1 6a bc ff       	call   807e3b0 <strlen@plt>
 84b78ff:	89 c2                	mov    %eax,%edx
 84b7901:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7904:	8d 48 08             	lea    0x8(%eax),%ecx
 84b7907:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b790a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b790e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84b7912:	89 04 24             	mov    %eax,(%esp)
 84b7915:	e8 56 3e d7 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84b791a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b791d:	8b 50 28             	mov    0x28(%eax),%edx
 84b7920:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7923:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b7927:	89 04 24             	mov    %eax,(%esp)
 84b792a:	e8 0d 40 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b792f:	c9                   	leave
 84b7930:	c3                   	ret
 84b7931:	90                   	nop

```

```c
// CGlobalEffect::makeNotifyInfo @ 0x84b7880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CGlobalEffect::makeNotifyInfo(PacketGuard&) const */

void __thiscall CGlobalEffect::makeNotifyInfo(CGlobalEffect *this,PacketGuard *param_1)

{
  size_t sVar1;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_int
            ((InterfacePacketBuf *)param_1,(int)ROUND(_DAT_08c854b0 * *(float *)(this + 4)));
  sVar1 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar1);
  sVar1 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(this + 8),sVar1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  return;
}

```


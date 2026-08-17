# TimerRequestExit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08638f6a TimerRequestExit::dispatch_sig  [0x08638f6a-0x8638fff] ===
 8638f6a:	55                   	push   %ebp
 8638f6b:	89 e5                	mov    %esp,%ebp
 8638f6d:	83 ec 28             	sub    $0x28,%esp
 8638f70:	e8 19 32 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8638f75:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8638f7c:	00 
 8638f7d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8638f80:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638f84:	89 04 24             	mov    %eax,(%esp)
 8638f87:	e8 18 b8 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8638f8c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638f8f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8638f93:	75 07                	jne    8638f9c <_ZN16TimerRequestExit12dispatch_sigEiij+0x32>
 8638f95:	b8 00 00 00 00       	mov    $0x0,%eax
 8638f9a:	eb 61                	jmp    8638ffd <_ZN16TimerRequestExit12dispatch_sigEiij+0x93>
 8638f9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638f9f:	89 04 24             	mov    %eax,(%esp)
 8638fa2:	e8 8b 74 ae ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8638fa7:	85 c0                	test   %eax,%eax
 8638fa9:	0f 94 c0             	sete   %al
 8638fac:	84 c0                	test   %al,%al
 8638fae:	74 07                	je     8638fb7 <_ZN16TimerRequestExit12dispatch_sigEiij+0x4d>
 8638fb0:	b8 00 00 00 00       	mov    $0x0,%eax
 8638fb5:	eb 46                	jmp    8638ffd <_ZN16TimerRequestExit12dispatch_sigEiij+0x93>
 8638fb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638fba:	89 04 24             	mov    %eax,(%esp)
 8638fbd:	e8 8c 2c a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8638fc2:	8b 55 10             	mov    0x10(%ebp),%edx
 8638fc5:	39 d0                	cmp    %edx,%eax
 8638fc7:	0f 95 c0             	setne  %al
 8638fca:	84 c0                	test   %al,%al
 8638fcc:	74 07                	je     8638fd5 <_ZN16TimerRequestExit12dispatch_sigEiij+0x6b>
 8638fce:	b8 00 00 00 00       	mov    $0x0,%eax
 8638fd3:	eb 28                	jmp    8638ffd <_ZN16TimerRequestExit12dispatch_sigEiij+0x93>
 8638fd5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8638fdc:	00 
 8638fdd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8638fe4:	00 
 8638fe5:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 8638fec:	00 
 8638fed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638ff0:	89 04 24             	mov    %eax,(%esp)
 8638ff3:	e8 fc f9 00 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 8638ff8:	b8 01 00 00 00       	mov    $0x1,%eax
 8638ffd:	c9                   	leave
 8638ffe:	c3                   	ret
 8638fff:	90                   	nop

```

```c
// TimerRequestExit::dispatch_sig @ 0x8638f6a

/* TimerRequestExit::dispatch_sig(int, int, unsigned int) */

undefined4 TimerRequestExit::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  CUser *this;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = G_CGameManager();
  this = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (this == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      if (uVar3 == param_3) {
        CUser::DisConnSig(this,0x2f,1,0);
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```


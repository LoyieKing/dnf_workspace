# yaSSL__RandomPool

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Fill

```asm
// === 08798fc0 yaSSL::RandomPool::Fill  [0x08798fc0-0x8798fff] ===
 8798fc0:	55                   	push   %ebp
 8798fc1:	89 e5                	mov    %esp,%ebp
 8798fc3:	53                   	push   %ebx
 8798fc4:	83 ec 14             	sub    $0x14,%esp
 8798fc7:	8b 45 10             	mov    0x10(%ebp),%eax
 8798fca:	e8 29 9e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798fcf:	81 c3 c9 3b bd 00    	add    $0xbd3bc9,%ebx
 8798fd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8798fd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8798fdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8798fe0:	8b 45 08             	mov    0x8(%ebp),%eax
 8798fe3:	8b 00                	mov    (%eax),%eax
 8798fe5:	89 04 24             	mov    %eax,(%esp)
 8798fe8:	e8 f3 e8 fc ff       	call   87678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>
 8798fed:	83 c4 14             	add    $0x14,%esp
 8798ff0:	5b                   	pop    %ebx
 8798ff1:	5d                   	pop    %ebp
 8798ff2:	c3                   	ret
 8798ff3:	90                   	nop
 8798ff4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798ffa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RandomPool::Fill @ 0x8798fc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const */

void __thiscall yaSSL::RandomPool::Fill(RandomPool *this,uchar *param_1,uint param_2)

{
  TaoCrypt::RandomNumberGenerator::GenerateBlock(*(RandomNumberGenerator **)this,param_1,param_2);
  return;
}

```

---

## GetError

```asm
// === 087985b0 yaSSL::RandomPool::GetError  [0x087985b0-0x87985bf] ===
 87985b0:	55                   	push   %ebp
 87985b1:	89 e5                	mov    %esp,%ebp
 87985b3:	8b 45 08             	mov    0x8(%ebp),%eax
 87985b6:	5d                   	pop    %ebp
 87985b7:	8b 00                	mov    (%eax),%eax
 87985b9:	8b 40 04             	mov    0x4(%eax),%eax
 87985bc:	c3                   	ret
 87985bd:	90                   	nop
 87985be:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::RandomPool::GetError @ 0x87985b0

/* yaSSL::RandomPool::GetError() const */

undefined4 __thiscall yaSSL::RandomPool::GetError(RandomPool *this)

{
  return *(undefined4 *)(*(int *)this + 4);
}

```

---

## RandomPool

```asm
// === 08799040 yaSSL::RandomPool::RandomPool  [0x08799040-0x879908f] ===
 8799040:	55                   	push   %ebp
 8799041:	89 e5                	mov    %esp,%ebp
 8799043:	83 ec 18             	sub    $0x18,%esp
 8799046:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8799049:	89 75 fc             	mov    %esi,-0x4(%ebp)
 879904c:	e8 a7 9d f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799051:	81 c3 47 3b bd 00    	add    $0xbd3b47,%ebx
 8799057:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879905c:	c7 04 24 0c 01 00 00 	movl   $0x10c,(%esp)
 8799063:	e8 38 7c fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8799068:	89 c6                	mov    %eax,%esi
 879906a:	89 04 24             	mov    %eax,(%esp)
 879906d:	e8 0e e9 fc ff       	call   8767980 <_ZN8TaoCrypt21RandomNumberGeneratorC1Ev>
 8799072:	8b 45 08             	mov    0x8(%ebp),%eax
 8799075:	89 30                	mov    %esi,(%eax)
 8799077:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 879907a:	8b 75 fc             	mov    -0x4(%ebp),%esi
 879907d:	89 ec                	mov    %ebp,%esp
 879907f:	5d                   	pop    %ebp
 8799080:	c3                   	ret
 8799081:	90                   	nop
 8799082:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799089:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RandomPool::RandomPool @ 0x8799040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RandomPool::RandomPool() */

void __thiscall yaSSL::RandomPool::RandomPool(RandomPool *this)

{
  RandomNumberGenerator *this_00;
  
  this_00 = operator_new(0x10c,0);
  TaoCrypt::RandomNumberGenerator::RandomNumberGenerator(this_00);
  *(RandomNumberGenerator **)this = this_00;
  return;
}

```

---

## ~RandomPool

```asm
// === 08799000 yaSSL::RandomPool::~RandomPool  [0x08799000-0x879903f] ===
 8799000:	55                   	push   %ebp
 8799001:	89 e5                	mov    %esp,%ebp
 8799003:	83 ec 18             	sub    $0x18,%esp
 8799006:	8b 45 08             	mov    0x8(%ebp),%eax
 8799009:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 879900c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 879900f:	e8 e4 9d f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799014:	81 c3 84 3b bd 00    	add    $0xbd3b84,%ebx
 879901a:	8b 30                	mov    (%eax),%esi
 879901c:	85 f6                	test   %esi,%esi
 879901e:	74 08                	je     8799028 <_ZN5yaSSL10RandomPoolD1Ev+0x28>
 8799020:	89 34 24             	mov    %esi,(%esp)
 8799023:	e8 18 e8 fc ff       	call   8767840 <_ZN8TaoCrypt7OS_SeedD1Ev>
 8799028:	89 34 24             	mov    %esi,(%esp)
 879902b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8799030:	e8 eb 77 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8799035:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8799038:	8b 75 fc             	mov    -0x4(%ebp),%esi
 879903b:	89 ec                	mov    %ebp,%esp
 879903d:	5d                   	pop    %ebp
 879903e:	c3                   	ret
 879903f:	90                   	nop

```

```c
// yaSSL::RandomPool::~RandomPool @ 0x8799000

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RandomPool::~RandomPool() */

void __thiscall yaSSL::RandomPool::~RandomPool(RandomPool *this)

{
  OS_Seed *this_00;
  
  this_00 = *(OS_Seed **)this;
  if (this_00 != (OS_Seed *)0x0) {
    TaoCrypt::OS_Seed::~OS_Seed(this_00);
  }
  operator_delete(this_00,0);
  return;
}

```


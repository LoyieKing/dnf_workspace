# TaoCrypt__Signer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Signer

```asm
// === 08753fa0 TaoCrypt::Signer::Signer  [0x08753fa0-0x875403f] ===
 8753fa0:	55                   	push   %ebp
 8753fa1:	89 e5                	mov    %esp,%ebp
 8753fa3:	83 ec 38             	sub    $0x38,%esp
 8753fa6:	8b 45 10             	mov    0x10(%ebp),%eax
 8753fa9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8753fac:	e8 47 ee fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753fb1:	81 c3 e7 8b c1 00    	add    $0xc18be7,%ebx
 8753fb7:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8753fba:	8b 7d 08             	mov    0x8(%ebp),%edi
 8753fbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8753fc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8753fc4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8753fc7:	8b 75 18             	mov    0x18(%ebp),%esi
 8753fca:	89 3c 24             	mov    %edi,(%esp)
 8753fcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8753fd1:	e8 6a ff ff ff       	call   8753f40 <_ZN8TaoCrypt9PublicKeyC1EPKhj>
 8753fd6:	8b 45 14             	mov    0x14(%ebp),%eax
 8753fd9:	89 04 24             	mov    %eax,(%esp)
 8753fdc:	e8 cf a3 92 ff       	call   807e3b0 <strlen@plt>
 8753fe1:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8753fe4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8753fe8:	89 c2                	mov    %eax,%edx
 8753fea:	8d 47 08             	lea    0x8(%edi),%eax
 8753fed:	89 54 24 08          	mov    %edx,0x8(%esp)
 8753ff1:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8753ff4:	89 04 24             	mov    %eax,(%esp)
 8753ff7:	e8 a4 98 92 ff       	call   807d8a0 <memcpy@plt>
 8753ffc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8753fff:	8d 87 08 02 00 00    	lea    0x208(%edi),%eax
 8754005:	c6 44 17 08 00       	movb   $0x0,0x8(%edi,%edx,1)
 875400a:	8b 16                	mov    (%esi),%edx
 875400c:	89 97 08 02 00 00    	mov    %edx,0x208(%edi)
 8754012:	8b 56 04             	mov    0x4(%esi),%edx
 8754015:	89 50 04             	mov    %edx,0x4(%eax)
 8754018:	8b 56 08             	mov    0x8(%esi),%edx
 875401b:	89 50 08             	mov    %edx,0x8(%eax)
 875401e:	8b 56 0c             	mov    0xc(%esi),%edx
 8754021:	89 50 0c             	mov    %edx,0xc(%eax)
 8754024:	8b 56 10             	mov    0x10(%esi),%edx
 8754027:	89 50 10             	mov    %edx,0x10(%eax)
 875402a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875402d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8754030:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8754033:	89 ec                	mov    %ebp,%esp
 8754035:	5d                   	pop    %ebp
 8754036:	c3                   	ret
 8754037:	89 f6                	mov    %esi,%esi
 8754039:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Signer::Signer @ 0x8753fa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signer::Signer(unsigned char const*, unsigned int, char const*, unsigned char const*)
    */

void __thiscall
TaoCrypt::Signer::Signer(Signer *this,uchar *param_1,uint param_2,char *param_3,uchar *param_4)

{
  size_t __n;
  
  PublicKey::PublicKey((PublicKey *)this,param_1,param_2);
  __n = strlen(param_3);
  memcpy(this + 8,param_3,__n);
  this[__n + 8] = (Signer)0x0;
  *(undefined4 *)(this + 0x208) = *(undefined4 *)param_4;
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(this + 0x210) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(this + 0x214) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(this + 0x218) = *(undefined4 *)(param_4 + 0x10);
  return;
}

```

---

## ~Signer

```asm
// === 08754230 TaoCrypt::Signer::~Signer  [0x08754230-0x875425f] ===
 8754230:	55                   	push   %ebp
 8754231:	89 e5                	mov    %esp,%ebp
 8754233:	53                   	push   %ebx
 8754234:	83 ec 14             	sub    $0x14,%esp
 8754237:	8b 45 08             	mov    0x8(%ebp),%eax
 875423a:	e8 b9 eb fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875423f:	81 c3 59 89 c1 00    	add    $0xc18959,%ebx
 8754245:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875424a:	8b 00                	mov    (%eax),%eax
 875424c:	89 04 24             	mov    %eax,(%esp)
 875424f:	e8 cc 34 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8754254:	83 c4 14             	add    $0x14,%esp
 8754257:	5b                   	pop    %ebx
 8754258:	5d                   	pop    %ebp
 8754259:	c3                   	ret
 875425a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::Signer::~Signer @ 0x8754230

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signer::~Signer() */

void __thiscall TaoCrypt::Signer::~Signer(Signer *this)

{
  operator_delete__(*(undefined4 *)this,0);
  return;
}

```


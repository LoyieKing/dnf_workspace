# TaoCrypt__P4Optimized

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Add

```asm
// === 0875b570 TaoCrypt::P4Optimized::Add  [0x0875b570-0x875b596] ===
 875b570:	55                   	push   %ebp
 875b571:	89 e5                	mov    %esp,%ebp
 875b573:	83 ec 08             	sub    $0x8,%esp
 875b576:	89 34 24             	mov    %esi,(%esp)
 875b579:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b57c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875b580:	8b 75 14             	mov    0x14(%ebp),%esi
 875b583:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875b586:	53                   	push   %ebx
 875b587:	8b 5d 10             	mov    0x10(%ebp),%ebx
 875b58a:	55                   	push   %ebp
 875b58b:	31 c0                	xor    %eax,%eax
 875b58d:	f7 de                	neg    %esi
 875b58f:	74 44                	je     875b5d5 <loopendAddP4>
 875b591:	8b 3a                	mov    (%edx),%edi
 875b593:	8b 2b                	mov    (%ebx),%ebp
 875b595:	eb 11                	jmp    875b5a8 <carry1AddP4>

```

```c
// TaoCrypt::P4Optimized::Add @ 0x875b570

/* TaoCrypt::P4Optimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
    */

void TaoCrypt::P4Optimized::Add(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  iVar4 = -param_4;
  if (iVar4 != 0) {
    uVar5 = *param_2;
    uVar3 = *param_3;
    while( true ) {
      *param_1 = uVar5 + uVar3;
      if (CARRY4(uVar5,uVar3)) {
        uVar2 = 1;
      }
      puVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      uVar5 = param_2[1] + uVar2;
      if (!CARRY4(param_2[1],uVar2)) {
        uVar2 = 0;
      }
      if (CARRY4(uVar5,*puVar1)) {
        uVar2 = 1;
      }
      param_1[1] = uVar5 + *puVar1;
      iVar4 = iVar4 + 2;
      if (iVar4 == 0) break;
      puVar1 = param_2 + 2;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar3 = *param_3;
      uVar5 = *puVar1 + uVar2;
      if (!CARRY4(*puVar1,uVar2)) {
        uVar2 = 0;
      }
    }
  }
  return;
}

```

---

## Subtract

```asm
// === 0875b5f0 TaoCrypt::P4Optimized::Subtract  [0x0875b5f0-0x875b616] ===
 875b5f0:	55                   	push   %ebp
 875b5f1:	89 e5                	mov    %esp,%ebp
 875b5f3:	83 ec 08             	sub    $0x8,%esp
 875b5f6:	89 34 24             	mov    %esi,(%esp)
 875b5f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b5fc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875b600:	8b 75 14             	mov    0x14(%ebp),%esi
 875b603:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875b606:	53                   	push   %ebx
 875b607:	8b 5d 10             	mov    0x10(%ebp),%ebx
 875b60a:	55                   	push   %ebp
 875b60b:	31 c0                	xor    %eax,%eax
 875b60d:	f7 de                	neg    %esi
 875b60f:	74 44                	je     875b655 <loopendSubP4>
 875b611:	8b 3a                	mov    (%edx),%edi
 875b613:	8b 2b                	mov    (%ebx),%ebp
 875b615:	eb 11                	jmp    875b628 <carry1SubP4>

```

```c
// TaoCrypt::P4Optimized::Subtract @ 0x875b5f0

/* TaoCrypt::P4Optimized::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

void TaoCrypt::P4Optimized::Subtract(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  iVar4 = -param_4;
  if (iVar4 != 0) {
    uVar5 = *param_2;
    uVar3 = *param_3;
    while( true ) {
      *param_1 = uVar5 - uVar3;
      if (uVar5 < uVar3) {
        uVar2 = 1;
      }
      puVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      uVar5 = param_2[1] - uVar2;
      if (uVar2 <= param_2[1]) {
        uVar2 = 0;
      }
      if (uVar5 < *puVar1) {
        uVar2 = 1;
      }
      param_1[1] = uVar5 - *puVar1;
      iVar4 = iVar4 + 2;
      if (iVar4 == 0) break;
      puVar1 = param_2 + 2;
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      uVar3 = *param_3;
      uVar5 = *puVar1 - uVar2;
      if (uVar2 <= *puVar1) {
        uVar2 = 0;
      }
    }
  }
  return;
}

```


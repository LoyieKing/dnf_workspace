# CStatisticContainer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## IncreaseQuantity

```asm
// === 0860e7f8 CStatisticContainer::IncreaseQuantity  [0x0860e7f8-0x860e837] ===
 860e7f8:	55                   	push   %ebp
 860e7f9:	89 e5                	mov    %esp,%ebp
 860e7fb:	83 ec 28             	sub    $0x28,%esp
 860e7fe:	8b 45 08             	mov    0x8(%ebp),%eax
 860e801:	8d 50 04             	lea    0x4(%eax),%edx
 860e804:	8d 45 0c             	lea    0xc(%ebp),%eax
 860e807:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e80b:	89 14 24             	mov    %edx,(%esp)
 860e80e:	e8 99 4c b8 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 860e813:	8b 00                	mov    (%eax),%eax
 860e815:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860e818:	8b 45 08             	mov    0x8(%ebp),%eax
 860e81b:	8d 50 04             	lea    0x4(%eax),%edx
 860e81e:	8d 45 0c             	lea    0xc(%ebp),%eax
 860e821:	89 44 24 04          	mov    %eax,0x4(%esp)
 860e825:	89 14 24             	mov    %edx,(%esp)
 860e828:	e8 7f 4c b8 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 860e82d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860e831:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860e834:	89 10                	mov    %edx,(%eax)
 860e836:	c9                   	leave
 860e837:	c3                   	ret

```

```c
// CStatisticContainer::IncreaseQuantity @ 0x860e7f8

/* CStatisticContainer::IncreaseQuantity(int) */

void CStatisticContainer::IncreaseQuantity(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(param_1 + 4),(int *)&stack0x00000008);
  iVar1 = *piVar2;
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(param_1 + 4),(int *)&stack0x00000008);
  *piVar2 = iVar1 + 1;
  return;
}

```


# reseal_table_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## get_oneshot_reseal_cost

```asm
// === 08900be0 reseal_table_t::get_oneshot_reseal_cost  [0x08900be0-0x8900c25] ===
 8900be0:	55                   	push   %ebp
 8900be1:	89 e5                	mov    %esp,%ebp
 8900be3:	83 ec 0c             	sub    $0xc,%esp
 8900be6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8900be9:	8b 55 10             	mov    0x10(%ebp),%edx
 8900bec:	8b 45 14             	mov    0x14(%ebp),%eax
 8900bef:	88 4d fc             	mov    %cl,-0x4(%ebp)
 8900bf2:	88 55 f8             	mov    %dl,-0x8(%ebp)
 8900bf5:	88 45 f4             	mov    %al,-0xc(%ebp)
 8900bf8:	80 7d f8 00          	cmpb   $0x0,-0x8(%ebp)
 8900bfc:	75 07                	jne    8900c05 <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh+0x25>
 8900bfe:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8900c03:	eb 1f                	jmp    8900c24 <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh+0x44>
 8900c05:	80 7d fc 05          	cmpb   $0x5,-0x4(%ebp)
 8900c09:	76 07                	jbe    8900c12 <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh+0x32>
 8900c0b:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 8900c10:	eb 12                	jmp    8900c24 <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh+0x44>
 8900c12:	80 7d f8 63          	cmpb   $0x63,-0x8(%ebp)
 8900c16:	76 07                	jbe    8900c1f <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh+0x3f>
 8900c18:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8900c1d:	eb 05                	jmp    8900c24 <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh+0x44>
 8900c1f:	b8 01 00 00 00       	mov    $0x1,%eax
 8900c24:	c9                   	leave
 8900c25:	c3                   	ret

```

```c
// reseal_table_t::get_oneshot_reseal_cost @ 0x8900be0

/* reseal_table_t::get_oneshot_reseal_cost(unsigned char, unsigned char, unsigned char) */

undefined4 reseal_table_t::get_oneshot_reseal_cost(uchar param_1,uchar param_2,uchar param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < 6) {
    if (param_3 < 100) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

```

---

## get_reseal_cost

```asm
// === 08900b02 reseal_table_t::get_reseal_cost  [0x08900b02-0x8900bdf] ===
 8900b02:	55                   	push   %ebp
 8900b03:	89 e5                	mov    %esp,%ebp
 8900b05:	83 ec 38             	sub    $0x38,%esp
 8900b08:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8900b0b:	8b 55 10             	mov    0x10(%ebp),%edx
 8900b0e:	8b 45 14             	mov    0x14(%ebp),%eax
 8900b11:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 8900b14:	88 55 e0             	mov    %dl,-0x20(%ebp)
 8900b17:	88 45 dc             	mov    %al,-0x24(%ebp)
 8900b1a:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 8900b1e:	75 0a                	jne    8900b2a <_ZN14reseal_table_t15get_reseal_costEhhh+0x28>
 8900b20:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8900b25:	e9 b3 00 00 00       	jmp    8900bdd <_ZN14reseal_table_t15get_reseal_costEhhh+0xdb>
 8900b2a:	80 7d e4 05          	cmpb   $0x5,-0x1c(%ebp)
 8900b2e:	76 0a                	jbe    8900b3a <_ZN14reseal_table_t15get_reseal_costEhhh+0x38>
 8900b30:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 8900b35:	e9 a3 00 00 00       	jmp    8900bdd <_ZN14reseal_table_t15get_reseal_costEhhh+0xdb>
 8900b3a:	80 7d e0 63          	cmpb   $0x63,-0x20(%ebp)
 8900b3e:	76 0a                	jbe    8900b4a <_ZN14reseal_table_t15get_reseal_costEhhh+0x48>
 8900b40:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 8900b45:	e9 93 00 00 00       	jmp    8900bdd <_ZN14reseal_table_t15get_reseal_costEhhh+0xdb>
 8900b4a:	80 7d dc 06          	cmpb   $0x6,-0x24(%ebp)
 8900b4e:	76 0a                	jbe    8900b5a <_ZN14reseal_table_t15get_reseal_costEhhh+0x58>
 8900b50:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 8900b55:	e9 83 00 00 00       	jmp    8900bdd <_ZN14reseal_table_t15get_reseal_costEhhh+0xdb>
 8900b5a:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 8900b5e:	8d 48 ff             	lea    -0x1(%eax),%ecx
 8900b61:	ba 67 66 66 66       	mov    $0x66666667,%edx
 8900b66:	89 c8                	mov    %ecx,%eax
 8900b68:	f7 ea                	imul   %edx
 8900b6a:	c1 fa 02             	sar    $0x2,%edx
 8900b6d:	89 c8                	mov    %ecx,%eax
 8900b6f:	c1 f8 1f             	sar    $0x1f,%eax
 8900b72:	89 d1                	mov    %edx,%ecx
 8900b74:	29 c1                	sub    %eax,%ecx
 8900b76:	89 c8                	mov    %ecx,%eax
 8900b78:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8900b7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8900b7e:	89 04 24             	mov    %eax,(%esp)
 8900b81:	e8 dc 18 7e ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 8900b86:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8900b89:	0f 96 c0             	setbe  %al
 8900b8c:	84 c0                	test   %al,%al
 8900b8e:	74 11                	je     8900ba1 <_ZN14reseal_table_t15get_reseal_costEhhh+0x9f>
 8900b90:	8b 45 08             	mov    0x8(%ebp),%eax
 8900b93:	89 04 24             	mov    %eax,(%esp)
 8900b96:	e8 c7 18 7e ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 8900b9b:	83 e8 01             	sub    $0x1,%eax
 8900b9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8900ba1:	8b 45 08             	mov    0x8(%ebp),%eax
 8900ba4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8900ba7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8900bab:	89 04 24             	mov    %eax,(%esp)
 8900bae:	e8 b1 19 7e ff       	call   80e2564 <_ZNSt6vectorIjSaIjEEixEj>
 8900bb3:	8b 08                	mov    (%eax),%ecx
 8900bb5:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8900bb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8900bbc:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8900bc0:	89 ca                	mov    %ecx,%edx
 8900bc2:	0f af d0             	imul   %eax,%edx
 8900bc5:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 8900bc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8900bcc:	83 c1 08             	add    $0x8,%ecx
 8900bcf:	8b 4c 88 04          	mov    0x4(%eax,%ecx,4),%ecx
 8900bd3:	0f b6 45 dc          	movzbl -0x24(%ebp),%eax
 8900bd7:	0f af c1             	imul   %ecx,%eax
 8900bda:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8900bdd:	c9                   	leave
 8900bde:	c3                   	ret
 8900bdf:	90                   	nop

```

```c
// reseal_table_t::get_reseal_cost @ 0x8900b02

/* reseal_table_t::get_reseal_cost(unsigned char, unsigned char, unsigned char) */

int __thiscall
reseal_table_t::get_reseal_cost(reseal_table_t *this,uchar param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint local_10;
  
  if (param_2 == '\0') {
    iVar1 = -1;
  }
  else if (param_1 < 6) {
    if (param_2 < 100) {
      if (param_3 < 7) {
        local_10 = (int)(param_2 - 1) / 10;
        uVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
        if (uVar2 <= local_10) {
          iVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
          local_10 = iVar1 - 1;
        }
        piVar3 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)this,
                                   local_10);
        iVar1 = *piVar3 * *(int *)(this + (uint)param_1 * 4 + 0xc) +
                (uint)param_3 * *(int *)(this + (param_1 + 8) * 4 + 4);
      }
      else {
        iVar1 = -4;
      }
    }
    else {
      iVar1 = -3;
    }
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}

```


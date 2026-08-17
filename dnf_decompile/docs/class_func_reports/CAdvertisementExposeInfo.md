# CAdvertisementExposeInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## operator

```asm
// === 080fc998 CAdvertisementExposeInfo::operator  [0x080fc998-0x80fc9ab] ===
 80fc998:	55                   	push   %ebp
 80fc999:	89 e5                	mov    %esp,%ebp
 80fc99b:	83 ec 18             	sub    $0x18,%esp
 80fc99e:	c7 04 24 90 ea 3f 09 	movl   $0x93fea90,(%esp)
 80fc9a5:	e8 8e 16 00 00       	call   80fe038 <_ZN7MemPoolI24CAdvertisementExposeInfoE5allocEv>
 80fc9aa:	c9                   	leave
 80fc9ab:	c3                   	ret

```

```c
// CAdvertisementExposeInfo::operator @ 0x80fc998

/* CAdvertisementExposeInfo::operator new(unsigned int) */

void * __thiscall
CAdvertisementExposeInfo::operator_new(CAdvertisementExposeInfo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)MemPool<CAdvertisementExposeInfo>::alloc
                             ((MemPool<CAdvertisementExposeInfo> *)advertisementExposeInfoPool_);
  return pvVar1;
}

```

---

## operator_080fc9ac

```asm
// === 080fc9ac CAdvertisementExposeInfo::operator  [0x080fc9ac-0x80fc9cd] ===
 80fc9ac:	55                   	push   %ebp
 80fc9ad:	89 e5                	mov    %esp,%ebp
 80fc9af:	83 ec 18             	sub    $0x18,%esp
 80fc9b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fc9b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fc9b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80fc9bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fc9c0:	c7 04 24 90 ea 3f 09 	movl   $0x93fea90,(%esp)
 80fc9c7:	e8 bc 17 00 00       	call   80fe188 <_ZN7MemPoolI24CAdvertisementExposeInfoE4freeEPvj>
 80fc9cc:	c9                   	leave
 80fc9cd:	c3                   	ret

```

```c
// CAdvertisementExposeInfo::operator @ 0x80fc9ac

/* CAdvertisementExposeInfo::operator delete(void*, unsigned int) */

void CAdvertisementExposeInfo::operator_delete(void *param_1,uint param_2)

{
  MemPool<CAdvertisementExposeInfo>::free
            ((MemPool<CAdvertisementExposeInfo> *)advertisementExposeInfoPool_,param_1,param_2);
  return;
}

```

---

## operator_080fc9ce

```asm
// === 080fc9ce CAdvertisementExposeInfo::operator  [0x080fc9ce-0x80fc9e8] ===
 80fc9ce:	55                   	push   %ebp
 80fc9cf:	89 e5                	mov    %esp,%ebp
 80fc9d1:	83 ec 18             	sub    $0x18,%esp
 80fc9d4:	8b 45 08             	mov    0x8(%ebp),%eax
 80fc9d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fc9db:	c7 04 24 90 ea 3f 09 	movl   $0x93fea90,(%esp)
 80fc9e2:	e8 e7 17 00 00       	call   80fe1ce <_ZN7MemPoolI24CAdvertisementExposeInfoE4freeEPv>
 80fc9e7:	c9                   	leave
 80fc9e8:	c3                   	ret

```

```c
// CAdvertisementExposeInfo::operator @ 0x80fc9ce

/* CAdvertisementExposeInfo::operator delete(void*) */

void __thiscall
CAdvertisementExposeInfo::operator_delete(CAdvertisementExposeInfo *this,void *param_1)

{
  MemPool<CAdvertisementExposeInfo>::free
            ((MemPool<CAdvertisementExposeInfo> *)advertisementExposeInfoPool_,this);
  return;
}

```


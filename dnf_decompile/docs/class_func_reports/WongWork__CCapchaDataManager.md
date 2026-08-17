# WongWork__CCapchaDataManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## peekData

```asm
// === 08299f74 WongWork::CCapchaDataManager::peekData  [0x08299f74-0x8299f9f] ===
 8299f74:	55                   	push   %ebp
 8299f75:	89 e5                	mov    %esp,%ebp
 8299f77:	83 ec 18             	sub    $0x18,%esp
 8299f7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8299f7d:	89 04 24             	mov    %eax,(%esp)
 8299f80:	e8 9b 16 01 00       	call   82ab620 <_ZNKSt5dequeI22MSG_UDP_CAPCHA_CERTIFYSaIS0_EE4sizeEv>
 8299f85:	89 04 24             	mov    %eax,(%esp)
 8299f88:	e8 fa 7b 41 00       	call   86b1b87 <_Z12get_rand_inti>
 8299f8d:	89 c2                	mov    %eax,%edx
 8299f8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8299f92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299f96:	89 04 24             	mov    %eax,(%esp)
 8299f99:	e8 62 91 01 00       	call   82b3100 <_ZNSt5dequeI22MSG_UDP_CAPCHA_CERTIFYSaIS0_EE2atEj>
 8299f9e:	c9                   	leave
 8299f9f:	c3                   	ret

```

```c
// WongWork::CCapchaDataManager::peekData @ 0x8299f74

/* WongWork::CCapchaDataManager::peekData() */

void __thiscall WongWork::CCapchaDataManager::peekData(CCapchaDataManager *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::size
                    ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this);
  uVar2 = get_rand_int(iVar1);
  std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::at
            ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this,uVar2);
  return;
}

```

---

## push

```asm
// === 08299f3a WongWork::CCapchaDataManager::push  [0x08299f3a-0x8299f73] ===
 8299f3a:	55                   	push   %ebp
 8299f3b:	89 e5                	mov    %esp,%ebp
 8299f3d:	83 ec 18             	sub    $0x18,%esp
 8299f40:	8b 45 08             	mov    0x8(%ebp),%eax
 8299f43:	8b 55 0c             	mov    0xc(%ebp),%edx
 8299f46:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299f4a:	89 04 24             	mov    %eax,(%esp)
 8299f4d:	e8 fc 90 01 00       	call   82b304e <_ZNSt5dequeI22MSG_UDP_CAPCHA_CERTIFYSaIS0_EE9push_backERKS0_>
 8299f52:	8b 45 08             	mov    0x8(%ebp),%eax
 8299f55:	89 04 24             	mov    %eax,(%esp)
 8299f58:	e8 c3 16 01 00       	call   82ab620 <_ZNKSt5dequeI22MSG_UDP_CAPCHA_CERTIFYSaIS0_EE4sizeEv>
 8299f5d:	83 f8 28             	cmp    $0x28,%eax
 8299f60:	0f 97 c0             	seta   %al
 8299f63:	84 c0                	test   %al,%al
 8299f65:	74 0b                	je     8299f72 <_ZN8WongWork18CCapchaDataManager4pushERK22MSG_UDP_CAPCHA_CERTIFY+0x38>
 8299f67:	8b 45 08             	mov    0x8(%ebp),%eax
 8299f6a:	89 04 24             	mov    %eax,(%esp)
 8299f6d:	e8 3c 91 01 00       	call   82b30ae <_ZNSt5dequeI22MSG_UDP_CAPCHA_CERTIFYSaIS0_EE9pop_frontEv>
 8299f72:	c9                   	leave
 8299f73:	c3                   	ret

```

```c
// WongWork::CCapchaDataManager::push @ 0x8299f3a

/* WongWork::CCapchaDataManager::push(MSG_UDP_CAPCHA_CERTIFY const&) */

void __thiscall
WongWork::CCapchaDataManager::push(CCapchaDataManager *this,MSG_UDP_CAPCHA_CERTIFY *param_1)

{
  uint uVar1;
  
  std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::push_back
            ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this,param_1);
  uVar1 = std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::size
                    ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this);
  if (0x28 < uVar1) {
    std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::pop_front
              ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this);
  }
  return;
}

```


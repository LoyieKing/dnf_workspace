# CaptchaGen__ImageOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ImageOption

```asm
// === 080de988 CaptchaGen::ImageOption::ImageOption  [0x080de988-0x80dea16] ===
 80de988:	55                   	push   %ebp
 80de989:	89 e5                	mov    %esp,%ebp
 80de98b:	8b 45 08             	mov    0x8(%ebp),%eax
 80de98e:	c7 00 64 00 00 00    	movl   $0x64,(%eax)
 80de994:	8b 45 08             	mov    0x8(%ebp),%eax
 80de997:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 80de99e:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9a1:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
 80de9a8:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9ab:	ba cd cc 4c 3f       	mov    $0x3f4ccccd,%edx
 80de9b0:	89 50 0c             	mov    %edx,0xc(%eax)
 80de9b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9b6:	ba 66 66 a6 3f       	mov    $0x3fa66666,%edx
 80de9bb:	89 50 10             	mov    %edx,0x10(%eax)
 80de9be:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9c1:	ba 00 00 00 00       	mov    $0x0,%edx
 80de9c6:	89 50 14             	mov    %edx,0x14(%eax)
 80de9c9:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9cc:	ba 00 00 00 3f       	mov    $0x3f000000,%edx
 80de9d1:	89 50 18             	mov    %edx,0x18(%eax)
 80de9d4:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9d7:	c7 40 1c 08 00 00 00 	movl   $0x8,0x1c(%eax)
 80de9de:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9e1:	ba 66 66 66 3f       	mov    $0x3f666666,%edx
 80de9e6:	89 50 20             	mov    %edx,0x20(%eax)
 80de9e9:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9ec:	ba cd cc cc 3d       	mov    $0x3dcccccd,%edx
 80de9f1:	89 50 24             	mov    %edx,0x24(%eax)
 80de9f4:	8b 45 08             	mov    0x8(%ebp),%eax
 80de9f7:	ba 8f c2 f5 3d       	mov    $0x3df5c28f,%edx
 80de9fc:	89 50 28             	mov    %edx,0x28(%eax)
 80de9ff:	8b 45 08             	mov    0x8(%ebp),%eax
 80dea02:	ba 00 00 00 40       	mov    $0x40000000,%edx
 80dea07:	89 50 2c             	mov    %edx,0x2c(%eax)
 80dea0a:	8b 45 08             	mov    0x8(%ebp),%eax
 80dea0d:	ba 00 00 20 40       	mov    $0x40200000,%edx
 80dea12:	89 50 30             	mov    %edx,0x30(%eax)
 80dea15:	5d                   	pop    %ebp
 80dea16:	c3                   	ret

```

```c
// CaptchaGen::ImageOption::ImageOption @ 0x80de988

/* CaptchaGen::ImageOption::ImageOption() */

void __thiscall CaptchaGen::ImageOption::ImageOption(ImageOption *this)

{
  *(undefined4 *)this = 100;
  *(undefined4 *)(this + 4) = 3;
  *(undefined4 *)(this + 8) = 2;
  *(undefined4 *)(this + 0xc) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x10) = 0x3fa66666;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f000000;
  *(undefined4 *)(this + 0x1c) = 8;
  *(undefined4 *)(this + 0x20) = 0x3f666666;
  *(undefined4 *)(this + 0x24) = 0x3dcccccd;
  *(undefined4 *)(this + 0x28) = 0x3df5c28f;
  *(undefined4 *)(this + 0x2c) = 0x40000000;
  *(undefined4 *)(this + 0x30) = 0x40200000;
  return;
}

```


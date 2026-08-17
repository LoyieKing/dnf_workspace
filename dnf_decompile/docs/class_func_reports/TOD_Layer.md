# TOD_Layer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## TOD_Layer

```asm
// === 085fe7b4 TOD_Layer::TOD_Layer  [0x085fe7b4-0x85fe823] ===
 85fe7b4:	55                   	push   %ebp
 85fe7b5:	89 e5                	mov    %esp,%ebp
 85fe7b7:	53                   	push   %ebx
 85fe7b8:	83 ec 34             	sub    $0x34,%esp
 85fe7bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe7be:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 85fe7c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe7c5:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 85fe7c9:	66 89 10             	mov    %dx,(%eax)
 85fe7cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe7cf:	0f b7 00             	movzwl (%eax),%eax
 85fe7d2:	66 83 f8 64          	cmp    $0x64,%ax
 85fe7d6:	76 46                	jbe    85fe81e <_ZN9TOD_LayerC1Et+0x6a>
 85fe7d8:	0f b7 5d e4          	movzwl -0x1c(%ebp),%ebx
 85fe7dc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85fe7e3:	00 
 85fe7e4:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 85fe7eb:	00 
 85fe7ec:	c7 44 24 04 20 77 cd 	movl   $0x8cd7720,0x4(%esp)
 85fe7f3:	08 
 85fe7f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fe7f7:	89 04 24             	mov    %eax,(%esp)
 85fe7fa:	e8 19 0f f5 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85fe7ff:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85fe803:	c7 44 24 04 e0 68 cd 	movl   $0x8cd68e0,0x4(%esp)
 85fe80a:	08 
 85fe80b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fe80e:	89 04 24             	mov    %eax,(%esp)
 85fe811:	e8 72 0f f5 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85fe816:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe819:	66 c7 00 01 00       	movw   $0x1,(%eax)
 85fe81e:	83 c4 34             	add    $0x34,%esp
 85fe821:	5b                   	pop    %ebx
 85fe822:	5d                   	pop    %ebp
 85fe823:	c3                   	ret

```

```c
// TOD_Layer::TOD_Layer @ 0x85fe7b4

/* TOD_Layer::TOD_Layer(unsigned short) */

void __thiscall TOD_Layer::TOD_Layer(TOD_Layer *this,ushort param_1)

{
  cMyTrace local_1c [20];
  
  *(ushort *)this = param_1;
  if (100 < *(ushort *)this) {
    cMyTrace::cMyTrace(local_1c,"TOD_Layer::TOD_Layer(short unsigned int)",0x10,5);
    cMyTrace::operator()(local_1c,"@TOD: invalid layer setting : %d",(uint)param_1);
    *(undefined2 *)this = 1;
  }
  return;
}

```

---

## increaseLayer

```asm
// === 085fe824 TOD_Layer::increaseLayer  [0x085fe824-0x85fe851] ===
 85fe824:	55                   	push   %ebp
 85fe825:	89 e5                	mov    %esp,%ebp
 85fe827:	83 ec 18             	sub    $0x18,%esp
 85fe82a:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe82d:	0f b7 00             	movzwl (%eax),%eax
 85fe830:	8d 50 01             	lea    0x1(%eax),%edx
 85fe833:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe836:	66 89 10             	mov    %dx,(%eax)
 85fe839:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe83c:	0f b7 00             	movzwl (%eax),%eax
 85fe83f:	66 83 f8 64          	cmp    $0x64,%ax
 85fe843:	76 0b                	jbe    85fe850 <_ZN9TOD_Layer13increaseLayerEv+0x2c>
 85fe845:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe848:	89 04 24             	mov    %eax,(%esp)
 85fe84b:	e8 02 00 00 00       	call   85fe852 <_ZN9TOD_Layer10resetLayerEv>
 85fe850:	c9                   	leave
 85fe851:	c3                   	ret

```

```c
// TOD_Layer::increaseLayer @ 0x85fe824

/* TOD_Layer::increaseLayer() */

void __thiscall TOD_Layer::increaseLayer(TOD_Layer *this)

{
  *(short *)this = *(short *)this + 1;
  if (100 < *(ushort *)this) {
    resetLayer(this);
  }
  return;
}

```

---

## resetLayer

```asm
// === 085fe852 TOD_Layer::resetLayer  [0x085fe852-0x85fe85f] ===
 85fe852:	55                   	push   %ebp
 85fe853:	89 e5                	mov    %esp,%ebp
 85fe855:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe858:	66 c7 00 01 00       	movw   $0x1,(%eax)
 85fe85d:	5d                   	pop    %ebp
 85fe85e:	c3                   	ret
 85fe85f:	90                   	nop

```

```c
// TOD_Layer::resetLayer @ 0x85fe852

/* TOD_Layer::resetLayer() */

void __thiscall TOD_Layer::resetLayer(TOD_Layer *this)

{
  *(undefined2 *)this = 1;
  return;
}

```


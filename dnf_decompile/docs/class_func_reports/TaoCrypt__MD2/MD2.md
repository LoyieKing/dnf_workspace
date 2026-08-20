# MD2

`_ZN8TaoCrypt3MD2C1Ev`

`TaoCrypt::MD2::MD2()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD2` | `0x08765710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08765710  _ZN8TaoCrypt3MD2C1Ev
#           TaoCrypt::MD2::MD2()
# range [0x08765710, 0x0876597f]
08765710 +0x000:  push   %ebp
08765711 +0x001:  mov    %esp,%ebp
08765713 +0x003:  push   %esi
08765714 +0x004:  push   %ebx
08765715 +0x005:  call   08722df8 <__i686.get_pc_thunk.bx>
0876571a +0x00a:  add    $0xc0747e,%ebx
08765720 +0x010:  sub    $0x10,%esp
08765723 +0x013:  mov    0x8(%ebp),%esi
08765726 +0x016:  movl   $0x30,0x4(%esi)
0876572d +0x01d:  mov    -0x128(%ebx),%eax
08765733 +0x023:  add    $0x8,%eax
08765736 +0x026:  mov    %eax,(%esi)
08765738 +0x028:  movb   $0x0,0x4(%esp)
0876573d +0x02d:  movl   $0x30,(%esp)
08765744 +0x034:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08765749 +0x039:  mov    0x4(%esi),%edx
0876574c +0x03c:  mov    %eax,0x8(%esi)
0876574f +0x03f:  mov    %edx,0x8(%esp)
08765753 +0x043:  movl   $0x0,0x4(%esp)
0876575b +0x04b:  mov    %eax,(%esp)
0876575e +0x04e:  call   0807dcc0 <_init+0x5b8>
08765763 +0x053:  movl   $0x10,0x10(%esi)
0876576a +0x05a:  movb   $0x0,0x4(%esp)
0876576f +0x05f:  movl   $0x10,(%esp)
08765776 +0x066:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0876577b +0x06b:  mov    0x10(%esi),%edx
0876577e +0x06e:  mov    %eax,0x14(%esi)
08765781 +0x071:  mov    %edx,0x8(%esp)
08765785 +0x075:  movl   $0x0,0x4(%esp)
0876578d +0x07d:  mov    %eax,(%esp)
08765790 +0x080:  call   0807dcc0 <_init+0x5b8>
08765795 +0x085:  movl   $0x10,0x1c(%esi)
0876579c +0x08c:  movb   $0x0,0x4(%esp)
087657a1 +0x091:  movl   $0x10,(%esp)
087657a8 +0x098:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087657ad +0x09d:  mov    0x1c(%esi),%edx
087657b0 +0x0a0:  mov    %eax,0x20(%esi)
087657b3 +0x0a3:  mov    %edx,0x8(%esp)
087657b7 +0x0a7:  movl   $0x0,0x4(%esp)
087657bf +0x0af:  mov    %eax,(%esp)
087657c2 +0x0b2:  call   0807dcc0 <_init+0x5b8>
087657c7 +0x0b7:  mov    %esi,(%esp)
087657ca +0x0ba:  call   08764e50 <_ZN8TaoCrypt3MD24InitEv>  ; TaoCrypt::MD2::Init()
087657cf +0x0bf:  add    $0x10,%esp
087657d2 +0x0c2:  pop    %ebx
087657d3 +0x0c3:  pop    %esi
087657d4 +0x0c4:  pop    %ebp
087657d5 +0x0c5:  ret
087657d6 +0x0c6:  nop
087657d7 +0x0c7:  nop
087657d8 +0x0c8:  nop
087657d9 +0x0c9:  nop
087657da +0x0ca:  nop
087657db +0x0cb:  nop
087657dc +0x0cc:  nop
087657dd +0x0cd:  nop
087657de +0x0ce:  nop
087657df +0x0cf:  nop
087657e0 +0x0d0:  push   %ebp
087657e1 +0x0d1:  mov    $0x10,%eax
087657e6 +0x0d6:  mov    %esp,%ebp
087657e8 +0x0d8:  pop    %ebp
087657e9 +0x0d9:  ret
087657ea +0x0da:  nop
087657eb +0x0db:  nop
087657ec +0x0dc:  nop
087657ed +0x0dd:  nop
087657ee +0x0de:  nop
087657ef +0x0df:  nop
087657f0 +0x0e0:  push   %ebp
087657f1 +0x0e1:  mov    $0x10,%eax
087657f6 +0x0e6:  mov    %esp,%ebp
087657f8 +0x0e8:  pop    %ebp
087657f9 +0x0e9:  ret
087657fa +0x0ea:  nop
087657fb +0x0eb:  nop
087657fc +0x0ec:  nop
087657fd +0x0ed:  nop
087657fe +0x0ee:  nop
087657ff +0x0ef:  nop
08765800 +0x0f0:  push   %ebp
08765801 +0x0f1:  mov    %esp,%ebp
08765803 +0x0f3:  sub    $0x28,%esp
08765806 +0x0f6:  mov    %ebx,-0xc(%ebp)
08765809 +0x0f9:  call   08722df8 <__i686.get_pc_thunk.bx>
0876580e +0x0fe:  add    $0xc0738a,%ebx
08765814 +0x104:  mov    %esi,-0x8(%ebp)
08765817 +0x107:  mov    0x8(%ebp),%esi
0876581a +0x10a:  mov    %edi,-0x4(%ebp)
0876581d +0x10d:  mov    0x20(%esi),%edi
08765820 +0x110:  mov    -0x128(%ebx),%eax
08765826 +0x116:  add    $0x8,%eax
08765829 +0x119:  mov    %eax,(%esi)
0876582b +0x11b:  mov    0x1c(%esi),%eax
0876582e +0x11e:  mov    %edi,(%esp)
08765831 +0x121:  movl   $0x0,0x4(%esp)
08765839 +0x129:  mov    %eax,0x8(%esp)
0876583d +0x12d:  call   0807dcc0 <_init+0x5b8>
08765842 +0x132:  mov    %edi,(%esp)
08765845 +0x135:  movb   $0x0,0x4(%esp)
0876584a +0x13a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876584f +0x13f:  mov    0x14(%esi),%edi
08765852 +0x142:  mov    0x10(%esi),%eax
08765855 +0x145:  movl   $0x0,0x4(%esp)
0876585d +0x14d:  mov    %edi,(%esp)
08765860 +0x150:  mov    %eax,0x8(%esp)
08765864 +0x154:  call   0807dcc0 <_init+0x5b8>
08765869 +0x159:  mov    %edi,(%esp)
0876586c +0x15c:  movb   $0x0,0x4(%esp)
08765871 +0x161:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08765876 +0x166:  mov    0x8(%esi),%edi
08765879 +0x169:  mov    0x4(%esi),%eax
0876587c +0x16c:  movl   $0x0,0x4(%esp)
08765884 +0x174:  mov    %edi,(%esp)
08765887 +0x177:  mov    %eax,0x8(%esp)
0876588b +0x17b:  call   0807dcc0 <_init+0x5b8>
08765890 +0x180:  mov    %edi,(%esp)
08765893 +0x183:  movb   $0x0,0x4(%esp)
08765898 +0x188:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876589d +0x18d:  mov    -0x3c(%ebx),%eax
087658a3 +0x193:  add    $0x8,%eax
087658a6 +0x196:  mov    %eax,(%esi)
087658a8 +0x198:  mov    -0xc(%ebp),%ebx
087658ab +0x19b:  mov    -0x8(%ebp),%esi
087658ae +0x19e:  mov    -0x4(%ebp),%edi
087658b1 +0x1a1:  mov    %ebp,%esp
087658b3 +0x1a3:  pop    %ebp
087658b4 +0x1a4:  ret
087658b5 +0x1a5:  nop
087658b6 +0x1a6:  nop
087658b7 +0x1a7:  nop
087658b8 +0x1a8:  nop
087658b9 +0x1a9:  nop
087658ba +0x1aa:  nop
087658bb +0x1ab:  nop
087658bc +0x1ac:  nop
087658bd +0x1ad:  nop
087658be +0x1ae:  nop
087658bf +0x1af:  nop
087658c0 +0x1b0:  push   %ebp
087658c1 +0x1b1:  mov    %esp,%ebp
087658c3 +0x1b3:  sub    $0x28,%esp
087658c6 +0x1b6:  mov    %ebx,-0xc(%ebp)
087658c9 +0x1b9:  call   08722df8 <__i686.get_pc_thunk.bx>
087658ce +0x1be:  add    $0xc072ca,%ebx
087658d4 +0x1c4:  mov    %esi,-0x8(%ebp)
087658d7 +0x1c7:  mov    0x8(%ebp),%esi
087658da +0x1ca:  mov    %edi,-0x4(%ebp)
087658dd +0x1cd:  mov    0x20(%esi),%edi
087658e0 +0x1d0:  mov    -0x128(%ebx),%eax
087658e6 +0x1d6:  add    $0x8,%eax
087658e9 +0x1d9:  mov    %eax,(%esi)
087658eb +0x1db:  mov    0x1c(%esi),%eax
087658ee +0x1de:  mov    %edi,(%esp)
087658f1 +0x1e1:  movl   $0x0,0x4(%esp)
087658f9 +0x1e9:  mov    %eax,0x8(%esp)
087658fd +0x1ed:  call   0807dcc0 <_init+0x5b8>
08765902 +0x1f2:  mov    %edi,(%esp)
08765905 +0x1f5:  movb   $0x0,0x4(%esp)
0876590a +0x1fa:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876590f +0x1ff:  mov    0x14(%esi),%edi
08765912 +0x202:  mov    0x10(%esi),%eax
08765915 +0x205:  movl   $0x0,0x4(%esp)
0876591d +0x20d:  mov    %edi,(%esp)
08765920 +0x210:  mov    %eax,0x8(%esp)
08765924 +0x214:  call   0807dcc0 <_init+0x5b8>
08765929 +0x219:  mov    %edi,(%esp)
0876592c +0x21c:  movb   $0x0,0x4(%esp)
08765931 +0x221:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08765936 +0x226:  mov    0x8(%esi),%edi
08765939 +0x229:  mov    0x4(%esi),%eax
0876593c +0x22c:  movl   $0x0,0x4(%esp)
08765944 +0x234:  mov    %edi,(%esp)
08765947 +0x237:  mov    %eax,0x8(%esp)
0876594b +0x23b:  call   0807dcc0 <_init+0x5b8>
08765950 +0x240:  mov    %edi,(%esp)
08765953 +0x243:  movb   $0x0,0x4(%esp)
08765958 +0x248:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876595d +0x24d:  mov    -0x3c(%ebx),%eax
08765963 +0x253:  add    $0x8,%eax
08765966 +0x256:  mov    %eax,(%esi)
08765968 +0x258:  mov    -0xc(%ebp),%ebx
0876596b +0x25b:  mov    -0x8(%ebp),%esi
0876596e +0x25e:  mov    -0x4(%ebp),%edi
08765971 +0x261:  mov    %ebp,%esp
08765973 +0x263:  pop    %ebp
08765974 +0x264:  ret
08765975 +0x265:  nop
08765976 +0x266:  nop
08765977 +0x267:  nop
08765978 +0x268:  nop
08765979 +0x269:  nop
0876597a +0x26a:  nop
0876597b +0x26b:  nop
0876597c +0x26c:  nop
0876597d +0x26d:  nop
0876597e +0x26e:  nop
0876597f +0x26f:  nop
```

## 反编译 C

```c
// TaoCrypt::MD2::MD2 @ 0x8765710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD2::MD2() */

void __thiscall TaoCrypt::MD2::MD2(MD2 *this)

{
  void *pvVar1;
  uint in_stack_ffffffe8;
  uint uVar2;
  
  *(undefined4 *)(this + 4) = 0x30;
  *(undefined **)this = PTR_vtable_0936ca70 + 8;
  pvVar1 = operator_new__(0x30,in_stack_ffffffe8 & 0xffffff00);
  *(void **)(this + 8) = pvVar1;
  uVar2 = 0;
  memset(pvVar1,0,*(size_t *)(this + 4));
  *(undefined4 *)(this + 0x10) = 0x10;
  pvVar1 = operator_new__(0x10,uVar2 & 0xffffff00);
  *(void **)(this + 0x14) = pvVar1;
  uVar2 = 0;
  memset(pvVar1,0,*(size_t *)(this + 0x10));
  *(undefined4 *)(this + 0x1c) = 0x10;
  pvVar1 = operator_new__(0x10,uVar2 & 0xffffff00);
  *(void **)(this + 0x20) = pvVar1;
  memset(pvVar1,0,*(size_t *)(this + 0x1c));
  Init(this);
  return;
}
```

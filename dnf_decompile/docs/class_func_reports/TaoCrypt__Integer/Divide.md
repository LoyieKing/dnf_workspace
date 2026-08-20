# Divide

`_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j`

`TaoCrypt::Integer::Divide(unsigned int&, TaoCrypt::Integer&, TaoCrypt::Integer const&, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08761740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08761740  _ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j
#           TaoCrypt::Integer::Divide(unsigned int&, TaoCrypt::Integer&, TaoCrypt::Integer const&, unsigned int)
# range [0x08761740, 0x08761a69]
08761740 +0x000:  push   %ebp
08761741 +0x001:  mov    %esp,%ebp
08761743 +0x003:  push   %edi
08761744 +0x004:  push   %esi
08761745 +0x005:  push   %ebx
08761746 +0x006:  sub    $0x6c,%esp
08761749 +0x009:  mov    0x14(%ebp),%esi
0876174c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08761751 +0x011:  add    $0xc0b447,%ebx
08761757 +0x017:  sub    $0x1,%esi
0876175a +0x01a:  test   %esi,0x14(%ebp)
0876175d +0x01d:  je     08761920 <+0x1e0>
08761763 +0x023:  mov    0x10(%ebp),%eax
08761766 +0x026:  mov    %eax,(%esp)
08761769 +0x029:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0876176e +0x02e:  cmp    $0x8,%eax
08761771 +0x031:  mov    %eax,%esi
08761773 +0x033:  jbe    087618b0 <+0x170>
08761779 +0x039:  cmp    $0x10,%eax
0876177c +0x03c:  jbe    08761a28 <+0x2e8>
08761782 +0x042:  cmp    $0x20,%eax
08761785 +0x045:  jbe    08761a10 <+0x2d0>
0876178b +0x04b:  cmp    $0x40,%eax
0876178e +0x04e:  xchg   %ax,%ax
08761790 +0x050:  ja     08761a40 <+0x300>
08761796 +0x056:  lea    -0x1(%eax),%edx
08761799 +0x059:  mov    $0x100,%edi
0876179e +0x05e:  mov    $0x40,%esi
087617a3 +0x063:  mov    0xc(%ebp),%ecx
087617a6 +0x066:  movl   $0x0,0x10(%esp)
087617ae +0x06e:  mov    %esi,0xc(%esp)
087617b2 +0x072:  mov    %edx,-0x54(%ebp)
087617b5 +0x075:  mov    (%ecx),%eax
087617b7 +0x077:  mov    %eax,0x8(%esp)
087617bb +0x07b:  mov    0x4(%ecx),%eax
087617be +0x07e:  mov    %eax,0x4(%esp)
087617c2 +0x082:  mov    %ecx,%eax
087617c4 +0x084:  add    $0x8,%eax
087617c7 +0x087:  mov    %eax,(%esp)
087617ca +0x08a:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
087617cf +0x08f:  mov    0xc(%ebp),%ecx
087617d2 +0x092:  mov    %esi,(%ecx)
087617d4 +0x094:  mov    %eax,0x4(%ecx)
087617d7 +0x097:  mov    %edi,0x8(%esp)
087617db +0x09b:  movl   $0x0,0x4(%esp)
087617e3 +0x0a3:  mov    %eax,(%esp)
087617e6 +0x0a6:  call   0807dcc0 <_init+0x5b8>
087617eb +0x0ab:  mov    0x8(%ebp),%eax
087617ee +0x0ae:  mov    -0x54(%ebp),%edx
087617f1 +0x0b1:  movl   $0x0,(%eax)
087617f7 +0x0b7:  mov    0xc(%ebp),%eax
087617fa +0x0ba:  lea    0x0(,%edx,4),%edi
08761801 +0x0c1:  mov    0x10(%ebp),%ecx
08761804 +0x0c4:  mov    0x4(%eax),%eax
08761807 +0x0c7:  mov    0x4(%ecx),%ecx
0876180a +0x0ca:  mov    %eax,-0x50(%ebp)
0876180d +0x0cd:  xor    %eax,%eax
0876180f +0x0cf:  mov    %ecx,-0x4c(%ebp)
08761812 +0x0d2:  mov    %edx,%ecx
08761814 +0x0d4:  lea    0x0(%esi,%eiz,1),%esi
08761818 +0x0d8:  mov    -0x4c(%ebp),%esi
0876181b +0x0db:  mov    %ecx,-0x54(%ebp)
0876181e +0x0de:  add    %edi,%esi
08761820 +0x0e0:  mov    (%esi),%edx
08761822 +0x0e2:  mov    %eax,-0x1c(%ebp)
08761825 +0x0e5:  mov    0x14(%ebp),%eax
08761828 +0x0e8:  movl   $0x0,0xc(%esp)
08761830 +0x0f0:  mov    %edx,-0x20(%ebp)
08761833 +0x0f3:  mov    -0x1c(%ebp),%edx
08761836 +0x0f6:  mov    %eax,0x8(%esp)
0876183a +0x0fa:  mov    -0x20(%ebp),%eax
0876183d +0x0fd:  mov    %edx,0x4(%esp)
08761841 +0x101:  mov    %eax,(%esp)
08761844 +0x104:  call   08ae0700 <__udivdi3>
08761849 +0x109:  mov    -0x50(%ebp),%edx
0876184c +0x10c:  mov    %eax,(%edx,%edi,1)
0876184f +0x10f:  mov    0x8(%ebp),%edx
08761852 +0x112:  sub    $0x4,%edi
08761855 +0x115:  mov    (%edx),%eax
08761857 +0x117:  mov    (%esi),%edx
08761859 +0x119:  movl   $0x0,0xc(%esp)
08761861 +0x121:  mov    %eax,-0x24(%ebp)
08761864 +0x124:  mov    0x14(%ebp),%eax
08761867 +0x127:  mov    %edx,-0x28(%ebp)
0876186a +0x12a:  mov    -0x24(%ebp),%edx
0876186d +0x12d:  mov    %eax,0x8(%esp)
08761871 +0x131:  mov    -0x28(%ebp),%eax
08761874 +0x134:  mov    %edx,0x4(%esp)
08761878 +0x138:  mov    %eax,(%esp)
0876187b +0x13b:  call   08ae0830 <__umoddi3>
08761880 +0x140:  mov    -0x54(%ebp),%ecx
08761883 +0x143:  mov    0x8(%ebp),%edx
08761886 +0x146:  sub    $0x1,%ecx
08761889 +0x149:  cmp    $0xffffffff,%ecx
0876188c +0x14c:  mov    %eax,(%edx)
0876188e +0x14e:  jne    08761818 <+0xd8>
08761890 +0x150:  mov    0x10(%ebp),%ecx
08761893 +0x153:  cmpl   $0x1,0xc(%ecx)
08761897 +0x157:  je     087619e0 <+0x2a0>
0876189d +0x15d:  mov    0xc(%ebp),%eax
087618a0 +0x160:  movl   $0x0,0xc(%eax)
087618a7 +0x167:  add    $0x6c,%esp
087618aa +0x16a:  pop    %ebx
087618ab +0x16b:  pop    %esi
087618ac +0x16c:  pop    %edi
087618ad +0x16d:  pop    %ebp
087618ae +0x16e:  ret
087618af +0x16f:  nop
087618b0 +0x170:  mov    -0x6678b8(%ebx,%eax,4),%edi
087618b7 +0x177:  lea    -0x1(%eax),%edx
087618ba +0x17a:  mov    0xc(%ebp),%ecx
087618bd +0x17d:  movl   $0x0,0x10(%esp)
087618c5 +0x185:  mov    %edx,-0x54(%ebp)
087618c8 +0x188:  mov    %edi,0xc(%esp)
087618cc +0x18c:  mov    (%ecx),%eax
087618ce +0x18e:  mov    %eax,0x8(%esp)
087618d2 +0x192:  mov    0x4(%ecx),%eax
087618d5 +0x195:  mov    %eax,0x4(%esp)
087618d9 +0x199:  mov    %ecx,%eax
087618db +0x19b:  add    $0x8,%eax
087618de +0x19e:  mov    %eax,(%esp)
087618e1 +0x1a1:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
087618e6 +0x1a6:  mov    0xc(%ebp),%ecx
087618e9 +0x1a9:  mov    %edi,(%ecx)
087618eb +0x1ab:  shl    $0x2,%edi
087618ee +0x1ae:  mov    %eax,0x4(%ecx)
087618f1 +0x1b1:  mov    %edi,0x8(%esp)
087618f5 +0x1b5:  movl   $0x0,0x4(%esp)
087618fd +0x1bd:  mov    %eax,(%esp)
08761900 +0x1c0:  call   0807dcc0 <_init+0x5b8>
08761905 +0x1c5:  mov    0x8(%ebp),%eax
08761908 +0x1c8:  test   %esi,%esi
0876190a +0x1ca:  mov    -0x54(%ebp),%edx
0876190d +0x1cd:  movl   $0x0,(%eax)
08761913 +0x1d3:  jne    087617f7 <+0xb7>
08761919 +0x1d9:  jmp    08761890 <+0x150>
0876191e +0x1de:  xchg   %ax,%ax
08761920 +0x1e0:  mov    0x14(%ebp),%eax
08761923 +0x1e3:  lea    -0x48(%ebp),%edi
08761926 +0x1e6:  mov    %eax,(%esp)
08761929 +0x1e9:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
0876192e +0x1ee:  mov    0x10(%ebp),%edx
08761931 +0x1f1:  mov    %edi,(%esp)
08761934 +0x1f4:  mov    %edx,0x4(%esp)
08761938 +0x1f8:  mov    %eax,-0x54(%ebp)
0876193b +0x1fb:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08761940 +0x200:  mov    -0x54(%ebp),%eax
08761943 +0x203:  mov    %edi,(%esp)
08761946 +0x206:  sub    $0x1,%eax
08761949 +0x209:  mov    %eax,0x4(%esp)
0876194d +0x20d:  call   08760820 <_ZN8TaoCrypt7IntegerrSEj>  ; TaoCrypt::Integer::operator>>=(unsigned int)
08761952 +0x212:  lea    -0x38(%ebp),%edx
08761955 +0x215:  mov    %edx,(%esp)
08761958 +0x218:  mov    %edx,-0x54(%ebp)
0876195b +0x21b:  mov    %eax,0x4(%esp)
0876195f +0x21f:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08761964 +0x224:  mov    -0x48(%ebp),%eax
08761967 +0x227:  mov    -0x44(%ebp),%edi
0876196a +0x22a:  movl   $0x0,0x4(%esp)
08761972 +0x232:  shl    $0x2,%eax
08761975 +0x235:  mov    %edi,(%esp)
08761978 +0x238:  mov    %eax,0x8(%esp)
0876197c +0x23c:  call   0807dcc0 <_init+0x5b8>
08761981 +0x241:  mov    %edi,(%esp)
08761984 +0x244:  movb   $0x0,0x4(%esp)
08761989 +0x249:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876198e +0x24e:  mov    -0x54(%ebp),%edx
08761991 +0x251:  mov    0xc(%ebp),%ecx
08761994 +0x254:  mov    %edx,0x4(%esp)
08761998 +0x258:  mov    %ecx,(%esp)
0876199b +0x25b:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087619a0 +0x260:  mov    -0x38(%ebp),%eax
087619a3 +0x263:  mov    -0x34(%ebp),%edi
087619a6 +0x266:  movl   $0x0,0x4(%esp)
087619ae +0x26e:  shl    $0x2,%eax
087619b1 +0x271:  mov    %edi,(%esp)
087619b4 +0x274:  mov    %eax,0x8(%esp)
087619b8 +0x278:  call   0807dcc0 <_init+0x5b8>
087619bd +0x27d:  mov    %edi,(%esp)
087619c0 +0x280:  movb   $0x0,0x4(%esp)
087619c5 +0x285:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087619ca +0x28a:  mov    0x10(%ebp),%edx
087619cd +0x28d:  mov    0x8(%ebp),%ecx
087619d0 +0x290:  mov    0x4(%edx),%eax
087619d3 +0x293:  and    (%eax),%esi
087619d5 +0x295:  mov    %esi,(%ecx)
087619d7 +0x297:  add    $0x6c,%esp
087619da +0x29a:  pop    %ebx
087619db +0x29b:  pop    %esi
087619dc +0x29c:  pop    %edi
087619dd +0x29d:  pop    %ebp
087619de +0x29e:  ret
087619df +0x29f:  nop
087619e0 +0x2a0:  mov    0x8(%ebp),%ecx
087619e3 +0x2a3:  mov    0xc(%ebp),%edx
087619e6 +0x2a6:  mov    (%ecx),%esi
087619e8 +0x2a8:  movl   $0x1,0xc(%edx)
087619ef +0x2af:  test   %esi,%esi
087619f1 +0x2b1:  je     087618a7 <+0x167>
087619f7 +0x2b7:  mov    %edx,(%esp)
087619fa +0x2ba:  call   08761570 <_ZN8TaoCrypt7IntegermmEv>  ; TaoCrypt::Integer::operator--()
087619ff +0x2bf:  mov    0x8(%ebp),%edx
08761a02 +0x2c2:  mov    0x14(%ebp),%eax
08761a05 +0x2c5:  sub    (%edx),%eax
08761a07 +0x2c7:  mov    %eax,(%edx)
08761a09 +0x2c9:  jmp    087618a7 <+0x167>
08761a0e +0x2ce:  xchg   %ax,%ax
08761a10 +0x2d0:  lea    -0x1(%eax),%edx
08761a13 +0x2d3:  mov    $0x80,%edi
08761a18 +0x2d8:  mov    $0x20,%esi
08761a1d +0x2dd:  jmp    087617a3 <+0x63>
08761a22 +0x2e2:  lea    0x0(%esi),%esi
08761a28 +0x2e8:  lea    -0x1(%eax),%edx
08761a2b +0x2eb:  mov    $0x40,%edi
08761a30 +0x2f0:  mov    $0x10,%esi
08761a35 +0x2f5:  jmp    087617a3 <+0x63>
08761a3a +0x2fa:  lea    0x0(%esi),%esi
08761a40 +0x300:  lea    -0x1(%eax),%edx
08761a43 +0x303:  mov    $0x1,%esi
08761a48 +0x308:  mov    %edx,(%esp)
08761a4b +0x30b:  mov    %edx,-0x54(%ebp)
08761a4e +0x30e:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
08761a53 +0x313:  mov    -0x54(%ebp),%edx
08761a56 +0x316:  mov    %eax,%ecx
08761a58 +0x318:  shl    %cl,%esi
08761a5a +0x31a:  lea    0x0(,%esi,4),%edi
08761a61 +0x321:  jmp    087617a3 <+0x63>
08761a66 +0x326:  lea    0x0(%esi),%esi
08761a69 +0x329:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Divide @ 0x8761740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Divide(unsigned int&, TaoCrypt::Integer&, TaoCrypt::Integer const&, unsigned
   int) */

void TaoCrypt::Integer::Divide(uint *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  Integer *pIVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  size_t __n;
  int iVar11;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  
  if ((param_4 & param_4 - 1) == 0) {
    iVar11 = BitPrecision(param_4);
    Integer((Integer *)&local_4c,param_3);
    pIVar7 = (Integer *)operator>>=((Integer *)&local_4c,iVar11 - 1);
    Integer((Integer *)&local_3c,pIVar7);
    uVar4 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar4 & 0xffffff00);
    operator=(param_2,(Integer *)&local_3c);
    uVar4 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar4 & 0xffffff00);
    *param_1 = param_4 - 1 & **(uint **)(param_3 + 4);
    return;
  }
  uVar4 = WordCount(param_3);
  if (uVar4 < 9) {
    uVar9 = (&RoundupSizeTable)[uVar4];
    pvVar5 = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                               ((AllocatorWithCleanup<unsigned_int> *)(param_2 + 8),
                                *(uint **)(param_2 + 4),*(uint *)param_2,uVar9,false);
    *(uint *)param_2 = uVar9;
    *(void **)(param_2 + 4) = pvVar5;
    memset(pvVar5,0,uVar9 << 2);
    *param_1 = 0;
    if (uVar4 == 0) goto LAB_08761890;
  }
  else {
    if (uVar4 < 0x11) {
      __n = 0x40;
      uVar9 = 0x10;
    }
    else if (uVar4 < 0x21) {
      __n = 0x80;
      uVar9 = 0x20;
    }
    else if (uVar4 < 0x41) {
      __n = 0x100;
      uVar9 = 0x40;
    }
    else {
      bVar3 = BitPrecision(uVar4 - 1);
      uVar9 = 1 << (bVar3 & 0x1f);
      __n = uVar9 * 4;
    }
    pvVar5 = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                               ((AllocatorWithCleanup<unsigned_int> *)(param_2 + 8),
                                *(uint **)(param_2 + 4),*(uint *)param_2,uVar9,false);
    *(uint *)param_2 = uVar9;
    *(void **)(param_2 + 4) = pvVar5;
    memset(pvVar5,0,__n);
    *param_1 = 0;
  }
  iVar8 = uVar4 - 1;
  iVar11 = iVar8 * 4;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_3 + 4);
  uVar4 = 0;
  do {
    puVar10 = (undefined4 *)(iVar2 + iVar11);
    local_24 = *puVar10;
    local_20 = uVar4;
    uVar6 = __udivdi3(local_24,uVar4,param_4,0);
    *(undefined4 *)(iVar1 + iVar11) = uVar6;
    iVar11 = iVar11 + -4;
    local_28 = *param_1;
    local_2c = *puVar10;
    uVar4 = __umoddi3(local_2c,local_28,param_4,0);
    iVar8 = iVar8 + -1;
    *param_1 = uVar4;
  } while (iVar8 != -1);
LAB_08761890:
  if (*(int *)(param_3 + 0xc) == 1) {
    uVar4 = *param_1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (uVar4 != 0) {
      operator--(param_2);
      *param_1 = param_4 - *param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}
```

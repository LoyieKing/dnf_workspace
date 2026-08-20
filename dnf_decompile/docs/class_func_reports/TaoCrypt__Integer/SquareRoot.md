# SquareRoot

`_ZNK8TaoCrypt7Integer10SquareRootEv`

`TaoCrypt::Integer::SquareRoot() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08763580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08763580  _ZNK8TaoCrypt7Integer10SquareRootEv
#           TaoCrypt::Integer::SquareRoot() const
# range [0x08763580, 0x08763819]
08763580 +0x000:  push   %ebp
08763581 +0x001:  mov    %esp,%ebp
08763583 +0x003:  push   %edi
08763584 +0x004:  push   %esi
08763585 +0x005:  push   %ebx
08763586 +0x006:  sub    $0x9c,%esp
0876358c +0x00c:  mov    0xc(%ebp),%eax
0876358f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08763594 +0x014:  add    $0xc09604,%ebx
0876359a +0x01a:  cmpl   $0x1,0xc(%eax)
0876359e +0x01e:  je     087637f0 <+0x270>
087635a4 +0x024:  mov    %eax,(%esp)
087635a7 +0x027:  call   0875d280 <_ZNK8TaoCrypt7IntegerntEv>  ; TaoCrypt::Integer::operator!() const
087635ac +0x02c:  test   %al,%al
087635ae +0x02e:  jne    087637f0 <+0x270>
087635b4 +0x034:  lea    -0x28(%ebp),%esi
087635b7 +0x037:  mov    %esi,(%esp)
087635ba +0x03a:  lea    -0x38(%ebp),%edi
087635bd +0x03d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087635c2 +0x042:  mov    0xc(%ebp),%eax
087635c5 +0x045:  mov    %eax,(%esp)
087635c8 +0x048:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
087635cd +0x04d:  mov    %edi,(%esp)
087635d0 +0x050:  add    $0x1,%eax
087635d3 +0x053:  shr    %eax
087635d5 +0x055:  mov    %eax,0x4(%esp)
087635d9 +0x059:  call   08760d70 <_ZN8TaoCrypt7Integer6Power2Ej>  ; TaoCrypt::Integer::Power2(unsigned int)
087635de +0x05e:  lea    -0x48(%ebp),%eax
087635e1 +0x061:  mov    %eax,-0x84(%ebp)
087635e7 +0x067:  lea    -0x58(%ebp),%eax
087635ea +0x06a:  mov    %eax,-0x7c(%ebp)
087635ed +0x06d:  lea    -0x78(%ebp),%eax
087635f0 +0x070:  mov    %eax,-0x80(%ebp)
087635f3 +0x073:  lea    -0x68(%ebp),%eax
087635f6 +0x076:  mov    %eax,-0x88(%ebp)
087635fc +0x07c:  sub    $0x4,%esp
087635ff +0x07f:  nop
08763600 +0x080:  mov    %edi,0x4(%esp)
08763604 +0x084:  mov    %esi,(%esp)
08763607 +0x087:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0876360c +0x08c:  mov    0xc(%ebp),%eax
0876360f +0x08f:  mov    %esi,0x8(%esp)
08763613 +0x093:  mov    %eax,0x4(%esp)
08763617 +0x097:  mov    -0x84(%ebp),%eax
0876361d +0x09d:  mov    %eax,(%esp)
08763620 +0x0a0:  call   08763150 <_ZNK8TaoCrypt7Integer9DividedByERKS0_>  ; TaoCrypt::Integer::DividedBy(TaoCrypt::Integer const&) const
08763625 +0x0a5:  mov    -0x84(%ebp),%eax
0876362b +0x0ab:  sub    $0x4,%esp
0876362e +0x0ae:  mov    %eax,0x8(%esp)
08763632 +0x0b2:  mov    -0x7c(%ebp),%eax
08763635 +0x0b5:  mov    %esi,0x4(%esp)
08763639 +0x0b9:  mov    %eax,(%esp)
0876363c +0x0bc:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
08763641 +0x0c1:  mov    -0x7c(%ebp),%eax
08763644 +0x0c4:  sub    $0x4,%esp
08763647 +0x0c7:  mov    %eax,0x4(%esp)
0876364b +0x0cb:  mov    -0x80(%ebp),%eax
0876364e +0x0ce:  mov    %eax,(%esp)
08763651 +0x0d1:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08763656 +0x0d6:  mov    -0x80(%ebp),%eax
08763659 +0x0d9:  movl   $0x1,0x4(%esp)
08763661 +0x0e1:  mov    %eax,(%esp)
08763664 +0x0e4:  call   08760820 <_ZN8TaoCrypt7IntegerrSEj>  ; TaoCrypt::Integer::operator>>=(unsigned int)
08763669 +0x0e9:  mov    %eax,0x4(%esp)
0876366d +0x0ed:  mov    -0x88(%ebp),%eax
08763673 +0x0f3:  mov    %eax,(%esp)
08763676 +0x0f6:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0876367b +0x0fb:  mov    -0x78(%ebp),%eax
0876367e +0x0fe:  mov    -0x74(%ebp),%edx
08763681 +0x101:  movl   $0x0,0x4(%esp)
08763689 +0x109:  shl    $0x2,%eax
0876368c +0x10c:  mov    %edx,(%esp)
0876368f +0x10f:  mov    %edx,-0x8c(%ebp)
08763695 +0x115:  mov    %eax,0x8(%esp)
08763699 +0x119:  call   0807dcc0 <_init+0x5b8>
0876369e +0x11e:  mov    -0x8c(%ebp),%edx
087636a4 +0x124:  movb   $0x0,0x4(%esp)
087636a9 +0x129:  mov    %edx,(%esp)
087636ac +0x12c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087636b1 +0x131:  mov    -0x88(%ebp),%eax
087636b7 +0x137:  mov    %edi,(%esp)
087636ba +0x13a:  mov    %eax,0x4(%esp)
087636be +0x13e:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087636c3 +0x143:  mov    -0x68(%ebp),%eax
087636c6 +0x146:  mov    -0x64(%ebp),%edx
087636c9 +0x149:  movl   $0x0,0x4(%esp)
087636d1 +0x151:  shl    $0x2,%eax
087636d4 +0x154:  mov    %edx,(%esp)
087636d7 +0x157:  mov    %edx,-0x8c(%ebp)
087636dd +0x15d:  mov    %eax,0x8(%esp)
087636e1 +0x161:  call   0807dcc0 <_init+0x5b8>
087636e6 +0x166:  mov    -0x8c(%ebp),%edx
087636ec +0x16c:  movb   $0x0,0x4(%esp)
087636f1 +0x171:  mov    %edx,(%esp)
087636f4 +0x174:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087636f9 +0x179:  mov    -0x58(%ebp),%eax
087636fc +0x17c:  mov    -0x54(%ebp),%edx
087636ff +0x17f:  movl   $0x0,0x4(%esp)
08763707 +0x187:  shl    $0x2,%eax
0876370a +0x18a:  mov    %edx,(%esp)
0876370d +0x18d:  mov    %edx,-0x8c(%ebp)
08763713 +0x193:  mov    %eax,0x8(%esp)
08763717 +0x197:  call   0807dcc0 <_init+0x5b8>
0876371c +0x19c:  mov    -0x8c(%ebp),%edx
08763722 +0x1a2:  movb   $0x0,0x4(%esp)
08763727 +0x1a7:  mov    %edx,(%esp)
0876372a +0x1aa:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876372f +0x1af:  mov    -0x48(%ebp),%eax
08763732 +0x1b2:  mov    -0x44(%ebp),%edx
08763735 +0x1b5:  movl   $0x0,0x4(%esp)
0876373d +0x1bd:  shl    $0x2,%eax
08763740 +0x1c0:  mov    %edx,(%esp)
08763743 +0x1c3:  mov    %edx,-0x8c(%ebp)
08763749 +0x1c9:  mov    %eax,0x8(%esp)
0876374d +0x1cd:  call   0807dcc0 <_init+0x5b8>
08763752 +0x1d2:  mov    -0x8c(%ebp),%edx
08763758 +0x1d8:  movb   $0x0,0x4(%esp)
0876375d +0x1dd:  mov    %edx,(%esp)
08763760 +0x1e0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763765 +0x1e5:  mov    %esi,0x4(%esp)
08763769 +0x1e9:  mov    %edi,(%esp)
0876376c +0x1ec:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08763771 +0x1f1:  test   %eax,%eax
08763773 +0x1f3:  js     08763600 <+0x80>
08763779 +0x1f9:  mov    0x8(%ebp),%eax
0876377c +0x1fc:  mov    %esi,0x4(%esp)
08763780 +0x200:  mov    %eax,(%esp)
08763783 +0x203:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08763788 +0x208:  mov    -0x38(%ebp),%eax
0876378b +0x20b:  mov    -0x34(%ebp),%esi
0876378e +0x20e:  movl   $0x0,0x4(%esp)
08763796 +0x216:  shl    $0x2,%eax
08763799 +0x219:  mov    %esi,(%esp)
0876379c +0x21c:  mov    %eax,0x8(%esp)
087637a0 +0x220:  call   0807dcc0 <_init+0x5b8>
087637a5 +0x225:  mov    %esi,(%esp)
087637a8 +0x228:  movb   $0x0,0x4(%esp)
087637ad +0x22d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087637b2 +0x232:  mov    -0x28(%ebp),%eax
087637b5 +0x235:  mov    -0x24(%ebp),%esi
087637b8 +0x238:  movl   $0x0,0x4(%esp)
087637c0 +0x240:  shl    $0x2,%eax
087637c3 +0x243:  mov    %esi,(%esp)
087637c6 +0x246:  mov    %eax,0x8(%esp)
087637ca +0x24a:  call   0807dcc0 <_init+0x5b8>
087637cf +0x24f:  mov    %esi,(%esp)
087637d2 +0x252:  movb   $0x0,0x4(%esp)
087637d7 +0x257:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087637dc +0x25c:  mov    0x8(%ebp),%eax
087637df +0x25f:  lea    -0xc(%ebp),%esp
087637e2 +0x262:  pop    %ebx
087637e3 +0x263:  pop    %esi
087637e4 +0x264:  pop    %edi
087637e5 +0x265:  pop    %ebp
087637e6 +0x266:  ret    $0x4
087637e9 +0x269:  lea    0x0(%esi,%eiz,1),%esi
087637f0 +0x270:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
087637f5 +0x275:  mov    %eax,0x4(%esp)
087637f9 +0x279:  mov    0x8(%ebp),%eax
087637fc +0x27c:  mov    %eax,(%esp)
087637ff +0x27f:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08763804 +0x284:  mov    0x8(%ebp),%eax
08763807 +0x287:  lea    -0xc(%ebp),%esp
0876380a +0x28a:  pop    %ebx
0876380b +0x28b:  pop    %esi
0876380c +0x28c:  pop    %edi
0876380d +0x28d:  pop    %ebp
0876380e +0x28e:  ret    $0x4
08763811 +0x291:  nop
08763812 +0x292:  lea    0x0(%esi,%eiz,1),%esi
08763819 +0x299:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::SquareRoot @ 0x8763580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::SquareRoot() const */

Integer * TaoCrypt::Integer::SquareRoot(void)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  Integer *pIVar4;
  Integer *in_stack_00000004;
  Integer *in_stack_00000008;
  uint uVar5;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  if (*(int *)(in_stack_00000008 + 0xc) != 1) {
    cVar2 = operator!(in_stack_00000008);
    if (cVar2 == '\0') {
      Integer((Integer *)&local_2c);
      iVar3 = BitCount(in_stack_00000008);
      Power2((Integer *)&local_3c,iVar3 + 1U >> 1);
      do {
        operator=((Integer *)&local_2c,(Integer *)&local_3c);
        DividedBy((Integer *)&local_4c);
        Plus((Integer *)&local_5c);
        Integer((Integer *)&local_7c,(Integer *)&local_5c);
        pIVar4 = (Integer *)operator>>=((Integer *)&local_7c,1);
        Integer((Integer *)&local_6c,pIVar4);
        pvVar1 = local_78;
        uVar5 = 0;
        memset(local_78,0,local_7c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        operator=((Integer *)&local_3c,(Integer *)&local_6c);
        pvVar1 = local_68;
        uVar5 = 0;
        memset(local_68,0,local_6c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        pvVar1 = local_58;
        uVar5 = 0;
        memset(local_58,0,local_5c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        pvVar1 = local_48;
        uVar5 = 0;
        memset(local_48,0,local_4c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        iVar3 = Compare((Integer *)&local_3c,(Integer *)&local_2c);
      } while (iVar3 < 0);
      Integer(in_stack_00000004,(Integer *)&local_2c);
      uVar5 = 0;
      memset(local_38,0,local_3c << 2);
      operator_delete__(local_38,uVar5 & 0xffffff00);
      uVar5 = 0;
      memset(local_28,0,local_2c << 2);
      operator_delete__(local_28,uVar5 & 0xffffff00);
      return in_stack_00000004;
    }
  }
  pIVar4 = (Integer *)Zero();
  Integer(in_stack_00000004,pIVar4);
  return in_stack_00000004;
}
```

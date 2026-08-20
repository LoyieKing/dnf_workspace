# operator--

`_ZN8TaoCrypt7IntegermmEv`

`TaoCrypt::Integer::operator--()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08761570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08761570  _ZN8TaoCrypt7IntegermmEv
#           TaoCrypt::Integer::operator--()
# range [0x08761570, 0x08761739]
08761570 +0x000:  push   %ebp
08761571 +0x001:  mov    %esp,%ebp
08761573 +0x003:  push   %edi
08761574 +0x004:  push   %esi
08761575 +0x005:  push   %ebx
08761576 +0x006:  sub    $0x3c,%esp
08761579 +0x009:  mov    0x8(%ebp),%eax
0876157c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08761581 +0x011:  add    $0xc0b617,%ebx
08761587 +0x017:  cmpl   $0x1,0xc(%eax)
0876158b +0x01b:  je     08761638 <+0xc8>
08761591 +0x021:  mov    0x4(%eax),%ecx
08761594 +0x024:  mov    (%eax),%edi
08761596 +0x026:  mov    (%ecx),%edx
08761598 +0x028:  lea    -0x1(%edx),%eax
0876159b +0x02b:  cmp    %eax,%edx
0876159d +0x02d:  mov    %eax,(%ecx)
0876159f +0x02f:  jae    08761628 <+0xb8>
087615a5 +0x035:  cmp    $0x1,%edi
087615a8 +0x038:  jbe    087615d4 <+0x64>
087615aa +0x03a:  mov    0x4(%ecx),%edx
087615ad +0x03d:  lea    -0x1(%edx),%eax
087615b0 +0x040:  test   %edx,%edx
087615b2 +0x042:  mov    %eax,0x4(%ecx)
087615b5 +0x045:  mov    $0x1,%eax
087615ba +0x04a:  je     087615cd <+0x5d>
087615bc +0x04c:  jmp    08761628 <+0xb8>
087615be +0x04e:  xchg   %ax,%ax
087615c0 +0x050:  mov    (%ecx,%eax,4),%edx
087615c3 +0x053:  lea    -0x1(%edx),%esi
087615c6 +0x056:  test   %edx,%edx
087615c8 +0x058:  mov    %esi,(%ecx,%eax,4)
087615cb +0x05b:  jne    08761628 <+0xb8>
087615cd +0x05d:  add    $0x1,%eax
087615d0 +0x060:  cmp    %eax,%edi
087615d2 +0x062:  ja     087615c0 <+0x50>
087615d4 +0x064:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
087615d9 +0x069:  lea    -0x28(%ebp),%esi
087615dc +0x06c:  mov    %esi,(%esp)
087615df +0x06f:  mov    %eax,0x4(%esp)
087615e3 +0x073:  call   0875f490 <_ZNK8TaoCrypt7IntegerngEv>  ; TaoCrypt::Integer::operator-() const
087615e8 +0x078:  mov    0x8(%ebp),%edx
087615eb +0x07b:  sub    $0x4,%esp
087615ee +0x07e:  mov    %esi,0x4(%esp)
087615f2 +0x082:  mov    %edx,(%esp)
087615f5 +0x085:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087615fa +0x08a:  mov    -0x28(%ebp),%eax
087615fd +0x08d:  mov    -0x24(%ebp),%esi
08761600 +0x090:  movl   $0x0,0x4(%esp)
08761608 +0x098:  shl    $0x2,%eax
0876160b +0x09b:  mov    %eax,0x8(%esp)
0876160f +0x09f:  mov    %esi,(%esp)
08761612 +0x0a2:  call   0807dcc0 <_init+0x5b8>
08761617 +0x0a7:  movb   $0x0,0x4(%esp)
0876161c +0x0ac:  mov    %esi,(%esp)
0876161f +0x0af:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08761624 +0x0b4:  lea    0x0(%esi,%eiz,1),%esi
08761628 +0x0b8:  mov    0x8(%ebp),%eax
0876162b +0x0bb:  lea    -0xc(%ebp),%esp
0876162e +0x0be:  pop    %ebx
0876162f +0x0bf:  pop    %esi
08761630 +0x0c0:  pop    %edi
08761631 +0x0c1:  pop    %ebp
08761632 +0x0c2:  ret
08761633 +0x0c3:  nop
08761634 +0x0c4:  lea    0x0(%esi,%eiz,1),%esi
08761638 +0x0c8:  mov    0x4(%eax),%esi
0876163b +0x0cb:  mov    (%eax),%ecx
0876163d +0x0cd:  mov    (%esi),%edx
0876163f +0x0cf:  lea    0x1(%edx),%eax
08761642 +0x0d2:  cmp    %eax,%edx
08761644 +0x0d4:  mov    %eax,(%esi)
08761646 +0x0d6:  jbe    08761628 <+0xb8>
08761648 +0x0d8:  cmp    $0x1,%ecx
0876164b +0x0db:  jbe    0876167c <+0x10c>
0876164d +0x0dd:  mov    0x4(%esi),%edx
08761650 +0x0e0:  mov    $0x1,%eax
08761655 +0x0e5:  add    $0x1,%edx
08761658 +0x0e8:  test   %edx,%edx
0876165a +0x0ea:  mov    %edx,0x4(%esi)
0876165d +0x0ed:  je     08761675 <+0x105>
0876165f +0x0ef:  jmp    08761628 <+0xb8>
08761661 +0x0f1:  lea    0x0(%esi,%eiz,1),%esi
08761668 +0x0f8:  mov    (%esi,%eax,4),%edx
0876166b +0x0fb:  add    $0x1,%edx
0876166e +0x0fe:  test   %edx,%edx
08761670 +0x100:  mov    %edx,(%esi,%eax,4)
08761673 +0x103:  jne    08761628 <+0xb8>
08761675 +0x105:  add    $0x1,%eax
08761678 +0x108:  cmp    %eax,%ecx
0876167a +0x10a:  ja     08761668 <+0xf8>
0876167c +0x10c:  mov    0x8(%ebp),%eax
0876167f +0x10f:  mov    (%eax),%edx
08761681 +0x111:  lea    (%edx,%edx,1),%edi
08761684 +0x114:  cmp    %edx,%edi
08761686 +0x116:  ja     08761695 <+0x125>
08761688 +0x118:  mov    %edx,%edi
0876168a +0x11a:  shr    %edi
0876168c +0x11c:  movl   $0x1,(%esi,%edi,4)
08761693 +0x123:  jmp    08761628 <+0xb8>
08761695 +0x125:  xor    %eax,%eax
08761697 +0x127:  xor    %ecx,%ecx
08761699 +0x129:  test   %edi,%edi
0876169b +0x12b:  jne    08761713 <+0x1a3>
0876169d +0x12d:  shl    $0x2,%eax
087616a0 +0x130:  mov    %ecx,(%esp)
087616a3 +0x133:  mov    %ecx,-0x2c(%ebp)
087616a6 +0x136:  mov    %esi,0x4(%esp)
087616aa +0x13a:  mov    %edx,-0x30(%ebp)
087616ad +0x13d:  mov    %eax,0x8(%esp)
087616b1 +0x141:  call   0807d8a0 <_init+0x198>
087616b6 +0x146:  mov    -0x30(%ebp),%edx
087616b9 +0x149:  mov    %esi,(%esp)
087616bc +0x14c:  movl   $0x0,0x4(%esp)
087616c4 +0x154:  shl    $0x2,%edx
087616c7 +0x157:  mov    %edx,0x8(%esp)
087616cb +0x15b:  call   0807dcc0 <_init+0x5b8>
087616d0 +0x160:  mov    %esi,(%esp)
087616d3 +0x163:  movb   $0x0,0x4(%esp)
087616d8 +0x168:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087616dd +0x16d:  mov    0x8(%ebp),%edx
087616e0 +0x170:  mov    -0x2c(%ebp),%ecx
087616e3 +0x173:  mov    (%edx),%eax
087616e5 +0x175:  mov    %ecx,0x4(%edx)
087616e8 +0x178:  mov    %edi,%edx
087616ea +0x17a:  movl   $0x0,0x4(%esp)
087616f2 +0x182:  sub    %eax,%edx
087616f4 +0x184:  shl    $0x2,%edx
087616f7 +0x187:  lea    (%ecx,%eax,4),%eax
087616fa +0x18a:  mov    %edx,0x8(%esp)
087616fe +0x18e:  mov    %eax,(%esp)
08761701 +0x191:  call   0807dcc0 <_init+0x5b8>
08761706 +0x196:  mov    0x8(%ebp),%eax
08761709 +0x199:  mov    %edi,(%eax)
0876170b +0x19b:  mov    0x4(%eax),%esi
0876170e +0x19e:  jmp    0876168a <+0x11a>
08761713 +0x1a3:  lea    0x0(,%edx,8),%eax
0876171a +0x1aa:  mov    %edx,-0x30(%ebp)
0876171d +0x1ad:  movb   $0x0,0x4(%esp)
08761722 +0x1b2:  mov    %eax,(%esp)
08761725 +0x1b5:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0876172a +0x1ba:  mov    -0x30(%ebp),%edx
0876172d +0x1bd:  mov    %eax,%ecx
0876172f +0x1bf:  mov    %edx,%eax
08761731 +0x1c1:  jmp    0876169d <+0x12d>
08761736 +0x1c6:  lea    0x0(%esi),%esi
08761739 +0x1c9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::operator-- @ 0x8761570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() */

Integer * __thiscall TaoCrypt::Integer::operator--(Integer *this)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint *puVar3;
  uint in_stack_ffffffb8;
  uint uVar4;
  int local_2c;
  void *local_28;
  
  if (*(int *)(this + 0xc) == 1) {
    puVar3 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
    *puVar3 = uVar4;
    if (uVar4 < uVar2) {
      if (uVar1 < 2) {
LAB_0876167c:
        uVar4 = *(uint *)this;
        uVar1 = uVar4 * 2;
        if (uVar4 < uVar1) {
          __dest = (void *)0x0;
          uVar2 = 0;
          if (uVar1 != 0) {
            __dest = operator_new__(uVar4 * 8,in_stack_ffffffb8 & 0xffffff00);
            uVar2 = uVar4;
          }
          memcpy(__dest,puVar3,uVar2 << 2);
          uVar2 = 0;
          memset(puVar3,0,uVar4 << 2);
          operator_delete__(puVar3,uVar2 & 0xffffff00);
          *(void **)(this + 4) = __dest;
          memset((void *)((int)__dest + *(int *)this * 4),0,(uVar1 - *(int *)this) * 4);
          *(uint *)this = uVar1;
          puVar3 = *(uint **)(this + 4);
          uVar4 = uVar1;
        }
        puVar3[uVar4 >> 1] = 1;
      }
      else {
        uVar4 = 1;
        uVar2 = puVar3[1] + 1;
        puVar3[1] = uVar2;
        while (uVar2 == 0) {
          uVar4 = uVar4 + 1;
          if (uVar1 <= uVar4) goto LAB_0876167c;
          uVar2 = puVar3[uVar4] + 1;
          puVar3[uVar4] = uVar2;
        }
      }
    }
  }
  else {
    puVar3 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar2 = *puVar3;
    uVar4 = uVar2 - 1;
    *puVar3 = uVar4;
    if (uVar2 < uVar4) {
      if (uVar1 < 2) {
LAB_087615d4:
        One();
        operator-((Integer *)&local_2c);
        operator=(this,(Integer *)&local_2c);
        uVar4 = 0;
        memset(local_28,0,local_2c << 2);
        operator_delete__(local_28,uVar4 & 0xffffff00);
      }
      else {
        uVar4 = puVar3[1];
        puVar3[1] = uVar4 - 1;
        uVar2 = 1;
        while (uVar4 == 0) {
          uVar2 = uVar2 + 1;
          if (uVar1 <= uVar2) goto LAB_087615d4;
          uVar4 = puVar3[uVar2];
          puVar3[uVar2] = uVar4 - 1;
        }
      }
    }
  }
  return this;
}
```

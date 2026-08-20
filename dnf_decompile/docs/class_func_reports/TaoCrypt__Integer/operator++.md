# operator++

`_ZN8TaoCrypt7IntegerppEv`

`TaoCrypt::Integer::operator++()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760b10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760b10  _ZN8TaoCrypt7IntegerppEv
#           TaoCrypt::Integer::operator++()
# range [0x08760b10, 0x08760c4c]
08760b10 +0x000:  push   %ebp
08760b11 +0x001:  mov    %esp,%ebp
08760b13 +0x003:  push   %edi
08760b14 +0x004:  push   %esi
08760b15 +0x005:  push   %ebx
08760b16 +0x006:  sub    $0x3c,%esp
08760b19 +0x009:  mov    0x8(%ebp),%esi
08760b1c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08760b21 +0x011:  add    $0xc0c077,%ebx
08760b27 +0x017:  cmpl   $0x1,0xc(%esi)
08760b2b +0x01b:  je     08760b90 <+0x80>
08760b2d +0x01d:  mov    0x4(%esi),%ecx
08760b30 +0x020:  mov    (%esi),%edi
08760b32 +0x022:  mov    (%ecx),%edx
08760b34 +0x024:  lea    0x1(%edx),%eax
08760b37 +0x027:  cmp    %eax,%edx
08760b39 +0x029:  mov    %eax,(%ecx)
08760b3b +0x02b:  jbe    08760b84 <+0x74>
08760b3d +0x02d:  cmp    $0x1,%edi
08760b40 +0x030:  jbe    08760b6c <+0x5c>
08760b42 +0x032:  mov    0x4(%ecx),%edx
08760b45 +0x035:  mov    $0x1,%eax
08760b4a +0x03a:  add    $0x1,%edx
08760b4d +0x03d:  test   %edx,%edx
08760b4f +0x03f:  mov    %edx,0x4(%ecx)
08760b52 +0x042:  je     08760b65 <+0x55>
08760b54 +0x044:  jmp    08760b84 <+0x74>
08760b56 +0x046:  xchg   %ax,%ax
08760b58 +0x048:  mov    (%ecx,%eax,4),%edx
08760b5b +0x04b:  add    $0x1,%edx
08760b5e +0x04e:  test   %edx,%edx
08760b60 +0x050:  mov    %edx,(%ecx,%eax,4)
08760b63 +0x053:  jne    08760b84 <+0x74>
08760b65 +0x055:  add    $0x1,%eax
08760b68 +0x058:  cmp    %eax,%edi
08760b6a +0x05a:  ja     08760b58 <+0x48>
08760b6c +0x05c:  mov    (%esi),%eax
08760b6e +0x05e:  lea    (%eax,%eax,1),%edi
08760b71 +0x061:  cmp    %eax,%edi
08760b73 +0x063:  ja     08760c00 <+0xf0>
08760b79 +0x069:  mov    %eax,%edi
08760b7b +0x06b:  shr    %edi
08760b7d +0x06d:  movl   $0x1,(%ecx,%edi,4)
08760b84 +0x074:  add    $0x3c,%esp
08760b87 +0x077:  mov    %esi,%eax
08760b89 +0x079:  pop    %ebx
08760b8a +0x07a:  pop    %esi
08760b8b +0x07b:  pop    %edi
08760b8c +0x07c:  pop    %ebp
08760b8d +0x07d:  ret
08760b8e +0x07e:  xchg   %ax,%ax
08760b90 +0x080:  mov    0x4(%esi),%ecx
08760b93 +0x083:  mov    (%esi),%edi
08760b95 +0x085:  mov    (%ecx),%edx
08760b97 +0x087:  lea    -0x1(%edx),%eax
08760b9a +0x08a:  cmp    %eax,%edx
08760b9c +0x08c:  mov    %eax,(%ecx)
08760b9e +0x08e:  jae    08760bd7 <+0xc7>
08760ba0 +0x090:  cmp    $0x1,%edi
08760ba3 +0x093:  jbe    08760bd7 <+0xc7>
08760ba5 +0x095:  mov    0x4(%ecx),%edx
08760ba8 +0x098:  lea    -0x1(%edx),%eax
08760bab +0x09b:  test   %edx,%edx
08760bad +0x09d:  mov    %eax,0x4(%ecx)
08760bb0 +0x0a0:  mov    $0x1,%eax
08760bb5 +0x0a5:  jne    08760bd7 <+0xc7>
08760bb7 +0x0a7:  mov    %esi,-0x1c(%ebp)
08760bba +0x0aa:  jmp    08760bcd <+0xbd>
08760bbc +0x0ac:  lea    0x0(%esi,%eiz,1),%esi
08760bc0 +0x0b0:  mov    (%ecx,%eax,4),%edx
08760bc3 +0x0b3:  lea    -0x1(%edx),%esi
08760bc6 +0x0b6:  test   %edx,%edx
08760bc8 +0x0b8:  mov    %esi,(%ecx,%eax,4)
08760bcb +0x0bb:  jne    08760bd4 <+0xc4>
08760bcd +0x0bd:  add    $0x1,%eax
08760bd0 +0x0c0:  cmp    %eax,%edi
08760bd2 +0x0c2:  ja     08760bc0 <+0xb0>
08760bd4 +0x0c4:  mov    -0x1c(%ebp),%esi
08760bd7 +0x0c7:  mov    %esi,(%esp)
08760bda +0x0ca:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
08760bdf +0x0cf:  test   %eax,%eax
08760be1 +0x0d1:  jne    08760b84 <+0x74>
08760be3 +0x0d3:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
08760be8 +0x0d8:  mov    %esi,(%esp)
08760beb +0x0db:  mov    %eax,0x4(%esp)
08760bef +0x0df:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08760bf4 +0x0e4:  add    $0x3c,%esp
08760bf7 +0x0e7:  mov    %esi,%eax
08760bf9 +0x0e9:  pop    %ebx
08760bfa +0x0ea:  pop    %esi
08760bfb +0x0eb:  pop    %edi
08760bfc +0x0ec:  pop    %ebp
08760bfd +0x0ed:  ret
08760bfe +0x0ee:  xchg   %ax,%ax
08760c00 +0x0f0:  mov    %eax,0x8(%esp)
08760c04 +0x0f4:  lea    0x8(%esi),%eax
08760c07 +0x0f7:  mov    %ecx,0x4(%esp)
08760c0b +0x0fb:  movl   $0x1,0x10(%esp)
08760c13 +0x103:  mov    %edi,0xc(%esp)
08760c17 +0x107:  mov    %eax,(%esp)
08760c1a +0x10a:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
08760c1f +0x10f:  mov    (%esi),%edx
08760c21 +0x111:  mov    %edi,%ecx
08760c23 +0x113:  sub    %edx,%ecx
08760c25 +0x115:  shl    $0x2,%ecx
08760c28 +0x118:  mov    %eax,0x4(%esi)
08760c2b +0x11b:  lea    (%eax,%edx,4),%eax
08760c2e +0x11e:  mov    %ecx,0x8(%esp)
08760c32 +0x122:  movl   $0x0,0x4(%esp)
08760c3a +0x12a:  mov    %eax,(%esp)
08760c3d +0x12d:  call   0807dcc0 <_init+0x5b8>
08760c42 +0x132:  mov    0x4(%esi),%ecx
08760c45 +0x135:  mov    %edi,(%esi)
08760c47 +0x137:  jmp    08760b7b <+0x6b>
08760c4c +0x13c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::operator++ @ 0x8760b10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() */

Integer * __thiscall TaoCrypt::Integer::operator++(Integer *this)

{
  uint uVar1;
  uint uVar2;
  Integer *pIVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  if (*(int *)(this + 0xc) == 1) {
    puVar5 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar6 = *puVar5;
    uVar2 = uVar6 - 1;
    *puVar5 = uVar2;
    if ((uVar6 < uVar2) && (1 < uVar1)) {
      uVar2 = puVar5[1];
      puVar5[1] = uVar2 - 1;
      uVar6 = 1;
      while ((uVar2 == 0 && (uVar6 = uVar6 + 1, uVar6 < uVar1))) {
        uVar2 = puVar5[uVar6];
        puVar5[uVar6] = uVar2 - 1;
      }
    }
    iVar4 = WordCount(this);
    if (iVar4 == 0) {
      pIVar3 = (Integer *)Zero();
      operator=(this,pIVar3);
      return this;
    }
  }
  else {
    puVar5 = *(uint **)(this + 4);
    uVar1 = *(uint *)this;
    uVar6 = *puVar5;
    uVar2 = uVar6 + 1;
    *puVar5 = uVar2;
    if (uVar2 < uVar6) {
      if (uVar1 < 2) {
LAB_08760b6c:
        uVar2 = *(uint *)this;
        uVar1 = uVar2 * 2;
        if (uVar2 < uVar1) {
          iVar4 = AllocatorWithCleanup<unsigned_int>::reallocate
                            ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar5,uVar2,uVar1,
                             true);
          *(int *)(this + 4) = iVar4;
          memset((void *)(iVar4 + *(int *)this * 4),0,(uVar1 - *(int *)this) * 4);
          puVar5 = *(uint **)(this + 4);
          *(uint *)this = uVar1;
          uVar2 = uVar1;
        }
        puVar5[uVar2 >> 1] = 1;
      }
      else {
        uVar2 = 1;
        uVar6 = puVar5[1] + 1;
        puVar5[1] = uVar6;
        while (uVar6 == 0) {
          uVar2 = uVar2 + 1;
          if (uVar1 <= uVar2) goto LAB_08760b6c;
          uVar6 = puVar5[uVar2] + 1;
          puVar5[uVar2] = uVar6;
        }
      }
    }
  }
  return this;
}
```

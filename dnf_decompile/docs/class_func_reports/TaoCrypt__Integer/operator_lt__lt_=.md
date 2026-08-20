# operator<<=

`_ZN8TaoCrypt7IntegerlSEj`

`TaoCrypt::Integer::operator<<=(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875eda0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875eda0  _ZN8TaoCrypt7IntegerlSEj
#           TaoCrypt::Integer::operator<<=(unsigned int)
# range [0x0875eda0, 0x0875ef3b]
0875eda0 +0x000:  push   %ebp
0875eda1 +0x001:  mov    %esp,%ebp
0875eda3 +0x003:  push   %edi
0875eda4 +0x004:  push   %esi
0875eda5 +0x005:  push   %ebx
0875eda6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875edab +0x00b:  add    $0xc0dded,%ebx
0875edb1 +0x011:  sub    $0x4c,%esp
0875edb4 +0x014:  mov    0x8(%ebp),%eax
0875edb7 +0x017:  mov    0xc(%ebp),%esi
0875edba +0x01a:  mov    %eax,(%esp)
0875edbd +0x01d:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875edc2 +0x022:  mov    %esi,%edx
0875edc4 +0x024:  mov    %esi,%ecx
0875edc6 +0x026:  add    $0x1f,%esi
0875edc9 +0x029:  and    $0x1f,%ecx
0875edcc +0x02c:  shr    $0x5,%esi
0875edcf +0x02f:  shr    $0x5,%edx
0875edd2 +0x032:  mov    %edx,-0x1c(%ebp)
0875edd5 +0x035:  mov    %ecx,-0x24(%ebp)
0875edd8 +0x038:  mov    %eax,-0x20(%ebp)
0875eddb +0x03b:  add    %esi,%eax
0875eddd +0x03d:  cmp    $0x8,%eax
0875ede0 +0x040:  jbe    0875ef18 <+0x178>
0875ede6 +0x046:  cmp    $0x10,%eax
0875ede9 +0x049:  mov    $0x10,%esi
0875edee +0x04e:  jbe    0875ee08 <+0x68>
0875edf0 +0x050:  cmp    $0x20,%eax
0875edf3 +0x053:  mov    $0x20,%si
0875edf7 +0x057:  jbe    0875ee08 <+0x68>
0875edf9 +0x059:  cmp    $0x40,%eax
0875edfc +0x05c:  mov    $0x40,%si
0875ee00 +0x060:  ja     0875ef28 <+0x188>
0875ee06 +0x066:  xchg   %ax,%ax
0875ee08 +0x068:  mov    0x8(%ebp),%edi
0875ee0b +0x06b:  mov    (%edi),%eax
0875ee0d +0x06d:  cmp    %eax,%esi
0875ee0f +0x06f:  jbe    0875ee5a <+0xba>
0875ee11 +0x071:  movl   $0x1,0x10(%esp)
0875ee19 +0x079:  mov    %esi,0xc(%esp)
0875ee1d +0x07d:  mov    %eax,0x8(%esp)
0875ee21 +0x081:  mov    0x4(%edi),%eax
0875ee24 +0x084:  mov    %eax,0x4(%esp)
0875ee28 +0x088:  mov    %edi,%eax
0875ee2a +0x08a:  add    $0x8,%eax
0875ee2d +0x08d:  mov    %eax,(%esp)
0875ee30 +0x090:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875ee35 +0x095:  mov    (%edi),%edx
0875ee37 +0x097:  mov    %esi,%ecx
0875ee39 +0x099:  sub    %edx,%ecx
0875ee3b +0x09b:  shl    $0x2,%ecx
0875ee3e +0x09e:  mov    %eax,0x4(%edi)
0875ee41 +0x0a1:  lea    (%eax,%edx,4),%eax
0875ee44 +0x0a4:  mov    %ecx,0x8(%esp)
0875ee48 +0x0a8:  movl   $0x0,0x4(%esp)
0875ee50 +0x0b0:  mov    %eax,(%esp)
0875ee53 +0x0b3:  call   0807dcc0 <_init+0x5b8>
0875ee58 +0x0b8:  mov    %esi,(%edi)
0875ee5a +0x0ba:  mov    -0x20(%ebp),%edx
0875ee5d +0x0bd:  mov    -0x1c(%ebp),%esi
0875ee60 +0x0c0:  add    -0x1c(%ebp),%edx
0875ee63 +0x0c3:  cmp    -0x1c(%ebp),%edx
0875ee66 +0x0c6:  mov    0x8(%ebp),%eax
0875ee69 +0x0c9:  cmovbe %edx,%esi
0875ee6c +0x0cc:  test   %esi,%esi
0875ee6e +0x0ce:  mov    0x4(%eax),%edi
0875ee71 +0x0d1:  je     0875eeb6 <+0x116>
0875ee73 +0x0d3:  lea    -0x1(%edx),%eax
0875ee76 +0x0d6:  cmp    %esi,%eax
0875ee78 +0x0d8:  jb     0875eea4 <+0x104>
0875ee7a +0x0da:  mov    %edx,%ecx
0875ee7c +0x0dc:  sub    %esi,%ecx
0875ee7e +0x0de:  lea    -0x4(%edi,%ecx,4),%ecx
0875ee82 +0x0e2:  lea    -0x4(%edi,%edx,4),%edx
0875ee86 +0x0e6:  mov    %edi,-0x28(%ebp)
0875ee89 +0x0e9:  lea    0x0(%esi,%eiz,1),%esi
0875ee90 +0x0f0:  mov    (%ecx),%edi
0875ee92 +0x0f2:  sub    $0x1,%eax
0875ee95 +0x0f5:  sub    $0x4,%ecx
0875ee98 +0x0f8:  mov    %edi,(%edx)
0875ee9a +0x0fa:  sub    $0x4,%edx
0875ee9d +0x0fd:  cmp    %esi,%eax
0875ee9f +0x0ff:  jae    0875ee90 <+0xf0>
0875eea1 +0x101:  mov    -0x28(%ebp),%edi
0875eea4 +0x104:  xor    %eax,%eax
0875eea6 +0x106:  xchg   %ax,%ax
0875eea8 +0x108:  movl   $0x0,(%edi,%eax,4)
0875eeaf +0x10f:  add    $0x1,%eax
0875eeb2 +0x112:  cmp    %esi,%eax
0875eeb4 +0x114:  jb     0875eea8 <+0x108>
0875eeb6 +0x116:  mov    -0x24(%ebp),%ecx
0875eeb9 +0x119:  mov    -0x1c(%ebp),%edx
0875eebc +0x11c:  test   %ecx,%ecx
0875eebe +0x11e:  lea    (%edi,%edx,4),%esi
0875eec1 +0x121:  je     0875ef0c <+0x16c>
0875eec3 +0x123:  mov    -0x20(%ebp),%ecx
0875eec6 +0x126:  add    $0x1,%ecx
0875eec9 +0x129:  mov    %ecx,-0x20(%ebp)
0875eecc +0x12c:  je     0875ef0c <+0x16c>
0875eece +0x12e:  mov    -0x24(%ebp),%edi
0875eed1 +0x131:  xor    %eax,%eax
0875eed3 +0x133:  movl   $0x20,-0x1c(%ebp)
0875eeda +0x13a:  sub    %edi,-0x1c(%ebp)
0875eedd +0x13d:  xor    %edi,%edi
0875eedf +0x13f:  mov    %edi,-0x2c(%ebp)
0875eee2 +0x142:  lea    0x0(%esi),%esi
0875eee8 +0x148:  mov    (%esi,%eax,4),%edx
0875eeeb +0x14b:  movzbl -0x24(%ebp),%ecx
0875eeef +0x14f:  mov    %edx,%edi
0875eef1 +0x151:  shl    %cl,%edi
0875eef3 +0x153:  mov    -0x2c(%ebp),%ecx
0875eef6 +0x156:  or     %ecx,%edi
0875eef8 +0x158:  movzbl -0x1c(%ebp),%ecx
0875eefc +0x15c:  mov    %edi,(%esi,%eax,4)
0875eeff +0x15f:  add    $0x1,%eax
0875ef02 +0x162:  shr    %cl,%edx
0875ef04 +0x164:  cmp    %eax,-0x20(%ebp)
0875ef07 +0x167:  mov    %edx,-0x2c(%ebp)
0875ef0a +0x16a:  ja     0875eee8 <+0x148>
0875ef0c +0x16c:  mov    0x8(%ebp),%eax
0875ef0f +0x16f:  add    $0x4c,%esp
0875ef12 +0x172:  pop    %ebx
0875ef13 +0x173:  pop    %esi
0875ef14 +0x174:  pop    %edi
0875ef15 +0x175:  pop    %ebp
0875ef16 +0x176:  ret
0875ef17 +0x177:  nop
0875ef18 +0x178:  mov    -0x6678b8(%ebx,%eax,4),%esi
0875ef1f +0x17f:  jmp    0875ee08 <+0x68>
0875ef24 +0x184:  lea    0x0(%esi,%eiz,1),%esi
0875ef28 +0x188:  sub    $0x1,%eax
0875ef2b +0x18b:  mov    $0x1,%si
0875ef2f +0x18f:  mov    %eax,(%esp)
0875ef32 +0x192:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
0875ef37 +0x197:  mov    %eax,%ecx
0875ef39 +0x199:  shl    %cl,%esi
0875ef3b +0x19b:  jmp    0875ee08 <+0x68>
```

## 反编译 C

```c
// TaoCrypt::Integer::operator<<= @ 0x875eda0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

Integer * __thiscall TaoCrypt::Integer::operator<<=(Integer *this,uint param_1)

{
  undefined4 uVar1;
  sbyte sVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint local_30;
  byte local_20;
  
  iVar4 = WordCount(this);
  uVar9 = param_1 >> 5;
  uVar5 = iVar4 + (param_1 + 0x1f >> 5);
  if (uVar5 < 9) {
    uVar11 = (&RoundupSizeTable)[uVar5];
  }
  else {
    uVar11 = 0x10;
    if (((0x10 < uVar5) && (uVar11 = 0x20, 0x20 < uVar5)) && (uVar11 = 0x40, 0x40 < uVar5)) {
      bVar3 = BitPrecision(uVar5 - 1);
      uVar11 = 1 << (bVar3 & 0x1f);
    }
  }
  if (*(uint *)this < uVar11) {
    iVar6 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar11,true);
    *(int *)(this + 4) = iVar6;
    memset((void *)(iVar6 + *(int *)this * 4),0,(uVar11 - *(int *)this) * 4);
    *(uint *)this = uVar11;
  }
  uVar11 = iVar4 + uVar9;
  uVar5 = uVar9;
  if (uVar11 <= uVar9) {
    uVar5 = uVar11;
  }
  iVar6 = *(int *)(this + 4);
  if (uVar5 != 0) {
    uVar7 = uVar11 - 1;
    if (uVar5 <= uVar7) {
      puVar8 = (undefined4 *)(iVar6 + -4 + (uVar11 - uVar5) * 4);
      puVar10 = (undefined4 *)(iVar6 + -4 + uVar11 * 4);
      do {
        uVar1 = *puVar8;
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + -1;
        *puVar10 = uVar1;
        puVar10 = puVar10 + -1;
      } while (uVar5 <= uVar7);
    }
    uVar11 = 0;
    do {
      *(undefined4 *)(iVar6 + uVar11 * 4) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  iVar6 = iVar6 + uVar9 * 4;
  if (((param_1 & 0x1f) != 0) && (iVar4 != -1)) {
    uVar5 = 0;
    sVar2 = (sbyte)(param_1 & 0x1f);
    local_20 = 0x20 - sVar2;
    local_30 = 0;
    do {
      uVar9 = *(uint *)(iVar6 + uVar5 * 4);
      *(uint *)(iVar6 + uVar5 * 4) = uVar9 << sVar2 | local_30;
      uVar5 = uVar5 + 1;
      local_30 = uVar9 >> (local_20 & 0x1f);
    } while (uVar5 < iVar4 + 1U);
  }
  return this;
}
```

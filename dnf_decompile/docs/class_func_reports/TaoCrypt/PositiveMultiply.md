# PositiveMultiply

`_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_`

`TaoCrypt::PositiveMultiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08761e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08761e50  _ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_
#           TaoCrypt::PositiveMultiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x08761e50, 0x087620fc]
08761e50 +0x000:  push   %ebp
08761e51 +0x001:  mov    %esp,%ebp
08761e53 +0x003:  push   %edi
08761e54 +0x004:  push   %esi
08761e55 +0x005:  push   %ebx
08761e56 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08761e5b +0x00b:  add    $0xc0ad3d,%ebx
08761e61 +0x011:  sub    $0x6c,%esp
08761e64 +0x014:  mov    0xc(%ebp),%eax
08761e67 +0x017:  mov    0x8(%ebp),%esi
08761e6a +0x01a:  mov    %eax,(%esp)
08761e6d +0x01d:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
08761e72 +0x022:  cmp    $0x8,%eax
08761e75 +0x025:  jbe    08762088 <+0x238>
08761e7b +0x02b:  cmp    $0x10,%eax
08761e7e +0x02e:  movl   $0x10,-0x30(%ebp)
08761e85 +0x035:  jbe    08761ea8 <+0x58>
08761e87 +0x037:  cmp    $0x20,%eax
08761e8a +0x03a:  movl   $0x20,-0x30(%ebp)
08761e91 +0x041:  jbe    08761ea8 <+0x58>
08761e93 +0x043:  cmp    $0x40,%eax
08761e96 +0x046:  movl   $0x40,-0x30(%ebp)
08761e9d +0x04d:  ja     08762098 <+0x248>
08761ea3 +0x053:  nop
08761ea4 +0x054:  lea    0x0(%esi,%eiz,1),%esi
08761ea8 +0x058:  mov    0x10(%ebp),%eax
08761eab +0x05b:  mov    %eax,(%esp)
08761eae +0x05e:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
08761eb3 +0x063:  cmp    $0x8,%eax
08761eb6 +0x066:  jbe    08762078 <+0x228>
08761ebc +0x06c:  cmp    $0x10,%eax
08761ebf +0x06f:  movl   $0x10,-0x2c(%ebp)
08761ec6 +0x076:  jbe    08761ee8 <+0x98>
08761ec8 +0x078:  cmp    $0x20,%eax
08761ecb +0x07b:  movl   $0x20,-0x2c(%ebp)
08761ed2 +0x082:  jbe    08761ee8 <+0x98>
08761ed4 +0x084:  cmp    $0x40,%eax
08761ed7 +0x087:  movl   $0x40,-0x2c(%ebp)
08761ede +0x08e:  ja     087620b8 <+0x268>
08761ee4 +0x094:  lea    0x0(%esi,%eiz,1),%esi
08761ee8 +0x098:  mov    -0x2c(%ebp),%edi
08761eeb +0x09b:  add    -0x30(%ebp),%edi
08761eee +0x09e:  cmp    $0x8,%edi
08761ef1 +0x0a1:  jbe    08762060 <+0x210>
08761ef7 +0x0a7:  cmp    $0x10,%edi
08761efa +0x0aa:  mov    $0x10,%edx
08761eff +0x0af:  movl   $0x40,-0x4c(%ebp)
08761f06 +0x0b6:  jbe    08761f28 <+0xd8>
08761f08 +0x0b8:  cmp    $0x20,%edi
08761f0b +0x0bb:  mov    $0x20,%dl
08761f0d +0x0bd:  movl   $0x80,-0x4c(%ebp)
08761f14 +0x0c4:  jbe    08761f28 <+0xd8>
08761f16 +0x0c6:  cmp    $0x40,%edi
08761f19 +0x0c9:  mov    $0x40,%dl
08761f1b +0x0cb:  movl   $0x100,-0x4c(%ebp)
08761f22 +0x0d2:  ja     087620d8 <+0x288>
08761f28 +0x0d8:  mov    (%esi),%ecx
08761f2a +0x0da:  mov    0x4(%esi),%eax
08761f2d +0x0dd:  cmp    %ecx,%edx
08761f2f +0x0df:  mov    %ecx,-0x34(%ebp)
08761f32 +0x0e2:  je     08761f57 <+0x107>
08761f34 +0x0e4:  mov    %eax,0x4(%esp)
08761f38 +0x0e8:  lea    0x8(%esi),%eax
08761f3b +0x0eb:  mov    %eax,(%esp)
08761f3e +0x0ee:  mov    %edx,-0x38(%ebp)
08761f41 +0x0f1:  mov    %ecx,0x8(%esp)
08761f45 +0x0f5:  call   08763b80 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x360>  ; TaoCrypt::Integer::IsSquare() const+0x360
08761f4a +0x0fa:  mov    -0x38(%ebp),%edx
08761f4d +0x0fd:  xor    %eax,%eax
08761f4f +0x0ff:  test   %edx,%edx
08761f51 +0x101:  jne    08762040 <+0x1f0>
08761f57 +0x107:  mov    %edx,(%esi)
08761f59 +0x109:  mov    -0x4c(%ebp),%edx
08761f5c +0x10c:  mov    %eax,0x4(%esi)
08761f5f +0x10f:  movl   $0x0,0x4(%esp)
08761f67 +0x117:  mov    %eax,(%esp)
08761f6a +0x11a:  mov    %edx,0x8(%esp)
08761f6e +0x11e:  call   0807dcc0 <_init+0x5b8>
08761f73 +0x123:  xor    %eax,%eax
08761f75 +0x125:  test   %edi,%edi
08761f77 +0x127:  movl   $0x0,0xc(%esi)
08761f7e +0x12e:  mov    %edi,-0x24(%ebp)
08761f81 +0x131:  je     08761f96 <+0x146>
08761f83 +0x133:  shl    $0x2,%edi
08761f86 +0x136:  mov    %edi,(%esp)
08761f89 +0x139:  movb   $0x0,0x4(%esp)
08761f8e +0x13e:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08761f93 +0x143:  mov    -0x24(%ebp),%edi
08761f96 +0x146:  mov    %eax,-0x20(%ebp)
08761f99 +0x149:  mov    %eax,0x4(%esp)
08761f9d +0x14d:  lea    -0x1c(%ebp),%eax
08761fa0 +0x150:  mov    %edi,0xc(%esp)
08761fa4 +0x154:  mov    %edi,0x8(%esp)
08761fa8 +0x158:  movl   $0x0,0x10(%esp)
08761fb0 +0x160:  mov    %eax,(%esp)
08761fb3 +0x163:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
08761fb8 +0x168:  mov    %edi,-0x24(%ebp)
08761fbb +0x16b:  shl    $0x2,%edi
08761fbe +0x16e:  mov    %edi,0x8(%esp)
08761fc2 +0x172:  movl   $0x0,0x4(%esp)
08761fca +0x17a:  mov    %eax,-0x20(%ebp)
08761fcd +0x17d:  mov    %eax,(%esp)
08761fd0 +0x180:  call   0807dcc0 <_init+0x5b8>
08761fd5 +0x185:  mov    -0x2c(%ebp),%ecx
08761fd8 +0x188:  mov    0x10(%ebp),%edx
08761fdb +0x18b:  mov    %ecx,0x14(%esp)
08761fdf +0x18f:  mov    -0x30(%ebp),%ecx
08761fe2 +0x192:  mov    0x4(%edx),%eax
08761fe5 +0x195:  mov    0xc(%ebp),%edx
08761fe8 +0x198:  mov    %ecx,0xc(%esp)
08761fec +0x19c:  mov    %eax,0x10(%esp)
08761ff0 +0x1a0:  mov    0x4(%edx),%eax
08761ff3 +0x1a3:  mov    %eax,0x8(%esp)
08761ff7 +0x1a7:  mov    -0x20(%ebp),%eax
08761ffa +0x1aa:  mov    %eax,0x4(%esp)
08761ffe +0x1ae:  mov    0x4(%esi),%eax
08762001 +0x1b1:  mov    %eax,(%esp)
08762004 +0x1b4:  call   0875c610 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j>  ; TaoCrypt::AsymmetricMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
08762009 +0x1b9:  mov    -0x24(%ebp),%eax
0876200c +0x1bc:  mov    -0x20(%ebp),%esi
0876200f +0x1bf:  movl   $0x0,0x4(%esp)
08762017 +0x1c7:  shl    $0x2,%eax
0876201a +0x1ca:  mov    %esi,(%esp)
0876201d +0x1cd:  mov    %eax,0x8(%esp)
08762021 +0x1d1:  call   0807dcc0 <_init+0x5b8>
08762026 +0x1d6:  mov    %esi,(%esp)
08762029 +0x1d9:  movb   $0x0,0x4(%esp)
0876202e +0x1de:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762033 +0x1e3:  add    $0x6c,%esp
08762036 +0x1e6:  pop    %ebx
08762037 +0x1e7:  pop    %esi
08762038 +0x1e8:  pop    %edi
08762039 +0x1e9:  pop    %ebp
0876203a +0x1ea:  ret
0876203b +0x1eb:  nop
0876203c +0x1ec:  lea    0x0(%esi,%eiz,1),%esi
08762040 +0x1f0:  mov    -0x4c(%ebp),%eax
08762043 +0x1f3:  mov    %edx,-0x38(%ebp)
08762046 +0x1f6:  movb   $0x0,0x4(%esp)
0876204b +0x1fb:  mov    %eax,(%esp)
0876204e +0x1fe:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08762053 +0x203:  mov    -0x38(%ebp),%edx
08762056 +0x206:  jmp    08761f57 <+0x107>
0876205b +0x20b:  nop
0876205c +0x20c:  lea    0x0(%esi,%eiz,1),%esi
08762060 +0x210:  mov    -0x6678b8(%ebx,%edi,4),%edx
08762067 +0x217:  lea    0x0(,%edx,4),%eax
0876206e +0x21e:  mov    %eax,-0x4c(%ebp)
08762071 +0x221:  jmp    08761f28 <+0xd8>
08762076 +0x226:  xchg   %ax,%ax
08762078 +0x228:  mov    -0x6678b8(%ebx,%eax,4),%eax
0876207f +0x22f:  mov    %eax,-0x2c(%ebp)
08762082 +0x232:  jmp    08761ee8 <+0x98>
08762087 +0x237:  nop
08762088 +0x238:  mov    -0x6678b8(%ebx,%eax,4),%eax
0876208f +0x23f:  mov    %eax,-0x30(%ebp)
08762092 +0x242:  jmp    08761ea8 <+0x58>
08762097 +0x247:  nop
08762098 +0x248:  sub    $0x1,%eax
0876209b +0x24b:  mov    %eax,(%esp)
0876209e +0x24e:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
087620a3 +0x253:  movl   $0x1,-0x30(%ebp)
087620aa +0x25a:  mov    %eax,%ecx
087620ac +0x25c:  shll   %cl,-0x30(%ebp)
087620af +0x25f:  jmp    08761ea8 <+0x58>
087620b4 +0x264:  lea    0x0(%esi,%eiz,1),%esi
087620b8 +0x268:  sub    $0x1,%eax
087620bb +0x26b:  mov    %eax,(%esp)
087620be +0x26e:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
087620c3 +0x273:  movl   $0x1,-0x2c(%ebp)
087620ca +0x27a:  mov    %eax,%ecx
087620cc +0x27c:  shll   %cl,-0x2c(%ebp)
087620cf +0x27f:  jmp    08761ee8 <+0x98>
087620d4 +0x284:  lea    0x0(%esi,%eiz,1),%esi
087620d8 +0x288:  lea    -0x1(%edi),%eax
087620db +0x28b:  mov    %eax,(%esp)
087620de +0x28e:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
087620e3 +0x293:  mov    $0x1,%edx
087620e8 +0x298:  mov    %eax,%ecx
087620ea +0x29a:  shl    %cl,%edx
087620ec +0x29c:  lea    0x0(,%edx,4),%eax
087620f3 +0x2a3:  mov    %eax,-0x4c(%ebp)
087620f6 +0x2a6:  jmp    08761f28 <+0xd8>
087620fb +0x2ab:  nop
087620fc +0x2ac:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::PositiveMultiply @ 0x8761e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveMultiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

void TaoCrypt::PositiveMultiply(Integer *param_1,Integer *param_2,Integer *param_3)

{
  byte bVar1;
  uint uVar2;
  void *__s;
  uint *puVar3;
  uint uVar4;
  void *pvVar5;
  size_t local_50;
  uint local_34;
  uint local_30;
  AllocatorWithCleanup<unsigned_int> local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x8761e5b;
  uVar2 = Integer::WordCount(param_2);
  if (uVar2 < 9) {
    local_34 = (&RoundupSizeTable)[uVar2];
  }
  else {
    local_34 = 0x10;
    if (((0x10 < uVar2) && (local_34 = 0x20, 0x20 < uVar2)) && (local_34 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      local_34 = 1 << (bVar1 & 0x1f);
    }
  }
  uVar2 = Integer::WordCount(param_3);
  if (uVar2 < 9) {
    local_30 = (&RoundupSizeTable)[uVar2];
  }
  else {
    local_30 = 0x10;
    if (((0x10 < uVar2) && (local_30 = 0x20, 0x20 < uVar2)) && (local_30 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      local_30 = 1 << (bVar1 & 0x1f);
    }
  }
  uVar2 = local_30 + local_34;
  if (uVar2 < 9) {
    uVar4 = (&RoundupSizeTable)[uVar2];
    local_50 = uVar4 * 4;
  }
  else {
    uVar4 = 0x10;
    local_50 = 0x40;
    if (0x10 < uVar2) {
      uVar4 = 0x20;
      local_50 = 0x80;
      if (0x20 < uVar2) {
        uVar4 = 0x40;
        local_50 = 0x100;
        if (0x40 < uVar2) {
          bVar1 = BitPrecision(uVar2 - 1);
          uVar4 = 1 << (bVar1 & 0x1f);
          local_50 = uVar4 * 4;
        }
      }
    }
  }
  __s = *(void **)(param_1 + 4);
  if (uVar4 != *(uint *)param_1) {
    pvVar5 = __s;
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(param_1 + 8),__s,*(uint *)param_1);
    __s = (void *)0x0;
    if (uVar4 != 0) {
      __s = operator_new__(local_50,(uint)pvVar5 & 0xffffff00);
    }
  }
  *(uint *)param_1 = uVar4;
  *(void **)(param_1 + 4) = __s;
  uVar4 = 0;
  memset(__s,0,local_50);
  puVar3 = (uint *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar2 != 0) {
    puVar3 = operator_new__(uVar2 * 4,uVar4 & 0xffffff00);
  }
  puVar3 = (uint *)AllocatorWithCleanup<unsigned_int>::reallocate(local_20,puVar3,uVar2,uVar2,false)
  ;
  memset(puVar3,0,uVar2 * 4);
  AsymmetricMultiply(*(uint **)(param_1 + 4),puVar3,*(uint **)(param_2 + 4),local_34,
                     *(uint **)(param_3 + 4),local_30);
  uVar4 = 0;
  memset(puVar3,0,uVar2 * 4);
  operator_delete__(puVar3,uVar4 & 0xffffff00);
  return;
}
```

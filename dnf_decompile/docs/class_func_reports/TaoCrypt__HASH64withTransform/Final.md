# Final

`_ZN8TaoCrypt19HASH64withTransform5FinalEPh`

`TaoCrypt::HASH64withTransform::Final(unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASH64withTransform` | `0x087590c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087590c0  _ZN8TaoCrypt19HASH64withTransform5FinalEPh
#           TaoCrypt::HASH64withTransform::Final(unsigned char*)
# range [0x087590c0, 0x087593ef]
087590c0 +0x000:  push   %ebp
087590c1 +0x001:  mov    %esp,%ebp
087590c3 +0x003:  push   %edi
087590c4 +0x004:  push   %esi
087590c5 +0x005:  push   %ebx
087590c6 +0x006:  sub    $0x3c,%esp
087590c9 +0x009:  mov    0x8(%ebp),%edi
087590cc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087590d1 +0x011:  add    $0xc13ac7,%ebx
087590d7 +0x017:  mov    (%edi),%eax
087590d9 +0x019:  lea    0x50(%edi),%esi
087590dc +0x01c:  mov    %edi,(%esp)
087590df +0x01f:  call   *0x14(%eax)
087590e2 +0x022:  mov    %eax,-0x20(%ebp)
087590e5 +0x025:  mov    (%edi),%eax
087590e7 +0x027:  mov    %edi,(%esp)
087590ea +0x02a:  call   *0x18(%eax)
087590ed +0x02d:  mov    %eax,-0x28(%ebp)
087590f0 +0x030:  mov    (%edi),%eax
087590f2 +0x032:  mov    %edi,(%esp)
087590f5 +0x035:  call   *0x20(%eax)
087590f8 +0x038:  mov    %eax,-0x1c(%ebp)
087590fb +0x03b:  mov    (%edi),%eax
087590fd +0x03d:  mov    %edi,(%esp)
08759100 +0x040:  call   *0x1c(%eax)
08759103 +0x043:  mov    %eax,-0x24(%ebp)
08759106 +0x046:  mov    0x4(%edi),%eax
08759109 +0x049:  mov    %edi,(%esp)
0875910c +0x04c:  mov    %eax,0x4(%esp)
08759110 +0x050:  call   08758c40 <_ZN8TaoCrypt19HASH64withTransform9AddLengthEj>  ; TaoCrypt::HASH64withTransform::AddLength(unsigned int)
08759115 +0x055:  mov    0x8(%edi),%eax
08759118 +0x058:  lea    0x0(,%eax,8),%edx
0875911f +0x05f:  mov    %edx,-0x30(%ebp)
08759122 +0x062:  mov    0xc(%edi),%edx
08759125 +0x065:  shr    $0x1d,%eax
08759128 +0x068:  lea    (%eax,%edx,8),%eax
0875912b +0x06b:  mov    %eax,-0x2c(%ebp)
0875912e +0x06e:  mov    0x4(%edi),%eax
08759131 +0x071:  movb   $0x80,0x50(%edi,%eax,1)
08759136 +0x076:  add    $0x1,%eax
08759139 +0x079:  cmp    %eax,-0x1c(%ebp)
0875913c +0x07c:  mov    %eax,0x4(%edi)
0875913f +0x07f:  jb     087592c0 <+0x200>
08759145 +0x085:  mov    -0x20(%ebp),%edx
08759148 +0x088:  shr    $0x3,%edx
0875914b +0x08b:  mov    %edx,-0x20(%ebp)
0875914e +0x08e:  mov    -0x1c(%ebp),%edx
08759151 +0x091:  movl   $0x0,0x4(%esp)
08759159 +0x099:  sub    %eax,%edx
0875915b +0x09b:  lea    (%esi,%eax,1),%eax
0875915e +0x09e:  mov    %edx,0x8(%esp)
08759162 +0x0a2:  mov    %eax,(%esp)
08759165 +0x0a5:  call   0807dcc0 <_init+0x5b8>
0875916a +0x0aa:  mov    -0x24(%ebp),%ecx
0875916d +0x0ad:  test   %ecx,%ecx
0875916f +0x0af:  je     08759288 <+0x1c8>
08759175 +0x0b5:  mov    -0x1c(%ebp),%eax
08759178 +0x0b8:  shr    $0x3,%eax
0875917b +0x0bb:  test   %eax,%eax
0875917d +0x0bd:  mov    %eax,-0x1c(%ebp)
08759180 +0x0c0:  je     087591cd <+0x10d>
08759182 +0x0c2:  xor    %eax,%eax
08759184 +0x0c4:  mov    %edi,-0x24(%ebp)
08759187 +0x0c7:  nop
08759188 +0x0c8:  mov    0x4(%esi,%eax,8),%edx
0875918c +0x0cc:  mov    (%esi,%eax,8),%edi
0875918f +0x0cf:  mov    %edx,%ecx
08759191 +0x0d1:  ror    $0x18,%ecx
08759194 +0x0d4:  ror    $0x8,%edx
08759197 +0x0d7:  and    $0xff00ff,%ecx
0875919d +0x0dd:  and    $0xff00ff00,%edx
087591a3 +0x0e3:  or     %edx,%ecx
087591a5 +0x0e5:  mov    %edi,%edx
087591a7 +0x0e7:  ror    $0x18,%edx
087591aa +0x0ea:  ror    $0x8,%edi
087591ad +0x0ed:  and    $0xff00ff,%edx
087591b3 +0x0f3:  and    $0xff00ff00,%edi
087591b9 +0x0f9:  or     %edi,%edx
087591bb +0x0fb:  mov    %ecx,(%esi,%eax,8)
087591be +0x0fe:  mov    %edx,0x4(%esi,%eax,8)
087591c2 +0x102:  add    $0x1,%eax
087591c5 +0x105:  cmp    %eax,-0x1c(%ebp)
087591c8 +0x108:  ja     08759188 <+0xc8>
087591ca +0x10a:  mov    -0x24(%ebp),%edi
087591cd +0x10d:  mov    -0x20(%ebp),%eax
087591d0 +0x110:  lea    0x10(%edi),%esi
087591d3 +0x113:  mov    -0x2c(%ebp),%edx
087591d6 +0x116:  add    $0x8,%eax
087591d9 +0x119:  mov    %edx,(%edi,%eax,8)
087591dc +0x11c:  mov    -0x30(%ebp),%edx
087591df +0x11f:  movl   $0x0,0x4(%edi,%eax,8)
087591e7 +0x127:  mov    -0x20(%ebp),%eax
087591ea +0x12a:  add    $0x9,%eax
087591ed +0x12d:  mov    %edx,(%edi,%eax,8)
087591f0 +0x130:  movl   $0x0,0x4(%edi,%eax,8)
087591f8 +0x138:  mov    (%edi),%eax
087591fa +0x13a:  mov    %edi,(%esp)
087591fd +0x13d:  call   *0x24(%eax)
08759200 +0x140:  mov    -0x28(%ebp),%eax
08759203 +0x143:  shr    $0x3,%eax
08759206 +0x146:  mov    %eax,-0x1c(%ebp)
08759209 +0x149:  mov    -0x1c(%ebp),%edx
0875920c +0x14c:  xor    %eax,%eax
0875920e +0x14e:  test   %edx,%edx
08759210 +0x150:  je     0875925d <+0x19d>
08759212 +0x152:  mov    %edi,-0x20(%ebp)
08759215 +0x155:  lea    0x0(%esi),%esi
08759218 +0x158:  mov    0x4(%esi,%eax,8),%edx
0875921c +0x15c:  mov    (%esi,%eax,8),%edi
0875921f +0x15f:  mov    %edx,%ecx
08759221 +0x161:  ror    $0x18,%ecx
08759224 +0x164:  ror    $0x8,%edx
08759227 +0x167:  and    $0xff00ff,%ecx
0875922d +0x16d:  and    $0xff00ff00,%edx
08759233 +0x173:  or     %edx,%ecx
08759235 +0x175:  mov    %edi,%edx
08759237 +0x177:  ror    $0x18,%edx
0875923a +0x17a:  ror    $0x8,%edi
0875923d +0x17d:  and    $0xff00ff,%edx
08759243 +0x183:  and    $0xff00ff00,%edi
08759249 +0x189:  or     %edi,%edx
0875924b +0x18b:  mov    %ecx,(%esi,%eax,8)
0875924e +0x18e:  mov    %edx,0x4(%esi,%eax,8)
08759252 +0x192:  add    $0x1,%eax
08759255 +0x195:  cmp    %eax,-0x1c(%ebp)
08759258 +0x198:  ja     08759218 <+0x158>
0875925a +0x19a:  mov    -0x20(%ebp),%edi
0875925d +0x19d:  mov    -0x28(%ebp),%eax
08759260 +0x1a0:  mov    %esi,0x4(%esp)
08759264 +0x1a4:  mov    %eax,0x8(%esp)
08759268 +0x1a8:  mov    0xc(%ebp),%eax
0875926b +0x1ab:  mov    %eax,(%esp)
0875926e +0x1ae:  call   0807d8a0 <_init+0x198>
08759273 +0x1b3:  mov    (%edi),%eax
08759275 +0x1b5:  mov    %edi,(%esp)
08759278 +0x1b8:  call   *0x10(%eax)
0875927b +0x1bb:  add    $0x3c,%esp
0875927e +0x1be:  pop    %ebx
0875927f +0x1bf:  pop    %esi
08759280 +0x1c0:  pop    %edi
08759281 +0x1c1:  pop    %ebp
08759282 +0x1c2:  ret
08759283 +0x1c3:  nop
08759284 +0x1c4:  lea    0x0(%esi,%eiz,1),%esi
08759288 +0x1c8:  mov    -0x20(%ebp),%eax
0875928b +0x1cb:  lea    0x10(%edi),%esi
0875928e +0x1ce:  mov    -0x30(%ebp),%edx
08759291 +0x1d1:  add    $0x8,%eax
08759294 +0x1d4:  mov    %edx,(%edi,%eax,8)
08759297 +0x1d7:  mov    -0x2c(%ebp),%edx
0875929a +0x1da:  movl   $0x0,0x4(%edi,%eax,8)
087592a2 +0x1e2:  mov    -0x20(%ebp),%eax
087592a5 +0x1e5:  add    $0x9,%eax
087592a8 +0x1e8:  mov    %edx,(%edi,%eax,8)
087592ab +0x1eb:  movl   $0x0,0x4(%edi,%eax,8)
087592b3 +0x1f3:  mov    (%edi),%eax
087592b5 +0x1f5:  mov    %edi,(%esp)
087592b8 +0x1f8:  call   *0x24(%eax)
087592bb +0x1fb:  jmp    0875925d <+0x19d>
087592bd +0x1fd:  lea    0x0(%esi),%esi
087592c0 +0x200:  mov    -0x20(%ebp),%edx
087592c3 +0x203:  movl   $0x0,0x4(%esp)
087592cb +0x20b:  sub    %eax,%edx
087592cd +0x20d:  lea    (%esi,%eax,1),%eax
087592d0 +0x210:  mov    %edx,0x8(%esp)
087592d4 +0x214:  mov    %eax,(%esp)
087592d7 +0x217:  call   0807dcc0 <_init+0x5b8>
087592dc +0x21c:  mov    -0x24(%ebp),%edx
087592df +0x21f:  mov    -0x20(%ebp),%eax
087592e2 +0x222:  test   %edx,%edx
087592e4 +0x224:  mov    %eax,0x4(%edi)
087592e7 +0x227:  je     08759348 <+0x288>
087592e9 +0x229:  mov    %eax,%edx
087592eb +0x22b:  shr    $0x3,%edx
087592ee +0x22e:  test   %edx,%edx
087592f0 +0x230:  mov    %edx,-0x20(%ebp)
087592f3 +0x233:  je     0875934e <+0x28e>
087592f5 +0x235:  xor    %eax,%eax
087592f7 +0x237:  mov    %edi,-0x34(%ebp)
087592fa +0x23a:  lea    0x0(%esi),%esi
08759300 +0x240:  mov    0x4(%esi,%eax,8),%edx
08759304 +0x244:  mov    (%esi,%eax,8),%edi
08759307 +0x247:  mov    %edx,%ecx
08759309 +0x249:  ror    $0x18,%ecx
0875930c +0x24c:  ror    $0x8,%edx
0875930f +0x24f:  and    $0xff00ff,%ecx
08759315 +0x255:  and    $0xff00ff00,%edx
0875931b +0x25b:  or     %edx,%ecx
0875931d +0x25d:  mov    %edi,%edx
0875931f +0x25f:  ror    $0x18,%edx
08759322 +0x262:  ror    $0x8,%edi
08759325 +0x265:  and    $0xff00ff,%edx
0875932b +0x26b:  and    $0xff00ff00,%edi
08759331 +0x271:  or     %edi,%edx
08759333 +0x273:  mov    %ecx,(%esi,%eax,8)
08759336 +0x276:  mov    %edx,0x4(%esi,%eax,8)
0875933a +0x27a:  add    $0x1,%eax
0875933d +0x27d:  cmp    %eax,-0x20(%ebp)
08759340 +0x280:  ja     08759300 <+0x240>
08759342 +0x282:  mov    -0x34(%ebp),%edi
08759345 +0x285:  jmp    0875934e <+0x28e>
08759347 +0x287:  nop
08759348 +0x288:  shr    $0x3,%eax
0875934b +0x28b:  mov    %eax,-0x20(%ebp)
0875934e +0x28e:  mov    (%edi),%eax
08759350 +0x290:  mov    %edi,(%esp)
08759353 +0x293:  call   *0x24(%eax)
08759356 +0x296:  xor    %eax,%eax
08759358 +0x298:  movl   $0x0,0x4(%edi)
0875935f +0x29f:  jmp    0875914e <+0x8e>
08759364 +0x2a4:  nop
08759365 +0x2a5:  nop
08759366 +0x2a6:  nop
08759367 +0x2a7:  nop
08759368 +0x2a8:  nop
08759369 +0x2a9:  nop
0875936a +0x2aa:  nop
0875936b +0x2ab:  nop
0875936c +0x2ac:  nop
0875936d +0x2ad:  nop
0875936e +0x2ae:  nop
0875936f +0x2af:  nop
08759370 +0x2b0:  call   087245c4 <__i686.get_pc_thunk.cx>
08759375 +0x2b5:  add    $0xc13823,%ecx
0875937b +0x2bb:  push   %ebp
0875937c +0x2bc:  mov    %esp,%ebp
0875937e +0x2be:  mov    -0x3c(%ecx),%eax
08759384 +0x2c4:  lea    0x8(%eax),%edx
08759387 +0x2c7:  mov    0x8(%ebp),%eax
0875938a +0x2ca:  mov    %edx,(%eax)
0875938c +0x2cc:  pop    %ebp
0875938d +0x2cd:  ret
0875938e +0x2ce:  nop
0875938f +0x2cf:  nop
08759390 +0x2d0:  call   087245c4 <__i686.get_pc_thunk.cx>
08759395 +0x2d5:  add    $0xc13803,%ecx
0875939b +0x2db:  push   %ebp
0875939c +0x2dc:  mov    %esp,%ebp
0875939e +0x2de:  mov    -0x3c(%ecx),%eax
087593a4 +0x2e4:  lea    0x8(%eax),%edx
087593a7 +0x2e7:  mov    0x8(%ebp),%eax
087593aa +0x2ea:  mov    %edx,(%eax)
087593ac +0x2ec:  pop    %ebp
087593ad +0x2ed:  ret
087593ae +0x2ee:  nop
087593af +0x2ef:  nop
087593b0 +0x2f0:  call   087245c4 <__i686.get_pc_thunk.cx>
087593b5 +0x2f5:  add    $0xc137e3,%ecx
087593bb +0x2fb:  push   %ebp
087593bc +0x2fc:  mov    %esp,%ebp
087593be +0x2fe:  mov    -0x3c(%ecx),%eax
087593c4 +0x304:  lea    0x8(%eax),%edx
087593c7 +0x307:  mov    0x8(%ebp),%eax
087593ca +0x30a:  mov    %edx,(%eax)
087593cc +0x30c:  pop    %ebp
087593cd +0x30d:  ret
087593ce +0x30e:  nop
087593cf +0x30f:  nop
087593d0 +0x310:  call   087245c4 <__i686.get_pc_thunk.cx>
087593d5 +0x315:  add    $0xc137c3,%ecx
087593db +0x31b:  push   %ebp
087593dc +0x31c:  mov    %esp,%ebp
087593de +0x31e:  mov    -0x3c(%ecx),%eax
087593e4 +0x324:  lea    0x8(%eax),%edx
087593e7 +0x327:  mov    0x8(%ebp),%eax
087593ea +0x32a:  mov    %edx,(%eax)
087593ec +0x32c:  pop    %ebp
087593ed +0x32d:  ret
087593ee +0x32e:  nop
087593ef +0x32f:  nop
```

## 反编译 C

```c
// TaoCrypt::HASH64withTransform::Final @ 0x87590c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASH64withTransform::Final(unsigned char*) */

void __thiscall TaoCrypt::HASH64withTransform::Final(HASH64withTransform *this,uchar *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint __n;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_24;
  
  local_24 = (**(code **)(*(int *)this + 0x14))(this);
  __n = (**(code **)(*(int *)this + 0x18))(this);
  uVar6 = (**(code **)(*(int *)this + 0x20))(this);
  iVar7 = (**(code **)(*(int *)this + 0x1c))(this);
  AddLength(this,*(uint *)(this + 4));
  iVar2 = *(uint *)(this + 8) * 8;
  iVar1 = (*(uint *)(this + 8) >> 0x1d) + *(int *)(this + 0xc) * 8;
  iVar3 = *(int *)(this + 4);
  this[iVar3 + 0x50] = (HASH64withTransform)0x80;
  uVar8 = iVar3 + 1;
  *(uint *)(this + 4) = uVar8;
  if (uVar6 < uVar8) {
    memset(this + iVar3 + 0x51,0,local_24 - uVar8);
    *(uint *)(this + 4) = local_24;
    if ((iVar7 != 0) && (local_24 >> 3 != 0)) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 8 + 0x54);
        uVar5 = *(uint *)(this + uVar8 * 8 + 0x50);
        *(uint *)(this + uVar8 * 8 + 0x50) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        *(uint *)(this + uVar8 * 8 + 0x54) =
             uVar5 >> 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00ff00 | uVar5 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_24 >> 3);
    }
    (**(code **)(*(int *)this + 0x24))(this);
    uVar8 = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  local_24 = local_24 >> 3;
  memset(this + uVar8 + 0x50,0,uVar6 - uVar8);
  if (iVar7 == 0) {
    *(int *)(this + (local_24 + 8) * 8) = iVar2;
    *(undefined4 *)(this + (local_24 + 8) * 8 + 4) = 0;
    *(int *)(this + (local_24 + 9) * 8) = iVar1;
    *(undefined4 *)(this + (local_24 + 9) * 8 + 4) = 0;
    (**(code **)(*(int *)this + 0x24))(this);
  }
  else {
    if (uVar6 >> 3 != 0) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 8 + 0x54);
        uVar5 = *(uint *)(this + uVar8 * 8 + 0x50);
        *(uint *)(this + uVar8 * 8 + 0x50) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        *(uint *)(this + uVar8 * 8 + 0x54) =
             uVar5 >> 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00ff00 | uVar5 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6 >> 3);
    }
    *(int *)(this + (local_24 + 8) * 8) = iVar1;
    *(undefined4 *)(this + (local_24 + 8) * 8 + 4) = 0;
    *(int *)(this + (local_24 + 9) * 8) = iVar2;
    *(undefined4 *)(this + (local_24 + 9) * 8 + 4) = 0;
    (**(code **)(*(int *)this + 0x24))(this);
    uVar6 = 0;
    if (__n >> 3 != 0) {
      do {
        uVar8 = *(uint *)(this + uVar6 * 8 + 0x14);
        uVar4 = *(uint *)(this + uVar6 * 8 + 0x10);
        *(uint *)(this + uVar6 * 8 + 0x10) =
             uVar8 >> 0x18 | (uVar8 & 0xff00) << 8 | uVar8 >> 8 & 0xff00ff00 | uVar8 << 0x18;
        *(uint *)(this + uVar6 * 8 + 0x14) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        uVar6 = uVar6 + 1;
      } while (uVar6 < __n >> 3);
    }
  }
  memcpy(param_1,this + 0x10,__n);
  (**(code **)(*(int *)this + 0x10))(this);
  return;
}
```

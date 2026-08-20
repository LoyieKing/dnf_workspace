# Square4

`_ZN8TaoCrypt8Portable7Square4EPjPKj`

`TaoCrypt::Portable::Square4(unsigned int*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759c30  _ZN8TaoCrypt8Portable7Square4EPjPKj
#           TaoCrypt::Portable::Square4(unsigned int*, unsigned int const*)
# range [0x08759c30, 0x08759f0a]
08759c30 +0x000:  push   %ebp
08759c31 +0x001:  mov    %esp,%ebp
08759c33 +0x003:  push   %edi
08759c34 +0x004:  push   %esi
08759c35 +0x005:  sub    $0x20,%esp
08759c38 +0x008:  mov    0xc(%ebp),%eax
08759c3b +0x00b:  mov    0xc(%ebp),%edi
08759c3e +0x00e:  movl   $0x0,-0xc(%ebp)
08759c45 +0x015:  mov    (%eax),%esi
08759c47 +0x017:  mov    %esi,%eax
08759c49 +0x019:  mul    %esi
08759c4b +0x01b:  mov    %edx,%esi
08759c4d +0x01d:  mov    0x8(%ebp),%edx
08759c50 +0x020:  mov    %eax,(%edx)
08759c52 +0x022:  mov    (%edi),%ecx
08759c54 +0x024:  mov    0x4(%edi),%eax
08759c57 +0x027:  xor    %edi,%edi
08759c59 +0x029:  mul    %ecx
08759c5b +0x02b:  add    %eax,%esi
08759c5d +0x02d:  adc    %edx,%edi
08759c5f +0x02f:  mov    %eax,-0x18(%ebp)
08759c62 +0x032:  mov    %edi,%ecx
08759c64 +0x034:  xor    %edi,%edi
08759c66 +0x036:  mov    %edx,-0x14(%ebp)
08759c69 +0x039:  add    -0x18(%ebp),%esi
08759c6c +0x03c:  adc    -0x14(%ebp),%edi
08759c6f +0x03f:  mov    %ecx,-0x18(%ebp)
08759c72 +0x042:  mov    -0x18(%ebp),%edx
08759c75 +0x045:  movl   $0x0,-0x14(%ebp)
08759c7c +0x04c:  mov    -0x14(%ebp),%ecx
08759c7f +0x04f:  mov    %edi,-0x10(%ebp)
08759c82 +0x052:  add    %edx,-0x10(%ebp)
08759c85 +0x055:  adc    %ecx,-0xc(%ebp)
08759c88 +0x058:  xor    %edi,%edi
08759c8a +0x05a:  mov    -0xc(%ebp),%eax
08759c8d +0x05d:  mov    0xc(%ebp),%edx
08759c90 +0x060:  mov    -0x10(%ebp),%ecx
08759c93 +0x063:  mov    %eax,-0x20(%ebp)
08759c96 +0x066:  mov    0x8(%ebp),%eax
08759c99 +0x069:  mov    %esi,0x4(%eax)
08759c9c +0x06c:  mov    (%edx),%esi
08759c9e +0x06e:  mov    0x8(%edx),%eax
08759ca1 +0x071:  mul    %esi
08759ca3 +0x073:  mov    %ecx,%esi
08759ca5 +0x075:  add    %eax,%esi
08759ca7 +0x077:  mov    %eax,-0x10(%ebp)
08759caa +0x07a:  adc    %edx,%edi
08759cac +0x07c:  mov    %esi,-0x18(%ebp)
08759caf +0x07f:  mov    -0x20(%ebp),%esi
08759cb2 +0x082:  mov    %edi,%eax
08759cb4 +0x084:  mov    %edx,-0xc(%ebp)
08759cb7 +0x087:  xor    %edi,%edi
08759cb9 +0x089:  xor    %edx,%edx
08759cbb +0x08b:  add    %eax,%esi
08759cbd +0x08d:  adc    %edx,%edi
08759cbf +0x08f:  mov    %esi,%ecx
08759cc1 +0x091:  mov    -0x18(%ebp),%esi
08759cc4 +0x094:  mov    %edi,-0x20(%ebp)
08759cc7 +0x097:  xor    %edi,%edi
08759cc9 +0x099:  add    -0x10(%ebp),%esi
08759ccc +0x09c:  adc    -0xc(%ebp),%edi
08759ccf +0x09f:  xor    %edx,%edx
08759cd1 +0x0a1:  mov    %esi,-0x18(%ebp)
08759cd4 +0x0a4:  mov    %edi,%esi
08759cd6 +0x0a6:  xor    %edi,%edi
08759cd8 +0x0a8:  add    %ecx,%esi
08759cda +0x0aa:  adc    %edx,%edi
08759cdc +0x0ac:  mov    %esi,%ecx
08759cde +0x0ae:  mov    %edi,%eax
08759ce0 +0x0b0:  xor    %edi,%edi
08759ce2 +0x0b2:  add    -0x20(%ebp),%eax
08759ce5 +0x0b5:  mov    %eax,-0x20(%ebp)
08759ce8 +0x0b8:  mov    0xc(%ebp),%eax
08759ceb +0x0bb:  mov    0x4(%eax),%esi
08759cee +0x0be:  mov    %esi,%eax
08759cf0 +0x0c0:  mul    %esi
08759cf2 +0x0c2:  mov    -0x18(%ebp),%esi
08759cf5 +0x0c5:  mov    %eax,-0x10(%ebp)
08759cf8 +0x0c8:  add    %esi,-0x10(%ebp)
08759cfb +0x0cb:  mov    %edx,-0xc(%ebp)
08759cfe +0x0ce:  adc    %edi,-0xc(%ebp)
08759d01 +0x0d1:  xor    %edx,%edx
08759d03 +0x0d3:  mov    -0xc(%ebp),%eax
08759d06 +0x0d6:  xor    %edi,%edi
08759d08 +0x0d8:  mov    %eax,%esi
08759d0a +0x0da:  mov    -0x20(%ebp),%eax
08759d0d +0x0dd:  add    %ecx,%esi
08759d0f +0x0df:  adc    %edx,%edi
08759d11 +0x0e1:  mov    0x8(%ebp),%edx
08759d14 +0x0e4:  mov    %esi,%ecx
08759d16 +0x0e6:  add    %edi,%eax
08759d18 +0x0e8:  mov    -0x10(%ebp),%edi
08759d1b +0x0eb:  mov    %eax,-0x20(%ebp)
08759d1e +0x0ee:  mov    0xc(%ebp),%eax
08759d21 +0x0f1:  mov    %edi,0x8(%edx)
08759d24 +0x0f4:  xor    %edi,%edi
08759d26 +0x0f6:  mov    (%eax),%esi
08759d28 +0x0f8:  mov    0xc(%eax),%eax
08759d2b +0x0fb:  mul    %esi
08759d2d +0x0fd:  mov    %ecx,%esi
08759d2f +0x0ff:  add    %eax,%esi
08759d31 +0x101:  mov    %esi,-0x18(%ebp)
08759d34 +0x104:  mov    -0x20(%ebp),%esi
08759d37 +0x107:  adc    %edx,%edi
08759d39 +0x109:  mov    %eax,-0x10(%ebp)
08759d3c +0x10c:  mov    %edi,%eax
08759d3e +0x10e:  xor    %edi,%edi
08759d40 +0x110:  mov    %edx,-0xc(%ebp)
08759d43 +0x113:  xor    %edx,%edx
08759d45 +0x115:  add    %eax,%esi
08759d47 +0x117:  adc    %edx,%edi
08759d49 +0x119:  mov    %esi,%ecx
08759d4b +0x11b:  mov    %edi,-0x20(%ebp)
08759d4e +0x11e:  mov    -0x18(%ebp),%esi
08759d51 +0x121:  xor    %edi,%edi
08759d53 +0x123:  add    -0x10(%ebp),%esi
08759d56 +0x126:  adc    -0xc(%ebp),%edi
08759d59 +0x129:  xor    %edx,%edx
08759d5b +0x12b:  movl   $0x0,-0x14(%ebp)
08759d62 +0x132:  mov    %esi,-0x18(%ebp)
08759d65 +0x135:  mov    %edi,%esi
08759d67 +0x137:  xor    %edi,%edi
08759d69 +0x139:  add    %ecx,%esi
08759d6b +0x13b:  adc    %edx,%edi
08759d6d +0x13d:  mov    %esi,%ecx
08759d6f +0x13f:  mov    %edi,%eax
08759d71 +0x141:  xor    %edi,%edi
08759d73 +0x143:  add    -0x20(%ebp),%eax
08759d76 +0x146:  mov    %eax,-0x20(%ebp)
08759d79 +0x149:  mov    0xc(%ebp),%eax
08759d7c +0x14c:  mov    0x4(%eax),%esi
08759d7f +0x14f:  mov    0x8(%eax),%eax
08759d82 +0x152:  mul    %esi
08759d84 +0x154:  mov    -0x18(%ebp),%esi
08759d87 +0x157:  add    %eax,%esi
08759d89 +0x159:  adc    %edx,%edi
08759d8b +0x15b:  mov    %esi,-0x18(%ebp)
08759d8e +0x15e:  mov    %edi,%esi
08759d90 +0x160:  xor    %edi,%edi
08759d92 +0x162:  mov    %edx,-0xc(%ebp)
08759d95 +0x165:  xor    %edx,%edx
08759d97 +0x167:  add    %ecx,%esi
08759d99 +0x169:  adc    %edx,%edi
08759d9b +0x16b:  mov    %esi,%ecx
08759d9d +0x16d:  mov    -0x18(%ebp),%esi
08759da0 +0x170:  mov    %eax,-0x10(%ebp)
08759da3 +0x173:  mov    %edi,%eax
08759da5 +0x175:  xor    %edi,%edi
08759da7 +0x177:  add    -0x20(%ebp),%eax
08759daa +0x17a:  add    -0x10(%ebp),%esi
08759dad +0x17d:  adc    -0xc(%ebp),%edi
08759db0 +0x180:  mov    %eax,-0x20(%ebp)
08759db3 +0x183:  mov    -0x14(%ebp),%edx
08759db6 +0x186:  mov    %ecx,-0x18(%ebp)
08759db9 +0x189:  mov    -0x18(%ebp),%eax
08759dbc +0x18c:  mov    %edi,-0x10(%ebp)
08759dbf +0x18f:  add    %eax,-0x10(%ebp)
08759dc2 +0x192:  mov    -0x10(%ebp),%ecx
08759dc5 +0x195:  movl   $0x0,-0xc(%ebp)
08759dcc +0x19c:  adc    %edx,-0xc(%ebp)
08759dcf +0x19f:  mov    -0xc(%ebp),%eax
08759dd2 +0x1a2:  add    -0x20(%ebp),%eax
08759dd5 +0x1a5:  mov    %eax,-0x20(%ebp)
08759dd8 +0x1a8:  mov    0xc(%ebp),%edi
08759ddb +0x1ab:  mov    0x8(%ebp),%edx
08759dde +0x1ae:  mov    %esi,0xc(%edx)
08759de1 +0x1b1:  mov    0xc(%edi),%esi
08759de4 +0x1b4:  mov    0x4(%edi),%eax
08759de7 +0x1b7:  xor    %edi,%edi
08759de9 +0x1b9:  mul    %esi
08759deb +0x1bb:  mov    %ecx,%esi
08759ded +0x1bd:  add    %eax,%esi
08759def +0x1bf:  mov    %esi,-0x18(%ebp)
08759df2 +0x1c2:  mov    -0x20(%ebp),%esi
08759df5 +0x1c5:  adc    %edx,%edi
08759df7 +0x1c7:  mov    %eax,-0x10(%ebp)
08759dfa +0x1ca:  mov    %edi,%eax
08759dfc +0x1cc:  xor    %edi,%edi
08759dfe +0x1ce:  mov    %edx,-0xc(%ebp)
08759e01 +0x1d1:  xor    %edx,%edx
08759e03 +0x1d3:  add    %eax,%esi
08759e05 +0x1d5:  adc    %edx,%edi
08759e07 +0x1d7:  mov    %esi,%ecx
08759e09 +0x1d9:  mov    -0x18(%ebp),%esi
08759e0c +0x1dc:  mov    %edi,-0x20(%ebp)
08759e0f +0x1df:  xor    %edi,%edi
08759e11 +0x1e1:  add    -0x10(%ebp),%esi
08759e14 +0x1e4:  adc    -0xc(%ebp),%edi
08759e17 +0x1e7:  xor    %edx,%edx
08759e19 +0x1e9:  mov    %esi,-0x18(%ebp)
08759e1c +0x1ec:  mov    %edi,%esi
08759e1e +0x1ee:  xor    %edi,%edi
08759e20 +0x1f0:  add    %ecx,%esi
08759e22 +0x1f2:  adc    %edx,%edi
08759e24 +0x1f4:  mov    0xc(%ebp),%edx
08759e27 +0x1f7:  mov    %esi,%ecx
08759e29 +0x1f9:  mov    %edi,%eax
08759e2b +0x1fb:  xor    %edi,%edi
08759e2d +0x1fd:  add    -0x20(%ebp),%eax
08759e30 +0x200:  mov    0x8(%edx),%esi
08759e33 +0x203:  mov    %eax,-0x20(%ebp)
08759e36 +0x206:  mov    %esi,%eax
08759e38 +0x208:  mul    %esi
08759e3a +0x20a:  mov    -0x18(%ebp),%esi
08759e3d +0x20d:  mov    %eax,-0x10(%ebp)
08759e40 +0x210:  add    %esi,-0x10(%ebp)
08759e43 +0x213:  mov    %edx,-0xc(%ebp)
08759e46 +0x216:  adc    %edi,-0xc(%ebp)
08759e49 +0x219:  xor    %edx,%edx
08759e4b +0x21b:  mov    -0xc(%ebp),%eax
08759e4e +0x21e:  xor    %edi,%edi
08759e50 +0x220:  mov    %eax,%esi
08759e52 +0x222:  mov    -0x20(%ebp),%eax
08759e55 +0x225:  add    %ecx,%esi
08759e57 +0x227:  adc    %edx,%edi
08759e59 +0x229:  mov    0x8(%ebp),%edx
08759e5c +0x22c:  mov    %esi,%ecx
08759e5e +0x22e:  add    %edi,%eax
08759e60 +0x230:  mov    -0x10(%ebp),%edi
08759e63 +0x233:  mov    %eax,-0x18(%ebp)
08759e66 +0x236:  mov    0xc(%ebp),%eax
08759e69 +0x239:  mov    %edi,0x10(%edx)
08759e6c +0x23c:  xor    %edi,%edi
08759e6e +0x23e:  mov    0x8(%eax),%esi
08759e71 +0x241:  mov    0xc(%eax),%eax
08759e74 +0x244:  mul    %esi
08759e76 +0x246:  mov    %ecx,%esi
08759e78 +0x248:  add    %eax,%esi
08759e7a +0x24a:  mov    %eax,-0x10(%ebp)
08759e7d +0x24d:  mov    %esi,%ecx
08759e7f +0x24f:  mov    -0x18(%ebp),%esi
08759e82 +0x252:  adc    %edx,%edi
08759e84 +0x254:  mov    %edi,%eax
08759e86 +0x256:  xor    %edi,%edi
08759e88 +0x258:  mov    %edx,-0xc(%ebp)
08759e8b +0x25b:  xor    %edx,%edx
08759e8d +0x25d:  add    %eax,%esi
08759e8f +0x25f:  adc    %edx,%edi
08759e91 +0x261:  mov    %esi,%edx
08759e93 +0x263:  mov    %edi,-0x18(%ebp)
08759e96 +0x266:  mov    %ecx,%esi
08759e98 +0x268:  xor    %edi,%edi
08759e9a +0x26a:  add    -0x10(%ebp),%esi
08759e9d +0x26d:  adc    -0xc(%ebp),%edi
08759ea0 +0x270:  mov    %edx,-0x20(%ebp)
08759ea3 +0x273:  mov    -0x20(%ebp),%eax
08759ea6 +0x276:  movl   $0x0,-0x1c(%ebp)
08759ead +0x27d:  mov    -0x1c(%ebp),%edx
08759eb0 +0x280:  mov    %edi,-0x10(%ebp)
08759eb3 +0x283:  add    %eax,-0x10(%ebp)
08759eb6 +0x286:  mov    -0x10(%ebp),%ecx
08759eb9 +0x289:  movl   $0x0,-0xc(%ebp)
08759ec0 +0x290:  adc    %edx,-0xc(%ebp)
08759ec3 +0x293:  xor    %edi,%edi
08759ec5 +0x295:  mov    -0xc(%ebp),%eax
08759ec8 +0x298:  add    -0x18(%ebp),%eax
08759ecb +0x29b:  mov    0x8(%ebp),%edx
08759ece +0x29e:  mov    %eax,-0x18(%ebp)
08759ed1 +0x2a1:  mov    0xc(%ebp),%eax
08759ed4 +0x2a4:  mov    %esi,0x14(%edx)
08759ed7 +0x2a7:  mov    0xc(%eax),%esi
08759eda +0x2aa:  mov    %esi,%eax
08759edc +0x2ac:  mul    %esi
08759ede +0x2ae:  mov    %eax,-0x10(%ebp)
08759ee1 +0x2b1:  add    %ecx,-0x10(%ebp)
08759ee4 +0x2b4:  mov    -0x10(%ebp),%ecx
08759ee7 +0x2b7:  mov    %edx,-0xc(%ebp)
08759eea +0x2ba:  mov    0x8(%ebp),%edx
08759eed +0x2bd:  adc    %edi,-0xc(%ebp)
08759ef0 +0x2c0:  mov    -0xc(%ebp),%eax
08759ef3 +0x2c3:  mov    %ecx,0x18(%edx)
08759ef6 +0x2c6:  add    -0x18(%ebp),%eax
08759ef9 +0x2c9:  mov    %eax,0x1c(%edx)
08759efc +0x2cc:  add    $0x20,%esp
08759eff +0x2cf:  pop    %esi
08759f00 +0x2d0:  pop    %edi
08759f01 +0x2d1:  pop    %ebp
08759f02 +0x2d2:  ret
08759f03 +0x2d3:  nop
08759f04 +0x2d4:  lea    0x0(%esi),%esi
08759f0a +0x2da:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Portable::Square4 @ 0x8759c30

/* TaoCrypt::Portable::Square4(unsigned int*, unsigned int const*) */

void TaoCrypt::Portable::Square4(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong local_1c;
  
  uVar1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  *param_1 = (uint)uVar1;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)*param_2 + (uVar1 >> 0x20);
  uVar9 = (uint)(uVar1 >> 0x20);
  lVar2 = (ulonglong)param_2[1] * (ulonglong)*param_2 + (uVar1 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar5 = (uint)CARRY4(uVar10,uVar9);
  param_1[1] = (uint)lVar2;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)*param_2;
  lVar3 = lVar2 + (ulonglong)(uVar10 + uVar9);
  uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar9 = (uint)lVar3;
  uVar6 = uVar5 + uVar11;
  uVar7 = uVar9 + (uint)lVar2;
  uVar12 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar9,(uint)lVar2);
  uVar8 = uVar12 + uVar6;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[1];
  uVar10 = (uint)lVar2;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar10,uVar7);
  uVar5 = (uint)CARRY4(uVar12,uVar6) + (uint)CARRY4(uVar5,uVar11) + (uint)CARRY4(uVar9,uVar8);
  param_1[2] = uVar10 + uVar7;
  uVar4 = (ulonglong)param_2[3] * (ulonglong)*param_2 + (ulonglong)(uVar9 + uVar8);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar9 = uVar5 + uVar7;
  local_1c = (ulonglong)param_2[3] * (ulonglong)*param_2 + (uVar4 & 0xffffffff);
  uVar8 = (uint)(local_1c >> 0x20);
  local_1c = local_1c & 0xffffffff;
  uVar10 = uVar8 + uVar9;
  local_1c = (ulonglong)param_2[2] * (ulonglong)param_2[1] + local_1c;
  uVar11 = (uint)(local_1c >> 0x20);
  uVar6 = uVar11 + uVar10;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)param_2[1] + (local_1c & 0xffffffff);
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar10 = (uint)CARRY4(uVar12,uVar6) +
           (uint)CARRY4(uVar11,uVar10) + (uint)CARRY4(uVar8,uVar9) + (uint)CARRY4(uVar5,uVar7);
  param_1[3] = (uint)lVar2;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (ulonglong)(uVar12 + uVar6);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar10 + uVar11;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar7 = (uint)lVar2;
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar8 = uVar12 + uVar6;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)param_2[2];
  uVar5 = (uint)lVar2;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar5,uVar7);
  uVar10 = (uint)CARRY4(uVar12,uVar6) + (uint)CARRY4(uVar10,uVar11) + (uint)CARRY4(uVar9,uVar8);
  param_1[4] = uVar5 + uVar7;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[2] + (ulonglong)(uVar9 + uVar8);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar10 + uVar7;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar9 = uVar8 + uVar6;
  param_1[5] = (uint)lVar2;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[3];
  uVar5 = (uint)lVar2;
  param_1[6] = uVar5 + uVar9;
  param_1[7] = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar5,uVar9) +
               (uint)CARRY4(uVar8,uVar6) + (uint)CARRY4(uVar10,uVar7);
  return;
}
```

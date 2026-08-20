# DecryptBody

`_ZN10Encryption11DecryptBodyEtPviRj`

`Encryption::DecryptBody(unsigned short, void*, int, unsigned int&)`

| 类 | 地址 |
|---|---|
| `Encryption` | `0x0848dd0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848dd0c  _ZN10Encryption11DecryptBodyEtPviRj
#           Encryption::DecryptBody(unsigned short, void*, int, unsigned int&)
# range [0x0848dd0c, 0x0848e08d]
0848dd0c +0x000:  push   %ebp
0848dd0d +0x001:  mov    %esp,%ebp
0848dd0f +0x003:  push   %edi
0848dd10 +0x004:  push   %esi
0848dd11 +0x005:  push   %ebx
0848dd12 +0x006:  sub    $0x5bc,%esp
0848dd18 +0x00c:  mov    0x8(%ebp),%eax
0848dd1b +0x00f:  mov    %ax,-0x5ac(%ebp)
0848dd22 +0x016:  cmpl   $0x0,0x10(%ebp)
0848dd26 +0x01a:  je     0848e082 <+0x376>
0848dd2c +0x020:  movl   $0x1,-0x20(%ebp)
0848dd33 +0x027:  movl   $0x5,-0x20(%ebp)
0848dd3a +0x02e:  cmpl   $0x4,-0x20(%ebp)
0848dd3e +0x032:  jne    0848dd5e <+0x52>
0848dd40 +0x034:  mov    0xc(%ebp),%eax
0848dd43 +0x037:  mov    0x14(%ebp),%edx
0848dd46 +0x03a:  mov    %edx,0x8(%esp)
0848dd4a +0x03e:  mov    0x10(%ebp),%edx
0848dd4d +0x041:  mov    %edx,0x4(%esp)
0848dd51 +0x045:  mov    %eax,(%esp)
0848dd54 +0x048:  call   0848dc4c <_ZN10Encryption14getOriginalBufEPciRj>  ; Encryption::getOriginalBuf(char*, int, unsigned int&)
0848dd59 +0x04d:  jmp    0848e083 <+0x377>
0848dd5e +0x052:  cmpl   $0x5,-0x20(%ebp)
0848dd62 +0x056:  jne    0848ddb4 <+0xa8>
0848dd64 +0x058:  call   0848e1c6 <_GLOBAL__I__ZN10Encryption7XorSeedE+0xf8>  ; global constructors keyed to Encryption::XorSeed+0xf8
0848dd69 +0x05d:  mov    0x204(%eax),%eax
0848dd6f +0x063:  mov    (%eax),%edx
0848dd71 +0x065:  add    $0x10,%edx
0848dd74 +0x068:  mov    (%edx),%ebx
0848dd76 +0x06a:  mov    0x10(%ebp),%ecx
0848dd79 +0x06d:  mov    0xc(%ebp),%edx
0848dd7c +0x070:  mov    %ecx,0xc(%esp)
0848dd80 +0x074:  lea    -0x59d(%ebp),%ecx
0848dd86 +0x07a:  mov    %ecx,0x8(%esp)
0848dd8a +0x07e:  mov    %edx,0x4(%esp)
0848dd8e +0x082:  mov    %eax,(%esp)
0848dd91 +0x085:  call   *%ebx
0848dd93 +0x087:  mov    0x10(%ebp),%eax
0848dd96 +0x08a:  mov    %eax,0x8(%esp)
0848dd9a +0x08e:  lea    -0x59d(%ebp),%eax
0848dda0 +0x094:  mov    %eax,0x4(%esp)
0848dda4 +0x098:  mov    0xc(%ebp),%eax
0848dda7 +0x09b:  mov    %eax,(%esp)
0848ddaa +0x09e:  call   0807d8a0 <_init+0x198>
0848ddaf +0x0a3:  jmp    0848e083 <+0x377>
0848ddb4 +0x0a8:  movl   $0x4453eb5,-0x24(%ebp)
0848ddbb +0x0af:  mov    0x14(%ebp),%eax
0848ddbe +0x0b2:  mov    (%eax),%eax
0848ddc0 +0x0b4:  test   %eax,%eax
0848ddc2 +0x0b6:  je     0848ddd2 <+0xc6>
0848ddc4 +0x0b8:  mov    0x14(%ebp),%eax
0848ddc7 +0x0bb:  mov    %eax,(%esp)
0848ddca +0x0be:  call   0848d51a <_ZN10Encryption8SeedRandERj>  ; Encryption::SeedRand(unsigned int&)
0848ddcf +0x0c3:  mov    %eax,-0x24(%ebp)
0848ddd2 +0x0c6:  movl   $0x0,-0x1c(%ebp)
0848ddd9 +0x0cd:  lea    -0x24(%ebp),%eax
0848dddc +0x0d0:  add    $0x1,%eax
0848dddf +0x0d3:  movl   $0x1,0x8(%esp)
0848dde7 +0x0db:  mov    %eax,0x4(%esp)
0848ddeb +0x0df:  lea    -0x25(%ebp),%eax
0848ddee +0x0e2:  mov    %eax,(%esp)
0848ddf1 +0x0e5:  call   0807d8a0 <_init+0x198>
0848ddf6 +0x0ea:  movzbl -0x25(%ebp),%eax
0848ddfa +0x0ee:  and    $0x7,%eax
0848ddfd +0x0f1:  mov    %al,-0x25(%ebp)
0848de00 +0x0f4:  mov    -0x20(%ebp),%eax
0848de03 +0x0f7:  cmp    $0x1,%eax
0848de06 +0x0fa:  je     0848dec6 <+0x1ba>
0848de0c +0x100:  cmp    $0x1,%eax
0848de0f +0x103:  jg     0848de1a <+0x10e>
0848de11 +0x105:  test   %eax,%eax
0848de13 +0x107:  je     0848de31 <+0x125>
0848de15 +0x109:  jmp    0848e083 <+0x377>
0848de1a +0x10e:  cmp    $0x2,%eax
0848de1d +0x111:  je     0848df5b <+0x24f>
0848de23 +0x117:  cmp    $0x3,%eax
0848de26 +0x11a:  je     0848dff0 <+0x2e4>
0848de2c +0x120:  jmp    0848e083 <+0x377>
0848de31 +0x125:  movl   $0x0,-0x1c(%ebp)
0848de38 +0x12c:  jmp    0848deb0 <+0x1a4>
0848de3a +0x12e:  mov    0xc(%ebp),%edx
0848de3d +0x131:  mov    -0x1c(%ebp),%eax
0848de40 +0x134:  add    %eax,%edx
0848de42 +0x136:  mov    0xc(%ebp),%ecx
0848de45 +0x139:  mov    -0x1c(%ebp),%eax
0848de48 +0x13c:  lea    (%ecx,%eax,1),%eax
0848de4b +0x13f:  movzbl (%eax),%eax
0848de4e +0x142:  mov    %eax,%ecx
0848de50 +0x144:  mov    -0x24(%ebp),%eax
0848de53 +0x147:  xor    %ecx,%eax
0848de55 +0x149:  mov    %al,(%edx)
0848de57 +0x14b:  mov    0xc(%ebp),%edx
0848de5a +0x14e:  mov    -0x1c(%ebp),%eax
0848de5d +0x151:  add    %eax,%edx
0848de5f +0x153:  mov    0xc(%ebp),%ecx
0848de62 +0x156:  mov    -0x1c(%ebp),%eax
0848de65 +0x159:  lea    (%ecx,%eax,1),%eax
0848de68 +0x15c:  movzbl (%eax),%eax
0848de6b +0x15f:  movzbl %al,%ebx
0848de6e +0x162:  movzbl -0x25(%ebp),%eax
0848de72 +0x166:  movzbl %al,%eax
0848de75 +0x169:  mov    %ebx,%esi
0848de77 +0x16b:  mov    %eax,%ecx
0848de79 +0x16d:  shl    %cl,%esi
0848de7b +0x16f:  mov    %esi,%eax
0848de7d +0x171:  mov    %eax,%ebx
0848de7f +0x173:  mov    0xc(%ebp),%ecx
0848de82 +0x176:  mov    -0x1c(%ebp),%eax
0848de85 +0x179:  lea    (%ecx,%eax,1),%eax
0848de88 +0x17c:  movzbl (%eax),%eax
0848de8b +0x17f:  movzbl %al,%esi
0848de8e +0x182:  movzbl -0x25(%ebp),%eax
0848de92 +0x186:  movzbl %al,%eax
0848de95 +0x189:  mov    $0x8,%ecx
0848de9a +0x18e:  mov    %ecx,%edi
0848de9c +0x190:  sub    %eax,%edi
0848de9e +0x192:  mov    %edi,%eax
0848dea0 +0x194:  mov    %esi,%edi
0848dea2 +0x196:  mov    %eax,%ecx
0848dea4 +0x198:  sar    %cl,%edi
0848dea6 +0x19a:  mov    %edi,%eax
0848dea8 +0x19c:  or     %ebx,%eax
0848deaa +0x19e:  mov    %al,(%edx)
0848deac +0x1a0:  addl   $0x1,-0x1c(%ebp)
0848deb0 +0x1a4:  mov    -0x1c(%ebp),%eax
0848deb3 +0x1a7:  cmp    0x10(%ebp),%eax
0848deb6 +0x1aa:  setl   %al
0848deb9 +0x1ad:  test   %al,%al
0848debb +0x1af:  jne    0848de3a <+0x12e>
0848dec1 +0x1b5:  jmp    0848e083 <+0x377>
0848dec6 +0x1ba:  movl   $0x0,-0x1c(%ebp)
0848decd +0x1c1:  jmp    0848df45 <+0x239>
0848decf +0x1c3:  mov    0xc(%ebp),%edx
0848ded2 +0x1c6:  mov    -0x1c(%ebp),%eax
0848ded5 +0x1c9:  add    %eax,%edx
0848ded7 +0x1cb:  mov    0xc(%ebp),%ecx
0848deda +0x1ce:  mov    -0x1c(%ebp),%eax
0848dedd +0x1d1:  lea    (%ecx,%eax,1),%eax
0848dee0 +0x1d4:  movzbl (%eax),%eax
0848dee3 +0x1d7:  movzbl %al,%ebx
0848dee6 +0x1da:  movzbl -0x25(%ebp),%eax
0848deea +0x1de:  movzbl %al,%eax
0848deed +0x1e1:  mov    %ebx,%esi
0848deef +0x1e3:  mov    %eax,%ecx
0848def1 +0x1e5:  sar    %cl,%esi
0848def3 +0x1e7:  mov    %esi,%eax
0848def5 +0x1e9:  mov    %eax,%ebx
0848def7 +0x1eb:  mov    0xc(%ebp),%ecx
0848defa +0x1ee:  mov    -0x1c(%ebp),%eax
0848defd +0x1f1:  lea    (%ecx,%eax,1),%eax
0848df00 +0x1f4:  movzbl (%eax),%eax
0848df03 +0x1f7:  movzbl %al,%esi
0848df06 +0x1fa:  movzbl -0x25(%ebp),%eax
0848df0a +0x1fe:  movzbl %al,%eax
0848df0d +0x201:  mov    $0x8,%ecx
0848df12 +0x206:  mov    %ecx,%edi
0848df14 +0x208:  sub    %eax,%edi
0848df16 +0x20a:  mov    %edi,%eax
0848df18 +0x20c:  mov    %esi,%edi
0848df1a +0x20e:  mov    %eax,%ecx
0848df1c +0x210:  shl    %cl,%edi
0848df1e +0x212:  mov    %edi,%eax
0848df20 +0x214:  or     %ebx,%eax
0848df22 +0x216:  mov    %al,(%edx)
0848df24 +0x218:  mov    0xc(%ebp),%edx
0848df27 +0x21b:  mov    -0x1c(%ebp),%eax
0848df2a +0x21e:  add    %eax,%edx
0848df2c +0x220:  mov    0xc(%ebp),%ecx
0848df2f +0x223:  mov    -0x1c(%ebp),%eax
0848df32 +0x226:  lea    (%ecx,%eax,1),%eax
0848df35 +0x229:  movzbl (%eax),%eax
0848df38 +0x22c:  mov    %eax,%ecx
0848df3a +0x22e:  mov    -0x24(%ebp),%eax
0848df3d +0x231:  xor    %ecx,%eax
0848df3f +0x233:  mov    %al,(%edx)
0848df41 +0x235:  addl   $0x1,-0x1c(%ebp)
0848df45 +0x239:  mov    -0x1c(%ebp),%eax
0848df48 +0x23c:  cmp    0x10(%ebp),%eax
0848df4b +0x23f:  setl   %al
0848df4e +0x242:  test   %al,%al
0848df50 +0x244:  jne    0848decf <+0x1c3>
0848df56 +0x24a:  jmp    0848e083 <+0x377>
0848df5b +0x24f:  movl   $0x0,-0x1c(%ebp)
0848df62 +0x256:  jmp    0848dfda <+0x2ce>
0848df64 +0x258:  mov    0xc(%ebp),%edx
0848df67 +0x25b:  mov    -0x1c(%ebp),%eax
0848df6a +0x25e:  add    %eax,%edx
0848df6c +0x260:  mov    0xc(%ebp),%ecx
0848df6f +0x263:  mov    -0x1c(%ebp),%eax
0848df72 +0x266:  lea    (%ecx,%eax,1),%eax
0848df75 +0x269:  movzbl (%eax),%eax
0848df78 +0x26c:  mov    %eax,%ecx
0848df7a +0x26e:  mov    -0x24(%ebp),%eax
0848df7d +0x271:  xor    %ecx,%eax
0848df7f +0x273:  mov    %al,(%edx)
0848df81 +0x275:  mov    0xc(%ebp),%edx
0848df84 +0x278:  mov    -0x1c(%ebp),%eax
0848df87 +0x27b:  add    %eax,%edx
0848df89 +0x27d:  mov    0xc(%ebp),%ecx
0848df8c +0x280:  mov    -0x1c(%ebp),%eax
0848df8f +0x283:  lea    (%ecx,%eax,1),%eax
0848df92 +0x286:  movzbl (%eax),%eax
0848df95 +0x289:  movzbl %al,%ebx
0848df98 +0x28c:  movzbl -0x25(%ebp),%eax
0848df9c +0x290:  movzbl %al,%eax
0848df9f +0x293:  mov    %ebx,%esi
0848dfa1 +0x295:  mov    %eax,%ecx
0848dfa3 +0x297:  sar    %cl,%esi
0848dfa5 +0x299:  mov    %esi,%eax
0848dfa7 +0x29b:  mov    %eax,%ebx
0848dfa9 +0x29d:  mov    0xc(%ebp),%ecx
0848dfac +0x2a0:  mov    -0x1c(%ebp),%eax
0848dfaf +0x2a3:  lea    (%ecx,%eax,1),%eax
0848dfb2 +0x2a6:  movzbl (%eax),%eax
0848dfb5 +0x2a9:  movzbl %al,%esi
0848dfb8 +0x2ac:  movzbl -0x25(%ebp),%eax
0848dfbc +0x2b0:  movzbl %al,%eax
0848dfbf +0x2b3:  mov    $0x8,%ecx
0848dfc4 +0x2b8:  mov    %ecx,%edi
0848dfc6 +0x2ba:  sub    %eax,%edi
0848dfc8 +0x2bc:  mov    %edi,%eax
0848dfca +0x2be:  mov    %esi,%edi
0848dfcc +0x2c0:  mov    %eax,%ecx
0848dfce +0x2c2:  shl    %cl,%edi
0848dfd0 +0x2c4:  mov    %edi,%eax
0848dfd2 +0x2c6:  or     %ebx,%eax
0848dfd4 +0x2c8:  mov    %al,(%edx)
0848dfd6 +0x2ca:  addl   $0x1,-0x1c(%ebp)
0848dfda +0x2ce:  mov    -0x1c(%ebp),%eax
0848dfdd +0x2d1:  cmp    0x10(%ebp),%eax
0848dfe0 +0x2d4:  setl   %al
0848dfe3 +0x2d7:  test   %al,%al
0848dfe5 +0x2d9:  jne    0848df64 <+0x258>
0848dfeb +0x2df:  jmp    0848e083 <+0x377>
0848dff0 +0x2e4:  movl   $0x0,-0x1c(%ebp)
0848dff7 +0x2eb:  jmp    0848e06f <+0x363>
0848dff9 +0x2ed:  mov    0xc(%ebp),%edx
0848dffc +0x2f0:  mov    -0x1c(%ebp),%eax
0848dfff +0x2f3:  add    %eax,%edx
0848e001 +0x2f5:  mov    0xc(%ebp),%ecx
0848e004 +0x2f8:  mov    -0x1c(%ebp),%eax
0848e007 +0x2fb:  lea    (%ecx,%eax,1),%eax
0848e00a +0x2fe:  movzbl (%eax),%eax
0848e00d +0x301:  movzbl %al,%ebx
0848e010 +0x304:  movzbl -0x25(%ebp),%eax
0848e014 +0x308:  movzbl %al,%eax
0848e017 +0x30b:  mov    %ebx,%esi
0848e019 +0x30d:  mov    %eax,%ecx
0848e01b +0x30f:  shl    %cl,%esi
0848e01d +0x311:  mov    %esi,%eax
0848e01f +0x313:  mov    %eax,%ebx
0848e021 +0x315:  mov    0xc(%ebp),%ecx
0848e024 +0x318:  mov    -0x1c(%ebp),%eax
0848e027 +0x31b:  lea    (%ecx,%eax,1),%eax
0848e02a +0x31e:  movzbl (%eax),%eax
0848e02d +0x321:  movzbl %al,%esi
0848e030 +0x324:  movzbl -0x25(%ebp),%eax
0848e034 +0x328:  movzbl %al,%eax
0848e037 +0x32b:  mov    $0x8,%ecx
0848e03c +0x330:  mov    %ecx,%edi
0848e03e +0x332:  sub    %eax,%edi
0848e040 +0x334:  mov    %edi,%eax
0848e042 +0x336:  mov    %esi,%edi
0848e044 +0x338:  mov    %eax,%ecx
0848e046 +0x33a:  sar    %cl,%edi
0848e048 +0x33c:  mov    %edi,%eax
0848e04a +0x33e:  or     %ebx,%eax
0848e04c +0x340:  mov    %al,(%edx)
0848e04e +0x342:  mov    0xc(%ebp),%edx
0848e051 +0x345:  mov    -0x1c(%ebp),%eax
0848e054 +0x348:  add    %eax,%edx
0848e056 +0x34a:  mov    0xc(%ebp),%ecx
0848e059 +0x34d:  mov    -0x1c(%ebp),%eax
0848e05c +0x350:  lea    (%ecx,%eax,1),%eax
0848e05f +0x353:  movzbl (%eax),%eax
0848e062 +0x356:  mov    %eax,%ecx
0848e064 +0x358:  mov    -0x24(%ebp),%eax
0848e067 +0x35b:  xor    %ecx,%eax
0848e069 +0x35d:  mov    %al,(%edx)
0848e06b +0x35f:  addl   $0x1,-0x1c(%ebp)
0848e06f +0x363:  mov    -0x1c(%ebp),%eax
0848e072 +0x366:  cmp    0x10(%ebp),%eax
0848e075 +0x369:  setl   %al
0848e078 +0x36c:  test   %al,%al
0848e07a +0x36e:  jne    0848dff9 <+0x2ed>
0848e080 +0x374:  jmp    0848e083 <+0x377>
0848e082 +0x376:  nop
0848e083 +0x377:  add    $0x5bc,%esp
0848e089 +0x37d:  pop    %ebx
0848e08a +0x37e:  pop    %esi
0848e08b +0x37f:  pop    %edi
0848e08c +0x380:  pop    %ebp
0848e08d +0x381:  ret
```

## 反编译 C

```c
// Encryption::DecryptBody @ 0x848dd0c

/* WARNING: Removing unreachable block (ram,0x0848ddb4) */
/* WARNING: Removing unreachable block (ram,0x0848ddc4) */
/* WARNING: Removing unreachable block (ram,0x0848ddd2) */
/* WARNING: Removing unreachable block (ram,0x0848dec6) */
/* WARNING: Removing unreachable block (ram,0x0848df45) */
/* WARNING: Removing unreachable block (ram,0x0848decf) */
/* WARNING: Removing unreachable block (ram,0x0848df56) */
/* WARNING: Removing unreachable block (ram,0x0848de0c) */
/* WARNING: Removing unreachable block (ram,0x0848de1a) */
/* WARNING: Removing unreachable block (ram,0x0848df5b) */
/* WARNING: Removing unreachable block (ram,0x0848dfda) */
/* WARNING: Removing unreachable block (ram,0x0848df64) */
/* WARNING: Removing unreachable block (ram,0x0848dfeb) */
/* WARNING: Removing unreachable block (ram,0x0848de23) */
/* WARNING: Removing unreachable block (ram,0x0848dff0) */
/* WARNING: Removing unreachable block (ram,0x0848e06f) */
/* WARNING: Removing unreachable block (ram,0x0848dff9) */
/* WARNING: Removing unreachable block (ram,0x0848e080) */
/* WARNING: Removing unreachable block (ram,0x0848de2c) */
/* WARNING: Removing unreachable block (ram,0x0848de11) */
/* WARNING: Removing unreachable block (ram,0x0848de31) */
/* WARNING: Removing unreachable block (ram,0x0848deb0) */
/* WARNING: Removing unreachable block (ram,0x0848de3a) */
/* WARNING: Removing unreachable block (ram,0x0848dec1) */
/* WARNING: Removing unreachable block (ram,0x0848de15) */
/* WARNING: Removing unreachable block (ram,0x0848dd40) */
/* Encryption::DecryptBody(unsigned short, void*, int, unsigned int&) */

void Encryption::DecryptBody(ushort param_1,void *param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined1 local_5a1 [1405];
  undefined4 local_24;
  
  if (param_3 != 0) {
    local_24 = 5;
    iVar1 = G_EncryptTool();
    (**(code **)(**(int **)(iVar1 + 0x204) + 0x10))
              (*(int **)(iVar1 + 0x204),param_2,local_5a1,param_3);
    memcpy(param_2,local_5a1,param_3);
  }
  return;
}
```

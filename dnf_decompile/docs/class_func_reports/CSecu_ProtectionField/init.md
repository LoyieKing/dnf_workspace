# init

`_ZN21CSecu_ProtectionField4initEv`

`CSecu_ProtectionField::init()`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x0828824e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828824e  _ZN21CSecu_ProtectionField4initEv
#           CSecu_ProtectionField::init()
# range [0x0828824e, 0x082884d5]
0828824e +0x000:  push   %ebp
0828824f +0x001:  mov    %esp,%ebp
08288251 +0x003:  push   %edi
08288252 +0x004:  push   %esi
08288253 +0x005:  push   %ebx
08288254 +0x006:  sub    $0x28c,%esp
0828825a +0x00c:  movl   $0x0,-0x28(%ebp)
08288261 +0x013:  movl   $0x0,-0x24(%ebp)
08288268 +0x01a:  movl   $0x0,-0x28(%ebp)
0828826f +0x021:  jmp    08288283 <+0x35>
08288271 +0x023:  mov    -0x28(%ebp),%eax
08288274 +0x026:  movl   $0x1ff,-0x268(%ebp,%eax,4)
0828827f +0x031:  addl   $0x1,-0x28(%ebp)
08288283 +0x035:  cmpl   $0x46,-0x28(%ebp)
08288287 +0x039:  setle  %al
0828828a +0x03c:  test   %al,%al
0828828c +0x03e:  jne    08288271 <+0x23>
0828828e +0x040:  lea    -0x14c(%ebp),%edx
08288294 +0x046:  mov    $&_ZZN21CSecu_ProtectionField4initEvE6C.2279,%ebx
08288299 +0x04b:  mov    $0x25,%eax
0828829e +0x050:  mov    %edx,%edi
082882a0 +0x052:  mov    %ebx,%esi
082882a2 +0x054:  mov    %eax,%ecx
082882a4 +0x056:  rep movsl %ds:(%esi),%es:(%edi)
082882a6 +0x058:  movl   $0x25,-0x20(%ebp)
082882ad +0x05f:  movl   $0x0,-0x28(%ebp)
082882b4 +0x066:  jmp    08288350 <+0x102>
082882b9 +0x06b:  movl   $0x0,-0x24(%ebp)
082882c0 +0x072:  jmp    0828833b <+0xed>
082882c2 +0x074:  mov    -0x28(%ebp),%edx
082882c5 +0x077:  mov    -0x24(%ebp),%eax
082882c8 +0x07a:  mov    -0x14c(%ebp,%eax,4),%eax
082882cf +0x081:  cmp    %eax,%edx
082882d1 +0x083:  jne    08288337 <+0xe9>
082882d3 +0x085:  mov    -0x28(%ebp),%ebx
082882d6 +0x088:  mov    -0x28(%ebp),%eax
082882d9 +0x08b:  mov    -0x268(%ebp,%eax,4),%eax
082882e0 +0x092:  movl   $0x0,0x24(%esp)
082882e8 +0x09a:  movl   $0x80,0x20(%esp)
082882f0 +0x0a2:  movl   $0x0,0x1c(%esp)
082882f8 +0x0aa:  movl   $0x0,0x18(%esp)
08288300 +0x0b2:  movl   $0x10,0x14(%esp)
08288308 +0x0ba:  movl   $0x0,0x10(%esp)
08288310 +0x0c2:  movl   $0x0,0xc(%esp)
08288318 +0x0ca:  movl   $0x0,0x8(%esp)
08288320 +0x0d2:  movl   $0x0,0x4(%esp)
08288328 +0x0da:  mov    %eax,(%esp)
0828832b +0x0dd:  call   08288074 <_Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_>  ; ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)
08288330 +0x0e2:  mov    %eax,-0x268(%ebp,%ebx,4)
08288337 +0x0e9:  addl   $0x1,-0x24(%ebp)
0828833b +0x0ed:  mov    -0x24(%ebp),%eax
0828833e +0x0f0:  cmp    -0x20(%ebp),%eax
08288341 +0x0f3:  setl   %al
08288344 +0x0f6:  test   %al,%al
08288346 +0x0f8:  jne    082882c2 <+0x74>
0828834c +0x0fe:  addl   $0x1,-0x28(%ebp)
08288350 +0x102:  cmpl   $0x46,-0x28(%ebp)
08288354 +0x106:  setle  %al
08288357 +0x109:  test   %al,%al
08288359 +0x10b:  jne    082882b9 <+0x6b>
0828835f +0x111:  movl   $0x0,-0x28(%ebp)
08288366 +0x118:  jmp    0828837a <+0x12c>
08288368 +0x11a:  mov    -0x28(%ebp),%eax
0828836b +0x11d:  movl   $0x1ff,-0x268(%ebp,%eax,4)
08288376 +0x128:  addl   $0x1,-0x28(%ebp)
0828837a +0x12c:  cmpl   $0x46,-0x28(%ebp)
0828837e +0x130:  setle  %al
08288381 +0x133:  test   %al,%al
08288383 +0x135:  jne    08288368 <+0x11a>
08288385 +0x137:  lea    -0xb8(%ebp),%edx
0828838b +0x13d:  mov    $&_ZZN21CSecu_ProtectionField4initEvE6C.2285,%ebx
08288390 +0x142:  mov    $0x1d,%eax
08288395 +0x147:  mov    %edx,%edi
08288397 +0x149:  mov    %ebx,%esi
08288399 +0x14b:  mov    %eax,%ecx
0828839b +0x14d:  rep movsl %ds:(%esi),%es:(%edi)
0828839d +0x14f:  movl   $0x1d,-0x1c(%ebp)
082883a4 +0x156:  movl   $0x0,-0x28(%ebp)
082883ab +0x15d:  jmp    08288447 <+0x1f9>
082883b0 +0x162:  movl   $0x0,-0x24(%ebp)
082883b7 +0x169:  jmp    08288432 <+0x1e4>
082883b9 +0x16b:  mov    -0x28(%ebp),%edx
082883bc +0x16e:  mov    -0x24(%ebp),%eax
082883bf +0x171:  mov    -0xb8(%ebp,%eax,4),%eax
082883c6 +0x178:  cmp    %eax,%edx
082883c8 +0x17a:  jne    0828842e <+0x1e0>
082883ca +0x17c:  mov    -0x28(%ebp),%ebx
082883cd +0x17f:  mov    -0x28(%ebp),%eax
082883d0 +0x182:  mov    -0x268(%ebp,%eax,4),%eax
082883d7 +0x189:  movl   $0x100,0x24(%esp)
082883df +0x191:  movl   $0x0,0x20(%esp)
082883e7 +0x199:  movl   $0x40,0x1c(%esp)
082883ef +0x1a1:  movl   $0x20,0x18(%esp)
082883f7 +0x1a9:  movl   $0x10,0x14(%esp)
082883ff +0x1b1:  movl   $0x8,0x10(%esp)
08288407 +0x1b9:  movl   $0x4,0xc(%esp)
0828840f +0x1c1:  movl   $0x2,0x8(%esp)
08288417 +0x1c9:  movl   $0x1,0x4(%esp)
0828841f +0x1d1:  mov    %eax,(%esp)
08288422 +0x1d4:  call   08288074 <_Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_>  ; ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)
08288427 +0x1d9:  mov    %eax,-0x268(%ebp,%ebx,4)
0828842e +0x1e0:  addl   $0x1,-0x24(%ebp)
08288432 +0x1e4:  mov    -0x24(%ebp),%eax
08288435 +0x1e7:  cmp    -0x1c(%ebp),%eax
08288438 +0x1ea:  setl   %al
0828843b +0x1ed:  test   %al,%al
0828843d +0x1ef:  jne    082883b9 <+0x16b>
08288443 +0x1f5:  addl   $0x1,-0x28(%ebp)
08288447 +0x1f9:  cmpl   $0x46,-0x28(%ebp)
0828844b +0x1fd:  setle  %al
0828844e +0x200:  test   %al,%al
08288450 +0x202:  jne    082883b0 <+0x162>
08288456 +0x208:  movl   $0x0,-0x28(%ebp)
0828845d +0x20f:  jmp    082884bf <+0x271>
0828845f +0x211:  mov    -0x28(%ebp),%edx
08288462 +0x214:  lea    -0x268(%ebp),%eax
08288468 +0x21a:  shl    $0x2,%edx
0828846b +0x21d:  lea    (%eax,%edx,1),%edx
0828846e +0x220:  mov    -0x28(%ebp),%eax
08288471 +0x223:  mov    %eax,-0x2c(%ebp)
08288474 +0x226:  lea    -0x34(%ebp),%eax
08288477 +0x229:  mov    %edx,0x8(%esp)
0828847b +0x22d:  lea    -0x2c(%ebp),%edx
0828847e +0x230:  mov    %edx,0x4(%esp)
08288482 +0x234:  mov    %eax,(%esp)
08288485 +0x237:  call   08288f01 <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0xa0>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0xa0
0828848a +0x23c:  sub    $0x4,%esp
0828848d +0x23f:  lea    -0x34(%ebp),%eax
08288490 +0x242:  mov    %eax,0x4(%esp)
08288494 +0x246:  lea    -0x3c(%ebp),%eax
08288497 +0x249:  mov    %eax,(%esp)
0828849a +0x24c:  call   08288f48 <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0xe7>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0xe7
0828849f +0x251:  mov    0x8(%ebp),%edx
082884a2 +0x254:  lea    -0x44(%ebp),%eax
082884a5 +0x257:  lea    -0x3c(%ebp),%ecx
082884a8 +0x25a:  mov    %ecx,0x8(%esp)
082884ac +0x25e:  mov    %edx,0x4(%esp)
082884b0 +0x262:  mov    %eax,(%esp)
082884b3 +0x265:  call   08288f78 <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0x117>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0x117
082884b8 +0x26a:  sub    $0x4,%esp
082884bb +0x26d:  addl   $0x1,-0x28(%ebp)
082884bf +0x271:  cmpl   $0x46,-0x28(%ebp)
082884c3 +0x275:  setle  %al
082884c6 +0x278:  test   %al,%al
082884c8 +0x27a:  jne    0828845f <+0x211>
082884ca +0x27c:  lea    -0xc(%ebp),%esp
082884cd +0x27f:  add    $0x0,%esp
082884d0 +0x282:  pop    %ebx
082884d1 +0x283:  pop    %esi
082884d2 +0x284:  pop    %edi
082884d3 +0x285:  pop    %ebp
082884d4 +0x286:  ret
082884d5 +0x287:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::init @ 0x828824e

/* CSecu_ProtectionField::init() */

void CSecu_ProtectionField::init(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  undefined4 local_26c [71];
  int local_150 [37];
  int local_bc [29];
  pair local_48 [8];
  pair<SECURITY_PROTCTION_const,unsigned_int> local_40 [8];
  SECURITY_PROTCTION local_38 [8];
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_28 = 0;
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    local_26c[local_2c] = 0x1ff;
  }
  piVar4 = &init()::C_2279;
  piVar5 = local_150;
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  local_24 = 0x25;
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    for (local_28 = 0; uVar1 = local_2c, local_28 < local_24; local_28 = local_28 + 1) {
      if (local_2c == local_150[local_28]) {
        uVar2 = ExceptionProtectionType(local_26c[local_2c],0,0,0,0,0x10,0,0,0x80,0);
        local_26c[uVar1] = uVar2;
      }
    }
  }
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    local_26c[local_2c] = 0x1ff;
  }
  piVar4 = &init()::C_2285;
  piVar5 = local_bc;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  local_20 = 0x1d;
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    for (local_28 = 0; uVar1 = local_2c, local_28 < local_20; local_28 = local_28 + 1) {
      if (local_2c == local_bc[local_28]) {
        uVar2 = ExceptionProtectionType(local_26c[local_2c],1,2,4,8,0x10,0x20,0x40,0,0x100);
        local_26c[uVar1] = uVar2;
      }
    }
  }
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    local_30 = local_2c;
    std::make_pair<SECURITY_PROTCTION,unsigned_int&>(local_38,&local_30);
    std::pair<SECURITY_PROTCTION_const,unsigned_int>::pair<SECURITY_PROTCTION,unsigned_int>
              (local_40,local_38);
    std::
    map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
    ::insert(local_48);
  }
  return;
}
```

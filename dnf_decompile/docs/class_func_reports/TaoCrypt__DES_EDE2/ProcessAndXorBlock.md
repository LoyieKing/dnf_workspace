# ProcessAndXorBlock

`_ZNK8TaoCrypt8DES_EDE218ProcessAndXorBlockEPKhS2_Ph`

`TaoCrypt::DES_EDE2::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DES_EDE2` | `0x087a8190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8190  _ZNK8TaoCrypt8DES_EDE218ProcessAndXorBlockEPKhS2_Ph
#           TaoCrypt::DES_EDE2::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const
# range [0x087a8190, 0x087a836f]
087a8190 +0x000:  push   %ebp
087a8191 +0x001:  mov    %esp,%ebp
087a8193 +0x003:  push   %edi
087a8194 +0x004:  push   %esi
087a8195 +0x005:  push   %ebx
087a8196 +0x006:  sub    $0x3c,%esp
087a8199 +0x009:  mov    0xc(%ebp),%edi
087a819c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a81a1 +0x011:  add    $0xbc49f7,%ebx
087a81a7 +0x017:  mov    0x10(%ebp),%esi
087a81aa +0x01a:  mov    (%edi),%ecx
087a81ac +0x01c:  mov    %ecx,%eax
087a81ae +0x01e:  ror    $0x8,%eax
087a81b1 +0x021:  ror    $0x18,%ecx
087a81b4 +0x024:  and    $0xff00ff00,%eax
087a81b9 +0x029:  and    $0xff00ff,%ecx
087a81bf +0x02f:  or     %eax,%ecx
087a81c1 +0x031:  mov    0x4(%edi),%eax
087a81c4 +0x034:  mov    %eax,%edi
087a81c6 +0x036:  ror    $0x8,%edi
087a81c9 +0x039:  ror    $0x18,%eax
087a81cc +0x03c:  and    $0xff00ff00,%edi
087a81d2 +0x042:  and    $0xff00ff,%eax
087a81d7 +0x047:  or     %edi,%eax
087a81d9 +0x049:  ror    $0x1c,%eax
087a81dc +0x04c:  mov    %eax,%edi
087a81de +0x04e:  xor    %ecx,%edi
087a81e0 +0x050:  and    $0xf0f0f0f0,%edi
087a81e6 +0x056:  xor    %edi,%eax
087a81e8 +0x058:  xor    %edi,%ecx
087a81ea +0x05a:  ror    $0x14,%eax
087a81ed +0x05d:  mov    %eax,%edi
087a81ef +0x05f:  xor    %ecx,%edi
087a81f1 +0x061:  xor    %di,%di
087a81f4 +0x064:  xor    %edi,%eax
087a81f6 +0x066:  xor    %edi,%ecx
087a81f8 +0x068:  ror    $0x12,%eax
087a81fb +0x06b:  mov    %eax,%edi
087a81fd +0x06d:  xor    %ecx,%edi
087a81ff +0x06f:  and    $0x33333333,%edi
087a8205 +0x075:  xor    %edi,%eax
087a8207 +0x077:  xor    %edi,%ecx
087a8209 +0x079:  ror    $0x6,%eax
087a820c +0x07c:  mov    %eax,%edi
087a820e +0x07e:  xor    %ecx,%edi
087a8210 +0x080:  and    $0xff00ff,%edi
087a8216 +0x086:  xor    %edi,%eax
087a8218 +0x088:  xor    %edi,%ecx
087a821a +0x08a:  ror    $0x17,%eax
087a821d +0x08d:  mov    %eax,%edi
087a821f +0x08f:  xor    %ecx,%edi
087a8221 +0x091:  and    $0xaaaaaaaa,%edi
087a8227 +0x097:  xor    %edi,%ecx
087a8229 +0x099:  xor    %edi,%eax
087a822b +0x09b:  ror    $0x1f,%ecx
087a822e +0x09e:  mov    %ecx,-0x1c(%ebp)
087a8231 +0x0a1:  mov    0x8(%ebp),%ecx
087a8234 +0x0a4:  lea    -0x1c(%ebp),%edi
087a8237 +0x0a7:  mov    %eax,-0x20(%ebp)
087a823a +0x0aa:  lea    -0x20(%ebp),%eax
087a823d +0x0ad:  mov    %eax,0x8(%esp)
087a8241 +0x0b1:  mov    %edi,0x4(%esp)
087a8245 +0x0b5:  add    $0x38,%ecx
087a8248 +0x0b8:  mov    %ecx,(%esp)
087a824b +0x0bb:  mov    %ecx,-0x2c(%ebp)
087a824e +0x0be:  mov    %eax,-0x30(%ebp)
087a8251 +0x0c1:  call   087a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>  ; TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
087a8256 +0x0c6:  mov    0x8(%ebp),%edx
087a8259 +0x0c9:  mov    -0x30(%ebp),%eax
087a825c +0x0cc:  mov    %edi,0x8(%esp)
087a8260 +0x0d0:  add    $0xb8,%edx
087a8266 +0x0d6:  mov    %eax,0x4(%esp)
087a826a +0x0da:  mov    %edx,(%esp)
087a826d +0x0dd:  call   087a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>  ; TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
087a8272 +0x0e2:  mov    -0x30(%ebp),%eax
087a8275 +0x0e5:  mov    -0x2c(%ebp),%ecx
087a8278 +0x0e8:  mov    %edi,0x4(%esp)
087a827c +0x0ec:  mov    %eax,0x8(%esp)
087a8280 +0x0f0:  mov    %ecx,(%esp)
087a8283 +0x0f3:  call   087a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>  ; TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
087a8288 +0x0f8:  mov    -0x20(%ebp),%edi
087a828b +0x0fb:  mov    -0x1c(%ebp),%ecx
087a828e +0x0fe:  ror    %edi
087a8290 +0x100:  mov    %edi,%eax
087a8292 +0x102:  xor    %ecx,%eax
087a8294 +0x104:  and    $0xaaaaaaaa,%eax
087a8299 +0x109:  xor    %eax,%ecx
087a829b +0x10b:  xor    %eax,%edi
087a829d +0x10d:  ror    $0x9,%ecx
087a82a0 +0x110:  mov    %ecx,%eax
087a82a2 +0x112:  xor    %edi,%eax
087a82a4 +0x114:  and    $0xff00ff,%eax
087a82a9 +0x119:  xor    %eax,%ecx
087a82ab +0x11b:  xor    %eax,%edi
087a82ad +0x11d:  ror    $0x1a,%ecx
087a82b0 +0x120:  mov    %ecx,%eax
087a82b2 +0x122:  xor    %edi,%eax
087a82b4 +0x124:  and    $0x33333333,%eax
087a82b9 +0x129:  xor    %eax,%ecx
087a82bb +0x12b:  xor    %eax,%edi
087a82bd +0x12d:  ror    $0xe,%ecx
087a82c0 +0x130:  mov    %ecx,%eax
087a82c2 +0x132:  xor    %edi,%eax
087a82c4 +0x134:  xor    %ax,%ax
087a82c7 +0x137:  xor    %eax,%ecx
087a82c9 +0x139:  xor    %eax,%edi
087a82cb +0x13b:  ror    $0xc,%ecx
087a82ce +0x13e:  mov    %ecx,%eax
087a82d0 +0x140:  xor    %edi,%eax
087a82d2 +0x142:  and    $0xf0f0f0f0,%eax
087a82d7 +0x147:  xor    %eax,%edi
087a82d9 +0x149:  xor    %eax,%ecx
087a82db +0x14b:  ror    $0x4,%ecx
087a82de +0x14e:  test   %esi,%esi
087a82e0 +0x150:  je     087a8330 <+0x1a0>
087a82e2 +0x152:  mov    %edi,%eax
087a82e4 +0x154:  mov    0x14(%ebp),%edx
087a82e7 +0x157:  ror    $0x18,%eax
087a82ea +0x15a:  ror    $0x8,%edi
087a82ed +0x15d:  and    $0xff00ff,%eax
087a82f2 +0x162:  and    $0xff00ff00,%edi
087a82f8 +0x168:  or     %edi,%eax
087a82fa +0x16a:  xor    (%esi),%eax
087a82fc +0x16c:  mov    %eax,(%edx)
087a82fe +0x16e:  mov    %edx,%eax
087a8300 +0x170:  add    $0x4,%eax
087a8303 +0x173:  cmp    $0xfffffffc,%esi
087a8306 +0x176:  je     087a834f <+0x1bf>
087a8308 +0x178:  mov    %ecx,%eax
087a830a +0x17a:  ror    $0x18,%eax
087a830d +0x17d:  ror    $0x8,%ecx
087a8310 +0x180:  and    $0xff00ff,%eax
087a8315 +0x185:  and    $0xff00ff00,%ecx
087a831b +0x18b:  or     %ecx,%eax
087a831d +0x18d:  xor    0x4(%esi),%eax
087a8320 +0x190:  mov    %eax,0x4(%edx)
087a8323 +0x193:  add    $0x3c,%esp
087a8326 +0x196:  pop    %ebx
087a8327 +0x197:  pop    %esi
087a8328 +0x198:  pop    %edi
087a8329 +0x199:  pop    %ebp
087a832a +0x19a:  ret
087a832b +0x19b:  nop
087a832c +0x19c:  lea    0x0(%esi,%eiz,1),%esi
087a8330 +0x1a0:  mov    %edi,%eax
087a8332 +0x1a2:  mov    0x14(%ebp),%edx
087a8335 +0x1a5:  ror    $0x18,%eax
087a8338 +0x1a8:  ror    $0x8,%edi
087a833b +0x1ab:  and    $0xff00ff,%eax
087a8340 +0x1b0:  and    $0xff00ff00,%edi
087a8346 +0x1b6:  or     %edi,%eax
087a8348 +0x1b8:  mov    %eax,(%edx)
087a834a +0x1ba:  mov    %edx,%eax
087a834c +0x1bc:  add    $0x4,%eax
087a834f +0x1bf:  mov    %ecx,%edx
087a8351 +0x1c1:  ror    $0x18,%edx
087a8354 +0x1c4:  ror    $0x8,%ecx
087a8357 +0x1c7:  and    $0xff00ff,%edx
087a835d +0x1cd:  and    $0xff00ff00,%ecx
087a8363 +0x1d3:  or     %ecx,%edx
087a8365 +0x1d5:  mov    %edx,(%eax)
087a8367 +0x1d7:  add    $0x3c,%esp
087a836a +0x1da:  pop    %ebx
087a836b +0x1db:  pop    %esi
087a836c +0x1dc:  pop    %edi
087a836d +0x1dd:  pop    %ebp
087a836e +0x1de:  ret
087a836f +0x1df:  nop
```

## 反编译 C

```c
// TaoCrypt::DES_EDE2::ProcessAndXorBlock @ 0x87a8190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE2::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned
   char*) const */

void __thiscall
TaoCrypt::DES_EDE2::ProcessAndXorBlock(DES_EDE2 *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  uint local_20 [4];
  
  uVar3 = *(uint *)param_1;
  uVar2 = uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18;
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = (uVar3 << 0x18) >> 0x1c |
          (uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18) << 4;
  uVar3 = (uVar1 ^ uVar2) & 0xf0f0f0f0;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar3;
  uVar3 = uVar1 << 0xc;
  uVar4 = (uint)(ushort)((ushort)(uVar3 >> 0x10) ^ (ushort)(uVar2 >> 0x10)) << 0x10;
  uVar3 = (uVar1 >> 0x14 | uVar3) ^ uVar4;
  uVar2 = uVar2 ^ uVar4;
  uVar3 = uVar3 >> 0x12 | uVar3 << 0xe;
  uVar1 = (uVar3 ^ uVar2) & 0x33333333;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 >> 6 | uVar3 << 0x1a;
  uVar1 = (uVar3 ^ uVar2) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1;
  local_24 = uVar3 >> 0x17 | uVar3 << 9;
  uVar3 = (local_24 ^ uVar2) & 0xaaaaaaaa;
  uVar2 = uVar2 ^ uVar3;
  local_24 = local_24 ^ uVar3;
  local_20[0] = uVar2 >> 0x1f | uVar2 << 1;
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x38),local_20,&local_24);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0xb8),&local_24,local_20);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x38),local_20,&local_24);
  uVar4 = local_24 >> 1 | (uint)((local_24 & 1) != 0) << 0x1f;
  uVar3 = (uVar4 ^ local_20[0]) & 0xaaaaaaaa;
  local_20[0] = local_20[0] ^ uVar3;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = local_20[0] << 0x17;
  uVar2 = local_20[0] >> 9 | uVar3;
  uVar1 = (uVar2 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar1;
  uVar1 = uVar3 >> 0x1a | (uVar2 ^ uVar1) << 6;
  uVar3 = (uVar1 ^ uVar4) & 0x33333333;
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = uVar1 >> 0xe;
  uVar2 = uVar3 | uVar1 << 0x12;
  uVar1 = (uint)(ushort)((ushort)(uVar2 >> 0x10) ^ (ushort)(uVar4 >> 0x10)) << 0x10;
  uVar4 = uVar4 ^ uVar1;
  uVar1 = (uVar2 ^ uVar1) >> 0xc;
  uVar2 = uVar1 | uVar3 << 0x14;
  uVar3 = (uVar2 ^ uVar4) & 0xf0f0f0f0;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = (uVar2 ^ uVar3) >> 4;
  uVar1 = uVar3 | uVar1 << 0x1c;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18) ^
         *(uint *)param_2;
    if (param_2 != (uchar *)0xfffffffc) {
      *(uint *)(param_3 + 4) =
           (uVar1 >> 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 << 0x18) ^
           *(uint *)(param_2 + 4);
      return;
    }
  }
  *(uint *)(param_3 + 4) =
       uVar1 >> 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 << 0x18;
  return;
}
```

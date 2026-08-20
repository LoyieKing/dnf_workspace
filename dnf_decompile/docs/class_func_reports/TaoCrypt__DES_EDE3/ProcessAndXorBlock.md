# ProcessAndXorBlock

`_ZNK8TaoCrypt8DES_EDE318ProcessAndXorBlockEPKhS2_Ph`

`TaoCrypt::DES_EDE3::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DES_EDE3` | `0x087a7fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a7fa0  _ZNK8TaoCrypt8DES_EDE318ProcessAndXorBlockEPKhS2_Ph
#           TaoCrypt::DES_EDE3::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const
# range [0x087a7fa0, 0x087a8189]
087a7fa0 +0x000:  push   %ebp
087a7fa1 +0x001:  mov    %esp,%ebp
087a7fa3 +0x003:  push   %edi
087a7fa4 +0x004:  push   %esi
087a7fa5 +0x005:  push   %ebx
087a7fa6 +0x006:  sub    $0x3c,%esp
087a7fa9 +0x009:  mov    0xc(%ebp),%ecx
087a7fac +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a7fb1 +0x011:  add    $0xbc4be7,%ebx
087a7fb7 +0x017:  mov    0x10(%ebp),%esi
087a7fba +0x01a:  mov    0x14(%ebp),%edi
087a7fbd +0x01d:  mov    (%ecx),%edx
087a7fbf +0x01f:  mov    %edx,%eax
087a7fc1 +0x021:  ror    $0x8,%eax
087a7fc4 +0x024:  ror    $0x18,%edx
087a7fc7 +0x027:  and    $0xff00ff00,%eax
087a7fcc +0x02c:  and    $0xff00ff,%edx
087a7fd2 +0x032:  or     %eax,%edx
087a7fd4 +0x034:  mov    0x4(%ecx),%eax
087a7fd7 +0x037:  mov    %eax,%ecx
087a7fd9 +0x039:  ror    $0x8,%ecx
087a7fdc +0x03c:  ror    $0x18,%eax
087a7fdf +0x03f:  and    $0xff00ff00,%ecx
087a7fe5 +0x045:  and    $0xff00ff,%eax
087a7fea +0x04a:  or     %ecx,%eax
087a7fec +0x04c:  ror    $0x1c,%eax
087a7fef +0x04f:  mov    %eax,%ecx
087a7ff1 +0x051:  xor    %edx,%ecx
087a7ff3 +0x053:  and    $0xf0f0f0f0,%ecx
087a7ff9 +0x059:  xor    %ecx,%eax
087a7ffb +0x05b:  xor    %ecx,%edx
087a7ffd +0x05d:  ror    $0x14,%eax
087a8000 +0x060:  mov    %eax,%ecx
087a8002 +0x062:  xor    %edx,%ecx
087a8004 +0x064:  xor    %cx,%cx
087a8007 +0x067:  xor    %ecx,%eax
087a8009 +0x069:  xor    %ecx,%edx
087a800b +0x06b:  ror    $0x12,%eax
087a800e +0x06e:  mov    %eax,%ecx
087a8010 +0x070:  xor    %edx,%ecx
087a8012 +0x072:  and    $0x33333333,%ecx
087a8018 +0x078:  xor    %ecx,%eax
087a801a +0x07a:  xor    %ecx,%edx
087a801c +0x07c:  ror    $0x6,%eax
087a801f +0x07f:  mov    %eax,%ecx
087a8021 +0x081:  xor    %edx,%ecx
087a8023 +0x083:  and    $0xff00ff,%ecx
087a8029 +0x089:  xor    %ecx,%eax
087a802b +0x08b:  xor    %ecx,%edx
087a802d +0x08d:  ror    $0x17,%eax
087a8030 +0x090:  mov    %eax,%ecx
087a8032 +0x092:  xor    %edx,%ecx
087a8034 +0x094:  and    $0xaaaaaaaa,%ecx
087a803a +0x09a:  xor    %ecx,%eax
087a803c +0x09c:  xor    %ecx,%edx
087a803e +0x09e:  mov    0x8(%ebp),%ecx
087a8041 +0x0a1:  ror    $0x1f,%edx
087a8044 +0x0a4:  mov    %edx,-0x1c(%ebp)
087a8047 +0x0a7:  lea    -0x20(%ebp),%edx
087a804a +0x0aa:  mov    %eax,-0x20(%ebp)
087a804d +0x0ad:  lea    -0x1c(%ebp),%eax
087a8050 +0x0b0:  add    $0x38,%ecx
087a8053 +0x0b3:  mov    %edx,0x8(%esp)
087a8057 +0x0b7:  mov    %eax,0x4(%esp)
087a805b +0x0bb:  mov    %ecx,(%esp)
087a805e +0x0be:  mov    %eax,-0x30(%ebp)
087a8061 +0x0c1:  mov    %edx,-0x2c(%ebp)
087a8064 +0x0c4:  call   087a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>  ; TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
087a8069 +0x0c9:  mov    0x8(%ebp),%ecx
087a806c +0x0cc:  mov    -0x30(%ebp),%eax
087a806f +0x0cf:  mov    -0x2c(%ebp),%edx
087a8072 +0x0d2:  add    $0xb8,%ecx
087a8078 +0x0d8:  mov    %ecx,(%esp)
087a807b +0x0db:  mov    %eax,0x8(%esp)
087a807f +0x0df:  mov    %edx,0x4(%esp)
087a8083 +0x0e3:  call   087a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>  ; TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
087a8088 +0x0e8:  mov    -0x30(%ebp),%eax
087a808b +0x0eb:  mov    -0x2c(%ebp),%edx
087a808e +0x0ee:  mov    %eax,0x4(%esp)
087a8092 +0x0f2:  mov    0x8(%ebp),%eax
087a8095 +0x0f5:  mov    %edx,0x8(%esp)
087a8099 +0x0f9:  add    $0x138,%eax
087a809e +0x0fe:  mov    %eax,(%esp)
087a80a1 +0x101:  call   087a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>  ; TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
087a80a6 +0x106:  mov    -0x20(%ebp),%ecx
087a80a9 +0x109:  mov    -0x1c(%ebp),%edx
087a80ac +0x10c:  ror    %ecx
087a80ae +0x10e:  mov    %ecx,%eax
087a80b0 +0x110:  xor    %edx,%eax
087a80b2 +0x112:  and    $0xaaaaaaaa,%eax
087a80b7 +0x117:  xor    %eax,%edx
087a80b9 +0x119:  xor    %eax,%ecx
087a80bb +0x11b:  ror    $0x9,%edx
087a80be +0x11e:  mov    %edx,%eax
087a80c0 +0x120:  xor    %ecx,%eax
087a80c2 +0x122:  and    $0xff00ff,%eax
087a80c7 +0x127:  xor    %eax,%edx
087a80c9 +0x129:  xor    %eax,%ecx
087a80cb +0x12b:  ror    $0x1a,%edx
087a80ce +0x12e:  mov    %edx,%eax
087a80d0 +0x130:  xor    %ecx,%eax
087a80d2 +0x132:  and    $0x33333333,%eax
087a80d7 +0x137:  xor    %eax,%edx
087a80d9 +0x139:  xor    %eax,%ecx
087a80db +0x13b:  ror    $0xe,%edx
087a80de +0x13e:  mov    %edx,%eax
087a80e0 +0x140:  xor    %ecx,%eax
087a80e2 +0x142:  xor    %ax,%ax
087a80e5 +0x145:  xor    %eax,%edx
087a80e7 +0x147:  xor    %eax,%ecx
087a80e9 +0x149:  ror    $0xc,%edx
087a80ec +0x14c:  mov    %edx,%eax
087a80ee +0x14e:  xor    %ecx,%eax
087a80f0 +0x150:  and    $0xf0f0f0f0,%eax
087a80f5 +0x155:  xor    %eax,%edx
087a80f7 +0x157:  xor    %eax,%ecx
087a80f9 +0x159:  ror    $0x4,%edx
087a80fc +0x15c:  test   %esi,%esi
087a80fe +0x15e:  je     087a8148 <+0x1a8>
087a8100 +0x160:  mov    %ecx,%eax
087a8102 +0x162:  ror    $0x18,%eax
087a8105 +0x165:  ror    $0x8,%ecx
087a8108 +0x168:  and    $0xff00ff,%eax
087a810d +0x16d:  and    $0xff00ff00,%ecx
087a8113 +0x173:  or     %ecx,%eax
087a8115 +0x175:  xor    (%esi),%eax
087a8117 +0x177:  cmp    $0xfffffffc,%esi
087a811a +0x17a:  mov    %eax,(%edi)
087a811c +0x17c:  lea    0x4(%edi),%eax
087a811f +0x17f:  je     087a8162 <+0x1c2>
087a8121 +0x181:  mov    %edx,%eax
087a8123 +0x183:  ror    $0x18,%eax
087a8126 +0x186:  ror    $0x8,%edx
087a8129 +0x189:  and    $0xff00ff,%eax
087a812e +0x18e:  and    $0xff00ff00,%edx
087a8134 +0x194:  or     %edx,%eax
087a8136 +0x196:  xor    0x4(%esi),%eax
087a8139 +0x199:  mov    %eax,0x4(%edi)
087a813c +0x19c:  add    $0x3c,%esp
087a813f +0x19f:  pop    %ebx
087a8140 +0x1a0:  pop    %esi
087a8141 +0x1a1:  pop    %edi
087a8142 +0x1a2:  pop    %ebp
087a8143 +0x1a3:  ret
087a8144 +0x1a4:  lea    0x0(%esi,%eiz,1),%esi
087a8148 +0x1a8:  mov    %ecx,%eax
087a814a +0x1aa:  ror    $0x18,%eax
087a814d +0x1ad:  ror    $0x8,%ecx
087a8150 +0x1b0:  and    $0xff00ff,%eax
087a8155 +0x1b5:  and    $0xff00ff00,%ecx
087a815b +0x1bb:  or     %ecx,%eax
087a815d +0x1bd:  mov    %eax,(%edi)
087a815f +0x1bf:  lea    0x4(%edi),%eax
087a8162 +0x1c2:  mov    %edx,%ecx
087a8164 +0x1c4:  ror    $0x18,%ecx
087a8167 +0x1c7:  ror    $0x8,%edx
087a816a +0x1ca:  and    $0xff00ff,%ecx
087a8170 +0x1d0:  and    $0xff00ff00,%edx
087a8176 +0x1d6:  or     %edx,%ecx
087a8178 +0x1d8:  mov    %ecx,(%eax)
087a817a +0x1da:  add    $0x3c,%esp
087a817d +0x1dd:  pop    %ebx
087a817e +0x1de:  pop    %esi
087a817f +0x1df:  pop    %edi
087a8180 +0x1e0:  pop    %ebp
087a8181 +0x1e1:  ret
087a8182 +0x1e2:  lea    0x0(%esi,%eiz,1),%esi
087a8189 +0x1e9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::DES_EDE3::ProcessAndXorBlock @ 0x87a7fa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE3::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned
   char*) const */

void __thiscall
TaoCrypt::DES_EDE3::ProcessAndXorBlock(DES_EDE3 *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  uint local_20 [4];
  
  uVar2 = *(uint *)param_1;
  uVar4 = uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = (uVar2 << 0x18) >> 0x1c |
          (uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18) << 4;
  uVar2 = (uVar1 ^ uVar4) & 0xf0f0f0f0;
  uVar1 = uVar1 ^ uVar2;
  uVar4 = uVar4 ^ uVar2;
  uVar2 = uVar1 << 0xc;
  uVar3 = (uint)(ushort)((ushort)(uVar2 >> 0x10) ^ (ushort)(uVar4 >> 0x10)) << 0x10;
  uVar2 = (uVar1 >> 0x14 | uVar2) ^ uVar3;
  uVar4 = uVar4 ^ uVar3;
  uVar2 = uVar2 >> 0x12 | uVar2 << 0xe;
  uVar1 = (uVar2 ^ uVar4) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 >> 6 | uVar2 << 0x1a;
  uVar1 = (uVar2 ^ uVar4) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1;
  local_24 = uVar2 >> 0x17 | uVar2 << 9;
  uVar2 = (local_24 ^ uVar4) & 0xaaaaaaaa;
  local_24 = local_24 ^ uVar2;
  uVar4 = uVar4 ^ uVar2;
  local_20[0] = uVar4 >> 0x1f | uVar4 << 1;
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x38),local_20,&local_24);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0xb8),&local_24,local_20);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x138),local_20,&local_24);
  uVar3 = local_24 >> 1 | (uint)((local_24 & 1) != 0) << 0x1f;
  uVar2 = (uVar3 ^ local_20[0]) & 0xaaaaaaaa;
  local_20[0] = local_20[0] ^ uVar2;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = local_20[0] << 0x17;
  uVar4 = local_20[0] >> 9 | uVar2;
  uVar1 = (uVar4 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = uVar2 >> 0x1a | (uVar4 ^ uVar1) << 6;
  uVar2 = (uVar1 ^ uVar3) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = uVar1 >> 0xe;
  uVar4 = uVar2 | uVar1 << 0x12;
  uVar1 = (uint)(ushort)((ushort)(uVar4 >> 0x10) ^ (ushort)(uVar3 >> 0x10)) << 0x10;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = (uVar4 ^ uVar1) >> 0xc;
  uVar4 = uVar1 | uVar2 << 0x14;
  uVar2 = (uVar4 ^ uVar3) & 0xf0f0f0f0;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = (uVar4 ^ uVar2) >> 4;
  uVar1 = uVar2 | uVar1 << 0x1c;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18) ^
         *(uint *)param_2;
    if (param_2 != (uchar *)0xfffffffc) {
      *(uint *)(param_3 + 4) =
           (uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 << 0x18) ^
           *(uint *)(param_2 + 4);
      return;
    }
  }
  *(uint *)(param_3 + 4) =
       uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 << 0x18;
  return;
}
```

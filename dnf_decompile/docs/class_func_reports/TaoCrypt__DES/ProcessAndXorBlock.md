# ProcessAndXorBlock

`_ZNK8TaoCrypt3DES18ProcessAndXorBlockEPKhS2_Ph`

`TaoCrypt::DES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DES` | `0x087a7df0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a7df0  _ZNK8TaoCrypt3DES18ProcessAndXorBlockEPKhS2_Ph
#           TaoCrypt::DES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*) const
# range [0x087a7df0, 0x087a7f99]
087a7df0 +0x000:  push   %ebp
087a7df1 +0x001:  mov    %esp,%ebp
087a7df3 +0x003:  push   %edi
087a7df4 +0x004:  push   %esi
087a7df5 +0x005:  push   %ebx
087a7df6 +0x006:  sub    $0x2c,%esp
087a7df9 +0x009:  mov    0xc(%ebp),%ecx
087a7dfc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a7e01 +0x011:  add    $0xbc4d97,%ebx
087a7e07 +0x017:  mov    0x10(%ebp),%esi
087a7e0a +0x01a:  mov    0x14(%ebp),%edi
087a7e0d +0x01d:  mov    (%ecx),%edx
087a7e0f +0x01f:  mov    %edx,%eax
087a7e11 +0x021:  ror    $0x8,%eax
087a7e14 +0x024:  ror    $0x18,%edx
087a7e17 +0x027:  and    $0xff00ff00,%eax
087a7e1c +0x02c:  and    $0xff00ff,%edx
087a7e22 +0x032:  or     %eax,%edx
087a7e24 +0x034:  mov    0x4(%ecx),%eax
087a7e27 +0x037:  mov    %eax,%ecx
087a7e29 +0x039:  ror    $0x8,%ecx
087a7e2c +0x03c:  ror    $0x18,%eax
087a7e2f +0x03f:  and    $0xff00ff00,%ecx
087a7e35 +0x045:  and    $0xff00ff,%eax
087a7e3a +0x04a:  or     %ecx,%eax
087a7e3c +0x04c:  ror    $0x1c,%eax
087a7e3f +0x04f:  mov    %eax,%ecx
087a7e41 +0x051:  xor    %edx,%ecx
087a7e43 +0x053:  and    $0xf0f0f0f0,%ecx
087a7e49 +0x059:  xor    %ecx,%eax
087a7e4b +0x05b:  xor    %ecx,%edx
087a7e4d +0x05d:  ror    $0x14,%eax
087a7e50 +0x060:  mov    %eax,%ecx
087a7e52 +0x062:  xor    %edx,%ecx
087a7e54 +0x064:  xor    %cx,%cx
087a7e57 +0x067:  xor    %ecx,%eax
087a7e59 +0x069:  xor    %ecx,%edx
087a7e5b +0x06b:  ror    $0x12,%eax
087a7e5e +0x06e:  mov    %eax,%ecx
087a7e60 +0x070:  xor    %edx,%ecx
087a7e62 +0x072:  and    $0x33333333,%ecx
087a7e68 +0x078:  xor    %ecx,%eax
087a7e6a +0x07a:  xor    %ecx,%edx
087a7e6c +0x07c:  ror    $0x6,%eax
087a7e6f +0x07f:  mov    %eax,%ecx
087a7e71 +0x081:  xor    %edx,%ecx
087a7e73 +0x083:  and    $0xff00ff,%ecx
087a7e79 +0x089:  xor    %ecx,%eax
087a7e7b +0x08b:  xor    %ecx,%edx
087a7e7d +0x08d:  ror    $0x17,%eax
087a7e80 +0x090:  mov    %eax,%ecx
087a7e82 +0x092:  xor    %edx,%ecx
087a7e84 +0x094:  and    $0xaaaaaaaa,%ecx
087a7e8a +0x09a:  xor    %ecx,%eax
087a7e8c +0x09c:  xor    %ecx,%edx
087a7e8e +0x09e:  mov    %eax,-0x20(%ebp)
087a7e91 +0x0a1:  lea    -0x20(%ebp),%eax
087a7e94 +0x0a4:  mov    %eax,0x8(%esp)
087a7e98 +0x0a8:  lea    -0x1c(%ebp),%eax
087a7e9b +0x0ab:  mov    %eax,0x4(%esp)
087a7e9f +0x0af:  mov    0x8(%ebp),%eax
087a7ea2 +0x0b2:  ror    $0x1f,%edx
087a7ea5 +0x0b5:  mov    %edx,-0x1c(%ebp)
087a7ea8 +0x0b8:  add    $0x38,%eax
087a7eab +0x0bb:  mov    %eax,(%esp)
087a7eae +0x0be:  call   087a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>  ; TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
087a7eb3 +0x0c3:  mov    -0x20(%ebp),%ecx
087a7eb6 +0x0c6:  mov    -0x1c(%ebp),%edx
087a7eb9 +0x0c9:  ror    %ecx
087a7ebb +0x0cb:  mov    %ecx,%eax
087a7ebd +0x0cd:  xor    %edx,%eax
087a7ebf +0x0cf:  and    $0xaaaaaaaa,%eax
087a7ec4 +0x0d4:  xor    %eax,%edx
087a7ec6 +0x0d6:  xor    %eax,%ecx
087a7ec8 +0x0d8:  ror    $0x9,%edx
087a7ecb +0x0db:  mov    %edx,%eax
087a7ecd +0x0dd:  xor    %ecx,%eax
087a7ecf +0x0df:  and    $0xff00ff,%eax
087a7ed4 +0x0e4:  xor    %eax,%edx
087a7ed6 +0x0e6:  xor    %eax,%ecx
087a7ed8 +0x0e8:  ror    $0x1a,%edx
087a7edb +0x0eb:  mov    %edx,%eax
087a7edd +0x0ed:  xor    %ecx,%eax
087a7edf +0x0ef:  and    $0x33333333,%eax
087a7ee4 +0x0f4:  xor    %eax,%edx
087a7ee6 +0x0f6:  xor    %eax,%ecx
087a7ee8 +0x0f8:  ror    $0xe,%edx
087a7eeb +0x0fb:  mov    %edx,%eax
087a7eed +0x0fd:  xor    %ecx,%eax
087a7eef +0x0ff:  xor    %ax,%ax
087a7ef2 +0x102:  xor    %eax,%edx
087a7ef4 +0x104:  xor    %eax,%ecx
087a7ef6 +0x106:  ror    $0xc,%edx
087a7ef9 +0x109:  mov    %edx,%eax
087a7efb +0x10b:  xor    %ecx,%eax
087a7efd +0x10d:  and    $0xf0f0f0f0,%eax
087a7f02 +0x112:  xor    %eax,%edx
087a7f04 +0x114:  xor    %eax,%ecx
087a7f06 +0x116:  ror    $0x4,%edx
087a7f09 +0x119:  test   %esi,%esi
087a7f0b +0x11b:  je     087a7f58 <+0x168>
087a7f0d +0x11d:  mov    %ecx,%eax
087a7f0f +0x11f:  ror    $0x18,%eax
087a7f12 +0x122:  ror    $0x8,%ecx
087a7f15 +0x125:  and    $0xff00ff,%eax
087a7f1a +0x12a:  and    $0xff00ff00,%ecx
087a7f20 +0x130:  or     %ecx,%eax
087a7f22 +0x132:  xor    (%esi),%eax
087a7f24 +0x134:  cmp    $0xfffffffc,%esi
087a7f27 +0x137:  mov    %eax,(%edi)
087a7f29 +0x139:  lea    0x4(%edi),%eax
087a7f2c +0x13c:  je     087a7f72 <+0x182>
087a7f2e +0x13e:  mov    %edx,%eax
087a7f30 +0x140:  ror    $0x18,%eax
087a7f33 +0x143:  ror    $0x8,%edx
087a7f36 +0x146:  and    $0xff00ff,%eax
087a7f3b +0x14b:  and    $0xff00ff00,%edx
087a7f41 +0x151:  or     %edx,%eax
087a7f43 +0x153:  xor    0x4(%esi),%eax
087a7f46 +0x156:  mov    %eax,0x4(%edi)
087a7f49 +0x159:  add    $0x2c,%esp
087a7f4c +0x15c:  pop    %ebx
087a7f4d +0x15d:  pop    %esi
087a7f4e +0x15e:  pop    %edi
087a7f4f +0x15f:  pop    %ebp
087a7f50 +0x160:  ret
087a7f51 +0x161:  lea    0x0(%esi,%eiz,1),%esi
087a7f58 +0x168:  mov    %ecx,%eax
087a7f5a +0x16a:  ror    $0x18,%eax
087a7f5d +0x16d:  ror    $0x8,%ecx
087a7f60 +0x170:  and    $0xff00ff,%eax
087a7f65 +0x175:  and    $0xff00ff00,%ecx
087a7f6b +0x17b:  or     %ecx,%eax
087a7f6d +0x17d:  mov    %eax,(%edi)
087a7f6f +0x17f:  lea    0x4(%edi),%eax
087a7f72 +0x182:  mov    %edx,%ecx
087a7f74 +0x184:  ror    $0x18,%ecx
087a7f77 +0x187:  ror    $0x8,%edx
087a7f7a +0x18a:  and    $0xff00ff,%ecx
087a7f80 +0x190:  and    $0xff00ff00,%edx
087a7f86 +0x196:  or     %edx,%ecx
087a7f88 +0x198:  mov    %ecx,(%eax)
087a7f8a +0x19a:  add    $0x2c,%esp
087a7f8d +0x19d:  pop    %ebx
087a7f8e +0x19e:  pop    %esi
087a7f8f +0x19f:  pop    %edi
087a7f90 +0x1a0:  pop    %ebp
087a7f91 +0x1a1:  ret
087a7f92 +0x1a2:  lea    0x0(%esi,%eiz,1),%esi
087a7f99 +0x1a9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::DES::ProcessAndXorBlock @ 0x87a7df0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*)
   const */

void __thiscall
TaoCrypt::DES::ProcessAndXorBlock(DES *this,uchar *param_1,uchar *param_2,uchar *param_3)

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

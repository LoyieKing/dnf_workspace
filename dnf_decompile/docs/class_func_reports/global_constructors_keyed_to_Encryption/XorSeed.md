# XorSeed

`_GLOBAL__I__ZN10Encryption7XorSeedE`

`global constructors keyed to Encryption::XorSeed`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Encryption` | `0x0848e0ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848e0ce  _GLOBAL__I__ZN10Encryption7XorSeedE
#           global constructors keyed to Encryption::XorSeed
# range [0x0848e0ce, 0x0848e243]
0848e0ce +0x000:  push   %ebp
0848e0cf +0x001:  mov    %esp,%ebp
0848e0d1 +0x003:  sub    $0x18,%esp
0848e0d4 +0x006:  movl   $0xffff,0x4(%esp)
0848e0dc +0x00e:  movl   $0x1,(%esp)
0848e0e3 +0x015:  call   0848e08e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0848e0e8 +0x01a:  leave
0848e0e9 +0x01b:  ret
0848e0ea +0x01c:  push   %ebp
0848e0eb +0x01d:  mov    %esp,%ebp
0848e0ed +0x01f:  push   %edi
0848e0ee +0x020:  push   %esi
0848e0ef +0x021:  push   %ebx
0848e0f0 +0x022:  sub    $0x2c,%esp
0848e0f3 +0x025:  mov    0x8(%ebp),%eax
0848e0f6 +0x028:  movl   $0x20,0x8(%esp)
0848e0fe +0x030:  movl   $0x0,0x4(%esp)
0848e106 +0x038:  mov    %eax,(%esp)
0848e109 +0x03b:  call   0807dcc0 <_init+0x5b8>
0848e10e +0x040:  movl   $0x47c,(%esp)
0848e115 +0x047:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0848e11a +0x04c:  mov    %eax,%ebx
0848e11c +0x04e:  mov    %ebx,%eax
0848e11e +0x050:  mov    %eax,(%esp)
0848e121 +0x053:  call   080b60ac <_ZN9CRijndaelC1Ev>  ; CRijndael::CRijndael()
0848e126 +0x058:  jmp    0848e140 <+0x72>
0848e128 +0x05a:  mov    %edx,%esi
0848e12a +0x05c:  mov    %eax,%edi
0848e12c +0x05e:  mov    %ebx,(%esp)
0848e12f +0x061:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0848e134 +0x066:  mov    %edi,%eax
0848e136 +0x068:  mov    %esi,%edx
0848e138 +0x06a:  mov    %eax,(%esp)
0848e13b +0x06d:  call   08ae3750 <_Unwind_Resume>
0848e140 +0x072:  mov    %ebx,%edx
0848e142 +0x074:  mov    0x8(%ebp),%eax
0848e145 +0x077:  mov    %edx,0x204(%eax)
0848e14b +0x07d:  movl   $0x0,-0x1c(%ebp)
0848e152 +0x084:  jmp    0848e1b3 <+0xe5>
0848e154 +0x086:  mov    -0x1c(%ebp),%eax
0848e157 +0x089:  shl    $0x5,%eax
0848e15a +0x08c:  add    0x8(%ebp),%eax
0848e15d +0x08f:  movl   $0x20,0x8(%esp)
0848e165 +0x097:  movl   $0x0,0x4(%esp)
0848e16d +0x09f:  mov    %eax,(%esp)
0848e170 +0x0a2:  call   0807dcc0 <_init+0x5b8>
0848e175 +0x0a7:  mov    -0x1c(%ebp),%eax
0848e178 +0x0aa:  shl    $0x5,%eax
0848e17b +0x0ad:  add    $&cryptKey,%eax
0848e180 +0x0b2:  mov    %eax,(%esp)
0848e183 +0x0b5:  call   0807e3b0 <_init+0xca8>
0848e188 +0x0ba:  mov    -0x1c(%ebp),%edx
0848e18b +0x0bd:  shl    $0x5,%edx
0848e18e +0x0c0:  add    $&cryptKey,%edx
0848e194 +0x0c6:  mov    %edx,%ecx
0848e196 +0x0c8:  mov    -0x1c(%ebp),%edx
0848e199 +0x0cb:  shl    $0x5,%edx
0848e19c +0x0ce:  add    0x8(%ebp),%edx
0848e19f +0x0d1:  mov    %eax,0x8(%esp)
0848e1a3 +0x0d5:  mov    %ecx,0x4(%esp)
0848e1a7 +0x0d9:  mov    %edx,(%esp)
0848e1aa +0x0dc:  call   0807d8d0 <_init+0x1c8>
0848e1af +0x0e1:  addl   $0x1,-0x1c(%ebp)
0848e1b3 +0x0e5:  cmpl   $0xf,-0x1c(%ebp)
0848e1b7 +0x0e9:  setle  %al
0848e1ba +0x0ec:  test   %al,%al
0848e1bc +0x0ee:  jne    0848e154 <+0x86>
0848e1be +0x0f0:  add    $0x2c,%esp
0848e1c1 +0x0f3:  pop    %ebx
0848e1c2 +0x0f4:  pop    %esi
0848e1c3 +0x0f5:  pop    %edi
0848e1c4 +0x0f6:  pop    %ebp
0848e1c5 +0x0f7:  ret
0848e1c6 +0x0f8:  push   %ebp
0848e1c7 +0x0f9:  mov    %esp,%ebp
0848e1c9 +0x0fb:  sub    $0x8,%esp
0848e1cc +0x0fe:  call   0848e1d3 <+0x105>
0848e1d1 +0x103:  leave
0848e1d2 +0x104:  ret
0848e1d3 +0x105:  push   %ebp
0848e1d4 +0x106:  mov    %esp,%ebp
0848e1d6 +0x108:  sub    $0x8,%esp
0848e1d9 +0x10b:  call   0848e1e5 <+0x117>
0848e1de +0x110:  mov    &_ZN14GlobalInstanceI11EncryptToolE3m_pE,%eax
0848e1e3 +0x115:  leave
0848e1e4 +0x116:  ret
0848e1e5 +0x117:  push   %ebp
0848e1e6 +0x118:  mov    %esp,%ebp
0848e1e8 +0x11a:  push   %edi
0848e1e9 +0x11b:  push   %esi
0848e1ea +0x11c:  push   %ebx
0848e1eb +0x11d:  sub    $0x1c,%esp
0848e1ee +0x120:  mov    &_ZN14GlobalInstanceI11EncryptToolE3m_pE,%eax
0848e1f3 +0x125:  test   %eax,%eax
0848e1f5 +0x127:  jne    0848e23b <+0x16d>
0848e1f7 +0x129:  mov    &_ZN14GlobalInstanceI11EncryptToolE3m_pE,%eax
0848e1fc +0x12e:  test   %eax,%eax
0848e1fe +0x130:  jne    0848e23c <+0x16e>
0848e200 +0x132:  movl   $0x208,(%esp)
0848e207 +0x139:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0848e20c +0x13e:  mov    %eax,%ebx
0848e20e +0x140:  mov    %ebx,%eax
0848e210 +0x142:  mov    %eax,(%esp)
0848e213 +0x145:  call   0848e0ea <+0x1c>
0848e218 +0x14a:  jmp    0848e232 <+0x164>
0848e21a +0x14c:  mov    %edx,%esi
0848e21c +0x14e:  mov    %eax,%edi
0848e21e +0x150:  mov    %ebx,(%esp)
0848e221 +0x153:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0848e226 +0x158:  mov    %edi,%eax
0848e228 +0x15a:  mov    %esi,%edx
0848e22a +0x15c:  mov    %eax,(%esp)
0848e22d +0x15f:  call   08ae3750 <_Unwind_Resume>
0848e232 +0x164:  mov    %ebx,%eax
0848e234 +0x166:  mov    %eax,&_ZN14GlobalInstanceI11EncryptToolE3m_pE
0848e239 +0x16b:  jmp    0848e23c <+0x16e>
0848e23b +0x16d:  nop
0848e23c +0x16e:  add    $0x1c,%esp
0848e23f +0x171:  pop    %ebx
0848e240 +0x172:  pop    %esi
0848e241 +0x173:  pop    %edi
0848e242 +0x174:  pop    %ebp
0848e243 +0x175:  ret
```

## 反编译 C

```c
// <global>::global @ 0x848e0ce

/* Encryption::XorSeed */

void Encryption::_GLOBAL__I_XorSeed(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

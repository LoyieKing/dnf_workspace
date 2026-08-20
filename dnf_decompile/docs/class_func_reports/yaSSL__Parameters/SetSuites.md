# SetSuites

`_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb`

`yaSSL::Parameters::SetSuites(yaSSL::ProtocolVersion, bool, bool, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::Parameters` | `0x0874a230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874a230  _ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb
#           yaSSL::Parameters::SetSuites(yaSSL::ProtocolVersion, bool, bool, bool)
# range [0x0874a230, 0x0874a44a]
0874a230 +0x000:  push   %ebp
0874a231 +0x001:  mov    %esp,%ebp
0874a233 +0x003:  push   %edi
0874a234 +0x004:  push   %esi
0874a235 +0x005:  push   %ebx
0874a236 +0x006:  sub    $0x3c,%esp
0874a239 +0x009:  movzbl 0x14(%ebp),%eax
0874a23d +0x00d:  movzwl 0xc(%ebp),%ecx
0874a241 +0x011:  call   08722df8 <__i686.get_pc_thunk.bx>
0874a246 +0x016:  add    $0xc22952,%ebx
0874a24c +0x01c:  mov    0x8(%ebp),%edx
0874a24f +0x01f:  movzbl 0x10(%ebp),%esi
0874a253 +0x023:  mov    %al,-0x29(%ebp)
0874a256 +0x026:  movzbl 0x18(%ebp),%eax
0874a25a +0x02a:  cmp    $0x2,%cl
0874a25d +0x02d:  mov    %al,-0x19(%ebp)
0874a260 +0x030:  jbe    0874a270 <+0x40>
0874a262 +0x032:  mov    %ecx,%eax
0874a264 +0x034:  shr    $0x8,%ax
0874a268 +0x038:  test   %al,%al
0874a26a +0x03a:  jne    0874a308 <+0xd8>
0874a270 +0x040:  xor    %eax,%eax
0874a272 +0x042:  cmpb   $0x0,-0x29(%ebp)
0874a276 +0x046:  jne    0874a2a3 <+0x73>
0874a278 +0x048:  movb   $0x0,0x2f(%edx,%eax,1)
0874a27d +0x04d:  movb   $0x5,0x30(%edx,%eax,1)
0874a282 +0x052:  movb   $0x0,0x31(%edx,%eax,1)
0874a287 +0x057:  movb   $0x4,0x32(%edx,%eax,1)
0874a28c +0x05c:  movb   $0x0,0x33(%edx,%eax,1)
0874a291 +0x061:  movb   $0xa,0x34(%edx,%eax,1)
0874a296 +0x066:  movb   $0x0,0x35(%edx,%eax,1)
0874a29b +0x06b:  movb   $0x9,0x36(%edx,%eax,1)
0874a2a0 +0x070:  add    $0x8,%eax
0874a2a3 +0x073:  mov    %esi,%ecx
0874a2a5 +0x075:  test   %cl,%cl
0874a2a7 +0x077:  jne    0874a2f5 <+0xc5>
0874a2a9 +0x079:  cmpb   $0x0,-0x29(%ebp)
0874a2ad +0x07d:  jne    0874a2bc <+0x8c>
0874a2af +0x07f:  movb   $0x0,0x2f(%edx,%eax,1)
0874a2b4 +0x084:  movb   $0x16,0x30(%edx,%eax,1)
0874a2b9 +0x089:  add    $0x2,%eax
0874a2bc +0x08c:  cmpb   $0x0,-0x19(%ebp)
0874a2c0 +0x090:  jne    0874a2cf <+0x9f>
0874a2c2 +0x092:  movb   $0x0,0x2f(%edx,%eax,1)
0874a2c7 +0x097:  movb   $0x13,0x30(%edx,%eax,1)
0874a2cc +0x09c:  add    $0x2,%eax
0874a2cf +0x09f:  cmpb   $0x0,-0x29(%ebp)
0874a2d3 +0x0a3:  jne    0874a2e2 <+0xb2>
0874a2d5 +0x0a5:  movb   $0x0,0x2f(%edx,%eax,1)
0874a2da +0x0aa:  movb   $0x15,0x30(%edx,%eax,1)
0874a2df +0x0af:  add    $0x2,%eax
0874a2e2 +0x0b2:  cmpb   $0x0,-0x19(%ebp)
0874a2e6 +0x0b6:  jne    0874a2f5 <+0xc5>
0874a2e8 +0x0b8:  movb   $0x0,0x2f(%edx,%eax,1)
0874a2ed +0x0bd:  movb   $0x12,0x30(%edx,%eax,1)
0874a2f2 +0x0c2:  add    $0x2,%eax
0874a2f5 +0x0c5:  mov    %al,0x2e(%edx)
0874a2f8 +0x0c8:  mov    %edx,(%esp)
0874a2fb +0x0cb:  call   0874a1a0 <_ZN5yaSSL10Parameters14SetCipherNamesEv>  ; yaSSL::Parameters::SetCipherNames()
0874a300 +0x0d0:  add    $0x3c,%esp
0874a303 +0x0d3:  pop    %ebx
0874a304 +0x0d4:  pop    %esi
0874a305 +0x0d5:  pop    %edi
0874a306 +0x0d6:  pop    %ebp
0874a307 +0x0d7:  ret
0874a308 +0x0d8:  mov    %esi,%ecx
0874a30a +0x0da:  xor    %eax,%eax
0874a30c +0x0dc:  test   %cl,%cl
0874a30e +0x0de:  je     0874a3e0 <+0x1b0>
0874a314 +0x0e4:  cmpb   $0x0,-0x29(%ebp)
0874a318 +0x0e8:  jne    0874a327 <+0xf7>
0874a31a +0x0ea:  movb   $0x0,0x2f(%edx,%eax,1)
0874a31f +0x0ef:  movb   $0x35,0x30(%edx,%eax,1)
0874a324 +0x0f4:  add    $0x2,%eax
0874a327 +0x0f7:  mov    %esi,%ecx
0874a329 +0x0f9:  test   %cl,%cl
0874a32b +0x0fb:  jne    0874a34a <+0x11a>
0874a32d +0x0fd:  cmpb   $0x0,-0x29(%ebp)
0874a331 +0x101:  jne    0874a340 <+0x110>
0874a333 +0x103:  movb   $0x0,0x2f(%edx,%eax,1)
0874a338 +0x108:  movb   $0x33,0x30(%edx,%eax,1)
0874a33d +0x10d:  add    $0x2,%eax
0874a340 +0x110:  cmpb   $0x0,-0x19(%ebp)
0874a344 +0x114:  je     0874a438 <+0x208>
0874a34a +0x11a:  cmpb   $0x0,-0x29(%ebp)
0874a34e +0x11e:  jne    0874a37b <+0x14b>
0874a350 +0x120:  movb   $0x0,0x2f(%edx,%eax,1)
0874a355 +0x125:  movb   $0x2f,0x30(%edx,%eax,1)
0874a35a +0x12a:  movb   $0x0,0x31(%edx,%eax,1)
0874a35f +0x12f:  movb   $0x7e,0x32(%edx,%eax,1)
0874a364 +0x134:  movb   $0x0,0x33(%edx,%eax,1)
0874a369 +0x139:  movb   $0x7d,0x34(%edx,%eax,1)
0874a36e +0x13e:  movb   $0x0,0x35(%edx,%eax,1)
0874a373 +0x143:  movb   $0x7c,0x36(%edx,%eax,1)
0874a378 +0x148:  add    $0x8,%eax
0874a37b +0x14b:  mov    %esi,%ecx
0874a37d +0x14d:  test   %cl,%cl
0874a37f +0x14f:  jne    0874a272 <+0x42>
0874a385 +0x155:  cmpb   $0x0,-0x29(%ebp)
0874a389 +0x159:  jne    0874a3ac <+0x17c>
0874a38b +0x15b:  movb   $0x0,0x2f(%edx,%eax,1)
0874a390 +0x160:  movb   $0x79,0x30(%edx,%eax,1)
0874a395 +0x165:  movb   $0x0,0x31(%edx,%eax,1)
0874a39a +0x16a:  movb   $0x78,0x32(%edx,%eax,1)
0874a39f +0x16f:  movb   $0x0,0x33(%edx,%eax,1)
0874a3a4 +0x174:  movb   $0x77,0x34(%edx,%eax,1)
0874a3a9 +0x179:  add    $0x6,%eax
0874a3ac +0x17c:  cmpb   $0x0,-0x19(%ebp)
0874a3b0 +0x180:  jne    0874a272 <+0x42>
0874a3b6 +0x186:  movb   $0x0,0x2f(%edx,%eax,1)
0874a3bb +0x18b:  movb   $0x74,0x30(%edx,%eax,1)
0874a3c0 +0x190:  movb   $0x0,0x31(%edx,%eax,1)
0874a3c5 +0x195:  movb   $0x73,0x32(%edx,%eax,1)
0874a3ca +0x19a:  movb   $0x0,0x33(%edx,%eax,1)
0874a3cf +0x19f:  movb   $0x72,0x34(%edx,%eax,1)
0874a3d4 +0x1a4:  add    $0x6,%eax
0874a3d7 +0x1a7:  jmp    0874a272 <+0x42>
0874a3dc +0x1ac:  lea    0x0(%esi,%eiz,1),%esi
0874a3e0 +0x1b0:  cmpb   $0x0,-0x29(%ebp)
0874a3e4 +0x1b4:  je     0874a400 <+0x1d0>
0874a3e6 +0x1b6:  xor    %edi,%edi
0874a3e8 +0x1b8:  mov    $0x2,%al
0874a3ea +0x1ba:  cmpb   $0x0,-0x19(%ebp)
0874a3ee +0x1be:  movl   $0x1,-0x20(%ebp)
0874a3f5 +0x1c5:  je     0874a41f <+0x1ef>
0874a3f7 +0x1c7:  mov    %edi,%eax
0874a3f9 +0x1c9:  jmp    0874a314 <+0xe4>
0874a3fe +0x1ce:  xchg   %ax,%ax
0874a400 +0x1d0:  movb   $0x0,0x2f(%edx)
0874a404 +0x1d4:  mov    $0x4,%eax
0874a409 +0x1d9:  mov    $0x2,%edi
0874a40e +0x1de:  movb   $0x39,0x30(%edx)
0874a412 +0x1e2:  cmpb   $0x0,-0x19(%ebp)
0874a416 +0x1e6:  movl   $0x3,-0x20(%ebp)
0874a41d +0x1ed:  jne    0874a3f7 <+0x1c7>
0874a41f +0x1ef:  movb   $0x0,0x2f(%edx,%edi,1)
0874a424 +0x1f4:  mov    -0x20(%ebp),%ecx
0874a427 +0x1f7:  movb   $0x38,0x2f(%edx,%ecx,1)
0874a42c +0x1fc:  jmp    0874a314 <+0xe4>
0874a431 +0x201:  lea    0x0(%esi,%eiz,1),%esi
0874a438 +0x208:  movb   $0x0,0x2f(%edx,%eax,1)
0874a43d +0x20d:  movb   $0x32,0x30(%edx,%eax,1)
0874a442 +0x212:  add    $0x2,%eax
0874a445 +0x215:  jmp    0874a34a <+0x11a>
0874a44a +0x21a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Parameters::SetSuites @ 0x874a230

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Parameters::SetSuites(yaSSL::ProtocolVersion, bool, bool, bool) */

void __thiscall
yaSSL::Parameters::SetSuites
          (Parameters *this,undefined2 param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int local_24;
  
  if (((byte)param_2 < 3) || ((char)((ushort)param_2 >> 8) == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        this[0x2f] = (Parameters)0x0;
        iVar2 = 4;
        iVar1 = 2;
        this[0x30] = (Parameters)0x39;
        local_24 = 3;
      }
      else {
        iVar1 = 0;
        iVar2 = 2;
        local_24 = 1;
      }
      if (param_5 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[local_24 + 0x2f] = (Parameters)0x38;
        iVar1 = iVar2;
      }
    }
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x35;
      iVar1 = iVar1 + 2;
    }
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x33;
        iVar1 = iVar1 + 2;
      }
      if (param_5 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x32;
        iVar1 = iVar1 + 2;
      }
    }
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x2f;
      this[iVar1 + 0x31] = (Parameters)0x0;
      this[iVar1 + 0x32] = (Parameters)0x7e;
      this[iVar1 + 0x33] = (Parameters)0x0;
      this[iVar1 + 0x34] = (Parameters)0x7d;
      this[iVar1 + 0x35] = (Parameters)0x0;
      this[iVar1 + 0x36] = (Parameters)0x7c;
      iVar1 = iVar1 + 8;
    }
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x79;
        this[iVar1 + 0x31] = (Parameters)0x0;
        this[iVar1 + 0x32] = (Parameters)0x78;
        this[iVar1 + 0x33] = (Parameters)0x0;
        this[iVar1 + 0x34] = (Parameters)0x77;
        iVar1 = iVar1 + 6;
      }
      if (param_5 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x74;
        this[iVar1 + 0x31] = (Parameters)0x0;
        this[iVar1 + 0x32] = (Parameters)0x73;
        this[iVar1 + 0x33] = (Parameters)0x0;
        this[iVar1 + 0x34] = (Parameters)0x72;
        iVar1 = iVar1 + 6;
      }
    }
  }
  if (param_4 == '\0') {
    this[iVar1 + 0x2f] = (Parameters)0x0;
    this[iVar1 + 0x30] = (Parameters)0x5;
    this[iVar1 + 0x31] = (Parameters)0x0;
    this[iVar1 + 0x32] = (Parameters)0x4;
    this[iVar1 + 0x33] = (Parameters)0x0;
    this[iVar1 + 0x34] = (Parameters)0xa;
    this[iVar1 + 0x35] = (Parameters)0x0;
    this[iVar1 + 0x36] = (Parameters)0x9;
    iVar1 = iVar1 + 8;
  }
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x16;
      iVar1 = iVar1 + 2;
    }
    if (param_5 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x13;
      iVar1 = iVar1 + 2;
    }
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x15;
      iVar1 = iVar1 + 2;
    }
    if (param_5 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x12;
      iVar1 = iVar1 + 2;
    }
  }
  this[0x2e] = SUB41(iVar1,0);
  SetCipherNames(this);
  return;
}
```

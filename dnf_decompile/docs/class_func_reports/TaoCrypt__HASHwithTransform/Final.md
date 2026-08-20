# Final

`_ZN8TaoCrypt17HASHwithTransform5FinalEPh`

`TaoCrypt::HASHwithTransform::Final(unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASHwithTransform` | `0x08758d90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758d90  _ZN8TaoCrypt17HASHwithTransform5FinalEPh
#           TaoCrypt::HASHwithTransform::Final(unsigned char*)
# range [0x08758d90, 0x08758f8a]
08758d90 +0x000:  push   %ebp
08758d91 +0x001:  mov    %esp,%ebp
08758d93 +0x003:  push   %edi
08758d94 +0x004:  push   %esi
08758d95 +0x005:  push   %ebx
08758d96 +0x006:  sub    $0x3c,%esp
08758d99 +0x009:  mov    0x8(%ebp),%esi
08758d9c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08758da1 +0x011:  add    $0xc13df7,%ebx
08758da7 +0x017:  mov    (%esi),%eax
08758da9 +0x019:  lea    0x30(%esi),%edi
08758dac +0x01c:  mov    %esi,(%esp)
08758daf +0x01f:  call   *0x14(%eax)
08758db2 +0x022:  mov    %eax,-0x28(%ebp)
08758db5 +0x025:  mov    (%esi),%eax
08758db7 +0x027:  mov    %esi,(%esp)
08758dba +0x02a:  call   *0x18(%eax)
08758dbd +0x02d:  mov    %eax,-0x24(%ebp)
08758dc0 +0x030:  mov    (%esi),%eax
08758dc2 +0x032:  mov    %esi,(%esp)
08758dc5 +0x035:  call   *0x20(%eax)
08758dc8 +0x038:  mov    %eax,-0x1c(%ebp)
08758dcb +0x03b:  mov    (%esi),%eax
08758dcd +0x03d:  mov    %esi,(%esp)
08758dd0 +0x040:  call   *0x1c(%eax)
08758dd3 +0x043:  mov    %eax,-0x20(%ebp)
08758dd6 +0x046:  mov    0x4(%esi),%eax
08758dd9 +0x049:  mov    %esi,(%esp)
08758ddc +0x04c:  mov    %eax,0x4(%esp)
08758de0 +0x050:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
08758de5 +0x055:  mov    0x8(%esi),%eax
08758de8 +0x058:  lea    0x0(,%eax,8),%edx
08758def +0x05f:  mov    %edx,-0x30(%ebp)
08758df2 +0x062:  mov    0xc(%esi),%edx
08758df5 +0x065:  shr    $0x1d,%eax
08758df8 +0x068:  lea    (%eax,%edx,8),%eax
08758dfb +0x06b:  mov    %eax,-0x2c(%ebp)
08758dfe +0x06e:  mov    0x4(%esi),%eax
08758e01 +0x071:  movb   $0x80,0x30(%esi,%eax,1)
08758e06 +0x076:  add    $0x1,%eax
08758e09 +0x079:  cmp    %eax,-0x1c(%ebp)
08758e0c +0x07c:  mov    %eax,0x4(%esi)
08758e0f +0x07f:  jb     08758f10 <+0x180>
08758e15 +0x085:  mov    -0x1c(%ebp),%edx
08758e18 +0x088:  movl   $0x0,0x4(%esp)
08758e20 +0x090:  sub    %eax,%edx
08758e22 +0x092:  lea    (%edi,%eax,1),%eax
08758e25 +0x095:  mov    %edx,0x8(%esp)
08758e29 +0x099:  mov    %eax,(%esp)
08758e2c +0x09c:  call   0807dcc0 <_init+0x5b8>
08758e31 +0x0a1:  mov    -0x20(%ebp),%edx
08758e34 +0x0a4:  test   %edx,%edx
08758e36 +0x0a6:  je     08758ef0 <+0x160>
08758e3c +0x0ac:  mov    -0x28(%ebp),%eax
08758e3f +0x0af:  shr    $0x2,%eax
08758e42 +0x0b2:  test   %eax,%eax
08758e44 +0x0b4:  je     08758e75 <+0xe5>
08758e46 +0x0b6:  mov    %esi,-0x20(%ebp)
08758e49 +0x0b9:  xor    %edx,%edx
08758e4b +0x0bb:  mov    %eax,%esi
08758e4d +0x0bd:  lea    0x0(%esi),%esi
08758e50 +0x0c0:  mov    (%edi,%edx,4),%ecx
08758e53 +0x0c3:  mov    %ecx,%eax
08758e55 +0x0c5:  ror    $0x18,%eax
08758e58 +0x0c8:  ror    $0x8,%ecx
08758e5b +0x0cb:  and    $0xff00ff,%eax
08758e60 +0x0d0:  and    $0xff00ff00,%ecx
08758e66 +0x0d6:  or     %ecx,%eax
08758e68 +0x0d8:  mov    %eax,(%edi,%edx,4)
08758e6b +0x0db:  add    $0x1,%edx
08758e6e +0x0de:  cmp    %edx,%esi
08758e70 +0x0e0:  ja     08758e50 <+0xc0>
08758e72 +0x0e2:  mov    -0x20(%ebp),%esi
08758e75 +0x0e5:  mov    -0x2c(%ebp),%edx
08758e78 +0x0e8:  mov    -0x1c(%ebp),%eax
08758e7b +0x0eb:  mov    %edx,0x30(%esi,%eax,1)
08758e7f +0x0ef:  mov    -0x30(%ebp),%edx
08758e82 +0x0f2:  mov    %edx,0x4(%edi,%eax,1)
08758e86 +0x0f6:  mov    (%esi),%eax
08758e88 +0x0f8:  mov    %esi,(%esp)
08758e8b +0x0fb:  call   *0x24(%eax)
08758e8e +0x0fe:  mov    -0x24(%ebp),%edi
08758e91 +0x101:  xor    %edx,%edx
08758e93 +0x103:  shr    $0x2,%edi
08758e96 +0x106:  test   %edi,%edi
08758e98 +0x108:  je     08758ec4 <+0x134>
08758e9a +0x10a:  lea    0x0(%esi),%esi
08758ea0 +0x110:  mov    0x10(%esi,%edx,4),%ecx
08758ea4 +0x114:  mov    %ecx,%eax
08758ea6 +0x116:  ror    $0x18,%eax
08758ea9 +0x119:  ror    $0x8,%ecx
08758eac +0x11c:  and    $0xff00ff,%eax
08758eb1 +0x121:  and    $0xff00ff00,%ecx
08758eb7 +0x127:  or     %ecx,%eax
08758eb9 +0x129:  mov    %eax,0x10(%esi,%edx,4)
08758ebd +0x12d:  add    $0x1,%edx
08758ec0 +0x130:  cmp    %edi,%edx
08758ec2 +0x132:  jne    08758ea0 <+0x110>
08758ec4 +0x134:  lea    0x10(%esi),%eax
08758ec7 +0x137:  mov    -0x24(%ebp),%edx
08758eca +0x13a:  mov    %eax,0x4(%esp)
08758ece +0x13e:  mov    0xc(%ebp),%eax
08758ed1 +0x141:  mov    %edx,0x8(%esp)
08758ed5 +0x145:  mov    %eax,(%esp)
08758ed8 +0x148:  call   0807d8a0 <_init+0x198>
08758edd +0x14d:  mov    (%esi),%eax
08758edf +0x14f:  mov    %esi,(%esp)
08758ee2 +0x152:  call   *0x10(%eax)
08758ee5 +0x155:  add    $0x3c,%esp
08758ee8 +0x158:  pop    %ebx
08758ee9 +0x159:  pop    %esi
08758eea +0x15a:  pop    %edi
08758eeb +0x15b:  pop    %ebp
08758eec +0x15c:  ret
08758eed +0x15d:  lea    0x0(%esi),%esi
08758ef0 +0x160:  mov    -0x30(%ebp),%eax
08758ef3 +0x163:  mov    -0x1c(%ebp),%edx
08758ef6 +0x166:  mov    %eax,0x30(%esi,%edx,1)
08758efa +0x16a:  mov    -0x2c(%ebp),%eax
08758efd +0x16d:  mov    %eax,0x4(%edi,%edx,1)
08758f01 +0x171:  mov    (%esi),%eax
08758f03 +0x173:  mov    %esi,(%esp)
08758f06 +0x176:  call   *0x24(%eax)
08758f09 +0x179:  jmp    08758ec4 <+0x134>
08758f0b +0x17b:  nop
08758f0c +0x17c:  lea    0x0(%esi,%eiz,1),%esi
08758f10 +0x180:  mov    -0x28(%ebp),%edx
08758f13 +0x183:  movl   $0x0,0x4(%esp)
08758f1b +0x18b:  sub    %eax,%edx
08758f1d +0x18d:  lea    (%edi,%eax,1),%eax
08758f20 +0x190:  mov    %edx,0x8(%esp)
08758f24 +0x194:  mov    %eax,(%esp)
08758f27 +0x197:  call   0807dcc0 <_init+0x5b8>
08758f2c +0x19c:  mov    -0x20(%ebp),%ecx
08758f2f +0x19f:  mov    -0x28(%ebp),%eax
08758f32 +0x1a2:  test   %ecx,%ecx
08758f34 +0x1a4:  mov    %eax,0x4(%esi)
08758f37 +0x1a7:  je     08758f6d <+0x1dd>
08758f39 +0x1a9:  shr    $0x2,%eax
08758f3c +0x1ac:  test   %eax,%eax
08758f3e +0x1ae:  je     08758f6d <+0x1dd>
08758f40 +0x1b0:  mov    %esi,-0x34(%ebp)
08758f43 +0x1b3:  xor    %edx,%edx
08758f45 +0x1b5:  mov    %eax,%esi
08758f47 +0x1b7:  nop
08758f48 +0x1b8:  mov    (%edi,%edx,4),%ecx
08758f4b +0x1bb:  mov    %ecx,%eax
08758f4d +0x1bd:  ror    $0x18,%eax
08758f50 +0x1c0:  ror    $0x8,%ecx
08758f53 +0x1c3:  and    $0xff00ff,%eax
08758f58 +0x1c8:  and    $0xff00ff00,%ecx
08758f5e +0x1ce:  or     %ecx,%eax
08758f60 +0x1d0:  mov    %eax,(%edi,%edx,4)
08758f63 +0x1d3:  add    $0x1,%edx
08758f66 +0x1d6:  cmp    %edx,%esi
08758f68 +0x1d8:  ja     08758f48 <+0x1b8>
08758f6a +0x1da:  mov    -0x34(%ebp),%esi
08758f6d +0x1dd:  mov    (%esi),%eax
08758f6f +0x1df:  mov    %esi,(%esp)
08758f72 +0x1e2:  call   *0x24(%eax)
08758f75 +0x1e5:  xor    %eax,%eax
08758f77 +0x1e7:  movl   $0x0,0x4(%esi)
08758f7e +0x1ee:  jmp    08758e15 <+0x85>
08758f83 +0x1f3:  nop
08758f84 +0x1f4:  lea    0x0(%esi),%esi
08758f8a +0x1fa:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::HASHwithTransform::Final @ 0x8758d90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASHwithTransform::Final(unsigned char*) */

void __thiscall TaoCrypt::HASHwithTransform::Final(HASHwithTransform *this,uchar *param_1)

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
  
  uVar5 = (**(code **)(*(int *)this + 0x14))(this);
  __n = (**(code **)(*(int *)this + 0x18))(this);
  uVar6 = (**(code **)(*(int *)this + 0x20))(this);
  iVar7 = (**(code **)(*(int *)this + 0x1c))(this);
  AddLength(this,*(uint *)(this + 4));
  iVar2 = *(uint *)(this + 8) * 8;
  iVar1 = (*(uint *)(this + 8) >> 0x1d) + *(int *)(this + 0xc) * 8;
  iVar3 = *(int *)(this + 4);
  this[iVar3 + 0x30] = (HASHwithTransform)0x80;
  uVar8 = iVar3 + 1;
  *(uint *)(this + 4) = uVar8;
  if (uVar6 < uVar8) {
    memset(this + iVar3 + 0x31,0,uVar5 - uVar8);
    *(uint *)(this + 4) = uVar5;
    if ((iVar7 != 0) && (uVar5 >> 2 != 0)) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 4 + 0x30);
        *(uint *)(this + uVar8 * 4 + 0x30) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5 >> 2);
    }
    (**(code **)(*(int *)this + 0x24))(this);
    uVar8 = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  memset(this + uVar8 + 0x30,0,uVar6 - uVar8);
  if (iVar7 == 0) {
    *(int *)(this + uVar6 + 0x30) = iVar2;
    *(int *)(this + uVar6 + 0x34) = iVar1;
    (**(code **)(*(int *)this + 0x24))(this);
  }
  else {
    if (uVar5 >> 2 != 0) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 4 + 0x30);
        *(uint *)(this + uVar8 * 4 + 0x30) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5 >> 2);
    }
    *(int *)(this + uVar6 + 0x30) = iVar1;
    *(int *)(this + uVar6 + 0x34) = iVar2;
    (**(code **)(*(int *)this + 0x24))(this);
    uVar5 = 0;
    if (__n >> 2 != 0) {
      do {
        uVar6 = *(uint *)(this + uVar5 * 4 + 0x10);
        *(uint *)(this + uVar5 * 4 + 0x10) =
             uVar6 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18;
        uVar5 = uVar5 + 1;
      } while (uVar5 != __n >> 2);
    }
  }
  memcpy(param_1,this + 0x10,__n);
  (**(code **)(*(int *)this + 0x10))(this);
  return;
}
```

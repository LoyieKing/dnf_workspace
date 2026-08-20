# Update

`_ZN8TaoCrypt3SHA6UpdateEPKhj`

`TaoCrypt::SHA::Update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA` | `0x0876fc60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876fc60  _ZN8TaoCrypt3SHA6UpdateEPKhj
#           TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
# range [0x0876fc60, 0x0876ff5a]
0876fc60 +0x000:  push   %ebp
0876fc61 +0x001:  mov    %esp,%ebp
0876fc63 +0x003:  sub    $0x38,%esp
0876fc66 +0x006:  mov    %ebx,-0xc(%ebp)
0876fc69 +0x009:  mov    0xc(%ebp),%edx
0876fc6c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0876fc71 +0x011:  add    $0xbfcf27,%ebx
0876fc77 +0x017:  mov    %esi,-0x8(%ebp)
0876fc7a +0x01a:  mov    0x8(%ebp),%esi
0876fc7d +0x01d:  mov    %edi,-0x4(%ebp)
0876fc80 +0x020:  mov    0x10(%ebp),%edi
0876fc83 +0x023:  mov    -0x5c8(%ebx),%eax
0876fc89 +0x029:  cmpb   $0x0,(%eax)
0876fc8c +0x02c:  je     0876fd20 <+0xc0>
0876fc92 +0x032:  lea    0x30(%esi),%eax
0876fc95 +0x035:  mov    %eax,-0x1c(%ebp)
0876fc98 +0x038:  mov    0x4(%esi),%eax
0876fc9b +0x03b:  test   %eax,%eax
0876fc9d +0x03d:  jne    0876fcd8 <+0x78>
0876fc9f +0x03f:  mov    %edi,%eax
0876fca1 +0x041:  shr    $0x6,%eax
0876fca4 +0x044:  test   %eax,%eax
0876fca6 +0x046:  jne    0876fd40 <+0xe0>
0876fcac +0x04c:  test   %edi,%edi
0876fcae +0x04e:  je     0876fcc9 <+0x69>
0876fcb0 +0x050:  mov    -0x1c(%ebp),%eax
0876fcb3 +0x053:  add    0x4(%esi),%eax
0876fcb6 +0x056:  mov    %edi,0x8(%esp)
0876fcba +0x05a:  mov    %edx,0x4(%esp)
0876fcbe +0x05e:  mov    %eax,(%esp)
0876fcc1 +0x061:  call   0807d8a0 <_init+0x198>
0876fcc6 +0x066:  add    %edi,0x4(%esi)
0876fcc9 +0x069:  mov    -0xc(%ebp),%ebx
0876fccc +0x06c:  mov    -0x8(%ebp),%esi
0876fccf +0x06f:  mov    -0x4(%ebp),%edi
0876fcd2 +0x072:  mov    %ebp,%esp
0876fcd4 +0x074:  pop    %ebp
0876fcd5 +0x075:  ret
0876fcd6 +0x076:  xchg   %ax,%ax
0876fcd8 +0x078:  mov    $0x40,%ecx
0876fcdd +0x07d:  sub    %eax,%ecx
0876fcdf +0x07f:  cmp    %ecx,%edi
0876fce1 +0x081:  cmovbe %edi,%ecx
0876fce4 +0x084:  add    -0x1c(%ebp),%eax
0876fce7 +0x087:  mov    %ecx,0x8(%esp)
0876fceb +0x08b:  mov    %edx,0x4(%esp)
0876fcef +0x08f:  mov    %edx,-0x20(%ebp)
0876fcf2 +0x092:  mov    %ecx,-0x24(%ebp)
0876fcf5 +0x095:  mov    %eax,(%esp)
0876fcf8 +0x098:  call   0807d8a0 <_init+0x198>
0876fcfd +0x09d:  mov    -0x24(%ebp),%ecx
0876fd00 +0x0a0:  mov    0x4(%esi),%eax
0876fd03 +0x0a3:  mov    -0x20(%ebp),%edx
0876fd06 +0x0a6:  sub    %ecx,%edi
0876fd08 +0x0a8:  add    %ecx,%eax
0876fd0a +0x0aa:  add    %ecx,%edx
0876fd0c +0x0ac:  cmp    $0x40,%eax
0876fd0f +0x0af:  mov    %eax,0x4(%esi)
0876fd12 +0x0b2:  je     0876fd80 <+0x120>
0876fd14 +0x0b4:  test   %eax,%eax
0876fd16 +0x0b6:  jne    0876fcac <+0x4c>
0876fd18 +0x0b8:  jmp    0876fc9f <+0x3f>
0876fd1a +0x0ba:  lea    0x0(%esi),%esi
0876fd20 +0x0c0:  mov    %edi,0x8(%esp)
0876fd24 +0x0c4:  mov    %esi,(%esp)
0876fd27 +0x0c7:  mov    %edx,0x4(%esp)
0876fd2b +0x0cb:  call   08758c70 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj>  ; TaoCrypt::HASHwithTransform::Update(unsigned char const*, unsigned int)
0876fd30 +0x0d0:  mov    -0xc(%ebp),%ebx
0876fd33 +0x0d3:  mov    -0x8(%ebp),%esi
0876fd36 +0x0d6:  mov    -0x4(%ebp),%edi
0876fd39 +0x0d9:  mov    %ebp,%esp
0876fd3b +0x0db:  pop    %ebp
0876fd3c +0x0dc:  ret
0876fd3d +0x0dd:  lea    0x0(%esi),%esi
0876fd40 +0x0e0:  mov    %edx,0x4(%esp)
0876fd44 +0x0e4:  mov    %edx,-0x20(%ebp)
0876fd47 +0x0e7:  mov    %eax,0x8(%esp)
0876fd4b +0x0eb:  mov    %eax,-0x24(%ebp)
0876fd4e +0x0ee:  mov    %esi,(%esp)
0876fd51 +0x0f1:  call   087685d0 <_ZN8TaoCrypt3SHA12AsmTransformEPKhj>  ; TaoCrypt::SHA::AsmTransform(unsigned char const*, unsigned int)
0876fd56 +0x0f6:  mov    -0x24(%ebp),%eax
0876fd59 +0x0f9:  mov    %esi,(%esp)
0876fd5c +0x0fc:  shl    $0x6,%eax
0876fd5f +0x0ff:  mov    %eax,0x4(%esp)
0876fd63 +0x103:  mov    %eax,-0x24(%ebp)
0876fd66 +0x106:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
0876fd6b +0x10b:  mov    -0x24(%ebp),%eax
0876fd6e +0x10e:  mov    -0x20(%ebp),%edx
0876fd71 +0x111:  sub    %eax,%edi
0876fd73 +0x113:  add    %eax,%edx
0876fd75 +0x115:  jmp    0876fcac <+0x4c>
0876fd7a +0x11a:  lea    0x0(%esi),%esi
0876fd80 +0x120:  mov    0x30(%esi),%ecx
0876fd83 +0x123:  mov    %ecx,%eax
0876fd85 +0x125:  ror    $0x18,%eax
0876fd88 +0x128:  ror    $0x8,%ecx
0876fd8b +0x12b:  and    $0xff00ff,%eax
0876fd90 +0x130:  and    $0xff00ff00,%ecx
0876fd96 +0x136:  or     %ecx,%eax
0876fd98 +0x138:  mov    0x34(%esi),%ecx
0876fd9b +0x13b:  mov    %eax,0x30(%esi)
0876fd9e +0x13e:  mov    %ecx,%eax
0876fda0 +0x140:  ror    $0x18,%eax
0876fda3 +0x143:  ror    $0x8,%ecx
0876fda6 +0x146:  and    $0xff00ff,%eax
0876fdab +0x14b:  and    $0xff00ff00,%ecx
0876fdb1 +0x151:  or     %ecx,%eax
0876fdb3 +0x153:  mov    0x38(%esi),%ecx
0876fdb6 +0x156:  mov    %eax,0x34(%esi)
0876fdb9 +0x159:  mov    %ecx,%eax
0876fdbb +0x15b:  ror    $0x18,%eax
0876fdbe +0x15e:  ror    $0x8,%ecx
0876fdc1 +0x161:  and    $0xff00ff,%eax
0876fdc6 +0x166:  and    $0xff00ff00,%ecx
0876fdcc +0x16c:  or     %ecx,%eax
0876fdce +0x16e:  mov    0x3c(%esi),%ecx
0876fdd1 +0x171:  mov    %eax,0x38(%esi)
0876fdd4 +0x174:  mov    %ecx,%eax
0876fdd6 +0x176:  ror    $0x18,%eax
0876fdd9 +0x179:  ror    $0x8,%ecx
0876fddc +0x17c:  and    $0xff00ff,%eax
0876fde1 +0x181:  and    $0xff00ff00,%ecx
0876fde7 +0x187:  or     %ecx,%eax
0876fde9 +0x189:  mov    0x40(%esi),%ecx
0876fdec +0x18c:  mov    %eax,0x3c(%esi)
0876fdef +0x18f:  mov    %ecx,%eax
0876fdf1 +0x191:  ror    $0x18,%eax
0876fdf4 +0x194:  ror    $0x8,%ecx
0876fdf7 +0x197:  and    $0xff00ff,%eax
0876fdfc +0x19c:  and    $0xff00ff00,%ecx
0876fe02 +0x1a2:  or     %ecx,%eax
0876fe04 +0x1a4:  mov    0x44(%esi),%ecx
0876fe07 +0x1a7:  mov    %eax,0x40(%esi)
0876fe0a +0x1aa:  mov    %ecx,%eax
0876fe0c +0x1ac:  ror    $0x18,%eax
0876fe0f +0x1af:  ror    $0x8,%ecx
0876fe12 +0x1b2:  and    $0xff00ff,%eax
0876fe17 +0x1b7:  and    $0xff00ff00,%ecx
0876fe1d +0x1bd:  or     %ecx,%eax
0876fe1f +0x1bf:  mov    0x48(%esi),%ecx
0876fe22 +0x1c2:  mov    %eax,0x44(%esi)
0876fe25 +0x1c5:  mov    %ecx,%eax
0876fe27 +0x1c7:  ror    $0x18,%eax
0876fe2a +0x1ca:  ror    $0x8,%ecx
0876fe2d +0x1cd:  and    $0xff00ff,%eax
0876fe32 +0x1d2:  and    $0xff00ff00,%ecx
0876fe38 +0x1d8:  or     %ecx,%eax
0876fe3a +0x1da:  mov    0x4c(%esi),%ecx
0876fe3d +0x1dd:  mov    %eax,0x48(%esi)
0876fe40 +0x1e0:  mov    %ecx,%eax
0876fe42 +0x1e2:  ror    $0x18,%eax
0876fe45 +0x1e5:  ror    $0x8,%ecx
0876fe48 +0x1e8:  and    $0xff00ff,%eax
0876fe4d +0x1ed:  and    $0xff00ff00,%ecx
0876fe53 +0x1f3:  or     %ecx,%eax
0876fe55 +0x1f5:  mov    0x50(%esi),%ecx
0876fe58 +0x1f8:  mov    %eax,0x4c(%esi)
0876fe5b +0x1fb:  mov    %ecx,%eax
0876fe5d +0x1fd:  ror    $0x18,%eax
0876fe60 +0x200:  ror    $0x8,%ecx
0876fe63 +0x203:  and    $0xff00ff,%eax
0876fe68 +0x208:  and    $0xff00ff00,%ecx
0876fe6e +0x20e:  or     %ecx,%eax
0876fe70 +0x210:  mov    0x54(%esi),%ecx
0876fe73 +0x213:  mov    %eax,0x50(%esi)
0876fe76 +0x216:  mov    %ecx,%eax
0876fe78 +0x218:  ror    $0x18,%eax
0876fe7b +0x21b:  ror    $0x8,%ecx
0876fe7e +0x21e:  and    $0xff00ff,%eax
0876fe83 +0x223:  and    $0xff00ff00,%ecx
0876fe89 +0x229:  or     %ecx,%eax
0876fe8b +0x22b:  mov    0x58(%esi),%ecx
0876fe8e +0x22e:  mov    %eax,0x54(%esi)
0876fe91 +0x231:  mov    %ecx,%eax
0876fe93 +0x233:  ror    $0x18,%eax
0876fe96 +0x236:  ror    $0x8,%ecx
0876fe99 +0x239:  and    $0xff00ff,%eax
0876fe9e +0x23e:  and    $0xff00ff00,%ecx
0876fea4 +0x244:  or     %ecx,%eax
0876fea6 +0x246:  mov    0x5c(%esi),%ecx
0876fea9 +0x249:  mov    %eax,0x58(%esi)
0876feac +0x24c:  mov    %ecx,%eax
0876feae +0x24e:  ror    $0x18,%eax
0876feb1 +0x251:  ror    $0x8,%ecx
0876feb4 +0x254:  and    $0xff00ff,%eax
0876feb9 +0x259:  and    $0xff00ff00,%ecx
0876febf +0x25f:  or     %ecx,%eax
0876fec1 +0x261:  mov    0x60(%esi),%ecx
0876fec4 +0x264:  mov    %eax,0x5c(%esi)
0876fec7 +0x267:  mov    %ecx,%eax
0876fec9 +0x269:  ror    $0x18,%eax
0876fecc +0x26c:  ror    $0x8,%ecx
0876fecf +0x26f:  and    $0xff00ff,%eax
0876fed4 +0x274:  and    $0xff00ff00,%ecx
0876feda +0x27a:  or     %ecx,%eax
0876fedc +0x27c:  mov    0x64(%esi),%ecx
0876fedf +0x27f:  mov    %eax,0x60(%esi)
0876fee2 +0x282:  mov    %ecx,%eax
0876fee4 +0x284:  ror    $0x18,%eax
0876fee7 +0x287:  and    $0xff00ff,%eax
0876feec +0x28c:  ror    $0x8,%ecx
0876feef +0x28f:  and    $0xff00ff00,%ecx
0876fef5 +0x295:  or     %ecx,%eax
0876fef7 +0x297:  mov    0x68(%esi),%ecx
0876fefa +0x29a:  mov    %eax,0x64(%esi)
0876fefd +0x29d:  mov    %ecx,%eax
0876feff +0x29f:  ror    $0x18,%eax
0876ff02 +0x2a2:  ror    $0x8,%ecx
0876ff05 +0x2a5:  and    $0xff00ff,%eax
0876ff0a +0x2aa:  and    $0xff00ff00,%ecx
0876ff10 +0x2b0:  or     %ecx,%eax
0876ff12 +0x2b2:  mov    0x6c(%esi),%ecx
0876ff15 +0x2b5:  mov    %eax,0x68(%esi)
0876ff18 +0x2b8:  mov    %ecx,%eax
0876ff1a +0x2ba:  ror    $0x18,%eax
0876ff1d +0x2bd:  ror    $0x8,%ecx
0876ff20 +0x2c0:  and    $0xff00ff,%eax
0876ff25 +0x2c5:  and    $0xff00ff00,%ecx
0876ff2b +0x2cb:  or     %ecx,%eax
0876ff2d +0x2cd:  mov    %eax,0x6c(%esi)
0876ff30 +0x2d0:  mov    (%esi),%eax
0876ff32 +0x2d2:  mov    %esi,(%esp)
0876ff35 +0x2d5:  mov    %edx,-0x20(%ebp)
0876ff38 +0x2d8:  call   *0x24(%eax)
0876ff3b +0x2db:  movl   $0x40,0x4(%esp)
0876ff43 +0x2e3:  mov    %esi,(%esp)
0876ff46 +0x2e6:  call   08758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>  ; TaoCrypt::HASHwithTransform::AddLength(unsigned int)
0876ff4b +0x2eb:  mov    -0x20(%ebp),%edx
0876ff4e +0x2ee:  movl   $0x0,0x4(%esi)
0876ff55 +0x2f5:  jmp    0876fc9f <+0x3f>
0876ff5a +0x2fa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::SHA::Update @ 0x876fc60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::SHA::Update(SHA *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*PTR_isMMX_0936c5d0 == '\0') {
    HASHwithTransform::Update((HASHwithTransform *)this,param_1,param_2);
    return;
  }
  iVar3 = *(int *)(this + 4);
  if (iVar3 != 0) {
    uVar2 = 0x40U - iVar3;
    if (param_2 <= 0x40U - iVar3) {
      uVar2 = param_2;
    }
    memcpy(this + iVar3 + 0x30,param_1,uVar2);
    param_2 = param_2 - uVar2;
    iVar3 = *(int *)(this + 4) + uVar2;
    param_1 = param_1 + uVar2;
    *(int *)(this + 4) = iVar3;
    if (iVar3 == 0x40) {
      uVar2 = *(uint *)(this + 0x30);
      uVar1 = *(uint *)(this + 0x34);
      *(uint *)(this + 0x30) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x38);
      *(uint *)(this + 0x34) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x3c);
      *(uint *)(this + 0x38) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x40);
      *(uint *)(this + 0x3c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x44);
      *(uint *)(this + 0x40) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x48);
      *(uint *)(this + 0x44) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x4c);
      *(uint *)(this + 0x48) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x50);
      *(uint *)(this + 0x4c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x54);
      *(uint *)(this + 0x50) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x58);
      *(uint *)(this + 0x54) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x5c);
      *(uint *)(this + 0x58) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x60);
      *(uint *)(this + 0x5c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 100);
      *(uint *)(this + 0x60) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      uVar2 = *(uint *)(this + 0x68);
      *(uint *)(this + 100) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar1 = *(uint *)(this + 0x6c);
      *(uint *)(this + 0x68) =
           uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
      *(uint *)(this + 0x6c) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      (**(code **)(*(int *)this + 0x24))(this);
      HASHwithTransform::AddLength((HASHwithTransform *)this,0x40);
      *(undefined4 *)(this + 4) = 0;
    }
    else if (iVar3 != 0) goto LAB_0876fcac;
  }
  uVar2 = param_2 >> 6;
  if (uVar2 != 0) {
    AsmTransform(this,param_1,uVar2);
    HASHwithTransform::AddLength((HASHwithTransform *)this,uVar2 * 0x40);
    param_2 = param_2 + uVar2 * -0x40;
    param_1 = param_1 + uVar2 * 0x40;
  }
LAB_0876fcac:
  if (param_2 != 0) {
    memcpy(this + *(int *)(this + 4) + 0x30,param_1,param_2);
    *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  }
  return;
}
```

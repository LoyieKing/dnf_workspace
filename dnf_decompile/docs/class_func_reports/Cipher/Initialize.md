# Initialize

`_ZN6Cipher10InitializeEPKhi`

`Cipher::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x08097306` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08097306  _ZN6Cipher10InitializeEPKhi
#           Cipher::Initialize(unsigned char const*, int)
# range [0x08097306, 0x080973bf]
08097306 +0x00:  push   %ebp
08097307 +0x01:  mov    %esp,%ebp
08097309 +0x03:  sub    $0x28,%esp
0809730c +0x06:  mov    0x10(%ebp),%eax
0809730f +0x09:  mov    0x8(%ebp),%edx
08097312 +0x0c:  add    $0x10,%edx
08097315 +0x0f:  mov    %eax,0x8(%esp)
08097319 +0x13:  mov    0xc(%ebp),%eax
0809731c +0x16:  mov    %eax,0x4(%esp)
08097320 +0x1a:  mov    %edx,(%esp)
08097323 +0x1d:  call   0807d8a0 <_init+0x198>
08097328 +0x22:  movl   $0x0,-0x10(%ebp)
0809732f +0x29:  jmp    080973a9 <+0xa3>
08097331 +0x2b:  mov    -0x10(%ebp),%eax
08097334 +0x2e:  mov    0x8(%ebp),%edx
08097337 +0x31:  add    $0x4,%edx
0809733a +0x34:  mov    %eax,0x4(%esp)
0809733e +0x38:  mov    %edx,(%esp)
08097341 +0x3b:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
08097346 +0x40:  mov    (%eax),%eax
08097348 +0x42:  mov    (%eax),%edx
0809734a +0x44:  add    $0x20,%edx
0809734d +0x47:  mov    (%edx),%edx
0809734f +0x49:  mov    %eax,(%esp)
08097352 +0x4c:  call   *%edx
08097354 +0x4e:  mov    %eax,-0xc(%ebp)
08097357 +0x51:  mov    0x10(%ebp),%eax
0809735a +0x54:  cmp    -0xc(%ebp),%eax
0809735d +0x57:  jl     080973a2 <+0x9c>
0809735f +0x59:  mov    -0x10(%ebp),%eax
08097362 +0x5c:  mov    0x8(%ebp),%edx
08097365 +0x5f:  add    $0x4,%edx
08097368 +0x62:  mov    %eax,0x4(%esp)
0809736c +0x66:  mov    %edx,(%esp)
0809736f +0x69:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
08097374 +0x6e:  mov    (%eax),%eax
08097376 +0x70:  mov    (%eax),%edx
08097378 +0x72:  add    $0xc,%edx
0809737b +0x75:  mov    (%edx),%ecx
0809737d +0x77:  mov    -0xc(%ebp),%edx
08097380 +0x7a:  mov    %edx,0x8(%esp)
08097384 +0x7e:  mov    0xc(%ebp),%edx
08097387 +0x81:  mov    %edx,0x4(%esp)
0809738b +0x85:  mov    %eax,(%esp)
0809738e +0x88:  call   *%ecx
08097390 +0x8a:  mov    -0xc(%ebp),%eax
08097393 +0x8d:  add    %eax,0xc(%ebp)
08097396 +0x90:  mov    -0xc(%ebp),%eax
08097399 +0x93:  sub    %eax,0x10(%ebp)
0809739c +0x96:  addl   $0x1,-0x10(%ebp)
080973a0 +0x9a:  jmp    080973a9 <+0xa3>
080973a2 +0x9c:  mov    $0x0,%eax
080973a7 +0xa1:  jmp    080973bd <+0xb7>
080973a9 +0xa3:  cmpl   $0xd,-0x10(%ebp)
080973ad +0xa7:  setle  %al
080973b0 +0xaa:  test   %al,%al
080973b2 +0xac:  jne    08097331 <+0x2b>
080973b8 +0xb2:  mov    $0x1,%eax
080973bd +0xb7:  leave
080973be +0xb8:  ret
080973bf +0xb9:  nop
```

## 反编译 C

```c
// Cipher::Initialize @ 0x8097306

/* Cipher::Initialize(unsigned char const*, int) */

undefined4 __thiscall Cipher::Initialize(Cipher *this,uchar *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_14;
  
  memcpy(this + 0x10,param_1,param_2);
  local_14 = 0;
  while( true ) {
    if (0xd < (int)local_14) {
      return 1;
    }
    puVar1 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_14);
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1);
    if (param_2 < iVar2) break;
    puVar1 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_14);
    (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,param_1,iVar2);
    param_1 = param_1 + iVar2;
    param_2 = param_2 - iVar2;
    local_14 = local_14 + 1;
  }
  return 0;
}
```

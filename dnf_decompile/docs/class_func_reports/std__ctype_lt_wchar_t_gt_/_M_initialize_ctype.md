# _M_initialize_ctype

`_ZNSt5ctypeIwE19_M_initialize_ctypeEv`

`std::ctype<wchar_t>::_M_initialize_ctype()`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872f260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f260  _ZNSt5ctypeIwE19_M_initialize_ctypeEv
#           std::ctype<wchar_t>::_M_initialize_ctype()
# range [0x0872f260, 0x0872f32b]
0872f260 +0x00:  push   %ebp
0872f261 +0x01:  mov    %esp,%ebp
0872f263 +0x03:  push   %edi
0872f264 +0x04:  push   %esi
0872f265 +0x05:  xor    %esi,%esi
0872f267 +0x07:  push   %ebx
0872f268 +0x08:  sub    $0x2c,%esp
0872f26b +0x0b:  mov    0x8(%ebp),%ebx
0872f26e +0x0e:  mov    0x8(%ebx),%eax
0872f271 +0x11:  mov    %eax,(%esp)
0872f274 +0x14:  call   0807de70 <_init+0x768>
0872f279 +0x19:  mov    %eax,%edi
0872f27b +0x1b:  jmp    0872f293 <+0x33>
0872f27d +0x1d:  lea    0x0(%esi),%esi
0872f280 +0x20:  mov    %al,0xd(%ebx,%esi,1)
0872f284 +0x24:  add    $0x1,%esi
0872f287 +0x27:  cmp    $0x80,%esi
0872f28d +0x2d:  je     0872f327 <+0xc7>
0872f293 +0x33:  mov    %esi,(%esp)
0872f296 +0x36:  call   0807e2d0 <_init+0xbc8>
0872f29b +0x3b:  cmp    $0xffffffff,%eax
0872f29e +0x3e:  jne    0872f280 <+0x20>
0872f2a0 +0x40:  movb   $0x0,0xc(%ebx)
0872f2a4 +0x44:  xor    %esi,%esi
0872f2a6 +0x46:  xchg   %ax,%ax
0872f2a8 +0x48:  mov    %esi,(%esp)
0872f2ab +0x4b:  call   0807e600 <_init+0xef8>
0872f2b0 +0x50:  mov    %eax,0x90(%ebx,%esi,4)
0872f2b7 +0x57:  add    $0x1,%esi
0872f2ba +0x5a:  cmp    $0x100,%esi
0872f2c0 +0x60:  jne    0872f2a8 <+0x48>
0872f2c2 +0x62:  xor    %ecx,%ecx
0872f2c4 +0x64:  mov    $0x1,%si
0872f2c8 +0x68:  jmp    0872f303 <+0xa3>
0872f2ca +0x6a:  lea    0x0(%esi),%esi
0872f2d0 +0x70:  mov    %esi,%eax
0872f2d2 +0x72:  shl    %cl,%eax
0872f2d4 +0x74:  shl    $0x8,%eax
0872f2d7 +0x77:  mov    %ax,0x490(%ebx,%ecx,2)
0872f2df +0x7f:  movzwl %ax,%eax
0872f2e2 +0x82:  mov    %ecx,-0x1c(%ebp)
0872f2e5 +0x85:  mov    %eax,0x4(%esp)
0872f2e9 +0x89:  mov    %ebx,(%esp)
0872f2ec +0x8c:  call   0872f0f0 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt>  ; std::ctype<wchar_t>::_M_convert_to_wmask(unsigned short) const
0872f2f1 +0x91:  mov    -0x1c(%ebp),%ecx
0872f2f4 +0x94:  mov    %eax,0x4b0(%ebx,%ecx,4)
0872f2fb +0x9b:  add    $0x1,%ecx
0872f2fe +0x9e:  cmp    $0xc,%ecx
0872f301 +0xa1:  je     0872f318 <+0xb8>
0872f303 +0xa3:  cmp    $0x7,%ecx
0872f306 +0xa6:  jbe    0872f2d0 <+0x70>
0872f308 +0xa8:  mov    %esi,%eax
0872f30a +0xaa:  shl    %cl,%eax
0872f30c +0xac:  shr    $0x8,%eax
0872f30f +0xaf:  jmp    0872f2d7 <+0x77>
0872f311 +0xb1:  lea    0x0(%esi,%eiz,1),%esi
0872f318 +0xb8:  mov    %edi,0x8(%ebp)
0872f31b +0xbb:  add    $0x2c,%esp
0872f31e +0xbe:  pop    %ebx
0872f31f +0xbf:  pop    %esi
0872f320 +0xc0:  pop    %edi
0872f321 +0xc1:  pop    %ebp
0872f322 +0xc2:  jmp    0807de70 <_init+0x768>
0872f327 +0xc7:  movb   $0x1,0xc(%ebx)
0872f32b +0xcb:  jmp    0872f2a4 <+0x44>
```

## 反编译 C

```c
// std::ctype<wchar_t>::_M_initialize_ctype @ 0x872f260

/* std::ctype<wchar_t>::_M_initialize_ctype() */

void __thiscall std::ctype<wchar_t>::_M_initialize_ctype(ctype<wchar_t> *this)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  wint_t wVar5;
  
  wVar5 = 0;
  __uselocale(*(undefined4 *)(this + 8));
  do {
    iVar2 = wctob(wVar5);
    if (iVar2 == -1) {
      this[0xc] = (ctype<wchar_t>)0x0;
      goto LAB_0872f2a4;
    }
    this[wVar5 + 0xd] = SUB41(iVar2,0);
    wVar5 = wVar5 + 1;
  } while (wVar5 != 0x80);
  this[0xc] = (ctype<wchar_t>)0x1;
LAB_0872f2a4:
  iVar2 = 0;
  do {
    wVar5 = btowc(iVar2);
    *(wint_t *)(this + iVar2 * 4 + 0x90) = wVar5;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x100);
  uVar4 = 0;
  do {
    if (uVar4 < 8) {
      uVar1 = (ushort)((1 << ((byte)uVar4 & 0x1f)) << 8);
    }
    else {
      uVar1 = (ushort)((uint)(1 << ((byte)uVar4 & 0x1f)) >> 8);
    }
    *(ushort *)(this + uVar4 * 2 + 0x490) = uVar1;
    uVar3 = _M_convert_to_wmask(this,uVar1);
    *(undefined4 *)(this + uVar4 * 4 + 0x4b0) = uVar3;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0xc);
  __uselocale();
  return;
}
```

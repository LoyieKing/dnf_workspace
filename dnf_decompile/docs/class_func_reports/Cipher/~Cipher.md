# ~Cipher

`_ZN6CipherD1Ev`

`Cipher::~Cipher()`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x0809724c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809724c  _ZN6CipherD1Ev
#           Cipher::~Cipher()
# range [0x0809724c, 0x080972e7]
0809724c +0x00:  push   %ebp
0809724d +0x01:  mov    %esp,%ebp
0809724f +0x03:  push   %esi
08097250 +0x04:  push   %ebx
08097251 +0x05:  sub    $0x20,%esp
08097254 +0x08:  movl   $0x0,-0xc(%ebp)
0809725b +0x0f:  jmp    08097299 <+0x4d>
0809725d +0x11:  mov    -0xc(%ebp),%eax
08097260 +0x14:  mov    0x8(%ebp),%edx
08097263 +0x17:  add    $0x4,%edx
08097266 +0x1a:  mov    %eax,0x4(%esp)
0809726a +0x1e:  mov    %edx,(%esp)
0809726d +0x21:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
08097272 +0x26:  mov    %eax,(%esp)
08097275 +0x29:  call   0809e2d0 <_Z18DestroyCryptoGraphRP12ICryptoGraph>  ; DestroyCryptoGraph(ICryptoGraph*&)
0809727a +0x2e:  mov    -0xc(%ebp),%eax
0809727d +0x31:  mov    0x8(%ebp),%edx
08097280 +0x34:  add    $0x4,%edx
08097283 +0x37:  mov    %eax,0x4(%esp)
08097287 +0x3b:  mov    %edx,(%esp)
0809728a +0x3e:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
0809728f +0x43:  movl   $0x0,(%eax)
08097295 +0x49:  addl   $0x1,-0xc(%ebp)
08097299 +0x4d:  cmpl   $0xd,-0xc(%ebp)
0809729d +0x51:  setle  %al
080972a0 +0x54:  test   %al,%al
080972a2 +0x56:  jne    0809725d <+0x11>
080972a4 +0x58:  mov    0x8(%ebp),%eax
080972a7 +0x5b:  add    $0x4,%eax
080972aa +0x5e:  mov    %eax,(%esp)
080972ad +0x61:  call   0809787c <_GLOBAL__I__Z13GetCryptoTypei+0x238>  ; global constructors keyed to GetCryptoType(int)+0x238
080972b2 +0x66:  jmp    080972d2 <+0x86>
080972b4 +0x68:  mov    %edx,%ebx
080972b6 +0x6a:  mov    %eax,%esi
080972b8 +0x6c:  mov    0x8(%ebp),%eax
080972bb +0x6f:  add    $0x4,%eax
080972be +0x72:  mov    %eax,(%esp)
080972c1 +0x75:  call   08097674 <_GLOBAL__I__Z13GetCryptoTypei+0x30>  ; global constructors keyed to GetCryptoType(int)+0x30
080972c6 +0x7a:  mov    %esi,%eax
080972c8 +0x7c:  mov    %ebx,%edx
080972ca +0x7e:  mov    %eax,(%esp)
080972cd +0x81:  call   08ae3750 <_Unwind_Resume>
080972d2 +0x86:  mov    0x8(%ebp),%eax
080972d5 +0x89:  add    $0x4,%eax
080972d8 +0x8c:  mov    %eax,(%esp)
080972db +0x8f:  call   08097674 <_GLOBAL__I__Z13GetCryptoTypei+0x30>  ; global constructors keyed to GetCryptoType(int)+0x30
080972e0 +0x94:  add    $0x20,%esp
080972e3 +0x97:  pop    %ebx
080972e4 +0x98:  pop    %esi
080972e5 +0x99:  pop    %ebp
080972e6 +0x9a:  ret
080972e7 +0x9b:  nop
```

## 反编译 C

```c
// Cipher::~Cipher @ 0x809724c

/* Cipher::~Cipher() */

void __thiscall Cipher::~Cipher(Cipher *this)

{
  ICryptoGraph **ppIVar1;
  undefined4 *puVar2;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < 0xe; local_10 = local_10 + 1) {
    ppIVar1 = (ICryptoGraph **)
              std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                        ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_10)
    ;
                    /* try { // try from 08097275 to 080972b1 has its CatchHandler @ 080972b4 */
    DestroyCryptoGraph(ppIVar1);
    puVar2 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),local_10);
    *puVar2 = 0;
  }
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::clear
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4));
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::~vector
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4));
  return;
}
```

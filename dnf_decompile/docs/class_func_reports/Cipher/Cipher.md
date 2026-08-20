# Cipher

`_ZN6CipherC1Ev`

`Cipher::Cipher()`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x08097196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08097196  _ZN6CipherC1Ev
#           Cipher::Cipher()
# range [0x08097196, 0x0809724b]
08097196 +0x00:  push   %ebp
08097197 +0x01:  mov    %esp,%ebp
08097199 +0x03:  push   %esi
0809719a +0x04:  push   %ebx
0809719b +0x05:  sub    $0x20,%esp
0809719e +0x08:  mov    0x8(%ebp),%eax
080971a1 +0x0b:  movl   $0x0,(%eax)
080971a7 +0x11:  mov    0x8(%ebp),%eax
080971aa +0x14:  add    $0x4,%eax
080971ad +0x17:  mov    %eax,(%esp)
080971b0 +0x1a:  call   08097660 <_GLOBAL__I__Z13GetCryptoTypei+0x1c>  ; global constructors keyed to GetCryptoType(int)+0x1c
080971b5 +0x1f:  mov    0x8(%ebp),%eax
080971b8 +0x22:  add    $0x4,%eax
080971bb +0x25:  movl   $0xe,0x4(%esp)
080971c3 +0x2d:  mov    %eax,(%esp)
080971c6 +0x30:  call   080976d2 <_GLOBAL__I__Z13GetCryptoTypei+0x8e>  ; global constructors keyed to GetCryptoType(int)+0x8e
080971cb +0x35:  movl   $0x0,-0xc(%ebp)
080971d2 +0x3c:  jmp    0809721a <+0x84>
080971d4 +0x3e:  mov    -0xc(%ebp),%eax
080971d7 +0x41:  mov    %eax,(%esp)
080971da +0x44:  call   0809df90 <_Z17CreateCryptoGraph17CRYPTO_GRAPH_TYPE>  ; CreateCryptoGraph(CRYPTO_GRAPH_TYPE)
080971df +0x49:  mov    %eax,-0x10(%ebp)
080971e2 +0x4c:  mov    0x8(%ebp),%eax
080971e5 +0x4f:  lea    0x4(%eax),%edx
080971e8 +0x52:  lea    -0x10(%ebp),%eax
080971eb +0x55:  mov    %eax,0x4(%esp)
080971ef +0x59:  mov    %edx,(%esp)
080971f2 +0x5c:  call   080977f6 <_GLOBAL__I__Z13GetCryptoTypei+0x1b2>  ; global constructors keyed to GetCryptoType(int)+0x1b2
080971f7 +0x61:  mov    0x8(%ebp),%eax
080971fa +0x64:  mov    (%eax),%ebx
080971fc +0x66:  mov    -0x10(%ebp),%eax
080971ff +0x69:  mov    (%eax),%eax
08097201 +0x6b:  add    $0x20,%eax
08097204 +0x6e:  mov    (%eax),%edx
08097206 +0x70:  mov    -0x10(%ebp),%eax
08097209 +0x73:  mov    %eax,(%esp)
0809720c +0x76:  call   *%edx
0809720e +0x78:  lea    (%ebx,%eax,1),%edx
08097211 +0x7b:  mov    0x8(%ebp),%eax
08097214 +0x7e:  mov    %edx,(%eax)
08097216 +0x80:  addl   $0x1,-0xc(%ebp)
0809721a +0x84:  cmpl   $0xd,-0xc(%ebp)
0809721e +0x88:  setle  %al
08097221 +0x8b:  test   %al,%al
08097223 +0x8d:  jne    080971d4 <+0x3e>
08097225 +0x8f:  jmp    08097245 <+0xaf>
08097227 +0x91:  mov    %edx,%ebx
08097229 +0x93:  mov    %eax,%esi
0809722b +0x95:  mov    0x8(%ebp),%eax
0809722e +0x98:  add    $0x4,%eax
08097231 +0x9b:  mov    %eax,(%esp)
08097234 +0x9e:  call   08097674 <_GLOBAL__I__Z13GetCryptoTypei+0x30>  ; global constructors keyed to GetCryptoType(int)+0x30
08097239 +0xa3:  mov    %esi,%eax
0809723b +0xa5:  mov    %ebx,%edx
0809723d +0xa7:  mov    %eax,(%esp)
08097240 +0xaa:  call   08ae3750 <_Unwind_Resume>
08097245 +0xaf:  add    $0x20,%esp
08097248 +0xb2:  pop    %ebx
08097249 +0xb3:  pop    %esi
0809724a +0xb4:  pop    %ebp
0809724b +0xb5:  ret
```

## 反编译 C

```c
// Cipher::Cipher @ 0x8097196

/* Cipher::Cipher() */

void __thiscall Cipher::Cipher(Cipher *this)

{
  int iVar1;
  int iVar2;
  ICryptoGraph *local_14;
  int local_10;
  
  *(undefined4 *)this = 0;
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::vector
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4));
                    /* try { // try from 080971c6 to 0809720d has its CatchHandler @ 08097227 */
  std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::reserve
            ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),0xe);
  for (local_10 = 0; local_10 < 0xe; local_10 = local_10 + 1) {
    local_14 = (ICryptoGraph *)CreateCryptoGraph(local_10);
    std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::push_back
              ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),&local_14);
    iVar1 = *(int *)this;
    iVar2 = (**(code **)(*(int *)local_14 + 0x20))(local_14);
    *(int *)this = iVar1 + iVar2;
  }
  return;
}
```

# update

`_ZN5yaSSL8HMAC_RMD6updateEPKhj`

`yaSSL::HMAC_RMD::update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_RMD` | `0x0879a370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a370  _ZN5yaSSL8HMAC_RMD6updateEPKhj
#           yaSSL::HMAC_RMD::update(unsigned char const*, unsigned int)
# range [0x0879a370, 0x0879a3d9]
0879a370 +0x00:  push   %ebp
0879a371 +0x01:  mov    %esp,%ebp
0879a373 +0x03:  sub    $0x28,%esp
0879a376 +0x06:  mov    0x8(%ebp),%eax
0879a379 +0x09:  mov    %ebx,-0xc(%ebp)
0879a37c +0x0c:  mov    %edi,-0x4(%ebp)
0879a37f +0x0f:  mov    %esi,-0x8(%ebp)
0879a382 +0x12:  mov    0x4(%eax),%esi
0879a385 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a38a +0x1a:  add    $0xbd280e,%ebx
0879a390 +0x20:  cmpb   $0x0,0xc(%esi)
0879a394 +0x24:  lea    0x10(%esi),%edi
0879a397 +0x27:  jne    0879a3b3 <+0x43>
0879a399 +0x29:  movl   $0x40,0x8(%esp)
0879a3a1 +0x31:  mov    (%esi),%eax
0879a3a3 +0x33:  mov    %edi,(%esp)
0879a3a6 +0x36:  mov    %eax,0x4(%esp)
0879a3aa +0x3a:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
0879a3af +0x3f:  movb   $0x1,0xc(%esi)
0879a3b3 +0x43:  mov    0x10(%ebp),%eax
0879a3b6 +0x46:  mov    %edi,(%esp)
0879a3b9 +0x49:  mov    %eax,0x8(%esp)
0879a3bd +0x4d:  mov    0xc(%ebp),%eax
0879a3c0 +0x50:  mov    %eax,0x4(%esp)
0879a3c4 +0x54:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
0879a3c9 +0x59:  mov    -0xc(%ebp),%ebx
0879a3cc +0x5c:  mov    -0x8(%ebp),%esi
0879a3cf +0x5f:  mov    -0x4(%ebp),%edi
0879a3d2 +0x62:  mov    %ebp,%esp
0879a3d4 +0x64:  pop    %ebp
0879a3d5 +0x65:  ret
0879a3d6 +0x66:  lea    0x0(%esi),%esi
0879a3d9 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_RMD::update @ 0x879a370

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_RMD::update(HMAC_RMD *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::RIPEMD160::Update((RIPEMD160 *)(puVar1 + 4),param_1,param_2);
  return;
}
```

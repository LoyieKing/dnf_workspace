# SetPublic

`_ZN5yaSSL3RSA7RSAImpl9SetPublicEPKhj`

`yaSSL::RSA::RSAImpl::SetPublic(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA::RSAImpl` | `0x0879a550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a550  _ZN5yaSSL3RSA7RSAImpl9SetPublicEPKhj
#           yaSSL::RSA::RSAImpl::SetPublic(unsigned char const*, unsigned int)
# range [0x0879a550, 0x0879a5ea]
0879a550 +0x00:  push   %ebp
0879a551 +0x01:  xor    %eax,%eax
0879a553 +0x03:  mov    %esp,%ebp
0879a555 +0x05:  push   %esi
0879a556 +0x06:  push   %ebx
0879a557 +0x07:  sub    $0x30,%esp
0879a55a +0x0a:  mov    0x10(%ebp),%edx
0879a55d +0x0d:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a562 +0x12:  add    $0xbd2636,%ebx
0879a568 +0x18:  test   %edx,%edx
0879a56a +0x1a:  mov    %edx,-0x1c(%ebp)
0879a56d +0x1d:  je     0879a57f <+0x2f>
0879a56f +0x1f:  mov    %edx,(%esp)
0879a572 +0x22:  movb   $0x0,0x4(%esp)
0879a577 +0x27:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879a57c +0x2c:  mov    -0x1c(%ebp),%edx
0879a57f +0x2f:  mov    %edx,0x8(%esp)
0879a583 +0x33:  mov    0xc(%ebp),%edx
0879a586 +0x36:  mov    %eax,-0x18(%ebp)
0879a589 +0x39:  mov    %eax,(%esp)
0879a58c +0x3c:  mov    %edx,0x4(%esp)
0879a590 +0x40:  call   0807d8a0 <_init+0x198>
0879a595 +0x45:  lea    -0x1c(%ebp),%eax
0879a598 +0x48:  mov    %eax,0x4(%esp)
0879a59c +0x4c:  mov    0x8(%ebp),%eax
0879a59f +0x4f:  movl   $0x0,-0x10(%ebp)
0879a5a6 +0x56:  movl   $0x0,-0xc(%ebp)
0879a5ad +0x5d:  mov    %eax,(%esp)
0879a5b0 +0x60:  call   08767d70 <_ZN8TaoCrypt13RSA_PublicKey10InitializeERNS_6SourceE>  ; TaoCrypt::RSA_PublicKey::Initialize(TaoCrypt::Source&)
0879a5b5 +0x65:  mov    -0x18(%ebp),%esi
0879a5b8 +0x68:  mov    -0x1c(%ebp),%eax
0879a5bb +0x6b:  movl   $0x0,0x4(%esp)
0879a5c3 +0x73:  mov    %esi,(%esp)
0879a5c6 +0x76:  mov    %eax,0x8(%esp)
0879a5ca +0x7a:  call   0807dcc0 <_init+0x5b8>
0879a5cf +0x7f:  mov    %esi,(%esp)
0879a5d2 +0x82:  movb   $0x0,0x4(%esp)
0879a5d7 +0x87:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879a5dc +0x8c:  add    $0x30,%esp
0879a5df +0x8f:  pop    %ebx
0879a5e0 +0x90:  pop    %esi
0879a5e1 +0x91:  pop    %ebp
0879a5e2 +0x92:  ret
0879a5e3 +0x93:  nop
0879a5e4 +0x94:  lea    0x0(%esi),%esi
0879a5ea +0x9a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::RSA::RSAImpl::SetPublic @ 0x879a550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::RSAImpl::SetPublic(unsigned char const*, unsigned int) */

void __thiscall yaSSL::RSA::RSAImpl::SetPublic(RSAImpl *this,uchar *param_1,uint param_2)

{
  void *pvVar1;
  uint in_stack_ffffffc8;
  uint uVar2;
  uint local_20;
  void *local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = (void *)0x0;
  local_20 = param_2;
  if (param_2 != 0) {
    local_1c = operator_new__(param_2,in_stack_ffffffc8 & 0xffffff00);
  }
  memcpy(local_1c,param_1,local_20);
  local_14 = 0;
  local_10 = 0;
  TaoCrypt::RSA_PublicKey::Initialize((RSA_PublicKey *)this,(Source *)&local_20);
  pvVar1 = local_1c;
  uVar2 = 0;
  memset(local_1c,0,local_20);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}
```

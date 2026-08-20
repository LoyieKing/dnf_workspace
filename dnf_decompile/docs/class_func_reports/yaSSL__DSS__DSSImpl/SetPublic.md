# SetPublic

`_ZN5yaSSL3DSS7DSSImpl9SetPublicEPKhj`

`yaSSL::DSS::DSSImpl::SetPublic(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DSS::DSSImpl` | `0x0879a4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a4b0  _ZN5yaSSL3DSS7DSSImpl9SetPublicEPKhj
#           yaSSL::DSS::DSSImpl::SetPublic(unsigned char const*, unsigned int)
# range [0x0879a4b0, 0x0879a54a]
0879a4b0 +0x00:  push   %ebp
0879a4b1 +0x01:  xor    %eax,%eax
0879a4b3 +0x03:  mov    %esp,%ebp
0879a4b5 +0x05:  push   %esi
0879a4b6 +0x06:  push   %ebx
0879a4b7 +0x07:  sub    $0x30,%esp
0879a4ba +0x0a:  mov    0x10(%ebp),%edx
0879a4bd +0x0d:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a4c2 +0x12:  add    $0xbd26d6,%ebx
0879a4c8 +0x18:  test   %edx,%edx
0879a4ca +0x1a:  mov    %edx,-0x1c(%ebp)
0879a4cd +0x1d:  je     0879a4df <+0x2f>
0879a4cf +0x1f:  mov    %edx,(%esp)
0879a4d2 +0x22:  movb   $0x0,0x4(%esp)
0879a4d7 +0x27:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879a4dc +0x2c:  mov    -0x1c(%ebp),%edx
0879a4df +0x2f:  mov    %edx,0x8(%esp)
0879a4e3 +0x33:  mov    0xc(%ebp),%edx
0879a4e6 +0x36:  mov    %eax,-0x18(%ebp)
0879a4e9 +0x39:  mov    %eax,(%esp)
0879a4ec +0x3c:  mov    %edx,0x4(%esp)
0879a4f0 +0x40:  call   0807d8a0 <_init+0x198>
0879a4f5 +0x45:  lea    -0x1c(%ebp),%eax
0879a4f8 +0x48:  mov    %eax,0x4(%esp)
0879a4fc +0x4c:  mov    0x8(%ebp),%eax
0879a4ff +0x4f:  movl   $0x0,-0x10(%ebp)
0879a506 +0x56:  movl   $0x0,-0xc(%ebp)
0879a50d +0x5d:  mov    %eax,(%esp)
0879a510 +0x60:  call   087577f0 <_ZN8TaoCrypt13DSA_PublicKey10InitializeERNS_6SourceE>  ; TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Source&)
0879a515 +0x65:  mov    -0x18(%ebp),%esi
0879a518 +0x68:  mov    -0x1c(%ebp),%eax
0879a51b +0x6b:  movl   $0x0,0x4(%esp)
0879a523 +0x73:  mov    %esi,(%esp)
0879a526 +0x76:  mov    %eax,0x8(%esp)
0879a52a +0x7a:  call   0807dcc0 <_init+0x5b8>
0879a52f +0x7f:  mov    %esi,(%esp)
0879a532 +0x82:  movb   $0x0,0x4(%esp)
0879a537 +0x87:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879a53c +0x8c:  add    $0x30,%esp
0879a53f +0x8f:  pop    %ebx
0879a540 +0x90:  pop    %esi
0879a541 +0x91:  pop    %ebp
0879a542 +0x92:  ret
0879a543 +0x93:  nop
0879a544 +0x94:  lea    0x0(%esi),%esi
0879a54a +0x9a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::DSS::DSSImpl::SetPublic @ 0x879a4b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::DSSImpl::SetPublic(unsigned char const*, unsigned int) */

void __thiscall yaSSL::DSS::DSSImpl::SetPublic(DSSImpl *this,uchar *param_1,uint param_2)

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
  TaoCrypt::DSA_PublicKey::Initialize((DSA_PublicKey *)this,(Source *)&local_20);
  pvVar1 = local_1c;
  uVar2 = 0;
  memset(local_1c,0,local_20);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}
```

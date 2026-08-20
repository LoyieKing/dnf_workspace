# SetPrivate

`_ZN5yaSSL3DSS7DSSImpl10SetPrivateEPKhj`

`yaSSL::DSS::DSSImpl::SetPrivate(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DSS::DSSImpl` | `0x0879b400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879b400  _ZN5yaSSL3DSS7DSSImpl10SetPrivateEPKhj
#           yaSSL::DSS::DSSImpl::SetPrivate(unsigned char const*, unsigned int)
# range [0x0879b400, 0x0879b55c]
0879b400 +0x000:  push   %ebp
0879b401 +0x001:  xor    %eax,%eax
0879b403 +0x003:  mov    %esp,%ebp
0879b405 +0x005:  push   %edi
0879b406 +0x006:  push   %esi
0879b407 +0x007:  push   %ebx
0879b408 +0x008:  sub    $0x7c,%esp
0879b40b +0x00b:  mov    0x10(%ebp),%edx
0879b40e +0x00e:  call   08722df8 <__i686.get_pc_thunk.bx>
0879b413 +0x013:  add    $0xbd1785,%ebx
0879b419 +0x019:  mov    0x8(%ebp),%esi
0879b41c +0x01c:  test   %edx,%edx
0879b41e +0x01e:  mov    %edx,-0x2c(%ebp)
0879b421 +0x021:  je     0879b433 <+0x33>
0879b423 +0x023:  mov    %edx,(%esp)
0879b426 +0x026:  movb   $0x0,0x4(%esp)
0879b42b +0x02b:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879b430 +0x030:  mov    -0x2c(%ebp),%edx
0879b433 +0x033:  mov    %edx,0x8(%esp)
0879b437 +0x037:  mov    0xc(%ebp),%edx
0879b43a +0x03a:  lea    0x40(%esi),%edi
0879b43d +0x03d:  mov    %eax,-0x28(%ebp)
0879b440 +0x040:  mov    %eax,(%esp)
0879b443 +0x043:  mov    %edx,0x4(%esp)
0879b447 +0x047:  call   0807d8a0 <_init+0x198>
0879b44c +0x04c:  lea    -0x2c(%ebp),%eax
0879b44f +0x04f:  mov    %eax,0x4(%esp)
0879b453 +0x053:  mov    %edi,(%esp)
0879b456 +0x056:  movl   $0x0,-0x20(%ebp)
0879b45d +0x05d:  movl   $0x0,-0x1c(%ebp)
0879b464 +0x064:  call   08757740 <_ZN8TaoCrypt14DSA_PrivateKey10InitializeERNS_6SourceE>  ; TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Source&)
0879b469 +0x069:  mov    %edi,0x4(%esp)
0879b46d +0x06d:  lea    -0x6c(%ebp),%edi
0879b470 +0x070:  mov    %edi,(%esp)
0879b473 +0x073:  call   08757490 <_ZN8TaoCrypt13DSA_PublicKeyC1ERKS0_>  ; TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::DSA_PublicKey const&)
0879b478 +0x078:  mov    %edi,0x4(%esp)
0879b47c +0x07c:  mov    %esi,(%esp)
0879b47f +0x07f:  call   08757900 <_ZN8TaoCrypt13DSA_PublicKeyaSERKS0_>  ; TaoCrypt::DSA_PublicKey::operator=(TaoCrypt::DSA_PublicKey const&)
0879b484 +0x084:  mov    -0x3c(%ebp),%eax
0879b487 +0x087:  mov    -0x38(%ebp),%esi
0879b48a +0x08a:  movl   $0x0,0x4(%esp)
0879b492 +0x092:  shl    $0x2,%eax
0879b495 +0x095:  mov    %esi,(%esp)
0879b498 +0x098:  mov    %eax,0x8(%esp)
0879b49c +0x09c:  call   0807dcc0 <_init+0x5b8>
0879b4a1 +0x0a1:  mov    %esi,(%esp)
0879b4a4 +0x0a4:  movb   $0x0,0x4(%esp)
0879b4a9 +0x0a9:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b4ae +0x0ae:  mov    -0x4c(%ebp),%eax
0879b4b1 +0x0b1:  mov    -0x48(%ebp),%esi
0879b4b4 +0x0b4:  movl   $0x0,0x4(%esp)
0879b4bc +0x0bc:  shl    $0x2,%eax
0879b4bf +0x0bf:  mov    %esi,(%esp)
0879b4c2 +0x0c2:  mov    %eax,0x8(%esp)
0879b4c6 +0x0c6:  call   0807dcc0 <_init+0x5b8>
0879b4cb +0x0cb:  mov    %esi,(%esp)
0879b4ce +0x0ce:  movb   $0x0,0x4(%esp)
0879b4d3 +0x0d3:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b4d8 +0x0d8:  mov    -0x5c(%ebp),%eax
0879b4db +0x0db:  mov    -0x58(%ebp),%esi
0879b4de +0x0de:  movl   $0x0,0x4(%esp)
0879b4e6 +0x0e6:  shl    $0x2,%eax
0879b4e9 +0x0e9:  mov    %esi,(%esp)
0879b4ec +0x0ec:  mov    %eax,0x8(%esp)
0879b4f0 +0x0f0:  call   0807dcc0 <_init+0x5b8>
0879b4f5 +0x0f5:  mov    %esi,(%esp)
0879b4f8 +0x0f8:  movb   $0x0,0x4(%esp)
0879b4fd +0x0fd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b502 +0x102:  mov    -0x6c(%ebp),%eax
0879b505 +0x105:  mov    -0x68(%ebp),%esi
0879b508 +0x108:  movl   $0x0,0x4(%esp)
0879b510 +0x110:  shl    $0x2,%eax
0879b513 +0x113:  mov    %esi,(%esp)
0879b516 +0x116:  mov    %eax,0x8(%esp)
0879b51a +0x11a:  call   0807dcc0 <_init+0x5b8>
0879b51f +0x11f:  mov    %esi,(%esp)
0879b522 +0x122:  movb   $0x0,0x4(%esp)
0879b527 +0x127:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b52c +0x12c:  mov    -0x28(%ebp),%esi
0879b52f +0x12f:  mov    -0x2c(%ebp),%eax
0879b532 +0x132:  movl   $0x0,0x4(%esp)
0879b53a +0x13a:  mov    %esi,(%esp)
0879b53d +0x13d:  mov    %eax,0x8(%esp)
0879b541 +0x141:  call   0807dcc0 <_init+0x5b8>
0879b546 +0x146:  mov    %esi,(%esp)
0879b549 +0x149:  movb   $0x0,0x4(%esp)
0879b54e +0x14e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b553 +0x153:  add    $0x7c,%esp
0879b556 +0x156:  pop    %ebx
0879b557 +0x157:  pop    %esi
0879b558 +0x158:  pop    %edi
0879b559 +0x159:  pop    %ebp
0879b55a +0x15a:  ret
0879b55b +0x15b:  nop
0879b55c +0x15c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::DSS::DSSImpl::SetPrivate @ 0x879b400

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::DSSImpl::SetPrivate(unsigned char const*, unsigned int) */

void __thiscall yaSSL::DSS::DSSImpl::SetPrivate(DSSImpl *this,uchar *param_1,uint param_2)

{
  void *pvVar1;
  uint in_stack_ffffff78;
  uint uVar2;
  int local_70;
  void *local_6c;
  int local_60;
  void *local_5c;
  int local_50;
  void *local_4c;
  int local_40;
  void *local_3c;
  uint local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  local_2c = (void *)0x0;
  local_30 = param_2;
  if (param_2 != 0) {
    local_2c = operator_new__(param_2,in_stack_ffffff78 & 0xffffff00);
  }
  memcpy(local_2c,param_1,local_30);
  local_24 = 0;
  local_20 = 0;
  TaoCrypt::DSA_PrivateKey::Initialize((DSA_PrivateKey *)(this + 0x40),(Source *)&local_30);
  TaoCrypt::DSA_PublicKey::DSA_PublicKey((DSA_PublicKey *)&local_70,(DSA_PublicKey *)(this + 0x40));
  TaoCrypt::DSA_PublicKey::operator=((DSA_PublicKey *)this,(DSA_PublicKey *)&local_70);
  uVar2 = 0;
  memset(local_3c,0,local_40 << 2);
  operator_delete__(local_3c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_4c,0,local_50 << 2);
  operator_delete__(local_4c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_5c,0,local_60 << 2);
  operator_delete__(local_5c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_6c,0,local_70 << 2);
  operator_delete__(local_6c,uVar2 & 0xffffff00);
  pvVar1 = local_2c;
  uVar2 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}
```

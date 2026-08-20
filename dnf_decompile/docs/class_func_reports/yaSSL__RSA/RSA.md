# RSA

`_ZN5yaSSL3RSAC1EPKhjb`

`yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA` | `0x0879b260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879b260  _ZN5yaSSL3RSAC1EPKhjb
#           yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)
# range [0x0879b260, 0x0879b379]
0879b260 +0x000:  push   %ebp
0879b261 +0x001:  mov    %esp,%ebp
0879b263 +0x003:  push   %edi
0879b264 +0x004:  push   %esi
0879b265 +0x005:  push   %ebx
0879b266 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879b26b +0x00b:  add    $0xbd192d,%ebx
0879b271 +0x011:  sub    $0x2c,%esp
0879b274 +0x014:  mov    0x8(%ebp),%esi
0879b277 +0x017:  mov    0x10(%ebp),%edi
0879b27a +0x01a:  movzbl 0x14(%ebp),%edx
0879b27e +0x01e:  mov    -0x154(%ebx),%eax
0879b284 +0x024:  add    $0x8,%eax
0879b287 +0x027:  mov    %eax,(%esi)
0879b289 +0x029:  mov    %dl,-0x20(%ebp)
0879b28c +0x02c:  movb   $0x0,0x4(%esp)
0879b291 +0x031:  movl   $0xa0,(%esp)
0879b298 +0x038:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879b29d +0x03d:  mov    %eax,-0x1c(%ebp)
0879b2a0 +0x040:  mov    %eax,(%esp)
0879b2a3 +0x043:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b2a8 +0x048:  mov    -0x1c(%ebp),%eax
0879b2ab +0x04b:  add    $0x10,%eax
0879b2ae +0x04e:  mov    %eax,(%esp)
0879b2b1 +0x051:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b2b6 +0x056:  mov    -0x1c(%ebp),%eax
0879b2b9 +0x059:  add    $0x20,%eax
0879b2bc +0x05c:  mov    %eax,(%esp)
0879b2bf +0x05f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b2c4 +0x064:  mov    -0x1c(%ebp),%eax
0879b2c7 +0x067:  add    $0x30,%eax
0879b2ca +0x06a:  mov    %eax,(%esp)
0879b2cd +0x06d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b2d2 +0x072:  mov    -0x1c(%ebp),%eax
0879b2d5 +0x075:  add    $0x40,%eax
0879b2d8 +0x078:  mov    %eax,(%esp)
0879b2db +0x07b:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b2e0 +0x080:  mov    -0x1c(%ebp),%eax
0879b2e3 +0x083:  add    $0x50,%eax
0879b2e6 +0x086:  mov    %eax,(%esp)
0879b2e9 +0x089:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b2ee +0x08e:  mov    -0x1c(%ebp),%eax
0879b2f1 +0x091:  add    $0x60,%eax
0879b2f4 +0x094:  mov    %eax,(%esp)
0879b2f7 +0x097:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b2fc +0x09c:  mov    -0x1c(%ebp),%eax
0879b2ff +0x09f:  add    $0x70,%eax
0879b302 +0x0a2:  mov    %eax,(%esp)
0879b305 +0x0a5:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b30a +0x0aa:  mov    -0x1c(%ebp),%eax
0879b30d +0x0ad:  sub    $0xffffff80,%eax
0879b310 +0x0b0:  mov    %eax,(%esp)
0879b313 +0x0b3:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b318 +0x0b8:  mov    -0x1c(%ebp),%eax
0879b31b +0x0bb:  add    $0x90,%eax
0879b320 +0x0c0:  mov    %eax,(%esp)
0879b323 +0x0c3:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b328 +0x0c8:  movzbl -0x20(%ebp),%edx
0879b32c +0x0cc:  mov    -0x1c(%ebp),%eax
0879b32f +0x0cf:  test   %dl,%dl
0879b331 +0x0d1:  mov    %eax,0x4(%esi)
0879b334 +0x0d4:  jne    0879b358 <+0xf8>
0879b336 +0x0d6:  mov    0xc(%ebp),%eax
0879b339 +0x0d9:  mov    %edi,0x8(%esp)
0879b33d +0x0dd:  mov    %eax,0x4(%esp)
0879b341 +0x0e1:  mov    -0x1c(%ebp),%eax
0879b344 +0x0e4:  mov    %eax,(%esp)
0879b347 +0x0e7:  call   0879b0b0 <_ZN5yaSSL3RSA7RSAImpl10SetPrivateEPKhj>  ; yaSSL::RSA::RSAImpl::SetPrivate(unsigned char const*, unsigned int)
0879b34c +0x0ec:  add    $0x2c,%esp
0879b34f +0x0ef:  pop    %ebx
0879b350 +0x0f0:  pop    %esi
0879b351 +0x0f1:  pop    %edi
0879b352 +0x0f2:  pop    %ebp
0879b353 +0x0f3:  ret
0879b354 +0x0f4:  lea    0x0(%esi,%eiz,1),%esi
0879b358 +0x0f8:  mov    0xc(%ebp),%eax
0879b35b +0x0fb:  mov    %edi,0x8(%esp)
0879b35f +0x0ff:  mov    %eax,0x4(%esp)
0879b363 +0x103:  mov    -0x1c(%ebp),%eax
0879b366 +0x106:  mov    %eax,(%esp)
0879b369 +0x109:  call   0879a550 <_ZN5yaSSL3RSA7RSAImpl9SetPublicEPKhj>  ; yaSSL::RSA::RSAImpl::SetPublic(unsigned char const*, unsigned int)
0879b36e +0x10e:  add    $0x2c,%esp
0879b371 +0x111:  pop    %ebx
0879b372 +0x112:  pop    %esi
0879b373 +0x113:  pop    %edi
0879b374 +0x114:  pop    %ebp
0879b375 +0x115:  ret
0879b376 +0x116:  lea    0x0(%esi),%esi
0879b379 +0x119:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::RSA::RSA @ 0x879b260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool) */

void __thiscall yaSSL::RSA::RSA(RSA *this,uchar *param_1,uint param_2,bool param_3)

{
  Integer *this_00;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936ca44 + 8;
  this_00 = operator_new(0xa0,in_stack_ffffffc8 & 0xffffff00);
  TaoCrypt::Integer::Integer(this_00);
  TaoCrypt::Integer::Integer(this_00 + 0x10);
  TaoCrypt::Integer::Integer(this_00 + 0x20);
  TaoCrypt::Integer::Integer(this_00 + 0x30);
  TaoCrypt::Integer::Integer(this_00 + 0x40);
  TaoCrypt::Integer::Integer(this_00 + 0x50);
  TaoCrypt::Integer::Integer(this_00 + 0x60);
  TaoCrypt::Integer::Integer(this_00 + 0x70);
  TaoCrypt::Integer::Integer(this_00 + 0x80);
  TaoCrypt::Integer::Integer(this_00 + 0x90);
  *(Integer **)(this + 4) = this_00;
  if (!param_3) {
    RSAImpl::SetPrivate((RSAImpl *)this_00,param_1,param_2);
    return;
  }
  RSAImpl::SetPublic((RSAImpl *)this_00,param_1,param_2);
  return;
}
```

# Encrypt

`_ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE`

`COpensslRSA::Encrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char> >&)`

| 类 | 地址 |
|---|---|
| `COpensslRSA` | `0x0816c3a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c3a2  _ZN11COpensslRSA7EncryptEPKciRSt6vectorIhSaIhEE
#           COpensslRSA::Encrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char> >&)
# range [0x0816c3a2, 0x0816c531]
0816c3a2 +0x000:  push   %ebp
0816c3a3 +0x001:  mov    %esp,%ebp
0816c3a5 +0x003:  push   %edi
0816c3a6 +0x004:  push   %esi
0816c3a7 +0x005:  push   %ebx
0816c3a8 +0x006:  sub    $0x5c,%esp
0816c3ab +0x009:  mov    0x8(%ebp),%eax
0816c3ae +0x00c:  mov    (%eax),%eax
0816c3b0 +0x00e:  mov    %eax,(%esp)
0816c3b3 +0x011:  call   087eb2e0 <RSA_size>
0816c3b8 +0x016:  mov    %eax,-0x2c(%ebp)
0816c3bb +0x019:  mov    -0x2c(%ebp),%eax
0816c3be +0x01c:  sub    $0xc,%eax
0816c3c1 +0x01f:  mov    %eax,-0x28(%ebp)
0816c3c4 +0x022:  movl   $0x0,-0x24(%ebp)
0816c3cb +0x029:  mov    -0x24(%ebp),%eax
0816c3ce +0x02c:  mov    0x10(%ebp),%edx
0816c3d1 +0x02f:  mov    %edx,%ecx
0816c3d3 +0x031:  sub    %eax,%ecx
0816c3d5 +0x033:  mov    %ecx,%eax
0816c3d7 +0x035:  mov    -0x28(%ebp),%edx
0816c3da +0x038:  cmp    %edx,%eax
0816c3dc +0x03a:  jle    0816c3e0 <+0x3e>
0816c3de +0x03c:  mov    %edx,%eax
0816c3e0 +0x03e:  mov    %eax,-0x20(%ebp)
0816c3e3 +0x041:  jmp    0816c511 <+0x16f>
0816c3e8 +0x046:  lea    -0x3c(%ebp),%eax
0816c3eb +0x049:  mov    %eax,(%esp)
0816c3ee +0x04c:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
0816c3f3 +0x051:  mov    -0x2c(%ebp),%eax
0816c3f6 +0x054:  movl   $0x0,0x8(%esp)
0816c3fe +0x05c:  mov    %eax,0x4(%esp)
0816c402 +0x060:  lea    -0x3c(%ebp),%eax
0816c405 +0x063:  mov    %eax,(%esp)
0816c408 +0x066:  call   0816c7d2 <_GLOBAL__I__ZN11COpensslRSAC2Ev+0xd9>  ; global constructors keyed to COpensslRSA::COpensslRSA()+0xd9
0816c40d +0x06b:  mov    0x8(%ebp),%eax
0816c410 +0x06e:  mov    (%eax),%ebx
0816c412 +0x070:  movl   $0x0,0x4(%esp)
0816c41a +0x078:  lea    -0x3c(%ebp),%eax
0816c41d +0x07b:  mov    %eax,(%esp)
0816c420 +0x07e:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0816c425 +0x083:  mov    0xc(%ebp),%ecx
0816c428 +0x086:  mov    -0x24(%ebp),%edx
0816c42b +0x089:  lea    (%ecx,%edx,1),%edx
0816c42e +0x08c:  movl   $0x1,0x10(%esp)
0816c436 +0x094:  mov    %ebx,0xc(%esp)
0816c43a +0x098:  mov    %eax,0x8(%esp)
0816c43e +0x09c:  mov    %edx,0x4(%esp)
0816c442 +0x0a0:  mov    -0x20(%ebp),%eax
0816c445 +0x0a3:  mov    %eax,(%esp)
0816c448 +0x0a6:  call   087eaf40 <RSA_private_encrypt>
0816c44d +0x0ab:  mov    %eax,-0x1c(%ebp)
0816c450 +0x0ae:  cmpl   $0x0,-0x1c(%ebp)
0816c454 +0x0b2:  jg     0816c465 <+0xc3>
0816c456 +0x0b4:  mov    $0x0,%esi
0816c45b +0x0b9:  mov    $0x0,%ebx
0816c460 +0x0be:  jmp    0816c502 <+0x160>
0816c465 +0x0c3:  movl   $0x0,0x4(%esp)
0816c46d +0x0cb:  lea    -0x3c(%ebp),%eax
0816c470 +0x0ce:  mov    %eax,(%esp)
0816c473 +0x0d1:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0816c478 +0x0d6:  mov    -0x1c(%ebp),%edx
0816c47b +0x0d9:  lea    (%eax,%edx,1),%edi
0816c47e +0x0dc:  movl   $0x0,0x4(%esp)
0816c486 +0x0e4:  lea    -0x3c(%ebp),%eax
0816c489 +0x0e7:  mov    %eax,(%esp)
0816c48c +0x0ea:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0816c491 +0x0ef:  mov    %eax,%ebx
0816c493 +0x0f1:  lea    -0x30(%ebp),%eax
0816c496 +0x0f4:  mov    0x14(%ebp),%edx
0816c499 +0x0f7:  mov    %edx,0x4(%esp)
0816c49d +0x0fb:  mov    %eax,(%esp)
0816c4a0 +0x0fe:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
0816c4a5 +0x103:  sub    $0x4,%esp
0816c4a8 +0x106:  mov    %edi,0xc(%esp)
0816c4ac +0x10a:  mov    %ebx,0x8(%esp)
0816c4b0 +0x10e:  mov    -0x30(%ebp),%eax
0816c4b3 +0x111:  mov    %eax,0x4(%esp)
0816c4b7 +0x115:  mov    0x14(%ebp),%eax
0816c4ba +0x118:  mov    %eax,(%esp)
0816c4bd +0x11b:  call   0816c856 <_GLOBAL__I__ZN11COpensslRSAC2Ev+0x15d>  ; global constructors keyed to COpensslRSA::COpensslRSA()+0x15d
0816c4c2 +0x120:  mov    -0x20(%ebp),%eax
0816c4c5 +0x123:  add    %eax,-0x24(%ebp)
0816c4c8 +0x126:  mov    -0x24(%ebp),%eax
0816c4cb +0x129:  mov    0x10(%ebp),%edx
0816c4ce +0x12c:  mov    %edx,%ecx
0816c4d0 +0x12e:  sub    %eax,%ecx
0816c4d2 +0x130:  mov    %ecx,%eax
0816c4d4 +0x132:  mov    -0x28(%ebp),%edx
0816c4d7 +0x135:  cmp    %edx,%eax
0816c4d9 +0x137:  jle    0816c4dd <+0x13b>
0816c4db +0x139:  mov    %edx,%eax
0816c4dd +0x13b:  mov    %eax,-0x20(%ebp)
0816c4e0 +0x13e:  mov    $0x1,%ebx
0816c4e5 +0x143:  jmp    0816c502 <+0x160>
0816c4e7 +0x145:  mov    %edx,%ebx
0816c4e9 +0x147:  mov    %eax,%esi
0816c4eb +0x149:  lea    -0x3c(%ebp),%eax
0816c4ee +0x14c:  mov    %eax,(%esp)
0816c4f1 +0x14f:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0816c4f6 +0x154:  mov    %esi,%eax
0816c4f8 +0x156:  mov    %ebx,%edx
0816c4fa +0x158:  mov    %eax,(%esp)
0816c4fd +0x15b:  call   08ae3750 <_Unwind_Resume>
0816c502 +0x160:  lea    -0x3c(%ebp),%eax
0816c505 +0x163:  mov    %eax,(%esp)
0816c508 +0x166:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0816c50d +0x16b:  test   %ebx,%ebx
0816c50f +0x16d:  je     0816c525 <+0x183>
0816c511 +0x16f:  cmpl   $0x0,-0x20(%ebp)
0816c515 +0x173:  setg   %al
0816c518 +0x176:  test   %al,%al
0816c51a +0x178:  jne    0816c3e8 <+0x46>
0816c520 +0x17e:  mov    $0x1,%esi
0816c525 +0x183:  mov    %esi,%eax
0816c527 +0x185:  lea    -0xc(%ebp),%esp
0816c52a +0x188:  add    $0x0,%esp
0816c52d +0x18b:  pop    %ebx
0816c52e +0x18c:  pop    %esi
0816c52f +0x18d:  pop    %edi
0816c530 +0x18e:  pop    %ebp
0816c531 +0x18f:  ret
```

## 反编译 C

```c
// COpensslRSA::Encrypt @ 0x816c3a2

/* COpensslRSA::Encrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char>
   >&) */

undefined4 __thiscall
COpensslRSA::Encrypt(COpensslRSA *this,char *param_1,int param_2,vector *param_3)

{
  RSA *rsa;
  bool bVar1;
  uchar *to;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  vector<unsigned_char,std::allocator<unsigned_char>> local_40 [12];
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = RSA_size(*(RSA **)this);
  local_2c = local_30 - 0xc;
  local_28 = 0;
  local_24 = param_2;
  if (local_2c < param_2) {
    local_24 = local_2c;
  }
  do {
    if (local_24 < 1) {
      return 1;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_40);
                    /* try { // try from 0816c408 to 0816c4c1 has its CatchHandler @ 0816c4e7 */
    std::vector<unsigned_char,std::allocator<unsigned_char>>::resize(local_40,local_30,'\0');
    rsa = *(RSA **)this;
    to = (uchar *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_40,0);
    local_20 = RSA_private_encrypt(local_24,(uchar *)(param_1 + local_28),to,rsa,1);
    if (local_20 < 1) {
      unaff_ESI = 0;
      bVar1 = false;
    }
    else {
      iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_40,0);
      iVar2 = iVar2 + local_20;
      uVar3 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_40,0);
      std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
      std::vector<unsigned_char,std::allocator<unsigned_char>>::insert<unsigned_char*>
                (param_3,param_3,local_34,uVar3,iVar2);
      local_28 = local_28 + local_24;
      local_24 = param_2 - local_28;
      if (local_2c < param_2 - local_28) {
        local_24 = local_2c;
      }
      bVar1 = true;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_40);
  } while (bVar1);
  return unaff_ESI;
}
```

# Decrypt

`_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE`

`COpensslRSA::Decrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char> >&)`

| 类 | 地址 |
|---|---|
| `COpensslRSA` | `0x0816c532` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c532  _ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE
#           COpensslRSA::Decrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char> >&)
# range [0x0816c532, 0x0816c6b8]
0816c532 +0x000:  push   %ebp
0816c533 +0x001:  mov    %esp,%ebp
0816c535 +0x003:  push   %edi
0816c536 +0x004:  push   %esi
0816c537 +0x005:  push   %ebx
0816c538 +0x006:  sub    $0x4c,%esp
0816c53b +0x009:  mov    0x8(%ebp),%eax
0816c53e +0x00c:  mov    (%eax),%eax
0816c540 +0x00e:  mov    %eax,(%esp)
0816c543 +0x011:  call   087eb2e0 <RSA_size>
0816c548 +0x016:  mov    %eax,-0x28(%ebp)
0816c54b +0x019:  movl   $0x0,-0x24(%ebp)
0816c552 +0x020:  mov    -0x24(%ebp),%eax
0816c555 +0x023:  mov    0x10(%ebp),%edx
0816c558 +0x026:  mov    %edx,%ecx
0816c55a +0x028:  sub    %eax,%ecx
0816c55c +0x02a:  mov    %ecx,%eax
0816c55e +0x02c:  mov    -0x28(%ebp),%edx
0816c561 +0x02f:  cmp    %edx,%eax
0816c563 +0x031:  jle    0816c567 <+0x35>
0816c565 +0x033:  mov    %edx,%eax
0816c567 +0x035:  mov    %eax,-0x20(%ebp)
0816c56a +0x038:  jmp    0816c698 <+0x166>
0816c56f +0x03d:  lea    -0x38(%ebp),%eax
0816c572 +0x040:  mov    %eax,(%esp)
0816c575 +0x043:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
0816c57a +0x048:  mov    -0x28(%ebp),%eax
0816c57d +0x04b:  movl   $0x0,0x8(%esp)
0816c585 +0x053:  mov    %eax,0x4(%esp)
0816c589 +0x057:  lea    -0x38(%ebp),%eax
0816c58c +0x05a:  mov    %eax,(%esp)
0816c58f +0x05d:  call   0816c7d2 <_GLOBAL__I__ZN11COpensslRSAC2Ev+0xd9>  ; global constructors keyed to COpensslRSA::COpensslRSA()+0xd9
0816c594 +0x062:  mov    0x8(%ebp),%eax
0816c597 +0x065:  mov    (%eax),%ebx
0816c599 +0x067:  movl   $0x0,0x4(%esp)
0816c5a1 +0x06f:  lea    -0x38(%ebp),%eax
0816c5a4 +0x072:  mov    %eax,(%esp)
0816c5a7 +0x075:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0816c5ac +0x07a:  mov    0xc(%ebp),%ecx
0816c5af +0x07d:  mov    -0x24(%ebp),%edx
0816c5b2 +0x080:  lea    (%ecx,%edx,1),%edx
0816c5b5 +0x083:  movl   $0x1,0x10(%esp)
0816c5bd +0x08b:  mov    %ebx,0xc(%esp)
0816c5c1 +0x08f:  mov    %eax,0x8(%esp)
0816c5c5 +0x093:  mov    %edx,0x4(%esp)
0816c5c9 +0x097:  mov    -0x20(%ebp),%eax
0816c5cc +0x09a:  mov    %eax,(%esp)
0816c5cf +0x09d:  call   087eaf60 <RSA_public_decrypt>
0816c5d4 +0x0a2:  mov    %eax,-0x1c(%ebp)
0816c5d7 +0x0a5:  cmpl   $0x0,-0x1c(%ebp)
0816c5db +0x0a9:  jg     0816c5ec <+0xba>
0816c5dd +0x0ab:  mov    $0x0,%esi
0816c5e2 +0x0b0:  mov    $0x0,%ebx
0816c5e7 +0x0b5:  jmp    0816c689 <+0x157>
0816c5ec +0x0ba:  movl   $0x0,0x4(%esp)
0816c5f4 +0x0c2:  lea    -0x38(%ebp),%eax
0816c5f7 +0x0c5:  mov    %eax,(%esp)
0816c5fa +0x0c8:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0816c5ff +0x0cd:  mov    -0x1c(%ebp),%edx
0816c602 +0x0d0:  lea    (%eax,%edx,1),%edi
0816c605 +0x0d3:  movl   $0x0,0x4(%esp)
0816c60d +0x0db:  lea    -0x38(%ebp),%eax
0816c610 +0x0de:  mov    %eax,(%esp)
0816c613 +0x0e1:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0816c618 +0x0e6:  mov    %eax,%ebx
0816c61a +0x0e8:  lea    -0x2c(%ebp),%eax
0816c61d +0x0eb:  mov    0x14(%ebp),%edx
0816c620 +0x0ee:  mov    %edx,0x4(%esp)
0816c624 +0x0f2:  mov    %eax,(%esp)
0816c627 +0x0f5:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
0816c62c +0x0fa:  sub    $0x4,%esp
0816c62f +0x0fd:  mov    %edi,0xc(%esp)
0816c633 +0x101:  mov    %ebx,0x8(%esp)
0816c637 +0x105:  mov    -0x2c(%ebp),%eax
0816c63a +0x108:  mov    %eax,0x4(%esp)
0816c63e +0x10c:  mov    0x14(%ebp),%eax
0816c641 +0x10f:  mov    %eax,(%esp)
0816c644 +0x112:  call   0816c856 <_GLOBAL__I__ZN11COpensslRSAC2Ev+0x15d>  ; global constructors keyed to COpensslRSA::COpensslRSA()+0x15d
0816c649 +0x117:  mov    -0x20(%ebp),%eax
0816c64c +0x11a:  add    %eax,-0x24(%ebp)
0816c64f +0x11d:  mov    -0x24(%ebp),%eax
0816c652 +0x120:  mov    0x10(%ebp),%edx
0816c655 +0x123:  mov    %edx,%ecx
0816c657 +0x125:  sub    %eax,%ecx
0816c659 +0x127:  mov    %ecx,%eax
0816c65b +0x129:  mov    -0x28(%ebp),%edx
0816c65e +0x12c:  cmp    %edx,%eax
0816c660 +0x12e:  jle    0816c664 <+0x132>
0816c662 +0x130:  mov    %edx,%eax
0816c664 +0x132:  mov    %eax,-0x20(%ebp)
0816c667 +0x135:  mov    $0x1,%ebx
0816c66c +0x13a:  jmp    0816c689 <+0x157>
0816c66e +0x13c:  mov    %edx,%ebx
0816c670 +0x13e:  mov    %eax,%esi
0816c672 +0x140:  lea    -0x38(%ebp),%eax
0816c675 +0x143:  mov    %eax,(%esp)
0816c678 +0x146:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0816c67d +0x14b:  mov    %esi,%eax
0816c67f +0x14d:  mov    %ebx,%edx
0816c681 +0x14f:  mov    %eax,(%esp)
0816c684 +0x152:  call   08ae3750 <_Unwind_Resume>
0816c689 +0x157:  lea    -0x38(%ebp),%eax
0816c68c +0x15a:  mov    %eax,(%esp)
0816c68f +0x15d:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0816c694 +0x162:  test   %ebx,%ebx
0816c696 +0x164:  je     0816c6ac <+0x17a>
0816c698 +0x166:  cmpl   $0x0,-0x20(%ebp)
0816c69c +0x16a:  setg   %al
0816c69f +0x16d:  test   %al,%al
0816c6a1 +0x16f:  jne    0816c56f <+0x3d>
0816c6a7 +0x175:  mov    $0x1,%esi
0816c6ac +0x17a:  mov    %esi,%eax
0816c6ae +0x17c:  lea    -0xc(%ebp),%esp
0816c6b1 +0x17f:  add    $0x0,%esp
0816c6b4 +0x182:  pop    %ebx
0816c6b5 +0x183:  pop    %esi
0816c6b6 +0x184:  pop    %edi
0816c6b7 +0x185:  pop    %ebp
0816c6b8 +0x186:  ret
```

## 反编译 C

```c
// COpensslRSA::Decrypt @ 0x816c532

/* COpensslRSA::Decrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char>
   >&) */

undefined4 __thiscall
COpensslRSA::Decrypt(COpensslRSA *this,char *param_1,int param_2,vector *param_3)

{
  RSA *rsa;
  bool bVar1;
  uchar *to;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  vector<unsigned_char,std::allocator<unsigned_char>> local_3c [12];
  undefined4 local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  local_2c = RSA_size(*(RSA **)this);
  local_28 = 0;
  local_24 = param_2;
  if ((int)local_2c < param_2) {
    local_24 = local_2c;
  }
  do {
    if ((int)local_24 < 1) {
      return 1;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_3c);
                    /* try { // try from 0816c58f to 0816c648 has its CatchHandler @ 0816c66e */
    std::vector<unsigned_char,std::allocator<unsigned_char>>::resize(local_3c,local_2c,'\0');
    rsa = *(RSA **)this;
    to = (uchar *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_3c,0);
    local_20 = RSA_public_decrypt(local_24,(uchar *)(param_1 + local_28),to,rsa,1);
    if (local_20 < 1) {
      unaff_ESI = 0;
      bVar1 = false;
    }
    else {
      iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_3c,0);
      iVar2 = iVar2 + local_20;
      uVar3 = std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[](local_3c,0);
      std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
      std::vector<unsigned_char,std::allocator<unsigned_char>>::insert<unsigned_char*>
                (param_3,param_3,local_30,uVar3,iVar2);
      local_28 = local_28 + local_24;
      local_24 = param_2 - local_28;
      if ((int)local_2c < param_2 - local_28) {
        local_24 = local_2c;
      }
      bVar1 = true;
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_3c);
  } while (bVar1);
  return unaff_ESI;
}
```

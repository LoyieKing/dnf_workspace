# hmac

`_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb`

`yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879d5d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879d5d0  _ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb
#           yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
# range [0x0879d5d0, 0x0879d7df]
0879d5d0 +0x000:  push   %ebp
0879d5d1 +0x001:  mov    %esp,%ebp
0879d5d3 +0x003:  push   %edi
0879d5d4 +0x004:  push   %esi
0879d5d5 +0x005:  push   %ebx
0879d5d6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879d5db +0x00b:  add    $0xbcf5bd,%ebx
0879d5e1 +0x011:  sub    $0x12c,%esp
0879d5e7 +0x017:  mov    0x8(%ebp),%edx
0879d5ea +0x01a:  movzbl 0x1c(%ebp),%eax
0879d5ee +0x01e:  mov    %edx,(%esp)
0879d5f1 +0x021:  mov    %al,-0xf0(%ebp)
0879d5f7 +0x027:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
0879d5fc +0x02c:  mov    %eax,(%esp)
0879d5ff +0x02f:  call   0874e7a0 <_ZN5yaSSL6Crypto10use_digestEv>  ; yaSSL::Crypto::use_digest()
0879d604 +0x034:  mov    %eax,%esi
0879d606 +0x036:  mov    (%eax),%eax
0879d608 +0x038:  mov    %esi,(%esp)
0879d60b +0x03b:  call   *0xc(%eax)
0879d60e +0x03e:  mov    %eax,%edi
0879d610 +0x040:  mov    (%esi),%eax
0879d612 +0x042:  mov    %esi,(%esp)
0879d615 +0x045:  call   *0x10(%eax)
0879d618 +0x048:  movzbl -0xf0(%ebp),%ecx
0879d61f +0x04f:  mov    %ecx,0x4(%esp)
0879d623 +0x053:  mov    %ecx,-0xf8(%ebp)
0879d629 +0x059:  mov    %eax,-0xf4(%ebp)
0879d62f +0x05f:  add    %edi,%eax
0879d631 +0x061:  mov    %eax,-0x10c(%ebp)
0879d637 +0x067:  mov    0x8(%ebp),%eax
0879d63a +0x06a:  mov    %eax,(%esp)
0879d63d +0x06d:  call   0874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>  ; yaSSL::SSL::get_macSecret(bool)
0879d642 +0x072:  movl   $0x0,-0x22(%ebp)
0879d649 +0x079:  movl   $0x0,-0x1e(%ebp)
0879d650 +0x080:  mov    %eax,-0xf0(%ebp)
0879d656 +0x086:  lea    -0x1a(%ebp),%eax
0879d659 +0x089:  mov    %eax,0x4(%esp)
0879d65d +0x08d:  movzwl 0x14(%ebp),%eax
0879d661 +0x091:  mov    %eax,(%esp)
0879d664 +0x094:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0879d669 +0x099:  mov    0x8(%ebp),%edx
0879d66c +0x09c:  mov    -0xf8(%ebp),%ecx
0879d672 +0x0a2:  mov    %edx,(%esp)
0879d675 +0x0a5:  mov    %ecx,0x4(%esp)
0879d679 +0x0a9:  call   0874ed10 <_ZN5yaSSL3SSL16get_SEQIncrementEb>  ; yaSSL::SSL::get_SEQIncrement(bool)
0879d67e +0x0ae:  lea    -0x1e(%ebp),%ecx
0879d681 +0x0b1:  mov    %ecx,0x4(%esp)
0879d685 +0x0b5:  mov    %eax,(%esp)
0879d688 +0x0b8:  call   0874de10 <_ZN5yaSSL6c32toaEjPh>  ; yaSSL::c32toa(unsigned int, unsigned char*)
0879d68d +0x0bd:  mov    -0xf0(%ebp),%eax
0879d693 +0x0c3:  lea    -0x85(%ebp),%ecx
0879d699 +0x0c9:  mov    %ecx,-0x11c(%ebp)
0879d69f +0x0cf:  mov    %edi,0x8(%esp)
0879d6a3 +0x0d3:  mov    %ecx,(%esp)
0879d6a6 +0x0d6:  mov    %eax,0x4(%esp)
0879d6aa +0x0da:  call   0807d8a0 <_init+0x198>
0879d6af +0x0df:  mov    -0x11c(%ebp),%edx
0879d6b5 +0x0e5:  lea    -0x65f738(%ebx),%eax
0879d6bb +0x0eb:  mov    -0xf4(%ebp),%ecx
0879d6c1 +0x0f1:  mov    %eax,0x4(%esp)
0879d6c5 +0x0f5:  add    %edi,%edx
0879d6c7 +0x0f7:  mov    %ecx,0x8(%esp)
0879d6cb +0x0fb:  mov    %edx,(%esp)
0879d6ce +0x0fe:  call   0807d8a0 <_init+0x198>
0879d6d3 +0x103:  mov    -0x10c(%ebp),%ecx
0879d6d9 +0x109:  mov    -0x22(%ebp),%eax
0879d6dc +0x10c:  mov    -0x1e(%ebp),%edx
0879d6df +0x10f:  mov    %eax,-0x85(%ebp,%ecx,1)
0879d6e6 +0x116:  mov    %edx,-0x81(%ebp,%ecx,1)
0879d6ed +0x11d:  mov    0x18(%ebp),%eax
0879d6f0 +0x120:  mov    %al,-0x7d(%ebp,%ecx,1)
0879d6f4 +0x124:  movzwl -0x1a(%ebp),%eax
0879d6f8 +0x128:  mov    %ax,-0x7c(%ebp,%ecx,1)
0879d6fd +0x12d:  mov    %ecx,%eax
0879d6ff +0x12f:  mov    (%esi),%edx
0879d701 +0x131:  add    $0xb,%eax
0879d704 +0x134:  mov    %eax,0x8(%esp)
0879d708 +0x138:  mov    -0x11c(%ebp),%eax
0879d70e +0x13e:  mov    %esi,(%esp)
0879d711 +0x141:  mov    %eax,0x4(%esp)
0879d715 +0x145:  call   *0x8(%edx)
0879d718 +0x148:  mov    0x10(%ebp),%ecx
0879d71b +0x14b:  mov    (%esi),%eax
0879d71d +0x14d:  mov    0x14(%ebp),%edx
0879d720 +0x150:  mov    %esi,(%esp)
0879d723 +0x153:  mov    %ecx,0x8(%esp)
0879d727 +0x157:  lea    -0x36(%ebp),%ecx
0879d72a +0x15a:  mov    %ecx,0x4(%esp)
0879d72e +0x15e:  mov    %ecx,-0xf8(%ebp)
0879d734 +0x164:  mov    %edx,0xc(%esp)
0879d738 +0x168:  call   *0x4(%eax)
0879d73b +0x16b:  mov    -0xf0(%ebp),%edx
0879d741 +0x171:  lea    -0xdd(%ebp),%eax
0879d747 +0x177:  mov    %edi,0x8(%esp)
0879d74b +0x17b:  mov    %eax,-0xec(%ebp)
0879d751 +0x181:  mov    %eax,(%esp)
0879d754 +0x184:  mov    %edx,0x4(%esp)
0879d758 +0x188:  call   0807d8a0 <_init+0x198>
0879d75d +0x18d:  mov    -0xf4(%ebp),%eax
0879d763 +0x193:  mov    -0xec(%ebp),%edx
0879d769 +0x199:  mov    %eax,0x8(%esp)
0879d76d +0x19d:  lea    -0x65f6f8(%ebx),%eax
0879d773 +0x1a3:  add    %edi,%edx
0879d775 +0x1a5:  mov    %edx,(%esp)
0879d778 +0x1a8:  mov    %eax,0x4(%esp)
0879d77c +0x1ac:  call   0807d8a0 <_init+0x198>
0879d781 +0x1b1:  mov    -0xf8(%ebp),%ecx
0879d787 +0x1b7:  mov    -0xec(%ebp),%eax
0879d78d +0x1bd:  add    -0x10c(%ebp),%eax
0879d793 +0x1c3:  mov    %edi,0x8(%esp)
0879d797 +0x1c7:  mov    %ecx,0x4(%esp)
0879d79b +0x1cb:  mov    %eax,(%esp)
0879d79e +0x1ce:  call   0807d8a0 <_init+0x198>
0879d7a3 +0x1d3:  mov    -0xec(%ebp),%edx
0879d7a9 +0x1d9:  mov    (%esi),%eax
0879d7ab +0x1db:  add    -0x10c(%ebp),%edi
0879d7b1 +0x1e1:  mov    %esi,(%esp)
0879d7b4 +0x1e4:  mov    %edx,0x8(%esp)
0879d7b8 +0x1e8:  mov    0xc(%ebp),%edx
0879d7bb +0x1eb:  mov    %edi,0xc(%esp)
0879d7bf +0x1ef:  mov    %edx,0x4(%esp)
0879d7c3 +0x1f3:  call   *0x4(%eax)
0879d7c6 +0x1f6:  add    $0x12c,%esp
0879d7cc +0x1fc:  pop    %ebx
0879d7cd +0x1fd:  pop    %esi
0879d7ce +0x1fe:  pop    %edi
0879d7cf +0x1ff:  pop    %ebp
0879d7d0 +0x200:  ret
0879d7d1 +0x201:  jmp    0879d7e0 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE>  ; yaSSL::ProcessOldClientHello(yaSSL::input_buffer&, yaSSL::SSL&)
0879d7d3 +0x203:  nop
0879d7d4 +0x204:  nop
0879d7d5 +0x205:  nop
0879d7d6 +0x206:  nop
0879d7d7 +0x207:  nop
0879d7d8 +0x208:  nop
0879d7d9 +0x209:  nop
0879d7da +0x20a:  nop
0879d7db +0x20b:  nop
0879d7dc +0x20c:  nop
0879d7dd +0x20d:  nop
0879d7de +0x20e:  nop
0879d7df +0x20f:  nop
```

## 反编译 C

```c
// yaSSL::hmac @ 0x879d5d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType,
   bool) */

void yaSSL::hmac(SSL *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5,bool param_6)

{
  undefined4 uVar1;
  Crypto *this;
  int *piVar2;
  size_t __n;
  size_t __n_00;
  int iVar3;
  void *__src;
  uint uVar4;
  undefined1 local_e1 [88];
  undefined4 local_89 [2];
  undefined1 uStack_81;
  undefined2 auStack_80 [35];
  undefined1 local_3a [20];
  undefined4 local_26;
  undefined4 local_22;
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x879d5db;
  this = (Crypto *)SSL::useCrypto(param_1);
  piVar2 = (int *)Crypto::use_digest(this);
  __n = (**(code **)(*piVar2 + 0xc))(piVar2);
  __n_00 = (**(code **)(*piVar2 + 0x10))(piVar2);
  iVar3 = __n_00 + __n;
  __src = (void *)SSL::get_macSecret(param_1,param_6);
  local_26 = 0;
  local_22 = 0;
  c16toa((ushort)param_4,(uchar *)local_1e);
  uVar4 = SSL::get_SEQIncrement(param_1,param_6);
  c32toa(uVar4,(uchar *)&local_22);
  memcpy(local_89,__src,__n);
  memcpy((void *)((int)local_89 + __n),&PAD1,__n_00);
  uVar1 = local_22;
  *(undefined4 *)((int)local_89 + iVar3) = local_26;
  *(undefined4 *)((int)local_89 + iVar3 + 4) = uVar1;
  (&uStack_81)[iVar3] = param_5;
  *(undefined2 *)((int)auStack_80 + iVar3) = local_1e[0];
  (**(code **)(*piVar2 + 8))(piVar2,local_89,iVar3 + 0xb);
  (**(code **)(*piVar2 + 4))(piVar2,local_3a,param_3,param_4);
  memcpy(local_e1,__src,__n);
  memcpy(local_e1 + __n,
         "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\client finished"
         ,__n_00);
  memcpy(local_e1 + iVar3,local_3a,__n);
  (**(code **)(*piVar2 + 4))(piVar2,param_2,local_e1,__n + iVar3);
  return;
}
```

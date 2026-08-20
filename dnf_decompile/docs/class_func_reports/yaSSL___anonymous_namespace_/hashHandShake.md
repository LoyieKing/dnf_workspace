# hashHandShake

`_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb`

`yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::(anonymous namespace)` | `0x0879cd50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879cd50  _ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb
#           yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
# range [0x0879cd50, 0x0879ce09]
0879cd50 +0x00:  push   %ebp
0879cd51 +0x01:  mov    %esp,%ebp
0879cd53 +0x03:  sub    $0x38,%esp
0879cd56 +0x06:  mov    %ebx,-0xc(%ebp)
0879cd59 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879cd5e +0x0e:  add    $0xbcfe3a,%ebx
0879cd64 +0x14:  mov    %edi,-0x4(%ebp)
0879cd67 +0x17:  mov    %edx,%edi
0879cd69 +0x19:  movzbl 0x8(%ebp),%edx
0879cd6d +0x1d:  mov    %esi,-0x8(%ebp)
0879cd70 +0x20:  mov    %eax,%esi
0879cd72 +0x22:  mov    %edi,(%esp)
0879cd75 +0x25:  mov    %dl,-0x20(%ebp)
0879cd78 +0x28:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879cd7d +0x2d:  mov    %edi,(%esp)
0879cd80 +0x30:  sub    $0x5,%eax
0879cd83 +0x33:  mov    %eax,-0x1c(%ebp)
0879cd86 +0x36:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879cd8b +0x3b:  movzbl -0x20(%ebp),%edx
0879cd8f +0x3f:  test   %dl,%dl
0879cd91 +0x41:  lea    0x5(%eax),%edi
0879cd94 +0x44:  je     0879cdb3 <+0x63>
0879cd96 +0x46:  mov    %esi,(%esp)
0879cd99 +0x49:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879cd9e +0x4e:  mov    %eax,(%esp)
0879cda1 +0x51:  call   0874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>  ; yaSSL::Crypto::get_cipher() const
0879cda6 +0x56:  mov    (%eax),%edx
0879cda8 +0x58:  mov    %eax,(%esp)
0879cdab +0x5b:  call   *0x10(%edx)
0879cdae +0x5e:  sub    %eax,-0x1c(%ebp)
0879cdb1 +0x61:  add    %eax,%edi
0879cdb3 +0x63:  mov    %esi,(%esp)
0879cdb6 +0x66:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879cdbb +0x6b:  mov    %eax,(%esp)
0879cdbe +0x6e:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879cdc3 +0x73:  mov    -0x1c(%ebp),%ecx
0879cdc6 +0x76:  mov    (%eax),%edx
0879cdc8 +0x78:  mov    %ecx,0x8(%esp)
0879cdcc +0x7c:  mov    %edi,0x4(%esp)
0879cdd0 +0x80:  mov    %eax,(%esp)
0879cdd3 +0x83:  call   *0x8(%edx)
0879cdd6 +0x86:  mov    %esi,(%esp)
0879cdd9 +0x89:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879cdde +0x8e:  mov    %eax,(%esp)
0879cde1 +0x91:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879cde6 +0x96:  mov    -0x1c(%ebp),%ecx
0879cde9 +0x99:  mov    (%eax),%edx
0879cdeb +0x9b:  mov    %edi,0x4(%esp)
0879cdef +0x9f:  mov    %ecx,0x8(%esp)
0879cdf3 +0xa3:  mov    %eax,(%esp)
0879cdf6 +0xa6:  call   *0x8(%edx)
0879cdf9 +0xa9:  mov    -0xc(%ebp),%ebx
0879cdfc +0xac:  mov    -0x8(%ebp),%esi
0879cdff +0xaf:  mov    -0x4(%ebp),%edi
0879ce02 +0xb2:  mov    %ebp,%esp
0879ce04 +0xb4:  pop    %ebp
0879ce05 +0xb5:  ret
0879ce06 +0xb6:  lea    0x0(%esi),%esi
0879ce09 +0xb9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// hashHandShake @ 0x879cd50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool) */

void __regparm2
yaSSL::(anonymous_namespace)::hashHandShake(SSL *param_1,output_buffer *param_2,bool param_3)

{
  int iVar1;
  Crypto *this;
  int *piVar2;
  int iVar3;
  sslHashes *psVar4;
  undefined4 local_20;
  
  local_20 = output_buffer::get_size(param_2);
  local_20 = local_20 + -5;
  iVar1 = output_buffer::get_buffer(param_2);
  iVar1 = iVar1 + 5;
  if (param_3) {
    this = (Crypto *)SSL::getCrypto(param_1);
    piVar2 = (int *)Crypto::get_cipher(this);
    iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
    local_20 = local_20 - iVar3;
    iVar1 = iVar1 + iVar3;
  }
  psVar4 = (sslHashes *)SSL::useHashes(param_1);
  piVar2 = (int *)sslHashes::use_MD5(psVar4);
  (**(code **)(*piVar2 + 8))(piVar2,iVar1,local_20);
  psVar4 = (sslHashes *)SSL::useHashes(param_1);
  piVar2 = (int *)sslHashes::use_SHA(psVar4);
  (**(code **)(*piVar2 + 8))(piVar2,iVar1,local_20);
  return;
}
```

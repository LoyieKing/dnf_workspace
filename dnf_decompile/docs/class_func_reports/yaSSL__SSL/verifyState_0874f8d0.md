# verifyState

`_ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE`

`yaSSL::SSL::verifyState(yaSSL::HandShakeHeader const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874f8d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f8d0  _ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE
#           yaSSL::SSL::verifyState(yaSSL::HandShakeHeader const&)
# range [0x0874f8d0, 0x0874f999]
0874f8d0 +0x00:  push   %ebp
0874f8d1 +0x01:  mov    %esp,%ebp
0874f8d3 +0x03:  sub    $0x28,%esp
0874f8d6 +0x06:  mov    %ebx,-0xc(%ebp)
0874f8d9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f8de +0x0e:  add    $0xc1d2ba,%ebx
0874f8e4 +0x14:  mov    %esi,-0x8(%ebp)
0874f8e7 +0x17:  mov    0x8(%ebp),%esi
0874f8ea +0x1a:  mov    %edi,-0x4(%ebp)
0874f8ed +0x1d:  mov    0xc(%ebp),%edi
0874f8f0 +0x20:  mov    %esi,(%esp)
0874f8f3 +0x23:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874f8f8 +0x28:  test   %eax,%eax
0874f8fa +0x2a:  je     0874f910 <+0x40>
0874f8fc +0x2c:  mov    -0xc(%ebp),%ebx
0874f8ff +0x2f:  mov    -0x8(%ebp),%esi
0874f902 +0x32:  mov    -0x4(%ebp),%edi
0874f905 +0x35:  mov    %ebp,%esp
0874f907 +0x37:  pop    %ebp
0874f908 +0x38:  ret
0874f909 +0x39:  lea    0x0(%esi,%eiz,1),%esi
0874f910 +0x40:  lea    0x8ec(%esi),%eax
0874f916 +0x46:  mov    %eax,(%esp)
0874f919 +0x49:  call   0874de90 <_ZNK5yaSSL6States12getHandShakeEv>  ; yaSSL::States::getHandShake() const
0874f91e +0x4e:  mov    (%eax),%ecx
0874f920 +0x50:  test   %ecx,%ecx
0874f922 +0x52:  je     0874f958 <+0x88>
0874f924 +0x54:  lea    0x68(%esi),%eax
0874f927 +0x57:  mov    %eax,(%esp)
0874f92a +0x5a:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874f92f +0x5f:  cmpl   $0x1,(%eax)
0874f932 +0x62:  je     0874f978 <+0xa8>
0874f934 +0x64:  mov    %edi,(%esp)
0874f937 +0x67:  call   08746a80 <_ZNK5yaSSL15HandShakeHeader17get_handshakeTypeEv>  ; yaSSL::HandShakeHeader::get_handshakeType() const
0874f93c +0x6c:  mov    %esi,(%esp)
0874f93f +0x6f:  mov    %eax,0x4(%esp)
0874f943 +0x73:  call   0874ea60 <_ZN5yaSSL3SSL17verifyServerStateENS_13HandShakeTypeE>  ; yaSSL::SSL::verifyServerState(yaSSL::HandShakeType)
0874f948 +0x78:  mov    -0xc(%ebp),%ebx
0874f94b +0x7b:  mov    -0x8(%ebp),%esi
0874f94e +0x7e:  mov    -0x4(%ebp),%edi
0874f951 +0x81:  mov    %ebp,%esp
0874f953 +0x83:  pop    %ebp
0874f954 +0x84:  ret
0874f955 +0x85:  lea    0x0(%esi),%esi
0874f958 +0x88:  mov    %esi,(%esp)
0874f95b +0x8b:  movl   $0x6b,0x4(%esp)
0874f963 +0x93:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874f968 +0x98:  mov    -0xc(%ebp),%ebx
0874f96b +0x9b:  mov    -0x8(%ebp),%esi
0874f96e +0x9e:  mov    -0x4(%ebp),%edi
0874f971 +0xa1:  mov    %ebp,%esp
0874f973 +0xa3:  pop    %ebp
0874f974 +0xa4:  ret
0874f975 +0xa5:  lea    0x0(%esi),%esi
0874f978 +0xa8:  mov    %edi,(%esp)
0874f97b +0xab:  call   08746a80 <_ZNK5yaSSL15HandShakeHeader17get_handshakeTypeEv>  ; yaSSL::HandShakeHeader::get_handshakeType() const
0874f980 +0xb0:  mov    %esi,(%esp)
0874f983 +0xb3:  mov    %eax,0x4(%esp)
0874f987 +0xb7:  call   0874eb40 <_ZN5yaSSL3SSL17verifyClientStateENS_13HandShakeTypeE>  ; yaSSL::SSL::verifyClientState(yaSSL::HandShakeType)
0874f98c +0xbc:  jmp    0874f8fc <+0x2c>
0874f991 +0xc1:  nop
0874f992 +0xc2:  lea    0x0(%esi,%eiz,1),%esi
0874f999 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::verifyState @ 0x874f8d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyState(yaSSL::HandShakeHeader const&) */

void __thiscall yaSSL::SSL::verifyState(SSL *this,HandShakeHeader *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    piVar2 = (int *)States::getHandShake((States *)(this + 0x8ec));
    if (*piVar2 == 0) {
      SetError(this,0x6b);
      return;
    }
    piVar2 = (int *)Security::get_parms((Security *)(this + 0x68));
    if (*piVar2 != 1) {
      uVar3 = HandShakeHeader::get_handshakeType(param_1);
      verifyServerState(this,uVar3);
      return;
    }
    uVar3 = HandShakeHeader::get_handshakeType(param_1);
    verifyClientState(this,uVar3);
  }
  return;
}
```

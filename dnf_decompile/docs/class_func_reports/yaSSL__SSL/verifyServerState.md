# verifyServerState

`_ZN5yaSSL3SSL17verifyServerStateENS_13HandShakeTypeE`

`yaSSL::SSL::verifyServerState(yaSSL::HandShakeType)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874ea60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ea60  _ZN5yaSSL3SSL17verifyServerStateENS_13HandShakeTypeE
#           yaSSL::SSL::verifyServerState(yaSSL::HandShakeType)
# range [0x0874ea60, 0x0874eb3e]
0874ea60 +0x00:  push   %ebp
0874ea61 +0x01:  mov    %esp,%ebp
0874ea63 +0x03:  sub    $0x28,%esp
0874ea66 +0x06:  mov    %ebx,-0xc(%ebp)
0874ea69 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ea6e +0x0e:  add    $0xc1e12a,%ebx
0874ea74 +0x14:  mov    %esi,-0x8(%ebp)
0874ea77 +0x17:  mov    0x8(%ebp),%esi
0874ea7a +0x1a:  mov    %edi,-0x4(%ebp)
0874ea7d +0x1d:  mov    0xc(%ebp),%edi
0874ea80 +0x20:  mov    %esi,(%esp)
0874ea83 +0x23:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874ea88 +0x28:  test   %eax,%eax
0874ea8a +0x2a:  jne    0874ea99 <+0x39>
0874ea8c +0x2c:  cmp    $0x14,%edi
0874ea8f +0x2f:  jbe    0874eaa8 <+0x48>
0874ea91 +0x31:  mov    %esi,(%esp)
0874ea94 +0x34:  call   0874e030 <_ZN5yaSSL3SSL11order_errorEv>  ; yaSSL::SSL::order_error()
0874ea99 +0x39:  mov    -0xc(%ebp),%ebx
0874ea9c +0x3c:  mov    -0x8(%ebp),%esi
0874ea9f +0x3f:  mov    -0x4(%ebp),%edi
0874eaa2 +0x42:  mov    %ebp,%esp
0874eaa4 +0x44:  pop    %ebp
0874eaa5 +0x45:  ret
0874eaa6 +0x46:  xchg   %ax,%ax
0874eaa8 +0x48:  mov    -0x667c98(%ebx,%edi,4),%eax
0874eaaf +0x4f:  add    %ebx,%eax
0874eab1 +0x51:  jmp    *%eax
0874eab3 +0x53:  nop
0874eab4 +0x54:  lea    0x0(%esi,%eiz,1),%esi
0874eab8 +0x58:  lea    0x8ec(%esi),%eax
0874eabe +0x5e:  mov    %eax,(%esp)
0874eac1 +0x61:  call   0874deb0 <_ZNK5yaSSL6States9getServerEv>  ; yaSSL::States::getServer() const
0874eac6 +0x66:  cmpl   $0x1,(%eax)
0874eac9 +0x69:  je     0874ea99 <+0x39>
0874eacb +0x6b:  mov    %esi,(%esp)
0874eace +0x6e:  call   0874e030 <_ZN5yaSSL3SSL11order_errorEv>  ; yaSSL::SSL::order_error()
0874ead3 +0x73:  jmp    0874ea99 <+0x39>
0874ead5 +0x75:  lea    0x0(%esi),%esi
0874ead8 +0x78:  lea    0x8ec(%esi),%eax
0874eade +0x7e:  mov    %eax,(%esp)
0874eae1 +0x81:  call   0874deb0 <_ZNK5yaSSL6States9getServerEv>  ; yaSSL::States::getServer() const
0874eae6 +0x86:  cmpl   $0x2,(%eax)
0874eae9 +0x89:  jne    0874ea91 <+0x31>
0874eaeb +0x8b:  jmp    0874ea99 <+0x39>
0874eaed +0x8d:  lea    0x0(%esi),%esi
0874eaf0 +0x90:  lea    0x8ec(%esi),%eax
0874eaf6 +0x96:  mov    %eax,(%esp)
0874eaf9 +0x99:  call   0874deb0 <_ZNK5yaSSL6States9getServerEv>  ; yaSSL::States::getServer() const
0874eafe +0x9e:  cmpl   $0x2,(%eax)
0874eb01 +0xa1:  jne    0874ea91 <+0x31>
0874eb03 +0xa3:  lea    0x68(%esi),%eax
0874eb06 +0xa6:  mov    %eax,(%esp)
0874eb09 +0xa9:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874eb0e +0xae:  cmpb   $0x0,0x28(%eax)
0874eb12 +0xb2:  je     0874ea99 <+0x39>
0874eb14 +0xb4:  jmp    0874ea91 <+0x31>
0874eb19 +0xb9:  lea    0x0(%esi,%eiz,1),%esi
0874eb20 +0xc0:  lea    0x8ec(%esi),%eax
0874eb26 +0xc6:  mov    %eax,(%esp)
0874eb29 +0xc9:  call   0874deb0 <_ZNK5yaSSL6States9getServerEv>  ; yaSSL::States::getServer() const
0874eb2e +0xce:  mov    (%eax),%ecx
0874eb30 +0xd0:  test   %ecx,%ecx
0874eb32 +0xd2:  je     0874ea99 <+0x39>
0874eb38 +0xd8:  jmp    0874ea91 <+0x31>
0874eb3d +0xdd:  nop
0874eb3e +0xde:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::verifyServerState @ 0x874ea60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyServerState(yaSSL::HandShakeType) */

void __thiscall yaSSL::SSL::verifyServerState(SSL *this,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    switch(param_2) {
    case 1:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if (*piVar2 == 0) {
        return;
      }
      break;
    case 0xb:
    case 0x10:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if (*piVar2 == 1) {
        return;
      }
      order_error(this);
      return;
    case 0xf:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if (*piVar2 == 2) {
        return;
      }
      break;
    case 0x14:
      piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
      if ((*piVar2 == 2) &&
         (iVar1 = Security::get_parms((Security *)(this + 0x68)), *(char *)(iVar1 + 0x28) == '\0'))
      {
        return;
      }
    }
    order_error(this);
  }
  return;
}
```

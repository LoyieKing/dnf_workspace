# Parameters

`_ZN5yaSSL10ParametersC1ENS_13ConnectionEndERKNS_7CiphersENS_15ProtocolVersionEb`

`yaSSL::Parameters::Parameters(yaSSL::ConnectionEnd, yaSSL::Ciphers const&, yaSSL::ProtocolVersion, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::Parameters` | `0x0874a820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874a820  _ZN5yaSSL10ParametersC1ENS_13ConnectionEndERKNS_7CiphersENS_15ProtocolVersionEb
#           yaSSL::Parameters::Parameters(yaSSL::ConnectionEnd, yaSSL::Ciphers const&, yaSSL::ProtocolVersion, bool)
# range [0x0874a820, 0x0874a8da]
0874a820 +0x00:  push   %ebp
0874a821 +0x01:  mov    %esp,%ebp
0874a823 +0x03:  push   %esi
0874a824 +0x04:  push   %ebx
0874a825 +0x05:  sub    $0x20,%esp
0874a828 +0x08:  movzbl 0x18(%ebp),%eax
0874a82c +0x0c:  mov    0x8(%ebp),%esi
0874a82f +0x0f:  mov    0x10(%ebp),%edx
0874a832 +0x12:  mov    0xc(%ebp),%ecx
0874a835 +0x15:  xor    $0x1,%eax
0874a838 +0x18:  call   08722df8 <__i686.get_pc_thunk.bx>
0874a83d +0x1d:  add    $0xc2235b,%ebx
0874a843 +0x23:  movb   $0x1,0x28(%esi)
0874a847 +0x27:  movl   $0x454e4f4e,0xaf(%esi)
0874a851 +0x31:  movb   $0x0,0xb3(%esi)
0874a858 +0x38:  mov    %al,0x6df(%esi)
0874a85e +0x3e:  cmpb   $0x0,(%edx)
0874a861 +0x41:  mov    %ecx,(%esi)
0874a863 +0x43:  jne    0874a8a0 <+0x80>
0874a865 +0x45:  movzbl %al,%eax
0874a868 +0x48:  xor    %edx,%edx
0874a86a +0x4a:  test   %ecx,%ecx
0874a86c +0x4c:  cmove  %eax,%edx
0874a86f +0x4f:  movzwl 0x14(%ebp),%eax
0874a873 +0x53:  mov    %esi,(%esp)
0874a876 +0x56:  movl   $0x0,0x10(%esp)
0874a87e +0x5e:  movl   $0x0,0xc(%esp)
0874a886 +0x66:  mov    %edx,0x8(%esp)
0874a88a +0x6a:  mov    %ax,0x4(%esp)
0874a88f +0x6f:  call   0874a230 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb>  ; yaSSL::Parameters::SetSuites(yaSSL::ProtocolVersion, bool, bool, bool)
0874a894 +0x74:  add    $0x20,%esp
0874a897 +0x77:  pop    %ebx
0874a898 +0x78:  pop    %esi
0874a899 +0x79:  pop    %ebp
0874a89a +0x7a:  ret
0874a89b +0x7b:  nop
0874a89c +0x7c:  lea    0x0(%esi,%eiz,1),%esi
0874a8a0 +0x80:  mov    0x84(%edx),%eax
0874a8a6 +0x86:  lea    0x1(%edx),%ecx
0874a8a9 +0x89:  mov    %al,0x2e(%esi)
0874a8ac +0x8c:  mov    0x84(%edx),%edx
0874a8b2 +0x92:  lea    0x2f(%esi),%eax
0874a8b5 +0x95:  mov    %ecx,0x4(%esp)
0874a8b9 +0x99:  mov    %eax,(%esp)
0874a8bc +0x9c:  mov    %edx,0x8(%esp)
0874a8c0 +0xa0:  call   0807d8a0 <_init+0x198>
0874a8c5 +0xa5:  mov    %esi,(%esp)
0874a8c8 +0xa8:  call   0874a1a0 <_ZN5yaSSL10Parameters14SetCipherNamesEv>  ; yaSSL::Parameters::SetCipherNames()
0874a8cd +0xad:  add    $0x20,%esp
0874a8d0 +0xb0:  pop    %ebx
0874a8d1 +0xb1:  pop    %esi
0874a8d2 +0xb2:  pop    %ebp
0874a8d3 +0xb3:  ret
0874a8d4 +0xb4:  lea    0x0(%esi),%esi
0874a8da +0xba:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::Parameters::Parameters @ 0x874a820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Parameters::Parameters(yaSSL::ConnectionEnd, yaSSL::Ciphers const&,
   yaSSL::ProtocolVersion, bool) */

void __thiscall
yaSSL::Parameters::Parameters
          (Parameters *this,int param_2,char *param_3,undefined2 param_4,byte param_5)

{
  char cVar1;
  Parameters PVar2;
  
  this[0x28] = (Parameters)0x1;
  *(undefined4 *)(this + 0xaf) = 0x454e4f4e;
  this[0xb3] = (Parameters)0x0;
  this[0x6df] = (Parameters)(param_5 ^ 1);
  cVar1 = *param_3;
  *(int *)this = param_2;
  if (cVar1 == '\0') {
    PVar2 = (Parameters)0x0;
    if (param_2 == 0) {
      PVar2 = (Parameters)(param_5 ^ 1);
    }
    SetSuites(this,param_4,PVar2,0,0);
    return;
  }
  this[0x2e] = SUB41(*(undefined4 *)(param_3 + 0x84),0);
  memcpy(this + 0x2f,param_3 + 1,*(size_t *)(param_3 + 0x84));
  SetCipherNames(this);
  return;
}
```

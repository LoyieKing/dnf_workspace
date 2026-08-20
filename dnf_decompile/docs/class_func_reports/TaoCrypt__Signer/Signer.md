# Signer

`_ZN8TaoCrypt6SignerC1EPKhjPKcS2_`

`TaoCrypt::Signer::Signer(unsigned char const*, unsigned int, char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Signer` | `0x08753fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753fa0  _ZN8TaoCrypt6SignerC1EPKhjPKcS2_
#           TaoCrypt::Signer::Signer(unsigned char const*, unsigned int, char const*, unsigned char const*)
# range [0x08753fa0, 0x08754039]
08753fa0 +0x00:  push   %ebp
08753fa1 +0x01:  mov    %esp,%ebp
08753fa3 +0x03:  sub    $0x38,%esp
08753fa6 +0x06:  mov    0x10(%ebp),%eax
08753fa9 +0x09:  mov    %ebx,-0xc(%ebp)
08753fac +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08753fb1 +0x11:  add    $0xc18be7,%ebx
08753fb7 +0x17:  mov    %edi,-0x4(%ebp)
08753fba +0x1a:  mov    0x8(%ebp),%edi
08753fbd +0x1d:  mov    %eax,0x8(%esp)
08753fc1 +0x21:  mov    0xc(%ebp),%eax
08753fc4 +0x24:  mov    %esi,-0x8(%ebp)
08753fc7 +0x27:  mov    0x18(%ebp),%esi
08753fca +0x2a:  mov    %edi,(%esp)
08753fcd +0x2d:  mov    %eax,0x4(%esp)
08753fd1 +0x31:  call   08753f40 <_ZN8TaoCrypt9PublicKeyC1EPKhj>  ; TaoCrypt::PublicKey::PublicKey(unsigned char const*, unsigned int)
08753fd6 +0x36:  mov    0x14(%ebp),%eax
08753fd9 +0x39:  mov    %eax,(%esp)
08753fdc +0x3c:  call   0807e3b0 <_init+0xca8>
08753fe1 +0x41:  mov    0x14(%ebp),%ecx
08753fe4 +0x44:  mov    %ecx,0x4(%esp)
08753fe8 +0x48:  mov    %eax,%edx
08753fea +0x4a:  lea    0x8(%edi),%eax
08753fed +0x4d:  mov    %edx,0x8(%esp)
08753ff1 +0x51:  mov    %edx,-0x1c(%ebp)
08753ff4 +0x54:  mov    %eax,(%esp)
08753ff7 +0x57:  call   0807d8a0 <_init+0x198>
08753ffc +0x5c:  mov    -0x1c(%ebp),%edx
08753fff +0x5f:  lea    0x208(%edi),%eax
08754005 +0x65:  movb   $0x0,0x8(%edi,%edx,1)
0875400a +0x6a:  mov    (%esi),%edx
0875400c +0x6c:  mov    %edx,0x208(%edi)
08754012 +0x72:  mov    0x4(%esi),%edx
08754015 +0x75:  mov    %edx,0x4(%eax)
08754018 +0x78:  mov    0x8(%esi),%edx
0875401b +0x7b:  mov    %edx,0x8(%eax)
0875401e +0x7e:  mov    0xc(%esi),%edx
08754021 +0x81:  mov    %edx,0xc(%eax)
08754024 +0x84:  mov    0x10(%esi),%edx
08754027 +0x87:  mov    %edx,0x10(%eax)
0875402a +0x8a:  mov    -0xc(%ebp),%ebx
0875402d +0x8d:  mov    -0x8(%ebp),%esi
08754030 +0x90:  mov    -0x4(%ebp),%edi
08754033 +0x93:  mov    %ebp,%esp
08754035 +0x95:  pop    %ebp
08754036 +0x96:  ret
08754037 +0x97:  mov    %esi,%esi
08754039 +0x99:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Signer::Signer @ 0x8753fa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signer::Signer(unsigned char const*, unsigned int, char const*, unsigned char const*)
    */

void __thiscall
TaoCrypt::Signer::Signer(Signer *this,uchar *param_1,uint param_2,char *param_3,uchar *param_4)

{
  size_t __n;
  
  PublicKey::PublicKey((PublicKey *)this,param_1,param_2);
  __n = strlen(param_3);
  memcpy(this + 8,param_3,__n);
  this[__n + 8] = (Signer)0x0;
  *(undefined4 *)(this + 0x208) = *(undefined4 *)param_4;
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(this + 0x210) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(this + 0x214) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(this + 0x218) = *(undefined4 *)(param_4 + 0x10);
  return;
}
```

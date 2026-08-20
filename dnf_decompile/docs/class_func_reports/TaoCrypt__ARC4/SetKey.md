# SetKey

`_ZN8TaoCrypt4ARC46SetKeyEPKhj`

`TaoCrypt::ARC4::SetKey(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ARC4` | `0x087a5900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a5900  _ZN8TaoCrypt4ARC46SetKeyEPKhj
#           TaoCrypt::ARC4::SetKey(unsigned char const*, unsigned int)
# range [0x087a5900, 0x087a598a]
087a5900 +0x00:  push   %ebp
087a5901 +0x01:  xor    %eax,%eax
087a5903 +0x03:  mov    %esp,%ebp
087a5905 +0x05:  push   %edi
087a5906 +0x06:  push   %esi
087a5907 +0x07:  sub    $0xc,%esp
087a590a +0x0a:  mov    0x8(%ebp),%ecx
087a590d +0x0d:  movb   $0x1,(%ecx)
087a5910 +0x10:  movb   $0x0,0x1(%ecx)
087a5914 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087a5918 +0x18:  mov    %al,0x2(%ecx,%eax,1)
087a591c +0x1c:  add    $0x1,%eax
087a591f +0x1f:  cmp    $0x100,%eax
087a5924 +0x24:  jne    087a5918 <+0x18>
087a5926 +0x26:  lea    0x100(%ecx),%edx
087a592c +0x2c:  mov    %ecx,%eax
087a592e +0x2e:  mov    %edx,-0x10(%ebp)
087a5931 +0x31:  xor    %esi,%esi
087a5933 +0x33:  xor    %edx,%edx
087a5935 +0x35:  mov    %ecx,-0x14(%ebp)
087a5938 +0x38:  movzbl 0x2(%eax),%ecx
087a593c +0x3c:  mov    %cl,-0x9(%ebp)
087a593f +0x3f:  movzbl %cl,%edi
087a5942 +0x42:  mov    0xc(%ebp),%ecx
087a5945 +0x45:  lea    (%edx,%edi,1),%edi
087a5948 +0x48:  movzbl (%ecx,%esi,1),%edx
087a594c +0x4c:  add    $0x1,%esi
087a594f +0x4f:  mov    -0x14(%ebp),%ecx
087a5952 +0x52:  lea    (%edi,%edx,1),%edx
087a5955 +0x55:  and    $0xff,%edx
087a595b +0x5b:  movzbl 0x2(%ecx,%edx,1),%edi
087a5960 +0x60:  mov    %edi,%ecx
087a5962 +0x62:  mov    %cl,0x2(%eax)
087a5965 +0x65:  movzbl -0x9(%ebp),%ecx
087a5969 +0x69:  mov    -0x14(%ebp),%edi
087a596c +0x6c:  mov    %cl,0x2(%edi,%edx,1)
087a5970 +0x70:  mov    $0x0,%ecx
087a5975 +0x75:  cmp    0x10(%ebp),%esi
087a5978 +0x78:  cmovae %ecx,%esi
087a597b +0x7b:  add    $0x1,%eax
087a597e +0x7e:  cmp    -0x10(%ebp),%eax
087a5981 +0x81:  jne    087a5938 <+0x38>
087a5983 +0x83:  add    $0xc,%esp
087a5986 +0x86:  pop    %esi
087a5987 +0x87:  pop    %edi
087a5988 +0x88:  pop    %ebp
087a5989 +0x89:  ret
087a598a +0x8a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::ARC4::SetKey @ 0x87a5900

/* TaoCrypt::ARC4::SetKey(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::ARC4::SetKey(ARC4 *this,uchar *param_1,uint param_2)

{
  byte *pbVar1;
  ARC4 AVar2;
  int iVar3;
  ARC4 *pAVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = 0;
  *this = (ARC4)0x1;
  this[1] = (ARC4)0x0;
  do {
    this[iVar3 + 2] = SUB41(iVar3,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  uVar6 = 0;
  uVar5 = 0;
  pAVar4 = this;
  do {
    AVar2 = pAVar4[2];
    pbVar1 = param_1 + uVar6;
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + (byte)AVar2 + (uint)*pbVar1 & 0xff;
    pAVar4[2] = this[uVar5 + 2];
    this[uVar5 + 2] = AVar2;
    if (param_2 <= uVar6) {
      uVar6 = 0;
    }
    pAVar4 = pAVar4 + 1;
  } while (pAVar4 != this + 0x100);
  return;
}
```

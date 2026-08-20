# Deobfuscate1

`_ZN11CObfuscator12Deobfuscate1Ev`

`CObfuscator::Deobfuscate1()`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x08585aaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585aaa  _ZN11CObfuscator12Deobfuscate1Ev
#           CObfuscator::Deobfuscate1()
# range [0x08585aaa, 0x08585be3]
08585aaa +0x000:  push   %ebp
08585aab +0x001:  mov    %esp,%ebp
08585aad +0x003:  sub    $0x28,%esp
08585ab0 +0x006:  movl   $0x0,-0x18(%ebp)
08585ab7 +0x00d:  mov    0x8(%ebp),%eax
08585aba +0x010:  mov    0x8(%eax),%eax
08585abd +0x013:  shl    $0x3,%eax
08585ac0 +0x016:  mov    %eax,-0x14(%ebp)
08585ac3 +0x019:  mov    -0x14(%ebp),%ecx
08585ac6 +0x01c:  mov    $0x92492493,%edx
08585acb +0x021:  mov    %ecx,%eax
08585acd +0x023:  imul   %edx
08585acf +0x025:  lea    (%edx,%ecx,1),%eax
08585ad2 +0x028:  mov    %eax,%edx
08585ad4 +0x02a:  sar    $0x2,%edx
08585ad7 +0x02d:  mov    %ecx,%eax
08585ad9 +0x02f:  sar    $0x1f,%eax
08585adc +0x032:  mov    %edx,%ecx
08585ade +0x034:  sub    %eax,%ecx
08585ae0 +0x036:  mov    %ecx,%eax
08585ae2 +0x038:  mov    %eax,-0x10(%ebp)
08585ae5 +0x03b:  mov    -0x14(%ebp),%ecx
08585ae8 +0x03e:  mov    $0x92492493,%edx
08585aed +0x043:  mov    %ecx,%eax
08585aef +0x045:  imul   %edx
08585af1 +0x047:  lea    (%edx,%ecx,1),%eax
08585af4 +0x04a:  mov    %eax,%edx
08585af6 +0x04c:  sar    $0x2,%edx
08585af9 +0x04f:  mov    %ecx,%eax
08585afb +0x051:  sar    $0x1f,%eax
08585afe +0x054:  sub    %eax,%edx
08585b00 +0x056:  mov    %edx,%eax
08585b02 +0x058:  shl    $0x3,%eax
08585b05 +0x05b:  sub    %edx,%eax
08585b07 +0x05d:  mov    %ecx,%edx
08585b09 +0x05f:  sub    %eax,%edx
08585b0b +0x061:  mov    0x8(%ebp),%eax
08585b0e +0x064:  mov    %edx,0xc(%eax)
08585b11 +0x067:  movl   $0x0,-0x18(%ebp)
08585b18 +0x06e:  jmp    08585bc9 <+0x11f>
08585b1d +0x073:  mov    0x8(%ebp),%eax
08585b20 +0x076:  mov    0xc(%eax),%eax
08585b23 +0x079:  test   %eax,%eax
08585b25 +0x07b:  jne    08585b33 <+0x89>
08585b27 +0x07d:  mov    -0x18(%ebp),%eax
08585b2a +0x080:  cmp    -0x10(%ebp),%eax
08585b2d +0x083:  je     08585bdc <+0x132>
08585b33 +0x089:  movb   $0x0,-0x9(%ebp)
08585b37 +0x08d:  cmpl   $0x0,-0x18(%ebp)
08585b3b +0x091:  jne    08585b61 <+0xb7>
08585b3d +0x093:  mov    0x8(%ebp),%eax
08585b40 +0x096:  mov    0xc(%eax),%eax
08585b43 +0x099:  test   %eax,%eax
08585b45 +0x09b:  je     08585b61 <+0xb7>
08585b47 +0x09d:  mov    0x8(%ebp),%eax
08585b4a +0x0a0:  mov    0xc(%eax),%edx
08585b4d +0x0a3:  mov    0x8(%ebp),%eax
08585b50 +0x0a6:  mov    %edx,0x4(%esp)
08585b54 +0x0aa:  mov    %eax,(%esp)
08585b57 +0x0ad:  call   0831c160 <_ZN11CBitManager13GetBitFromLSBEi>  ; CBitManager::GetBitFromLSB(int)
08585b5c +0x0b2:  mov    %al,-0x9(%ebp)
08585b5f +0x0b5:  jmp    08585b77 <+0xcd>
08585b61 +0x0b7:  mov    0x8(%ebp),%eax
08585b64 +0x0ba:  movl   $0x7,0x4(%esp)
08585b6c +0x0c2:  mov    %eax,(%esp)
08585b6f +0x0c5:  call   0831c160 <_ZN11CBitManager13GetBitFromLSBEi>  ; CBitManager::GetBitFromLSB(int)
08585b74 +0x0ca:  mov    %al,-0x9(%ebp)
08585b77 +0x0cd:  cmpl   $0x0,-0x18(%ebp)
08585b7b +0x0d1:  jle    08585b9a <+0xf0>
08585b7d +0x0d3:  mov    0x8(%ebp),%eax
08585b80 +0x0d6:  mov    0x4(%eax),%edx
08585b83 +0x0d9:  mov    0x8(%ebp),%eax
08585b86 +0x0dc:  mov    %edx,0x8(%esp)
08585b8a +0x0e0:  movl   $0x7,0x4(%esp)
08585b92 +0x0e8:  mov    %eax,(%esp)
08585b95 +0x0eb:  call   0831c266 <_ZN11CBitManager9ShiftLeftEiPh>  ; CBitManager::ShiftLeft(int, unsigned char*)
08585b9a +0x0f0:  mov    0x8(%ebp),%eax
08585b9d +0x0f3:  mov    0x4(%eax),%edx
08585ba0 +0x0f6:  mov    0x8(%ebp),%eax
08585ba3 +0x0f9:  mov    0x8(%eax),%eax
08585ba6 +0x0fc:  sub    $0x1,%eax
08585ba9 +0x0ff:  add    %eax,%edx
08585bab +0x101:  mov    0x8(%ebp),%eax
08585bae +0x104:  mov    0x4(%eax),%ecx
08585bb1 +0x107:  mov    0x8(%ebp),%eax
08585bb4 +0x10a:  mov    0x8(%eax),%eax
08585bb7 +0x10d:  sub    $0x1,%eax
08585bba +0x110:  lea    (%ecx,%eax,1),%eax
08585bbd +0x113:  movzbl (%eax),%eax
08585bc0 +0x116:  or     -0x9(%ebp),%al
08585bc3 +0x119:  mov    %al,(%edx)
08585bc5 +0x11b:  addl   $0x1,-0x18(%ebp)
08585bc9 +0x11f:  mov    -0x18(%ebp),%eax
08585bcc +0x122:  cmp    -0x10(%ebp),%eax
08585bcf +0x125:  setle  %al
08585bd2 +0x128:  test   %al,%al
08585bd4 +0x12a:  jne    08585b1d <+0x73>
08585bda +0x130:  jmp    08585bdd <+0x133>
08585bdc +0x132:  nop
08585bdd +0x133:  mov    $0x0,%eax
08585be2 +0x138:  leave
08585be3 +0x139:  ret
```

## 反编译 C

```c
// CObfuscator::Deobfuscate1 @ 0x8585aaa

/* CObfuscator::Deobfuscate1() */

undefined4 __thiscall CObfuscator::Deobfuscate1(CObfuscator *this)

{
  int iVar1;
  int local_1c;
  byte local_d;
  
  iVar1 = (*(int *)(this + 8) * 8) / 7;
  *(int *)(this + 0xc) = (*(int *)(this + 8) * 8) % 7;
  for (local_1c = 0; (local_1c <= iVar1 && ((*(int *)(this + 0xc) != 0 || (local_1c != iVar1))));
      local_1c = local_1c + 1) {
    if ((local_1c == 0) && (*(int *)(this + 0xc) != 0)) {
      local_d = CBitManager::GetBitFromLSB((CBitManager *)this,*(int *)(this + 0xc));
    }
    else {
      local_d = CBitManager::GetBitFromLSB((CBitManager *)this,7);
    }
    if (0 < local_1c) {
      CBitManager::ShiftLeft((CBitManager *)this,7,*(uchar **)(this + 4));
    }
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) | local_d;
  }
  return 0;
}
```

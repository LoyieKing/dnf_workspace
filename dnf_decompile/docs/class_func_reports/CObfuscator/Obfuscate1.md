# Obfuscate1

`_ZN11CObfuscator10Obfuscate1Ev`

`CObfuscator::Obfuscate1()`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x08585986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585986  _ZN11CObfuscator10Obfuscate1Ev
#           CObfuscator::Obfuscate1()
# range [0x08585986, 0x08585aa9]
08585986 +0x000:  push   %ebp
08585987 +0x001:  mov    %esp,%ebp
08585989 +0x003:  sub    $0x28,%esp
0858598c +0x006:  movl   $0x0,-0x18(%ebp)
08585993 +0x00d:  mov    0x8(%ebp),%eax
08585996 +0x010:  mov    0x8(%eax),%eax
08585999 +0x013:  shl    $0x3,%eax
0858599c +0x016:  mov    %eax,-0x14(%ebp)
0858599f +0x019:  mov    -0x14(%ebp),%ecx
085859a2 +0x01c:  mov    $0x92492493,%edx
085859a7 +0x021:  mov    %ecx,%eax
085859a9 +0x023:  imul   %edx
085859ab +0x025:  lea    (%edx,%ecx,1),%eax
085859ae +0x028:  mov    %eax,%edx
085859b0 +0x02a:  sar    $0x2,%edx
085859b3 +0x02d:  mov    %ecx,%eax
085859b5 +0x02f:  sar    $0x1f,%eax
085859b8 +0x032:  mov    %edx,%ecx
085859ba +0x034:  sub    %eax,%ecx
085859bc +0x036:  mov    %ecx,%eax
085859be +0x038:  mov    %eax,-0x10(%ebp)
085859c1 +0x03b:  mov    -0x14(%ebp),%ecx
085859c4 +0x03e:  mov    $0x92492493,%edx
085859c9 +0x043:  mov    %ecx,%eax
085859cb +0x045:  imul   %edx
085859cd +0x047:  lea    (%edx,%ecx,1),%eax
085859d0 +0x04a:  mov    %eax,%edx
085859d2 +0x04c:  sar    $0x2,%edx
085859d5 +0x04f:  mov    %ecx,%eax
085859d7 +0x051:  sar    $0x1f,%eax
085859da +0x054:  sub    %eax,%edx
085859dc +0x056:  mov    %edx,%eax
085859de +0x058:  shl    $0x3,%eax
085859e1 +0x05b:  sub    %edx,%eax
085859e3 +0x05d:  mov    %ecx,%edx
085859e5 +0x05f:  sub    %eax,%edx
085859e7 +0x061:  mov    0x8(%ebp),%eax
085859ea +0x064:  mov    %edx,0xc(%eax)
085859ed +0x067:  movl   $0x0,-0x18(%ebp)
085859f4 +0x06e:  jmp    08585a92 <+0x10c>
085859f9 +0x073:  mov    0x8(%ebp),%eax
085859fc +0x076:  movl   $0x7,0x4(%esp)
08585a04 +0x07e:  mov    %eax,(%esp)
08585a07 +0x081:  call   0831c160 <_ZN11CBitManager13GetBitFromLSBEi>  ; CBitManager::GetBitFromLSB(int)
08585a0c +0x086:  mov    %al,-0x9(%ebp)
08585a0f +0x089:  cmpl   $0x0,-0x18(%ebp)
08585a13 +0x08d:  jle    08585a3c <+0xb6>
08585a15 +0x08f:  mov    -0x18(%ebp),%eax
08585a18 +0x092:  cmp    -0x10(%ebp),%eax
08585a1b +0x095:  jge    08585a3c <+0xb6>
08585a1d +0x097:  mov    0x8(%ebp),%eax
08585a20 +0x09a:  mov    0x4(%eax),%edx
08585a23 +0x09d:  mov    0x8(%ebp),%eax
08585a26 +0x0a0:  mov    %edx,0x8(%esp)
08585a2a +0x0a4:  movl   $0x7,0x4(%esp)
08585a32 +0x0ac:  mov    %eax,(%esp)
08585a35 +0x0af:  call   0831c266 <_ZN11CBitManager9ShiftLeftEiPh>  ; CBitManager::ShiftLeft(int, unsigned char*)
08585a3a +0x0b4:  jmp    08585a63 <+0xdd>
08585a3c +0x0b6:  mov    -0x18(%ebp),%eax
08585a3f +0x0b9:  cmp    -0x10(%ebp),%eax
08585a42 +0x0bc:  jne    08585a63 <+0xdd>
08585a44 +0x0be:  mov    0x8(%ebp),%eax
08585a47 +0x0c1:  mov    0x4(%eax),%ecx
08585a4a +0x0c4:  mov    0x8(%ebp),%eax
08585a4d +0x0c7:  mov    0xc(%eax),%edx
08585a50 +0x0ca:  mov    0x8(%ebp),%eax
08585a53 +0x0cd:  mov    %ecx,0x8(%esp)
08585a57 +0x0d1:  mov    %edx,0x4(%esp)
08585a5b +0x0d5:  mov    %eax,(%esp)
08585a5e +0x0d8:  call   0831c266 <_ZN11CBitManager9ShiftLeftEiPh>  ; CBitManager::ShiftLeft(int, unsigned char*)
08585a63 +0x0dd:  mov    0x8(%ebp),%eax
08585a66 +0x0e0:  mov    0x4(%eax),%edx
08585a69 +0x0e3:  mov    0x8(%ebp),%eax
08585a6c +0x0e6:  mov    0x8(%eax),%eax
08585a6f +0x0e9:  sub    $0x1,%eax
08585a72 +0x0ec:  add    %eax,%edx
08585a74 +0x0ee:  mov    0x8(%ebp),%eax
08585a77 +0x0f1:  mov    0x4(%eax),%ecx
08585a7a +0x0f4:  mov    0x8(%ebp),%eax
08585a7d +0x0f7:  mov    0x8(%eax),%eax
08585a80 +0x0fa:  sub    $0x1,%eax
08585a83 +0x0fd:  lea    (%ecx,%eax,1),%eax
08585a86 +0x100:  movzbl (%eax),%eax
08585a89 +0x103:  or     -0x9(%ebp),%al
08585a8c +0x106:  mov    %al,(%edx)
08585a8e +0x108:  addl   $0x1,-0x18(%ebp)
08585a92 +0x10c:  mov    -0x18(%ebp),%eax
08585a95 +0x10f:  cmp    -0x10(%ebp),%eax
08585a98 +0x112:  setle  %al
08585a9b +0x115:  test   %al,%al
08585a9d +0x117:  jne    085859f9 <+0x73>
08585aa3 +0x11d:  mov    $0x0,%eax
08585aa8 +0x122:  leave
08585aa9 +0x123:  ret
```

## 反编译 C

```c
// CObfuscator::Obfuscate1 @ 0x8585986

/* CObfuscator::Obfuscate1() */

undefined4 __thiscall CObfuscator::Obfuscate1(CObfuscator *this)

{
  int iVar1;
  byte bVar2;
  int local_1c;
  
  iVar1 = (*(int *)(this + 8) * 8) / 7;
  *(int *)(this + 0xc) = (*(int *)(this + 8) * 8) % 7;
  for (local_1c = 0; local_1c <= iVar1; local_1c = local_1c + 1) {
    bVar2 = CBitManager::GetBitFromLSB((CBitManager *)this,7);
    if ((local_1c < 1) || (iVar1 <= local_1c)) {
      if (local_1c == iVar1) {
        CBitManager::ShiftLeft((CBitManager *)this,*(int *)(this + 0xc),*(uchar **)(this + 4));
      }
    }
    else {
      CBitManager::ShiftLeft((CBitManager *)this,7,*(uchar **)(this + 4));
    }
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) | bVar2;
  }
  return 0;
}
```

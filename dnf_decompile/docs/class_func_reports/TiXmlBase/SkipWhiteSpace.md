# SkipWhiteSpace

`_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding`

`TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e6480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6480  _ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding
#           TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding)
# range [0x087e6480, 0x087e6559]
087e6480 +0x00:  push   %ebp
087e6481 +0x01:  mov    %esp,%ebp
087e6483 +0x03:  push   %ebx
087e6484 +0x04:  sub    $0x24,%esp
087e6487 +0x07:  mov    0x8(%ebp),%ebx
087e648a +0x0a:  test   %ebx,%ebx
087e648c +0x0c:  jne    087e6498 <+0x18>
087e648e +0x0e:  mov    %ebx,%eax
087e6490 +0x10:  add    $0x24,%esp
087e6493 +0x13:  pop    %ebx
087e6494 +0x14:  pop    %ebp
087e6495 +0x15:  ret
087e6496 +0x16:  xchg   %ax,%ax
087e6498 +0x18:  movzbl (%ebx),%edx
087e649b +0x1b:  test   %dl,%dl
087e649d +0x1d:  je     087e6548 <+0xc8>
087e64a3 +0x23:  cmpl   $0x1,0xc(%ebp)
087e64a7 +0x27:  je     087e64f2 <+0x72>
087e64a9 +0x29:  movzbl %dl,%eax
087e64ac +0x2c:  mov    %eax,(%esp)
087e64af +0x2f:  mov    %dl,-0xc(%ebp)
087e64b2 +0x32:  call   0807e280 <_init+0xb78>
087e64b7 +0x37:  movzbl -0xc(%ebp),%edx
087e64bb +0x3b:  cmp    $0xa,%dl
087e64be +0x3e:  je     087e64d0 <+0x50>
087e64c0 +0x40:  test   %eax,%eax
087e64c2 +0x42:  jne    087e64d0 <+0x50>
087e64c4 +0x44:  cmp    $0xd,%dl
087e64c7 +0x47:  jne    087e648e <+0xe>
087e64c9 +0x49:  lea    0x0(%esi,%eiz,1),%esi
087e64d0 +0x50:  add    $0x1,%ebx
087e64d3 +0x53:  movzbl (%ebx),%edx
087e64d6 +0x56:  test   %dl,%dl
087e64d8 +0x58:  jne    087e64a9 <+0x29>
087e64da +0x5a:  mov    %ebx,%eax
087e64dc +0x5c:  add    $0x24,%esp
087e64df +0x5f:  pop    %ebx
087e64e0 +0x60:  pop    %ebp
087e64e1 +0x61:  ret
087e64e2 +0x62:  lea    0x0(%esi),%esi
087e64e8 +0x68:  add    $0x1,%ebx
087e64eb +0x6b:  movzbl (%ebx),%edx
087e64ee +0x6e:  test   %dl,%dl
087e64f0 +0x70:  je     087e648e <+0xe>
087e64f2 +0x72:  cmpb   $0xef,(%ebx)
087e64f5 +0x75:  je     087e6520 <+0xa0>
087e64f7 +0x77:  movzbl %dl,%eax
087e64fa +0x7a:  mov    %eax,(%esp)
087e64fd +0x7d:  mov    %dl,-0xc(%ebp)
087e6500 +0x80:  call   0807e280 <_init+0xb78>
087e6505 +0x85:  movzbl -0xc(%ebp),%edx
087e6509 +0x89:  test   %eax,%eax
087e650b +0x8b:  jne    087e64e8 <+0x68>
087e650d +0x8d:  cmp    $0xa,%dl
087e6510 +0x90:  je     087e64e8 <+0x68>
087e6512 +0x92:  cmp    $0xd,%dl
087e6515 +0x95:  je     087e64e8 <+0x68>
087e6517 +0x97:  mov    %ebx,%eax
087e6519 +0x99:  add    $0x24,%esp
087e651c +0x9c:  pop    %ebx
087e651d +0x9d:  pop    %ebp
087e651e +0x9e:  ret
087e651f +0x9f:  nop
087e6520 +0xa0:  movzbl 0x1(%ebx),%eax
087e6524 +0xa4:  cmp    $0xbb,%al
087e6526 +0xa6:  je     087e6540 <+0xc0>
087e6528 +0xa8:  cmp    $0xbf,%al
087e652a +0xaa:  jne    087e64f7 <+0x77>
087e652c +0xac:  movzbl 0x2(%ebx),%eax
087e6530 +0xb0:  cmp    $0xbe,%al
087e6532 +0xb2:  je     087e6538 <+0xb8>
087e6534 +0xb4:  cmp    $0xbf,%al
087e6536 +0xb6:  jne    087e64f7 <+0x77>
087e6538 +0xb8:  add    $0x3,%ebx
087e653b +0xbb:  jmp    087e64eb <+0x6b>
087e653d +0xbd:  lea    0x0(%esi),%esi
087e6540 +0xc0:  cmpb   $0xbf,0x2(%ebx)
087e6544 +0xc4:  jne    087e64f7 <+0x77>
087e6546 +0xc6:  jmp    087e6538 <+0xb8>
087e6548 +0xc8:  xor    %ebx,%ebx
087e654a +0xca:  add    $0x24,%esp
087e654d +0xcd:  mov    %ebx,%eax
087e654f +0xcf:  pop    %ebx
087e6550 +0xd0:  pop    %ebp
087e6551 +0xd1:  ret
087e6552 +0xd2:  lea    0x0(%esi,%eiz,1),%esi
087e6559 +0xd9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlBase::SkipWhiteSpace @ 0x87e6480

/* TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding) */

byte * TiXmlBase::SkipWhiteSpace(byte *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    if (param_2 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e6538;
            goto LAB_087e64f7;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e64f7;
LAB_087e6538:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e64f7:
          iVar1 = isspace((uint)bVar2);
          if (((iVar1 == 0) && (bVar2 != 10)) && (bVar2 != 0xd)) {
            return param_1;
          }
          param_1 = param_1 + 1;
        }
        bVar2 = *param_1;
      } while (bVar2 != 0);
    }
    else {
      while (((iVar1 = isspace((uint)bVar2), bVar2 == 10 || (iVar1 != 0)) || (bVar2 == 0xd))) {
        param_1 = param_1 + 1;
        bVar2 = *param_1;
        if (bVar2 == 0) {
          return param_1;
        }
      }
    }
  }
  return param_1;
}
```

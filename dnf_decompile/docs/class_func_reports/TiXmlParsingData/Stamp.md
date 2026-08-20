# Stamp

`_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding`

`TiXmlParsingData::Stamp(char const*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlParsingData` | `0x087e6020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6020  _ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding
#           TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
# range [0x087e6020, 0x087e622a]
087e6020 +0x000:  push   %ebp
087e6021 +0x001:  mov    %esp,%ebp
087e6023 +0x003:  push   %edi
087e6024 +0x004:  push   %esi
087e6025 +0x005:  push   %ebx
087e6026 +0x006:  sub    $0x3c,%esp
087e6029 +0x009:  mov    0xc(%ebp),%ebx
087e602c +0x00c:  mov    0x8(%ebp),%esi
087e602f +0x00f:  test   %ebx,%ebx
087e6031 +0x011:  je     087e619a <+0x17a>
087e6037 +0x017:  mov    0xc(%esi),%eax
087e603a +0x01a:  test   %eax,%eax
087e603c +0x01c:  mov    %eax,-0x1c(%ebp)
087e603f +0x01f:  jle    087e60a8 <+0x88>
087e6041 +0x021:  mov    0x8(%esi),%ecx
087e6044 +0x024:  mov    (%esi),%edi
087e6046 +0x026:  mov    0x4(%esi),%edx
087e6049 +0x029:  test   %ecx,%ecx
087e604b +0x02b:  je     087e6176 <+0x156>
087e6051 +0x031:  cmp    %ecx,%ebx
087e6053 +0x033:  jbe    087e6080 <+0x60>
087e6055 +0x035:  movzbl (%ecx),%eax
087e6058 +0x038:  cmp    $0xa,%al
087e605a +0x03a:  je     087e6120 <+0x100>
087e6060 +0x040:  ja     087e60c8 <+0xa8>
087e6062 +0x042:  test   %al,%al
087e6064 +0x044:  je     087e60a8 <+0x88>
087e6066 +0x046:  cmp    $0x9,%al
087e6068 +0x048:  je     087e60b0 <+0x90>
087e606a +0x04a:  cmpl   $0x1,0x10(%ebp)
087e606e +0x04e:  xchg   %ax,%ax
087e6070 +0x050:  je     087e6138 <+0x118>
087e6076 +0x056:  add    $0x1,%ecx
087e6079 +0x059:  add    $0x1,%edx
087e607c +0x05c:  cmp    %ecx,%ebx
087e607e +0x05e:  ja     087e6055 <+0x35>
087e6080 +0x060:  cmp    $0xffffffff,%edi
087e6083 +0x063:  mov    %edi,(%esi)
087e6085 +0x065:  mov    %edx,0x4(%esi)
087e6088 +0x068:  jl     087e6206 <+0x1e6>
087e608e +0x06e:  cmp    $0xffffffff,%edx
087e6091 +0x071:  jl     087e61e2 <+0x1c2>
087e6097 +0x077:  test   %ecx,%ecx
087e6099 +0x079:  mov    %ecx,0x8(%esi)
087e609c +0x07c:  je     087e61be <+0x19e>
087e60a2 +0x082:  lea    0x0(%esi),%esi
087e60a8 +0x088:  add    $0x3c,%esp
087e60ab +0x08b:  pop    %ebx
087e60ac +0x08c:  pop    %esi
087e60ad +0x08d:  pop    %edi
087e60ae +0x08e:  pop    %ebp
087e60af +0x08f:  ret
087e60b0 +0x090:  mov    %edx,%eax
087e60b2 +0x092:  add    $0x1,%ecx
087e60b5 +0x095:  sar    $0x1f,%edx
087e60b8 +0x098:  idivl  -0x1c(%ebp)
087e60bb +0x09b:  lea    0x1(%eax),%edx
087e60be +0x09e:  imul   -0x1c(%ebp),%edx
087e60c2 +0x0a2:  jmp    087e6051 <+0x31>
087e60c4 +0x0a4:  lea    0x0(%esi,%eiz,1),%esi
087e60c8 +0x0a8:  cmp    $0xd,%al
087e60ca +0x0aa:  je     087e6108 <+0xe8>
087e60cc +0x0ac:  cmp    $0xef,%al
087e60ce +0x0ae:  jne    087e606a <+0x4a>
087e60d0 +0x0b0:  cmpl   $0x1,0x10(%ebp)
087e60d4 +0x0b4:  jne    087e6076 <+0x56>
087e60d6 +0x0b6:  cmpb   $0x0,0x1(%ecx)
087e60da +0x0ba:  je     087e6051 <+0x31>
087e60e0 +0x0c0:  cmpb   $0x0,0x2(%ecx)
087e60e4 +0x0c4:  je     087e6051 <+0x31>
087e60ea +0x0ca:  movzbl 0x1(%ecx),%eax
087e60ee +0x0ce:  cmp    $0xbb,%al
087e60f0 +0x0d0:  je     087e615a <+0x13a>
087e60f2 +0x0d2:  cmp    $0xbf,%al
087e60f4 +0x0d4:  je     087e6168 <+0x148>
087e60f6 +0x0d6:  add    $0x3,%ecx
087e60f9 +0x0d9:  add    $0x1,%edx
087e60fc +0x0dc:  jmp    087e6051 <+0x31>
087e6101 +0x0e1:  lea    0x0(%esi,%eiz,1),%esi
087e6108 +0x0e8:  add    $0x1,%ecx
087e610b +0x0eb:  add    $0x1,%edi
087e610e +0x0ee:  cmpb   $0xa,(%ecx)
087e6111 +0x0f1:  je     087e612b <+0x10b>
087e6113 +0x0f3:  xor    %edx,%edx
087e6115 +0x0f5:  jmp    087e6051 <+0x31>
087e611a +0x0fa:  lea    0x0(%esi),%esi
087e6120 +0x100:  add    $0x1,%ecx
087e6123 +0x103:  add    $0x1,%edi
087e6126 +0x106:  cmpb   $0xd,(%ecx)
087e6129 +0x109:  jne    087e6113 <+0xf3>
087e612b +0x10b:  add    $0x1,%ecx
087e612e +0x10e:  xor    %edx,%edx
087e6130 +0x110:  jmp    087e6051 <+0x31>
087e6135 +0x115:  lea    0x0(%esi),%esi
087e6138 +0x118:  movzbl %al,%eax
087e613b +0x11b:  mov    &_ZN9TiXmlBase13utf8ByteTableE(,%eax,4),%eax
087e6142 +0x122:  test   %eax,%eax
087e6144 +0x124:  mov    %eax,-0x2c(%ebp)
087e6147 +0x127:  mov    $0x1,%eax
087e614c +0x12c:  cmovne -0x2c(%ebp),%eax
087e6150 +0x130:  add    $0x1,%edx
087e6153 +0x133:  add    %eax,%ecx
087e6155 +0x135:  jmp    087e6051 <+0x31>
087e615a +0x13a:  cmpb   $0xbf,0x2(%ecx)
087e615e +0x13e:  jne    087e60f6 <+0xd6>
087e6160 +0x140:  add    $0x3,%ecx
087e6163 +0x143:  jmp    087e6051 <+0x31>
087e6168 +0x148:  movzbl 0x2(%ecx),%eax
087e616c +0x14c:  cmp    $0xbe,%al
087e616e +0x14e:  je     087e6160 <+0x140>
087e6170 +0x150:  cmp    $0xbf,%al
087e6172 +0x152:  jne    087e60f6 <+0xd6>
087e6174 +0x154:  jmp    087e6160 <+0x140>
087e6176 +0x156:  movl   $&_ZZN16TiXmlParsingData5StampEPKc13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e617e +0x15e:  movl   $0xd2,0x8(%esp)
087e6186 +0x166:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e618e +0x16e:  movl   $"p",(%esp)
087e6195 +0x175:  call   0807dc50 <_init+0x548>
087e619a +0x17a:  movl   $&_ZZN16TiXmlParsingData5StampEPKc13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e61a2 +0x182:  movl   $0xc6,0x8(%esp)
087e61aa +0x18a:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e61b2 +0x192:  movl   $"now",(%esp)
087e61b9 +0x199:  call   0807dc50 <_init+0x548>
087e61be +0x19e:  movl   $&_ZZN16TiXmlParsingData5StampEPKc13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e61c6 +0x1a6:  movl   $0x136,0x8(%esp)
087e61ce +0x1ae:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e61d6 +0x1b6:  movl   $"stamp",(%esp)
087e61dd +0x1bd:  call   0807dc50 <_init+0x548>
087e61e2 +0x1c2:  movl   $&_ZZN16TiXmlParsingData5StampEPKc13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e61ea +0x1ca:  movl   $0x134,0x8(%esp)
087e61f2 +0x1d2:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e61fa +0x1da:  movl   $"cursor.col >= -1",(%esp)
087e6201 +0x1e1:  call   0807dc50 <_init+0x548>
087e6206 +0x1e6:  movl   $&_ZZN16TiXmlParsingData5StampEPKc13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e620e +0x1ee:  movl   $0x133,0x8(%esp)
087e6216 +0x1f6:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e621e +0x1fe:  movl   $"cursor.row >= -1",(%esp)
087e6225 +0x205:  call   0807dc50 <_init+0x548>
087e622a +0x20a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlParsingData::Stamp @ 0x87e6020

/* TiXmlParsingData::Stamp(char const*, TiXmlEncoding) */

void __thiscall TiXmlParsingData::Stamp(TiXmlParsingData *this,byte *param_1,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("now","tinyxmlparser.cpp",0xc6,
                  "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
  }
  iVar2 = *(int *)(this + 0xc);
  if (0 < iVar2) {
    pbVar4 = *(byte **)(this + 8);
    iVar6 = *(int *)this;
    iVar5 = *(int *)(this + 4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("p","tinyxmlparser.cpp",0xd2,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
LAB_087e6051:
    if (pbVar4 < param_1) {
      while (bVar1 = *pbVar4, bVar1 != 10) {
        if (bVar1 < 0xb) {
          if (bVar1 == 0) {
            return;
          }
          if (bVar1 == 9) {
            pbVar4 = pbVar4 + 1;
            iVar5 = (iVar5 / iVar2 + 1) * iVar2;
            goto LAB_087e6051;
          }
LAB_087e606a:
          if (param_3 == 1) {
            iVar3 = 1;
            if (*(int *)(TiXmlBase::utf8ByteTable + (uint)bVar1 * 4) != 0) {
              iVar3 = *(int *)(TiXmlBase::utf8ByteTable + (uint)bVar1 * 4);
            }
            iVar5 = iVar5 + 1;
            pbVar4 = pbVar4 + iVar3;
            goto LAB_087e6051;
          }
        }
        else {
          if (bVar1 == 0xd) {
            if (pbVar4[1] != 10) goto LAB_087e6113;
            goto LAB_087e612b;
          }
          if (bVar1 != 0xef) goto LAB_087e606a;
          if (param_3 == 1) {
            if ((pbVar4[1] == 0) || (pbVar4[2] == 0)) goto LAB_087e6051;
            if (pbVar4[1] == 0xbb) {
              bVar1 = pbVar4[2];
joined_r0x087e615e:
              if (bVar1 == 0xbf) {
LAB_087e6160:
                pbVar4 = pbVar4 + 3;
                goto LAB_087e6051;
              }
            }
            else if (pbVar4[1] == 0xbf) {
              bVar1 = pbVar4[2];
              if (bVar1 != 0xbe) goto joined_r0x087e615e;
              goto LAB_087e6160;
            }
            pbVar4 = pbVar4 + 3;
            iVar5 = iVar5 + 1;
            goto LAB_087e6051;
          }
        }
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + 1;
        if (param_1 <= pbVar4) goto LAB_087e6080;
      }
      if (pbVar4[1] == 0xd) {
LAB_087e612b:
        iVar6 = iVar6 + 1;
        pbVar4 = pbVar4 + 2;
        iVar5 = 0;
      }
      else {
LAB_087e6113:
        iVar6 = iVar6 + 1;
        pbVar4 = pbVar4 + 1;
        iVar5 = 0;
      }
      goto LAB_087e6051;
    }
LAB_087e6080:
    *(int *)this = iVar6;
    *(int *)(this + 4) = iVar5;
    if (iVar6 < -1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cursor.row >= -1","tinyxmlparser.cpp",0x133,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
    if (iVar5 < -1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cursor.col >= -1","tinyxmlparser.cpp",0x134,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
    *(byte **)(this + 8) = pbVar4;
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("stamp","tinyxmlparser.cpp",0x136,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
  }
  return;
}
```

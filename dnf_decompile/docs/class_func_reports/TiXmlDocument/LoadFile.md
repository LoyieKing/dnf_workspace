# LoadFile

`_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding`

`TiXmlDocument::LoadFile(_IO_FILE*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e16c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e16c0  _ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding
#           TiXmlDocument::LoadFile(_IO_FILE*, TiXmlEncoding)
# range [0x087e16c0, 0x087e191a]
087e16c0 +0x000:  push   %ebp
087e16c1 +0x001:  mov    %esp,%ebp
087e16c3 +0x003:  push   %edi
087e16c4 +0x004:  push   %esi
087e16c5 +0x005:  push   %ebx
087e16c6 +0x006:  sub    $0x3c,%esp
087e16c9 +0x009:  mov    0xc(%ebp),%esi
087e16cc +0x00c:  mov    0x8(%ebp),%ebx
087e16cf +0x00f:  test   %esi,%esi
087e16d1 +0x011:  je     087e178e <+0xce>
087e16d7 +0x017:  mov    0x18(%ebx),%eax
087e16da +0x01a:  test   %eax,%eax
087e16dc +0x01c:  jne    087e16e2 <+0x22>
087e16de +0x01e:  jmp    087e16f1 <+0x31>
087e16e0 +0x020:  mov    %edi,%eax
087e16e2 +0x022:  mov    0x28(%eax),%edi
087e16e5 +0x025:  mov    (%eax),%edx
087e16e7 +0x027:  mov    %eax,(%esp)
087e16ea +0x02a:  call   *0x4(%edx)
087e16ed +0x02d:  test   %edi,%edi
087e16ef +0x02f:  jne    087e16e0 <+0x20>
087e16f1 +0x031:  movl   $0x0,0x18(%ebx)
087e16f8 +0x038:  movl   $0x0,0x1c(%ebx)
087e16ff +0x03f:  movl   $0xffffffff,0x8(%ebx)
087e1706 +0x046:  movl   $0xffffffff,0x4(%ebx)
087e170d +0x04d:  movl   $0x2,0x8(%esp)
087e1715 +0x055:  movl   $0x0,0x4(%esp)
087e171d +0x05d:  mov    %esi,(%esp)
087e1720 +0x060:  call   0807e0b0 <_init+0x9a8>
087e1725 +0x065:  mov    %esi,(%esp)
087e1728 +0x068:  call   0807d9d0 <_init+0x2c8>
087e172d +0x06d:  movl   $0x0,0x8(%esp)
087e1735 +0x075:  movl   $0x0,0x4(%esp)
087e173d +0x07d:  mov    %esi,(%esp)
087e1740 +0x080:  mov    %eax,-0x1c(%ebp)
087e1743 +0x083:  call   0807e0b0 <_init+0x9a8>
087e1748 +0x088:  mov    -0x1c(%ebp),%ecx
087e174b +0x08b:  test   %ecx,%ecx
087e174d +0x08d:  jle    087e1858 <+0x198>
087e1753 +0x093:  mov    -0x1c(%ebp),%eax
087e1756 +0x096:  add    $0x1,%eax
087e1759 +0x099:  mov    %eax,(%esp)
087e175c +0x09c:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
087e1761 +0x0a1:  movb   $0x0,(%eax)
087e1764 +0x0a4:  mov    %eax,%edi
087e1766 +0x0a6:  mov    -0x1c(%ebp),%eax
087e1769 +0x0a9:  mov    %esi,0xc(%esp)
087e176d +0x0ad:  movl   $0x1,0x8(%esp)
087e1775 +0x0b5:  mov    %edi,(%esp)
087e1778 +0x0b8:  mov    %eax,0x4(%esp)
087e177c +0x0bc:  call   0807dd50 <_init+0x648>
087e1781 +0x0c1:  cmp    $0x1,%eax
087e1784 +0x0c4:  je     087e17c0 <+0x100>
087e1786 +0x0c6:  mov    %edi,(%esp)
087e1789 +0x0c9:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
087e178e +0x0ce:  mov    %ebx,(%esp)
087e1791 +0x0d1:  movl   $0x0,0x10(%esp)
087e1799 +0x0d9:  movl   $0x0,0xc(%esp)
087e17a1 +0x0e1:  movl   $0x0,0x8(%esp)
087e17a9 +0x0e9:  movl   $0x2,0x4(%esp)
087e17b1 +0x0f1:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e17b6 +0x0f6:  add    $0x3c,%esp
087e17b9 +0x0f9:  xor    %eax,%eax
087e17bb +0x0fb:  pop    %ebx
087e17bc +0x0fc:  pop    %esi
087e17bd +0x0fd:  pop    %edi
087e17be +0x0fe:  pop    %ebp
087e17bf +0x0ff:  ret
087e17c0 +0x100:  mov    -0x1c(%ebp),%esi
087e17c3 +0x103:  mov    %edi,%edx
087e17c5 +0x105:  mov    %edi,%eax
087e17c7 +0x107:  lea    (%edi,%esi,1),%esi
087e17ca +0x10a:  movb   $0x0,(%esi)
087e17cd +0x10d:  movzbl (%edi),%ecx
087e17d0 +0x110:  jmp    087e17e3 <+0x123>
087e17d2 +0x112:  lea    0x0(%esi),%esi
087e17d8 +0x118:  mov    %cl,(%edx)
087e17da +0x11a:  add    $0x1,%eax
087e17dd +0x11d:  movzbl (%eax),%ecx
087e17e0 +0x120:  add    $0x1,%edx
087e17e3 +0x123:  test   %cl,%cl
087e17e5 +0x125:  je     087e1818 <+0x158>
087e17e7 +0x127:  cmp    %esi,%eax
087e17e9 +0x129:  jae    087e18ae <+0x1ee>
087e17ef +0x12f:  cmp    %edx,%esi
087e17f1 +0x131:  jb     087e18d2 <+0x212>
087e17f7 +0x137:  cmp    %edx,%eax
087e17f9 +0x139:  jb     087e188a <+0x1ca>
087e17ff +0x13f:  cmp    $0xd,%cl
087e1802 +0x142:  jne    087e17d8 <+0x118>
087e1804 +0x144:  add    $0x1,%eax
087e1807 +0x147:  movb   $0xa,(%edx)
087e180a +0x14a:  movzbl (%eax),%ecx
087e180d +0x14d:  cmp    $0xa,%cl
087e1810 +0x150:  jne    087e17e0 <+0x120>
087e1812 +0x152:  jmp    087e17da <+0x11a>
087e1814 +0x154:  lea    0x0(%esi,%eiz,1),%esi
087e1818 +0x158:  cmp    %edx,%esi
087e181a +0x15a:  jb     087e18f6 <+0x236>
087e1820 +0x160:  movb   $0x0,(%edx)
087e1823 +0x163:  mov    (%ebx),%eax
087e1825 +0x165:  mov    0x10(%ebp),%edx
087e1828 +0x168:  mov    %edi,0x4(%esp)
087e182c +0x16c:  mov    %ebx,(%esp)
087e182f +0x16f:  movl   $0x0,0x8(%esp)
087e1837 +0x177:  mov    %edx,0xc(%esp)
087e183b +0x17b:  call   *0xc(%eax)
087e183e +0x17e:  mov    %edi,(%esp)
087e1841 +0x181:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
087e1846 +0x186:  movzbl 0x2c(%ebx),%eax
087e184a +0x18a:  add    $0x3c,%esp
087e184d +0x18d:  pop    %ebx
087e184e +0x18e:  pop    %esi
087e184f +0x18f:  pop    %edi
087e1850 +0x190:  xor    $0x1,%eax
087e1853 +0x193:  pop    %ebp
087e1854 +0x194:  ret
087e1855 +0x195:  lea    0x0(%esi),%esi
087e1858 +0x198:  mov    %ebx,(%esp)
087e185b +0x19b:  movl   $0x0,0x10(%esp)
087e1863 +0x1a3:  movl   $0x0,0xc(%esp)
087e186b +0x1ab:  movl   $0x0,0x8(%esp)
087e1873 +0x1b3:  movl   $0xc,0x4(%esp)
087e187b +0x1bb:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e1880 +0x1c0:  add    $0x3c,%esp
087e1883 +0x1c3:  xor    %eax,%eax
087e1885 +0x1c5:  pop    %ebx
087e1886 +0x1c6:  pop    %esi
087e1887 +0x1c7:  pop    %edi
087e1888 +0x1c8:  pop    %ebp
087e1889 +0x1c9:  ret
087e188a +0x1ca:  movl   $&_ZZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e1892 +0x1d2:  movl   $0x425,0x8(%esp)
087e189a +0x1da:  movl   $"tinyxml.cpp",0x4(%esp)
087e18a2 +0x1e2:  movl   $"q <= p",(%esp)
087e18a9 +0x1e9:  call   0807dc50 <_init+0x548>
087e18ae +0x1ee:  movl   $&_ZZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e18b6 +0x1f6:  movl   $0x423,0x8(%esp)
087e18be +0x1fe:  movl   $"tinyxml.cpp",0x4(%esp)
087e18c6 +0x206:  movl   $"p < (buf+length)",(%esp)
087e18cd +0x20d:  call   0807dc50 <_init+0x548>
087e18d2 +0x212:  movl   $&_ZZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e18da +0x21a:  movl   $0x424,0x8(%esp)
087e18e2 +0x222:  movl   $"tinyxml.cpp",0x4(%esp)
087e18ea +0x22a:  movl   $"q <= (buf+length)",(%esp)
087e18f1 +0x231:  call   0807dc50 <_init+0x548>
087e18f6 +0x236:  movl   $&_ZZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e18fe +0x23e:  movl   $0x432,0x8(%esp)
087e1906 +0x246:  movl   $"tinyxml.cpp",0x4(%esp)
087e190e +0x24e:  movl   $"q <= (buf+length)",(%esp)
087e1915 +0x255:  call   0807dc50 <_init+0x548>
087e191a +0x25a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlDocument::LoadFile @ 0x87e16c0

/* TiXmlDocument::LoadFile(_IO_FILE*, TiXmlEncoding) */

byte __thiscall TiXmlDocument::LoadFile(TiXmlDocument *this,FILE *param_1,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  size_t __size;
  char *__ptr;
  size_t sVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  
  if (param_1 != (FILE *)0x0) {
    piVar3 = *(int **)(this + 0x18);
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[10];
      (**(code **)(*piVar3 + 4))(piVar3);
      piVar3 = piVar2;
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 8) = 0xffffffff;
    *(undefined4 *)(this + 4) = 0xffffffff;
    fseek(param_1,0,2);
    __size = ftell(param_1);
    fseek(param_1,0,0);
    if ((int)__size < 1) {
      SetError(this,0xc,0,0,0);
      return 0;
    }
    __ptr = operator_new__(__size + 1);
    *__ptr = '\0';
    sVar4 = fread(__ptr,__size,1,param_1);
    if (sVar4 == 1) {
      pcVar1 = __ptr + __size;
      *pcVar1 = '\0';
      cVar6 = *__ptr;
      pcVar5 = __ptr;
      pcVar7 = __ptr;
      do {
        if (cVar6 == '\0') {
          if (pcVar7 <= pcVar1) {
            *pcVar7 = '\0';
            (**(code **)(*(int *)this + 0xc))(this,__ptr,0,param_3);
            operator_delete__(__ptr);
            return (byte)this[0x2c] ^ 1;
          }
                    /* WARNING: Subroutine does not return */
          __assert_fail("q <= (buf+length)","tinyxml.cpp",0x432,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (pcVar1 <= pcVar5) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("p < (buf+length)","tinyxml.cpp",0x423,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (pcVar1 < pcVar7) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("q <= (buf+length)","tinyxml.cpp",0x424,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (pcVar5 < pcVar7) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("q <= p","tinyxml.cpp",0x425,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (cVar6 == '\r') {
          pcVar5 = pcVar5 + 1;
          *pcVar7 = '\n';
          cVar6 = *pcVar5;
          if (cVar6 == '\n') goto LAB_087e17da;
        }
        else {
          *pcVar7 = cVar6;
LAB_087e17da:
          pcVar5 = pcVar5 + 1;
          cVar6 = *pcVar5;
        }
        pcVar7 = pcVar7 + 1;
      } while( true );
    }
    operator_delete__(__ptr);
  }
  SetError(this,2,0,0,0);
  return 0;
}
```

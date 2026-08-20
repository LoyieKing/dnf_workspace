# GetEntity

`_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding`

`TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e6560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6560  _ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding
#           TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding)
# range [0x087e6560, 0x087e684b]
087e6560 +0x000:  push   %ebp
087e6561 +0x001:  mov    %esp,%ebp
087e6563 +0x003:  push   %edi
087e6564 +0x004:  push   %esi
087e6565 +0x005:  push   %ebx
087e6566 +0x006:  sub    $0x4c,%esp
087e6569 +0x009:  mov    0x8(%ebp),%ebx
087e656c +0x00c:  mov    0x10(%ebp),%eax
087e656f +0x00f:  lea    0x1(%ebx),%edx
087e6572 +0x012:  movl   $0x0,(%eax)
087e6578 +0x018:  mov    %edx,-0x2c(%ebp)
087e657b +0x01b:  cmpb   $0x23,0x1(%ebx)
087e657f +0x01f:  je     087e66a8 <+0x148>
087e6585 +0x025:  mov    &_ZN9TiXmlBase6entityE+0x4,%esi
087e658b +0x02b:  mov    &_ZN9TiXmlBase6entityE,%edi
087e6591 +0x031:  mov    %ebx,0x4(%esp)
087e6595 +0x035:  mov    %esi,0x8(%esp)
087e6599 +0x039:  mov    %edi,(%esp)
087e659c +0x03c:  call   0807e8c0 <_init+0x11b8>
087e65a1 +0x041:  xor    %edx,%edx
087e65a3 +0x043:  test   %eax,%eax
087e65a5 +0x045:  je     087e6660 <+0x100>
087e65ab +0x04b:  mov    &_ZN9TiXmlBase6entityE+0x10,%esi
087e65b1 +0x051:  mov    &_ZN9TiXmlBase6entityE+0xc,%edi
087e65b7 +0x057:  mov    %ebx,0x4(%esp)
087e65bb +0x05b:  mov    %esi,0x8(%esp)
087e65bf +0x05f:  mov    %edi,(%esp)
087e65c2 +0x062:  call   0807e8c0 <_init+0x11b8>
087e65c7 +0x067:  mov    $0x1,%edx
087e65cc +0x06c:  test   %eax,%eax
087e65ce +0x06e:  je     087e6660 <+0x100>
087e65d4 +0x074:  mov    &_ZN9TiXmlBase6entityE+0x1c,%esi
087e65da +0x07a:  mov    &_ZN9TiXmlBase6entityE+0x18,%edi
087e65e0 +0x080:  mov    %ebx,0x4(%esp)
087e65e4 +0x084:  mov    %esi,0x8(%esp)
087e65e8 +0x088:  mov    %edi,(%esp)
087e65eb +0x08b:  call   0807e8c0 <_init+0x11b8>
087e65f0 +0x090:  mov    $0x2,%edx
087e65f5 +0x095:  test   %eax,%eax
087e65f7 +0x097:  je     087e6660 <+0x100>
087e65f9 +0x099:  mov    &_ZN9TiXmlBase6entityE+0x28,%esi
087e65ff +0x09f:  mov    &_ZN9TiXmlBase6entityE+0x24,%edi
087e6605 +0x0a5:  mov    %ebx,0x4(%esp)
087e6609 +0x0a9:  mov    %esi,0x8(%esp)
087e660d +0x0ad:  mov    %edi,(%esp)
087e6610 +0x0b0:  call   0807e8c0 <_init+0x11b8>
087e6615 +0x0b5:  mov    $0x3,%edx
087e661a +0x0ba:  test   %eax,%eax
087e661c +0x0bc:  je     087e6660 <+0x100>
087e661e +0x0be:  mov    &_ZN9TiXmlBase6entityE+0x34,%esi
087e6624 +0x0c4:  mov    &_ZN9TiXmlBase6entityE+0x30,%edi
087e662a +0x0ca:  mov    %ebx,0x4(%esp)
087e662e +0x0ce:  mov    %esi,0x8(%esp)
087e6632 +0x0d2:  mov    %edi,(%esp)
087e6635 +0x0d5:  call   0807e8c0 <_init+0x11b8>
087e663a +0x0da:  test   %eax,%eax
087e663c +0x0dc:  je     087e6658 <+0xf8>
087e663e +0x0de:  movzbl (%ebx),%eax
087e6641 +0x0e1:  mov    0xc(%ebp),%ecx
087e6644 +0x0e4:  mov    %al,(%ecx)
087e6646 +0x0e6:  mov    -0x2c(%ebp),%eax
087e6649 +0x0e9:  add    $0x4c,%esp
087e664c +0x0ec:  pop    %ebx
087e664d +0x0ed:  pop    %esi
087e664e +0x0ee:  pop    %edi
087e664f +0x0ef:  pop    %ebp
087e6650 +0x0f0:  ret
087e6651 +0x0f1:  lea    0x0(%esi,%eiz,1),%esi
087e6658 +0x0f8:  mov    $0x4,%edx
087e665d +0x0fd:  lea    0x0(%esi),%esi
087e6660 +0x100:  mov    %edi,(%esp)
087e6663 +0x103:  mov    %edx,-0x30(%ebp)
087e6666 +0x106:  call   0807e3b0 <_init+0xca8>
087e666b +0x10b:  mov    -0x30(%ebp),%edx
087e666e +0x10e:  cmp    %esi,%eax
087e6670 +0x110:  jne    087e6811 <+0x2b1>
087e6676 +0x116:  lea    (%edx,%edx,2),%eax
087e6679 +0x119:  mov    0xc(%ebp),%ecx
087e667c +0x11c:  movzbl &_ZN9TiXmlBase6entityE+0x8(,%eax,4),%edx
087e6684 +0x124:  mov    %dl,(%ecx)
087e6686 +0x126:  mov    0x10(%ebp),%edx
087e6689 +0x129:  movl   $0x1,(%edx)
087e668f +0x12f:  add    &_ZN9TiXmlBase6entityE+0x4(,%eax,4),%ebx
087e6696 +0x136:  mov    %ebx,-0x2c(%ebp)
087e6699 +0x139:  mov    %ebx,%eax
087e669b +0x13b:  add    $0x4c,%esp
087e669e +0x13e:  pop    %ebx
087e669f +0x13f:  pop    %esi
087e66a0 +0x140:  pop    %edi
087e66a1 +0x141:  pop    %ebp
087e66a2 +0x142:  ret
087e66a3 +0x143:  nop
087e66a4 +0x144:  lea    0x0(%esi,%eiz,1),%esi
087e66a8 +0x148:  movzbl 0x2(%ebx),%eax
087e66ac +0x14c:  lea    0x2(%ebx),%edx
087e66af +0x14f:  test   %al,%al
087e66b1 +0x151:  je     087e6585 <+0x25>
087e66b7 +0x157:  cmp    $0x78,%al
087e66b9 +0x159:  je     087e6760 <+0x200>
087e66bf +0x15f:  movl   $0x3b,0x4(%esp)
087e66c7 +0x167:  mov    %edx,(%esp)
087e66ca +0x16a:  call   0807e580 <_init+0xe78>
087e66cf +0x16f:  test   %eax,%eax
087e66d1 +0x171:  jne    087e66e2 <+0x182>
087e66d3 +0x173:  movl   $0x0,-0x2c(%ebp)
087e66da +0x17a:  mov    -0x2c(%ebp),%eax
087e66dd +0x17d:  jmp    087e6649 <+0xe9>
087e66e2 +0x182:  cmpb   $0x0,(%eax)
087e66e5 +0x185:  je     087e66d3 <+0x173>
087e66e7 +0x187:  mov    %eax,%edx
087e66e9 +0x189:  sub    %ebx,%edx
087e66eb +0x18b:  mov    %edx,-0x2c(%ebp)
087e66ee +0x18e:  movzbl -0x1(%eax),%edx
087e66f2 +0x192:  lea    -0x1(%eax),%esi
087e66f5 +0x195:  cmp    $0x23,%dl
087e66f8 +0x198:  je     087e680a <+0x2aa>
087e66fe +0x19e:  lea    -0x30(%edx),%eax
087e6701 +0x1a1:  cmp    $0x9,%al
087e6703 +0x1a3:  ja     087e66d3 <+0x173>
087e6705 +0x1a5:  mov    $0x1,%ecx
087e670a +0x1aa:  xor    %eax,%eax
087e670c +0x1ac:  mov    %ebx,%edi
087e670e +0x1ae:  jmp    087e6718 <+0x1b8>
087e6710 +0x1b0:  lea    -0x30(%edx),%ebx
087e6713 +0x1b3:  cmp    $0x9,%bl
087e6716 +0x1b6:  ja     087e66d3 <+0x173>
087e6718 +0x1b8:  movsbl %dl,%edx
087e671b +0x1bb:  sub    $0x1,%esi
087e671e +0x1be:  sub    $0x30,%edx
087e6721 +0x1c1:  imul   %ecx,%edx
087e6724 +0x1c4:  lea    (%ecx,%ecx,4),%ecx
087e6727 +0x1c7:  add    %ecx,%ecx
087e6729 +0x1c9:  add    %edx,%eax
087e672b +0x1cb:  movzbl (%esi),%edx
087e672e +0x1ce:  cmp    $0x23,%dl
087e6731 +0x1d1:  jne    087e6710 <+0x1b0>
087e6733 +0x1d3:  mov    %edi,%ebx
087e6735 +0x1d5:  cmpl   $0x1,0x14(%ebp)
087e6739 +0x1d9:  je     087e6835 <+0x2d5>
087e673f +0x1df:  mov    0xc(%ebp),%ecx
087e6742 +0x1e2:  mov    %al,(%ecx)
087e6744 +0x1e4:  mov    0x10(%ebp),%eax
087e6747 +0x1e7:  movl   $0x1,(%eax)
087e674d +0x1ed:  mov    -0x2c(%ebp),%edx
087e6750 +0x1f0:  lea    0x1(%ebx,%edx,1),%ebx
087e6754 +0x1f4:  mov    %ebx,-0x2c(%ebp)
087e6757 +0x1f7:  mov    %ebx,%eax
087e6759 +0x1f9:  jmp    087e6649 <+0xe9>
087e675e +0x1fe:  xchg   %ax,%ax
087e6760 +0x200:  cmpb   $0x0,0x3(%ebx)
087e6764 +0x204:  lea    0x3(%ebx),%eax
087e6767 +0x207:  je     087e66d3 <+0x173>
087e676d +0x20d:  movl   $0x3b,0x4(%esp)
087e6775 +0x215:  mov    %eax,(%esp)
087e6778 +0x218:  call   0807e580 <_init+0xe78>
087e677d +0x21d:  test   %eax,%eax
087e677f +0x21f:  je     087e66d3 <+0x173>
087e6785 +0x225:  cmpb   $0x0,(%eax)
087e6788 +0x228:  je     087e66d3 <+0x173>
087e678e +0x22e:  mov    %eax,%ecx
087e6790 +0x230:  sub    %ebx,%ecx
087e6792 +0x232:  mov    %ecx,-0x2c(%ebp)
087e6795 +0x235:  movzbl -0x1(%eax),%edx
087e6799 +0x239:  lea    -0x1(%eax),%esi
087e679c +0x23c:  cmp    $0x78,%dl
087e679f +0x23f:  je     087e680a <+0x2aa>
087e67a1 +0x241:  mov    $0x1,%ecx
087e67a6 +0x246:  xor    %eax,%eax
087e67a8 +0x248:  mov    %ebx,-0x3c(%ebp)
087e67ab +0x24b:  jmp    087e67c6 <+0x266>
087e67ad +0x24d:  movsbl %dl,%edx
087e67b0 +0x250:  sub    $0x30,%edx
087e67b3 +0x253:  imul   %ecx,%edx
087e67b6 +0x256:  add    %edx,%eax
087e67b8 +0x258:  sub    $0x1,%esi
087e67bb +0x25b:  movzbl (%esi),%edx
087e67be +0x25e:  cmp    $0x78,%dl
087e67c1 +0x261:  je     087e67e7 <+0x287>
087e67c3 +0x263:  shl    $0x4,%ecx
087e67c6 +0x266:  lea    -0x30(%edx),%edi
087e67c9 +0x269:  mov    %edi,%ebx
087e67cb +0x26b:  cmp    $0x9,%bl
087e67ce +0x26e:  jbe    087e67ad <+0x24d>
087e67d0 +0x270:  lea    -0x61(%edx),%edi
087e67d3 +0x273:  mov    %edi,%ebx
087e67d5 +0x275:  cmp    $0x5,%bl
087e67d8 +0x278:  ja     087e67ef <+0x28f>
087e67da +0x27a:  movsbl %dl,%edx
087e67dd +0x27d:  sub    $0x57,%edx
087e67e0 +0x280:  imul   %ecx,%edx
087e67e3 +0x283:  add    %edx,%eax
087e67e5 +0x285:  jmp    087e67b8 <+0x258>
087e67e7 +0x287:  mov    -0x3c(%ebp),%ebx
087e67ea +0x28a:  jmp    087e6735 <+0x1d5>
087e67ef +0x28f:  lea    -0x41(%edx),%edi
087e67f2 +0x292:  mov    %edi,%ebx
087e67f4 +0x294:  cmp    $0x5,%bl
087e67f7 +0x297:  ja     087e66d3 <+0x173>
087e67fd +0x29d:  movsbl %dl,%edx
087e6800 +0x2a0:  sub    $0x37,%edx
087e6803 +0x2a3:  imul   %ecx,%edx
087e6806 +0x2a6:  add    %edx,%eax
087e6808 +0x2a8:  jmp    087e67b8 <+0x258>
087e680a +0x2aa:  xor    %eax,%eax
087e680c +0x2ac:  jmp    087e6735 <+0x1d5>
087e6811 +0x2b1:  movl   $&_ZZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e6819 +0x2b9:  movl   $0x207,0x8(%esp)
087e6821 +0x2c1:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e6829 +0x2c9:  movl   $"strlen( entity[i].str ) == entity[i].strLength",(%esp)
087e6830 +0x2d0:  call   0807dc50 <_init+0x548>
087e6835 +0x2d5:  mov    0x10(%ebp),%ecx
087e6838 +0x2d8:  mov    0xc(%ebp),%edx
087e683b +0x2db:  mov    %eax,(%esp)
087e683e +0x2de:  mov    %ecx,0x8(%esp)
087e6842 +0x2e2:  mov    %edx,0x4(%esp)
087e6846 +0x2e6:  call   087e5ef0 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi>  ; TiXmlBase::ConvertUTF32ToUTF8(unsigned long, char*, int*)
087e684b +0x2eb:  jmp    087e674d <+0x1ed>
```

## 反编译 C

```c
// TiXmlBase::GetEntity @ 0x87e6560

/* TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding) */

char * TiXmlBase::GetEntity(char *param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  size_t sVar10;
  int local_30;
  
  *param_3 = 0;
  sVar10 = DAT_093f3784;
  pcVar7 = entity;
  if (param_1[1] != '#') {
LAB_087e6585:
    iVar5 = strncmp(entity,param_1,DAT_093f3784);
    sVar6 = DAT_093f3790;
    puVar2 = PTR_DAT_093f378c;
    iVar9 = 0;
    if (iVar5 != 0) {
      iVar5 = strncmp(PTR_DAT_093f378c,param_1,DAT_093f3790);
      sVar4 = DAT_093f379c;
      puVar3 = PTR_DAT_093f3798;
      iVar9 = 1;
      sVar10 = sVar6;
      pcVar7 = puVar2;
      if (iVar5 != 0) {
        iVar5 = strncmp(PTR_DAT_093f3798,param_1,DAT_093f379c);
        sVar6 = DAT_093f37a8;
        puVar2 = PTR_s__quot__093f37a4;
        iVar9 = 2;
        sVar10 = sVar4;
        pcVar7 = puVar3;
        if (iVar5 != 0) {
          iVar5 = strncmp(PTR_s__quot__093f37a4,param_1,DAT_093f37a8);
          sVar4 = DAT_093f37b4;
          puVar3 = PTR_s__apos__093f37b0;
          iVar9 = 3;
          sVar10 = sVar6;
          pcVar7 = puVar2;
          if (iVar5 != 0) {
            iVar5 = strncmp(PTR_s__apos__093f37b0,param_1,DAT_093f37b4);
            if (iVar5 != 0) {
              *param_2 = *param_1;
              return param_1 + 1;
            }
            iVar9 = 4;
            sVar10 = sVar4;
            pcVar7 = puVar3;
          }
        }
      }
    }
    sVar6 = strlen(pcVar7);
    if (sVar6 != sVar10) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("strlen( entity[i].str ) == entity[i].strLength","tinyxmlparser.cpp",0x207,
                    "static const char* TiXmlBase::GetEntity(const char*, char*, int*, TiXmlEncoding)"
                   );
    }
    *param_2 = *(char *)(iVar9 * 0xc + 0x93f3788);
    *param_3 = 1;
    return param_1 + (&DAT_093f3784)[iVar9 * 3];
  }
  if (param_1[2] == '\0') goto LAB_087e6585;
  if (param_1[2] == 'x') {
    if (param_1[3] == '\0') {
      return (char *)0x0;
    }
    pcVar7 = strchr(param_1 + 3,0x3b);
    if (pcVar7 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar7 == '\0') {
      return (char *)0x0;
    }
    local_30 = (int)pcVar7 - (int)param_1;
    cVar1 = pcVar7[-1];
    pcVar7 = pcVar7 + -1;
    if (cVar1 != 'x') {
      iVar5 = 1;
      uVar8 = 0;
      while( true ) {
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar8 = uVar8 + (cVar1 + -0x30) * iVar5;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          uVar8 = uVar8 + (cVar1 + -0x57) * iVar5;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) {
            return (char *)0x0;
          }
          uVar8 = uVar8 + (cVar1 + -0x37) * iVar5;
        }
        pcVar7 = pcVar7 + -1;
        cVar1 = *pcVar7;
        if (cVar1 == 'x') break;
        iVar5 = iVar5 << 4;
      }
      goto LAB_087e6735;
    }
  }
  else {
    pcVar7 = strchr(param_1 + 2,0x3b);
    if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
      return (char *)0x0;
    }
    local_30 = (int)pcVar7 - (int)param_1;
    cVar1 = pcVar7[-1];
    pcVar7 = pcVar7 + -1;
    if (cVar1 != '#') {
      if (9 < (byte)(cVar1 - 0x30U)) {
        return (char *)0x0;
      }
      iVar5 = 1;
      uVar8 = 0;
      while( true ) {
        pcVar7 = pcVar7 + -1;
        iVar9 = (cVar1 + -0x30) * iVar5;
        iVar5 = iVar5 * 10;
        uVar8 = uVar8 + iVar9;
        cVar1 = *pcVar7;
        if (cVar1 == '#') break;
        if (9 < (byte)(cVar1 - 0x30U)) {
          return (char *)0x0;
        }
      }
      goto LAB_087e6735;
    }
  }
  uVar8 = 0;
LAB_087e6735:
  if (param_4 == 1) {
    ConvertUTF32ToUTF8(uVar8,param_2,param_3);
  }
  else {
    *param_2 = (char)uVar8;
    *param_3 = 1;
  }
  return param_1 + local_30 + 1;
}
```

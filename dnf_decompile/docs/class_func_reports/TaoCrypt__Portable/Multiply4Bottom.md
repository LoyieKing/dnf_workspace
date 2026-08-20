# Multiply4Bottom

`_ZN8TaoCrypt8Portable15Multiply4BottomEPjPKjS3_`

`TaoCrypt::Portable::Multiply4Bottom(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x0875ad80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ad80  _ZN8TaoCrypt8Portable15Multiply4BottomEPjPKjS3_
#           TaoCrypt::Portable::Multiply4Bottom(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x0875ad80, 0x0875aeaa]
0875ad80 +0x000:  push   %ebp
0875ad81 +0x001:  mov    %esp,%ebp
0875ad83 +0x003:  push   %edi
0875ad84 +0x004:  push   %esi
0875ad85 +0x005:  sub    $0x18,%esp
0875ad88 +0x008:  mov    0x10(%ebp),%ecx
0875ad8b +0x00b:  mov    0xc(%ebp),%eax
0875ad8e +0x00e:  mov    (%eax),%esi
0875ad90 +0x010:  mov    (%ecx),%eax
0875ad92 +0x012:  mul    %esi
0875ad94 +0x014:  mov    %edx,%edi
0875ad96 +0x016:  mov    0x8(%ebp),%edx
0875ad99 +0x019:  mov    %eax,(%edx)
0875ad9b +0x01b:  mov    0xc(%ebp),%eax
0875ad9e +0x01e:  mov    (%eax),%esi
0875ada0 +0x020:  mov    0x4(%ecx),%eax
0875ada3 +0x023:  mul    %esi
0875ada5 +0x025:  mov    %edi,%esi
0875ada7 +0x027:  xor    %edi,%edi
0875ada9 +0x029:  mov    %eax,-0x10(%ebp)
0875adac +0x02c:  mov    (%ecx),%eax
0875adae +0x02e:  add    %esi,-0x10(%ebp)
0875adb1 +0x031:  mov    -0x10(%ebp),%esi
0875adb4 +0x034:  mov    %edx,-0xc(%ebp)
0875adb7 +0x037:  mov    0xc(%ebp),%edx
0875adba +0x03a:  adc    %edi,-0xc(%ebp)
0875adbd +0x03d:  mov    -0xc(%ebp),%edi
0875adc0 +0x040:  mov    %edi,-0x18(%ebp)
0875adc3 +0x043:  mov    0x4(%edx),%edi
0875adc6 +0x046:  mul    %edi
0875adc8 +0x048:  xor    %edi,%edi
0875adca +0x04a:  mov    %eax,-0x10(%ebp)
0875adcd +0x04d:  add    %esi,-0x10(%ebp)
0875add0 +0x050:  mov    %edx,-0xc(%ebp)
0875add3 +0x053:  mov    -0x18(%ebp),%edx
0875add6 +0x056:  adc    %edi,-0xc(%ebp)
0875add9 +0x059:  mov    -0xc(%ebp),%edi
0875addc +0x05c:  mov    %edx,-0x18(%ebp)
0875addf +0x05f:  mov    -0x10(%ebp),%eax
0875ade2 +0x062:  mov    0xc(%ebp),%edx
0875ade5 +0x065:  mov    %edi,%esi
0875ade7 +0x067:  xor    %edi,%edi
0875ade9 +0x069:  add    -0x18(%ebp),%esi
0875adec +0x06c:  movl   $0x0,-0x14(%ebp)
0875adf3 +0x073:  adc    -0x14(%ebp),%edi
0875adf6 +0x076:  mov    %esi,-0x18(%ebp)
0875adf9 +0x079:  mov    0x8(%ebp),%esi
0875adfc +0x07c:  mov    %edi,-0x1c(%ebp)
0875adff +0x07f:  xor    %edi,%edi
0875ae01 +0x081:  mov    %eax,0x4(%esi)
0875ae04 +0x084:  mov    0x8(%edx),%esi
0875ae07 +0x087:  mov    (%ecx),%eax
0875ae09 +0x089:  mul    %esi
0875ae0b +0x08b:  mov    -0x18(%ebp),%esi
0875ae0e +0x08e:  mov    %eax,-0x10(%ebp)
0875ae11 +0x091:  mov    0x4(%ecx),%eax
0875ae14 +0x094:  add    %esi,-0x10(%ebp)
0875ae17 +0x097:  mov    -0x10(%ebp),%esi
0875ae1a +0x09a:  mov    %edx,-0xc(%ebp)
0875ae1d +0x09d:  mov    0xc(%ebp),%edx
0875ae20 +0x0a0:  adc    %edi,-0xc(%ebp)
0875ae23 +0x0a3:  mov    -0xc(%ebp),%edi
0875ae26 +0x0a6:  add    -0x1c(%ebp),%edi
0875ae29 +0x0a9:  mov    %edi,-0x18(%ebp)
0875ae2c +0x0ac:  mov    0x4(%edx),%edi
0875ae2f +0x0af:  mul    %edi
0875ae31 +0x0b1:  xor    %edi,%edi
0875ae33 +0x0b3:  mov    %eax,-0x10(%ebp)
0875ae36 +0x0b6:  add    %esi,-0x10(%ebp)
0875ae39 +0x0b9:  mov    -0x10(%ebp),%esi
0875ae3c +0x0bc:  mov    %edx,-0xc(%ebp)
0875ae3f +0x0bf:  adc    %edi,-0xc(%ebp)
0875ae42 +0x0c2:  mov    -0xc(%ebp),%edi
0875ae45 +0x0c5:  add    -0x18(%ebp),%edi
0875ae48 +0x0c8:  mov    %edi,-0x18(%ebp)
0875ae4b +0x0cb:  mov    0xc(%ebp),%edx
0875ae4e +0x0ce:  mov    0x8(%ecx),%eax
0875ae51 +0x0d1:  mov    (%edx),%edi
0875ae53 +0x0d3:  mul    %edi
0875ae55 +0x0d5:  xor    %edi,%edi
0875ae57 +0x0d7:  mov    %eax,-0x10(%ebp)
0875ae5a +0x0da:  add    %esi,-0x10(%ebp)
0875ae5d +0x0dd:  mov    -0x10(%ebp),%esi
0875ae60 +0x0e0:  mov    %edx,-0xc(%ebp)
0875ae63 +0x0e3:  mov    0x8(%ebp),%edx
0875ae66 +0x0e6:  adc    %edi,-0xc(%ebp)
0875ae69 +0x0e9:  mov    -0xc(%ebp),%edi
0875ae6c +0x0ec:  add    -0x18(%ebp),%edi
0875ae6f +0x0ef:  mov    %esi,0x8(%edx)
0875ae72 +0x0f2:  mov    0xc(%ebp),%edx
0875ae75 +0x0f5:  mov    (%ecx),%eax
0875ae77 +0x0f7:  mov    %edi,-0x18(%ebp)
0875ae7a +0x0fa:  imul   0xc(%edx),%eax
0875ae7e +0x0fe:  lea    (%eax,%edi,1),%esi
0875ae81 +0x101:  mov    0xc(%ecx),%eax
0875ae84 +0x104:  imul   (%edx),%eax
0875ae87 +0x107:  add    %eax,%esi
0875ae89 +0x109:  mov    0x8(%ecx),%eax
0875ae8c +0x10c:  imul   0x4(%edx),%eax
0875ae90 +0x110:  add    %eax,%esi
0875ae92 +0x112:  mov    0x4(%ecx),%eax
0875ae95 +0x115:  imul   0x8(%edx),%eax
0875ae99 +0x119:  lea    (%esi,%eax,1),%eax
0875ae9c +0x11c:  mov    0x8(%ebp),%esi
0875ae9f +0x11f:  mov    %eax,0xc(%esi)
0875aea2 +0x122:  add    $0x18,%esp
0875aea5 +0x125:  pop    %esi
0875aea6 +0x126:  pop    %edi
0875aea7 +0x127:  pop    %ebp
0875aea8 +0x128:  ret
0875aea9 +0x129:  nop
0875aeaa +0x12a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::Portable::Multiply4Bottom @ 0x875ad80

/* TaoCrypt::Portable::Multiply4Bottom(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply4Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  uVar3 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20);
  uVar1 = (uint)(uVar3 >> 0x20);
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  param_1[1] = (uint)lVar4;
  uVar3 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar2 + uVar1);
  uVar5 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  lVar4 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (uVar5 & 0xffffffff);
  param_1[2] = (uint)lVar4;
  param_1[3] = *param_3 * param_2[3] +
               (int)((ulonglong)lVar4 >> 0x20) +
               (int)(uVar5 >> 0x20) + (int)(uVar3 >> 0x20) + (uint)CARRY4(uVar2,uVar1) +
               param_3[3] * *param_2 + param_3[2] * param_2[1] + param_3[1] * param_2[2];
  return;
}
```

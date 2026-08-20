# Print

`_ZNK12TiXmlElement5PrintEP8_IO_FILEi`

`TiXmlElement::Print(_IO_FILE*, int) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e0690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0690  _ZNK12TiXmlElement5PrintEP8_IO_FILEi
#           TiXmlElement::Print(_IO_FILE*, int) const
# range [0x087e0690, 0x087e08aa]
087e0690 +0x000:  push   %ebp
087e0691 +0x001:  mov    %esp,%ebp
087e0693 +0x003:  push   %edi
087e0694 +0x004:  push   %esi
087e0695 +0x005:  push   %ebx
087e0696 +0x006:  sub    $0x2c,%esp
087e0699 +0x009:  mov    0xc(%ebp),%ebx
087e069c +0x00c:  mov    0x8(%ebp),%eax
087e069f +0x00f:  mov    0x10(%ebp),%edi
087e06a2 +0x012:  test   %ebx,%ebx
087e06a4 +0x014:  mov    %eax,-0x1c(%ebp)
087e06a7 +0x017:  je     087e0880 <+0x1f0>
087e06ad +0x01d:  xor    %esi,%esi
087e06af +0x01f:  test   %edi,%edi
087e06b1 +0x021:  jle    087e06df <+0x4f>
087e06b3 +0x023:  nop
087e06b4 +0x024:  lea    0x0(%esi,%eiz,1),%esi
087e06b8 +0x028:  add    $0x1,%esi
087e06bb +0x02b:  mov    %ebx,0xc(%esp)
087e06bf +0x02f:  movl   $0x4,0x8(%esp)
087e06c7 +0x037:  movl   $0x1,0x4(%esp)
087e06cf +0x03f:  movl   $"    ",(%esp)
087e06d6 +0x046:  call   0807e320 <_init+0xc18>
087e06db +0x04b:  cmp    %esi,%edi
087e06dd +0x04d:  jg     087e06b8 <+0x28>
087e06df +0x04f:  mov    -0x1c(%ebp),%edx
087e06e2 +0x052:  mov    0x20(%edx),%eax
087e06e5 +0x055:  movl   $"<%s",0x4(%esp)
087e06ed +0x05d:  mov    %ebx,(%esp)
087e06f0 +0x060:  mov    %eax,0x8(%esp)
087e06f4 +0x064:  call   0807da90 <_init+0x388>
087e06f9 +0x069:  mov    -0x1c(%ebp),%eax
087e06fc +0x06c:  mov    0x4c(%eax),%esi
087e06ff +0x06f:  add    $0x2c,%eax
087e0702 +0x072:  cmp    %eax,%esi
087e0704 +0x074:  je     087e0747 <+0xb7>
087e0706 +0x076:  test   %esi,%esi
087e0708 +0x078:  je     087e0747 <+0xb7>
087e070a +0x07a:  lea    0x0(%esi),%esi
087e0710 +0x080:  mov    %ebx,0x4(%esp)
087e0714 +0x084:  movl   $0x20,(%esp)
087e071b +0x08b:  call   0807e4c0 <_init+0xdb8>
087e0720 +0x090:  mov    (%esi),%eax
087e0722 +0x092:  mov    %esi,(%esp)
087e0725 +0x095:  mov    %edi,0x8(%esp)
087e0729 +0x099:  mov    %ebx,0x4(%esp)
087e072d +0x09d:  call   *0x8(%eax)
087e0730 +0x0a0:  mov    0x20(%esi),%esi
087e0733 +0x0a3:  mov    0x18(%esi),%eax
087e0736 +0x0a6:  mov    -0xc(%eax),%edx
087e0739 +0x0a9:  test   %edx,%edx
087e073b +0x0ab:  jne    087e0710 <+0x80>
087e073d +0x0ad:  mov    0x14(%esi),%eax
087e0740 +0x0b0:  mov    -0xc(%eax),%eax
087e0743 +0x0b3:  test   %eax,%eax
087e0745 +0x0b5:  jne    087e0710 <+0x80>
087e0747 +0x0b7:  mov    -0x1c(%ebp),%edx
087e074a +0x0ba:  mov    0x18(%edx),%eax
087e074d +0x0bd:  test   %eax,%eax
087e074f +0x0bf:  je     087e0858 <+0x1c8>
087e0755 +0x0c5:  cmp    0x1c(%edx),%eax
087e0758 +0x0c8:  je     087e081d <+0x18d>
087e075e +0x0ce:  mov    %ebx,0x4(%esp)
087e0762 +0x0d2:  movl   $0x3e,(%esp)
087e0769 +0x0d9:  call   0807e4c0 <_init+0xdb8>
087e076e +0x0de:  mov    -0x1c(%ebp),%eax
087e0771 +0x0e1:  mov    0x18(%eax),%esi
087e0774 +0x0e4:  test   %esi,%esi
087e0776 +0x0e6:  je     087e07a6 <+0x116>
087e0778 +0x0e8:  lea    0x1(%edi),%edx
087e077b +0x0eb:  mov    %edx,-0x20(%ebp)
087e077e +0x0ee:  xchg   %ax,%ax
087e0780 +0x0f0:  mov    (%esi),%eax
087e0782 +0x0f2:  mov    %esi,(%esp)
087e0785 +0x0f5:  call   *0x38(%eax)
087e0788 +0x0f8:  test   %eax,%eax
087e078a +0x0fa:  je     087e0808 <+0x178>
087e078c +0x0fc:  mov    (%esi),%eax
087e078e +0x0fe:  mov    -0x20(%ebp),%edx
087e0791 +0x101:  mov    %esi,(%esp)
087e0794 +0x104:  mov    %ebx,0x4(%esp)
087e0798 +0x108:  mov    %edx,0x8(%esp)
087e079c +0x10c:  call   *0x8(%eax)
087e079f +0x10f:  mov    0x28(%esi),%esi
087e07a2 +0x112:  test   %esi,%esi
087e07a4 +0x114:  jne    087e0780 <+0xf0>
087e07a6 +0x116:  mov    %ebx,0x4(%esp)
087e07aa +0x11a:  movl   $0xa,(%esp)
087e07b1 +0x121:  call   0807e4c0 <_init+0xdb8>
087e07b6 +0x126:  test   %edi,%edi
087e07b8 +0x128:  jle    087e07e7 <+0x157>
087e07ba +0x12a:  xor    %esi,%esi
087e07bc +0x12c:  lea    0x0(%esi,%eiz,1),%esi
087e07c0 +0x130:  add    $0x1,%esi
087e07c3 +0x133:  mov    %ebx,0xc(%esp)
087e07c7 +0x137:  movl   $0x4,0x8(%esp)
087e07cf +0x13f:  movl   $0x1,0x4(%esp)
087e07d7 +0x147:  movl   $"    ",(%esp)
087e07de +0x14e:  call   0807e320 <_init+0xc18>
087e07e3 +0x153:  cmp    %esi,%edi
087e07e5 +0x155:  jg     087e07c0 <+0x130>
087e07e7 +0x157:  mov    -0x1c(%ebp),%edx
087e07ea +0x15a:  mov    0x20(%edx),%eax
087e07ed +0x15d:  mov    %ebx,0x8(%ebp)
087e07f0 +0x160:  movl   $"</%s>",0xc(%ebp)
087e07f7 +0x167:  mov    %eax,0x10(%ebp)
087e07fa +0x16a:  add    $0x2c,%esp
087e07fd +0x16d:  pop    %ebx
087e07fe +0x16e:  pop    %esi
087e07ff +0x16f:  pop    %edi
087e0800 +0x170:  pop    %ebp
087e0801 +0x171:  jmp    0807da90 <_init+0x388>
087e0806 +0x176:  xchg   %ax,%ax
087e0808 +0x178:  mov    %ebx,0x4(%esp)
087e080c +0x17c:  movl   $0xa,(%esp)
087e0813 +0x183:  call   0807e4c0 <_init+0xdb8>
087e0818 +0x188:  jmp    087e078c <+0xfc>
087e081d +0x18d:  mov    (%eax),%edx
087e081f +0x18f:  mov    %eax,(%esp)
087e0822 +0x192:  call   *0x38(%edx)
087e0825 +0x195:  test   %eax,%eax
087e0827 +0x197:  je     087e075e <+0xce>
087e082d +0x19d:  mov    %ebx,0x4(%esp)
087e0831 +0x1a1:  add    $0x1,%edi
087e0834 +0x1a4:  movl   $0x3e,(%esp)
087e083b +0x1ab:  call   0807e4c0 <_init+0xdb8>
087e0840 +0x1b0:  mov    -0x1c(%ebp),%edx
087e0843 +0x1b3:  mov    0x18(%edx),%eax
087e0846 +0x1b6:  mov    (%eax),%edx
087e0848 +0x1b8:  mov    %edi,0x8(%esp)
087e084c +0x1bc:  mov    %ebx,0x4(%esp)
087e0850 +0x1c0:  mov    %eax,(%esp)
087e0853 +0x1c3:  call   *0x8(%edx)
087e0856 +0x1c6:  jmp    087e07e7 <+0x157>
087e0858 +0x1c8:  mov    %ebx,0xc(%esp)
087e085c +0x1cc:  movl   $0x3,0x8(%esp)
087e0864 +0x1d4:  movl   $0x1,0x4(%esp)
087e086c +0x1dc:  movl   $" />",(%esp)
087e0873 +0x1e3:  call   0807e320 <_init+0xc18>
087e0878 +0x1e8:  add    $0x2c,%esp
087e087b +0x1eb:  pop    %ebx
087e087c +0x1ec:  pop    %esi
087e087d +0x1ed:  pop    %edi
087e087e +0x1ee:  pop    %ebp
087e087f +0x1ef:  ret
087e0880 +0x1f0:  movl   $&_ZZNK12TiXmlElement5PrintEP8_IO_FILEiE19__PRETTY_FUNCTION__,0xc(%esp)
087e0888 +0x1f8:  movl   $0x323,0x8(%esp)
087e0890 +0x200:  movl   $"tinyxml.cpp",0x4(%esp)
087e0898 +0x208:  movl   $"cfile",(%esp)
087e089f +0x20f:  call   0807dc50 <_init+0x548>
087e08a4 +0x214:  lea    0x0(%esi),%esi
087e08aa +0x21a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::Print @ 0x87e0690

/* TiXmlElement::Print(_IO_FILE*, int) const */

void __thiscall TiXmlElement::Print(TiXmlElement *this,_IO_FILE *param_1,int param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  TiXmlElement *pTVar3;
  int *piVar4;
  
  if (param_1 == (_IO_FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cfile","tinyxml.cpp",0x323,"virtual void TiXmlElement::Print(FILE*, int) const");
  }
  if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      fwrite(&DAT_08de0e71,1,4,param_1);
    } while (iVar2 < param_2);
  }
  fprintf(param_1,"<%s",*(undefined4 *)(this + 0x20));
  pTVar3 = *(TiXmlElement **)(this + 0x4c);
  pTVar1 = pTVar3;
  if (pTVar3 != this + 0x2c) {
    while (pTVar1 != (TiXmlElement *)0x0) {
      do {
        fputc(0x20,param_1);
        (**(code **)(*(int *)pTVar3 + 8))(pTVar3,param_1,param_2);
        pTVar3 = *(TiXmlElement **)(pTVar3 + 0x20);
      } while (*(int *)(*(int *)(pTVar3 + 0x18) + -0xc) != 0);
      pTVar1 = *(TiXmlElement **)(*(int *)(pTVar3 + 0x14) + -0xc);
    }
  }
  piVar4 = *(int **)(this + 0x18);
  if (piVar4 != (int *)0x0) {
    if ((piVar4 == *(int **)(this + 0x1c)) &&
       (iVar2 = (**(code **)(*piVar4 + 0x38))(piVar4), iVar2 != 0)) {
      fputc(0x3e,param_1);
      (**(code **)(**(int **)(this + 0x18) + 8))(*(int **)(this + 0x18),param_1,param_2 + 1);
    }
    else {
      fputc(0x3e,param_1);
      piVar4 = *(int **)(this + 0x18);
      if (piVar4 != (int *)0x0) {
        do {
          iVar2 = (**(code **)(*piVar4 + 0x38))(piVar4);
          if (iVar2 == 0) {
            fputc(10,param_1);
          }
          (**(code **)(*piVar4 + 8))(piVar4,param_1,param_2 + 1);
          piVar4 = (int *)piVar4[10];
        } while (piVar4 != (int *)0x0);
      }
      fputc(10,param_1);
      if (0 < param_2) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          fwrite(&DAT_08de0e71,1,4,param_1);
        } while (iVar2 < param_2);
      }
    }
    fprintf(param_1,"</%s>");
    return;
  }
  fwrite(&DAT_08de0e8f,1,3,param_1);
  return;
}
```

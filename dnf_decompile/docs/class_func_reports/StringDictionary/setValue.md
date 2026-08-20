# setValue

`_ZN16StringDictionary8setValueEiPKc`

`StringDictionary::setValue(int, char const*)`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab26a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab26a8  _ZN16StringDictionary8setValueEiPKc
#           StringDictionary::setValue(int, char const*)
# range [0x08ab26a8, 0x08ab2771]
08ab26a8 +0x00:  push   %ebp
08ab26a9 +0x01:  mov    %esp,%ebp
08ab26ab +0x03:  sub    $0x38,%esp
08ab26ae +0x06:  cmpl   $0x0,0xc(%ebp)
08ab26b2 +0x0a:  js     08ab26ce <+0x26>
08ab26b4 +0x0c:  mov    0x8(%ebp),%eax
08ab26b7 +0x0f:  add    $0x14,%eax
08ab26ba +0x12:  mov    %eax,(%esp)
08ab26bd +0x15:  call   08ab2dbe <_ZN16StringDictionary9addStringEPKc+0x64c>  ; StringDictionary::addString(char const*)+0x64c
08ab26c2 +0x1a:  cmp    0xc(%ebp),%eax
08ab26c5 +0x1d:  jle    08ab26ce <+0x26>
08ab26c7 +0x1f:  mov    $0x1,%eax
08ab26cc +0x24:  jmp    08ab26d3 <+0x2b>
08ab26ce +0x26:  mov    $0x0,%eax
08ab26d3 +0x2b:  test   %al,%al
08ab26d5 +0x2d:  je     08ab276f <+0xc7>
08ab26db +0x33:  mov    0xc(%ebp),%eax
08ab26de +0x36:  mov    0x8(%ebp),%edx
08ab26e1 +0x39:  add    $0x14,%edx
08ab26e4 +0x3c:  mov    %eax,0x4(%esp)
08ab26e8 +0x40:  mov    %edx,(%esp)
08ab26eb +0x43:  call   08ab2dfa <_ZN16StringDictionary9addStringEPKc+0x688>  ; StringDictionary::addString(char const*)+0x688
08ab26f0 +0x48:  mov    0x4(%eax),%eax
08ab26f3 +0x4b:  mov    %eax,0x4(%esp)
08ab26f7 +0x4f:  mov    0x8(%ebp),%eax
08ab26fa +0x52:  mov    %eax,(%esp)
08ab26fd +0x55:  call   08ab2772 <_ZN16StringDictionary9addStringEPKc>  ; StringDictionary::addString(char const*)
08ab2702 +0x5a:  mov    %eax,-0x10(%ebp)
08ab2705 +0x5d:  mov    0x10(%ebp),%eax
08ab2708 +0x60:  mov    %eax,0x4(%esp)
08ab270c +0x64:  mov    0x8(%ebp),%eax
08ab270f +0x67:  mov    %eax,(%esp)
08ab2712 +0x6a:  call   08ab2772 <_ZN16StringDictionary9addStringEPKc>  ; StringDictionary::addString(char const*)
08ab2717 +0x6f:  mov    %eax,-0xc(%ebp)
08ab271a +0x72:  movl   $0x0,-0x1c(%ebp)
08ab2721 +0x79:  movl   $0x0,-0x18(%ebp)
08ab2728 +0x80:  movl   $0x0,-0x14(%ebp)
08ab272f +0x87:  mov    -0x10(%ebp),%eax
08ab2732 +0x8a:  mov    %eax,(%esp)
08ab2735 +0x8d:  call   08ab21f8 <_ZL18getStringHashValuePKc>  ; getStringHashValue(char const*)
08ab273a +0x92:  mov    %eax,-0x1c(%ebp)
08ab273d +0x95:  mov    -0x10(%ebp),%eax
08ab2740 +0x98:  mov    %eax,-0x18(%ebp)
08ab2743 +0x9b:  mov    -0xc(%ebp),%eax
08ab2746 +0x9e:  mov    %eax,-0x14(%ebp)
08ab2749 +0xa1:  mov    0xc(%ebp),%eax
08ab274c +0xa4:  mov    0x8(%ebp),%edx
08ab274f +0xa7:  add    $0x14,%edx
08ab2752 +0xaa:  mov    %eax,0x4(%esp)
08ab2756 +0xae:  mov    %edx,(%esp)
08ab2759 +0xb1:  call   08ab2dfa <_ZN16StringDictionary9addStringEPKc+0x688>  ; StringDictionary::addString(char const*)+0x688
08ab275e +0xb6:  mov    -0x1c(%ebp),%edx
08ab2761 +0xb9:  mov    %edx,(%eax)
08ab2763 +0xbb:  mov    -0x18(%ebp),%edx
08ab2766 +0xbe:  mov    %edx,0x4(%eax)
08ab2769 +0xc1:  mov    -0x14(%ebp),%edx
08ab276c +0xc4:  mov    %edx,0x8(%eax)
08ab276f +0xc7:  leave
08ab2770 +0xc8:  ret
08ab2771 +0xc9:  nop
```

## 反编译 C

```c
// StringDictionary::setValue @ 0x8ab26a8

/* StringDictionary::setValue(int, char const*) */

void __thiscall StringDictionary::setValue(StringDictionary *this,int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (-1 < param_1) {
    iVar2 = std::
            vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::
            size((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
                  *)(this + 0x14));
    if (param_1 < iVar2) {
      bVar1 = true;
      goto LAB_08ab26d3;
    }
  }
  bVar1 = false;
LAB_08ab26d3:
  if (bVar1) {
    iVar2 = std::
            vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::
            operator[]((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
                        *)(this + 0x14),param_1);
    pcVar3 = (char *)addString(this,*(char **)(iVar2 + 4));
    uVar4 = addString(this,param_2);
    uVar5 = getStringHashValue(pcVar3);
    puVar6 = (undefined4 *)
             std::
             vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::
             operator[]((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
                         *)(this + 0x14),param_1);
    *puVar6 = uVar5;
    puVar6[1] = pcVar3;
    puVar6[2] = uVar4;
  }
  return;
}
```

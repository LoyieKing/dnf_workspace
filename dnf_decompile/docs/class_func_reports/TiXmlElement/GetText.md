# GetText

`_ZNK12TiXmlElement7GetTextEv`

`TiXmlElement::GetText() const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087dff90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dff90  _ZNK12TiXmlElement7GetTextEv
#           TiXmlElement::GetText() const
# range [0x087dff90, 0x087dffba]
087dff90 +0x00:  push   %ebp
087dff91 +0x01:  mov    %esp,%ebp
087dff93 +0x03:  sub    $0x18,%esp
087dff96 +0x06:  mov    0x8(%ebp),%eax
087dff99 +0x09:  mov    0x18(%eax),%eax
087dff9c +0x0c:  test   %eax,%eax
087dff9e +0x0e:  jne    087dffa8 <+0x18>
087dffa0 +0x10:  xor    %eax,%eax
087dffa2 +0x12:  leave
087dffa3 +0x13:  ret
087dffa4 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087dffa8 +0x18:  mov    (%eax),%edx
087dffaa +0x1a:  mov    %eax,(%esp)
087dffad +0x1d:  call   *0x20(%edx)
087dffb0 +0x20:  test   %eax,%eax
087dffb2 +0x22:  je     087dffa0 <+0x10>
087dffb4 +0x24:  mov    0x20(%eax),%eax
087dffb7 +0x27:  leave
087dffb8 +0x28:  ret
087dffb9 +0x29:  nop
087dffba +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlElement::GetText @ 0x87dff90

/* TiXmlElement::GetText() const */

undefined4 __thiscall TiXmlElement::GetText(TiXmlElement *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0x20);
    }
  }
  return 0;
}
```

# FirstChild

`_ZNK11TiXmlHandle10FirstChildEv`

`TiXmlHandle::FirstChild() const`

| 类 | 地址 |
|---|---|
| `TiXmlHandle` | `0x087e0140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0140  _ZNK11TiXmlHandle10FirstChildEv
#           TiXmlHandle::FirstChild() const
# range [0x087e0140, 0x087e016a]
087e0140 +0x00:  push   %ebp
087e0141 +0x01:  mov    %esp,%ebp
087e0143 +0x03:  mov    0xc(%ebp),%edx
087e0146 +0x06:  mov    0x8(%ebp),%eax
087e0149 +0x09:  mov    (%edx),%edx
087e014b +0x0b:  test   %edx,%edx
087e014d +0x0d:  je     087e0160 <+0x20>
087e014f +0x0f:  mov    0x18(%edx),%edx
087e0152 +0x12:  test   %edx,%edx
087e0154 +0x14:  je     087e0160 <+0x20>
087e0156 +0x16:  mov    %edx,(%eax)
087e0158 +0x18:  pop    %ebp
087e0159 +0x19:  ret    $0x4
087e015c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e0160 +0x20:  movl   $0x0,(%eax)
087e0166 +0x26:  pop    %ebp
087e0167 +0x27:  ret    $0x4
087e016a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlHandle::FirstChild @ 0x87e0140

/* TiXmlHandle::FirstChild() const */

void TiXmlHandle::FirstChild(void)

{
  int iVar1;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if ((*in_stack_00000008 != 0) && (iVar1 = *(int *)(*in_stack_00000008 + 0x18), iVar1 != 0)) {
    *in_stack_00000004 = iVar1;
    return;
  }
  *in_stack_00000004 = 0;
  return;
}
```

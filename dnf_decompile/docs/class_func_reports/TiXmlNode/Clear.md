# Clear

`_ZN9TiXmlNode5ClearEv`

`TiXmlNode::Clear()`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087dfdf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dfdf0  _ZN9TiXmlNode5ClearEv
#           TiXmlNode::Clear()
# range [0x087dfdf0, 0x087dfe2e]
087dfdf0 +0x00:  push   %ebp
087dfdf1 +0x01:  mov    %esp,%ebp
087dfdf3 +0x03:  push   %esi
087dfdf4 +0x04:  push   %ebx
087dfdf5 +0x05:  sub    $0x10,%esp
087dfdf8 +0x08:  mov    0x8(%ebp),%esi
087dfdfb +0x0b:  mov    0x18(%esi),%eax
087dfdfe +0x0e:  test   %eax,%eax
087dfe00 +0x10:  jne    087dfe0a <+0x1a>
087dfe02 +0x12:  jmp    087dfe19 <+0x29>
087dfe04 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087dfe08 +0x18:  mov    %ebx,%eax
087dfe0a +0x1a:  mov    0x28(%eax),%ebx
087dfe0d +0x1d:  mov    (%eax),%edx
087dfe0f +0x1f:  mov    %eax,(%esp)
087dfe12 +0x22:  call   *0x4(%edx)
087dfe15 +0x25:  test   %ebx,%ebx
087dfe17 +0x27:  jne    087dfe08 <+0x18>
087dfe19 +0x29:  movl   $0x0,0x18(%esi)
087dfe20 +0x30:  movl   $0x0,0x1c(%esi)
087dfe27 +0x37:  add    $0x10,%esp
087dfe2a +0x3a:  pop    %ebx
087dfe2b +0x3b:  pop    %esi
087dfe2c +0x3c:  pop    %ebp
087dfe2d +0x3d:  ret
087dfe2e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlNode::Clear @ 0x87dfdf0

/* TiXmlNode::Clear() */

void __thiscall TiXmlNode::Clear(TiXmlNode *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x18);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[10];
    (**(code **)(*piVar2 + 4))(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}
```

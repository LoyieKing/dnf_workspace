# RemoveChild

`_ZN9TiXmlNode11RemoveChildEPS_`

`TiXmlNode::RemoveChild(TiXmlNode*)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0480  _ZN9TiXmlNode11RemoveChildEPS_
#           TiXmlNode::RemoveChild(TiXmlNode*)
# range [0x087e0480, 0x087e0509]
087e0480 +0x00:  push   %ebp
087e0481 +0x01:  xor    %eax,%eax
087e0483 +0x03:  mov    %esp,%ebp
087e0485 +0x05:  push   %ebx
087e0486 +0x06:  sub    $0x14,%esp
087e0489 +0x09:  mov    0xc(%ebp),%edx
087e048c +0x0c:  mov    0x8(%ebp),%ebx
087e048f +0x0f:  test   %edx,%edx
087e0491 +0x11:  je     087e04bc <+0x3c>
087e0493 +0x13:  cmp    %ebx,0x10(%edx)
087e0496 +0x16:  jne    087e04dd <+0x5d>
087e0498 +0x18:  mov    0x28(%edx),%eax
087e049b +0x1b:  test   %eax,%eax
087e049d +0x1d:  je     087e04c8 <+0x48>
087e049f +0x1f:  mov    0x24(%edx),%ecx
087e04a2 +0x22:  mov    %ecx,0x24(%eax)
087e04a5 +0x25:  mov    0x24(%edx),%ecx
087e04a8 +0x28:  test   %ecx,%ecx
087e04aa +0x2a:  je     087e04d8 <+0x58>
087e04ac +0x2c:  mov    %eax,0x28(%ecx)
087e04af +0x2f:  mov    (%edx),%eax
087e04b1 +0x31:  mov    %edx,(%esp)
087e04b4 +0x34:  call   *0x4(%eax)
087e04b7 +0x37:  mov    $0x1,%eax
087e04bc +0x3c:  add    $0x14,%esp
087e04bf +0x3f:  pop    %ebx
087e04c0 +0x40:  pop    %ebp
087e04c1 +0x41:  ret
087e04c2 +0x42:  lea    0x0(%esi),%esi
087e04c8 +0x48:  mov    0x24(%edx),%ecx
087e04cb +0x4b:  test   %ecx,%ecx
087e04cd +0x4d:  mov    %ecx,0x1c(%ebx)
087e04d0 +0x50:  jne    087e04ac <+0x2c>
087e04d2 +0x52:  lea    0x0(%esi),%esi
087e04d8 +0x58:  mov    %eax,0x18(%ebx)
087e04db +0x5b:  jmp    087e04af <+0x2f>
087e04dd +0x5d:  movl   $&_ZZN9TiXmlNode11RemoveChildEPS_E19__PRETTY_FUNCTION__,0xc(%esp)
087e04e5 +0x65:  movl   $0x157,0x8(%esp)
087e04ed +0x6d:  movl   $"tinyxml.cpp",0x4(%esp)
087e04f5 +0x75:  movl   $"0",(%esp)
087e04fc +0x7c:  call   0807dc50 <_init+0x548>
087e0501 +0x81:  nop
087e0502 +0x82:  lea    0x0(%esi,%eiz,1),%esi
087e0509 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlNode::RemoveChild @ 0x87e0480

/* TiXmlNode::RemoveChild(TiXmlNode*) */

undefined4 __thiscall TiXmlNode::RemoveChild(TiXmlNode *this,TiXmlNode *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (TiXmlNode *)0x0) {
    return 0;
  }
  if (*(TiXmlNode **)(param_1 + 0x10) == this) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x24);
      *(int *)(this + 0x1c) = iVar2;
    }
    else {
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      iVar2 = *(int *)(param_1 + 0x24);
    }
    if (iVar2 == 0) {
      *(int *)(this + 0x18) = iVar1;
    }
    else {
      *(int *)(iVar2 + 0x28) = iVar1;
    }
    (**(code **)(*(int *)param_1 + 4))(param_1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0","tinyxml.cpp",0x157,"bool TiXmlNode::RemoveChild(TiXmlNode*)");
}
```

# IsChangableMessage

`_ZN27CSharedServerMessageManager18IsChangableMessageEii`

`CSharedServerMessageManager::IsChangableMessage(int, int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08600cc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600cc8  _ZN27CSharedServerMessageManager18IsChangableMessageEii
#           CSharedServerMessageManager::IsChangableMessage(int, int)
# range [0x08600cc8, 0x08600d0b]
08600cc8 +0x00:  push   %ebp
08600cc9 +0x01:  mov    %esp,%ebp
08600ccb +0x03:  sub    $0x28,%esp
08600cce +0x06:  mov    0xc(%ebp),%eax
08600cd1 +0x09:  mov    %eax,0x4(%esp)
08600cd5 +0x0d:  mov    0x8(%ebp),%eax
08600cd8 +0x10:  mov    %eax,(%esp)
08600cdb +0x13:  call   08600c34 <_ZN27CSharedServerMessageManager13getCurMessageEi>  ; CSharedServerMessageManager::getCurMessage(int)
08600ce0 +0x18:  mov    %eax,-0xc(%ebp)
08600ce3 +0x1b:  cmpl   $0x0,-0xc(%ebp)
08600ce7 +0x1f:  jne    08600cf0 <+0x28>
08600ce9 +0x21:  mov    $0x1,%eax
08600cee +0x26:  jmp    08600d0a <+0x42>
08600cf0 +0x28:  mov    -0xc(%ebp),%eax
08600cf3 +0x2b:  mov    0x54(%eax),%eax
08600cf6 +0x2e:  add    $0x78,%eax
08600cf9 +0x31:  cmp    0x10(%ebp),%eax
08600cfc +0x34:  jl     08600d05 <+0x3d>
08600cfe +0x36:  mov    $0x0,%eax
08600d03 +0x3b:  jmp    08600d0a <+0x42>
08600d05 +0x3d:  mov    $0x1,%eax
08600d0a +0x42:  leave
08600d0b +0x43:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::IsChangableMessage @ 0x8600cc8

/* CSharedServerMessageManager::IsChangableMessage(int, int) */

undefined4 __thiscall
CSharedServerMessageManager::IsChangableMessage
          (CSharedServerMessageManager *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getCurMessage(this,param_1);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (*(int *)(iVar1 + 0x54) + 0x78 < param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

# DestroyPassiveObject

`_ZN13CBattle_Field20DestroyPassiveObjectEi`

`CBattle_Field::DestroyPassiveObject(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082ff3ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ff3ec  _ZN13CBattle_Field20DestroyPassiveObjectEi
#           CBattle_Field::DestroyPassiveObject(int)
# range [0x082ff3ec, 0x082ff485]
082ff3ec +0x00:  push   %ebp
082ff3ed +0x01:  mov    %esp,%ebp
082ff3ef +0x03:  sub    $0x28,%esp
082ff3f2 +0x06:  mov    0x8(%ebp),%eax
082ff3f5 +0x09:  mov    0x108(%eax),%eax
082ff3fb +0x0f:  test   %eax,%eax
082ff3fd +0x11:  je     082ff47e <+0x92>
082ff3ff +0x13:  mov    0x8(%ebp),%eax
082ff402 +0x16:  mov    0x108(%eax),%eax
082ff408 +0x1c:  add    $0xa8,%eax
082ff40d +0x21:  mov    %eax,(%esp)
082ff410 +0x24:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
082ff415 +0x29:  test   %al,%al
082ff417 +0x2b:  je     082ff420 <+0x34>
082ff419 +0x2d:  mov    $0x0,%eax
082ff41e +0x32:  jmp    082ff483 <+0x97>
082ff420 +0x34:  movl   $0x0,-0xc(%ebp)
082ff427 +0x3b:  jmp    082ff45e <+0x72>
082ff429 +0x3d:  mov    0x8(%ebp),%eax
082ff42c +0x40:  mov    0x108(%eax),%eax
082ff432 +0x46:  lea    0xa8(%eax),%edx
082ff438 +0x4c:  mov    -0xc(%ebp),%eax
082ff43b +0x4f:  mov    %eax,0x4(%esp)
082ff43f +0x53:  mov    %edx,(%esp)
082ff442 +0x56:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
082ff447 +0x5b:  mov    (%eax),%eax
082ff449 +0x5d:  cmp    0xc(%ebp),%eax
082ff44c +0x60:  sete   %al
082ff44f +0x63:  test   %al,%al
082ff451 +0x65:  je     082ff45a <+0x6e>
082ff453 +0x67:  mov    $0x1,%eax
082ff458 +0x6c:  jmp    082ff483 <+0x97>
082ff45a +0x6e:  addl   $0x1,-0xc(%ebp)
082ff45e +0x72:  mov    0x8(%ebp),%eax
082ff461 +0x75:  mov    0x108(%eax),%eax
082ff467 +0x7b:  add    $0xa8,%eax
082ff46c +0x80:  mov    %eax,(%esp)
082ff46f +0x83:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
082ff474 +0x88:  cmp    -0xc(%ebp),%eax
082ff477 +0x8b:  seta   %al
082ff47a +0x8e:  test   %al,%al
082ff47c +0x90:  jne    082ff429 <+0x3d>
082ff47e +0x92:  mov    $0x0,%eax
082ff483 +0x97:  leave
082ff484 +0x98:  ret
082ff485 +0x99:  nop
```

## 反编译 C

```c
// CBattle_Field::DestroyPassiveObject @ 0x82ff3ec

/* CBattle_Field::DestroyPassiveObject(int) */

undefined4 __thiscall CBattle_Field::DestroyPassiveObject(CBattle_Field *this,int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint local_10;
  
  if (*(int *)(this + 0x108) != 0) {
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 != '\0') {
      return 0;
    }
    for (local_10 = 0;
        uVar3 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x108) + 0xa8)),
        local_10 < uVar3; local_10 = local_10 + 1) {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x108) + 0xa8),
                                 local_10);
      if (*piVar2 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}
```

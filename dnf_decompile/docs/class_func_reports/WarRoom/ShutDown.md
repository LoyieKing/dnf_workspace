# ShutDown

`_ZN7WarRoom8ShutDownEv`

`WarRoom::ShutDown()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd53c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd53c  _ZN7WarRoom8ShutDownEv
#           WarRoom::ShutDown()
# range [0x086bd53c, 0x086bd5d3]
086bd53c +0x00:  push   %ebp
086bd53d +0x01:  mov    %esp,%ebp
086bd53f +0x03:  sub    $0x28,%esp
086bd542 +0x06:  mov    0x8(%ebp),%eax
086bd545 +0x09:  mov    0x144(%eax),%eax
086bd54b +0x0f:  test   %eax,%eax
086bd54d +0x11:  jg     086bd5c6 <+0x8a>
086bd54f +0x13:  movl   $0x0,-0x10(%ebp)
086bd556 +0x1a:  jmp    086bd5a9 <+0x6d>
086bd558 +0x1c:  mov    -0x10(%ebp),%edx
086bd55b +0x1f:  mov    0x8(%ebp),%eax
086bd55e +0x22:  add    $0x48,%edx
086bd561 +0x25:  mov    0xc(%eax,%edx,4),%eax
086bd565 +0x29:  test   %eax,%eax
086bd567 +0x2b:  je     086bd5a5 <+0x69>
086bd569 +0x2d:  mov    -0x10(%ebp),%edx
086bd56c +0x30:  mov    0x8(%ebp),%eax
086bd56f +0x33:  add    $0x48,%edx
086bd572 +0x36:  mov    0xc(%eax,%edx,4),%eax
086bd576 +0x3a:  mov    %eax,-0xc(%ebp)
086bd579 +0x3d:  mov    -0x10(%ebp),%eax
086bd57c +0x40:  mov    %eax,0x4(%esp)
086bd580 +0x44:  mov    0x8(%ebp),%eax
086bd583 +0x47:  mov    %eax,(%esp)
086bd586 +0x4a:  call   086bd256 <_ZN7WarRoom17WalkOutUserBySlotEi>  ; WarRoom::WalkOutUserBySlot(int)
086bd58b +0x4f:  movl   $0x7,0x8(%esp)
086bd593 +0x57:  mov    -0xc(%ebp),%eax
086bd596 +0x5a:  mov    %eax,0x4(%esp)
086bd59a +0x5e:  mov    0x8(%ebp),%eax
086bd59d +0x61:  mov    %eax,(%esp)
086bd5a0 +0x64:  call   086be152 <_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE>  ; WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE)
086bd5a5 +0x69:  addl   $0x1,-0x10(%ebp)
086bd5a9 +0x6d:  cmpl   $0x5,-0x10(%ebp)
086bd5ad +0x71:  setle  %al
086bd5b0 +0x74:  test   %al,%al
086bd5b2 +0x76:  jne    086bd558 <+0x1c>
086bd5b4 +0x78:  mov    0x8(%ebp),%eax
086bd5b7 +0x7b:  mov    %eax,(%esp)
086bd5ba +0x7e:  call   086bd520 <_ZN7WarRoom5CloseEv>  ; WarRoom::Close()
086bd5bf +0x83:  mov    $0x1,%eax
086bd5c4 +0x88:  jmp    086bd5d2 <+0x96>
086bd5c6 +0x8a:  mov    0x8(%ebp),%eax
086bd5c9 +0x8d:  movb   $0x1,0x30(%eax)
086bd5cd +0x91:  mov    $0x0,%eax
086bd5d2 +0x96:  leave
086bd5d3 +0x97:  ret
```

## 反编译 C

```c
// WarRoom::ShutDown @ 0x86bd53c

/* WarRoom::ShutDown() */

undefined4 __thiscall WarRoom::ShutDown(WarRoom *this)

{
  undefined4 uVar1;
  int local_14;
  
  if (*(int *)(this + 0x144) < 1) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        uVar1 = *(undefined4 *)(this + (local_14 + 0x48) * 4 + 0xc);
        WalkOutUserBySlot(this,local_14);
        SendWalkOut(this,uVar1,7);
      }
    }
    Close(this);
    uVar1 = 1;
  }
  else {
    this[0x30] = (WarRoom)0x1;
    uVar1 = 0;
  }
  return uVar1;
}
```

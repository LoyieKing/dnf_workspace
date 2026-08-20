# getCompoundAvatarInfo

`_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi`

`tagCompoundAvatarTable::getCompoundAvatarInfo(int) const`

| 类 | 地址 |
|---|---|
| `tagCompoundAvatarTable` | `0x08903fcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08903fcc  _ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi
#           tagCompoundAvatarTable::getCompoundAvatarInfo(int) const
# range [0x08903fcc, 0x08904029]
08903fcc +0x00:  push   %ebp
08903fcd +0x01:  mov    %esp,%ebp
08903fcf +0x03:  sub    $0x28,%esp
08903fd2 +0x06:  cmpl   $0x0,0xc(%ebp)
08903fd6 +0x0a:  jle    08903fe8 <+0x1c>
08903fd8 +0x0c:  mov    0x8(%ebp),%eax
08903fdb +0x0f:  mov    %eax,(%esp)
08903fde +0x12:  call   08334412 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x210>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x210
08903fe3 +0x17:  cmp    0xc(%ebp),%eax
08903fe6 +0x1a:  jg     08903fef <+0x23>
08903fe8 +0x1c:  mov    $0x1,%eax
08903fed +0x21:  jmp    08903ff4 <+0x28>
08903fef +0x23:  mov    $0x0,%eax
08903ff4 +0x28:  test   %al,%al
08903ff6 +0x2a:  je     08903fff <+0x33>
08903ff8 +0x2c:  mov    $0x0,%eax
08903ffd +0x31:  jmp    08904028 <+0x5c>
08903fff +0x33:  mov    0xc(%ebp),%edx
08904002 +0x36:  mov    0x8(%ebp),%eax
08904005 +0x39:  mov    %edx,0x4(%esp)
08904009 +0x3d:  mov    %eax,(%esp)
0890400c +0x40:  call   0891e5ba <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x5299>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x5299
08904011 +0x45:  mov    %eax,-0xc(%ebp)
08904014 +0x48:  mov    -0xc(%ebp),%eax
08904017 +0x4b:  mov    (%eax),%eax
08904019 +0x4d:  cmp    0xc(%ebp),%eax
0890401c +0x50:  je     08904025 <+0x59>
0890401e +0x52:  mov    $0x0,%eax
08904023 +0x57:  jmp    08904028 <+0x5c>
08904025 +0x59:  mov    -0xc(%ebp),%eax
08904028 +0x5c:  leave
08904029 +0x5d:  ret
```

## 反编译 C

```c
// tagCompoundAvatarTable::getCompoundAvatarInfo @ 0x8903fcc

/* tagCompoundAvatarTable::getCompoundAvatarInfo(int) const */

int * __thiscall
tagCompoundAvatarTable::getCompoundAvatarInfo(tagCompoundAvatarTable *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 < 1) ||
     (iVar2 = std::vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>>::size
                        ((vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>> *)this),
     iVar2 <= param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)std::vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>>::at
                              ((vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>> *)this,
                               param_1);
    if (*piVar3 != param_1) {
      piVar3 = (int *)0x0;
    }
  }
  return piVar3;
}
```

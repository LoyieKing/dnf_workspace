# DestroyPassiveObject

`_ZN6CParty20DestroyPassiveObjectEi`

`CParty::DestroyPassiveObject(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b6540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b6540  _ZN6CParty20DestroyPassiveObjectEi
#           CParty::DestroyPassiveObject(int)
# range [0x085b6540, 0x085b65a1]
085b6540 +0x00:  push   %ebp
085b6541 +0x01:  mov    %esp,%ebp
085b6543 +0x03:  sub    $0x28,%esp
085b6546 +0x06:  movb   $0x0,-0x9(%ebp)
085b654a +0x0a:  mov    0x8(%ebp),%eax
085b654d +0x0d:  lea    0xb24(%eax),%edx
085b6553 +0x13:  mov    0xc(%ebp),%eax
085b6556 +0x16:  mov    %eax,0x4(%esp)
085b655a +0x1a:  mov    %edx,(%esp)
085b655d +0x1d:  call   082ff3ec <_ZN13CBattle_Field20DestroyPassiveObjectEi>  ; CBattle_Field::DestroyPassiveObject(int)
085b6562 +0x22:  mov    %al,-0x9(%ebp)
085b6565 +0x25:  movzbl -0x9(%ebp),%eax
085b6569 +0x29:  test   %al,%al
085b656b +0x2b:  je     085b659c <+0x5c>
085b656d +0x2d:  mov    0x8(%ebp),%eax
085b6570 +0x30:  lea    0xb24(%eax),%edx
085b6576 +0x36:  mov    0xc(%ebp),%eax
085b6579 +0x39:  mov    %eax,0x8(%esp)
085b657d +0x3d:  movl   $0x0,0x4(%esp)
085b6585 +0x45:  mov    %edx,(%esp)
085b6588 +0x48:  call   085bf29a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7f8>  ; global constructors keyed to CParty::cMember::cMember()+0x7f8
085b658d +0x4d:  test   %al,%al
085b658f +0x4f:  je     085b659c <+0x5c>
085b6591 +0x51:  mov    0x8(%ebp),%eax
085b6594 +0x54:  mov    %eax,(%esp)
085b6597 +0x57:  call   085a9330 <_ZN6CParty12ClearDungeonEv>  ; CParty::ClearDungeon()
085b659c +0x5c:  movzbl -0x9(%ebp),%eax
085b65a0 +0x60:  leave
085b65a1 +0x61:  ret
```

## 反编译 C

```c
// CParty::DestroyPassiveObject @ 0x85b6540

/* CParty::DestroyPassiveObject(int) */

char __thiscall CParty::DestroyPassiveObject(CParty *this,int param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = CBattle_Field::DestroyPassiveObject((CBattle_Field *)(this + 0xb24),param_1);
  if (cVar1 != '\0') {
    cVar2 = CBattle_Field::ClearCondition((CBattle_Field *)(this + 0xb24),0,param_1);
    if (cVar2 != '\0') {
      ClearDungeon(this);
    }
  }
  return cVar1;
}
```

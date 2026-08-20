# getStikerList

`_ZN14AvatarRoulette13getStikerListERb17ENUM_CHARACTERJOBRSt6vectorIiSaIiEE`

`AvatarRoulette::getStikerList(bool&, ENUM_CHARACTERJOB, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `AvatarRoulette` | `0x08911dfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08911dfe  _ZN14AvatarRoulette13getStikerListERb17ENUM_CHARACTERJOBRSt6vectorIiSaIiEE
#           AvatarRoulette::getStikerList(bool&, ENUM_CHARACTERJOB, std::vector<int, std::allocator<int> >&)
# range [0x08911dfe, 0x08911e4d]
08911dfe +0x00:  push   %ebp
08911dff +0x01:  mov    %esp,%ebp
08911e01 +0x03:  sub    $0x18,%esp
08911e04 +0x06:  mov    0xc(%ebp),%eax
08911e07 +0x09:  movb   $0x0,(%eax)
08911e0a +0x0c:  mov    0x10(%ebp),%eax
08911e0d +0x0f:  test   %eax,%eax
08911e0f +0x11:  js     08911e47 <+0x49>
08911e11 +0x13:  mov    0x10(%ebp),%eax
08911e14 +0x16:  cmp    $0xa,%eax
08911e17 +0x19:  jg     08911e4a <+0x4c>
08911e19 +0x1b:  mov    0x10(%ebp),%edx
08911e1c +0x1e:  mov    %edx,%eax
08911e1e +0x20:  add    %eax,%eax
08911e20 +0x22:  add    %edx,%eax
08911e22 +0x24:  shl    $0x2,%eax
08911e25 +0x27:  add    $0x90,%eax
08911e2a +0x2c:  add    0x8(%ebp),%eax
08911e2d +0x2f:  add    $0x8,%eax
08911e30 +0x32:  mov    %eax,0x4(%esp)
08911e34 +0x36:  mov    0x14(%ebp),%eax
08911e37 +0x39:  mov    %eax,(%esp)
08911e3a +0x3c:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08911e3f +0x41:  mov    0xc(%ebp),%eax
08911e42 +0x44:  movb   $0x1,(%eax)
08911e45 +0x47:  jmp    08911e4b <+0x4d>
08911e47 +0x49:  nop
08911e48 +0x4a:  jmp    08911e4b <+0x4d>
08911e4a +0x4c:  nop
08911e4b +0x4d:  leave
08911e4c +0x4e:  ret
08911e4d +0x4f:  nop
```

## 反编译 C

```c
// AvatarRoulette::getStikerList @ 0x8911dfe

/* AvatarRoulette::getStikerList(bool&, ENUM_CHARACTERJOB, std::vector<int, std::allocator<int> >&)
    */

void __thiscall
AvatarRoulette::getStikerList
          (AvatarRoulette *this,undefined1 *param_1,int param_3,
          vector<int,std::allocator<int>> *param_4)

{
  *param_1 = 0;
  if ((-1 < param_3) && (param_3 < 0xb)) {
    std::vector<int,std::allocator<int>>::operator=(param_4,(vector *)(this + param_3 * 0xc + 0x98))
    ;
    *param_1 = 1;
  }
  return;
}
```

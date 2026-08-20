# GetUserCount

`_ZNK9GameWorld12GetUserCountEii`

`GameWorld::GetUserCount(int, int) const`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c49b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c49b2  _ZNK9GameWorld12GetUserCountEii
#           GameWorld::GetUserCount(int, int) const
# range [0x086c49b2, 0x086c49ed]
086c49b2 +0x00:  push   %ebp
086c49b3 +0x01:  mov    %esp,%ebp
086c49b5 +0x03:  sub    $0x18,%esp
086c49b8 +0x06:  cmpl   $0x0,0xc(%ebp)
086c49bc +0x0a:  js     086c49c8 <+0x16>
086c49be +0x0c:  mov    &MAX_VILLAGE_NUM,%eax
086c49c3 +0x11:  cmp    %eax,0xc(%ebp)
086c49c6 +0x14:  jl     086c49cf <+0x1d>
086c49c8 +0x16:  mov    $0x0,%eax
086c49cd +0x1b:  jmp    086c49ec <+0x3a>
086c49cf +0x1d:  mov    0x8(%ebp),%eax
086c49d2 +0x20:  mov    0x1c(%eax),%edx
086c49d5 +0x23:  mov    0xc(%ebp),%eax
086c49d8 +0x26:  imul   $0x34,%eax,%eax
086c49db +0x29:  add    %eax,%edx
086c49dd +0x2b:  mov    0x10(%ebp),%eax
086c49e0 +0x2e:  mov    %eax,0x4(%esp)
086c49e4 +0x32:  mov    %edx,(%esp)
086c49e7 +0x35:  call   086c3d10 <_ZNK7Village12GetUserCountEi>  ; Village::GetUserCount(int) const
086c49ec +0x3a:  leave
086c49ed +0x3b:  ret
```

## 反编译 C

```c
// GameWorld::GetUserCount @ 0x86c49b2

/* GameWorld::GetUserCount(int, int) const */

undefined4 __thiscall GameWorld::GetUserCount(GameWorld *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (MAX_VILLAGE_NUM <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = Village::GetUserCount((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
  }
  return uVar1;
}
```

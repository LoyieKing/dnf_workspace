# GetUserCount

`_ZNK7Village12GetUserCountEi`

`Village::GetUserCount(int) const`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c3d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3d10  _ZNK7Village12GetUserCountEi
#           Village::GetUserCount(int) const
# range [0x086c3d10, 0x086c3d49]
086c3d10 +0x00:  push   %ebp
086c3d11 +0x01:  mov    %esp,%ebp
086c3d13 +0x03:  sub    $0x18,%esp
086c3d16 +0x06:  cmpl   $0x0,0xc(%ebp)
086c3d1a +0x0a:  js     086c3d27 <+0x17>
086c3d1c +0x0c:  mov    0x8(%ebp),%eax
086c3d1f +0x0f:  mov    0x24(%eax),%eax
086c3d22 +0x12:  cmp    0xc(%ebp),%eax
086c3d25 +0x15:  jg     086c3d2e <+0x1e>
086c3d27 +0x17:  mov    $0x0,%eax
086c3d2c +0x1c:  jmp    086c3d48 <+0x38>
086c3d2e +0x1e:  mov    0x8(%ebp),%eax
086c3d31 +0x21:  mov    0x28(%eax),%edx
086c3d34 +0x24:  mov    0xc(%ebp),%eax
086c3d37 +0x27:  imul   $0x98,%eax,%eax
086c3d3d +0x2d:  lea    (%edx,%eax,1),%eax
086c3d40 +0x30:  mov    %eax,(%esp)
086c3d43 +0x33:  call   086c31f2 <_ZNK4Area12GetUserCountEv>  ; Area::GetUserCount() const
086c3d48 +0x38:  leave
086c3d49 +0x39:  ret
```

## 反编译 C

```c
// Village::GetUserCount @ 0x86c3d10

/* Village::GetUserCount(int) const */

undefined4 __thiscall Village::GetUserCount(Village *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = Area::GetUserCount();
  }
  return uVar1;
}
```

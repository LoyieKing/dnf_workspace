# _AssignTempKey

`_ZN8WongWork14CAvatarItemMgr14_AssignTempKeyEv`

`WongWork::CAvatarItemMgr::_AssignTempKey()`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9e02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9e02  _ZN8WongWork14CAvatarItemMgr14_AssignTempKeyEv
#           WongWork::CAvatarItemMgr::_AssignTempKey()
# range [0x082f9e02, 0x082f9e4b]
082f9e02 +0x00:  push   %ebp
082f9e03 +0x01:  mov    %esp,%ebp
082f9e05 +0x03:  sub    $0x28,%esp
082f9e08 +0x06:  mov    0x8(%ebp),%eax
082f9e0b +0x09:  mov    0x30(%eax),%eax
082f9e0e +0x0c:  cmp    $0x7fffffff,%eax
082f9e13 +0x11:  jne    082f9e1f <+0x1d>
082f9e15 +0x13:  mov    0x8(%ebp),%eax
082f9e18 +0x16:  movl   $0x0,0x30(%eax)
082f9e1f +0x1d:  mov    0x8(%ebp),%eax
082f9e22 +0x20:  mov    0x30(%eax),%eax
082f9e25 +0x23:  lea    0x1(%eax),%edx
082f9e28 +0x26:  mov    0x8(%ebp),%eax
082f9e2b +0x29:  mov    %edx,0x30(%eax)
082f9e2e +0x2c:  mov    0x8(%ebp),%eax
082f9e31 +0x2f:  mov    0x30(%eax),%eax
082f9e34 +0x32:  mov    %eax,-0xc(%ebp)
082f9e37 +0x35:  mov    -0xc(%ebp),%eax
082f9e3a +0x38:  mov    %eax,0x4(%esp)
082f9e3e +0x3c:  mov    0x8(%ebp),%eax
082f9e41 +0x3f:  mov    %eax,(%esp)
082f9e44 +0x42:  call   082fa3b2 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1e4>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1e4
082f9e49 +0x47:  leave
082f9e4a +0x48:  ret
082f9e4b +0x49:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::_AssignTempKey @ 0x82f9e02

/* WongWork::CAvatarItemMgr::_AssignTempKey() */

void __thiscall WongWork::CAvatarItemMgr::_AssignTempKey(CAvatarItemMgr *this)

{
  if (*(int *)(this + 0x30) == 0x7fffffff) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  _MakeTempKey(this,*(int *)(this + 0x30));
  return;
}
```

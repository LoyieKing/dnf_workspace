# getNextUID

`_ZN12CGameManager10getNextUIDEv`

`CGameManager::getNextUID()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x0829424c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829424c  _ZN12CGameManager10getNextUIDEv
#           CGameManager::getNextUID()
# range [0x0829424c, 0x08294295]
0829424c +0x00:  push   %ebp
0829424d +0x01:  mov    %esp,%ebp
0829424f +0x03:  sub    $0x10,%esp
08294252 +0x06:  mov    0x8(%ebp),%eax
08294255 +0x09:  movzwl 0x18(%eax),%eax
08294259 +0x0d:  lea    0x1(%eax),%edx
0829425c +0x10:  mov    0x8(%ebp),%eax
0829425f +0x13:  mov    %dx,0x18(%eax)
08294263 +0x17:  mov    0x8(%ebp),%eax
08294266 +0x1a:  movzwl 0x18(%eax),%eax
0829426a +0x1e:  mov    %ax,-0x2(%ebp)
0829426e +0x22:  mov    0x8(%ebp),%eax
08294271 +0x25:  movzwl 0x18(%eax),%eax
08294275 +0x29:  cmp    $0x7fff,%ax
08294279 +0x2d:  je     08294287 <+0x3b>
0829427b +0x2f:  mov    0x8(%ebp),%eax
0829427e +0x32:  movzwl 0x18(%eax),%eax
08294282 +0x36:  test   %ax,%ax
08294285 +0x39:  jns    08294290 <+0x44>
08294287 +0x3b:  mov    0x8(%ebp),%eax
0829428a +0x3e:  movw   $0x0,0x18(%eax)
08294290 +0x44:  movzwl -0x2(%ebp),%eax
08294294 +0x48:  leave
08294295 +0x49:  ret
```

## 反编译 C

```c
// CGameManager::getNextUID @ 0x829424c

/* CGameManager::getNextUID() */

undefined2 __thiscall CGameManager::getNextUID(CGameManager *this)

{
  undefined2 uVar1;
  
  *(short *)(this + 0x18) = *(short *)(this + 0x18) + 1;
  uVar1 = *(undefined2 *)(this + 0x18);
  if ((*(short *)(this + 0x18) == 0x7fff) || (*(short *)(this + 0x18) < 0)) {
    *(undefined2 *)(this + 0x18) = 0;
  }
  return uVar1;
}
```

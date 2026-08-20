# resetBlueMarble

`_ZN10BlueMarble15resetBlueMarbleEv`

`BlueMarble::resetBlueMarble()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6d48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6d48  _ZN10BlueMarble15resetBlueMarbleEv
#           BlueMarble::resetBlueMarble()
# range [0x080d6d48, 0x080d6d7b]
080d6d48 +0x00:  push   %ebp
080d6d49 +0x01:  mov    %esp,%ebp
080d6d4b +0x03:  sub    $0x18,%esp
080d6d4e +0x06:  mov    0x8(%ebp),%eax
080d6d51 +0x09:  movl   $0x0,0x18(%eax)
080d6d58 +0x10:  mov    0x8(%ebp),%eax
080d6d5b +0x13:  movl   $0x0,0x1c(%eax)
080d6d62 +0x1a:  mov    0x8(%ebp),%eax
080d6d65 +0x1d:  add    $0x20,%eax
080d6d68 +0x20:  mov    %eax,(%esp)
080d6d6b +0x23:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
080d6d70 +0x28:  mov    0x8(%ebp),%eax
080d6d73 +0x2b:  movl   $0x0,0x3c(%eax)
080d6d7a +0x32:  leave
080d6d7b +0x33:  ret
```

## 反编译 C

```c
// BlueMarble::resetBlueMarble @ 0x80d6d48

/* BlueMarble::resetBlueMarble() */

void __thiscall BlueMarble::resetBlueMarble(BlueMarble *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}
```

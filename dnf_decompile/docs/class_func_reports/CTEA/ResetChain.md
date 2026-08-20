# ResetChain

`_ZN4CTEA10ResetChainEv`

`CTEA::ResetChain()`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c35a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c35a8  _ZN4CTEA10ResetChainEv
#           CTEA::ResetChain()
# range [0x080c35a8, 0x080c35eb]
080c35a8 +0x00:  push   %ebp
080c35a9 +0x01:  mov    %esp,%ebp
080c35ab +0x03:  sub    $0x18,%esp
080c35ae +0x06:  mov    0x8(%ebp),%eax
080c35b1 +0x09:  movzbl 0x4(%eax),%eax
080c35b5 +0x0d:  xor    $0x1,%eax
080c35b8 +0x10:  test   %al,%al
080c35ba +0x12:  je     080c35c3 <+0x1b>
080c35bc +0x14:  mov    $0x70000005,%eax
080c35c1 +0x19:  jmp    080c35ea <+0x42>
080c35c3 +0x1b:  mov    0x8(%ebp),%eax
080c35c6 +0x1e:  mov    0x8(%eax),%eax
080c35c9 +0x21:  mov    0x8(%ebp),%edx
080c35cc +0x24:  lea    0x38(%edx),%ecx
080c35cf +0x27:  mov    0x8(%ebp),%edx
080c35d2 +0x2a:  add    $0x40,%edx
080c35d5 +0x2d:  mov    %eax,0x8(%esp)
080c35d9 +0x31:  mov    %ecx,0x4(%esp)
080c35dd +0x35:  mov    %edx,(%esp)
080c35e0 +0x38:  call   0807d8a0 <_init+0x198>
080c35e5 +0x3d:  mov    $0x6fffffff,%eax
080c35ea +0x42:  leave
080c35eb +0x43:  ret
```

## 反编译 C

```c
// CTEA::ResetChain @ 0x80c35a8

/* CTEA::ResetChain() */

undefined4 __thiscall CTEA::ResetChain(CTEA *this)

{
  undefined4 uVar1;
  
  if (this[4] == (CTEA)0x1) {
    memcpy(this + 0x40,this + 0x38,*(size_t *)(this + 8));
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```

# RegisterNamedKill

`_ZN16CKillMonsterInfo17RegisterNamedKillEjh`

`CKillMonsterInfo::RegisterNamedKill(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d452` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d452  _ZN16CKillMonsterInfo17RegisterNamedKillEjh
#           CKillMonsterInfo::RegisterNamedKill(unsigned int, unsigned char)
# range [0x0854d452, 0x0854d48b]
0854d452 +0x00:  push   %ebp
0854d453 +0x01:  mov    %esp,%ebp
0854d455 +0x03:  sub    $0x38,%esp
0854d458 +0x06:  mov    0x10(%ebp),%eax
0854d45b +0x09:  mov    %al,-0xc(%ebp)
0854d45e +0x0c:  movzbl -0xc(%ebp),%eax
0854d462 +0x10:  mov    0x8(%ebp),%edx
0854d465 +0x13:  add    $0x20,%edx
0854d468 +0x16:  movl   $0x0,0x10(%esp)
0854d470 +0x1e:  mov    %eax,0xc(%esp)
0854d474 +0x22:  mov    0xc(%ebp),%eax
0854d477 +0x25:  mov    %eax,0x8(%esp)
0854d47b +0x29:  mov    %edx,0x4(%esp)
0854d47f +0x2d:  mov    0x8(%ebp),%eax
0854d482 +0x30:  mov    %eax,(%esp)
0854d485 +0x33:  call   0854d24c <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb>  ; CKillMonsterInfo::RegisterMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, unsigned int, unsigned char, bool)
0854d48a +0x38:  leave
0854d48b +0x39:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::RegisterNamedKill @ 0x854d452

/* CKillMonsterInfo::RegisterNamedKill(unsigned int, unsigned char) */

void __thiscall
CKillMonsterInfo::RegisterNamedKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  RegisterMonsterKill(this,(map *)(this + 0x20),param_1,param_2,false);
  return;
}
```

# RegisterAPCBossKill

`_ZN16CKillMonsterInfo19RegisterAPCBossKillEjh`

`CKillMonsterInfo::RegisterAPCBossKill(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d48c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d48c  _ZN16CKillMonsterInfo19RegisterAPCBossKillEjh
#           CKillMonsterInfo::RegisterAPCBossKill(unsigned int, unsigned char)
# range [0x0854d48c, 0x0854d4c5]
0854d48c +0x00:  push   %ebp
0854d48d +0x01:  mov    %esp,%ebp
0854d48f +0x03:  sub    $0x38,%esp
0854d492 +0x06:  mov    0x10(%ebp),%eax
0854d495 +0x09:  mov    %al,-0xc(%ebp)
0854d498 +0x0c:  movzbl -0xc(%ebp),%eax
0854d49c +0x10:  mov    0x8(%ebp),%edx
0854d49f +0x13:  add    $0x38,%edx
0854d4a2 +0x16:  movl   $0x1,0x10(%esp)
0854d4aa +0x1e:  mov    %eax,0xc(%esp)
0854d4ae +0x22:  mov    0xc(%ebp),%eax
0854d4b1 +0x25:  mov    %eax,0x8(%esp)
0854d4b5 +0x29:  mov    %edx,0x4(%esp)
0854d4b9 +0x2d:  mov    0x8(%ebp),%eax
0854d4bc +0x30:  mov    %eax,(%esp)
0854d4bf +0x33:  call   0854d24c <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb>  ; CKillMonsterInfo::RegisterMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, unsigned int, unsigned char, bool)
0854d4c4 +0x38:  leave
0854d4c5 +0x39:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::RegisterAPCBossKill @ 0x854d48c

/* CKillMonsterInfo::RegisterAPCBossKill(unsigned int, unsigned char) */

void __thiscall
CKillMonsterInfo::RegisterAPCBossKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  RegisterMonsterKill(this,(map *)(this + 0x38),param_1,param_2,true);
  return;
}
```

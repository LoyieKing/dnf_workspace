# CheckBossKill

`_ZN16CKillMonsterInfo13CheckBossKillEjh`

`CKillMonsterInfo::CheckBossKill(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d184` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d184  _ZN16CKillMonsterInfo13CheckBossKillEjh
#           CKillMonsterInfo::CheckBossKill(unsigned int, unsigned char)
# range [0x0854d184, 0x0854d1b5]
0854d184 +0x00:  push   %ebp
0854d185 +0x01:  mov    %esp,%ebp
0854d187 +0x03:  sub    $0x28,%esp
0854d18a +0x06:  mov    0x10(%ebp),%eax
0854d18d +0x09:  mov    %al,-0xc(%ebp)
0854d190 +0x0c:  movzbl -0xc(%ebp),%eax
0854d194 +0x10:  mov    0x8(%ebp),%edx
0854d197 +0x13:  add    $0x8,%edx
0854d19a +0x16:  mov    %eax,0xc(%esp)
0854d19e +0x1a:  mov    0xc(%ebp),%eax
0854d1a1 +0x1d:  mov    %eax,0x8(%esp)
0854d1a5 +0x21:  mov    %edx,0x4(%esp)
0854d1a9 +0x25:  mov    0x8(%ebp),%eax
0854d1ac +0x28:  mov    %eax,(%esp)
0854d1af +0x2b:  call   0854d0ea <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh>  ; CKillMonsterInfo::CheckMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, unsigned int, unsigned char)
0854d1b4 +0x30:  leave
0854d1b5 +0x31:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::CheckBossKill @ 0x854d184

/* CKillMonsterInfo::CheckBossKill(unsigned int, unsigned char) */

void __thiscall CKillMonsterInfo::CheckBossKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  CheckMonsterKill(this,(map *)(this + 8),param_1,param_2);
  return;
}
```

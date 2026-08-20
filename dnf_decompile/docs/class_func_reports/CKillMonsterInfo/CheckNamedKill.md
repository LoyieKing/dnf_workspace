# CheckNamedKill

`_ZN16CKillMonsterInfo14CheckNamedKillEjh`

`CKillMonsterInfo::CheckNamedKill(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d1b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d1b6  _ZN16CKillMonsterInfo14CheckNamedKillEjh
#           CKillMonsterInfo::CheckNamedKill(unsigned int, unsigned char)
# range [0x0854d1b6, 0x0854d1e7]
0854d1b6 +0x00:  push   %ebp
0854d1b7 +0x01:  mov    %esp,%ebp
0854d1b9 +0x03:  sub    $0x28,%esp
0854d1bc +0x06:  mov    0x10(%ebp),%eax
0854d1bf +0x09:  mov    %al,-0xc(%ebp)
0854d1c2 +0x0c:  movzbl -0xc(%ebp),%eax
0854d1c6 +0x10:  mov    0x8(%ebp),%edx
0854d1c9 +0x13:  add    $0x20,%edx
0854d1cc +0x16:  mov    %eax,0xc(%esp)
0854d1d0 +0x1a:  mov    0xc(%ebp),%eax
0854d1d3 +0x1d:  mov    %eax,0x8(%esp)
0854d1d7 +0x21:  mov    %edx,0x4(%esp)
0854d1db +0x25:  mov    0x8(%ebp),%eax
0854d1de +0x28:  mov    %eax,(%esp)
0854d1e1 +0x2b:  call   0854d0ea <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh>  ; CKillMonsterInfo::CheckMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, unsigned int, unsigned char)
0854d1e6 +0x30:  leave
0854d1e7 +0x31:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::CheckNamedKill @ 0x854d1b6

/* CKillMonsterInfo::CheckNamedKill(unsigned int, unsigned char) */

void __thiscall CKillMonsterInfo::CheckNamedKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  CheckMonsterKill(this,(map *)(this + 0x20),param_1,param_2);
  return;
}
```

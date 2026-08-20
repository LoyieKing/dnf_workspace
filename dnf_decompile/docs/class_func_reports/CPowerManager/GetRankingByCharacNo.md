# GetRankingByCharacNo

`_ZN13CPowerManager20GetRankingByCharacNoEj`

`CPowerManager::GetRankingByCharacNo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847eba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847eba0  _ZN13CPowerManager20GetRankingByCharacNoEj
#           CPowerManager::GetRankingByCharacNo(unsigned int)
# range [0x0847eba0, 0x0847ebeb]
0847eba0 +0x00:  push   %ebp
0847eba1 +0x01:  mov    %esp,%ebp
0847eba3 +0x03:  sub    $0x10,%esp
0847eba6 +0x06:  movl   $0x0,-0x4(%ebp)
0847ebad +0x0d:  jmp    0847ebd8 <+0x38>
0847ebaf +0x0f:  mov    -0x4(%ebp),%eax
0847ebb2 +0x12:  mov    0x8(%ebp),%edx
0847ebb5 +0x15:  shl    $0x2,%eax
0847ebb8 +0x18:  mov    %eax,%ecx
0847ebba +0x1a:  shl    $0x5,%ecx
0847ebbd +0x1d:  add    %ecx,%eax
0847ebbf +0x1f:  lea    (%edx,%eax,1),%eax
0847ebc2 +0x22:  add    $0x2c,%eax
0847ebc5 +0x25:  mov    (%eax),%eax
0847ebc7 +0x27:  cmp    0xc(%ebp),%eax
0847ebca +0x2a:  jne    0847ebd4 <+0x34>
0847ebcc +0x2c:  mov    -0x4(%ebp),%eax
0847ebcf +0x2f:  add    $0x1,%eax
0847ebd2 +0x32:  jmp    0847ebea <+0x4a>
0847ebd4 +0x34:  addl   $0x1,-0x4(%ebp)
0847ebd8 +0x38:  mov    -0x4(%ebp),%eax
0847ebdb +0x3b:  cmp    $0x2,%eax
0847ebde +0x3e:  setbe  %al
0847ebe1 +0x41:  test   %al,%al
0847ebe3 +0x43:  jne    0847ebaf <+0xf>
0847ebe5 +0x45:  mov    $0x0,%eax
0847ebea +0x4a:  leave
0847ebeb +0x4b:  ret
```

## 反编译 C

```c
// CPowerManager::GetRankingByCharacNo @ 0x847eba0

/* CPowerManager::GetRankingByCharacNo(unsigned int) */

int __thiscall CPowerManager::GetRankingByCharacNo(CPowerManager *this,uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0;
    }
    if (*(uint *)(this + local_8 * 0x84 + 0x2c) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8 + 1;
}
```

# GetDungeonDifficultyFlag

`_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh`

`CKillMonsterInfo::GetDungeonDifficultyFlag(unsigned char)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d21a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d21a  _ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh
#           CKillMonsterInfo::GetDungeonDifficultyFlag(unsigned char)
# range [0x0854d21a, 0x0854d24b]
0854d21a +0x00:  push   %ebp
0854d21b +0x01:  mov    %esp,%ebp
0854d21d +0x03:  push   %ebx
0854d21e +0x04:  sub    $0x4,%esp
0854d221 +0x07:  mov    0xc(%ebp),%eax
0854d224 +0x0a:  mov    %al,-0x8(%ebp)
0854d227 +0x0d:  cmpb   $0x4,-0x8(%ebp)
0854d22b +0x11:  jbe    0854d234 <+0x1a>
0854d22d +0x13:  mov    $0x0,%eax
0854d232 +0x18:  jmp    0854d245 <+0x2b>
0854d234 +0x1a:  movzbl -0x8(%ebp),%eax
0854d238 +0x1e:  mov    $0x1,%edx
0854d23d +0x23:  mov    %edx,%ebx
0854d23f +0x25:  mov    %eax,%ecx
0854d241 +0x27:  shl    %cl,%ebx
0854d243 +0x29:  mov    %ebx,%eax
0854d245 +0x2b:  add    $0x4,%esp
0854d248 +0x2e:  pop    %ebx
0854d249 +0x2f:  pop    %ebp
0854d24a +0x30:  ret
0854d24b +0x31:  nop
```

## 反编译 C

```c
// CKillMonsterInfo::GetDungeonDifficultyFlag @ 0x854d21a

/* CKillMonsterInfo::GetDungeonDifficultyFlag(unsigned char) */

int __thiscall CKillMonsterInfo::GetDungeonDifficultyFlag(CKillMonsterInfo *this,uchar param_1)

{
  int iVar1;
  
  if (param_1 < 5) {
    iVar1 = 1 << (param_1 & 0x1f);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
```

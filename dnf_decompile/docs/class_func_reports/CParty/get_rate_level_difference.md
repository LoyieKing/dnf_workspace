# get_rate_level_difference

`_ZN6CParty25get_rate_level_differenceEv`

`CParty::get_rate_level_difference()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b59ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b59ca  _ZN6CParty25get_rate_level_differenceEv
#           CParty::get_rate_level_difference()
# range [0x085b59ca, 0x085b5a4b]
085b59ca +0x00:  push   %ebp
085b59cb +0x01:  mov    %esp,%ebp
085b59cd +0x03:  push   %ebx
085b59ce +0x04:  sub    $0x24,%esp
085b59d1 +0x07:  mov    0x8(%ebp),%eax
085b59d4 +0x0a:  mov    0xcac(%eax),%eax
085b59da +0x10:  test   %eax,%eax
085b59dc +0x12:  jne    085b59e5 <+0x1b>
085b59de +0x14:  mov    $0x0,%eax
085b59e3 +0x19:  jmp    085b5a46 <+0x7c>
085b59e5 +0x1b:  mov    0x8(%ebp),%eax
085b59e8 +0x1e:  mov    0xcac(%eax),%eax
085b59ee +0x24:  mov    %eax,(%esp)
085b59f1 +0x27:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085b59f6 +0x2c:  mov    %eax,%ebx
085b59f8 +0x2e:  mov    0x8(%ebp),%eax
085b59fb +0x31:  mov    %eax,(%esp)
085b59fe +0x34:  call   085b60be <_ZN6CParty17getMemberMaxLevelEv>  ; CParty::getMemberMaxLevel()
085b5a03 +0x39:  mov    %ebx,%edx
085b5a05 +0x3b:  sub    %eax,%edx
085b5a07 +0x3d:  mov    %edx,%eax
085b5a09 +0x3f:  sar    $0x1f,%eax
085b5a0c +0x42:  xor    %eax,%edx
085b5a0e +0x44:  mov    %edx,-0xc(%ebp)
085b5a11 +0x47:  sub    %eax,-0xc(%ebp)
085b5a14 +0x4a:  cmpl   $0xa,-0xc(%ebp)
085b5a18 +0x4e:  jg     085b5a21 <+0x57>
085b5a1a +0x50:  mov    $0x1,%eax
085b5a1f +0x55:  jmp    085b5a46 <+0x7c>
085b5a21 +0x57:  cmpl   $0xa,-0xc(%ebp)
085b5a25 +0x5b:  jle    085b5a34 <+0x6a>
085b5a27 +0x5d:  cmpl   $0x13,-0xc(%ebp)
085b5a2b +0x61:  jg     085b5a34 <+0x6a>
085b5a2d +0x63:  mov    $0x2,%eax
085b5a32 +0x68:  jmp    085b5a46 <+0x7c>
085b5a34 +0x6a:  cmpl   $0x13,-0xc(%ebp)
085b5a38 +0x6e:  jle    085b5a41 <+0x77>
085b5a3a +0x70:  mov    $0x3,%eax
085b5a3f +0x75:  jmp    085b5a46 <+0x7c>
085b5a41 +0x77:  mov    $0x0,%eax
085b5a46 +0x7c:  add    $0x24,%esp
085b5a49 +0x7f:  pop    %ebx
085b5a4a +0x80:  pop    %ebp
085b5a4b +0x81:  ret
```

## 反编译 C

```c
// CParty::get_rate_level_difference @ 0x85b59ca

/* CParty::get_rate_level_difference() */

undefined4 __thiscall CParty::get_rate_level_difference(CParty *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(this + 0xcac) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
    iVar3 = getMemberMaxLevel(this);
    uVar4 = iVar2 - iVar3 >> 0x1f;
    iVar2 = (iVar2 - iVar3 ^ uVar4) - uVar4;
    if (iVar2 < 0xb) {
      uVar1 = 1;
    }
    else if ((iVar2 < 0xb) || (0x13 < iVar2)) {
      if (iVar2 < 0x14) {
        uVar1 = 0;
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}
```

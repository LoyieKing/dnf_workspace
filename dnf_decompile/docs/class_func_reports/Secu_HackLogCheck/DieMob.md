# DieMob

`_ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE`

`Secu_HackLogCheck::DieMob(MSG_MONSTER_DIE const*)`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheck` | `0x0827a81c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a81c  _ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE
#           Secu_HackLogCheck::DieMob(MSG_MONSTER_DIE const*)
# range [0x0827a81c, 0x0827a896]
0827a81c +0x00:  push   %ebp
0827a81d +0x01:  mov    %esp,%ebp
0827a81f +0x03:  sub    $0x18,%esp
0827a822 +0x06:  mov    0xc(%ebp),%eax
0827a825 +0x09:  movzwl 0xf(%eax),%eax
0827a829 +0x0d:  cmp    $0xffff,%ax
0827a82d +0x11:  je     0827a895 <+0x79>
0827a82f +0x13:  mov    0x8(%ebp),%eax
0827a832 +0x16:  mov    0xc(%ebp),%edx
0827a835 +0x19:  mov    %edx,0x4(%esp)
0827a839 +0x1d:  mov    %eax,(%esp)
0827a83c +0x20:  call   0827abfa <_ZN17Secu_MonsterCheck14SetMonsterInfoEPK15MSG_MONSTER_DIE>  ; Secu_MonsterCheck::SetMonsterInfo(MSG_MONSTER_DIE const*)
0827a841 +0x25:  mov    0x8(%ebp),%eax
0827a844 +0x28:  movzbl 0x38(%eax),%eax
0827a848 +0x2c:  test   %al,%al
0827a84a +0x2e:  je     0827a85d <+0x41>
0827a84c +0x30:  mov    0x8(%ebp),%eax
0827a84f +0x33:  mov    %eax,(%esp)
0827a852 +0x36:  call   0827ad98 <_ZN17Secu_MonsterCheck8Check223Ev>  ; Secu_MonsterCheck::Check223()
0827a857 +0x3b:  mov    0x8(%ebp),%edx
0827a85a +0x3e:  mov    %al,0x38(%edx)
0827a85d +0x41:  mov    0x8(%ebp),%eax
0827a860 +0x44:  movzbl 0x39(%eax),%eax
0827a864 +0x48:  test   %al,%al
0827a866 +0x4a:  je     0827a879 <+0x5d>
0827a868 +0x4c:  mov    0x8(%ebp),%eax
0827a86b +0x4f:  mov    %eax,(%esp)
0827a86e +0x52:  call   0827af78 <_ZN17Secu_MonsterCheck8Check224Ev>  ; Secu_MonsterCheck::Check224()
0827a873 +0x57:  mov    0x8(%ebp),%edx
0827a876 +0x5a:  mov    %al,0x39(%edx)
0827a879 +0x5d:  mov    0x8(%ebp),%eax
0827a87c +0x60:  movzbl 0x3a(%eax),%eax
0827a880 +0x64:  test   %al,%al
0827a882 +0x66:  je     0827a895 <+0x79>
0827a884 +0x68:  mov    0x8(%ebp),%eax
0827a887 +0x6b:  mov    %eax,(%esp)
0827a88a +0x6e:  call   0827b100 <_ZN17Secu_MonsterCheck8Check225Ev>  ; Secu_MonsterCheck::Check225()
0827a88f +0x73:  mov    0x8(%ebp),%edx
0827a892 +0x76:  mov    %al,0x3a(%edx)
0827a895 +0x79:  leave
0827a896 +0x7a:  ret
```

## 反编译 C

```c
// Secu_HackLogCheck::DieMob @ 0x827a81c

/* Secu_HackLogCheck::DieMob(MSG_MONSTER_DIE const*) */

void __thiscall Secu_HackLogCheck::DieMob(Secu_HackLogCheck *this,MSG_MONSTER_DIE *param_1)

{
  Secu_HackLogCheck SVar1;
  
  if (*(short *)(param_1 + 0xf) != -1) {
    Secu_MonsterCheck::SetMonsterInfo((Secu_MonsterCheck *)this,param_1);
    if (this[0x38] != (Secu_HackLogCheck)0x0) {
      SVar1 = (Secu_HackLogCheck)Secu_MonsterCheck::Check223((Secu_MonsterCheck *)this);
      this[0x38] = SVar1;
    }
    if (this[0x39] != (Secu_HackLogCheck)0x0) {
      SVar1 = (Secu_HackLogCheck)Secu_MonsterCheck::Check224((Secu_MonsterCheck *)this);
      this[0x39] = SVar1;
    }
    if (this[0x3a] != (Secu_HackLogCheck)0x0) {
      SVar1 = (Secu_HackLogCheck)Secu_MonsterCheck::Check225((Secu_MonsterCheck *)this);
      this[0x3a] = SVar1;
    }
  }
  return;
}
```

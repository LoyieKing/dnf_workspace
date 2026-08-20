# kill_blood_monster

`_ZN6CParty18kill_blood_monsterEP5CUseriPt`

`CParty::kill_blood_monster(CUser*, int, unsigned short*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a3b6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a3b6a  _ZN6CParty18kill_blood_monsterEP5CUseriPt
#           CParty::kill_blood_monster(CUser*, int, unsigned short*)
# range [0x085a3b6a, 0x085a3b97]
085a3b6a +0x00:  push   %ebp
085a3b6b +0x01:  mov    %esp,%ebp
085a3b6d +0x03:  sub    $0x18,%esp
085a3b70 +0x06:  mov    0x8(%ebp),%eax
085a3b73 +0x09:  lea    0xb24(%eax),%edx
085a3b79 +0x0f:  mov    0x14(%ebp),%eax
085a3b7c +0x12:  mov    %eax,0xc(%esp)
085a3b80 +0x16:  mov    0x10(%ebp),%eax
085a3b83 +0x19:  mov    %eax,0x8(%esp)
085a3b87 +0x1d:  mov    0xc(%ebp),%eax
085a3b8a +0x20:  mov    %eax,0x4(%esp)
085a3b8e +0x24:  mov    %edx,(%esp)
085a3b91 +0x27:  call   0830d58c <_ZN13CBattle_Field18kill_blood_monsterEP5CUseriPt>  ; CBattle_Field::kill_blood_monster(CUser*, int, unsigned short*)
085a3b96 +0x2c:  leave
085a3b97 +0x2d:  ret
```

## 反编译 C

```c
// CParty::kill_blood_monster @ 0x85a3b6a

/* CParty::kill_blood_monster(CUser*, int, unsigned short*) */

void __thiscall CParty::kill_blood_monster(CParty *this,CUser *param_1,int param_2,ushort *param_3)

{
  CBattle_Field::kill_blood_monster((CBattle_Field *)(this + 0xb24),param_1,param_2,param_3);
  return;
}
```

# GetAvatarBonus

`_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv`

`CHARAC_LOAD_MERCENARY::GetAvatarBonus() const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2c94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2c94  _ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv
#           CHARAC_LOAD_MERCENARY::GetAvatarBonus() const
# range [0x081b2c94, 0x081b2d09]
081b2c94 +0x00:  push   %ebp
081b2c95 +0x01:  mov    %esp,%ebp
081b2c97 +0x03:  sub    $0x38,%esp
081b2c9a +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2c9f +0x0b:  add    $0xa8fc,%eax
081b2ca4 +0x10:  mov    %eax,-0xc(%ebp)
081b2ca7 +0x13:  mov    -0xc(%ebp),%eax
081b2caa +0x16:  mov    %eax,(%esp)
081b2cad +0x19:  call   081b4868 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xdc>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xdc
081b2cb2 +0x1e:  test   %al,%al
081b2cb4 +0x20:  jne    081b2cce <+0x3a>
081b2cb6 +0x22:  mov    -0xc(%ebp),%eax
081b2cb9 +0x25:  mov    %eax,(%esp)
081b2cbc +0x28:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
081b2cc1 +0x2d:  mov    %eax,%edx
081b2cc3 +0x2f:  mov    0x8(%ebp),%eax
081b2cc6 +0x32:  movzbl 0x32(%eax),%eax
081b2cca +0x36:  cmp    %al,%dl
081b2ccc +0x38:  jge    081b2cd5 <+0x41>
081b2cce +0x3a:  mov    $0x1,%eax
081b2cd3 +0x3f:  jmp    081b2cda <+0x46>
081b2cd5 +0x41:  mov    $0x0,%eax
081b2cda +0x46:  test   %al,%al
081b2cdc +0x48:  je     081b2ce5 <+0x51>
081b2cde +0x4a:  mov    $0x0,%eax
081b2ce3 +0x4f:  jmp    081b2d01 <+0x6d>
081b2ce5 +0x51:  mov    0x8(%ebp),%eax
081b2ce8 +0x54:  movzbl 0x32(%eax),%eax
081b2cec +0x58:  movsbl %al,%eax
081b2cef +0x5b:  mov    %eax,0x4(%esp)
081b2cf3 +0x5f:  mov    -0xc(%ebp),%eax
081b2cf6 +0x62:  mov    %eax,(%esp)
081b2cf9 +0x65:  call   081b48c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x13c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x13c
081b2cfe +0x6a:  mov    0x4(%eax),%eax
081b2d01 +0x6d:  mov    %eax,-0x1c(%ebp)
081b2d04 +0x70:  flds   -0x1c(%ebp)
081b2d07 +0x73:  leave
081b2d08 +0x74:  ret
081b2d09 +0x75:  nop
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetAvatarBonus @ 0x81b2c94

/* CHARAC_LOAD_MERCENARY::GetAvatarBonus() const */

longdouble __thiscall CHARAC_LOAD_MERCENARY::GetAvatarBonus(CHARAC_LOAD_MERCENARY *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = G_CDataManager();
  cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
  if (cVar2 == '\0') {
    cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8fc));
    if ((char)this[0x32] <= cVar2) {
      bVar1 = false;
      goto LAB_081b2cda;
    }
  }
  bVar1 = true;
LAB_081b2cda:
  if (bVar1) {
    fVar4 = 0.0;
  }
  else {
    iVar3 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8fc),(int)(char)this[0x32]);
    fVar4 = *(float *)(iVar3 + 4);
  }
  return (longdouble)fVar4;
}
```

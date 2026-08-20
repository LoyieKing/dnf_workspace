# updateBlueMarbleEnterCount

`_ZN5CUser26updateBlueMarbleEnterCountEv`

`CUser::updateBlueMarbleEnterCount()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869106c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869106c  _ZN5CUser26updateBlueMarbleEnterCountEv
#           CUser::updateBlueMarbleEnterCount()
# range [0x0869106c, 0x086910a5]
0869106c +0x00:  push   %ebp
0869106d +0x01:  mov    %esp,%ebp
0869106f +0x03:  push   %ebx
08691070 +0x04:  sub    $0x14,%esp
08691073 +0x07:  mov    0x8(%ebp),%eax
08691076 +0x0a:  mov    %eax,(%esp)
08691079 +0x0d:  call   08690f42 <_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv>  ; CUserCharacInfo::getBlueMarbleEnterCount() const
0869107e +0x12:  movzbl %al,%ebx
08691081 +0x15:  movl   $0xffffffff,0x4(%esp)
08691089 +0x1d:  mov    0x8(%ebp),%eax
0869108c +0x20:  mov    %eax,(%esp)
0869108f +0x23:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08691094 +0x28:  mov    %ebx,0x4(%esp)
08691098 +0x2c:  mov    %eax,(%esp)
0869109b +0x2f:  call   0844884c <_ZN29DB_UpdateBlueMarbleEnterCount11makeRequestEjh>  ; DB_UpdateBlueMarbleEnterCount::makeRequest(unsigned int, unsigned char)
086910a0 +0x34:  add    $0x14,%esp
086910a3 +0x37:  pop    %ebx
086910a4 +0x38:  pop    %ebp
086910a5 +0x39:  ret
```

## 反编译 C

```c
// CUser::updateBlueMarbleEnterCount @ 0x869106c

/* CUser::updateBlueMarbleEnterCount() */

void __thiscall CUser::updateBlueMarbleEnterCount(CUser *this)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = CUserCharacInfo::getBlueMarbleEnterCount((CUserCharacInfo *)this);
  uVar2 = get_charac_no(this,-1);
  DB_UpdateBlueMarbleEnterCount::makeRequest(uVar2,uVar1);
  return;
}
```

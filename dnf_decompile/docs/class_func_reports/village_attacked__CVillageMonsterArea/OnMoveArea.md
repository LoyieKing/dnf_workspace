# OnMoveArea

`_ZN16village_attacked19CVillageMonsterArea10OnMoveAreaEP5CUser`

`village_attacked::CVillageMonsterArea::OnMoveArea(CUser*)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3abe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3abe  _ZN16village_attacked19CVillageMonsterArea10OnMoveAreaEP5CUser
#           village_attacked::CVillageMonsterArea::OnMoveArea(CUser*)
# range [0x086b3abe, 0x086b3ae9]
086b3abe +0x00:  push   %ebp
086b3abf +0x01:  mov    %esp,%ebp
086b3ac1 +0x03:  sub    $0x18,%esp
086b3ac4 +0x06:  mov    0x8(%ebp),%eax
086b3ac7 +0x09:  mov    %eax,(%esp)
086b3aca +0x0c:  call   086b5058 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x582>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x582
086b3acf +0x11:  test   %al,%al
086b3ad1 +0x13:  jne    086b3ae7 <+0x29>
086b3ad3 +0x15:  mov    0xc(%ebp),%eax
086b3ad6 +0x18:  mov    %eax,0x4(%esp)
086b3ada +0x1c:  mov    0x8(%ebp),%eax
086b3add +0x1f:  mov    %eax,(%esp)
086b3ae0 +0x22:  call   086b37fa <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser>  ; village_attacked::CVillageMonsterArea::SendVillageMonsterList(CUser*)
086b3ae5 +0x27:  jmp    086b3ae8 <+0x2a>
086b3ae7 +0x29:  nop
086b3ae8 +0x2a:  leave
086b3ae9 +0x2b:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::OnMoveArea @ 0x86b3abe

/* village_attacked::CVillageMonsterArea::OnMoveArea(CUser*) */

void __thiscall
village_attacked::CVillageMonsterArea::OnMoveArea(CVillageMonsterArea *this,CUser *param_1)

{
  char cVar1;
  
  cVar1 = std::
          map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
          ::empty((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
                   *)this);
  if (cVar1 == '\0') {
    SendVillageMonsterList(this,param_1);
  }
  return;
}
```

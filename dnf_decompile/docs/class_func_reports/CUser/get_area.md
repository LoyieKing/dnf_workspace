# get_area

`_ZN5CUser8get_areaEb`

`CUser::get_area(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086813be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086813be  _ZN5CUser8get_areaEb
#           CUser::get_area(bool)
# range [0x086813be, 0x0868148b]
086813be +0x00:  push   %ebp
086813bf +0x01:  mov    %esp,%ebp
086813c1 +0x03:  sub    $0x28,%esp
086813c4 +0x06:  mov    0xc(%ebp),%eax
086813c7 +0x09:  mov    %al,-0xc(%ebp)
086813ca +0x0c:  cmpb   $0x0,-0xc(%ebp)
086813ce +0x10:  je     08681405 <+0x47>
086813d0 +0x12:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086813d5 +0x17:  mov    %eax,(%esp)
086813d8 +0x1a:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
086813dd +0x1f:  test   %al,%al
086813df +0x21:  je     08681405 <+0x47>
086813e1 +0x23:  mov    0x8(%ebp),%eax
086813e4 +0x26:  mov    %eax,(%esp)
086813e7 +0x29:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086813ec +0x2e:  cmp    $0x2,%al
086813ee +0x30:  jne    08681405 <+0x47>
086813f0 +0x32:  mov    0x8(%ebp),%eax
086813f3 +0x35:  mov    0x8cfc0(%eax),%eax
086813f9 +0x3b:  cmp    $0x4,%eax
086813fc +0x3e:  jne    08681405 <+0x47>
086813fe +0x40:  mov    $0x1,%eax
08681403 +0x45:  jmp    0868140a <+0x4c>
08681405 +0x47:  mov    $0x0,%eax
0868140a +0x4c:  test   %al,%al
0868140c +0x4e:  je     08681419 <+0x5b>
0868140e +0x50:  mov    0x8(%ebp),%eax
08681411 +0x53:  mov    0x8cfc0(%eax),%eax
08681417 +0x59:  jmp    08681489 <+0xcb>
08681419 +0x5b:  cmpb   $0x0,-0xc(%ebp)
0868141d +0x5f:  je     08681435 <+0x77>
0868141f +0x61:  mov    0x8(%ebp),%eax
08681422 +0x64:  mov    %eax,(%esp)
08681425 +0x67:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0868142a +0x6c:  cmp    $0x8,%al
0868142c +0x6e:  jne    08681435 <+0x77>
0868142e +0x70:  mov    $0x1,%eax
08681433 +0x75:  jmp    0868143a <+0x7c>
08681435 +0x77:  mov    $0x0,%eax
0868143a +0x7c:  test   %al,%al
0868143c +0x7e:  je     08681480 <+0xc2>
0868143e +0x80:  mov    0x8(%ebp),%eax
08681441 +0x83:  mov    0x8cfc0(%eax),%eax
08681447 +0x89:  test   %eax,%eax
08681449 +0x8b:  je     08681475 <+0xb7>
0868144b +0x8d:  mov    0x8(%ebp),%eax
0868144e +0x90:  mov    0x8cfc0(%eax),%eax
08681454 +0x96:  cmp    $0x1,%eax
08681457 +0x99:  je     08681475 <+0xb7>
08681459 +0x9b:  mov    0x8(%ebp),%eax
0868145c +0x9e:  mov    0x8cfc0(%eax),%eax
08681462 +0xa4:  cmp    $0x2,%eax
08681465 +0xa7:  je     08681475 <+0xb7>
08681467 +0xa9:  mov    0x8(%ebp),%eax
0868146a +0xac:  mov    0x8cfc0(%eax),%eax
08681470 +0xb2:  cmp    $0x3,%eax
08681473 +0xb5:  jne    08681480 <+0xc2>
08681475 +0xb7:  mov    0x8(%ebp),%eax
08681478 +0xba:  mov    0x8cfc0(%eax),%eax
0868147e +0xc0:  jmp    08681489 <+0xcb>
08681480 +0xc2:  mov    0x8(%ebp),%eax
08681483 +0xc5:  mov    0x8cfbc(%eax),%eax
08681489 +0xcb:  leave
0868148a +0xcc:  ret
0868148b +0xcd:  nop
```

## 反编译 C

```c
// CUser::get_area @ 0x86813be

/* CUser::get_area(bool) */

undefined4 __thiscall CUser::get_area(CUser *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  undefined4 uVar3;
  
  if (param_1) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsSchoolPvPChannel(this_00);
    if (((cVar2 != '\0') &&
        (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this), cVar2 == '\x02')) &&
       (*(int *)(this + 0x8cfc0) == 4)) {
      bVar1 = true;
      goto LAB_0868140a;
    }
  }
  bVar1 = false;
LAB_0868140a:
  if (!bVar1) {
    if ((param_1) &&
       (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this), cVar2 == '\b')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) &&
       (((*(int *)(this + 0x8cfc0) == 0 || (*(int *)(this + 0x8cfc0) == 1)) ||
        ((*(int *)(this + 0x8cfc0) == 2 || (*(int *)(this + 0x8cfc0) == 3)))))) {
      uVar3 = *(undefined4 *)(this + 0x8cfc0);
    }
    else {
      uVar3 = *(undefined4 *)(this + 0x8cfbc);
    }
    return uVar3;
  }
  return *(undefined4 *)(this + 0x8cfc0);
}
```

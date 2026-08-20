# handleDieUser

`_ZN8WongWork10CBossTower13handleDieUserEP5CUser`

`WongWork::CBossTower::handleDieUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08143a62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08143a62  _ZN8WongWork10CBossTower13handleDieUserEP5CUser
#           WongWork::CBossTower::handleDieUser(CUser*)
# range [0x08143a62, 0x08143ae1]
08143a62 +0x00:  push   %ebp
08143a63 +0x01:  mov    %esp,%ebp
08143a65 +0x03:  sub    $0x18,%esp
08143a68 +0x06:  cmpl   $0x0,0xc(%ebp)
08143a6c +0x0a:  jne    08143a75 <+0x13>
08143a6e +0x0c:  mov    $0x0,%eax
08143a73 +0x11:  jmp    08143adf <+0x7d>
08143a75 +0x13:  mov    0x8(%ebp),%eax
08143a78 +0x16:  mov    0xc(%ebp),%edx
08143a7b +0x19:  mov    %edx,0x4(%esp)
08143a7f +0x1d:  mov    %eax,(%esp)
08143a82 +0x20:  call   081494a4 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser>  ; WongWork::CBossPlay::handleDieUser(CUser*)
08143a87 +0x25:  xor    $0x1,%eax
08143a8a +0x28:  test   %al,%al
08143a8c +0x2a:  je     08143a95 <+0x33>
08143a8e +0x2c:  mov    $0x0,%eax
08143a93 +0x31:  jmp    08143adf <+0x7d>
08143a95 +0x33:  mov    0x8(%ebp),%eax
08143a98 +0x36:  mov    (%eax),%eax
08143a9a +0x38:  add    $0x8,%eax
08143a9d +0x3b:  mov    (%eax),%edx
08143a9f +0x3d:  mov    0x8(%ebp),%eax
08143aa2 +0x40:  mov    %eax,(%esp)
08143aa5 +0x43:  call   *%edx
08143aa7 +0x45:  test   %al,%al
08143aa9 +0x47:  je     08143ada <+0x78>
08143aab +0x49:  mov    0x8(%ebp),%eax
08143aae +0x4c:  mov    %eax,(%esp)
08143ab1 +0x4f:  call   081440b2 <_ZN8WongWork10CBossTower13onFinishStageEv>  ; WongWork::CBossTower::onFinishStage()
08143ab6 +0x54:  mov    0x8(%ebp),%eax
08143ab9 +0x57:  movzbl 0xafc(%eax),%eax
08143ac0 +0x5e:  xor    $0x1,%eax
08143ac3 +0x61:  test   %al,%al
08143ac5 +0x63:  je     08143ada <+0x78>
08143ac7 +0x65:  movl   $0x0,0x4(%esp)
08143acf +0x6d:  mov    0x8(%ebp),%eax
08143ad2 +0x70:  mov    %eax,(%esp)
08143ad5 +0x73:  call   08142d24 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb>  ; WongWork::CBossTower::_onPrepareFinishTower(bool)
08143ada +0x78:  mov    $0x1,%eax
08143adf +0x7d:  leave
08143ae0 +0x7e:  ret
08143ae1 +0x7f:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::handleDieUser @ 0x8143a62

/* WongWork::CBossTower::handleDieUser(CUser*) */

undefined4 __thiscall WongWork::CBossTower::handleDieUser(CBossTower *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CBossPlay::handleDieUser((CBossPlay *)this,param_1);
    if (cVar1 == '\x01') {
      cVar1 = (**(code **)(*(int *)this + 8))(this);
      if (cVar1 != '\0') {
        onFinishStage(this);
        if (this[0xafc] != (CBossTower)0x1) {
          _onPrepareFinishTower(this,false);
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

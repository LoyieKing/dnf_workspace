# getCurCharacVill

`_ZNK15CUserCharacInfo16getCurCharacVillEv`

`CUserCharacInfo::getCurCharacVill() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645564` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645564  _ZNK15CUserCharacInfo16getCurCharacVillEv
#           CUserCharacInfo::getCurCharacVill() const
# range [0x08645564, 0x086455bb]
08645564 +0x00:  push   %ebp
08645565 +0x01:  mov    %esp,%ebp
08645567 +0x03:  sub    $0x18,%esp
0864556a +0x06:  mov    0x8(%ebp),%eax
0864556d +0x09:  mov    0x10(%eax),%eax
08645570 +0x0c:  test   %eax,%eax
08645572 +0x0e:  jne    0864557b <+0x17>
08645574 +0x10:  mov    $0x0,%eax
08645579 +0x15:  jmp    086455ba <+0x56>
0864557b +0x17:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08645580 +0x1c:  mov    %eax,(%esp)
08645583 +0x1f:  call   086977ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x400f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x400f
08645588 +0x24:  test   %al,%al
0864558a +0x26:  je     08645593 <+0x2f>
0864558c +0x28:  mov    $0xa,%eax
08645591 +0x2d:  jmp    086455ba <+0x56>
08645593 +0x2f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08645598 +0x34:  mov    %eax,(%esp)
0864559b +0x37:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
086455a0 +0x3c:  test   %al,%al
086455a2 +0x3e:  je     086455b0 <+0x4c>
086455a4 +0x40:  mov    0x8(%ebp),%eax
086455a7 +0x43:  mov    0x10(%eax),%eax
086455aa +0x46:  movzbl 0x23(%eax),%eax
086455ae +0x4a:  jmp    086455ba <+0x56>
086455b0 +0x4c:  mov    0x8(%ebp),%eax
086455b3 +0x4f:  mov    0x10(%eax),%eax
086455b6 +0x52:  movzbl 0x22(%eax),%eax
086455ba +0x56:  leave
086455bb +0x57:  ret
```

## 反编译 C

```c
// CUserCharacInfo::getCurCharacVill @ 0x8645564

/* CUserCharacInfo::getCurCharacVill() const */

undefined1 __thiscall CUserCharacInfo::getCurCharacVill(CUserCharacInfo *this)

{
  char cVar1;
  undefined1 uVar2;
  GameWorld *pGVar3;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPVillageMapChannel(pGVar3);
    if (cVar1 == '\0') {
      pGVar3 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsPVPChannel(pGVar3);
      if (cVar1 == '\0') {
        uVar2 = *(undefined1 *)(*(int *)(this + 0x10) + 0x22);
      }
      else {
        uVar2 = *(undefined1 *)(*(int *)(this + 0x10) + 0x23);
      }
    }
    else {
      uVar2 = 10;
    }
  }
  return uVar2;
}
```
